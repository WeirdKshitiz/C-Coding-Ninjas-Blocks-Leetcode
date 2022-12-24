#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

int find( Node *head, int n,int count) 
{ 
     

    //if count equal too n return node->data 
    if(head->data == n) {
    return count; 
    }
    //recursively decrease n and increase  
    // head to next pointer  
    else{
    return find(head->next, n,count+1);  
    }
} 

// Node* deleteNodeRec(Node *head, int i) {
//     /* Don't write main().
//      * Don't read input, it is passed as function argument.
//      * Return output and don't print it.
//      * Taking input is handled automatically.
//      */
//     if(head->next==NULL)
//         return NULL;
    
//     if(i==0){
//         Node* temp=head->next;
//         head->next=NULL;
//         delete head;
//         return temp;
//     }
//     if(i==1){
//         Node *temp=head->next;
//         head->next=temp->next;
//         temp->next=NULL;
//         delete temp;
//         return head;
//     }
//     Node *curr=deleteNodeRec(head->next,i-1);
    
//     return head;
    
// }

Node* takeinput() {
    int data;
    cin >> data;
    Node* head = NULL, *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL)                  {
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main() {
    Node *head = takeinput();

 cout<<find(head,20,0);
    
    return 0;
}