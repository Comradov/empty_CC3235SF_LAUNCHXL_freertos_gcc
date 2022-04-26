# empty_CC3235SF_LAUNCHXL_freertos_gcc

Preamble
For myself, I made a small web server based on CC3235SF, which consists of 20 files, half of which are pictures, and other files are scripts, styles and pages.
Working with the site, I found that sometimes some files are not loaded with the net::ERR_CONNECTION_TIMED_OUT error.
This repository was created to investigate this issue.

Description of the steps to create a project.
In CCS clone "empty" example with FreeRTOS and GCC compiler.
Enable HTTPS server.
Enable Capture NWP logs.
Added output to UART like in printf.
Added dummy key and certificate.
Added 49 identical pictures numbered from 001 to 049.
Added 2 pages in which all the pictures open. On one page, the pictures open in ascending order, on the second in descending order.

Description of problems.
If open the Developer Tools in the browser and open the page, you can see that some pictures (sometimes) do not open with the net::ERR_CONNECTION_TIMED_OUT error (need wait about 20 seconds). If you open a page with the reverse order of opening images, you can see that another pictures do not open.
But if count the positions of the pictures that do not open, then in the first and second cases they will be in the same place.
In ascending page - 006.png
In descending page - 044.png