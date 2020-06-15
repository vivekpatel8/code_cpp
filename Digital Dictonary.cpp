#include<bits/stdc++.h>
using namespace std;

class node
{

public:
    char data;
    unordered_map<char, node*> children;
    bool terminal;
    node(char ch)
    {
        data = ch;
        terminal = false;
    }
};
vector <string> ans;
void dfs(node * root, string pre)
{
    if(root->terminal == true)
    {
        ans.push_back(pre);
    }
    if(root->data == '\0')
        return;

    for(auto x : root->children)
    {
        dfs(x.second, pre + x.first);
    }
}

class trie
{
    node * root;
public:
    trie()
    {
        root = new node('\0');
    }
    void insert(string str)
    {
        node * temp = root;
        for(int i = 0; str[i] != '\0'; i++)
        {
            char ch = str[i];
            if(temp->children.count(ch))
            {
                temp = temp->children[ch];
            }
            else
            {
                node * n = new node(ch);
                temp->children[ch] = n;
                temp = n;
            }
        }
        temp->terminal = true;
    }

    bool find(string str, node * root1)
    {
        node * temp = root1;
        for(int i =0; str[i] != '\0'; i++)
        {
            if(temp->children.count(str[i]) == 0)
            {
                return false;
            }
            else
            {
                temp = temp->children[str[i]];
            }
        }
        return true;
    }

    void f(string pre)
    {

        node * temp = root;
        if(!find(pre, root))
        {         insert(pre);
            cout<<"No suggestions"<<endl;
        }
        else
        {
            for(int i = 0; pre[i] != '\0'; i++)
            {       char ch = pre[i];
                    temp = temp->children[ch];
            }

            dfs(temp, pre);

        }
    }
};

int main()
{
    int n;
    cin>>n;
    trie t;
    while(n--)
    {
        string str;
        cin>>str;
        t.insert(str);

    }
    int q;
    cin>>q;
    while(q--)
    {
        string str;
        cin>>str;
        t.f(str);
        sort(ans.begin(), ans.end());
        for(auto x : ans)
        {
            cout<<x<<endl;
        }
        ans.clear();
    }
}
