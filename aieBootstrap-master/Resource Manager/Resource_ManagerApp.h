#pragma once

#include "Application.h"
#include "Renderer2D.h"
#include "Resource.h"
#include "Player.h"
#include "ResourcesManager.h"
#include <iostream>
class Resource_ManagerApp : public aie::Application {
public:

	Resource_ManagerApp();
	virtual ~Resource_ManagerApp();

	virtual bool startup();
	virtual void shutdown();

	virtual void update(float deltaTime);
	virtual void draw();

protected:
	ResourceManager<aie::Texture> m_images;
	Player* m_player;
	aie::Renderer2D*	m_2dRenderer;
	aie::Font*			m_font;
};

