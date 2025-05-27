stack<int> push(vector<int> &arr) {
    // return a stack with all elements of arr inserted in it
    stack<int> s;
    for(int i : arr){
        s.push(i);
    }
    return s;
}

/* _pop function to print elements of the stack
   remove as well
*/
void pop(stack<int> s) {
    // print top and pop for each element until it becomes empty
    while(!s.empty()){
        cout << s.top()<< " ";
        s.pop();
    }
}
void insert(stack<int> &s, int x) {
    // Your code here
    s.push(x);
}

// Function to remove top element from stack.
void remove(stack<int> &s) {
    if(!s.empty())
    s.pop();
    
    // Your code here
}

// Function to print the top element of stack.
void headOf_Stack(stack<int> &s) {
    if(!s.empty()){
    int x = s.top();// Your code here
        cout << x << " " << endl;
    }
}

// Function to search an element in the stack.
bool find(stack<int> s, int val) {
    bool exists = false;
    

    // Your code here
    while(!s.empty()){
        if (s.top()==val){
            exists=true;
            break;
        }
        s.pop();
    }

    if (exists == true) {
        return true;
    } else {
        return false;
    }
}

// Function to push all the elements into the stack.
stack<int> _push(int arr[], int n) {
    // your code here
    stack<int> temp;
    for(int i =0; i< n; i++){
        temp.push(arr[i]);
    }
    return temp;
}

// Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int> s) {
    // your code here
    
    int size = s.size();
    for(int i=0; i < size; i++){
        stack<int> temp =s;
        int min_val=s.top();
        while(!temp.empty()){
            if(temp.top()<min_val){
                min_val = temp.top();
            }
        temp.pop();    
        }
        
        s.pop();
        cout << min_val<<" ";
    }
}
void reverseArray(int n, int* arr) {

    // Your code here
    stack<int> temp;
    for(int i=0; i<n; i++){
        temp.push(arr[i]);
    }
    for(int i=0; i<n; i++){
       arr[i] = temp.top();
       temp.pop();
    }

    // Reverse the array
}

bool matching(char a, char b){
    return((a=='[' && b==']') ||
           (a=='{' && b=='}') ||
           (a=='(' && b==')'));
}
  bool isBalanced(string& s) {
      // code here
      stack<char> temp;
      for(int i=0; i<s.length(); i++ ){
          if(s[i]=='[' || s[i]=='{' || s[i]=='('){
              temp.push(s[i]);
          }
          else{
              if(temp.empty()){
                  return false;
              }
              else if (!matching(temp.top(), s[i])){
              return false;}
              else 
                  temp.pop();
          }
      }
      return temp.empty();
          
      }
};
string removeConsecutiveDuplicates(string &s) {
    // Your code here
    stack<char> temp;
    for(ch :  s){
        if(!temp.empty() && temp.top()==ch) continue;
        else
        temp.push(ch);
    }
    string str="";
    while(!temp.empty()){
        str=temp.top()+str;
        temp.pop();
    }
    return str;
}
vector<int> remove_special_consecutive(vector<int>& arr, int x, int y) {
    // Your code here
    stack<int> temp;
    vector<int> v;
    for( i : arr){
        if(!temp.empty() && temp.top()==i && (i==x || i==y )){
            continue;
        }
        else {
            temp.push(i);
        }
    }
    while(!temp.empty()){
        v.push_back(temp.top());
        temp.pop();
    }
    reverse(v.begin(), v.end());
    return v;
}

