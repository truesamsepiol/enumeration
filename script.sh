#!/bin/sh

for fichier in *.in.*
do
	./a.out < $fichier
done
