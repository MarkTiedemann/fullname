#include <windows.h>
#include <stdio.h>
#define SECURITY_WIN32
#include <security.h>
#include <secext.h>
#include <lmcons.h>
#define LEN UNLEN+1

int main() {
	TCHAR username[LEN];
	ULONG len = LEN;
	if (GetUserNameEx(NameDisplay, username, &len)) {
		fputs(username, stdout);
		return 0;
	}	else {
		return 1;
	}
}
