#ifndef NAVBUTTON_H
#define NAVBUTTON_H
#include <functional>
#include <string>

#include "imgui.h"

namespace ui {
  namespace components {
    void navButton(const char* name, std::function<void()> callBackFunc, bool active);
  }
}  // namespace ui

#endif