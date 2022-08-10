

<html>

<head>
<title>If else</title>
<style>
table
{
	width:auto;
	height:auto;
	background-color:#eee;
}
</style>

</head>

<body>

<form action="if_else.php" method="POST">

<table border="1" align="center">

<tr>
<td>Sub1</td>
<td><input type="text" name="s1" /></td>
</tr>
<tr>
<td>Sub2</td>
<td><input type="text" name="s2" /></td>
</tr>

<tr>
<td>Sub3</td>
<td><input type="text" name="s3" /></td>
</tr>

<tr>
<td>Sub4</td>
<td><input type="text" name="s4" /></td>
</tr>

<tr>
<td>Result</td>
<td>
<?php
$a = $_POST['s1'];
$b = $_POST['s2'];
$c = $_POST['s3'];
$d = $_POST['s4'];

$to = 0.00;

$to = $a+$b+$c+$d;

Echo "Total:$to <br />";
$per = 0.00;

$per = $to/4;
echo "Percentage:$per% <br />";
if($per>=35 && $per <=45)
{
	echo "3rd Division";
}
elseif($per >=46 && $per <=60)
{
	echo "2nd Division";
}
elseif($per >=61 && $per <=80)
{
	echo "1st Division";
}
elseif($per >=81 && $per <=90)
{
	echo "A Grade";
}
elseif($per >=91 && $per <=100)
{
	echo "A+ Grade";
}
else{
	echo "Failed";
}

?>

</td>
</tr>

<tr>
<td>Subject Marks</td>
<td>
<?php
$e = $a;
$f = $b;
$g = $c;
$h = $d;

echo "sub1:$e <br />";
echo "sub2:$f <br />";
echo "sub3:$g <br />";
echo "sub4:$h <br />";

 ?>
</td>
</tr>
<tr>
<td colspan="2" align="right">

<input type="submit" value="CAL RESULT" /></td>
</tr>
</table>
</form>

</body>


</html>