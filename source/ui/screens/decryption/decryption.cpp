#include <secrypt/ui/screens/decryption/decryption.hpp>

namespace ui {
  namespace screens {
    void renderDecryptionScreen() {
      ImGui::SetCursorPos(ImVec2(ImGui::GetWindowWidth() * 0.2 > 300
                                     ? ImGui::GetWindowWidth() * 0.15
                                     : ImGui::GetWindowWidth() * 0.2,
                                 0));
      ImGui::PushStyleColor(ImGuiCol_ChildBg,
                            ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0));
      ImGui::BeginChild("Main",
                        ImVec2(ImGui::GetWindowWidth() * 0.2 > 300 ? ImGui::GetWindowWidth() * 0.85
                                                                   : ImGui::GetWindowWidth() * 0.8,
                               ImGui::GetWindowHeight()));
      ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPosX() + ImGui::GetColumnWidth() * 0.5,
                                 (ImGui::GetWindowHeight() - 50) * 0.5));
      ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(0 / 255.0, 0 / 255.0, 0 / 255.0, 255 / 255.0));
      ImGui::Text("Decryption Screen");
      ImGui::PopStyleColor();
      ImGui::EndChild();
      ImGui::PopStyleColor();
    }

  }  // namespace screens
}  // namespace ui