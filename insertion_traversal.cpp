#include <bits/stdc++.h>
using namespace std;

struct node{
  int data;
  struct node *next;
    
};


int main()
{
    struct node *last=NULL;
    
    int n;//no of element to be inseted in circular linked list-----
    cin>>n;
    
    while(n--){
        int tmp;
        cin>>tmp;
        node *tmp1=new node();
        tmp1->data=tmp;
        tmp1->next=NULL;
        
        //-----insertion in empty circular linked list--------
        
        if(last==NULL){
            last=tmp1;
            last->next=last;
        }
        
        //------insertion at last in circular linked list----------
        else{
            tmp1->next=last->next;
            last->next=tmp1;
            last=tmp1;
        }
        
    }
    
    
    //---insertion at beginning of circular list node of value tmp-----
    int tmp;
    cin>>tmp;
    
    node *tmp1=new node();
    tmp1->data=tmp;
    tmp1->next=NULL;
    
    tmp1->next=last->next;
    last->next=tmp1;
    
    
    //-----insertion node with data y in middle after element x-------------
        
        int x,y;
        cin>>x>>y;
        node *k=last;
        if(k==NULL){
            cout<<"empty circular list"<<endl;
        }
        else if(k->next==k){
            cout<<"circular list with one element"<<endl;
            if(k->data==x){
                tmp1=new node();
                tmp1->data = y;
                tmp1->next=NULL;
                
                tmp1->next=last->next;
                last->next=tmp1;
                
            }
            else{
                cout<<"data "<<x<<" not found"<<endl;
            }
        }
        else{
            
            while(k->data!=x){
                k=k->next;
                if(k==last){
                     cout<<"data "<<x<<" not found"<<endl;
                     
                     break;
                }
            }
            if(k->data==x){
                tmp1=new node();
                tmp1->data = y;
                tmp1->next=k->next;
                
                k->next=tmp1;
            }
            
        }
        
        
    //----------traversal-----------    
    struct node *p=last;
    if(p==NULL){
        cout<<"empty list"<<endl;
    }
    else if(p->next==p){
    cout<<p->data<<endl;    
    
    }
    else{
        p=p->next;
        while(p!=last){
            cout<<p->data<<" ";
            p=p->next;
        }
        cout<<p->data<<endl;
        
    }
    
    
    
    return 0;
}
