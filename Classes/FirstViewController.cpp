
#include "FirstViewController.h"

FirstViewController::FirstViewController()
{

}

FirstViewController::~FirstViewController()
{

}

void FirstViewController::viewDidLoad()
{
    // Do any additional setup after loading the view from its nib.
    /*CAImageView* imageView = CAImageView::createWithImage(CAImage::create("r/HelloWorld.png"));
    imageView->setScaleType(CAImageView::ScaleType::FitImageCrop);
	imageView->setLayout(DLayoutFill);
    this->getView()->addSubview(imageView);

    DLayout labelLayout;
	labelLayout.horizontal = DHorizontalLayout_L_R(20, 20);
	labelLayout.vertical = DVerticalLayout_T_H(200, 100);
    
    CAFont font;
    font.color = CAColor4B::WHITE;
    font.fontSize = 72;
    
    CALabel* label = CALabel::createWithLayout(labelLayout);
    label->setFont(font);
    label->setText("CrossApp");
    label->setTextAlignment(CATextAlignment::Center);
    label->setVerticalTextAlignmet(CAVerticalTextAlignment::Center);
    this->getView()->addSubview(label);*/


	//生命一个CAVector作为添加到PageView的容器
    CAVector<CAView*> viewVector;
     
    //获得屏幕的rect
    DRect winRect = this->getView()->getBounds();
         
    //创建CALabel
    CALabel* labelView = CALabel::createWithFrame(winRect);
     
    //设置为居中
    labelView->setTextAlignment(CATextAlignment::Center);
    labelView->setVerticalTextAlignmet(CAVerticalTextAlignment::Center);
    labelView->setFontSize(75);
     
    //设置文本内容
    labelView->setText(UTF8("第一个View"));
         
    //创建CAImageView
    CAImageView* imageView = CAImageView::createWithImage(CAImage::create("r/HelloWorld.png"));
     
    //设置显示区域
    imageView->setFrame(winRect);

	//榜单view
	CAView* bangdanView=CAView::createWithFrame(winRect);
	CALabel* bangdanLabel=CALabel::createWithFrame(winRect);
	bangdanLabel->setTextAlignment(CATextAlignment::Center);            
    bangdanLabel->setVerticalTextAlignmet(CAVerticalTextAlignment::Center);
    bangdanLabel->setFontSize(75);
    bangdanLabel->setText(UTF8("榜单View"));
	bangdanView->addSubview(bangdanLabel);
     
    //创建一个蓝色的View
    CAView* view = CAView::createWithColor(CAColor_blue);
         
    //设置显示区域
    view->setFrame(winRect);
     
    //创建CALabel
    CALabel* lastLabel = CALabel::createWithFrame(winRect);
         
    //设置居中
    lastLabel->setTextAlignment(CATextAlignment::Center);            
    lastLabel->setVerticalTextAlignmet(CAVerticalTextAlignment::Center);
    lastLabel->setFontSize(75);
     
    //设置显示文本
    lastLabel->setText(UTF8("最后一个View"));
         
    //将lastLabel添加到view
    view->addSubview(lastLabel);
         
    //将上面的三个控件放入到CAVector容器内
    viewVector.pushBack(labelView);
    viewVector.pushBack(imageView);
    viewVector.pushBack(bangdanView);
    viewVector.pushBack(view);
         
    /*创建一个CAPageView并设置为水平滚动
    CAPageViewDirectionHorizontal:水平
    CAPageViewDirectionVertical:竖直
    */
         
    CAPageView* pageViewTest = CAPageView::createWithCenter(DRect(winRect.size.width*0.5, winRect.size.height*0.5, winRect.size.width, winRect.size.height), CAPageView::Orientation::Horizontal);
        
    //设置监听
    pageViewTest->setPageViewDelegate(this);
     
    //将CAVector添加到pageViewTest
    pageViewTest->setViews(viewVector);
    pageViewTest->getPageCount();
         
    //将pageViewTest添到屏幕显示
    this->getView()->addSubview(pageViewTest);
}

void FirstViewController::viewDidUnload()
{
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}
