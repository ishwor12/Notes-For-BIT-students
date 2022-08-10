

<html>

<head>
<title> Decisiton makeing
</title>

</head>

<body>

<form action="if_else.php" method="POST">

<table border="1" align="center">
<tr>
<td>sub1</td>
<td><input type="text" name="s1" /></td>
</tr>
<tr>
<td>sub2</td>
<td><input type="text" name="s2" /></td>
</tr>
<tr>
<td>sub3</td>
<td><input type="text" name="s3" /></td>
</tr>
<tr>
<td>sub4</td>
<td><input type="text" name="s4" /></td>
</tr>

<tr>
<td>Marks</td>




<td>
<?php
$a = $_POST['s1'];
$b = $_POST['s2'];
$c = $_POST['s3'];
$d = $_POST['s4'];

$tot = 0.00;
$tot = $a+$b+$c+$d;

echo "$tot <br />";

$per = $tot/4;

echo "$per% <br />";

if($per>=35 && $per<=45)
{
	echo "3rd Grade";
}
elseif($per>45 && $per<=60)

{
	echo "2nd Grade";
}
elseif($per>60 && $per<=80)
{
	echo"1st Grade";
}
elseif($per>80 && $per<=90)
{
	echo "A Grade";
}
elseif($per>90 && $per<=100)
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
<td colspan="2">
<input type="submit" value="CALC Result" />
</td>
</tr>


<tr>
<td>
Marks Entered
</td>
<td>
<?php
$e = $a;
$f = $b;
$g = $c;
$h = $d;

echo "Sub1:$e <br />";
echo "Sub2:$f <br />";
echo "Sub3:$g <br />";
echo "Sub4:$h <br />";
?>

</td>
</tr>
<tr>
<td colspan="2">

<?php
if($a <35)
{
	echo "Sub1 Failed";
}

?>
</td>

</td>
</table>

</form>

</body>

</html>