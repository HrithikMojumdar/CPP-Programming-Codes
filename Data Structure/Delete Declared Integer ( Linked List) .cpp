#include <iostream>
#include <stdlib.h>

using namespace std;

struct node {
    int data;
    node* next;
};
node* head=NULL;

void input (int x)
{
    node* temp = new node();
    temp -> data = x;
    temp -> next = head;
    head = temp;
}
void output ()
{
    node* temp = head;
    while (temp!=NULL) {
        cout << temp -> data << " ";

        temp = temp -> next;
    }
    cout << endl;
}
void find (node* temp , int key)
{
    while (temp!=NULL) {
        if (temp -> data == key) {
            cout << "Search Found" << endl;
            return;
        }
        temp = temp -> next ;
    }
    cout << " Not Found" <<endl;
}

void Delete (int x)
{
    node* temp = head;
    if(temp -> data == x){
        node* del = temp;
        head = del -> next;
        free(del);
        return;
    }
    while (temp->next->data != x)
    {
        temp = temp -> next;
    }
    node* del = temp -> next;
    temp-> next = del -> next;
    free(del);
    
}



int main ()
{
    int i,x,n, dt;
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> x;
        input(x);
        output();
    }
    cin >> dt;
    Delete(dt);
    output();
}
