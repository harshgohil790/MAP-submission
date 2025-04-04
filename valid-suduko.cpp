class Solution {
public:
  bool issafe(vector<vector<char>>& board,int row,int col,char d){
 
   //hori
   for(int j=0;j<9;j++){
    if(board[row][j]== d){
        return false;
    }
   }
    //vert
    for(int i=0;i<9;i++){
        if(board[i][col] == d){
            return false;
        }
    }

    int srow=(row/3)*3;
   int scol=(col/3)*3;
   for(int i=srow;i<=srow+2;i++){
    for(int j=scol;j<=scol+2;j++){
        if(board[i][j]==d){
            return false;
        }
    }
   }

return true;
  }
bool helper( vector<vector<char>>& board,int row,int col){
    if(row == 9){
        return true;
    }
    int nextrow=row;int nextcol=col+1;
    if(nextcol == 9){
        nextrow=row+1;
        nextcol=0;
    }

    if(board[row][col]!='.'){
           return helper(board,nextrow,nextcol);
    }
    for(char d='1';d<='9';d++){
        if(issafe(board,row,col,d)){
            board[row][col]=d;
            if( helper(board,nextrow,nextcol)){
                return true;
            }
            board[row][col]='.';
                    }

    }
    return false;
}


   bool isValidSudoku(vector<vector<char>>& board){

   return helper(board,0,0);

   }


};
