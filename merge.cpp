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

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    
     ListNode* head = NULL;
     ListNode* n= NULL;
    
    if(!l1){
        return l2;
    }
    if(!l2){
        return l1;
    }
    
    if(l2->val > l1->val){
        head = n = l1;
        l1 = l1->next;
    }
    else{
        head = n = l2;
        l2 = l2->next;
    }
    
    while(l1 && l2){
       if(l1->val > l2->val){
           n->next = l2;
           n = l2;
           l2 = l2->next;
       } 
       else{
           n->next = l1;
           n = l1;
           l1 = l1->next;
       }
    }
    
    if(l1){
        n->next = l1;
    }
    
    if(l2){
        n->next = l2;
    }
    
    
    return head;
}
    


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

}


int main(){
    
    ListNode * list1 = readList();
    ListNode * list2 = readList();
    ListNode * head = mergeTwoLists(list1, list2);

    for(ListNode * ptr = head; ptr != nullptr; ptr = ptr->next)
        cout << ptr->val << endl;
    
    return 0;    
}