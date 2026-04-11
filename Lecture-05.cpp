// #include<iostream>
// using namespace std;

// class heap{
// public:
//     int arr[100];
//     int size;

//     heap(){
//         arr[0] = -1;   // 1-based indexing
//         size = 0;
//     }



//  -------- INserting Function  -------------------------------



    // void insert(int val){

    //     size = size + 1;
    //     int index = size;
    //     arr[index] = val;   // 🔥 Important line (missing thi)

    //     while(index > 1){

    //         int parent = index / 2;

    //         if(arr[parent] < arr[index]){
    //             swap(arr[parent], arr[index]);
    //             index = parent;
    //         }
    //         else{
    //         return;
    //         }
    //     }
    // }

    // void print(){
    //     for(int i = 1; i <= size; i++){
    //         cout << arr[i] << " ";
    
    //     }
    //     cout << endl;
    // }


    //   ------Delete The nOde Function   ----------------------------



    // void deletefromheap(){

    //     if (size==0)
    //     {
    //         cout<<"there is no element for the delete"<<endl;
    //         return;

    //     }
        
    //     // step 1 swap the root to last leaf node 

    //     arr[1]= arr[size];

    //     // step 2 remove the last element 

    //     size--;

    //    // step 3  verify from the parent 

    //    int i = 1;
    //    while (i<size)
    //    {
    //       int leftindex= 2*i;
    //       int rightindex= (2*i)+1;

    //       if (leftindex<size && arr[i]<arr[leftindex])
    //       {
    //          swap(arr[i],arr[leftindex]);
    //          i= leftindex;
    //       }

    //       else if (rightindex<size && arr[i]<arr[rightindex])
    //       {
    //         swap(arr[i],arr[rightindex]);
    //         i= rightindex;
    //       }

          
    //       else{
    //          return;
    //       }
          
    //    }
       
    // }



// };

  //   ----     Heapify Algotrithm         ---------------------------

    // void heapify(int arr[],int size,int i){

    //     int largest =i;
    //     int left = 2*i;
    //     int right = 2*i+1;

    //     if (left<=size && arr[largest]<arr[left])
    //     {
    //         largest= left ;
    //     }

    //     if (right<=size && arr[largest]<arr[right])
    //     {
    //         largest = right;
    //     }

    //     if (largest!=i)
    //     {
    //         swap(arr[largest],arr[i]);
    //         heapify(arr,size,largest);
    //     }
        
    //     else{
    //          return;
    //     }
        
    // }

// int main(){

//     heap h;

    // h.insert(5);
    // h.insert(6);
    // h.insert(1);
    // h.insert(8);
    // h.insert(3);
    // h.insert(10);

    // h.print();
    // cout<<endl;

    // h.deletefromheap();
    // h.print();

//     int arr[6]={-1,6,3,6,2,7};
//     int n = 5;

//     for (int i = n/2;  i>0; i--)
//     {
//         heapify(arr,n,i);
//     }

//     cout<<"Priniting The array"<<endl;

//     for (int  i = 1; i < 6; i++)
//     {
//       cout<<arr[i]<<"  ";
//     }
    
    


// }



//   ---------  Heap Sort algo     --------------------------


// #include<iostream> 
// using namespace std;

// class heap{
//     int arr[100];
//     int size;

//     heap(){
//         arr[0]=-1;
//         size=0;
//     }

// };


    // void heapify(int arr[],int size,int i){

    //     int largest =i;
    //     int left = 2*i;
    //     int right = 2*i+1;

    //     if (left<=size && arr[largest]<arr[left])
    //     {
    //         largest= left ;
    //     }

    //     if (right<=size && arr[largest]<arr[right])
    //     {
    //         largest = right;
    //     }

    //     if (largest!=i)
    //     {
    //         swap(arr[largest],arr[i]);
    //         heapify(arr,size,largest);
    //     }
        
    //     else{
    //          return;
    //     }
        
    // }



//     void heapsort(int arr[],int n){


//     // Step 1: Build Heap
//       for(int i = n/2; i > 0; i--){
//         heapify(arr, n, i);
//        }


//      // step 2 sort  --------
//         int size= n;

