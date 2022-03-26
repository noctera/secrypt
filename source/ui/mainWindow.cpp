#include <secrypt/ui/components/nav/nav.hpp>
#include <secrypt/ui/components/nav/topNav.hpp>
#include <secrypt/ui/config.hpp>
#include <secrypt/ui/mainWindow.hpp>
#include <secrypt/ui/screens/decryption/decryption.hpp>
#include <secrypt/ui/screens/encryption/encryption.hpp>

namespace ui {
  void renderMainWindow() {
    static bool use_work_area = true;
    const ImGuiViewport* viewport = ImGui::GetMainViewport();
    ImGui::SetNextWindowPos(use_work_area ? viewport->WorkPos : viewport->Pos);
    ImGui::SetNextWindowSize(use_work_area ? viewport->WorkSize : viewport->Size);
    ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(0, 0));
    ImGui::Begin("Secrypt", nullptr, ui::config::getWindowFlags());

    // Top Nav
    ui::components::topNav();

    // Main window wrapper
    ImGui::SetCursorPos(ImVec2(0, 50));
    ImGui::BeginChild("Main Wrapper",
                      ImVec2(ImGui::GetWindowWidth(), ImGui::GetWindowHeight() - 50));

    // Nav
    ImGui::PushStyleColor(ImGuiCol_ChildBg,
                          ImVec4(42 / 255.0, 46 / 255.0, 54 / 255.0, 255 / 255.0));
    ImGui::BeginChild("Nav",
                      ImVec2(ImGui::GetWindowWidth() * 0.2 > 300 ? ImGui::GetWindowWidth() * 0.15
                                                                 : ImGui::GetWindowWidth() * 0.2,
                             ImGui::GetWindowHeight()));
    ui::components::Nav navMenu;
    navMenu.render();
    ImGui::EndChild();
    ImGui::PopStyleColor();

    // Main window
    int currentPage = navMenu.getCurrentPageNum();
    if (currentPage == 1) {
      ui::screens::renderEncryptionScreen();
    } else if (currentPage == 2) {
      ui::screens::renderDecryptionScreen();
    }

    ImGui::EndChild();
    ImGui::End();
    ImGui::PopStyleVar();  // padding
  }
}  // namespace ui