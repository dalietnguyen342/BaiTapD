// Viết chương trình nhập chuỗi ký tự. Nếu chuỗi nhập vào là chuỗi rỗng, chương trình in ra thông báo “Chuoi rong.”. Ngược lại, chương trình đảo ngược các ký tự của mỗi tiếng trong chuỗi.

// (Lưu ý: Các tiếng trong chuỗi cách nhau bởi khoảng trắng)

// Input

// Chuỗi s
// Output

// Thông báo “Chuoi rong.” nếu s rỗng
// Ngược lại, xuất ra màn hình chuỗi s đã đảo ngược các ký tự của mỗi tiếng

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 300

int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void StringReverse(char st[]);

int main()
{
	char s[MAX];
	fgets(s,MAX,stdin);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
	{
		StringReverse(s);
		cout << s << endl;
	}
	return 0;
}

// kiem tra xem chuoi co rong khong
int myStrcmp(char s1[], char s2[]) {
    if (s1[0] == '\n' || s1[0] == '\0') return 0;
    else return 1;
}

int myStrlen(char s[], int k) {
    for (int i = k;; i++) {
        if (s[i] == '\n' || s[i] == '\0') return i;
    }
}
int dem(char s[],int k) {
    for (int i = k;; i++) {
        if (s[i] == ' ')
            return i-1; // tra ve so ky tu truoc khoang trang
        if (s[i] == '\n'||s[i]=='\0') return i-1; // tra ve so ky tu chuoi
    }
}

// ham dao nguoc ki tu
void reverse(char s[], int m, int n) {
    for (m,n; m < n; m++, n--)
        swap(s[m], s[n]);
}


void StringReverse(char st[]) {
    for (int i = 0; st[i] != '\0';i++) {  // nguyen an
        if (i == 0) {
            reverse(st,0, dem(st, 0) );
            continue;
        }
        if (st[i - 1] == ' ')
            reverse(st,i, dem(st, i) );
    }
}
