#pragma once
class ST {
public:

	void f1(int a, int b, int* aa) {
		for (int i = 0; i < b - a + 1; i++) {
			aa[i] = 0;
		}
		for (int i = a; i < b + 1; i++) {
			for (int j = 0; j < i + 1; j++) {
				aa[i - a] += j; // #1 int function
			}
		}
		sum1 = aa;
	}

	void f2(float a, float b, float x, float dx, int m, float* xx, float* yy) {
		yy[0] = x;

		for (int i = 1; i < m; i++) {
			yy[i] = x += dx; // x value
		}
		for (int i = 0; i < m; i++) {
			xx[i] = a * yy[i] + b; // #2 float function
		}
		sum2 = xx;
	}
	int* sum1;
	float* sum2;
};
