#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes
{
	//---------------------------------------------------------------------------
	//Classes
	//---------------------------------------------------------------------------

	// BlueprintGeneratedClass TslLobby.TslLobby_v2_C
	// 0x0008 (0x03B0 - 0x03A8)
	class ATslLobby_v2_C : public ALevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xdb73f66a);
			return ptr;
		}


		void ReceiveBeginPlay();
		void ExecuteUbergraph_TslLobby(int EntryPoint);
	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
