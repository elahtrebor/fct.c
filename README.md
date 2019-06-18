# fct.c

fct.c - A field delimeter counter - useful for CSV or character delimited files


example:     

cat mycsv.csv |./fct ,
ID[0],host[1],ip[2],city[3],state[4],admincontact[5],vendor[6],OS[7],swversion
1[0],router1[1],192.168.1.1[2],stllouis[3],missouri[4],root@localhost[5],cisco[6],IOS[7],12.4
2[0],server2[1],192.168.1.2[2],stllouis[3],missouri[4],root@localhost[5],HP[6],REDHAT[7],6.8
3[0],server3[1],192.168.1.3[2],stllouis[3],missouri[4],root@localhost[5],DELL[6],REDHAT[7],7
4[0],server4[1],192.168.1.4[2],stllouis[3],missouri[4],root@localhost[5],HP[6],CENTOS[7],6
5[0],server5[1],192.168.1.5[2],stllouis[3],missouri[4],root@localhost[5],HP[6],REDHAT[7],6.8
6[0],server6[1],192.168.1.6[2],stllouis[3],missouri[4],root@localhost[5],HP[6],REDHAT[7],6.8
7[0],router2[1],192.168.1.7[2],stllouis[3],missouri[4],root@localhost[5],Juniper[6],JUNOS[7],17.4R2
8[0],server8[1],192.168.1.8[2],stllouis[3],missouri[4],root@localhost[5],HP[6],REDHAT[7],6.8

