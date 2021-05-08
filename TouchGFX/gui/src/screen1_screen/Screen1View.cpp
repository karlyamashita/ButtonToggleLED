#include <gui/screen1_screen/Screen1View.hpp>

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::flexButtonClicked(){
	bool buttonStatus = flexButton1.getPressed();
	presenter->flexButtonClicked(buttonStatus);
}

void Screen1View::buttonClicked(){
	presenter->buttonClicked();
}

void Screen1View::toggleButtonClicked(){
	bool buttonStatus = toggleButton1.getState();
	presenter->toggleButtonClicked(buttonStatus);
}
