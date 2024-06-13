#include "Menu.hpp"


bool Menu::IsOpened()
{
    return this->IsOpen;
}

bool Menu::SetIsOpen(bool boolean)
{
    this->IsOpen = boolean;
    return this->IsOpened();
}

void Menu::RealCursorShow() {
    ImGui::GetMouseCursor();
    ImGui::SetMouseCursor(ImGuiMouseCursor_Arrow);
    ImGui::GetIO().WantCaptureMouse = this->IsOpened();
    ImGui::GetIO().MouseDrawCursor = this->IsOpened();
}

void Menu::SetUpColors(ImGuiStyle& style, ImVec4* colors, ImVec2 windowSize) {

    colors[ImGuiCol_WindowBg] = ImColor(25, 20, 20);
    colors[ImGuiCol_ChildBg] = ImColor(30, 24, 24);
    colors[ImGuiCol_Text] = ImColor(255, 255, 255);
    //Header
    colors[ImGuiCol_Header] = ImColor(30, 138, 200);
    colors[ImGuiCol_HeaderHovered] = ImColor(40, 215, 192);
    colors[ImGuiCol_HeaderActive] = ImColor(30, 116, 215);
    //buttons
    colors[ImGuiCol_Button] = ImColor(25, 145, 215);
    colors[ImGuiCol_ButtonHovered] = ImColor(25, 104, 215);
    colors[ImGuiCol_ButtonActive] = ImColor(100, 161, 222);
    //checkboxes
    colors[ImGuiCol_CheckMark] = ImColor(0, 0, 0);
    colors[ImGuiCol_FrameBg] = ImColor(25, 174, 215, 200);
    colors[ImGuiCol_FrameBgActive] = ImColor(25, 215, 212);
    colors[ImGuiCol_FrameBgHovered] = ImColor(20, 250, 200);

    style.WindowRounding = 5.3f;
    style.FrameRounding = 2.3f;
    style.ScrollbarRounding = 0;
    style.GrabRounding = 2.3f;
    style.TabRounding = 2.3f;

    style.WindowMinSize = windowSize;
    style.ChildRounding = 5.0f;
}


