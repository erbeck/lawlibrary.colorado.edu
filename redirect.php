<?php
$mobileURL = “coloradolaw.boopsie.com”; #Your mobile app’s URL. No WWW or
http
$domain = “lawlibrary.colorado.edu”; #Your sites domain. No WWW or http
if (!isset($nomobi)) {
?>
<!DOCTYPE HTML PUBLIC “-//W3C//DTD HTML 4.01//EN” “http://www.
w3.org/TR/html4/strict.dtd”>
<html>
<head>
<title>Mobile Redirect</title>
</head>
<body
<div>
 <a href=”http://<? echo $domain;?>/redirect.php?nomobi=yes”>Download
Mobile App</a>
<br><br>
 <a href=”http://<? echo $domain;?>/redirect.php?nomobi=no”>Desktop
site</a>
<br/><br/>
</div>
</body>
</html
<?php
}
if ($nomobi == yes) {
setcookie(“mredir”, “true”, time()+3600*24*365 , “/” , “.$domain”);
header(‘Location: http://$mobileURL’);
}
if ($nomobi == no) {
setcookie(“mredir”, “false”, time()+3600*24*365 , “/” , “.$domain”);
header(“Location: http://$domain”);
}
?>