#include <iostream>
#include <stack>
using namespace std;

struct ListNode{
	int val;
	ListNode *next;
	ListNode (int x) : val(x), next(NULL) {};
};
class Solution{
	public:
		ListNode *reverseBetween(ListNode *head, int m, int n)
		{
			stack<int> stk;
			ListNode *p = head;
			ListNode *chg_head = NULL;
			int i=1;
			for ( i = 1; i < m; i++)
			{
				p = p->next;
			}
			chg_head = p;
			for ( ; i<=n; i++)
			{
				stk.push(p->val);
				p->val = 0;
				p = p->next;
			}
			ListNode *k = chg_head;
			while(!stk.empty())
			{
				k->val = stk.top();
				stk.pop();
				k = k->next;
			}
			return head;
		}
		void outputList(ListNode *head)
		{
			while(head!=NULL)
			{
				cout << head->val;
				head = head->next;
			}
			cout << endl;
		}
};
int main(int argc, char *argv[])
{
	ListNode *h = NULL;
	ListNode *p = NULL;
	h = new ListNode(1);
	p = h;
	for (int i=2; i<=5; i++){
		p->next  = new ListNode(i);
		p = p->next;
	}
	Solution s;
	s.outputList(h);
	s.reverseBetween(h, 1, 1);	
	s.outputList(h);
	

	
}