void Menu::StyleColors(ImGuiStyle & style, ImVec4 * colors, ImVec2 windowSize) {
    // Colors
    colors[ImGuiCol_Text] = ImVec4(0.90f, 0.95f, 1.00f, 1.00f); // ������-������� �����
    colors[ImGuiCol_TextDisabled] = ImVec4(0.50f, 0.50f, 0.50f, 1.00f); // ������������
    colors[ImGuiCol_WindowBg] = ImVec4(0.10f, 0.10f, 0.30f, 0.95f); // �����-����� ��� ����
    colors[ImGuiCol_ChildBg] = ImVec4(0.12f, 0.12f, 0.35f, 0.85f); // ������� ������� ��� ��� �������� ����
    colors[ImGuiCol_PopupBg] = ImVec4(0.10f, 0.10f, 0.30f, 1.00f); // �����-����� ��� ����������� ����
    colors[ImGuiCol_Border] = ImVec4(0.25f, 0.40f, 0.70f, 1.00f); // ������� �����
    colors[ImGuiCol_BorderShadow] = ImVec4(0.05f, 0.05f, 0.15f, 1.00f); // �����-����� ���� �����
    colors[ImGuiCol_FrameBg] = ImVec4(0.20f, 0.20f, 0.50f, 1.00f); // �����-������� ��� ��� �������
    colors[ImGuiCol_FrameBgHovered] = ImVec4(0.25f, 0.30f, 0.60f, 1.00f); // ������� ������� ��� ���������
    colors[ImGuiCol_FrameBgActive] = ImVec4(0.30f, 0.35f, 0.70f, 1.00f); // ��� ������� ��� �������� ���������
    colors[ImGuiCol_TitleBg] = ImVec4(0.10f, 0.15f, 0.40f, 1.00f); // �����-����� ��� ���������
    colors[ImGuiCol_TitleBgActive] = ImVec4(0.20f, 0.25f, 0.50f, 1.00f); // ������� �������� ���������
    colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.10f, 0.15f, 0.40f, 1.00f); // ����� �� ��� � �������
    colors[ImGuiCol_MenuBarBg] = ImVec4(0.15f, 0.20f, 0.45f, 1.00f); // �����-������� ��� ����
    colors[ImGuiCol_ScrollbarBg] = ImVec4(0.20f, 0.25f, 0.50f, 1.00f); // ������� ��� ��� ����������
    colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.25f, 0.35f, 0.60f, 1.00f); // ��������� ���� ��� ����������
    colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.30f, 0.40f, 0.70f, 1.00f); // ������-������� ��� ���������
    colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.35f, 0.45f, 0.80f, 1.00f); // ��� ������� ��� �������� ���������
    colors[ImGuiCol_CheckMark] = ImVec4(0.15f, 0.45f, 0.85f, 1.00f); // ����-�����
    colors[ImGuiCol_SliderGrab] = ImVec4(0.25f, 0.35f, 0.60f, 1.00f); // �������
    colors[ImGuiCol_SliderGrabActive] = ImVec4(0.30f, 0.40f, 0.70f, 1.00f); // ������-�������
    colors[ImGuiCol_Button] = ImVec4(0.20f, 0.30f, 0.50f, 1.00f); // �����-������� ��� ������
    colors[ImGuiCol_ButtonHovered] = ImVec4(0.30f, 0.40f, 0.70f, 1.00f); // ������-������� ��� ���������
    colors[ImGuiCol_ButtonActive] = ImVec4(0.35f, 0.45f, 0.80f, 1.00f); // ��� ������� ��� �������� ���������
    colors[ImGuiCol_Header] = ImVec4(0.25f, 0.35f, 0.60f, 1.00f); // ������� ��� ���������
    colors[ImGuiCol_HeaderHovered] = ImVec4(0.30f, 0.40f, 0.70f, 1.00f); // ������-������� ��� ���������
    colors[ImGuiCol_HeaderActive] = ImVec4(0.35f, 0.45f, 0.80f, 1.00f); // ��� ������� ��� �������� ���������
    colors[ImGuiCol_Separator] = ImVec4(0.25f, 0.35f, 0.60f, 1.00f); // ������� ���� �����������
    colors[ImGuiCol_SeparatorHovered] = ImVec4(0.30f, 0.40f, 0.70f, 1.00f); // ������-������� ��� ���������
    colors[ImGuiCol_SeparatorActive] = ImVec4(0.35f, 0.45f, 0.80f, 1.00f); // ��� ������� ��� �������� ���������
    colors[ImGuiCol_ResizeGrip] = ImVec4(0.20f, 0.60f, 0.85f, 0.25f); // �������������� ����-�������
    colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.20f, 0.60f, 0.85f, 0.67f); // ����-������� ��� ���������
    colors[ImGuiCol_ResizeGripActive] = ImVec4(0.20f, 0.60f, 0.85f, 0.95f); // ���������� ����-������� ��� �������� ���������
    colors[ImGuiCol_Tab] = ImVec4(0.25f, 0.35f, 0.60f, 1.00f); // ������� ��� �������
    colors[ImGuiCol_TabHovered] = ImVec4(0.30f, 0.40f, 0.70f, 1.00f); // ������-������� ��� ���������
    colors[ImGuiCol_TabActive] = ImVec4(0.35f, 0.45f, 0.80f, 1.00f); // ��� ������� ��� �������� ���������
    colors[ImGuiCol_TabUnfocused] = ImVec4(0.25f, 0.35f, 0.60f, 1.00f); // ����� �� ��� ������� �������
    colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.35f, 0.45f, 0.80f, 1.00f); // ����� �� ��� �������� �������
    //colors[ImGuiCol_DockingPreview] = ImVec4(0.20f, 0.60f, 0.85f, 0.70f); // ������������
    //colors[ImGuiCol_DockingEmptyBg] = ImVec4(0.10f, 0.10f, 0.30f, 1.00f); // ������������
    colors[ImGuiCol_PlotLines] = ImVec4(0.50f, 0.60f, 0.90f, 1.00f); // ������� ��� ��������
    colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.20f, 0.60f, 0.85f,1.00f); // ����-������� ��� ���������
    colors[ImGuiCol_PlotHistogram] = ImVec4(0.35f, 0.75f, 1.00f, 1.00f); // ������� ��� ����������
    colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.20f, 0.60f, 0.85f, 1.00f); // ����-������� ��� ���������
    colors[ImGuiCol_TableHeaderBg] = ImVec4(0.15f, 0.25f, 0.55f, 1.00f); // �����-������� ��� ��������� �������
    colors[ImGuiCol_TableBorderStrong] = ImVec4(0.25f, 0.40f, 0.70f, 1.00f); // ������� ��� ������� �������
    colors[ImGuiCol_TableBorderLight] = ImVec4(0.20f, 0.35f, 0.65f, 1.00f); // ������-������� ��� ������� �������
    colors[ImGuiCol_TableRowBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f); // ����������
    colors[ImGuiCol_TableRowBgAlt] = ImVec4(0.20f, 0.60f, 0.85f, 0.06f); // �������������� ����-�������
    colors[ImGuiCol_TextSelectedBg] = ImVec4(0.20f, 0.60f, 0.85f, 0.35f); // �������������� ����-������� ��� ����������� ������
    colors[ImGuiCol_DragDropTarget] = ImVec4(0.20f, 0.60f, 0.85f, 0.95f); // ���������� ����-������� ��� ���� ��������������
    colors[ImGuiCol_NavHighlight] = ImVec4(0.20f, 0.60f, 0.85f, 1.00f); // ����-������� ��� ���������
    colors[ImGuiCol_NavWindowingHighlight] = ImVec4(0.20f, 0.60f, 0.85f, 1.00f); // ����-������� ��� ��������� �� �����
    colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.20f); // �������������� ����� ��� ��������� ����
    colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.10f, 0.10f, 0.30f, 0.35f); // �������������� �����-����� ��� ��������� ����

    // Style
    style.WindowRounding = 5.3f;
    style.FrameRounding = 2.3f;
    style.ScrollbarRounding = 0;
    style.GrabRounding = 2.3f;
    style.TabRounding = 2.3f;

    style.WindowMinSize = windowSize;
    style.ChildRounding = 5.0f;
}


