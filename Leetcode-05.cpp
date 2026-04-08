
  //        -------------------   Minimum Cost Of the Ropes            -------------------




  //     --------------------    Convert The BST  to  Min Heap     -------------------




  //    ---------------   K Th Largest Sum sub array  


  // #include<iostream>
  // #include<queue>
  // #include<vector>
  // #include<algorithm>
  // using namespace std;

  // //        ---------------       O(n2logn)    ------------------------------

  // int KthLargestSumSubarray(vector<int> v,int k){

  //   vector<int> ans;

   

  //   for (int i = 0; i < v.size(); i++)
  //   {

  //      int sum=0;
  //           for (int j = i; j <v.size(); j++)
  //           {
  //             sum+=v[j];

  //             ans.push_back(sum);
  //           }
            
  //   }

  //   sort(v.begin(),v.end());

  //   return (ans[ans.size()-k]);
    

  // }


  // //   -------------------- Optimized Function    -------------------------

  // int kthlargestsumsubarray(vector<int> v,int k){

  //   priority_queue<int,vector<int> ,greater<int>> mini;

  //   int n = v.size();

  //   for (int i = 0; i < n; i++)
  //   {
  //     int sum =0;
  //     for (int j = i; j < n; j++)
  //     {
  //        sum+=v[j];


  //        if (mini.size()<k)
  //        {
  //           mini.push(sum);
  //        }

  //        else{


  //         if (sum>mini.top())
  //         {
  //             mini.pop();
  //             mini.push(sum);
  //         }
          
  //        }
         
  //     }
      
  //   }

  //   return mini.top();
    
  // }

  

  //  int main(){

  // }


  




  //     ---------------------------   HashMap     ------------------------------------------------



//   #include<iostream>
//   #include<unordered_map>
//   #include<map>

//   using namespace std;

//   int main(){

//     // creation 

//     unordered_map<string,int> m;

//     // insertion

//     pair<string, int> p=make_pair("vishesh",5);
//     m.insert(p);


//     pair<string,int>pair2("vishesh1",6);
//     m.insert(pair2);

//     m["Neha"]=3;


//     // what will happen   ----   3 Replace to the 7


//     m["Neha"]=7;

//     // Searching

//     cout<<m["Neha"];

//     m.at("vishesh");

//     cout<<m["unknownkey"];
//     cout<<m.at("unknownkey");

//     cout<<m.size();

//     cout<<m.count("Neha");

//     cout<<m.erase("vishesh");

//     cout<<m.size();

//     // access Through the iterator 

// for(auto i : m){
//     cout << i.first << " " << i.second << endl;

// }

// // Another method Through Iterator

// unordered_map<string,int>::iterator it = m.begin();

// while (it==m.end())
// {
//   cout<<it->first<<"  "<<it->second;
// }




//   }



//  ------    Calculate the maximum frequency Of the NUmber  -- --------------


// #include<iostream>
// #include<vector>
// #include<unordered_map>
// using namespace std;

// int MaxfrequencyElement(vector<int> v){

//   unordered_map<int ,int> count;

//   int n= v.size();

//   int maxfrequency = 0;
//   int maxans= -1;

//   for (int i = 0; i < n; i++)
//   {
//       count[v[i]]++;

//       maxfrequency= max(maxfrequency,count[v[i]]);
//   }

//   for (auto i:count)
//   {
//      if (maxfrequency==i.second)
//      {
//        maxans= i.first;
//        break;
//      }
     
//   }

//   return maxans;
  
  
// }

// int main(){

//   vector<int> v;

//   cout<<" Enter size"<<endl;
//   int n;
//   cin>>n;
//   cout<<" Enter The vector Elements"<<endl;

//   for (int i = 0; i < n; i++)
//   {
//     int x;
//     cin >> x;
//     v.push_back(x);
//   }
  

//   cout<<MaxfrequencyElement(v);


// }

//  --------------------  Theory --------------------------------

