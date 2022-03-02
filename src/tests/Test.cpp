#include "Test.h"
#include "imgui/imgui.h"

test::TestMenu::TestMenu(Test*& pCurrentTest)
	: m_CurrentTest(pCurrentTest)
{
}

void test::TestMenu::OnImGuiRender()
{
	for (auto& test : m_Tests)
	{
		if (ImGui::Button(test.first.c_str()))
			m_CurrentTest = test.second();
	}
}