void Menu::PreventMoveOutOfWndBounds(const char* wndName) {
    ImGuiWindow* existingWindow = ImGui::FindWindowByName(wndName);
    if (existingWindow != nullptr)
    {
        bool needsClampToScreen = false;
        ImVec2 targetPos = existingWindow->Pos;
        if (existingWindow->Pos.x < 0.0f)
        {
            needsClampToScreen = true;
            targetPos.x = 0.0f;
        }
        else if (existingWindow->Size.x + existingWindow->Pos.x > ImGui::GetMainViewport()->Size.x)
        {
            needsClampToScreen = true;
            targetPos.x = ImGui::GetMainViewport()->Size.x - existingWindow->Size.x;
        }
        if (existingWindow->Pos.y < 0.0f)
        {
            needsClampToScreen = true;
            targetPos.y = 0.0f;
        }
        else if (existingWindow->Size.y + existingWindow->Pos.y > ImGui::GetMainViewport()->Size.y)
        {
            needsClampToScreen = true;
            targetPos.y = ImGui::GetMainViewport()->Size.y - existingWindow->Size.y;
        }

        if (needsClampToScreen) // Necessary to prevent window from constantly undocking itself if docked.
        {
            ImGui::SetNextWindowPos(targetPos, ImGuiCond_Always);
        }
    }
}

