/*
Program		: Reverse a Word
Nama		: Anugerah Prima Bagaskara
NPM	/ Kelas	: 140810180006 / B
Deskripsi	: Program ini berfungsi untuk mencetak kalimat yang diinput secara terbalik.
Tanggal		: 2019/05/07
*/
#include <iostream>
using namespace std;

const int maxElement=255;

struct Stack{
    char info[maxElement];
    int TOP;
};

void push(Stack& S){
	char temp[maxElement]; int x=0;
	cin.getline(temp,maxElement);
	while(temp[x]!='\0'){
		S.info[x]=temp[x];
		x++;
	}
	S.TOP=x-1;
}
void pop(Stack& S){
    while(S.TOP!=-1){
    	cout<<S.info[S.TOP];
    	S.TOP--;
	}
}

int main(){
	Stack S;
	push(S);
	pop(S);
}
