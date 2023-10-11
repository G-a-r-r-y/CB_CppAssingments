#include<iostream>
#include<map>
#include<vector>
using namespace std;


int main(){
    map<string,int>m1;
    int x,n;
    cin>>x>>n;
    string name;
    int sal;
    for(int i=0;i<n;i++){
        cin>>name;
        cin>>sal;
        m1.insert(pair<string,int>(name,sal));
    }

    vector<pair<string,int>> v;
    map<string,int>::iterator ptr=m1.begin();
    while(ptr!=m1.end()){
        // cout<<ptr->first<<" "<<ptr->second<<endl;
        v.push_back(make_pair(ptr->first,ptr->second));
        ptr++;
    }

    // for(int i=0;i<v.size();i++){
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    // }

    //Sorting - 
    for(int i=0;i<v.size()-1;i++){
        for(int j=0;j<v.size()-i-1;j++){
            if(v[j].second<v[j+1].second){
                swap(v[j],v[j+1]);
            }
        }
    }

    for(int i=0;i<v.size();i++){
        if(v[i].second>=x){
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }else{
            break;
        }
    }
    return 0;    
}
