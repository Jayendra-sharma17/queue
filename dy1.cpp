#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main()
{
    queue<int>q;
    cout<<"pushing in the queuu"<<endl;
    q.push(2);
    cout<<"front elemenyt is"<<q.front()<<endl;
    q.push(3);
q.push(5);
q.push(511);
q.push(5112);
q.push(51143);
q.push(5116);
q.push(5118);

while (!q.empty())
{
    cout<<q.front()<<endl;
    q.pop();
}

cout<<"the size of queue is"<<q.size();
q.pop();
cout<<"front after popping"<<q.front()<<endl;
if (q.empty())
{
    cout<<"the given queue is empty"<<endl;
}
else{
    cout<<"queue is not empty"<<endl;
}
cout<<"the siuze of queue"<<q.size()<<endl;
cout<<"the rear element in queue is"<<q.back()<<endl;
// cout<<"checking more function in queue"<<q.emplace(q.push(),45)<<endl;

    return 0;
}