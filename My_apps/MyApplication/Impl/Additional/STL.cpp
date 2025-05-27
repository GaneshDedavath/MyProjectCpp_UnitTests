#include<iostream>
#include<algorithm>

using namespace std;

void pair_fun(int a[], char b[], int n){

    cout << "pair Function Execution Started";
    pair<int, char> p1[n];
    for(int i =0; i<n; i++){
        p1[i]={a[i], b[i]};
    }
    cout << "The 2nd elements before sorting are: ";
    for(int i=0; i<n; i++){
        cout << p1[i].first << " " << p1[i].second << endl;
    }
    sort(p1, p1+n);
    cout << "The 2nd elements After sorting are: ";
    for(int i=0; i<n; i++){
        cout << p1[i].first << " " << p1[i].second << endl;
    }
}
void sortArray(int a[], char b[], int n) {

    // code here
    pair<int, char> p1[n];
    for(int i=0; i<n; i++){
        p1[i]=make_pair(a[i], b[i]);
    }
    sort(p1, p1+n);
    for(int i=0; i<n; i++){
        b[i]= p1[i].second;
    }
}
void corresPair(int a[], int b[], int n, pair<int, int> res[]) {
    // your code here
    for(int i=0; i<n; i++){
        res[i]=make_pair(a[i],b[i]);
    }
}
void arrayOfPairs(int arr[], int n, pair<int, int> res[], int m) {
    // code here
    for(int i=0; i<m; i++){
        res[i]={arr[i], arr[n-1-i]};
    }
}
pair<int, int> makePair(int x, int y) {
    // your code here
    // Return a pair of X and Y
    return make_pair(x,y);
}

void reverseIterator(vector<int>::reverse_iterator it1,
    vector<int>::reverse_iterator it2) {

// Your code here
for(auto it =it1; it!=it2; it++){
cout << *it << " ";
}

cout << endl;
}
void reverseIterator(vector<int>::reverse_iterator it1,
    vector<int>::reverse_iterator it2) {

// Your code here
for(auto it =it1; it!=it2; it++){
cout << *it << " ";
}

cout << endl;
}

void reverseIterator(vector<int>::reverse_iterator it1,
    vector<int>::reverse_iterator it2) {

// Your code here
for(auto it =it1; it!=it2; it++){
cout << *it << " ";
}

cout << endl;
}

sort(v.begin(), v.end());

// Complete the function
int sumMe(vector<int> arr, int n) {

    // Your code here
    int res=0;
    for(int i : arr){
        res+=i;
        
    }
    return res;
    // Use accumulate function
}
// Complete the function
int sumMe(vector<int> arr, int n) {

    // Your code here
    int res=0;
    for(int i : arr){
        res+=i;
        
    }
    return res;
    // Use accumulate function
}


//Back-end complete function Template for C++
class Solution {
    public:
      vector<int> list_less_than_k(vector<int> &arr, int k) {
          // code here
          vector<int> res;
          for(i : arr){
              if(i<k){
                  res.push_back(i);
              }
          }
          return res;
      }
  };
  // Complete the function
void ShrinkMe(vector<int> myvector, int newsize) {

    // Your code here
    
    // Use shrink_to_fit function
    // Write here
    cout << myvector.capacity();

    cout << endl;

    // Write here
    myvector.resize(newsize);
    myvector.shrink_to_fit();
    cout << myvector.capacity();
}


vector<pair<int, pair<int, int>>> increasing_List(vector<pair<int, pair<int, int>>> v) {
    // Your code here
    sort(v.begin(), v.end(), [] (const pair<int, pair<int, int>> &a,  const pair<int, pair<int, int>> &b){
        if (a.first != b.first) return a.first < b. first;
        
        if (a.second.first != b.second.first) return a.second.first < b.second.first;
        
        return a.second.second < b.second.second;
    });
    return v;
}


int minimum_vertical_sum(vector<vector<int>>& arr, int n) {
    // First, find the maximum number of columns
    int max_cols = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i].size() > max_cols) {
            max_cols = arr[i].size();
        }
    }
    
    // Initialize a vector to store the vertical sums
    vector<int> vertical_sum(max_cols, 0);
    
    // Calculate vertical sums
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            vertical_sum[j] += arr[i][j];
        }
    }
    
    // Find the minimum vertical sum
    int min_sum = INT_MAX;
    for (int sum : vertical_sum) {
        if (sum < min_sum) {
            min_sum = sum;
        }
    }
    
    return min_sum;
}
//Lists
forward_list<int> insertIntoFL(vector<int>& arr) {
    // your code here
    forward_list<int> fl;
    
    for(int i : arr){
        fl.push_front(i);
    }
    return fl;
    // Use push_front() method to push the elements in a forward list and return the
    // list
}

void removeFromFront(forward_list<int> &list) {
    // your code here
    list.pop_front();
}

// list: remove elements after given iteraring position
// x: is the iterating position after which you have to remove
//    from list
void removeAfter(forward_list<int> &list, int x) {
    forward_list<int>::iterator it = list.before_begin();
    for(int i=0; i<x; i++){
        if(next(it)==list.end())return;
        ++it;
    }
    
    if(next(it)!=list.end()){
       list.erase_after(it); 
    }
    // your code here
}

