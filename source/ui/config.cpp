#include <secrypt/ui/config.hpp>

namespace secrypt {
  namespace ui {
    namespace config {
      ImGuiWindowFlags getWindowFlags() {
        return ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize
               | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_MenuBar
               | ImGuiWindowFlags_NoTitleBar;
      }

    }  // namespace config
  }    // namespace ui

}  // namespace secrypt