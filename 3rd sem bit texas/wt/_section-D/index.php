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
<form action="index.php" method="POST">

<table border="0" align="center">
<tr>
<td>Enter (P)</td>

<td><input type="text" name="p" /> 
</tr>
<tr>
<td>Enter (T)</td>

<td><input type="text" name="t" /> 
</tr>
<tr>
<td>Enter (R)</td>

<td><input type="text" name="r" /> 
</tr>
<tr>
<td>Interst Amt</td>
<td>
<?php
$a = $_POST['p'];
$b = $_POST['t'];
$c = $_POST['r'];

$i = $a*$b*$c/100;

echo "$i <br />";
//Assignment Operators
$d = $a;
$e = $b;
$f = $c;
Echo "P:--$d<br />";
Echo "T:--$e<br />";
Echo "R:--$f<br />";


//Comparison Operators




?>
</td>
</tr>
<TR>
<td colspan="2"><input type="submit" value="CALCULATE" /> 
</tr>
</table>

</form>

</body>
</html>