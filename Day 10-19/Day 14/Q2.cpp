#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//LRU Cache

//private:
list<int> lru;
unordered_map<int,pair<int,list<int>::iterator>> mp;
int siz;

/*public:
LRUCache(int cap) 
{
    siz=cap;
}*/

int get(int key) 
{
    if(mp.find(key)!=mp.end())
    {
        lru.erase(mp[key].second);
        lru.push_front(key);
        mp[key].second=lru.begin();
        
    return mp[key].first;
    }
    
return -1;
}

void put(int key, int val) 
{
    if(mp.find(key)==mp.end())
    {
        if(lru.size()==siz)
        {
            mp.erase(lru.back());
            lru.pop_back();
        }
    }
    else
        lru.erase(mp[key].second);

    lru.push_front(key);
    mp[key]={val,lru.begin()};
    
return;
}

int main()
{
    boost;

    int cap;
    cin>>cap;
    siz=cap;
    
return 0;
}