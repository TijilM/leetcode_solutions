class Solution {
public:
    bool judgeCircle(string moves) {
        int vertical=0;
        int horizontal=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='U')
                vertical++;
            else if(moves[i]=='D')
                vertical--;
            else if(moves[i]=='L')
                horizontal++;
            else
                horizontal--;
        }
        if(vertical==0 && horizontal==0)
            return true;
        return false;
    }
};