class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
       int res=0;
        for(int i=0;i<n;i++){
            int k = sentences[i].length();
             int counter = 1;
            for(int j =0;j<k;j++){
                if(sentences[i][j]==' ')
                    counter++;
            }
            res = max(counter,res);
        }
        return res;
    }
};
