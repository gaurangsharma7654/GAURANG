#include <iostream>
#include <vector>

using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int row = matrix.size();
    int col = matrix[0].size();
    vector<int> ans;
    int count = 0;
    int total = row*col;
    
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row-1;
    int endingCol = col-1;

    while(count<total) {
        for(int index = startingCol;count<total && index<=endingCol;index++) {
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;
        
        for(int index = startingRow;count<total && index<=endingRow;index++) {
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;
        
        for(int index = endingCol;count<total && index >= startingCol;index--) {
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;

        for(int index= endingRow;count<total && index>=startingRow;index--) {
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}
int main() {
    int row,col;
    cin>>row>>col;

    vector<vector<int>> matrix(row,vector<int>(col));
    
    cout<<"Enter the elements of matrix"<<endl;
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            cin>>matrix[i][j];
        }
    }
    
    vector<int> result = spiralOrder(matrix);
    cout<<"Spiral Matrix"<<endl;
    for(int i=0;i<result.size();++i) {
        cout<<result[i]<<" ";
    }
    return 0;
}
