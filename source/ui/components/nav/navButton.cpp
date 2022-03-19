#include <secrypt/ui/components/nav/navButton.hpp>

namespace ui {
  namespace components {
    void navButton(const char* name) {
      ImGui::PushStyleColor(ImGuiCol_Button,
                            ImVec4(50 / 255.0, 54 / 255.0, 62 / 255.0, 255 / 255.0));
      ImGui::Button(name, ImVec2(ImGui::GetColumnWidth(), 41));
      ImGui::PopStyleColor();
    }
  }  // namespace components
}  // namespace ui