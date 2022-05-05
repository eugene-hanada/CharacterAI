#include <DxLib.h>
#include "Component/Collider/CircleCollider.h"
#include "Common/Math.h"
#include "Object/Object.h"
#include "Component/Behavior/BehaviorTree.h"
#include "Component/Collider/CircleCollider.h"

template<Math::Vec2C T>
constexpr Math::Vector2Tmp<T> screenSize{ 1280,720 };

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_  HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow)
{
	

	ChangeWindowMode(true);
	SetWindowText(TEXT("DxLibÇ≈Ç¬Ç≠Ç¡ÇΩÉQÅ[ÉÄ"));
	SetGraphMode(screenSize<int>.x, screenSize<int>.y, 32);
	DxLib_Init();

	Object obj1;
	obj1.AddComponent(std::make_unique<CircleCollider>([&]() {DrawString(0, 0, TEXT("ìñÇΩÇË1"), 0xffffff); obj1.hp_--; }, "CircleCol", obj1));
	obj1.AddComponent(std::make_unique<BehaviorTree>("Behavior", obj1));

	Object obj2;
	obj2.AddComponent(std::make_unique<CircleCollider>([&]() { },"CircleCol", obj2));

	while (!ProcessMessage())
	{
		obj1.Update();

		

		SetDrawScreen(DX_SCREEN_BACK);
		ClsDrawScreen();

		obj1.Draw();
		obj2.Draw();

		obj1.GetComponent<Collider>("CircleCol")->Dispathc(*obj2.GetComponent<Collider>("CircleCol"));
		
		ScreenFlip();

	}
	return 0;
}