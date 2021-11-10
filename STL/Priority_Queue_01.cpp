#include <bits/stdc++.h>
using namespace std;

int main()
{

    priority_queue<int> pq; //max heap  -> decreasing order of priority
    priority_queue<int,vector<int>,greater<int> > pq2;//min heap -> increasing order ->sorted

//push in log(n)
    for (int i = 0; i < 10; i++)
    {
        int num;
        cin >> num;
        pq2.push(num); // 0(log n)
    }

//pop in log(n)

while (!pq2.empty()){
    cout<<pq2.top()<<" ";
    pq2.pop();
}

    return 0;
}