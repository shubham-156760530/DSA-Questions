string infixToPostfix(string s)
    {
        unordered_map<char, int> umap;
        umap['+'] = umap['-'] = 1;
        umap['*'] = umap['/'] = umap['%'] = 2;
        umap['^'] = 3;
        
        stack<char> stc;
        string res = "";
        for(int i = 0; i < s.length(); i++){
            if((s[i] >=65 and s[i] <= 90) or (s[i] >= 97 and s[i] <= 122))res += s[i];
            else {
                if(s[i] == '(')stc.push(s[i]);
                else if(s[i] == ')'){
                    while(!stc.empty() and stc.top() != '('){ res += stc.top(); stc.pop(); }
                    stc.pop();
                }
                else{
                    while(!stc.empty() and umap[stc.top()] >= umap[s[i]]){ res += stc.top(); stc.pop(); }
                    stc.push(s[i]);
                }
            }
        }
        
        while(!stc.empty()){ res += stc.top(); stc.pop(); }
        
        return res;
        // Your code here
    }