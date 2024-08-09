#include "EdenWM.hpp"

i32 EdenWM::OnXError(Display* display, XErrorEvent* e)
{
    THROW_IF(e->error_code == BadAccess, std::format("Detected running WM on display {}", XDisplayString(display)));

    return 0;
}

EdenWM::EdenWM()
    : mDisplay{XOpenDisplay(nullptr)}
{
    THROW_IF(!mDisplay, "Failed to open X display.");
    mRoot = DefaultRootWindow(mDisplay);

    XSetErrorHandler(&OnXError);
    XSelectInput(mDisplay, mRoot, SubstructureRedirectMask | SubstructureNotifyMask);
    XSync(mDisplay, false);
}

EdenWM::~EdenWM()
{
    XCloseDisplay(mDisplay);
}

void EdenWM::Run() const
{
    XEvent e;

    while (true)
    {
        XNextEvent(mDisplay, &e);

        switch (e.type)
        {
            case CreateNotify:
                break;
            case ConfigureNotify:
                break;
        }
    }
}