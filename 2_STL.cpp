#include <bits/stdc++.h>

using namespace std;

int main(){

    // PAIR
    pair<int, int> p = {1, 3};
    cout << p.first<<" "<<p.second<<endl;

    pair<int, pair<int, int>> q = {1, {2, 3}};
    cout << q.first<<" "<<q.second.first<< "" <<q.second.second << endl;

    pair<int, int> arr[] = { {1,2}, {2,3}, {3,4}};
    cout << arr[0].second;


    // VECTOR
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> w;
    w.push_back({1,2});
    w.emplace_back(1,2);

    vector<int> x(5,100);

    vector<int> y(5);

    vector<int> v1(5, 20);
    vector<int> v2(v1);

    cout << v2[0] << endl;

    // ITERATORS
    vector<int>::iterator it1 = v.begin();
    vector<int>::iterator it2 = v.end();
    vector<int>::iterator it3 = v.rbegin();
    vector<int>::iterator it4 = v.rend();

    cout << *(it2-1) << endl;

    cout << v.back()<< endl;

    for(vector<int>::iterator it =v1.begin(); it!=v1.end(); it++){
        cout << *it << endl;
    }

    for(auto it =v1.begin(); it!=v1.end(); it++){
        cout << *it << endl;
    }

    for(auto it : v1){
        cout << it << endl;
    }

    v1.erase(v1.begin()+1);

    v1.erase(v1.begin()+1, v.begin()+1);


    vector<int> c(5, 8);
    c.insert(c.begin(), 8);
    c.insert(c.begin()+1, 3, 55);



    for(auto it : c){
        cout << it << endl;
    }

    vector<int> d(5, 2);

    cout << d.size();
    d.pop_back();


    c.swap(d);
    for(auto it : d){
        cout << it << endl;
    }
    d.clear();
    cout<< d.empty();

    LIST
    list<int> a;
    a.push_back(1);
    a.emplace_back(2);

    a.push_front(5);
    a.emplace_front(6);

    //DEQUEUE

    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);


    dq.push_front(1);
    dq.push_back(2);

    dq.pop_front();
    dq.pop_back();


    //STACK
    stack<int> st;
    st.push(1);
    st.push(2);

    cout << st.top();

    //QUEUE
    queue<int> qe;
    qe.push(1);
    qe.push(2);

    qe.back() +=5;

    qe.pop();

    //PRIORITY QUEUE
    priority_queue<int> pq;
    pq.push(1);
    pq.push(3);
    pq.push(2);

    cout << pq.top();

    //minimum pq
    priority_queue<int, vector<int>, greater<int>> p;
    p.push(4);
    p.push(1);
    p.push(9);

    cout << p.top();


    //SET: unique and sorted
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);

    auto it = s.find(8);

    cout << *it;

    for(auto it: s){
        cout << it;
    }

    // MUTLISET: only sorted not unique
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);


    //UNORDERED_SET: only unique not sorted
    unordered_set<int> us;
    us.insert(3);
    us.insert(1);
    us.insert(5);

    //MAP
    map<int, int> mp;

    map<int, pair<int, int>> mp1;

    mp[1]= 2;
    mp[1]= 5;
    mp[1] = 3;

    // cout << mp[1];



    //MULTI MAP
    multimap<int, int> mmp;

    //UNOREDRED MAP
    unordered_map<int, int> ump;



    //FUNCTIONS
    sort(start, end)
    sort(start, end, greater<int>)

    sort(start, end, comp) //comp is custom function written accoding to the requirement

    int num = 15;  
    int c = __builtin_popcount(num); //return number of set bits
    cout << c;

    long long num2= 12312423432543;
    int c1= __builtin_popcountll(num2);
    cout << c1;


    string s = "231";

    sort(s.begin(), s.end());
    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));


    int max = *max_element(a, a+n);

    return 0;
}