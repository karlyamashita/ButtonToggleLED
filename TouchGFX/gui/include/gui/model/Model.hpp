#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();

    void buttonClicked();
    void toggleButtonClicked(bool buttonStatus);
    void flexButtonClicked(bool buttonStatus);
protected:
    ModelListener* modelListener;
};

#endif // MODEL_HPP
