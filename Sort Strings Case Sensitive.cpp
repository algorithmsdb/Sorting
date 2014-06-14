//  http://www.spoj.com/problems/DIFFICUL/

#include<bits/stdc++.h>
using namespace std;


struct icompare_char 
{
  bool operator()(char c1, char c2)
  {
      int x=abs(c1-c2);
      if(x==32){ return c2 < c1;}
    return c1 < c2;
  }
};

// return true if s1 comes before s2
struct compare
{
  bool operator()(std::string const& s1, std::string const& s2) {

    return std::lexicographical_compare(s1.begin(), s1.end(),
                                        s2.begin(), s2.end(),
                                        icompare_char());
  }
};


int main()
{
    int n;
    cin>>n;
    vector<string> m;
    string i;
    while(n--)
    {
        cin>>i;
        m.push_back(i);
    }
    sort(m.begin(),m.end(),compare());

    vector<string>::iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<*it<<"\n";
    }
}

