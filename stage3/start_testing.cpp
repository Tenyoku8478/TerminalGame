#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

int main() {

	std::string questions[] = {
		"How to start insert mode at cursor in Vim?\n",
		"How to exit insert mode in Vim?\n",
		"How to copy a line in Vim?\n",
		"How to paste the clipboard after cursor in Vim?\n",
		"If you want to quit Vim, how to quit and throw away changes?\n",
		"How can you replace all \"Hi\" with \"Hello\" throughout file in Vim?\n",
		"What is the output of \"gcc -c hello.c\"?\n",
		"How to enable all warnings when compiling with GCC?\n",
		"How to connect to PTT using SSH?\n",
		"When was the first release of ubuntu?\n",
		"Not counting this one, how many questions did I ask?\n"
	};

	std::string options[] = {
		"(a) o  (b) p  (c) s  (d) i\n",
		"(a) e  (b) Esc  (c) Alt+F4  (d) dd\n",
		"(a) yy  (b) y  (c) c  (d) cc\n",
		"(a) Ctrl+v  (b) Ctrl+p  (c) p  (d) P\n",
		"(a) wq  (b) w  (c) qq  (d) q!\n",
		"(a) :%s/Hi/Hello/g  (b) :%s/Hello/Hi/g  (c) :%r/Hi/Hello/g  (d) :%r/Hello/Hi/g\n",
		"(a) hello  (b) hello.exe  (c) a.exe  (d) hello.o\n",
		"(a) -warning  (b) -Wall  (c) -Warn  (d) --enable-warning\n",
		"(a) ssh ptt  (b) ssh bbsu@ptt.com  (c) ssh bbsu@ptt.cc  (d) ssh ptt.com\n",
		"(a) in 2004  (b) in 2005  (c) in 2006  (d) in 2007\n",
		"(a) 8  (b) 9  (c) 10  (d) 11\n"
	};

	std::string ans[] = {"d", "b", "a", "c", "d", "a", "d", "b", "c", "a", "c"};

	int count = 0;
	std::string a;
	
	while(count < 11) {
		if(count == 10)	system("clear");
		std::cout << questions[count];
		std::cout << options[count];
		std::cin >> a;
		printf("\n");
		if(a == ans[count])	count++;
		else {
			printf("Haha, you're wrong. Byebye^_^\n");
			return 0;
		}
	}
	
	printf("Ok... This is the flag you want: \n");
    putchar('3');
    putchar('d');
    putchar('r');
    putchar('9');
    putchar('9');
    putchar('\n');
	
	return 0;
}
