#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string cmd;
    cin>>cmd;

    if(cmd=="init"){

        int n;
        cin>>n;

        int cntr = 0;
        unordered_map<string, vector<pair<int, int>>> mp;

        while(cmd!="fin"){

            cin>>cmd;

            cntr++;
            int roll;
            string cls, food;

            cin>>roll>>cls>>food;

            mp[cls+food].push_back({cntr, roll});

        }

        vector<string> lst = {"BV", "AV", "BNV", "ANV", "NA"};

        int minSize = INT_MAX;

        

    }



}