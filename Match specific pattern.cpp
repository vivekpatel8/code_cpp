
vector<string> findMatchedWords(vector<string> dict,
                      string pattern);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> s(n);
		for(int i=0;i<n;i++)
		cin>>s[i];

		string tt;
		cin>>tt;


		vector<string> res = findMatchedWords(s,tt);
  sort(res.begin(),res.end());
		for(int i=0;i<res.size();i++)
		cout<<res[i]<<" ";
		cout<<endl;

	}
}// } Driver Code Ends


/* The function returns a  vector of strings
present in the dictionary which matches
the string pattern.
You are required to complete this method */
vector<string> findMatchedWords(vector<string> dict,
                      string pattern)
{    vector <string> ans;
     int p_len = pattern.length();
     for(auto str : dict){
        int s_len = str.length();
        if(p_len != s_len){
                // nothing to do
        }
        else{
        unordered_map <char, int> patt;
        unordered_map <char, int> s;
        for(int i = 0;i<s_len;i++){
            char a = pattern[i];
            char b = str[i];
            patt[a]++;
            s[b]++;
            if(patt[a] != s[b]){
                break;
            }
            if(i == s_len-1 && patt[a] == s[b])ans.push_back(str);

        }
        }
     }
     return ans;
}