//         while (size>1)
//         { 
//               // step1 
//                swap(arr[1],arr[size]);
//                size--;

//                // step 2

//                heapify(arr,size,1);

//         }
        
//     }

// int main(){

//     int arr[7]={-1,5,2,8,5,0,3};

//     heapsort(arr,6);

//     cout<<" printing thr aray"<<endl;

//     for (int i = 1; i <=6; i++)
//     {
//         cout<<arr[i]<<"  ";
//     }
    


// }


//  --------  Kth smallest element    --------------------


// #include<iostream>
// #include<queue>
// using namespace std;

// int Kthsmallest(int arr[],int lastindex,int k){

//     priority_queue<int> pq;

//     for (int i = 0; i < k; i++)
//     {
//         pq.push(arr[i]);
//     }

//     for (int i = k; i <=lastindex; i++)
//     {
//         if (arr[i]<pq.top())
//         {
//              pq.pop();
//              pq.push(arr[i]);
//         }
        
//     }

//     int ans= pq.top();

//     return ans;
    
    
// }

// int main(){

//      int arr[7]={3,5,2,8,5,0,3};

//      cout<<Kthsmallest(arr,6,4);



// }



//  --------  Kth Largest element    --------------------


// #include<iostream>
// #include<queue>
// using namespace std;

// int KthLargest(int arr[], int n, int k){

//     // Min Heap
//     priority_queue<int, vector<int>, greater<int>> pq;

//     // First k elements
//     for(int i = 0; i < k; i++){
//         pq.push(arr[i]);
//     }

//     // Remaining elements
//     for(int i = k; i < n; i++){
//         if(arr[i] > pq.top()){
//             pq.pop();
//             pq.push(arr[i]);
//         }
//     }

//     return pq.top();
// }

// int main(){

//     int arr[7] = {3,5,2,8,5,0,3};
//     int n = 7; 
//     int k = 4;

//     cout << KthLargest(arr, n, k);

// }




//   --------------- Check that is the Binary Tree Heap Or Not ---------------------------



// #include<iostream>
// using namespace std;
//  class Node{

//     public:

//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data= data;
//         left= right= NULL;
//     }

// };


// int count(Node * root){

//     if (root==NULL)
//     {
//         return 0;

//     }

//     return 1+count(root->left)+count(root->right);
    
// }

// bool isCBt(Node * root,int index,int totalcount){

//     if (root==NULL)
//     {
//       return true;
//     }

//     if (index>=totalcount)
//     {
//         return false;
//     }
//     else{

//         bool left= isCBt(root->left,2*index+1,totalcount);

//         bool right= isCBt(root->right,2*index+2,totalcount);

//         return (left&&right);
//     }
    

// }


// bool ismaxorder(Node * root){

//     //  0 child

//     if (root->left==NULL&& root->right==NULL)
//     {
//         return true;
//     }

//     // 1 left child 

//     if (root->right==NULL)
//     {
//         return (root->left->data<root->data);
//     }
// //    2 child ho 

//     else 
//     {
//          bool left= ismaxorder(root->left);
//          bool right= ismaxorder(root->right);

//          if (left&&right&&(root->left->data<root->data && root->right->data<root->data))
//          {
//             return true;
//          }
//          else{
//             return false;
//          }
//     }
    
    
    
// }


// bool isHeap(Node * root){

//     int index=0;

//     int totalcount= count(root);

//     if (isCBt(root,index,totalcount)&&ismaxorder(root))
//     {
//       return true;
//     }

//     else{

//         return false;
//     }
    
// }

// int main(){


   
//     Node* root = new Node(60);
//     root->left = new Node(50);
//     root->right = new Node(55);
//     root->left->left = new Node(45);
//     root->left->right = new Node(40);
//     root->right->left = new Node(48);

//     if(isHeap(root))
//         cout << "Tree is a Max Heap";
//     else
//         cout << "Tree is NOT a Max Heap";

// }




// #include<iostream>
// #include<vector>
// using namespace std;

// // Heapify for Max Heap
// void heapify(vector<int> &arr, int size, int i){

//     int largest = i;
//     int left = 2*i + 1;
//     int right = 2*i + 2;

