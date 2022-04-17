#ifndef COLORS_H
#define COLORS_H

#include "imgui.h"

namespace ui {
    namespace colors {
        inline ImVec4 alternative() {return ImVec4(42 / 255.0, 46 / 255.0, 54 / 255.0, 255 / 255.0);}
        inline ImVec4 primary() {return ImVec4(114 / 255.0, 124 / 255.0, 245 / 255.0, 255 / 255.0);}
    }
}

#endif