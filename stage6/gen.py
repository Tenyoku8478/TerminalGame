#!/usr/bin/env python3
import string
import random

key = 'woe9A'
pre = 'flag at bottom |v '
post = ' ^| flag at top'

lines = []
for i, x in enumerate(pre*3+key+post*3):
    lines.append('%03d FLAG: %c'%(i, x))

for i in range(100):
    lines.append('%03d FROG: %c'%(i, random.choice(string.ascii_letters)))

random.shuffle(lines)

output = open('flag_and_frog.txt', 'w')
for line in lines:
    output.write(line+'\n')

output.close()
