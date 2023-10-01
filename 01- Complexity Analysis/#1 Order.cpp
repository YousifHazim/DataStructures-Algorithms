#include <iostream>
#include <cassert>
using namespace std;

/* The Function Do not depend on a variables and it is fixed steps */

void ConstantOrder1() { // O(1)
	int start = 6;
	int end = 100;

	int mid = (end - start) / 2;

	if (mid % 2 == 0)
		--mid;
}

/* When you add up the number of steps,
you will find that they are many, but they are fixed steps that do not change by changing a 
specific variable because there is no variable */

void ConstantOrder2() { // O(1)
	int start = 7;
	int end = 0;

	for (int i = 0; i < 1000; ++i)
		end += end * 2 + start;
}

/* It depends on the variable n, but inside the for loop it does not depend on the variable */

void linear1(int n) {	// O(n)
	int sum = 0;
	for (int i = 0; i < n; i++) {
		// All below are O(1)
		int x = 2 + 3 * 4;
		sum += i;
		sum += 2;
		sum += x;
	}
}

/* It depends on the variable n, but inside the for loop it does not depend on the variable 
   even there is two for in the function ( n + n ) so it is n */

void linear2(int n) { // O(n)
	for (int i = 0; i < 10 * n; i++)
		ConstantOrder1();

	for (int i = 0; i < 5 * n; i++)
		ConstantOrder1();

}

/* In the case of a nested loop, it will be 5n * 3n, so the result is 15n^2, which is n^2 */

void quadratic1(int n) { // O(n^2)
	int cnt = 0;
	for (int i = 0; i < 5 * n; ++i) {
		for (int j = 0; j < 3 * n; ++j) {
			cnt++;
			ConstantOrder1();
		}
	}
}

/* In the case of a nested loop, it will be 5n * 3n, so the result is 15n^2, which is n^2 
  but we will take the bigger part ( n^2 + n ) it will be n^2 only */

void quadratic2(int n) { // O(n^2)
	int cnt = 0;
	for (int i = 0; i < 5 * n; ++i) {
		for (int j = 0; j < 3 * n; ++j) {
			cnt++;
			ConstantOrder1();
		}
	}
	for (int i = 0; i < 10 * n; i++)
		ConstantOrder1();
}

/* In the case of a nested loop, but the body of the third "for" is constant , so it will be n^2 */

void quadratic3(int n) { // O(n^2)
	int cnt = 0;
	for (int i = 0; i < 5 * n; ++i) {
		for (int j = 0; j < 3 * n; ++j) {
			for (int k = 0; k < 1000; ++k) {
				cnt++;
				ConstantOrder1();
			}
		}
	}
	for (int i = 0; i < 10 * n; i++)
		ConstantOrder1();
}

/* It will take the bigger "10n + 3n^2" , so it will be n^2 */

void quadratic4(int n) { // O(n^2)
	for (int i = 0; i < 10 * n; i++)
		ConstantOrder1();

	for (int i = 0; i < 3 * n * n; i++)
		ConstantOrder1();
}

/* Three nested loop , so it will be n^3 */

void cubic1(int n) { // O(n^3)
	int cnt = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			for (int k = 0; k < n; ++k) {
				cnt++;
			}
		}
	}
}

/* Will take the bigger "n^3 + 1000000 n^2" , so it will be n^3 */

void cubic2(int n) { // O(n^3)
	int cnt = 0;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			for (int k = 0; k < n; ++k)
				cnt++;

	for (int i = 0; i < 1000 * n; ++i)
		for (int j = 0; j < 1000 * n; ++j)
			cnt++;
}

/* Three nested loop "n^2 * n * n^3" , so it will be "n^6" */

void f(int n) { // O(n^6)
	int cnt = 0;
	for (int i = 0; i < n * n; ++i)
		for (int j = 0; j < n; ++j)
			for (int k = 0; k < n * n * n; ++k)
				cnt++;

}

/* Two nested loop "n^2 * n" , so it will be n^3 */

void f1(int n) { // O(n^3)
	int cnt = 0;
	for (int i = 0; i < n * n; ++i)
		for (int j = 0; j < n; ++j)
			cnt++;
}

/* When function call function so it will be "n * n^3" , it's n^4 */

void f2(int n) { // O(n^4)
	for (int i = 0; i < n; ++i)
		f1(i);	// n^3
}

/* The loop can depend on many variables , so it will be "nm" */

void f3(int n, int m) {		// O(nm)
	int cnt = 0;
	for (int i = 0; i < 2 * n; ++i)
		for (int j = 0; j < 3 * m; ++j)
			cnt++;
}

/* in case there is many variables and two "for" , so it will be "nm + n^3" */

void f4(int n, int m) {		// O(nm + n^3)
	int cnt = 0;
	for (int i = 0; i < 2 * n; ++i)
		for (int j = 0; j < 3 * m; ++j)
			cnt++;

	for (int i = 0; i < n * n * n; ++i)
		cnt++;
}

int main() {

	return 0;
}
