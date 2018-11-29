// ConsoleApplication3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include"graphm.h"
#include"graphl.h"
#include"dfs_bfs.h"
using namespace std;
int main()
{
	Graphm g1(7);
	g1.setEdge(1, 3,1);
	g1.setEdge(1, 5, 1);
	g1.setEdge(2, 3, 1);
	g1.setEdge(2, 6, 1);
	g1.setEdge(3, 1, 1);
	g1.setEdge(3, 2, 1);
	g1.setEdge(3, 4, 1);
	g1.setEdge(3, 6, 1);
	g1.setEdge(4, 3, 1);
	g1.setEdge(4, 6, 1);
	g1.setEdge(5, 1, 1);
	g1.setEdge(5, 6, 1);
	g1.setEdge(6, 2, 1);
	g1.setEdge(6, 3, 1);
	g1.setEdge(6, 4, 1);
	g1.setEdge(6, 5, 1);
	g1.print();
	cout << "DFS遍历树:" << endl;
	DFS(&g1, 1);
	/* mark矩阵的初始化 */
	for (int i = 0; i < 7; i++)
		g1.setMark(i, 0);
	cout << "\nBFS遍历树:" << endl;
	queue<int> q1;
	BFS(&g1, 1, &q1);
	return 0;
}

