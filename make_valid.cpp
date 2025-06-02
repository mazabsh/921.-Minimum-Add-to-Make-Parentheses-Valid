#include<iostream> 
#include<stack> 

using namespace std; 

class Solution{
public: 
    int minAddToMakeValid(string s){
      stack<char> st; 
      for(char c:s){
        if(c=='(') st.push(c); 
        else if(c==')'){
          if(!st.empty() && st.top()=='(') st.pop(); 
          else st.push(c); 
        }
      }
      return st.size(); 
    }
};
int main(){
  string s = "()))"; 
  Solution sol; 
  cout << sol.minAddToMakeValid(s) <<endl; 
  return 0; 
}
