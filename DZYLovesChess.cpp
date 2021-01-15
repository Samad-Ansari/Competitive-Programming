#include <cstdio>
#include<iostream>
using namespace std;

int n, m;
char S[1100];

int main() {
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%s", S);
		for (int j = 0; j < m; j++)
			if (S[j] == '.') {
				if ((i + j) & 1)	S[j] = 'W';
				else	S[j] = 'B';
			}
		printf("%s\n", S);
	}
}

// New technique (i+j) & 1
// print yes no in sequence of 2d array;
// (i+j) & 2
// print yes yes no no in sequence of 2d array
