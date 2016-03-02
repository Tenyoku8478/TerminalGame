#! /usr/bin/env bash

a=`head -n $3 $1 | tail -n 1`
b=`head -n $3 $2 | tail -n 1`
if [ $a -gt $b ]; then
    echo $a
else
    echo $b
fi
