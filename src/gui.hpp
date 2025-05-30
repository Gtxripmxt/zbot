#ifndef _gui_hpp
#define _gui_hpp

#include <imgui-cocos.hpp>

class GUI {
private:
    ImFont* s;
    ImFont* l;
    ImFont* vl;

    char location[30];
    char tempReplayName[30];
    
public:
    static auto* get() {
        static GUI* instance = new GUI();
        return instance;
    }

    bool showCBFMessage = false;
    bool shownCBFMessage = false;
    
    bool visible = false;
    bool key = false;
    bool keyCheckFailed = false;
    bool callbackInit = false;

    void renderReplayInfo();
    void renderStateSwitcher();
    void renderMainPanel();

    void renderer();
    void setup();
};

#endif