#!/bin/sh
echo 'Program will now be compiled'
gcc main.c -o main
mv main notes
sleep 2
sudo cp notes /bin/notes
sudo chmod 777 /bin/notes
sleep 1
touch /home/$USER/NOTEFILE
sudo chmod 777 /home/$USER/NOTEFILE
rm -rf notes
echo 'Script finished!'
sleep 5
