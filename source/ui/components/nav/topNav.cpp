#include <secrypt/ui/components/nav/topNav.hpp>

namespace ui {
  namespace components {
    void topNav() {
      ImGui::PushStyleColor(ImGuiCol_ChildBg,
                            ImVec4(42 / 255.0, 46 / 255.0, 54 / 255.0, 255 / 255.0));
    ImGui::BeginChild("Top nav", ImVec2(ImGui::GetWindowWidth(), 50));
    ImGui::EndChild();
    ImGui::PopStyleColor();
    }
  }  // namespace components
}  // namespace ui