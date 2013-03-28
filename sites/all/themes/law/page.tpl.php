<div id="page-wrapper">
  <div id="page" class="clearfix">
    <div id="header-wrapper">
      <div id="site-header" class="clearfix container-12">
        <div id="branding" class="grid-8">
          <?php if(drupal_is_front_page()): ?>
  	        <h1><a href="<?php print $front_page; ?>"><?php print $site_name; ?></a></h1>
  	      <?php else: ?>
  	        <div id="logo"><a href="<?php print $front_page; ?>"><?php print $site_name; ?></a></div>
  	      <?php endif; ?>
        </div><!-- /#branding -->
        <div id="search" class="grid-4 clearfix">
          <?php if (!empty($page['search_box'])): ?>
            <?php print render($page['search_box']); ?>
          <?php endif; ?>
        </div><!-- /#search -->
      </div><!-- /#site-header -->
    </div>
    <?php if ($secondary_menu_links && !theme_get_setting('use_action_menu')): ?>
      <div id="secondary-menu-wrapper" class="clearfix">      	           
        <div id="secondary-navigation" class="container-12 clearfix">
          <div class="nav-wrapper grid-12">
          	<div id="law-backlink">
        		<a href="http://www.colorado.edu/law/" title="Colorado Law"><< Law School</a>
			</div> 
		  	<?php print $secondary_menu_links; ?>
          </div>
        </div>
      </div><!-- /#secondary-menu-wrapper -->
    <?php endif; ?>
    <?php if(!(empty($page['action_links']))): ?>
        <div id="action-links">
        <?php print render($page['action_links']); ?>
        </div>
    <?php endif; ?>
    <?php if ($main_menu_links): ?>
      <div id="main-menu-wrapper" class="clearfix">
        <div id="navigation" class="container-12 clearfix">
            <div class="nav-wrapper grid-12">
              <?php //print $main_menu_links; ?>
              <?php if (theme_get_setting('use_action_menu')): ?>
                <?php print $main_menu_links; ?>
              <?php endif; ?>
              <?php print theme('links__system_main_menu', 
                                  array('links' => $main_menu, 
                                  'attributes' => array(
                                    'id' => 'main-menu', 
                                    'class' => array(
                                      'main-menu', 
                                      'inline',
                                    )
                                  ), 
                                  'heading' => array(
                                        'text' => t('Main menu'),
                                        'level' => 'h2',
                                        'class' => array('element-invisible'),
                                    ),
                                  )); 
              ?>
            </div>
            <?php if(!(empty($page['quicklinks']))): ?>
        	<div id="quicklinks">
        	<?php print render($page['quicklinks']); ?>
        	</div>
			<?php endif; ?>
            </div>
      </div><!-- /#main-menu-wrapper -->
    <?php else: ?>
      <div id="no-main-menu"></div>  
    <?php endif; ?>
  
    <?php 
  
      // DETERMINE # OF COLUMNS TO SHOW AND ADD CSS CLASS
  
      if ( (!empty($page['sidebar_first'])) && (!empty($page['sidebar_second'])) ) {
  	    $content_class = "column-3";
      } else if ( (!empty($page['sidebar_first'])) && (empty($page['sidebar_second'])) ) {
  	    $content_class = "column-2-left";
      } else if ( (empty($page['sidebar_first'])) && (!empty($page['sidebar_second'])) ) {
  	    $content_class = "column-2-right";
      } else {
  	    $content_class = "column-1";
      }
    ?>
    
    <div id="main-wrapper" class="<?php print $content_class; ?>">
     
      <div id="main" class="clearfix container-12">
     
        <div id="alerts">
          <?php if(!empty($page['alerts'])) { print render($page['alerts']);  } ?>
        </div>

        <?php if(!empty($page['slider'])): ?>
          <div id="slider-wrapper">
            <div id="slider" class="container-12 clearfix">
             
                <?php print render($page['slider']); ?>
              
            </div>
          </div>
        <?php endif; ?> 
      
        <?php print $messages; ?>
        <?php print render($page['help']); ?>
        
        
      
        <?php
          // DETERMINE PULL CLASS FOR SIDEBAR_FIRST
          if(!empty($page['sidebar_second'])) {
      	    $pull_class = "pull-6";
          } else {
      	    $pull_class = "pull-9";
          }
          
          if(!empty($page['sidebar_first'])) {
      	    $push_class = "push-3";
          } else {
      	    $push_class = "";
          }
        ?>
    
  	    <div id="content" class="clearfix  <?php print ns('grid-12', $page['sidebar_first'], 3, $page['sidebar_second'], 3); ?> <?php print $push_class; ?>">
        
          <?php if (!empty($tabs['#primary']) || !empty($tabs['#secondary'])): ?>
            <div class="tabs clearfix"><?php print render($tabs); ?></div><!-- /.tabs -->
          <?php endif; ?>
          
          <div id="main-content" class="region clearfix">
          
            <?php if (!empty($page['before_title'])): ?>
              <?php print render($page['before_title']); ?>
            <?php endif; ?>
          
          
            <?php // If not front, render breadcrumbs and title. If front, render title only if setting is true. ?>
            <?php if(!$is_front): ?>
              <?php print $breadcrumb; ?>
 
              <?php print render($title_prefix); ?>
           
              <?php if ($title): ?>
                <h1 class="title" id="page-title"><?php print $title; ?></h1>
              <?php endif; ?>
           
              <?php print render($title_suffix); ?>

            <?php elseif($is_front && theme_get_setting('homepage_title')) : ?>
              <?php print render($title_prefix); ?>
           
              <?php if ($title): ?>
                <h2 class="title" id="page-title"><?php print $title; ?></h2>
              <?php endif; ?>
           
              <?php print render($title_suffix); ?>  
            <?php endif; ?> 
             
            <?php print render($page['content']); ?>
            <?php print $feed_icons; ?>
        
          </div><!-- /#main-content -->
  	    </div><!-- /#content -->
  	
  	    <?php if(!empty($page['sidebar_first'])) : ?>
          <div id="sidebar-first" class="grid-3 sidebar <?php print $pull_class; ?>">
            <div class="sidebar-wrapper"><?php print render($page['sidebar_first']); ?></div>
          </div>
        <?php endif; ?>
    
        <?php if(!empty($page['sidebar_second'])) : ?>
          <div id="sidebar-second" class="grid-3 sidebar">
            <div class="sidebar-wrapper"><?php print render($page['sidebar_second']); ?></div>
          </div>
        <?php endif; ?>
        
        <div class="clear"></div>
        <?php if(!empty($page['after_content'])) : ?>
    	    <div id="after-content" class="container-12 clearfix">
    	     <div class="region-divider grid-12"></div>
    	     <?php print render($page['after_content']); ?>	
    	    </div>
        <?php endif; ?>
  	
  	  </div><!-- /#main -->

      <?php if(!empty($page['lower'])) : ?>
        <div id="lower-wrapper">
          <div id="lower" class="container-12 clearfix">
            <div class="region-divider grid-12"></div>
            <?php print render($page['lower']); ?>
          </div>
        </div>
      <?php endif; ?>

      <div class="clear"></div>
    
    </div><!-- /#main_wrapper -->

    <div id="footer-wrapper">
        <div id="footer" class="container-12 clearfix">
          <?php if(!empty($page['footer'])) : ?>
            <?php print render($page['footer']); ?>
          <?php endif; ?>
          <div class="clear"></div>
          <div id="fatfooter">
          	<?php if(!empty($page['fatfooter'])) : ?>
            	<?php print render($page['fatfooter']); ?>
          	<?php endif; ?>
          </div>
          <div id="site-info-wrapper">
                    
            <div id="lib-info">
              <a href="http://lawlibrary.colorado.edu"><strong>William A. Wise Law Library</strong></a><br />
              University of Colorado Law School<br />
              Wolf Law Building, 2nd Floor<br />
              2450 Kittredge Loop Drive<br />
              Boulder, CO 80309-0402
            </div>
            <div id="cu-info">
              <a href="http://www.colorado.edu"><strong>University of Colorado Boulder</strong></a><br />
              &copy; Regents of the University of Colorado<br />
             <a href="http://www.colorado.edu/about/privacy-statement">Privacy</a> &bull; <a href="http://www.colorado.edu/about/legal-trademarks">Legal &amp; Trademarks</a>
            </div>
          </div>
        </div>
      </div>
    
    
  </div> <!-- /#page -->
</div> <!-- /#page-wrapper -->

 
