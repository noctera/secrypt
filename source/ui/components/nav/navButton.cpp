#include <secrypt/ui/components/nav/navButton.hpp>

namespace ui {
  namespace components {
    void navButton(const char* name, std::function<void()> callBackFunc, bool active) {
      if (active) {
        ImGui::PushStyleColor(ImGuiCol_Button,
                              ImVec4(70 / 255.0, 70 / 255.0, 80 / 255.0, 255 / 255.0));
      } else {
        ImGui::PushStyleColor(ImGuiCol_Button,
                              ImVec4(50 / 255.0, 54 / 255.0, 62 / 255.0, 255 / 255.0));
      }
      if (ImGui::Button(name, ImVec2(ImGui::GetColumnWidth(), 41))) {
        callBackFunc();
      }
      ImGui::PopStyleColor();
    }
  }  // namespace components
}  // namespace ui