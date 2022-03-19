#include <secrypt/ui/components/nav/nav.hpp>
#include <secrypt/ui/components/nav/navButton.hpp>

namespace ui {
  namespace components {
    void Nav::render() {
      navButton("Encryption");
      ImGui::Spacing();
      navButton("Encryption 2");
      ImGui::Spacing();
      navButton("Encryption 3");
      ImGui::Spacing();
      navButton("Encryption 4");
      ImGui::SetCursorPosY(ImGui::GetWindowHeight() - 30);
    }
  }  // namespace components
}  // namespace ui