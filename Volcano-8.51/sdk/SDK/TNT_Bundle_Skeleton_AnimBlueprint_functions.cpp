#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function TNT_Bundle_Skeleton_AnimBlueprint.TNT_Bundle_Skeleton_AnimBlueprint_C.ExecuteUbergraph_TNT_Bundle_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTNT_Bundle_Skeleton_AnimBlueprint_C::ExecuteUbergraph_TNT_Bundle_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("TNT_Bundle_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_TNT_Bundle_Skeleton_AnimBlueprint");

	Params::UTNT_Bundle_Skeleton_AnimBlueprint_C_ExecuteUbergraph_TNT_Bundle_Skeleton_AnimBlueprint_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
