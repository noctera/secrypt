#include <secrypt/ui/config.hpp>
#include <secrypt/ui/mainWindow.hpp>

namespace secrypt {
  namespace ui {
    void renderMainWindow() {
      static bool use_work_area = true;
      const ImGuiViewport* viewport = ImGui::GetMainViewport();
      ImGui::SetNextWindowPos(use_work_area ? viewport->WorkPos : viewport->Pos);
      ImGui::SetNextWindowSize(use_work_area ? viewport->WorkSize : viewport->Size);
      ImGui::Begin("Secrypt", nullptr, secrypt::ui::config::getWindowFlags());
      ImGui::Columns(2);
      ImGui::SetColumnOffset(1, ImGui::GetWindowWidth() * 0.3);

      {
        if (ImGui::Button("Executor", ImVec2(230 - 15, 41))) ImGui::Spacing();
        if (ImGui::Button("Dumper", ImVec2(230 - 15, 41))) ImGui::Spacing();
        if (ImGui::Button("Blocker", ImVec2(230 - 15, 41))) ImGui::Spacing();
        if (ImGui::Button("Menus", ImVec2(230 - 15, 41)))

          ImGui::SetCursorPosY(ImGui::GetWindowHeight() - 30);
      }

      ImGui::NextColumn();

      // Right side
      {}
      ImGui::End();
    }
  }  // namespace ui

}  // namespace secrypt