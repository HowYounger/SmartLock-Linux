#include "file_io.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h> //字符操作函数库

typedef struct UserInfo
{
	char name[32];
	char password[32];
}info;

void draw_string(char *buf[], unsigned int line);
void show_tips(int);
void show_warn(int n);
void check_qiut(char status[],int i);
void clean_sts();
void SignIn(int,info *);
void Admin();
void SignUp();

extern void getpasswd(char* passwd, int size);  