vector<int> calculateSpan(vector<int>& arr) {
    // write code here
    stack<int> temp;
    vector<int> v1;
    

    for(int i=0; i<arr.size(); i++){
        while(!temp.empty() && arr[temp.top()]<=arr[i]){
            temp.pop();
        }
        v1.push_back(temp.empty() ? (i+1) : (i-temp.top()));
        temp.push(i);
    }
    return v1;
}
int profit(vector<int>& arr) {
    // Your code here
    stack<int> temp;
    int  n=arr.size();
    int total =0;
    
    for(int i=n-1; i>=0; i--){
        while(!temp.empty() && arr[temp.top()]<arr[i]){
            temp.pop();
        }
    
    if(temp.empty()){
        total+=arr[i];
    }
    else{
        total+=arr[temp.top()]-arr[i];
    }
    temp.push(i);
}
    return total;
}
class Solution {
    stack<int> mainstack;
    stack<int> minstack;
  public:
    Solution() {
        // code here

        
        
    }

    // Add an element to the top of Stack
    void push(int x) {
        
        
        // code here
         
         mainstack.push(x);
         if(minstack.empty() || x <= minstack.top()){
             minstack.push(x);
         }
        
    }

    // Remove the top element from the Stack
        
    void pop() {
        // code here
        
         if(!minstack.empty()){
             if(mainstack.top()== minstack.top()){
             minstack.pop();
         }
         mainstack.pop();
         }
    }

        
    // Returns top element of the Stack
    int peek() {
        // code here

        if(!mainstack.empty()){
            return mainstack.top();
        }
        return -1;
    }
        

    // Finds minimum element of Stack
    int getMin() {
        // code here
        if(!minstack.empty()){
            return minstack.top();
        }
        return -1;
        
    }
    void immediateSmaller(vector<int>& arr) {
        //  code here
        int n=arr.size();
        stack<int> temp;
        for(int i=0; i<n-1; i++){
            if(arr[i]>arr[i+1]){
                temp.push(arr[i+1]);
            }
            else temp.push(-1);
        }
        temp.push(-1);
      for(int i=0; i<arr.size(); i++){
            arr[i]= temp.top();
            temp.pop();
        }
        reverse(arr.begin(), arr.end());
    }
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        stack<int> temp;
        int n = arr.size();
        vector<int> v1(n, -1);
        
        for(int i=0; i<n; i++){
            while(!temp.empty() && arr[i]> arr[temp.top()]){
            v1[temp.top()]=arr[i];
            temp.pop();
        }
        temp.push(i);
            
        }
        
