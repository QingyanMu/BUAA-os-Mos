#include<print.c>
int main(){

lp_Print(void (*output)(void *, char *, int),void * arg,char *fmt, va_list ap);
PrintChar(char * buf, char c, int length, int ladjust);
PrintString(char * buf, char* s, int length, int ladjust);
PrintNum(char * buf, unsigned long u, int base, int negFlag, 
	 int length, int ladjust, char padc, int upcase);




	return 0;
}
