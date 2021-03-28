#!/bin/sh
echo 'Program will now be compiled'
cd src
gcc main.c -v -o main
mv main notes
sudo cp notes /bin/notes
sudo chmod 777 /bin/notes
sleep 1
touch ~/NOTEFILE
sudo chmod 777 ~/NOTEFILE
sudo cp notes-reset.sh /bin/notes-reset
sudo chmod 777 /bin/notes-reset
rm notes
echo 'Script finished!'
