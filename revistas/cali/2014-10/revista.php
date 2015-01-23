<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
	<meta http-equiv="Content-Type" content="text/html;charset=utf-8" />
	<meta name="keywords" content="P�gina oficial <?= $sessionApp->getSite( )->getName( ) ?>" />
	<meta name="description" content="" />
	<meta name="title" content="<?= $sessionApp->getSite( )->getName( ) ?>" />
	<meta name="Robots" content="All" />
	<meta http-equiv="Pragma" content="No-Cache" />
	<meta name="Rating" content="General" />
    
	<title><?= $sessionApp->getSite( )->getName( )  ?></title>
	<link rel="icon" href="<?=INTRA_BASE_URL?>site/images/icon.png" type="image/png"/>
	<link rel="image_src" type="image/jpeg" href="<?=INTRA_BASE_URL?>site/images/bigIcon.jpg" />
	<link rev="made" href="mailto:soporte@dayscript.com" />
	<link rev="start" href="<?=INTRA_BASE_HOST . INTRA_BASE_URL?>" title="Home Page" />
	<style type="text/css" media="all">
		@import "<?=INTRA_BASE_URL?>site/include/styles.css";
	</style>
	<style>
		BODY {
			margin:0;
			padding:0;
		}
	</style>
	<script type="text/javascript" src="https://ajax.googleapis.com/ajax/libs/jquery/1.4.4/jquery.min.js"></script>
	<script language="javascript" type="text/javascript" src="http://dev-vivendo.pantheon.io/sites/libraries/functions.js"></script>
	<script language="javascript" type="text/javascript" src="http://dev-vivendo.pantheon.io/sites/libraries/swfobject.js"></script>
	<script language="javascript" type="text/javascript" src="http://dev-vivendo.pantheon.io/sites/libraries/HTTPRequest.js"></script>
	<script language="javascript" type="text/javascript" src="http://dev-vivendo.pantheon.io/sites/libraries/zoom.js"></script>
</head>
<body>
<div id="revista"><b><a href="http://get.adobe.com/flashplayer/">Descargar Flash Player para ver el contenido, haciendo clic aqu&iacute;.</a></b></div>
<script type="text/javascript" language="javascript">
//<![CDATA[
	var flashvars = {
		idFile: "0",
		host: "<?= INTRA_BASE_HOST ?>",
		path: "<?= INTRA_BASE_URL . "/" . 2 . "/" ?>",
		page: ""
	};
	var params = {
		menu: "false",
		wmode: "transparent"
	};
	var attributes = {
		id: "idrevista",
		name: "idrevista"
	};

	swfobject.embedSWF("revista.swf",
					"revista",
					"1050",
					"730",
					"9.0.0",
					'<?= INTRA_BASE_URL ?>DayAdmin/swfs/expressInstall.swf', flashvars, params, attributes );
//]]>
</script>
</body>
</html>