/* 

Bucket Array  -- ek trah storing values of map hai      --->> isme value ko store kerte ha aur key ko index se map kera dete hai 


ab key index se map hoti ----->>>>  By the hash Function

Include 2  --- 1 Hash code   2 - Compression Function    In the Hash Function

Hash code ---->>>  Ye kya kerta hai ki har key ke liye unique intiger generate kerta chhaiye hamre key ka koi sa bhi type ho 


compression function----->>>  Ye hash code ko is trah set kerta hai ki with size rahe matlab --->> range se bhar na jaye 


---- Collission In It   ---  ----  >> When have collision Occur means that two or more hash value will be same collision occur 


------- >> Solutuion of the Collision   ------->>

1 - open hashing --->> isme collison ke time linklist ka use kerte first collision ka head ko value ki jagah store ker dete hai uske baad koi collision atta hai to use linklist ki form me add kerte chale jate h 


2 -- closed Hashing   ----   isme kya kerte hai ki Hash Function ki help lete isme same array me next empty index nikalta h jisme ye hash function se ho sake 

types of closed hashig 

1 - linear probing 

2- Quadratic Probing 
 
*/



//  -------------    Trie Data Structue   --------------------------


// #include<iostream>
// using namespace std;

// class Node{
//   public:
//   char data;
//   Node *children[26];
//   bool isTerminal;

//   Node(char ch){
//     data=ch;
//     for (int i = 0; i < 26; i++)
//     {
//       children[i]=NULL;
//     }

//     isTerminal=false;
    
//   }

// };

// class trie{
//   public:

//   Node * root;

//   trie(){
//     root=new Node('\0');
//   }

// // Inserted Word

// void insert(string word){

//   Node * temp = root;

//   for (int i = 0; i <word.length(); i++)
//   {
//      int index= word[i]-'A';

//      if (temp->children[index]!=NULL)
//      {
//         temp= temp->children[index];
//      }

//      else{

//       Node * newnode=new Node(word[i]);
//       temp->children[index]=newnode;
//       temp=newnode;
//      }
     
//   }
  
// temp->isTerminal= true;

// }
// //  Search Word 
// bool searchword(string word){

//   Node * temp = root;

//   for (int i = 0; i < word.length(); i++)
//   {
//       int index= word[i]-'A';

//       if (temp->children[index]==NULL)
//       {
//            return false;
//       }

      
//       temp=temp->children[index];
      
//   }

//   return temp->isTerminal;
  
// }

// // Remove the word

// bool haschildren(Node * node){
//   for (int i = 0; i < 26; i++)
//   {
//      if (node->children[i]!=NULL)
//      {
//         return true;
//      }
     
//   }

//   return false;
  
// }

// bool removewordhelper(Node * node,string word,int depth){
//   if (node==NULL)
//   {
//      return false;
//   }
  
//   // If last character 

//   if (depth==word.length())
//   {
//     if (!node->isTerminal)
//     {
//         return false;
//     }
    
//     node->isTerminal=false;

//     // if node has no children , delete it 
//     return !haschildren(node);
//   }

//   int index= word[depth]-'A';

//   if (removewordhelper(node->children[index],word,depth+1))
//   {
//     delete node->children[index];
//     node->children[index]=NULL;

//     return !node->isTerminal && !haschildren(node);
//   }
  
//   return false;
  
// }

// void removeword(string word){

//   removewordhelper(root,word,0);
// }

// };

// int main(){

//   trie t;
//   t.insert("CAT");

//     t.insert("CAR");
//       t.insert("CARE");

//   cout<<t.searchword("CAT")<<endl;
//   cout<<t.searchword("CAN")<<endl;

//   t.removeword("CAT");
//   cout<<"remove Word Successfully"<<endl;
  
//   cout<<t.searchword("CAT");


// }


// Longest Common Prefix    ----------------------------------------------------------


// #include<iostream>
// #include<vector>
// using namespace std;

// class Trienode{
// public:
//     char ch;
//     Trienode* arr[26];
//     int childrencount;
//     bool isterminal;

//     Trienode(char ch){
//         this->ch = ch;
//         for(int i=0;i<26;i++){
//             arr[i] = NULL;
//         }
//         childrencount = 0;
//         isterminal = false;
//     }
// };

// class trie{
// public:
//     Trienode *root;

//     trie(){
//         root = new Trienode('\0');
//     }

//     // Insert Word
//     void insert(string word){
//         Trienode *temp = root;

//         for(int i=0;i<word.length();i++){
//             int index = word[i] - 'a';

//             if(temp->arr[index] != NULL){
//                 temp = temp->arr[index];
//             }
//             else{
//                 Trienode *newnode = new Trienode(word[i]);
//                 temp->arr[index] = newnode;
//                 temp->childrencount++;
//                 temp = newnode;
//             }
//         }
//         temp->isterminal = true;
//     }

    // // LCP Function
    // void lcp(string first, string &ans){
    //     Trienode *temp = root;

    //     for(int i=0;i<first.length();i++){
    //         int index = first[i] - 'a';

    //         if(temp->childrencount == 1 && temp->isterminal == false){
    //             ans.push_back(first[i]);
    //             temp = temp->arr[index];
    //         }
    //         else{
    //             break;
    //         }
    //     }
    // }

    //  Word Break Problem 

