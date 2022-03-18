#include <secrypt/ui/components/nav/nav.hpp>
#include <secrypt/ui/config.hpp>
#include <secrypt/ui/mainWindow.hpp>

namespace ui {
  void renderMainWindow() {
    static bool use_work_area = true;
    const ImGuiViewport* viewport = ImGui::GetMainViewport();
    ImGui::SetNextWindowPos(use_work_area ? viewport->WorkPos : viewport->Pos);
    ImGui::SetNextWindowSize(use_work_area ? viewport->WorkSize : viewport->Size);

    ImGui::Begin("Secrypt", nullptr, ui::config::getWindowFlags());

    ImGui::Columns(2, nullptr, false);

    ImGui::SetColumnOffset(1, ImGui::GetWindowWidth() * 0.2 > 300 ? ImGui::GetWindowWidth() * 0.15
                                                                  : ImGui::GetWindowWidth() * 0.2);
    {
      ui::components::Nav navMenu;
      navMenu.render();
    }

    // ImGui::ShowDemoWindow();

    // Right side

    ImGui::NextColumn();

    ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPosX() + ImGui::GetColumnWidth() * 0.5,
                               ImGui::GetWindowHeight() * 0.5));
    ImGui::Text("Hello World");
    ImDrawList* draw_list = ImGui::GetWindowDrawList();
    draw_list->PushClipRect(ImGui::GetItemRectSize(),
                            ImVec2(ImGui::GetCursorPosX() - 5, ImGui::GetWindowHeight() - 15),
                            true);
    draw_list->AddRectFilled(
        ImVec2(30, 30),
        ImVec2(ImGui::GetCursorPosX() - 5, ImGui::GetCursorPosY() + ImGui::GetWindowHeight() - 15),
        IM_COL32(90, 90, 120, 255));
    draw_list->PopClipRect();

    {}
    ImGui::End();
  }
}  // namespace ui