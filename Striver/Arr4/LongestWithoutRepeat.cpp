public:
    int lengthOfLongestSubstring(string input) {
         int n = input.length();
        map<char, int> mp;
        int mx = 1;
        int  i = 0, j = 0;
        while(i < n && j <= i){
            char ch =(char) input[i];
            //The character exist
            if(mp.find(ch) != mp.end()){
                mp.erase(ch);
                j++; 
            }
            else {
                mp.insert({ch, 1});
                mx = max(mx, i - j + 1); 
                i++;
            }
        }
        
    return mx;
    }
};