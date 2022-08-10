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
.hot
{
	background-color:green;
	height:30px;
	width:100%;
}
	
</style>
</head>
<body>
<div class="hot">
<?php 
include('nav.php');
?>
</div>

<form action="index.php" method="POST">
<table>
<tr>
<td>Principle(P)</td><td><input 
type="text" name="p" /></td>

</tr>
<tr>
<td>Tiem(T)</td><td><input 
type="text" name="t" /></td>

</tr>
<tr>
<td>Rate(R)</td><td><input 
type="text" name="r" /></td>

</tr>
<tr>
<td></td><td><input 
type="submit" value="COUNT" /></td>

</tr>
<td>TOTAL:</td>

<td>
<?php
error_reporting(0);
$a = $_POST['p'];
$b = $_POST['t'];
$c = $_POST['r'];
$t = 0.00;
$i = $a*$b*$c/100;
echo "$i";




?>


</td>
</tr>
</table>

</form>




</body>
</html>