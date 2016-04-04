ldapsearch -Q "sn=*BON*" | grep sn: | wc -l | sed "s/ //g"
