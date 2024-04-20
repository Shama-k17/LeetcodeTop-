/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode*h1=new ListNode();
       ListNode*l3=h1;
     
       ListNode* c;
       int carry=0,sum,digit;
       while(l1!=NULL&&l2!=NULL)
       {
        sum=l1->val+l2->val+carry;
        digit=sum%10;
        carry=sum/10;
       ListNode* newn=new ListNode(digit);
       l3->next=newn;
        l3=l3->next;
        
        l1=l1->next;
        l2=l2->next;
       } 
       if(l1==NULL)
       {
         c=l2;
       }
       else
       {
        c=l1;
       }
       while(c!=NULL)
       {
        sum=c->val+carry;
        digit=sum%10;
        carry=sum/10;
     ListNode* newn=new ListNode(digit);
       l3->next=newn;
        l3=l3->next;
       
        c=c->next;
       }
       if(carry==1)
       {
      ListNode* newn=new ListNode(carry);
      l3->next=newn;
        
       }
       return h1->next;
    }
};