0x17. C - Dynamic libraries
At the end of this project you are expected to be able to explain to anyone, without the help of Google:

What is a dymanic library, how does it work, how to create one, and how to use it
What is the environment variable $LD_LIBRARY_PATH and how to use it
What are the differences between static and shared libraries
Basic usage nm, ldd, ldconfig
Exercises:

0. A library is not a luxury but one of the necessities of life

Create the dynamic library libdynamic.so containing all the functions listed below:
1. Without libraries what have we? We have no past and no future

Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.
2. Either write something worth reading or do something worth writing

Write a blog post describing the differences between static and dynamic libraries. It should cover:
Why using libraries in general
How do they work
How to create them (Linux only)
How to use them (Linux only)
What are the differences between static and dynamic libraries
What are the advantages and drawbacks of each of them
Your posts should have examples and at least one picture, at the top. Publish your blog post on Medium or LinkedIn, and share it at least on Twitter and LinkedIn.
3. I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?

Our mole got us a copy of the program, you can download it here. Our mole also gave us a piece of documentation:
You can’t modify the program gm itself as Master Sysadmin Sylvain (MSS) always checks its MD5 before running it
The system is an Linux Ubuntu 16.04
The server has internet access
Our mole will be only able to run two commands from a shell script, without being detected by MSS
Your shell script should be maximum 3 lines long. You are not allowed to use ;, &&, ||, |, ` (it would be detected by MSS), and have a maximum of two commands
Our mole has only the authorization to upload one file on the server. It will be your shell script
Our mole will run your shell script this way: mss@gm_server$ . ./101-make_me_win.sh
Our mole will run your shell script from the same directory containing the program gm, exactly 98 seconds before MSS runs gm with my numbers: ./gm 9 8 10 24 75 9
MSS will use the same terminal and session than our mole
Before running the gm program, MSS always check the content of the directory
MSS always exit after running the program gm
