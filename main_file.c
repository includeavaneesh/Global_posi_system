#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<graphics.h>
#define INFINITY 9999
#define MAX 10

int G[MAX][MAX],n,startnode,destination;
void duplicate(int n);
void locAddress();
void scanning();
void returnAddress();
void dijkstra();
void push();
void popDisplay();
int empty();

int main()
{
	scanning();
	dijkstra();

	return 0;
}
