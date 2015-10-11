<?php

include("helloswigcpp2.php");

$cls = new HelloSwigCls();

$a = $cls->showHelloSwigCpp();
echo $a;

print "<br/>";
print "<br/>";

$str = "Input a string. \n";
$b = $cls->showPassedStrCpp($str);
echo $b;

?>
