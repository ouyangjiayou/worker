#ifndef _MENUVIEW_
#define _MENUVIEW_

class MenuView
{
private:
	char whiteSmile;
	char blackSmile;
	char geart;
public:
	MenuView();
	void showJiuCan();
	void showWaiMai();
	int showMain();
	int showViewChoice();
	int showRegister();
	int showRegister();
	int showClientChoice();
	int showQuery();
	int showMend();
	int showMenuChoice();
	int showMendDingDan();
	~MenuView();
};