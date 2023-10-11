#include<bits/stdc++.h>
using namespace std;

template <typename U>

class graph{
    unordered_map<U,list<pair<U,int>>>h;

    public:
    void insert(U x,U y,int w,bool bidirectional=true){
        h[x].push_back(make_pair(y,w));
        if(bidirectional==true){
            h[y].push_back(make_pair(x,w));
        }
    }

    void printGraph(){
        for(auto x:h){
            cout<<x.first<<" --> ";
            for(auto z:x.second){
                cout<<'('<<z.first<<','<<z.second<<')'<<" ";
            }
            cout<<endl;
        }
    }

    void dijkstrasAlgo(U src, int noOfnodes){
        set<pair<int,U>>s;

        int distance[noOfnodes+1];
        for(int i=0;i<noOfnodes+1;i++){
            distance[i]=INT_MAX;
        }

        distance[src]=0;
        s.insert({0,src});
        while(!s.empty()){
            auto it=*(s.begin());  
            int tempDistance=it.first;
            U tempKey=it.second;
            s.erase(it);

            for(auto x:h[tempKey]){
                U tempKey2=x.first;
                int edgeWeight=x.second;
                if(tempDistance+edgeWeight<distance[tempKey2]){
                    if(distance[tempKey2]!=INT_MAX){    
                        s.erase({distance[tempKey2],tempKey2});
                    }
                    distance[tempKey2]=tempDistance+edgeWeight;
                    s.insert({distance[tempKey2],tempKey2});
                }
            }
        }
        
        for(auto x: distance){
            if(x!=INT_MAX and x!=0){
                cout<<x<<" ";
            }
        }
        cout<<endl;
    }
};

int main(){
    int t;
    cin>>t;
    while(t>0){
        graph<int>g;
        int noOfNodes,noOfEdges;
        cin>>noOfNodes>>noOfEdges;
        while(noOfEdges>0){
            int x,y,w;
            cin>>x>>y>>w;
            g.insert(x,y,w);
            noOfEdges--;
        }

        //Printing graph - 
        // g.printGraph();
        // cout<<endl;

        int src;
        cin>>src;
        g.dijkstrasAlgo(src,noOfNodes);
        t--;
    }
    return 0;
}