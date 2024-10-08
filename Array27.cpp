// Print the matrix in spiral manner
#include <iostream>

using namespace std;

int main() {
  int rows, cols;
  cout << "Enter the number of rows: ";
  cin >> rows;
  cout << "Enter the number of columns: ";
  cin >> cols;

  int matrix[rows][cols];
  int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
  int dir = 0; // 0: right, 1: down, 2: left, 3: up
  int count = 1;

  while (top <= bottom && left <= right) {
    if (dir == 0) { // Right
      for (int i = left; i <= right; i++) {
        matrix[top][i] = count++;
      }
      top++;
    } else if (dir == 1) { // Down
      for (int i = top; i <= bottom; i++) {
        matrix[i][right] = count++;
      }
      right--;
    } else if (dir == 2) { // Left
      for (int i = right; i >= left; i--) {
        matrix[bottom][i] = count++;
      }
      bottom--;
    } else if (dir == 3) { // Up
      for (int i = bottom; i >= top; i--) {
        matrix[i][left] = count++;
      }
      left++;
    }

    dir = (dir + 1) % 4;
  }


  cout << "Spiral Matrix:\n";
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}


