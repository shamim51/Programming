#include <iostream>

using namespace std;

struct ListNode {
   int data = 0;         
   ListNode* next = nullptr;   
};


void addValue(ListNode*&p , int v){
 
  
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

void doSomethingMore(ListNode *&n){
    
    ListNode *head = n;
    int counter = 0;
    int coutner_2 = 0;
    int counter_3 = 0;
    ListNode *current = head;
 
    ListNode *pNode;
    ListNode *PNode_next;
 
    ListNode *tNode;
    ListNode *tNode_pre;
    ListNode *tNode_next;
 
 
    ListNode *temp;
 
    while(current != nullptr){
        counter = counter + 1;
        current = current->next;
    }
 
    if(counter%2 == 1){
        current = head;
        
        while(coutner_2 < counter/2){
            coutner_2 = coutner_2 + 1;
            cout<<"***"<<endl;
            counter_3 = 1;
 
            tNode = current;
            tNode_next = tNode->next;
 
            pNode = head;
            
 
            while(counter_3 < (counter-coutner_2)){
                counter_3 = counter_3 + 1; 
                pNode = pNode->next;
 
            }
            
            
            PNode_next = pNode->next;
            
 
            temp = PNode_next;
 
            pNode->next = tNode;
            tNode->next = PNode_next->next;//problem 
            
 
            if(tNode == head){
                temp->next = tNode_next;
                head = temp;
                //n = head;
 
            }
            else{
                tNode_pre->next = temp;
                temp->next = tNode_next;
            }
            tNode_pre = temp;
            cout<<head->data;
            //break;
 
            current = current->next;
            cout<<"***"<<endl;
        }
    }
 
}


int size(ListNode *s){
    
    if(s == nullptr){
        return 0;
    }
    else{
        int count = 0;
        while(s!= nullptr){
           count = count + 1;
           s = s->next;
        }
      return count;
    }  
}


// printing with comma 
void printList(ListNode *n){
    
    if( n == nullptr){
        return;
    }
    
    int c = size(n);

    int i = 1;
   while(n!=nullptr && i<c){
       cout<< n->data <<", ";
       n = n->next;
     i= i + 1;
   } 
   cout<< n->data;
    n = n->next;
    cout<<endl;
}


int main()
{
    ListNode *front = nullptr;
    
  
    addValue(front,1);
    addValue(front,2);
    addValue(front,3);
    addValue(front,4);
    addValue(front,5);
    addValue(front,6);
    addValue(front,7);
   
    
    doSomethingMore(front);
    //printList(front);
           
        return 0;
}