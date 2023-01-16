class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
     unordered_map<int*,int>ans;
     while(headA!=NULL)
     {
         int *s=&headA->val;
         ans[s]++;
         headA=headA->next;
     }
     while(headB!=NULL)
     {
          int *s=&headB->val;
         ans[s]++;
         if(ans[s]==2)
         {return headB;}
         headB=headB->next;
     }
     return NULL;
    }
};
