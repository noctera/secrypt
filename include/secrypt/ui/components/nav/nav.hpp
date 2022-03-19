#ifndef NAV_H
#define NAV_H
#include "imgui.h"

namespace ui {
  namespace components {
    class Nav {
    public:
      void render();

    private:
      int page = 0;
    };
  }  // namespace components
}  // namespace ui

#endif