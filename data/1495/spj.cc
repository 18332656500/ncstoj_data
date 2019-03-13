#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char* argv[]) {
    FILE * f_in = fopen(argv[1],"r");//测试输入
	FILE * f_out = fopen(argv[2],"r");//测试输出
	FILE * f_user = fopen(argv[3],"r");//用户输出
	int ret = 0; //AC=0,WA=1
	
	/*****spj代码区域*******/
	srand(time(0)+2131);

	int r;
	fscanf(f_user,"%d",&r);

	if(r != 1 + rand()%10)
		ret = 1;

	/*****spj-end********/ 
	
    fclose(f_in);
    fclose(f_out);
    fclose(f_user);

    return ret;
}