// list: remove elements from list from range given
// start: starting position of the range
// end: end position of the range
    
void removeFromInRange(forward_list<int> &list, int start, int end) {
    // your code here
    forward_list<int>::iterator it_start = list.before_begin();
    
    for(int i=0; i < start; i++){
        if(next(it_start)==list.end())return;
        it_start++;
    }
    
    forward_list<int>::iterator it_end = it_start;
    for(int i=start; i < end; i++){
        if(next(it_end)==list.end())break;
        it_end++;
    }
    
    list.erase_after(it_start, it_end);
}

    
// list: remove all elements from the list
void removeAll(forward_list<int> &list) {
    // your code here
    list.clear();
}

// Complete the function
forward_list<int> eraseMe(forward_list<int> fwdlist) {
    // Your code here
    forward_list<int>::iterator it = fwdlist.before_begin();
    
    if(next(it)!= fwdlist.end()) fwdlist.erase_after(next(it));
    // Use erase_after function
    return fwdlist;
}

int josephus(int n, int k) {
    // Your code here
    list<int> l;
    for(int i=0; i<n; i++){
        l.push_back(i);
    }
    
    list<int>::iterator it = l.begin();
    
    while(l.size() > 1){
        for(int count =1; count < k; count++)
        {
            it++;
            if(it==l.end())it=l.begin();
        }
        it=l.erase(it);
        if(it==l.end())it=l.begin();
        
    }
    return *l.begin();
    
}


int josephus(int n, int k) {
    // code here
    list<int> l;
    for(int i=0; i<n; i++){
        l.push_back(i);
    }
    list<int>::iterator it=l.begin();
    
    while(l.size()>1){
        for(int count=1; count < k; count++)
        {
            it++;
            if(it==l.end())it=l.begin();
        }
        it=l.erase(it);
        if(it==l.end())it=l.begin();
    }
    return *l.begin()+1;
}

auto it = l.begin();
advance(it, index);  // Move iterator to the specified index.

// Replace the element at the given index with the new elements.
l.erase(it);  // Remove the old element.
for (int elem : new_elements) {
    l.insert(it, elem);  // Insert new elements at the same position.
    ++it;  // Move iterator to the next position.
}
}

void replace(int index, vector<int> sequence) {
    // Move the iterator to the specified index
    auto it = l.begin();
    advance(it, index);  // Move iterator to the specified index

    // Remove the element at the given index
    l.erase(it);  // The iterator is now invalid after this operation

    // Insert each element from the sequence
    for (int ele : sequence) {
        l.insert(it, ele);  // Insert the element
        ++it;  // Move iterator to the next position
    }
}

#include <iostream>
#include <deque>
using namespace std;

int main() 
{
    deque<int> dq = {10, 20, 30};
    dq.push_front(5);
    dq.push_back(50);
    for (auto x : dq)
        cout << x << " ";
    cout << dq.front() << " " << dq.back();

    return 0;
}

#include <iostream>
#include <deque>

using namespace std;

int main() 
{
    deque<int> dq = {10, 15, 30, 5, 12};
    auto it = dq.begin();
    it++;
    dq.insert(it, 20); 
    dq.pop_front();
    dq.pop_back();
    cout << dq.size();
    return 0;
}


class Solution {
    public:
      void pb(deque<int>& dq, int x) {
          // code here
          dq.push_back(x);
          
      }
  
      void ppb(deque<int>& dq) {
  
          
          // code here
          dq.pop_back();
      }
  
          
      int front_dq(deque<int>& dq) {
          // code here
          return dq.front();
      }
          
  
      void pf(deque<int>& dq, int x) {
          // code here
          dq.push_front(x);
      }
  };

  // Function to rotate deque by k places in anti-clockwise direction.
void left_Rotate_Deq_ByK(deque<int> &dq, int k) {
    // your code here
    int n=dq.size();
    if (n==0) return;
    k%=n;
    
    for(int i=0; i<k; i++){
        int front=dq.front();
        dq.pop_front();
        dq.push_back(front);
    }
    
}

// Function to rotate deque by k places in clockwise direction.
void right_Rotate_Deq_ByK(deque<int> &dq, int k) {
    
    // your code here
    int n=dq.size();
    if (n==0) return;
    k%=n;
    
    for(int i=0; i<k; i++){
        int back=dq.back();
        dq.pop_back();
        dq.push_front(back);
    }
}
vector<int> max_of_subarrays(int *arr, int n, int k) {
    // your code here
    vector<int> res;
    
    for(int i=0; i<=n-k; i++){
        int mx= arr[i];
        
        for(int j=i; j<i+k;j++){
            mx=max(arr[j], mx);
        }
        res.push_back(mx);
    }
    
    return res;
}
int main(){
    int a[]={5, 4, 6, 1};
    char b[]={'j', 'y', 'w', 'c'};
    int n=4;
    pair_fun(a, b, n);
}