<?php

require_once("../inc/db.inc");
require_once("../inc/util.inc");
require_once("../inc/download.inc");

db_init();
$user = get_logged_in_user();

page_head("Download BOINC software");

echo "
    Your account setup is complete.
    <br>Next you must download the BOINC software.
    <br>Click on the type of computer that you have:
    <p>
";

print_download_links();

echo "
    <p>
    After the download is finished:
    <ul>
    <li><b>Windows users</b>:
        open the downloaded file.
        This will install BOINC on your computer.
    <li><b>Macintosh OS/X, Unix and Linux users</b>:
        Use gunzip to uncompress if your browser has not done it for you.
        Then chmod +x on the executable and run it.
    </ul>

    When BOINC first runs,
    it will ask you for a project URL and an account key.
    Copy and paste the following:

    <ul>
    <li>Project URL: <b>".MASTER_URL."</b>
    <li>Account key: <b>$user->authenticator</b>
    </ul>

    This completes the ".PROJECT." installation.
    <br>Thanks for participating in ".PROJECT.".
    <br>Visit our <a href=index.php>main page</a> for more information.
";

page_tail();
?>