//     if(left < size && arr[left] > arr[largest])
//         largest = left;

//     if(right < size && arr[right] > arr[largest])
//         largest = right;

//     if(largest != i){
//         swap(arr[i], arr[largest]);
//         heapify(arr, size, largest);
//     }
// }

// // Merge Two Max Heaps
// vector<int> mergeTwoHeap(vector<int> &a, vector<int> &b){

//     vector<int> ans;

//     // Insert elements
//     for(int i = 0; i < a.size(); i++)
//         ans.push_back(a[i]);

//     for(int i = 0; i < b.size(); i++)
//         ans.push_back(b[i]);

//     int size = ans.size();

//     // Build Heap
//     for(int i = size/2 - 1; i >= 0; i--){
//         heapify(ans, size, i);
//     }

//     return ans;
// }

// int main(){

//     vector<int> a = {50, 30, 40};
//     vector<int> b = {45, 10, 35};

//     vector<int> result = mergeTwoHeap(a, b);

//     cout << "Merged Max Heap: ";
//     for(int i = 0; i < result.size(); i++){
//         cout << result[i] << " ";
//     }
// }






//   ------------   Graph          -----------------


// Implement Graph using The adjancy List 

// #include<iostream>
// #include<unordered_map>
// #include<list>
// using namespace std;

// class Graph{
//     public:

//    unordered_map<int,list<int>> adj;

//    void AddEdge(int u ,int v,bool direction){
//     // direction = 0 -> Undirected Graph   direction = 1 -> directed Graph 

//     // created An edges from u to v

//     adj[u].push_back(v);

//     if (direction==0)
//     {
//         adj[v].push_back(u);
//     }
    
//    }

//    void printAddj(){

//     for(auto i:adj){
//         cout<<i.first<<"-> ";

//         for(auto j:i.second){
//             cout<<j<<", ";
//         }

//         cout<<endl;
//     }
//    }

// };

// int main(){

//     int n ;
//     cout<<"Enter The Number Of Nodes "<<endl;
//     cin>>n;
//     int m ;
//     cout<<"Enter The Number Of Edges  "<<endl;
//     cin>>m;

//     Graph G;

//     for (int i = 0; i < m; i++)
//     {
//         int u, v;
//         cin>>u>>v;

//         G.AddEdge(u,v,0);
//     }
    
//   G.printAddj();

// }



// -----  Breath First Search      --------------------


// #include<iostream>
// #include<unordered_map>
// #include<list>
// #include<queue>
// #include<vector>
// using namespace std;

// class Graph{
//     public:

//     unordered_map<int,list<int>> adjlist;
  
//     void AddEdge(int u,int v){

//         adjlist[u].push_back(v);
//         adjlist[v].push_back(u);
//     }

//    void BFS(int start){

//     unordered_map<int,bool> visited;
//     queue<int> q;

//     q.push(start);

//     visited[start]=1;

//     cout<<" BFS Traversal : ";

//     while (!q.empty())
//     {
//         int frontnode= q.front();
//         q.pop();

//         cout<<frontnode<<" ";

//         // Visited Neighours

//         for(auto neighour:adjlist[frontnode]){
//             if (!visited[neighour])
//             {
//                 q.push(neighour);
//                 visited[neighour]=1;
//             }
            
//         }
//     }
    
//    }
// };


// int main(){

// Graph G;

//    G.AddEdge(0,1);
//    G.AddEdge(0,2);
//     G.AddEdge(1,3);
//     G.AddEdge(2,4);

//     G.BFS(0);

//     return 0;

// }



// ---------  Depth First Search      ----------

// #include<iostream>
// #include<unordered_map>
// #include<list>
// #include<vector>
// using namespace std;
// class Graph{

//     public:

//     unordered_map<int,list<int>> adjlist;


//     // Add Edge

//     void AddEdge(int u ,int v){

//         adjlist[u].push_back(v);
//         adjlist[v].push_back(u);
//     }

//    void DFS_Helper(int node,unordered_map<int,bool>&visited){
//     visited[node]= true;

//     cout<<node<<" ";
//     for(auto neighour:adjlist[node]){
//         if (!visited[neighour])
//         {
//             DFS_Helper(neighour,visited);
//         }
        
