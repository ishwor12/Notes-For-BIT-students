<html>

<head>
<title>Operators</title>
<style>
table
{
	background-color:#ddd;
}
</style>
</head>

<body>
<form action="com.php" method="POST">

<table border="0" align="center">
<tr>
<td>X No1</td>

<td><input type="text" name="a" /> 
</tr>
<tr>
<td>Y No2</td>
<td><input type="text" name="b" /> 

</tr>
<tr>
<td colspan="2">

<?php
$x = $_POST['a'];
$y = $_POST['b'];

if($x<$y)
{
	echo "Y value is Greater than X value";
}
if($x>$y)
{
	echo "X value is greater than Y";
}

?>

</td>
</tr>
<td>

<td colspan="2"><input type="submit" value="CALCULATE" /> 
</tr>
</table>

</form>

</body>
</html>