#include <stdio.h>

int check1 = 0;
int check2 = 0;
int check3 = 0;

void win() {
	if (check1 && check2) {
		printf("win! :)\n");
	} else {
		printf("you need to jump through more hoops first :(");
	}
}


void hoop1() {
	printf("jumped through hoop 1!\n");
	check1 = 1;
}

void hoop2() {
	printf("jumped through hoop 2!\n");
	check2 = 1;
}

void hoop3(int x) {
	if (x == 0x1337) {
		printf("jumped through hoop 3!\n");
		check3 = 1;
	}
}

void vuln() {
	char buf[8];
	printf("jump through the hoops!\n");
	gets(buf);

}

void main() {
	vuln();
}

