
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


	//����һ��CAVector��Ϊ��ӵ�PageView������
    CAVector<CAView*> viewVector;
     
    //�����Ļ��rect
    DRect winRect = this->getView()->getBounds();
         
    //����CALabel
    CALabel* labelView = CALabel::createWithFrame(winRect);
     
    //����Ϊ����
    labelView->setTextAlignment(CATextAlignment::Center);
    labelView->setVerticalTextAlignmet(CAVerticalTextAlignment::Center);
    labelView->setFontSize(75);
     
    //�����ı�����
    labelView->setText(UTF8("��һ��View"));
         
    //����CAImageView
    CAImageView* imageView = CAImageView::createWithImage(CAImage::create("r/HelloWorld.png"));
     
    //������ʾ����
    imageView->setFrame(winRect);

	//��view
	CAView* bangdanView=CAView::createWithFrame(winRect);
	CALabel* bangdanLabel=CALabel::createWithFrame(winRect);
	bangdanLabel->setTextAlignment(CATextAlignment::Center);            
    bangdanLabel->setVerticalTextAlignmet(CAVerticalTextAlignment::Center);
    bangdanLabel->setFontSize(75);
    bangdanLabel->setText(UTF8("��View"));
	bangdanView->addSubview(bangdanLabel);
     
    //����һ����ɫ��View
    CAView* view = CAView::createWithColor(CAColor_blue);
         
    //������ʾ����
    view->setFrame(winRect);
     
    //����CALabel
    CALabel* lastLabel = CALabel::createWithFrame(winRect);
         
    //���þ���
    lastLabel->setTextAlignment(CATextAlignment::Center);            
    lastLabel->setVerticalTextAlignmet(CAVerticalTextAlignment::Center);
    lastLabel->setFontSize(75);
     
    //������ʾ�ı�
    lastLabel->setText(UTF8("���һ��View"));
         
    //��lastLabel��ӵ�view
    view->addSubview(lastLabel);
         
    //������������ؼ����뵽CAVector������
    viewVector.pushBack(labelView);
    viewVector.pushBack(imageView);
    viewVector.pushBack(bangdanView);
    viewVector.pushBack(view);
         
    /*����һ��CAPageView������Ϊˮƽ����
    CAPageViewDirectionHorizontal:ˮƽ
    CAPageViewDirectionVertical:��ֱ
    */
         
    CAPageView* pageViewTest = CAPageView::createWithCenter(DRect(winRect.size.width*0.5, winRect.size.height*0.5, winRect.size.width, winRect.size.height), CAPageView::Orientation::Horizontal);
        
    //���ü���
    pageViewTest->setPageViewDelegate(this);
     
    //��CAVector��ӵ�pageViewTest
    pageViewTest->setViews(viewVector);
    pageViewTest->getPageCount();
         
    //��pageViewTest����Ļ��ʾ
    this->getView()->addSubview(pageViewTest);
}

void FirstViewController::viewDidUnload()
{
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}
