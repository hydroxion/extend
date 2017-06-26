#!/bin/bash

sudo su

# apt-get update && apt-get upgrade && apt-get dist-upgrade && apt-get autoremove && apt-get autoclean && apt-get clean && history -c && sync; echo 1 > /proc/sys/vm/drop_caches

python setup.py install

python -c "from module import hey; from sys import modules; from os import system; system('clear || cls'); print ( '\n{0}\n\n{1}\n\n{2}\n'.format( modules['module'], type (hey), hey () ) )"
