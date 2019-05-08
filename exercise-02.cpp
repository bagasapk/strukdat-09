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

struct node{
    char info;
    node *next;
};
struct Stack{
	node *head,*tail;
};

void createNode(node* &newNode, char info){
	newNode=new node;
	newNode->info=info;
	newNode->next=NULL;
}
void createStack(Stack& S){
	S.head=NULL;
	S.tail=NULL;
}
void insertLast(Stack& S, node *newNode){
	if(S.head==NULL){
		S.head=newNode;
		S.tail=newNode;
	}else{
		S.tail->next=newNode;
		S.tail=newNode;
	}
}
void deleteLast(Stack& S, node* &delNode){
	if(S.head==NULL){
		cout<<"Stack Kosong"<<endl;
	}else if(S.head==S.tail){
		delNode=S.head;
		S.head=NULL;
		S.tail=NULL;
	}else{
		node *last=S.head;
		while(last->next!=S.tail){
			last=last->next;
		}
		delNode=S.tail;
		S.tail=last;
	}
}
void push(Stack& S){
	char temp[maxElement]; int x=0;	node *newNode;
	cin.getline(temp,maxElement);
	while(temp[x]!='\0'){
		createNode(newNode,temp[x]);
		insertLast(S,newNode);
		x++;
	}
}
void pop(Stack& S){
	node *delNode;
	while(S.head!=NULL){
		deleteLast(S,delNode);
		cout<<delNode->info;
	}
}
int main(){
	Stack S;
	createStack(S);
	push(S);
	pop(S);
}
