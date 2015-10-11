<?php

include("helloswigcpp.php");

print TEST; 

print "<br/>";
print "<br/>";

print Test;

print "<br/>";
print "<br/>";

$a = showHelloSwigCpp();
echo $a;

print "<br/>";
print "<br/>";

$str = "Test SWIG C++/PHP";
$b = showPassedStrCpp($str);
echo $b;

?>
