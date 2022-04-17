#include <iostream>
#include <secrypt/ui/colors.hpp>
#include <secrypt/ui/components/nav/nav.hpp>
#include <secrypt/ui/components/nav/navButton.hpp>
#include <secrypt/ui/config.hpp>

namespace ui {
  namespace components {
    void Nav::render() {
      ImGui::PushStyleColor(ImGuiCol_ChildBg, ui::colors::alternative());
      ImGui::BeginChild("Nav",
                        ImVec2(ImGui::GetWindowWidth() * 0.2 > 300 ? ImGui::GetWindowWidth() * 0.15
                                                                   : ImGui::GetWindowWidth() * 0.2,
                               ImGui::GetWindowHeight()));
      // get nav menu props
      const auto navButtonProps = ui::config::getNavMenuProps();
      for (auto navButtonProp : navButtonProps) {
        navButton(
            navButtonProp.name, [&]() { page = navButtonProp.pageNum; },
            page == navButtonProp.pageNum ? true : false);
      }
      ImGui::SetCursorPosY(ImGui::GetWindowHeight() - 30);

      ImGui::EndChild();
      ImGui::PopStyleColor();
    }

    int Nav::getCurrentPageNum() { return page; }
  }  // namespace components
}  // namespace ui