#pragma once

class EdenWM
{
public:
    explicit EdenWM();
    ~EdenWM();

    void Run() const;
private:
    static i32 OnXError(Display* display, XErrorEvent* e);
private:
    Display* mDisplay {};
    Window mRoot {};
};