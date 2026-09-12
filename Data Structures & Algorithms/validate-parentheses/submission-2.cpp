class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char x:s) {
            if (x == '(' || x == '{' || x == '[')
            {
                st.push(x);
            }
            if (x == ')') {
                if (st.empty() || st.top()!='(') {
                    return false;
                }
                else {
                    st.pop();
                }
            }
            else if (x=='}') {
                if (st.empty() || st.top()!='{') {
                    return false;
                }
                else {
                    st.pop();
                }
            }
            else if (x==']') {
                if (st.empty() || st.top()!='[') {
                    return false;
                }
                else {
                    st.pop();
                }
            }
        }
        if (st.size()==0) {
            return true;
        }
        else {
            return false;
        }
    }
};
