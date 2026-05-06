
// Магический квадрат



#include<iostream>

using namespace std;

int main() {

	system("chcp 1251"); 

	int A[3][3];

	int magic = 0;

	int s1 = 0;

	int s2 = 0;

	int s3 = 0;

	int s4 = 0;

	int s5 = 0;

	int d1 = 0;

	int d2 = 0;

	
	cout << "введите 9 чисел: "; // 

	for (int i = 0; i < 3; i++) { // 

		for (int j = 0; j < 3; j++) { // 


			cin >> A[i][j];

		
				for (int i = 0; i < 3; i++) {

					 magic += A[0][i];

				}

				for (int i = 0; i < 3; i++) {

					 s1 += A[1][i];
				}

				for (int i = 0; i < 3; i++) {

					 s2 += A[2][i];
				}

				for ( int j = 0; j < 3; j++) {

					 s3 += A[j][0];
				}

				for ( int j = 0; j < 3; j++) {

					 s4 += A[j][1];
				}

				for (int j = 0; j < 3; j++) {

					 s5 += A[j][2];
				}

				for ( int d = 0; d < 3; d++) {

					 d1 += A[d][d];
				}

				for (int d = 0; d < 3; d++) {

					d2 += A[d][3 - d - 1];


				}

				if (magic == s1 && magic == s2 && magic == s3 && magic == s4 && magic == s5 && magic == d1 && magic == d2 && s1 == s2

					&& s1 == s3 && s1 == s4 && s1 == d1 && s1 == d2 && s2 == s3 && s2 == s4 && s2 == s5 && s2 == s3 && s2 == s4 && s2 == s5

					&& s2 == d1 && s2 == d2 && s3 == s4 && s3 == s5 && s3 == d1 && s3 == d2 && s4 == s5 && s4 == d1 && s4 == d2 && s5 == d1

					&& s5 == d2 && d1 == d2) {

					cout << "Магический квадрат: " << magic << s1 << s2 << s3 << s4 << s5 << d1 << d2;


				}
				else {

					cout << "Не магический квадрат: ";
				}

				

				

				



			}

		}

	return 0;

	}



 
