#include <secrypt/ui/colors.hpp>
#include <secrypt/ui/components/nav/navButton.hpp>

namespace ui {
  namespace components {
    void navButton(const char* name, std::function<void()> callBackFunc, bool active) {
      ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ui::colors::primary());
      if (active) {
        ImGui::PushStyleColor(ImGuiCol_Button, ui::colors::primary());
      } else {
        ImGui::PushStyleColor(ImGuiCol_Button, ui::colors::alternative());
      }
      if (ImGui::Button(name, ImVec2(ImGui::GetColumnWidth(), 60))) {
        callBackFunc();
      }
      ImGui::PopStyleColor(2);
    }
  }  // namespace components
}  // namespace ui