#include<stdio.h>
#include<math.h>
//#include<float.h>

#define DELTA_X	0.25
#define DELTA_Y	0.25
void main(void){

	/*----------------------*/
	/*	座標軸の始点，終点	*/
	/*----------------------*/
	double	x,dx;

	/*--------------------*/
	/*texコマンド環境出力	*/
	/*--------------------*/
	printf("\\documentclass{jarticle}\n");
	printf("\\usepackage{epic,eepic} \n");
	printf("\\begin{document}\n");
	printf("\\begin{figure}[htbp]\n");
	printf("\\begin{center}\n");
	printf("\\setlength{\\unitlength}{10mm}\n");
	printf("\\begin{picture}(5,2)\n");

	/*----------------------*/
	/*座標軸の出力実行			*/
	/*----------------------*/
	//printf("\t	\\thicklines	\\put(	%4.2f,	%4.2f	)\{\\vector(1,0){	%4.2f	}}\n",axis[0].x,axis[0].y,axis[0].length);
	//printf("\t	\\thicklines	\\put(	%4.2f,	%4.2f	)\{$x$}\n",axis[0].x+axis[0].length+0.1,axis[0].y);
	//printf("\t	\\thicklines	\\put(	%4.2f,	%4.2f	)\{\\vector(0,1){	%4.2f	}}\n",axis[1].x,axis[1].y,axis[1].length);
	//printf("\t	\\thicklines	\\put(	%4.2f,	%4.2f	)\{$y$}\n",axis[1].x,axis[1].y+axis[1].length+0.1);

	//printf("\t	\\thicklines	\\put(	-0.5,	-0.5	)\{$O$}\n");

	dx=0.1;
	/*----------------------*/
	/*曲線の出力実行				*/
	/*----------------------*/
	printf("\t	\\thicklines\n");
	for(x=-2;x<2.5;x=x+dx){
					printf("\t	\\path(%f,	%f)(%f,	%f)	\n"	,x,exp(x)/2,x+dx,exp(x+dx)/2);
	}
	printf("\t	\\thinlines\n");

	dx=0.01;
	printf("\t	\\thicklines\n");
	for(x=0+dx;x<5.5;x=x+dx){
					printf("\t	\\path(%f,	%f)(%f,	%f)	\n"	,x,log(2*x),x+dx,log(2*(x+dx)));
	}
	printf("\t	\\thinlines\n");

	/*--------------------*/
	/*texコマンド環境出力	*/
	/*--------------------*/
	printf("\\end{picture}\n");
	printf("\\end{center}\n");
	printf("\\end{figure}\n");
	printf("\\end{document}\n");
}
