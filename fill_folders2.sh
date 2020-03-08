#!/bin/bash

file_name=$1
for i in $(tree -dfi|head -n -2)
do
     touch $i/$file_name
done
	
