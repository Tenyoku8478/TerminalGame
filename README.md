# 2015 CSIE Terminal Game

## About
	* 5 stage
	* You'll get a 5-charactered string(flag) when you finish each stage.
	* There's a hint in each stage.

## Stages
	* stage1: `tail`
		1. Use `$tail -1 book.txt` and you'll see the flag.
	* stage2: `cp` and `mv`
		1. Copy the `stage2` folder into your own workspace in order to move the files.
		2. Follow the hints and move the files, then run the Execution files to get the flag.
	* stage3: knowledge about `gcc`, `linux` and `Vim`
		1. Take the simple test and get the flag.
	* stage4: `diff`
		1. Use `$diff biography_Elise.txt biography_Emily.txt` and you'll find the flag.
	* stage5: `I/O Redirection` and `substitution`
		1. Run `$./machine > output`.
		2. Open the output file in Vim, and use`:%s/This line is not important.\n//g` to replace useless imformation.
		3. You'll get the flag from the information left.

## Setup
	1. Clone the repository into the folder you want.
	2. Make the `stage1/book.txt` larger, without modifying the last line.
	3. Run `$./setup.sh` and `$rm setup.sh`.
	4. Complete.

