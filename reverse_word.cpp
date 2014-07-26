#include <iostream>
#include <string>
#include <stack>
#define USERDEBUG
using namespace std;
class Solution{
	public:
		void reverseWords(std::string &s){
			std::stack<string> stk;
			unsigned int iBegin=0;
			unsigned int iEnd=0;
			const char blank=' ';
			while ((iEnd = s.find(blank,iBegin))!=string::npos)
			{
				if (iEnd == iBegin)
				{//front blank or mutiple blank
					iBegin ++;
					continue;
				}
#ifdef USERDEBUG
			cout << endl;
			cout << iBegin<< "  ";
			cout << iEnd << "   "<< endl;
//			cout << s[iBegin];
//			cout << s[iEnd];
			cout << s.substr(iBegin, iEnd-iBegin)<<endl;
//:w
	//		return;
#endif
				stk.push(s.substr(iBegin, iEnd-iBegin));
				iBegin = iEnd;
			}
			if (iBegin==0 && !e.empty())
				stk.push(s);
			s.clear();
			while (!stk.empty())
			{
				s = s + stk.top();
				s = s + ' ';
				stk.pop();
			}
		}
};
int main(void)
{
	//std::string str = "the sky is blue";
	std::string str = " NetWork   is  too   old.  ";
	Solution s;
	s.reverseWords(str);
	std::cout << str << std::endl;
	return 0;


}
