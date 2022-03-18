#include <secrypt/ui/components/nav/navButton.hpp>

namespace ui {
    namespace components {
        void navButton(const char* name) {
      
        ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(41 / 255.0, 40 / 255.0, 41 / 255.0, 255 / 255.0));
        ImGui::Button(name, ImVec2(ImGui::GetColumnWidth() - 15, 41));
        ImGui::PopStyleColor();
        }
    }
}