#Print Machine's MAC address with line breaks between each address
ifconfig | grep ether | awk '{print $2}'
