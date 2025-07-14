class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int m = players.size();
        int n = trainers.size();

        int count = 0;
       
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());

        int i =0, j=0;

       while(i<m && j<n)
       {
        if(players[i] > trainers[j]){
            j++;
        }else{ // players[i] <= trainers[j]
            count++;
            i++;
            j++;
        }
       }
        return count;
    }
};