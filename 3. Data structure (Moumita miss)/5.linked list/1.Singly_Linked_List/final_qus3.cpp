#include <iostream>
using namespace std;

struct ListNode {
   char data = ' ';         
   ListNode* next = nullptr;   
};


void addValue(ListNode*&p , char v){
 
  
    if(p == nullptr){
        p = new ListNode;
        p->data = v;
    }
    else{
        ListNode *current = p;
        
       
        
        while(current->next!=nullptr){
            
           current = current->next; 
           
        }
        
        ListNode *x = new ListNode; 
      
        x->data = v;
        current->next = x;
        
        
    }
    
}

void removeBasePairs(ListNode *&p){
    
    if(p == nullptr){
        return;
    }
    
    
    while( (p->data == 'G' && p->next->data == 'C') || (p->data == 'A' && p->next->data == 'T')){
        
        ListNode *s = p;
        p = p->next;
        delete s;
        
        ListNode *s1 = p;
        p = p->next;
        delete s1;
        
        
        if(p == nullptr){ 
            return;
        }
    }
    if(p == nullptr){
        return;
    }
    else if(p->next == nullptr){
        return;
    } 
    
    ListNode *current = p;
     
    
    while(current->next->next != nullptr){
        
          if((current->next->data == 'A' && current->next->next->data == 'T') ||(current->next->data == 'G' && current->next->next->data == 'C')){
            
            ListNode *t = current->next;
            
            current-> next = current->next->next;
            
            delete t;
            
            ListNode *t1 = current->next;
            
            current-> next = current->next->next;
            
            delete t1;
        
        }

       /* else if(current->next->data == 'G' && current->next->next->data == 'C'){
            
            ListNode *t = current->next;
            
            current-> next = current->next->next;
            
            delete t;
            
            ListNode *t1 = current->next;
            
            current-> next = current->next->next;
            
            delete t1;
        
        }*/

        else{
            current = current -> next;
        }
        
        
        /*if(current->next->next == nullptr){
            break;
        }*/
        if(current == nullptr || current->next == nullptr){
            break;
        }
    }
}

void printList(ListNode *n){
    while(n!=nullptr){
        cout<< n->data<<" ";
        n = n->next;
    }
    cout<<endl;
}

int main()
{
    ListNode *front = nullptr;
    
    addValue(front,'A');
    addValue(front,'T');
    addValue(front,'G');
    addValue(front,'G');
    printList(front);
   
   
    removeBasePairs(front);
          
    printList(front);
         
    return 0;
}