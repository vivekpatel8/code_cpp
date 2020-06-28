

  /* struct ListNode {
     int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };*/
/*
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       int a , b, c = 0;
        a = l1->val;
        b = l2->val;
        int product = (a + b + c);
        c = product / 10;
        product = product % 10;
        ListNode * ans = new ListNode(product);
        ListNode * temp = ans;
        l1 = l1->next;
        l2 = l2->next;
        while (l1 != nullptr || l2 != nullptr)
        {
            a = 0, b = 0;
            if(l1 != nullptr){
            a = l1->val;
            l1 = l1->next;
            }
            if(l2 != nullptr){
            b = l2->val;
            l2 = l2->next;
            }
            product = (a + b + c);
            c = product / 10;
            product %= 10;
            temp->next = new ListNode(product);
            temp = temp->next;
        }
        if(c != 0){
            temp->next = new ListNode(c);
            temp = temp->next;
        }
        return ans;
    }
};*/
#include<bits/stdc++.h>
using  namespace  std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.length();
        int max_len = INT_MIN;
        unordered_map<char, bool> um;
        queue<char> q;
        for(int i = 0;i<len;i++){
            if(!um[s[i]]){
                q.push(s[i]);
                um[s[i]] = true;
            }
            else{

                int x = q.size();
                max_len = max(max_len, x);
                while (q.front() != s[i] && !q.empty())
                {   um[q.front()] = false;
                    q.pop();
                }

                if(!q.empty()){
                um[q.front()] = false;
                q.pop();}

            }
        }
        return max_len;
    }
};
