#include<bits/stdc++.h>
using namespace std;
void insertatbottom(stack<int> &st , int element){
    if(st.empty()){
        st.push(element);
        return;
    }
    int el = st.top(); 
    st.pop();
    insertatbottom(st,element);
    st.push(el);

}
//  reverse a stack
void reverse(stack<int> &st){
     if(st.empty()){
        return;
     }

    int ele = st.top();
    st.pop();
    reverse(st);
    insertatbottom(st,ele);
}

int main(){
    stack<int> st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        st.push(val);
    }
    reverse(st);
    cout << "Reversed stack output:\n";
    while(!st.empty()){
        cout<<st.top()<<"\n";
        st.pop();
    }
    return 0;
}