//     bool searchword(string word){

//         Trienode * temp = root;

//         for (int i = 0; i < word.length(); i++)
//         {
//             int index= word[i]-'a';

//             if (temp->arr[index]==NULL)
//             {
//                 return false;
//             }

//             temp=temp->arr[index];
//         }

//         return temp->isterminal;
//     }


//     bool WordBreak(string key){

//         if (key.length()==0)
//         {
//             return true;
//         }

//         for (int i = 1; i <= key.length(); i++)
//         {
//             string firstpart= key.substr(0,i);
//             string secondpart= key.substr(i);

//             if (searchword(firstpart) && WordBreak(secondpart))
//             {
//                 return true;
//             }
//         }

//         return false;
//     }
// };

// string commonprefix2(vector<string> &arr, int n){

//     trie *t = new trie();

//     for(int i=0;i<n;i++){
//         t->insert(arr[i]);
//     }

//     string first = arr[0];
//     string ans = "";
//     t->lcp(first, ans);

//     return ans;
// }


// Method   1 For Longest Common Prefix Find Out -----------

// string Commonprefix(vector<string> &v,int n){

//   string ans;
//   for (int i = 0; i < v[0].length(); i++)
//   {
//     char ch = v[0][i];
//     bool match = true;

//     for (int j = 1; j < n; j++)
//     {
//         // Not match

//         if (v[j].size()<=i||v[j][i]!=ch)
//         {
//            match = false;
//            break;
//         }
        
//     }

//     if (match==false)
//     {
//       break;
//     }

//     else{
//       ans.push_back(ch);
//     }
    
    
//   }

//   return ans;
  
// }


// int main(){

//     vector<string> v;

//     v.push_back("coding");
//     v.push_back("codingninja");
//     v.push_back("codinghsd");
//     v.push_back("codingerh");

//     // cout << commonprefix2(v, v.size());


//     trie * t= new trie();
//     string words[]={"i","like","samsung","mobile"};
//     string key="ilikesung";

//     for (int i = 0; i <4; i++)
//     {
//         t->insert(words[i]);
//     }
    

//     cout<<t->WordBreak(key);

//     return 0;
// }

// ---------- N-Queen Problem  ----------

// #include <iostream>
// using namespace std;

// #define N 4   // Change this value for different N

// // Function to print the solution
// void printSolution(int board[N][N]) {
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++)
//             cout << board[i][j] << " ";
//         cout << endl;
//     }
// }

// // Check if it's safe to place queen
// bool isSafe(int board[N][N], int row, int col) {
    
//     // Check column
//     for (int i = 0; i < row; i++)
//         if (board[i][col])
//             return false;

//     // Check left diagonal
//     for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
//         if (board[i][j])
//             return false;

//     // Check right diagonal
//     for (int i = row, j = col; i >= 0 && j < N; i--, j++)
//         if (board[i][j])
//             return false;

//     return true;
// }

// // Backtracking function
// bool solveNQUtil(int board[N][N], int row) {
    
//     // Base case: All queens placed
//     if (row == N)
//         return true;

//     // Try placing queen in all columns
//     for (int col = 0; col < N; col++) {
        
//         if (isSafe(board, row, col)) {
            
//             board[row][col] = 1;  // Place queen
            
//             if (solveNQUtil(board, row + 1))
//                 return true;

//             board[row][col] = 0;  // Backtrack
//         }
//     }
    
//     return false;
// }

// // Main function
// int main() {
//     int board[N][N] = {0};

//     if (solveNQUtil(board, 0) == false) {
//         cout << "No solution exists";
//         return 0;
//     }

//     printSolution(board);
//     return 0;
// }


//  Soduko SOlver USing The BackTracking 


// #include <iostream>
// using namespace std;

// #define N 9

// // Function to print Sudoku
// void printGrid(int grid[N][N]) {
//     for (int row = 0; row < N; row++) {
//         for (int col = 0; col < N; col++)
//             cout << grid[row][col] << " ";
//         cout << endl;
//     }
// }

// // Check if it's safe to place number
// bool isSafe(int grid[N][N], int row, int col, int num) {
    
//     // Check row
//     for (int x = 0; x < N; x++)
//         if (grid[row][x] == num)
//             return false;

