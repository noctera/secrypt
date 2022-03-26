#ifndef NAV_H
#define NAV_H
#include "imgui.h"

namespace ui {
  namespace components {
    class Nav {
    public:
      void render();
      int getCurrentPageNum();

    private:
      inline static int page = 1;
    };
  }  // namespace components
}  // namespace ui

#endif