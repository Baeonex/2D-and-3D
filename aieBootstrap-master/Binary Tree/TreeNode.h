#pragma once
#include "Application.h"
#include "Renderer2D.h"
#include "imgui.h"
using namespace aie;
class TreeNode
{
public:
	TreeNode(int value);
	~TreeNode();

	bool hasLeft() { return(m_left != nullptr); }
	bool hasRight() { return (m_right != nullptr); }

	int getData() { return m_value; }
	TreeNode* getLeft() { return m_left; }
	TreeNode* getRight() { return m_right; }
	void setData(int value) { m_value = value; }
	void setLeft(TreeNode* node) { m_left = node; }
	void setRight(TreeNode* node) { m_right = node; }

	void draw(Renderer2D*, int x, int y, bool selected = false);
private:
	int m_value;

	//nodes children
	TreeNode* m_right;
	TreeNode* m_left;

};


