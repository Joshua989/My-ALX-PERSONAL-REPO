#Checks completed: 33.33%)
Write a Bash script that displays a list of currently running processes.

Requirements:

Must show all processes, for all users, including those which might not have a TTY
Display in a user-oriented format
Show process hierarchy

#!/bin/bash

# Use ps command to list all processes with user-oriented format
ps -e -o user,pid,ppid,cmd --forest
