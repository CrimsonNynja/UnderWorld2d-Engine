#include "PanormaicState.h"
#include <iostream>
#include <string>

void PanoramicState::init()
{
	Entity e;
	e.addComponent<PanoramicComponent>();
	e.addComponent<VisualComponent>();
	auto p = e.getComponent<PanoramicComponent>();
	auto v = e.getComponent <VisualComponent>();
	v->bHidden = false;
	v->spr.setPosition(-300, 400);
	v->texture = TextureHandler::getInstance()->getTexture("C:\\Users\\hudoc\\Desktop\\images\\ground0.png");
	p->startPosition = sf::Vector2f(-300, 350);
	p->movementSpeed = 1;

	Entity e2;
	e2.addComponent<PanoramicComponent>();
	e2.addComponent<VisualComponent>();
	auto p2 = e2.getComponent<PanoramicComponent>();
	auto v2 = e2.getComponent <VisualComponent>();
	v2->bHidden = false;
	v2->spr.setPosition(-300, 400);
	v2->texture = TextureHandler::getInstance()->getTexture("C:\\Users\\hudoc\\Desktop\\images\\ground0-5.png");
	p2->startPosition = sf::Vector2f(-300, 350);
	p2->movementSpeed = 0.5;

	Entity e3;
	e3.addComponent<PanoramicComponent>();
	e3.addComponent<VisualComponent>();
	auto p3 = e3.getComponent<PanoramicComponent>();
	auto v3 = e3.getComponent <VisualComponent>();
	v3->bHidden = false;
	v3->spr.setPosition(-300, 400);
	v3->texture = TextureHandler::getInstance()->getTexture("C:\\Users\\hudoc\\Desktop\\images\\ground1.png");
	p3->startPosition = sf::Vector2f(-300, 350);
	p3->movementSpeed = 0.25;

	Entity e4;
	e4.addComponent<PanoramicComponent>();
	e4.addComponent<VisualComponent>();
	auto p4 = e4.getComponent<PanoramicComponent>();
	auto v4 = e4.getComponent <VisualComponent>();
	v4->bHidden = false;
	v4->spr.setPosition(-300, 400);
	v4->texture = TextureHandler::getInstance()->getTexture("C:\\Users\\hudoc\\Desktop\\images\\ground2.png");
	p4->startPosition = sf::Vector2f(-300, 350);
	p4->movementSpeed = 0.125;

	Entity e5;
	e5.addComponent<PanoramicComponent>();
	e5.addComponent<VisualComponent>();
	auto p5 = e5.getComponent<PanoramicComponent>();
	auto v5 = e5.getComponent <VisualComponent>();
	v5->bHidden = false;
	v5->spr.setPosition(-300, 400);
	v5->texture = TextureHandler::getInstance()->getTexture("C:\\Users\\hudoc\\Desktop\\images\\fish.png");
	p5->startPosition = sf::Vector2f(330, 300);
	p5->movementSpeed = 0.45;

	Entity e6;
	e6.addComponent<PanoramicComponent>();
	e6.addComponent<VisualComponent>();
	auto p6 = e6.getComponent<PanoramicComponent>();
	auto v6 = e6.getComponent <VisualComponent>();
	v6->bHidden = false;
	v6->spr.setPosition(-300, 400);
	v6->texture = TextureHandler::getInstance()->getTexture("C:\\Users\\hudoc\\Desktop\\images\\bubble.png");
	p6->startPosition = sf::Vector2f(400, 310);
	p6->movementSpeed = 0.5;

	Entity e7;
	e7.addComponent<PanoramicComponent>();
	e7.addComponent<VisualComponent>();
	auto p7 = e7.getComponent<PanoramicComponent>();
	auto v7 = e7.getComponent <VisualComponent>();
	v7->bHidden = false;
	v7->spr.setPosition(-300, 400);
	v7->texture = TextureHandler::getInstance()->getTexture("C:\\Users\\hudoc\\Desktop\\images\\bubble.png");
	p7->startPosition = sf::Vector2f(415, 295);
	p7->movementSpeed = 0.7;

	Entity e8;
	e8.addComponent<PanoramicComponent>();
	e8.addComponent<VisualComponent>();
	auto p8 = e8.getComponent<PanoramicComponent>();
	auto v8 = e8.getComponent <VisualComponent>();
	v8->bHidden = false;
	v8->spr.setPosition(-300, 400);
	v8->texture = TextureHandler::getInstance()->getTexture("C:\\Users\\hudoc\\Desktop\\images\\bubble.png");
	p8->startPosition = sf::Vector2f(415, 343);
	p8->movementSpeed = 0.5;


	this->entities.push_back(e4);
	this->entities.push_back(e3);
	this->entities.push_back(e2);
	this->entities.push_back(e);
	this->entities.push_back(e5);
	this->entities.push_back(e6);
	this->entities.push_back(e7);
	this->entities.push_back(e8);
}

void PanoramicState::update(float dt)
{
	float mouseX = sf::Mouse::getPosition(*this->window).x;
	float mouseY = sf::Mouse::getPosition(*this->window).y;

	//shoudl get the center point dynamically, hard coded for now
	float xDiff = -(((mouseX - 300) / 600) * 100);
	float yDiff = -(((mouseY - 300) / 600) * 100);

	for (auto x : this->entities)
	{
		auto p = x.getComponent<PanoramicComponent>();
		auto v = x.getComponent<VisualComponent>();
		v->spr.setPosition(p->startPosition.x + (xDiff * p->movementSpeed), p->startPosition.y + (yDiff * p->movementSpeed));
	}
}
