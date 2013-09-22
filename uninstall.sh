#!/bin/bash
CH="n"

echo "About to uninstall. Continue[Y or n]?" 
read CH
if [ "$CH" == "Y" ]
then
	sudo rm -R /usr/bin/{note,platforms}
	echo "Removing files"
	sleep 3	
	sudo rm -R /opt/Note

else 
exit
fi