void Menu::Render()
{
    if (ImGui::Begin(" ", 0, ImGuiWindowFlags_NoTitleBar /*  | ImGuiWindowFlags_NoResize */)) 
    {
        ImGui::PushStyleColor(ImGuiCol_Border, ImColor(0, 0, 0, 255).Value);
        
        if (ImGui::BeginChild("##LeftSide", ImVec2(120, ImGui::GetContentRegionAvail().y), 1))
        {

            for (unsigned int i = 0; i < Buttons.size(); ++i) {

                bool selected = (page == i);
                auto windowvars = ImGuiStyleVar_SelectableTextAlign;

                ImGui::PushStyleVar(windowvars, ImVec2(0.5f, 0.5f));

                if (ImGui::Selectable(Buttons[i].btnLable, &selected, 0, ImVec2(ImGui::GetContentRegionAvail().x, 20)))
                    page = i;

                ImGui::PopStyleVar();

                if (selected)
                    ImGui::SetItemDefaultFocus();

            }
        }

        ImGui::EndChild();

        ImGui::SameLine(0);
        ImGui::SeparatorEx(ImGuiSeparatorFlags_Vertical);
        ImGui::SameLine(0);

        ImGui::BeginChild("##RightSide", ImVec2(ImGui::GetContentRegionAvail().x, ImGui::GetContentRegionAvail().y), true);

        switch (page) {

        case 0: // Player
            god.DrawMenuItems();
            speedhack.DrawMenuItems();

            break;

        case 1: // Esp
            ImGui::Text("in dev.");
            break;

        case 2: // Misc
            ImGui::Text("in dev.");
            break;

        case 3: // Movement
            gravityScale.DrawMenuItems();   
            walkFloorZ.DrawMenuItems();
            walkFloorAngle.DrawMenuItems();
            break;

        case 4: // Config 
            ImGui::Text("in dev.");
            break;

        case 5: // Debug
            ImGui::Text("Debug Page");
            DebugMenu::DebugMainPage();
            break;

        } // Switch

        ImGui::EndChild();
        ImGui::PopStyleColor();

    } // Begin
    ImGui::End(); // Render end
}

void Menu::RenderWatermark()
{
    if (!this->bWatermark)
        return;


    auto time = std::chrono::system_clock::now();
    std::time_t formatedtime = std::chrono::system_clock::to_time_t(time);


    ImGui::SetNextWindowPos(ImVec2(15, 15));
    ImGui::SetNextWindowSize(ImVec2());

    ImGui::Begin("watermark", nullptr,
        ImGuiWindowFlags_NoResize |
        ImGuiWindowFlags_NoTitleBar |
        ImGuiWindowFlags_NoBackground |
        ImGuiWindowFlags_NoCollapse |
        ImGuiWindowFlags_NoScrollbar |
        ImGuiWindowFlags_::ImGuiWindowFlags_NoBringToFrontOnFocus |
        ImGuiWindowFlags_::ImGuiWindowFlags_NoBackground |
        ImGuiWindowFlags_::ImGuiWindowFlags_NoNavFocus |
        ImGuiWindowFlags_::ImGuiWindowFlags_NoNav
    );

    ImGui::Text("By chadlrnsn | Moonlight | %s", std::ctime(&formatedtime));
    ImGui::End();
}

//void Menu::ShowCenteredPopupSubmit(const char* title, const char* text, const char* submit_text,  bool* open)
//{
//    if (*open) {
//        ImGui::OpenPopup(title);
//    }
//
//    if (ImGui::BeginPopupModal(title, NULL, ImGuiWindowFlags_AlwaysAutoResize)) {
//        ImGuiIO& io = ImGui::GetIO();
//        ImVec2 window_size = ImGui::GetWindowSize();
//        ImVec2 window_pos = ImVec2((io.DisplaySize.x - window_size.x) / 2, (io.DisplaySize.y - window_size.y) / 2);
//
//        ImGui::SetWindowPos(window_pos);
//
//        ImGui::Text(text);
//        if (ImGui::Button(submit_text)) {
//            ImGui::CloseCurrentPopup();
//            *open = false;
//        }
//
//        ImGui::EndPopup();
//    }
//}