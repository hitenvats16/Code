#include<bits/stdc++.h>

using namespace std;

class node{
    public:
        int val;
        node* next;
        node(int data){
            this->val = data;
            this->next = NULL;
        }
};

class LinkedList{
    private:
        node* head;
        node* tail;
        int size;
    public:
        LinkedList(){
            this->head=NULL;
            this->tail=NULL;
            size=0;
        }

        void insertAtHead(int val){
            node* temp = new node(val);
            if(head==NULL) { head=temp; tail=temp; size+=1;}
            else {
                temp->next = head;
                head=temp;
                size+=1;
            }
        }

        void insertAtTail(int val){
            node* temp = new node(val);
            if(tail==NULL) { head=temp; tail=temp; size+=1;}
            else{
                tail->next=temp;
                tail=temp;
                size+=1;
            }
        }

        void insertInMiddle(int val, int pos){
            if(pos<size and pos>=1){
                node* temp = head;
                int cnt=1;
                while(cnt<pos){
                    temp=temp->next;
                    cnt++;
                }
                node* n= new node(val);
                n->next=temp->next;
                temp->next=n;
            } else if(pos<1) insertAtHead(val);
            else insertAtTail(val);
        }

        void deleteFromHead(){
            node* temp = head;
            head=head->next;
            delete temp;
            temp->next=NULL;
            temp=NULL;
        }

        void deleteFromTail(){
            node* temp = head;
        }

        void printLL(){
            node* temp = head;
            while(temp!=NULL){
                cout<<temp->val<<"->";
                temp=temp->next;
            }
        }
};

int main(){
    LinkedList LL;
    LL.insertAtHead(444);
    LL.insertAtTail(34);
    LL.insertAtHead(23);
    LL.insertInMiddle(56,-1);
    LL.deleteFromHead();
    LL.printLL();
}