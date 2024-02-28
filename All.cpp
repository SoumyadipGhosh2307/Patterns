#include <iostream>
#include <cmath>
using namespace std;

void printHalfPyramid(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

void printHollowSquare(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i == 1 || i == n || j == 1 || j == n)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

void printRightTriangle(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

void printMirroredRightTriangle(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = n; j > 0; --j) {
            if (j > i)
                cout << "  ";
            else
                cout << "* ";
        }
        cout << endl;
    }
}

void printPyramid(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << endl;
    }
}

void printMirroredPyramid(int n) {
    for (int i = n; i >= 1; --i) {
        for (int j = 0; j < n - i; ++j) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << endl;
    }
}

void printDiamond(int n) {
    int space = n - 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < space - i; ++j)
            cout << " ";
        for (int j = 0; j < 2 * i + 1; ++j)
            cout << "*";
        cout << endl;
    }
    space = 1;
    for (int i = n - 2; i >= 0; --i) {
        for (int j = 0; j < space; ++j)
            cout << " ";
        for (int j = 0; j < 2 * i + 1; ++j)
            cout << "*";
        cout << endl;
        ++space;
    }
}

void printHollowDiamond(int n) {
    int space = n - 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < space - i; ++j)
            cout << " ";
        cout << "*";
        if (i > 0) {
            for (int j = 0; j < 2 * i - 1; ++j)
                cout << " ";
            cout << "*";
        }
        cout << endl;
    }
    space = 1;
    for (int i = n - 2; i >= 0; --i) {
        for (int j = 0; j < space; ++j)
            cout << " ";
        cout << "*";
        if (i > 0) {
            for (int j = 0; j < 2 * i - 1; ++j)
                cout << " ";
            cout << "*";
        }
        cout << endl;
        ++space;
    }
}

void printHalfPyramidNumbers(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void printMirroredHalfPyramidNumbers(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = n; j >= 1; --j) {
            if (j > i)
                cout << "  ";
            else
                cout << j << " ";
        }
        cout << endl;
    }
}

void printFloydsTriangle(int n) {
    int count = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << count << " ";
            ++count;
        }
        cout << endl;
    }
}

void printPascalsTriangle(int n) {
    for (int i = 0; i < n; ++i) {
        int coef = 1;
        for (int j = 1; j < 2 * (n - i); ++j)
            cout << " ";
        for (int j = 0; j <= i; ++j) {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            cout << coef << "   ";
        }
        cout << endl;
    }
}

void printPalindromePyramid(int n) {
    for (int i = 1; i <= n; ++i) {
        int num = i;
        for (int j = 1; j <= i; ++j) {
            cout << num << " ";
            num--;
        }
        num = 2;
        for (int j = 1; j <= i - 1; ++j) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

void printReverseAlphabets(int n ) {
    char ch = 'A' + n - 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
}

void printZigZag(int n) {
    int space = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= space; ++j)
            cout << "  ";
        cout << "* " << endl;
        if (i <= n / 2)
            space++;
        else
            space--;
    }
}

void printAlternatingZerosOnes(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if ((i + j) % 2 == 0)
                cout << "1 ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

void printHollowSquaresIncreasingNumbers(int n) {
    int num = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                cout << num << " ";
            else
                cout << "  ";
        }
        cout << endl;
        num++;
    }
}

void printHollowRectanglesIncreasingNumbers(int rows, int cols) {
    int num = 1;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1)
                cout << num << " ";
            else
                cout << "  ";
        }
        cout << endl;
        num++;
    }
}

void printSpiralPattern(int n) {
    int size = 2 * n - 1;
    int front = 0;
    int back = size - 1;
    int a[size][size];
    int num = 1;

    while (n != 0) {
        for (int i = front; i <= back; ++i) {
            a[front][i] = num;
            num++;
        }
        for (int i = front + 1; i <= back; ++i) {
            a[i][back] = num;
            num++;
        }
        for (int i = back - 1; i >= front; --i) {
            a[back][i] = num;
            num++;
        }
        for (int i = back - 1; i >= front + 1; --i) {
            a[i][front] = num;
            num++;
        }
        front++;
        back--;
        n--;
    }

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if(a[i][j]<10){
                cout << "0" << a[i][j] << " ";
            }else{
                cout << a[i][j] << " ";
            }
            
        }
        cout << endl;
    }
}

void printConcentricSquarePattern(int n) {
    int size = 2 * n - 1;
    int front = 0;
    int back = size - 1;
    int a[size][size];
    int num = n;

    while (num != 0) {
        for (int i = front; i <= back; ++i) {
            for (int j = front; j <= back; ++j) {
                if (i == front || i == back || j == front || j == back)
                    a[i][j] = num;
            }
        }
        front++;
        back--;
        num--;
    }

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    cout << "1. Half Pyramid of Asterisks:" << endl;
    printHalfPyramid(n);
    
    cout << "\n2. Hollow Square Pattern:" << endl;
    printHollowSquare(n);
    
    cout << "\n3. Right Triangle of Asterisks:" << endl;
    printRightTriangle(n);
    
    cout << "\n4. Mirrored Right Triangle of Asterisks:" << endl;
    printMirroredRightTriangle(n);
    
    cout << "\n5. Pyramid Pattern of Asterisks:" << endl;
    printPyramid(n);
    
    cout << "\n6. Mirrored Pyramid Pattern of Asterisks:" << endl;
    printMirroredPyramid(n);
    
    cout << "\n7. Diamond Pattern of Asterisks:" << endl;
    printDiamond(n);
    
    cout << "\n8. Hollow Diamond Pattern of Asterisks:" << endl;
    printHollowDiamond(n);
    
    cout << "\n9. Half Pyramid of Numbers from 1 to n:" << endl;
    printHalfPyramidNumbers(n);
    
    cout << "\n10. Mirrored Half Pyramid of Numbers from 1 to n:" << endl;
    printMirroredHalfPyramidNumbers(n);
    
    cout << "\n11. Floyd's Triangle Pattern:" << endl;
    printFloydsTriangle(n);
    
    cout << "\n12. Pascal's Triangle Pattern:" << endl;
    printPascalsTriangle(n);
    
    cout << "\n13. Palindrome Pyramid Pattern:" << endl;
    printPalindromePyramid(n);
    
    cout << "\n14. Pattern of Alphabets in Reverse Order:" << endl;
    printReverseAlphabets(n);
    
    cout << "\n15. Zigzag Pattern:" << endl;
    printZigZag(n);
    
    cout << "\n16. Pattern of Alternating Zeros and Ones:" << endl;
    printAlternatingZerosOnes(n);
    
    cout << "\n17. Pattern of Hollow Squares with Numbers Increasing from Outside to Inside:" << endl;
    printHollowSquaresIncreasingNumbers(n);
    
    cout << "\n18. Pattern of Hollow Rectangles with Numbers Increasing from Outside to Inside:" << endl;
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    printHollowRectanglesIncreasingNumbers(rows, cols);
    
    cout << "\n19. Spiral Pattern of Numbers:" << endl;
    printSpiralPattern(n);
    
    cout << "\n20. Concentric Square Pattern:" << endl;
    printConcentricSquarePattern(n);

    return 0;
}
