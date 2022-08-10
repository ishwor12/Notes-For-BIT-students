

<html>
<head>
<title>Switch</title>
<style>
table{
	background-color:#eee;
}
</style>
</head>

<body>
<form action="switch.php" method="POST">
<table border="0" align="center">
<tr>
<td>Value 1 </td>
<td><input type="text" name="v1" /></td>
</tr>
<tr>
<td>Value 2 </td>
<td><input type="text" name="v2" /></td>
</tr>
<tr>
<td>Total </td>
<td>
<?php
$click = $_POST['cnt'];
$a = $_POST['v1'];
$b = $_POST['v2'];
switch($click)
{
	case "+";
	$c = $a+$b;
	$d = $a-$b;
	$e = $a*$b;
	$f = $a/$b;
	echo "+:$c <br />";
	echo "-:$d <br />";
	echo "x:$e <br />";
	echo "/:$f <br />";
	
	break;
	
	
}

?>

</td>
</tr>
<tr>
<td colspan="2" align="center">
<input type="submit" name="cnt" value="+" />
<input type="submit" name="cnt" value="-" />
<input type="submit" name="cnt" value="x" />
<input type="submit" name="cnt" value="/" />
</tD>
</tr>
</table>
</form>

</body>

</html>