        return v1;
    }

    vector<int> maxOfMins(vector<int>& arr) {
        // Your code here
        int n=arr.size();
        vector<int> res(n+1, 0);
         vector<int> prev(n), next(n);
        stack<int> s;
        
        
        for(int i=0; i<n; i++){
            while(!s.empty() && arr[s.top()]>=arr[i]) s.pop();
                prev[i]=s.empty() ?-1 : s.top();
                s.push(i);
        }
         while(!s.empty())s.pop();
        
        for(int i=n-1; i>=0; i--){
            while(!s.empty() && arr[s.top()]>=arr[i]) s.pop();
                next[i]=s.empty() ? n : s.top();
                s.push(i);
        }
        for(int i=n-1; i>=0; i--){
           int len=next[i]-prev[i]-1;
           res[len]=max(res[len], arr[i]);
         }
         
         for(int i=n-1; i>=0; i--){
             res[i]=max(res[i], res[i+1]);
        } 
        res.erase(res.begin());
        return res;
    }



    // Function to push an element in queue.
    void enqueue(queue<int> &q, int x) {
        // Your code here
        q.push(x);
    }

    // Function to remove front element from queue.
    void dequeue(queue<int> &q) {
        
        // Your code here
        q.pop();
    }

    // Function to find the front element of queue.
        
    int front(queue<int> &q) {
        // Your code here
        return q.front();
    }

        
    // Function to find an element in the queue.
    string find(queue<int> q, int x) {
        // Your code here
        int n= q.size();
        for(int i=0; i<n; i++){
            if(q.front()==x){
                return "Yes";
            }
            q.pop();
        }


        void TraveseMe(queue<int> myqueue) {

            // Your code here
            while(!myqueue.empty()){
                cout << myqueue.front();
                myqueue.pop();
            }
            // Use front function
        }


        class StackQueue{
            private:
                // These are STL stacks ( http://goo.gl/LxlRZQ )
                stack<int> s1;
                stack<int> s2;
            public:
                void push(int);
                int pop();
            }; */
            void StackQueue::push(int B) {
                s1.push(B);
            }
            
            int StackQueue::pop() {
                if(s2.empty()){
                while(!s1.empty()){
                     s2.push(s1.top());
                     s1.pop();
                }
                }
                if(s2.empty()){
                    return -1;
                }
                else {int front =s2.top();
                s2.pop();
                return front;}
            }


            vector<string> generate(int n) {
                // Your code here
                queue<int> q;
                vector<string> v;
                
                for(int i=1; i<=n; i++){
                    q.push(i);
                }
                while(!q.empty()){
                    string bin_no ="";
                    int element=q.front();
                    while(element>0){
                        bin_no=char('0'+element%2) + bin_no;
                        element/=2;
                    }
                    q.pop();
                    v.push_back(bin_no);
                }
                return v;
            }


            queue<int> reverseFirstK(queue<int> q, int k) {
                // code here
                if(k>q.size())return q;
                stack<int> s;
                queue<int> q1;
                int i=1;
                for(int i=0; i<k; i++){
                    s.push(q.front());
                    q.pop();
                }
                while(!s.empty()){
                    q1.push(s.top());
                    s.pop();
                }
                while(!q.empty()){
                    q1.push(q.front());
                    q.pop();
                }
                
                return q1;
                
                
            }

            int kthSmallest(int arr[], int n, int k) {
                // Your code here
                priority_queue<int> pq;
                for(int i=0; i<n; i++){
                    pq.push(arr[i]);
                    if(pq.size()>k)pq.pop();
                }
                return pq.top();
                
                
            }

            int KthLargest(vector<int> &arr, int k) {
                // Your code here
                int n=arr.size();
                priority_queue<int, vector<int>, greater<int>> pq;
                
                for(int i=0; i<arr.size(); i++){
                    pq.push(arr[i]);
                    if(pq.size()>k)
                    pq.pop();
                }
                return pq.top();
                
                
            }

            int minCost(vector<int>& arr) {
                // code here
                priority_queue<int, vector<int>, greater<int>> pq;
                
                for(int i : arr){
                    pq.push(i);
                }
                int sum=0;
                while(pq.size()>1){
                    int first=pq.top(); pq.pop();
                    int second=pq.top(); pq.pop();
                    
                    int total=first+second;
                    
                    pq.push(total);
                    sum+=total;
                }
                return sum;
            }
        };

        int maxToys(vector<int>& arr, int k) {
        
            // Your code here
            priority_queue<int, vector<int>, greater<int>> pq;
            int count =0;
            
            for(int  i : arr){
                pq.push(i);
            }
            int sum=0;
            while(!pq.empty()){
                sum+=pq.top();
                 if(sum>k)return count;
                 count++;
                 pq.pop();
            }
            return count;
        }

        int kMostFrequent(int arr[], int n, int k) {
            // Your code here
            std::unordered_map<int, int>  freq;
            priority_queue<int> pq;
            int sum =0;
            
            for(int i=0; i<n; i++){
                freq[arr[i]]++;
            }
            
            for(auto it =freq.begin(); it !=freq.end(); it++){
                pq.push(it->second);
            }
           for(int i=0; i<k && !pq.empty(); i++){
                sum+=pq.top(); pq.pop();
            }
            return  sum;
        }

        vector<int> mergeKArrays(vector<vector<int>> arr, int K) {
            // code here
            priority_queue<int, vector<int>, greater<int>> pq;
            vector<int> v;
            
            for(int i=0; i<K; i++){
                for(int j=0; j<K; j++){
                    pq.push(arr[i][j]);
                }
            }
            while(!pq.empty()){
                v.push_back(pq.top());
                pq.pop();
            }
         return v;  
        }