//     }
//    }

//     // DFS Function 

//     void DFS(int start){

//         unordered_map<int ,bool> visited;

//         cout<<" DFS Traversal :  ";

//         DFS_Helper(start,visited);
//     }

// };

// int main(){

//        Graph g;

//     g.AddEdge(0,1);
//     g.AddEdge(0,2);
//     g.AddEdge(1,3);
//     g.AddEdge(2,4);

//     g.DFS(0);

// }



//  ---------- Cycle Detection Undirected Graph ------------------


// #include<iostream>
// #include<unordered_map>
// #include<list>
// #include<queue>
// using namespace std;

// class Graph {

//     public:

//     unordered_map<int,list<int>>adjlist;

//     void AddEdge(int u ,int v){
//         adjlist[u].push_back(v);
//         adjlist[v].push_back(u);
//     }


//     bool iscycle(int start,unordered_map<int,bool>&visited){
//         unordered_map<int,int> parent;

//         queue<int> q;

//         q.push(start);
//         visited[start]= true;
//         parent[start]=-1;

//         while (!q.empty())
//         {
//             int frontnode = q.front();
//             q.pop();

//             for(auto neighour:adjlist[frontnode]){
//                 // not visited

//                 if (!visited[neighour])
//                 {
//                     visited[neighour]= true;
//                     parent[neighour]= frontnode;
//                     q.push(neighour);
//                 }
                

//                 else if (parent[frontnode]!=neighour)
//                 {
//                     return true;
//                 }
                
//             }
//         }
//         return false;
//     }



//     bool detectcycle(){

//         unordered_map<int,bool> visited;

//         for ( auto i:adjlist)
//         {
//             if (!visited[i.first])
//             {
//                  if (iscycle(i.first,visited))
//                  {
//                     return true;
//                  }
                 
//             }
//             return false;
//         }
        
//         }

// };

// int main(){

//        Graph g;

//     g.AddEdge(0,1);
//     g.AddEdge(1,2);
//     g.AddEdge(2,0);   // cycle

//     if(g.detectcycle())
//         cout<<"Cycle Present";
//     else
//         cout<<"No Cycle";
// }





//  ------  Detect Cycle In directed Graph Using the DFS ---------------

// #include<iostream>
// #include<unordered_map>
// #include<list>
// using namespace std;

// class Graph{

//     public:
//     unordered_map<int,list<int>>adjlist;
    

//     void AddEdge(int u ,int v){
//         adjlist[u].push_back(v);
//     }

//     bool dfsCheck(int node,unordered_map<int,bool>&visited,unordered_map<int,bool>&recStack){


//         visited[node]=true;
//         recStack[node]= true;


//         for (auto neighour :adjlist[node])
//         {
//             if (!visited[neighour])
//             {
//                 if (dfsCheck(neighour,visited,recStack))
//                 {
//                     return true;
//                 }
                
//             }

//             else if (recStack[neighour])
//             {
//                 return true;
//             }
            
            
//         }
//         // backtrack

//         recStack[node]= false;
//         return false;
//     }


//     bool detectCycle(){

//         unordered_map<int ,bool>visited;
//         unordered_map<int,bool>recursionstack;


//         for (auto i :adjlist)
//         {
//             if (!visited[i.first])
//             {
//                   if (dfsCheck(i.first,visited,recursionstack))
//                   {
//                      return true;
//                   }
                  
//             }
//              return false;
//         }
        
//     }

// };

// int main(){

//        Graph g;

//     g.AddEdge(0,1);
//     g.AddEdge(1,2);
//     g.AddEdge(2,3);
//     g.AddEdge(3,1);   // Cycle

//     if(g.detectCycle())
//         cout<<"Cycle Present";
//     else
//         cout<<"No Cycle";

//     return 0;


// }




//  Topological Sort using The dfs  -----

// #include<iostream>
// #include<unordered_map>
// #include<list>
// #include<stack>
// using namespace std;

// class Graph{
// public:

//     unordered_map<int,list<int>> adjlist;

//     void AddEdge(int u,int v){
//         adjlist[u].push_back(v);

