
<?php


include_once('config.php');

if(isset($_POST['submit']))
{
	$name = mysqli_real_escape_string($con, $_POST['fname']);
	$username = mysqli_real_escape_string($con, $_POST['user']);	
	$password = mysqli_real_escape_string($con,md5($_POST['pass']));
	$role = mysqli_real_escape_string($con, $_POST['rol']);
	
	$query = "INSERT INTO rolestbl(name,username,password,role)VALUES('$name','$username','$password','$role')";
	
	$result = $con->query($query);
	
	if($result == true)
	{
		header("Location:login.php");
		
	}
	
}

?>

<html>
<head>
<title>Role Users</title>
<meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js"></script>
  <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.16.0/umd/popper.min.js"></script>
  <script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.5.2/js/bootstrap.min.js"></script>
</head>

<body>


<div class="container" style="background-color:#eee; width:30%; text-align:center;">
<h1>USERS REGISTRATION</h1>
<hr />
<div class="row">
<div class="col-md-12">
<div class="form-group" style="text-align:left; width:100%;">

<form action = "" method="POST">
<span>Fullname</span>
<input type="text" class="form-control" name="fname" />

<span>Username</span>
<input type="text" class="form-control" name="user" />

<span>Password</span>
<input type="password" class="form-control" name="pass" />

<span>Role</span>
<select name="rol" class="form-control">
<option>Admin</option>
<option>Manager</option>
<option>Teacher</option>
<option>Student</option>
</select

</div>

<div style="text-align:right">
<input type="submit" value="Regiter" name="submit" class="btn btn-success">
</div>
</form>
</div>
</div>
<div>

</body>
</html>