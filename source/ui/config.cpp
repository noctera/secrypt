#include <secrypt/ui/config.hpp>

namespace ui {
  namespace config {
    ImGuiWindowFlags getWindowFlags() {
      return ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize
             | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoTitleBar;
    }

    void colors() {
      ImGuiStyle& style = ImGui::GetStyle();

      style.Colors[ImGuiCol_WindowBg] = ImColor(255, 255, 255);
      style.Colors[ImGuiCol_ChildBg] = ImColor(200, 200, 200);
      style.Colors[ImGuiCol_Text] = ImColor(255, 255, 255);
      style.Colors[ImGuiCol_FrameBg] = ImColor(100, 100, 100);
    }

    std::vector<NavMenuProps> getNavMenuProps() { return {{"Encryption", 1}, {"Decryption", 2}}; }

  }  // namespace config
}  // namespace ui