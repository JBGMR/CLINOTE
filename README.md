# CLINOTE
An open source lightweight and simple notes app for Windows and UNIX operating systems.
Note: program may not work correctly under Windows as it was only tested in linux.
Note2: Please use install.sh under Linux only. You have to manually compile it on other UNIX operating systems.
# License
The program is licensed under the JB-OSS license
# Installation
# Linux:

Clone the repository and navigate to the sorce folder.
Run the following commands:

$ sudo chmod 777 install.sh

$ ./install.sh

Type in 'notes' (without quotes) to run the program


# Other UNIX operating systems:

Prerequsites:

-GCC compiler

Clone the repository and navigate to the sorce folder.
Run the following commands:

$ gcc main.c -o notes

$ sudo chmod 777 notes

$ cp notes ~/notes

$ cd ~

Create a file called NOTEFILE (without any file extensions) in your home directory. This file should always be in the same folder as the notes file.
Type in './notes' (without quotes) to run the program.


# Windows:

Clone the repository and navigate to the WIndows folder inside the sorce folder.
enable file name extensions in Explorer and create a new text file. Name it NOTEFILE.txt and remove the '.txt'. You should now have a file called NOTEFILE without a file extension. This file should always be in the same folder as the executable.
Lastly, run the executable.

# Deleting notes
Recommended way (Linux): run the notes-reset.sh file in your home direcotry by running:

$ sh notes-reset.sh

This will reset all notes.

Recommended way (Windows/UNIX): Delete the NOTEFILE and create a new one as shown above. This will also wipe every single note.

Second way: there is a way to only delete one or two notes. This way is not recommended as it may break the program. If you accept the risk, then the solution is pretty obvious. Open the NOTEFILE with a text editor and delete the note.

# Troubleshooting
Q: The program gives me an error when I run it.

A: Make sure the NOTEFILE is present and the you are running it from the home directory on Linux.
