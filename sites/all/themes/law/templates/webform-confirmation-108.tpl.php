<?php

/**
 * @file
 * Customize confirmation screen after successful submission.
 *
 * This file may be renamed "webform-confirmation-[nid].tpl.php" to target a
 * specific webform e-mail on your site. Or you can leave it
 * "webform-confirmation.tpl.php" to affect all webform confirmations on your
 * site.
 *
 * Available variables:
 * - $node: The node object for this webform.
 * - $confirmation_message: The confirmation message input by the webform author.
 * - $sid: The unique submission ID of this submission.
 */
?>

<div class="webform-confirmation">
  <?php if ($confirmation_message): ?>
    <?php print $confirmation_message ?>
  <?php else: ?>
    <p><?php print t('Thank you, your request has been received. <br /><br />The Wise Law Library will contact you via the information you provided to offer a quote.  A final invoice will be included with the requested document.'); ?></p>
  <?php endif; ?>

<p>
  <a href="using-library/document-delivery"><?php print t('Go back to Document Delivery') ?></a>
</p>
</div>