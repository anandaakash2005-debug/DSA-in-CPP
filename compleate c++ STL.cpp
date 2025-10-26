#include<bits/stdc++.h>
using namespace std;

//pair(utility libery)
void explainpair()
{
    // Simple pair
    pair<int,int> p1 = {1,3};
    cout << p1.first << " " << p1.second << endl;

    // Nested pair (int, pair<int, int>)
    pair<int, pair<int,int>> p2 = {5,{8,6}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    // Array of pairs
    pair<int,int> arr[] = {{1,2},{2,5},{5,1}};
    cout << arr[1].second << endl;
}

//vector(container)
//it uses while we did't sure the size of particular deta structure
void explainvector()
{
	vector<int> v;
	
	v.push_back(1);
	v.emplace_back(2);
	
	vector<pair<int,int>>vec;
	
	v.push_back({1,2});
	v.emplace_back(1,2);
	
	vector<int>v(5,100);//{100,100,100,100,100}
	
	vector<int>v(5);//{0,0,0,0,0} or any garbage value 
	// we can increase its size
	
	vector<int>v1(5,10);//{10,10,10,10,10}
	vector<int>v2(v1);// copy of v1 => {10,10,10,10,10}
	
	vector<int>::iterator it=v.begin();//using iterator it actually pointing to the memory 
	it++;
	cout<<*(it)<<" ";// using *(of any memory address) it means to the value lies in that memory location
	
	it=it+2;
	cout<<*(it)<<" ";
	
	//if vector is this {10,20,30,40}
	vector<int>::iterator it=v.end();//it pointing to the right after 40;
	
	cout<<v[0]<<" ";
	cout<<v.back()<<" ";
	
	for(vector<int>::iterator it=v.begin();it != v.end();it++)
	{
		cout<<*(it)<<" ";
	}
	
	for(auto it=v.begin();it != v.end;it++)
	{
		cout<<*(it)<<" ";
	}
	
	for(auto it:v)
	{
		cout<<*(it)<" ";
	}
	
	//{10,11,13,23}
	v.erase(v.begin()+1);// =>{10,13,23}
	
	//{10,20,12,26,35}
	v.erase(v.begin()+2,v.begin()+4); // =>{10,20,35}
	
	//insert function
	vector<int>v(2,100);//{100,100}
	v.insert(v.begin(),300);//=>{300,100,100}
	v.insert(v.begin()+1,2,10);//=>{300,10,10,100,100}
	
	vector<int>copy(2,50);//{50,50}
	v.insert(v.begin(),copy.begin(),copy.end());//{50,50,300,10,10,100,100}
	
	//{50,50}
	cout<<copy.size();//2
	copy.pop_back();//{50}
	
	//v1->{10,20};
	//v2->{30,40};
	v1.swap(v2);//v1->{30,40};v2->{10,20};
	
	v.clear();//erases the entire vector
	
	cout<<v.empty();
}
//stack
void explainstack()//filo(first in last out)
{
	stack<int>st;
	st.push(1);//{1}
	st.push(4);//{4,1}
	st.push(7);//{7,4,1}
	st.push(3);//{3,7,4,1}
	st.emplace(5);//{5,3,7,4,1}
	
	cout<<st.top();//prints->5;
	
	st.pop();//st=>{3,7,4,1};
	
	cout<<st.size();//4
	
	cout<<st.empty();
	
	stack<int>st1,st2;
	
	st1.swap(st2);
}
//queue
void explainqueue()//fifo(first in first out)
{
	queue<int>q;
	q.push(1);//{1};
	q.push(4);//{1,4};
	q.emplace(3);//{1,4,3};
	
	q.back()+=5;//(3+5=8) prints->8
	cout<<q.back();//prints->8
	
	//now q is{1,4,8}
	cout<<q.front();//prints->1;
	
	q.pop();//{2,9}
	
	cout<<q.front();//prints2;
	
	queue<int>q1,q2;
	q1.swap(q2);
}

//priority queue(max heap)
void explainpq()
{
	priority_queue<int>pq;
	
	pq.push(5);//{5}
	pq.push(2);//{5,2}
	pq.push(8);//{8,5,2}
	pq.emplace(10);//{10,8,5,2}
	
	cout<<pq.top();//prints->10;
	
	pq.pop();//{8,5,2}
	
	cout<<pq.top();//prints->8
	//swap is same
	
	//priority queue(min heap)
	priority_queue<int,vector<int>,greater<int>>pq;
	pq.push(5);//{5}
	pq.push(2);//{2,5}
	pq.push(8);//{2,5,8}
	pq.emplace(10);//{2,5,8,10}
	
	cout<<pq.top();//prints->2
}

//set
void explainset()
{
	set<int>st;
	st.insert(1);//{1}
	st.emplace(2);//{1,2}
	st.insert(2);//{1,2}
	st.insert(4);//{1,2,4}
	st.insert(3);//{1,2,3,4}
	//begin(),end(),size() are same as vector
	//empty() and swap() are same as those above
	
	//{1,2,3,4,5}
	auto it=st.find(3);// =>2
	auto it=st.find(6);// =>st.end()
	st.erase(5);//{1,2,3,4}//erase 5//takes logarthimic time
	
	int cnt=st.count(1);//if 1 exists prints->1 either prints->0
	
	//{1,2,3,4,5}
	auto it1=st.find(2);
	auto it2=st.find(4);
	st.erase(it1,it2);//after erase{1,4,5}
}

//map{key,value}//unique keys in sorted order
void explainmap()
{
	map<int,int>mpp;
	map<int,pair<int,int>>mpp;
	map<pair<int,int>,int>mpp;
	
	mpp[1]=2;//{1,2}
	mpp.emplace({3,1});//{3,1}
	mpp.insert({2,4});//{2,4}
	//map stors {
		//{1,2}
		//{2,4}    =>unique keys in sorted order
		//{3,1}
	//}
	
	mpp[{2,3}]=10;//{{2,3},10}
	
	for(auto it:mpp)
	{
		cout<<it.first<<" "<<it.second<<endl;//first->1 2;second->2 4;third->3 4
	}
	
	cout<<mpp[1]// O/p ->2
	cout<<mpp[3]// O/p ->1
	cout<<mpp[5]// O/p ->0
	
	auto it = mpp.find(3);
	cout<<*(it).second;// O/p ->1
	
	auto it=mpp.find(5); // denotes =>mpp.end()
	 
	//this is the syntax
	auto it=mpp.lower_bound(2);
	auto it=mpp.upper_bound(3); 
	
	//erase,swap,size,empty,are same as above
}

//multimap
void explainmultimap()
{
	//everything same as map,only it can store multiple keys
	//only mpp[key] can't be used
}

//unorderedmap(unique keys but not sorted)
void explainunorderedmap()
{
	//time complexity=>
	//map-> O(log n)
	//unorderedmap-> O(1) or O(n)
}

bool comp(pair<int,int>p1,pair<int,int>p2)
{
	if(p1.second < p2.second)
	return true;
	
	else if(p1.second > p2.second)
	return false;
	// if they are same
	else if(p1.first < p2.first)
	return true;
	
	return false;
}

void explainextra()
{
	sort(a,a+n);//to sort an array arr[4]={7,2,3,1} =>{1,2,3,7}
	sort(v.begin(),v.end());//to sort an vector
	
	sort(a+2,a+4);//{7,2,3,1} => {7,2,1,3}
	
	sort(a,a+n,greater<int>);//sorting in decending order
	
	pair<int,int>a[]={{1,2},{2,1},{4,1}};
	//sort it according to the second element
	//if second element is same,then sort 
	//it according to first element but in decending
	sort(a,a+n,comp);
	//{{4,1},{2,1},{1,2}}
	
	int num=7;//in binary 7=>111
	int cnt=_builtin_popcount();//to count setbits.O/P =>3
	
	int num=6;//in binary 6=>110
	int cnt=_builtin_popcount();//to count setbits.O/P =>2
	
	long long num=4464194151644978;
	int cnt=_builtin_popcountll();
	
	string s="1,2,3";
	sort(s.begin(),s.end());
	do{
		cout<<s<<endl;
	}
	while{next_permutation(s.begin(),s.end())};
	
	int maxi=*max_element(a,a+n);//to get max element in an array
}
int main()
{
    explainpair();
    return 0;
}

