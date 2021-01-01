//msgsw.h 
//1.4 supported linux & window
void notice(const char * str) ;
void error(const char * str) ;
void successful(const char * str) ;
void color(const short x);
void Done();
#if defined(__WINNT__) && (__WINNT__==1)
void notice(const char * str) {
color(3);
printf("[Notice]");
printf("%s",str);
putchar('\n');
color(16);
}
void error(const char * str) {

	       color(12);

	       printf("[Error]");
	       printf("%s",str);
	       putchar('\n');
	       color(16);
       }
void successful(const char * str) {
	       color(10);
	       printf("[Successful]");
	printf("%s",str);
	putchar('\n');
	color(16);
}
void color(const short x) {
	if(x>=0 && x<=15)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
	else
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
void Done(){
printf("...Done\n");
}
#endif
