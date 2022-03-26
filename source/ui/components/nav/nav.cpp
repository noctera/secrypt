#include <iostream>
#include <secrypt/ui/components/nav/nav.hpp>
#include <secrypt/ui/components/nav/navButton.hpp>
#include <secrypt/ui/config.hpp>

namespace ui {
  namespace components {
    void Nav::render() {
      // get nav menu props
      const auto navButtonProps = ui::config::getNavMenuProps();
      for (auto navButtonProp : navButtonProps) {
        navButton(
            navButtonProp.name, [&]() { page = navButtonProp.pageNum; },
            page == navButtonProp.pageNum ? true : false);
        ImGui::Spacing();
      }
      ImGui::SetCursorPosY(ImGui::GetWindowHeight() - 30);
    }

    int Nav::getCurrentPageNum() { return page; }
  }  // namespace components
}  // namespace ui