//     // Check column
//     for (int x = 0; x < N; x++)
//         if (grid[x][col] == num)
//             return false;

//     // Check 3x3 subgrid
//     int startRow = row - row % 3;
//     int startCol = col - col % 3;

//     for (int i = 0; i < 3; i++)
//         for (int j = 0; j < 3; j++)
//             if (grid[i + startRow][j + startCol] == num)
//                 return false;

//     return true;
// }

// // Find empty location
// bool findEmpty(int grid[N][N], int &row, int &col) {
//     for (row = 0; row < N; row++)
//         for (col = 0; col < N; col++)
//             if (grid[row][col] == 0)
//                 return true;
//     return false;
// }

// // Backtracking function
// bool solveSudoku(int grid[N][N]) {
    
//     int row, col;

//     // If no empty space, puzzle solved
//     if (!findEmpty(grid, row, col))
//         return true;

//     // Try numbers 1 to 9
//     for (int num = 1; num <= 9; num++) {
        
//         if (isSafe(grid, row, col, num)) {
            
//             grid[row][col] = num;

//             if (solveSudoku(grid))
//                 return true;

//             grid[row][col] = 0; // Backtrack
//         }
//     }

//     return false;
// }

// // Main function
// int main() {
    
//     int grid[N][N] = {
//         {3,0,6,5,0,8,4,0,0},
//         {5,2,0,0,0,0,0,0,0},
//         {0,8,7,0,0,0,0,3,1},
//         {0,0,3,0,1,0,0,8,0},
//         {9,0,0,8,6,3,0,0,5},
//         {0,5,0,0,9,0,6,0,0},
//         {1,3,0,0,0,0,2,5,0},
//         {0,0,0,0,0,0,0,7,4},
//         {0,0,5,2,0,6,3,0,0}
//     };

//     if (solveSudoku(grid))
//         printGrid(grid);
//     else
//         cout << "No solution exists";

//     return 0;
// }





//  ---------    Sortest PAth In Directed Acyclic Graph      --------------------------------------

// #include<iostream>
// #include<unordered_map>
// #include<list>
// #include<limits>
// #include<vector>
// #include<stack>
// using namespace std;

// class Graph{
//   public:
//   unordered_map<int,list<pair<int ,int>>>adjlist;

//   void AddEdge(int u,int v,int weight){
//     pair<int,int> p= make_pair(v,weight);
//     adjlist[u].push_back(p);
//   }

//   void printAdj(){

//     for(auto i:adjlist){
//       cout<<i.first<<"->";

//       for (auto j :i.second)
//       {
//         cout<<"("<<j.first<<","<<j.second<<")";

//        }
//        cout<<endl;
      
//     }

//   }

//   void DFS(int node ,unordered_map<int,bool>&visited,stack<int>&S){

//     visited[node]= true;

//     for(auto neighour: adjlist[node])
//     {

//       if (!visited[neighour.first])
//       {
//          DFS(neighour.first,visited,S);
//       }
      
//     }

//     S.push(node);

//   }


//   void SortestPAth(int src,int n,stack<int>&s){

//     vector<int> dist(n,INT8_MAX);

//     dist[src]=0;

//     while (!s.empty())
//     {
//       int top = s.top();
//       s.pop();

//       if (dist[top]!=INT8_MAX)
//       {
//          for (auto neighout:adjlist[top])
//          {
//              int v = neighout.first;
//              int wt = neighout.second;

//              if (dist[top]+wt<dist[v])
//              {
//                dist[v]= dist[top]+wt;
//              }
             
//          }
         
//       }
      
//     }

//      cout<<"\nShortest Distance from Source:\n";

//     for(int i=0;i<n;i++){
//         if(dist[i]==INT8_MAX)
//             cout<<"INF ";
//         else
//             cout<<dist[i]<<" ";
//     }
    

//   }

// };

// int main(){

//   Graph g;
//   g.AddEdge(0,1,5);
//    g.AddEdge(0,2,3);
//     g.AddEdge(1,2,2);
//      g.AddEdge(1,3,6);
//       g.AddEdge(2,3,7);
//        g.AddEdge(2,4,4);
//         g.AddEdge(2,5,2);
//          g.AddEdge(3,4,-1);
//           g.AddEdge(4,5,-2);
           

//      g.printAdj();

//      // topological sort Apply

//      int n = 6;
//      unordered_map<int,bool> visited;
//      stack<int> s;
//      for (int i = 0; i < n; i++)
//      {
      
