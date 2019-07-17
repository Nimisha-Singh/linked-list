// Print a given linked list in reverse order. Tail first. You can?t change any pointer in the linked list
#include <iostream>
class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
using namespace std;
node* takeinput(){
    int data;
    cin>>data;
    node* head=NULL,*tail=NULL;
    while(data!=-1){
        node *newnode=new node(data);
        if(head==NULL)                  {
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
        cin>>data;
    }
    return head;
}
void print(node *head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void print_linkedlist_spl(node*head)
{
    //write your code here
node* temp=head;
if(temp->next == NULL)
{
    cout<<temp->data<<" ";
    return;
}
    temp=temp->next;
    print_linkedlist_spl(temp);
    cout<<head->data<<" ";
}



int main()
{
    node*head=takeinput();
    print_linkedlist_spl(head);
    return 0;
}