//         // ensure destination node also exists
//         if(adjlist.find(v)==adjlist.end()){
//             adjlist[v] = list<int>();
//         }
//     }

//     void todfs(int node,
//                unordered_map<int,bool>& visited,
//                stack<int>& s){

//         visited[node]=true;

//         for(auto neighbour:adjlist[node]){
//             if(!visited[neighbour]){
//                 todfs(neighbour,visited,s);
//             }
//         }

//         s.push(node);
//     }

//     void topologicalSort(){

//         unordered_map<int,bool> visited;
//         stack<int> s;

//         for(auto &i : adjlist){
//             if(!visited[i.first]){
//                 todfs(i.first,visited,s);
//             }
//         }

//         cout<<"Topological Order: ";

//         while(!s.empty()){
//             cout<<s.top()<<" ";
//             s.pop();
//         }
//     }
// };

// int main(){

//     Graph g;

//     g.AddEdge(5,2);
//     g.AddEdge(5,0);
//     g.AddEdge(4,0);
//     g.AddEdge(4,1);
//     g.AddEdge(2,3);
//     g.AddEdge(3,1);

//     g.topologicalSort();
// }


//   Topological Sort USing The BFS    -- Khans ALgorithm   ---------------


// #include<iostream>
// #include<unordered_map>
// #include<list>
// #include<queue>
// #include<vector>
// using namespace std;

// class Graph{

//     public:

//         unordered_map<int,list<int>> adjlist;

//     void AddEdge(int u,int v){
//         adjlist[u].push_back(v);

//         // ensure destination node exists
//         if(adjlist.find(v)==adjlist.end())
//             adjlist[v];
//     }

//     void topoSortBFS(){

//         unordered_map<int,int> indegree;

//         // initialize the indegre

//         for (auto i : adjlist)
//         {
//             indegree[i.first]=0;
//         }
        
//         for(auto i:adjlist){

//             for(auto neighour:i.second){
//                 indegree[neighour]++;
//             }
//         }


//         queue<int> q;

//         // push Node Having Indegree 0

//         for (auto i :indegree)
//         {
//             if (i.second==0)
//             {
//                 q.push(i.first);
//             }
            
//         }

//         vector<int> ans;

//         while (!q.empty())
//         {
//             int front = q.front();
//             q.pop();

//             ans.push_back(front);

//             for(auto neighour:adjlist[front]){
//                 if (indegree[neighour]==0)
//                 {
//                     q.push(neighour);
//                 }
                
//             }
//         }
        
//           cout<<"Topological Order: ";
//         for(int x : ans)
//             cout<<x<<" ";
        
//     }

// };

// int main(){

//      Graph g;

//     g.AddEdge(5,2);
//     g.AddEdge(5,0);
//     g.AddEdge(4,0);
//     g.AddEdge(4,1);
//     g.AddEdge(2,3);
//     g.AddEdge(3,1);

//     g.topoSortBFS();

// }



//  Sortest PAth In Undirected Graph ----

#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
#include<vector>
using namespace std;

class Graph{
public:

    unordered_map<int,list<int>> adjlist;

    // Undirected Edge
    void AddEdge(int u,int v){
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }

    void shortestPath(int src,int dest){

        unordered_map<int,bool> visited;
        unordered_map<int,int> parent;
        queue<int> q;

        q.push(src);
        visited[src] = true;
        parent[src] = -1;

        // BFS
        while(!q.empty()){

            int front = q.front();
            q.pop();

            for(auto neighbour : adjlist[front]){

                if(!visited[neighbour]){
                    visited[neighbour] = true;
                    parent[neighbour] = front;
                    q.push(neighbour);
                }
            }
        }

        // reconstruct path
        vector<int> path;
        int curr = dest;

        while(curr != -1){
            path.push_back(curr);
            curr = parent[curr];
        }

        cout<<"Shortest Path: ";

        for(int i=path.size()-1;i>=0;i--)
            cout<<path[i]<<" ";
    }
};

int main(){

    Graph g;

    g.AddEdge(0,1);
    g.AddEdge(1,2);
    g.AddEdge(0,3);
    g.AddEdge(3,4);
    g.AddEdge(4,2);

    g.shortestPath(0,2);
}