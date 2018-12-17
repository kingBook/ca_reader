#include "BottomBar.h"

BottomBar::BottomBar()
{

}

BottomBar::~BottomBar()
{

}

void BottomBar::onEnter(){
	CCLog("===123");
	DRect r=this->getBounds();
	CAButton* btn=CAButton::createWithCenter(r,CAButton::Type::SquareRect);
	btn->setTitleForState(CAControl::State::Normal,UTF8("·ÖÀà"));
	btn->setColor(CAColor4B::GREEN);
	btn->setFrame(DRect(100,500,200,80));
	this->addSubview(btn);
}

void BottomBar::onEnterTransitionDidFinish(){
	CCLog("===456");
}