OS_project1
Johannes Schneemann
9/18/2019

Lab 1

1. Write small c programs.  

a). The first program "pre.c" should read in a list of U.S. states and their populations.
You can google to find the information.  To be simple, you can use the abbreviation for
each state. We assume there are at most 10 states in the list. Enter the inputs through
the keyboard and display the output on the screen. The input ends when an EOF (generated
by Ctrl-D) is encountered. The output of the program should display the states whose population
is above 10 million.

For example, the following are the inputs to "pre.c". The unit is million.

TX 26
NC 9
MD 5
NY 19
CA 38
Ctrl-D (press the keys to terminate the inputs.)

Then "pre.c" produces the output:
TX
NY
CA

Note: an EOF is usually 'sent' to a process by hitting a CTRL_D.  
If you type stty -a on your unix command line, you can get info that
tells you which keyboard keys mean what. FYI, in c, to put values to
standard_out  use printf().  To get values from standard_in use scanf()
or getchar().

b). The second program "sort.c" reads in a list of state abbreviations from stdin and
display them in alphabetical order on the screen. Assume there are no more than 10 states
and the sequence is read until you press Ctrl-D which generates an EOF.

If the inputs are:

TX
NY
CA
Ctrl-D (press the keys to terminate the inputs.)

The outputs should be:

CA
NY
TX


2. Write a c program to set up a child-TO-parent pipe; the child
should 'exec' to perform the "pre" process from the above and its output
should be connected to the pipe connected to the parent, which should 'exec'
to perform the "sort" process from the above.

3. Write a program to take a UNIX command from the command line
and fork() a child to execute it. The command can be a simple
command like: $ls or $ps, or it can be a command with options such as
$ls -t -l. Use argc and argv[] in the main function to pass parameters.
When the child process is executing the command, the parent process
simply waits for the termination of the child process. The process
id of the parent and the child should be printed out using getpid() and
getppid() functions.
