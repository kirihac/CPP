#include <iostream>
#include <string>
using namespace std;

class Drawing {
public:
    virtual void Draw()
    {
        cout << " /\\"<< endl;
    };
};

class LineDraw : public Drawing {
    void Draw() override
    {
        cout  << "//\\\\"<< endl;
    }
};

class StarDraw : public Drawing
{
    void Draw() override
    {
        cout  << "/**\\"<< endl;
    }
};

class PlusDraw : public Drawing
{
    void Draw() override
    {
        cout  << "/++\\"<< endl;
    }
};

int main()
{
    Drawing* drawings[4];
    drawings[0] = new Drawing();
    drawings[1] = new LineDraw();
    drawings[2] = new StarDraw();
    drawings[3] = new PlusDraw();
    for (int i = 1; i <= 3; ++i) {
        cout << "Drawing " << i + 1 << ":"<< endl;
        drawings[0]->Draw();
        drawings[i]->Draw();
    }
    return 0;
}