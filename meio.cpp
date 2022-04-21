#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class ListNode {
    public:

    int val;
    ListNode *next;
    
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {} 
};

 

ListNode* readList(){
    int n;
    cin >> n;
    ListNode * head;
    for(int i = 0; i < n; i++){
        ListNode * ptr;
        int x;
        cin >> x;
        if( i == 0){
            head = new ListNode(x);
            ptr = head;
        }else{
            ptr->next = new ListNode(x, nullptr);
            ptr = ptr->next;
        }
    }
        
    return head;
        //ler entrada e cria a lista de elementos e retorna head(primeiro elemento)
}


int getMiddle(ListNode *head)
{
 ListNode *p1 = head;
 ListNode *p2 = head;
 
 while(p2!= nullptr && (p2 ->next)!= nullptr){
     p1 = p1->next; //aponto pro proximo elemento
     p2 = p2 ->next; // aponto pro segundo próximo
     if (p2 == nullptr) break;
     else p2 = p2->next;
     
     
 }
     return p1 -> val ;  
      
          
}




int main(){
    
    ListNode * head = readList();
    
    cout << getMiddle(head) << endl;

    
    return 0;    
}