//       if (!visited[i])
//       {
//         g.DFS(i,visited,s);
//       }
      
//      }
     

//      // Distance Vector made it 

//     int src = 1;

//     g.SortestPAth(src,n,s);

    

// }







//--------------------------------------------------------------------------------------------------


// Dijkastra Algortihm Implementation using the set ---------------------------


// #include<iostream>
// #include<unordered_map>
// #include<list>
// #include<set>
// #include<vector>
// #include<limits>
// using namespace std;

// class Graph{
//   public:

//   unordered_map<int,list<pair<int,int>>>adjlist;

//   // Add Edge 

//   void AddEdge(int u,int v,int weight){

//     adjlist[u].push_back({v,weight});
//     adjlist[v].push_back({u,weight});
//   }


//   void dijkstra(int src,int n){

//     // distance array

//     vector<int> dist(n,INT8_MAX);

//     // set 

//     set<pair<int,int>> st;

//     dist[src]=0;

//     st.insert({0,src});

//     while (!st.empty())
//     {
//          auto top = *(st.begin());
//          st.erase(st.begin());

//          int nodeDistance = top.first;
//          int node= top.second;

//          // traverse Neighours

//          for (auto neighour:adjlist[node])
//          {
//              int nbr= neighour.first;
//              int weight=neighour.second;

//              if (nodeDistance+weight<dist[nbr])
//              {
//                  // remove old record if exist 

//                  auto record = st.find({dist[nbr],nbr});

//                  if (record!=st.end())
//                  {
//                     st.erase(record);
//                  }

//                  // update distance 

//                  dist[nbr]= nodeDistance+weight;

//                  // insert New Record

//                  st.insert({dist[nbr],nbr});
                 
//              }
             
//          }
         
//     }

//            // Print Result
//         cout << "Shortest Distance from Source:\n";
//         for(int i=0;i<n;i++)
//             cout << "Node " << i << " -> " << dist[i] << endl;
//     }
    

    
//   };

  

// int main(){

//      Graph g;

//     g.AddEdge(0,1,5);
//     g.AddEdge(0,2,8);
//     g.AddEdge(1,0,5);
//     g.AddEdge(1,2,9);
//     g.AddEdge(1,3,2);
//     g.AddEdge(2,0,8);
//    g.AddEdge(2,1,9);
//    g.AddEdge(2,3,9);
//    g.AddEdge(3,1,2);
//    g.AddEdge(3,2,6); 

//     int nodes = 4;

//     g.dijkstra(0, nodes);


// }







//    ------  Minimum Spaning tree ---------------



// #include<iostream>
// #include<vector>
// #include<list>
// #include<limits>
// #include<unordered_map>
// #include<queue>
// using namespace std;

// class Graph{
// public:

// unordered_map<int,list<pair<int,int>>> adj;

// void addEdge(int u,int v,int w){
//     adj[u].push_back({v,w});
//     adj[v].push_back({u,w});   // undirected
// }

// void primMST(int n){

//     vector<int> key(n,INT8_MAX);
//     vector<bool> mst(n,false);
//     vector<int> parent(n,-1);

//     priority_queue<pair<int,int>,
//                    vector<pair<int,int>>,
//                    greater<pair<int,int>>> pq;

//     key[0]=0;
//     pq.push({0,0});

//     while(!pq.empty()){

//         int u=pq.top().second;
//         pq.pop();

//         mst[u]=true;

//         for(auto neighbour:adj[u]){

//             int v=neighbour.first;
//             int wt=neighbour.second;

//             if(!mst[v] && wt < key[v]){
//                 key[v]=wt;
//                 parent[v]=u;
//                 pq.push({key[v],v});
//             }
//         }
//     }

//     cout<<"MST Edges:\n";

//     for(int i=1;i<n;i++)
//         cout<<parent[i]<<" - "<<i<<" weight "<<key[i]<<endl;
// }
// };

// int main(){

// Graph g;

// g.addEdge(0,1,2);
// g.addEdge(0,3,6);
// g.addEdge(1,2,3);
// g.addEdge(1,3,8);
// g.addEdge(1,4,5);
// g.addEdge(2,4,7);
// g.addEdge(3,4,9);

// g.primMST(5);
// }




// ------  Krushkal Algorithm     --------


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// struct Edge
// {
//    int u,v,w;
// };

// // Sort Edge By Weight 

// bool CMP (Edge a, Edge b){
//   return a.w<b.w;
// }


// int main(){


// }








