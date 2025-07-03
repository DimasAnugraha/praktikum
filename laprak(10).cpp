#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
};

void tambahNode(Node*& head,int nilai){
	Node* baru= new Node;
	baru->data=nilai;
	baru->next= NULL;
		
	if(head==NULL){
		head=baru;
	}else{
		Node* temp=head;
		while(temp->next !=NULL){
			temp=temp->next;
		}
		temp->next = baru;
	}
}

int main(){
	Node* head;
	head= new Node;
	head->data=5;
	head->next=NULL;
	cout<<"Isi data node pertama(head) adalah: "<<head->data<<endl;
	
	Node* second;
	second=new Node;
	second->data=6;
	second->next=NULL;
	cout<<"Isi data node kedua(second) adalh: "<<second->data<<endl;
	
	head->next=second;
	cout<<"Isi data node kdua dicetak dari node pertama adalah: ";
	cout<<head->next->data<<endl;
	
	cout<<"Mencetak node pertama dari pointer head: ";
	cout<<head->data<<endl;
	cout<<"Mendetak node kedua dari pointer head: ";
	cout<<head->next->data<<endl;
	
	cout<<"Menggunakan perlangan untuk mencetak setiap data pada linked list\n";
	Node* current=head;
	int i=1;
	while(current != NULL){
		cout<<"Data ke-"<<i<<" > "<<current->data<<endl;
		i++;
		current=current->next;
	}
	cout<<"Mencetak kembali node pertama dari pointer head: ";
	cout<<head->data<<endl;
	cout<<"Mencetak kembali node kedua dari pointer head: ";
	cout<<head->next->data<<endl;
	
	cout<<endl;
	tambahNode(head, 7);
	tambahNode(head, 8);
	
	cout<<"Mencetak kembali node ketiga dari pointer head: ";
	cout<<head->next->next->data<<endl;
	cout<<"Mencetak kembali node keempat dari pointer head: ";
	cout<<head->next->next->next->data<<endl;
	
	return 0;
}

