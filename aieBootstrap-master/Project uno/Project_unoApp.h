#pragma once

#include "Application.h"
#include "Renderer2D.h"

class Project_unoApp : public aie::Application {
public:

	Project_unoApp();
	virtual ~Project_unoApp();

	virtual bool startup();
	virtual void shutdown();

	virtual void update(float deltaTime);
	virtual void draw();

protected:

	aie::Renderer2D*	m_2dRenderer;
	aie::Font*			m_font;
};