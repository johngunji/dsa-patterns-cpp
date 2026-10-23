class Solution {
public:
    bool fun(int x,int y,vector<vector<char>>& board,string& word,int i,vector<vector<int>>& visit){
        if(i==word.size())return true;
        if(x<0||x>=board.size()||y<0||y>=board[0].size())return false;
        if(visit[x][y]||word[i]!=board[x][y])return false;
        visit[x][y]=1;
        vector<int>dx={-1,1,0,0};
        vector<int>dy={0,0,-1,1};
        for(int j=0;j<4;j++){
            if(fun(x+dx[j],y+dy[j],board,word,i+1,visit))return true;
        }
        visit[x][y]=0;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        if(word.size()>m*n)return false;
        map<char,int>mp;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mp[board[i][j]]++;
            }
        }
        for(char c:word){
            if(--mp[c]<0)return false;
        }
        vector<vector<int>> visit(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0] && fun(i,j,board,word,0,visit)){
                    return true;
                }
            }
        }
        return false;
        
    }
};