/*************************************************************************
    > File Name: B.cpp
    > Author: Stomach_ache
    > Mail: sudaweitong@gmail.com
    > Created Time: 2014年10月05日 星期日 22时22分39秒
    > Propose: 
 ************************************************************************/

#include <cmath>
#include <string>
#include <cstdio>
#include <fstream>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
/*Let's fight!!!*/

int n, m;
char a[35], b[35];

bool ok(char up, char down, char left, char right) {
	if (up == down) return false;
	if (left == right) return false;
	if (up == '<' && left == '^') return false;
	if (down == '<' && left == 'v') return false;
	if (up == '>' && right == '^') return false;
	if (down == '>' && right == 'v') return false;
	return true;
}

int main(void) {
	scanf("%d%d", &n, &m);
	scanf("%s%s", a, b);
	char up = a[0], down = a[n - 1];
	char left = b[0], right = b[m - 1];
	if (ok(up, down, left, right)) printf("YES\n");
	else printf("NO\n");
	return 0;
}
