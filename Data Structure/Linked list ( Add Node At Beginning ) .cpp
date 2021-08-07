#include <iostream>

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
        cout << temp -> data ;

        temp = temp -> next;
    }
    cout << endl;
}

int main ()
{
    int i,x,n;
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> x;
        input(x);
        output();
    }
}
