//https://oj.leetcode.com/problems/rotate-image/
/*
00 01 02
10 11 12
20 21 22
这里的行只影响结果的列，abs(row-rows)为目标列数。
这里的列只影响结果的行，col为目标行数。

20 11 00
21 11 01
22 12 02
*/
#include <vector>
#include <iostream>
using namespace std;
class Solution{
public:
	void rotate(vector<vector<int> > &matrix) {
		int rows = matrix.size();
		int cols = rows;
		vector<vector<int> > ans;//answer
		for (int i=0; i!=rows; i++)
		{//set ans capacity equals matrix
			vector<int> *t = new vector<int>;
			t->resize(cols);
			ans.push_back(*t);
		}
		int rows_cal = rows--;
		for (int cols_now = 0; cols_now!=cols; cols_now++)
		{
			for (int rows_now = rows; rows_now >= 0; rows_now--)
			{
				ans[cols_now][rows-rows_now] = matrix[rows_now][cols_now];
			}
		//	output_matrix(ans);
		}
		matrix = ans;
	}
	void output_matrix(vector <vector <int> > &matrix)
	{
		for (vector<vector<int> >::iterator itr_row = matrix.begin();
				itr_row != matrix.end();
				++itr_row)
		{
			for (vector<int>::iterator itr_col = itr_row->begin();
					itr_col != itr_row->end();
					++itr_col)
			{
				cout << *itr_col << "  ";
			}
			cout << endl;
		}
		cout << endl;
		cout << endl;
	}

};
int main(void)
{
	Solution s;
	vector<vector<int> > matrix;
	matrix.push_back (*(new vector<int>));
	int i = 0;
	for (vector<vector<int> >::iterator itr = matrix.begin();
			itr != matrix.end();
			++ itr)
	{
		itr->push_back(i++);
	}

	s.output_matrix(matrix);
	s.rotate(matrix);
	s.output_matrix(matrix);
}
	
