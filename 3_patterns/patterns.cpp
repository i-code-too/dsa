#include<bits/stdc++.h>
using namespace std;

void printpattern1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void printpattern2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void printpattern3(int n){
    for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout << j << " ";
		}
		cout << endl;
	}
}

void printpattern4(int n){
    for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout << i << " ";
		}
		cout << endl;
	}
}

void printpattern5(int n){
    // for(int i=0; i<n; i++){
	// 	for(int j=n; j>i; j--){
	// 		cout << "*" << " ";
	// 	}
	// 	cout << endl;
	// }
    for(int i=1; i<=n; i++){
        for(int j=0; j<n-i+1; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void printpattern6(int n){
    // for(int i=1; i<=n; i++){
    //     for(int j=0; j<n-i+1; j++){
    //         cout << j+1 << " ";
    //     }
    //     cout << endl;
    // }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

void printpattern7(int n){
    // for(int i=0; i<n; i++){
    //     for(int j=1; j<=2*n-1; j++){
    //         if(j>=n-i && j<=n+i) cout << "*";
    //         else cout << " ";
    //     }
    //     cout << endl;
    // }
    for(int i=0; i<n; i++){
        //spaces - reverse of i
        for (int j=0; j<n-i-1; j++) cout << " ";
        //stars - (2*i+1)
        for (int j=0; j<2*i+1; j++) cout << "*";
        //spaces - reverse of i
        for (int j=0; j<n-i-1; j++) cout << " ";
        cout << endl;
    }
}

void printpattern8(int n){
    for(int i=0; i<n; i++){
        //spaces - i
        for (int j=0; j<i; j++) cout << " ";
        //stars - reverse of (2*i+1)
        for (int j=0; j<2*n-(2*i+1); j++) cout << "*";
        //spaces - i
        for (int j=0; j<i; j++) cout << " ";
        cout << endl;
    }
}

void printpattern9(int n){
    printpattern7(n);
    printpattern8(n);
}

void printpattern10(int n){
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i+1; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for(int i=n; i<2*n-1; i++){
    //     for(int j=0; j<2*n-i-1; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    for(int i=1; i<=2*n-1; i++){
        int stars = i;
        if(i>n) stars = 2*n-i;
        for(int j=1; j<=stars; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void printpattern11(int n){
    for(int i=0; i<n; i++){
        int start = 1;
        if(i%2!=0) start = 0;
        for(int j=0; j<=i; j++){
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

void printpattern12(int n){
    for(int i=1; i<=n; i++){
        // numbers
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }
        // spaces
        for(int j=1; j<=2*(n-i); j++){
            cout << " " << " ";
        }
        // numbers
        for(int j=i; j>0; j--){
            cout << j << " ";
        }
        cout << endl;
    }
}

void printpattern13(int n){
    int num=1;
    for(int i=1; i<=n; i++){ 
        for(int j=1; j<=i; j++){
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }
}

void printpattern14(int n){
    for(int i=1; i<=n; i++){
        char ch='A';
        for(int j=1; j<=i; j++){
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }
}

void printpattern15(int n){
    for(int i=1; i<=n; i++){
        char ch='A';
        for(int j=1; j<=n-i+1; j++){
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }
}

void printpattern16(int n){
    char ch='A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << ch << " ";
        }
        ch += 1;
        cout << endl;
    }
}

void printpattern17(int n){
    for(int i=0; i<n; i++){
        // spaces
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        // alphabets
        char ch='A';
        int breakpoint = 2*i+1;
        for(int j=0; j<breakpoint; j++){
            cout << ch << " ";
            if(j<breakpoint/2) ch += 1;
            else ch -= 1;
        }
        // spaces
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }
}

void printpattern18(int n){
    // patterns are different in TUF and in the CodeNinjas problem linked to it

    // TUF pattern solution
    for(int i=0; i<n; i++){
        char chara = 'A'+n-1;
        for(char ch = chara-i; ch<=chara; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }

    // CodeNinjas pattern solution
    for(int i=0; i<n; i++){
        char chara = 'A'+n-1;
        for(char ch = chara; ch>=chara-i; ch--){
            cout << ch << " ";
        }
        cout << endl;
    }
}

void printpattern19(int n){
    // top 5 rows
    for(int i=1; i<=n; i++){
        // stars
        for(int j=1; j<=n-i+1; j++){
            cout << "*" << " ";
        }
        // spaces
        for(int j=1; j<=2*(i-1); j++){
            cout << " " << " ";
        }
        // stars
        for(int j=1; j<=n-i+1; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }

    // bottom 5 rows
    for(int i=1; i<=n; i++){
        // stars
        for(int j=1; j<=i; j++){
            cout << "*" << " ";
        }
        // spaces
        for(int j=1; j<=2*(n-i); j++){
            cout << " " << " ";
        }
        // stars
        for(int j=1; j<=i; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void printpattern20(int n){
    for(int i=1; i<=n; i++){
        // stars
        for(int j=1; j<=i; j++){
            cout << "*" << " ";
        }
        // spaces
        for(int j=1; j<=2*(n-i); j++){
            cout << " " << " ";
        }
        // stars
        for(int j=1; j<=i; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    for(int i=n-1; i>0; i--){
        // stars
        for(int j=1; j<=i; j++){
            cout << "*" << " ";
        }
        // spaces
        for(int j=1; j<=2*(n-i); j++){
            cout << " " << " ";
        }
        // stars
        for(int j=1; j<=i; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }

    // // bottom 5 rows
    // for(int i=1; i<=n; i++){
    //     // stars
    //     for(int j=1; j<=i; j++){
    //         cout << "*" << " ";
    //     }
    //     // spaces
    //     for(int j=1; j<=2*(n-i); j++){
    //         cout << " " << " ";
    //     }
    //     // stars
    //     for(int j=1; j<=i; j++){
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }
}

void printpattern21(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || i==n-1 || j==0 || j==n-1){
                cout << "*";
            }
            else cout << " ";
        }
        cout << endl;
    }
}

void printpattern22(int n){
    for(int i=1; i<=2*n-1; i++){
        for(int j=1; j<=2*n-1; j++){
            // straight line distance from all 4 corners of the square (not diagonal)
            int top = i-1;
            int left = j-1;
            int right = 2*n-1-j;
            int bottom = 2*n-1-i;
            cout << n - min(min(top, left), min(right, bottom));
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        printpattern1(n);
        printpattern2(n);
        printpattern3(n);
        printpattern4(n);
        printpattern5(n);
        printpattern6(n);
        printpattern7(n);
        printpattern8(n);
        printpattern9(n);
        printpattern10(n);
        printpattern11(n);
        printpattern12(n);
        printpattern13(n);
        printpattern14(n);
        printpattern15(n);
        printpattern16(n);
        printpattern17(n);
        printpattern18(n);
        printpattern19(n);
        printpattern20(n);
        printpattern21(n);
        printpattern22(n);
    }

}
