#include <iostream>
#include <stdlib.h>

using namespace std;

struct node {
    int data;
    node* next;
};
node* head =NULL;

void input(int x)
{
    node* temp = new node();
    temp -> data =x;
    temp -> next = head;
    head = temp;
}
void find(node* temp, int key)
{
    while (temp!=NULL) {
        if (temp -> data==key) {
            cout <<"Found"<<endl;
            return ;
        }
        temp = temp -> next;
    }
    cout <<"Not Found"<<endl;
}
void printData()
{
    node* temp1=head;
    while (temp1!=NULL) {
        printf("%d ",temp1 -> data);
        temp1 = temp1 -> next;
    }
    printf("\n");
}

int main()
{
    int i,x,n,key;
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> x;
        input(x);
        printData();
    }
    cout<<"Enter A Number To Search:" <<endl;
    scanf("%d",&key);
    find(head,key);
    
}

