// C++ program to demonstrate min heap
#include <iostream>
#include <queue>

using namespace std;

void showpq(priority_queue <int, vector<int>, greater<int>> gq)
{
	priority_queue <int, vector<int>, greater<int>> g = gq;
	while (!g.empty())
	{
		cout << '\t' << g.top();
		g.pop();
	}
	cout << '\n';
}

int main ()
{
	priority_queue <int, vector<int>, greater<int>> gquiz;
	gquiz.push(4);
	gquiz.push(6);
	gquiz.push(3);
	gquiz.push(2);


	cout << "The priority queue gquiz is : ";
	showpq(gquiz);

	cout << "\ngquiz.size() : " << gquiz.size();
	cout << "\ngquiz.top() : " << gquiz.top();


	cout << "\ngquiz.pop() : ";
	gquiz.pop();
	gquiz.pop();
	gquiz.push(5);
	showpq(gquiz);

	return 0;
}

