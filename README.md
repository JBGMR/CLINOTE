# CLINOTE
An open source lightweight and simple notes app for Windows and GNU/Linux.
Note: program may not work correctly under Windows as it was only tested in linux.
Note2: Please use install.sh under Linux only. You have to manually compile it on other UNIX operating systems.
# License
The program is licensed under the JB-OSS license
# Installation

Linux:

Clone the repository and navigate to the sorce folder.
Run the following commands:
```
sudo chmod 777 install.sh
./install.sh
```
Windows:

Clone the repository and navigate to the Windows folder inside the sorce folder.
You should have a file called NOTEFILE without a file extension. If there isn't one you need to create one.
This file should always be in the same folder as the executable and it
should never be deleted.
Lastly, run the executable.

# Deleting notes
Recommended way (Linux): run the notes-reset.sh file in your home direcotry by running:
``
sh notes-reset.sh
``
This will reset all notes.

Recommended way (Windows/UNIX): Delete the NOTEFILE and create a new one as shown above. This will also wipe every single note.

Second way: there is a way to only delete one or two notes. This way is not recommended as it may break the program. If you accept the risk, then the solution is pretty obvious. Open the NOTEFILE with a text editor and delete the note.

# Troubleshooting
Q: The program gives me an error when I run it.
A: Make sure the NOTEFILE is present and the you are running it from the home directory on Linux.
