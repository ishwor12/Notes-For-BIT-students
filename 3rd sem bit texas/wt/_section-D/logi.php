<html>


<head>
<title>Logical Operator</title>
</head>

<body>
<form action="logi.php" method="POST">
<table border="1" align="center">
<tr>
<td colspan="2"><h3>Logical Operator</h3></td>
</tr>
<tr>
<td>No 1</td>
<td><input type="text" name="a" />
</tr>
<tr>
<td>No 2</td>
<td><input type="text" name="b" />
</tr>

<tr>

<td>
<?php
$x = $_POST['a'];
$y = $_POST['b'];

if($x && $y)
{
	echo "Both Values are same: TRUE";
}
else
{
	echo "Both values are not maching: FALSE";
}
?>

</td>
</tr>
<tr>
<td></td>
<td><input type="submit" value="Compare" />
</tr>
</table>

</form>

</body>
</html><td>