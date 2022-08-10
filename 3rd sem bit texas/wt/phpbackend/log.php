<html>
<head>
<title>class</title>
<style>
body
{
	background-color:red;
	margin:0;
	padding:0;
}
table{
	background-color:#eee;
	margin-left:auto;
	margin-right:auto;
}

</style>
</head>
<body>
<?php 
include('nav.php');
?>
<h3>SIMPLE CLLC</h3>
<hr />
<form action="log.php" method="POST">
<table>
<tr>
<td>Enter No1</td>
<td>
<input type="text" name="one" />
</td>
</tr>
<tr>
<td>Enter No2</td>
<td>
<input type="text" name="two" />
</td>
</tr>
<tr>
<td>TOTAL</td>
<td>
<?php
$x = $_POST['one'];
$y = $_POST['two'];

$z = 0.00;
$z = $x*$y;

$d = 0.00;

echo "$z <br />";

if($z <= 10000)
{
	$d = $z*7/100;
}
echo "$d";
?>
</td>
</tr>

<tr>
<td></td>
<td>
<input type="submit" value="CALC" />
</td>
</tr>

</table>

</form>












</body>
</html>