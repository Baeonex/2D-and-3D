#pragma once

#include "Application.h"
#include "Renderer2D.h"

class Test2DApp : public aie::Application {
public:

	Test2DApp();
	virtual ~Test2DApp();

	virtual bool startup();
	virtual void shutdown();

	virtual void update(float deltaTime);
	virtual void draw();

protected:

	aie::Renderer2D*	m_2dRenderer;
	aie::Font*			m_font;
};