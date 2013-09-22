#!/bin/bash
CH="Y"
echo "Welcome to Note v2.0.1 beta 1 installer"
echo "Please Wait Loading Files..."
sleep 3
echo "Installing Note v2.0.1! Continue[Y or n]?" 
read CH
if [ "$CH" == "Y" ]
then
	echo "Installing..."
	echo "Extracting..." 
	sleep 2
	sudo tar -zxvf lib.tar.gz -C /lib/
	echo "Creating New Directories..."
	sleep 1
	sudo cp -R {note,platforms} /usr/bin/
	sudo mkdir /opt/Note/
	sudo cp -R {note,platforms,uninstall.sh,ReadMe} /opt/Note
	echo "Giving root privlages..."
	sleep 2
	sudo chmod +x /usr/bin/note
	sudo chmod +x /opt/Note/note	
	sudo chmod +x /opt/Note/uninstall.sh
	echo "Installation Complete"
	sleep 1
else
exit
fi