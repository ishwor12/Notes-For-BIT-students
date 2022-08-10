
<html>

<head>
<title>Operators</title>
<style>
table{
	background-color:#eee;
}
</style>
</head>

<body bgcolor="green">
<form action="index.php" method="POST">
<table align="center">
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
<td>TOTAL:</td>
<td>
<?php
$a = $_POST['p'];
$b = $_POST ['t'];
$c = $_POST ['r'];
$i = 0.00;
$i = $a*$b*$c/100;
$to = 0.00;
$to = $i+$a;

Echo "$i <br />"; 
Echo "$to";



?>

</td>
</tr>
<tr>
<td></td>
<td><input type="submit" value="CALC" />
</tr>


</table>


</form>

</body>
</html>
