#include <gui/screen1_screen/Screen1View.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>

Screen1Presenter::Screen1Presenter(Screen1View& v)
    : view(v)
{

}

void Screen1Presenter::activate()
{

}

void Screen1Presenter::deactivate()
{

}

void Screen1Presenter::buttonClicked(){
	model->buttonClicked();
}

void Screen1Presenter::toggleButtonClicked(bool buttonStatus){
	model->toggleButtonClicked(buttonStatus);
}

void Screen1Presenter::flexButtonClicked(bool buttonStatus){
	model->flexButtonClicked(buttonStatus);
}
