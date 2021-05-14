<!DOCTYPE html>
<html>

<body>

<h2>Smart Bartender</h2>
<p>Displays the Drink and Date Selected</p>

    <?php
    $myfile = fopen("C:/Test_GPIO.txt", "r");
    echo fread($myfile,filesize("C:/Test_GPIO.txt"));
    fclose($myfile);
    ?>

</body>
</html>


