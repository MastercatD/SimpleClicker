#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.UIElements.EventBase>
struct Action_1_t741CBBCB28E18BDBDEED4AE3BD7DBEEEA526DA43;
// System.Action`1<UnityEngine.UIElements.MeshGenerationContext>
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry>
struct BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue>
struct Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.VisualElement>
struct Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData>
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>>
struct List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260;
// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
// System.Collections.Generic.List`1<UnityEngine.UIElements.ManipulatorActivationFilter>
struct List_1_t569CB45C96475FFA9C716A7CC2ADE24112D38121;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry>
struct List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet>
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
// System.Collections.Generic.List`1<UnityEngine.UIElements.TemplateAsset>
struct List_1_t63B31A07921C5E19BCA9E85447E2260F37E3E777;
// System.Collections.Generic.List`1<UnityEngine.UIElements.UIDocument>
struct List_1_t74EC90C5F42E1A99F29BC6A7FF27FD27FCF98344;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElementAsset>
struct List_1_tA2DA9358299C5C3E2E66D546D9B0E9089C3D7DBE;
// System.Collections.Generic.List`1<MoneyPhysics/Money>
struct List_1_t21E9C1741989CBD7133DB1F5A09F3409E45644DE;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualTreeAsset/SlotDefinition>
struct List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualTreeAsset/UsingEntry>
struct List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.InheritedData>
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.LayoutData>
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.RareData>
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransformData>
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransitionData>
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.VisualData>
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
// UnityEngine.UIElements.ComputedTransitionProperty[]
struct ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// MoneyPhysics/Money[]
struct MoneyU5BU5D_t25843BD4CC702F548DC9E7D79E845AC4CE5CAA08;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
// UnityEngine.UIElements.Button
struct Button_t8EC3B431665F84C0B637C11B0EA29236828646C2;
// UnityEngine.UIElements.Clickable
struct Clickable_tED3E313565F64BDF5DA9D3FE0FEFFD0E17E53834;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UIElements.EventCallbackRegistry
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.TextCore.Text.FontAsset
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
// UnityEngine.UIElements.IBinding
struct IBinding_t02FD99E9C9F2072B28E110F16C157666F5B2DBC7;
// UnityEngine.UIElements.IPanel
struct IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5;
// UnityEngine.UIElements.IStyle
struct IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7;
// UnityEngine.UIElements.ITextHandle
struct ITextHandle_tE073838D8ECC8553222F256E181F96527EC273E4;
// UnityEngine.UIElements.ITransform
struct ITransform_tE5B8E1959EF1ABDE4E6DD44E9FB55EB043FCCDA4;
// UnityEngine.UIElements.IVisualElementScheduledItem
struct IVisualElementScheduledItem_t309F1A5445514122A9E3F64182D0D8A4DE34C48F;
// UnityEngine.UIElements.InlineStyleAccess
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
// UnityEngine.UIElements.Label
struct Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.UIElements.UIR.MeshHandle
struct MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// MoneyPhysics
struct MoneyPhysics_tB7033BAEBC5948BD795DD1A421E295BEB46AF4C4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.UIElements.PanelSettings
struct PanelSettings_t0621207D5DD3BB89DB587440E8F9E07234283DEC;
// PlayerData
struct PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.UIElements.UIR.RenderChainCommand
struct RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727;
// System.String
struct String_t;
// UnityEngine.UIElements.StyleSheet
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428;
// UnityEngine.UIElements.StyleVariableContext
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
// UnityEngine.UIElements.TemplateContainer
struct TemplateContainer_tDF6DDDD82C75A6332F0194C2B39AF157F6342DA2;
// UIController
struct UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2;
// UnityEngine.UIElements.UIDocument
struct UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77;
// UnityEngine.UIElements.UIDocumentList
struct UIDocumentList_tA2A8305DE916298E4C586EC8235085560914E7C3;
// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
// UnityEngine.UIElements.VisualTreeAsset
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Yoga.YogaNode
struct YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA;
// MoneyPhysics/Money
struct Money_t1D8ED551CDAF88B371449A7ABBB24EF20F439F3B;
// UnityEngine.UIElements.VisualElement/CustomStyleAccess
struct CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1;
// UnityEngine.UIElements.VisualElement/TypeData
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITransform_tE5B8E1959EF1ABDE4E6DD44E9FB55EB043FCCDA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t21E9C1741989CBD7133DB1F5A09F3409E45644DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Money_t1D8ED551CDAF88B371449A7ABBB24EF20F439F3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral24F45929493475FECA90729BA5EAF2D06F8722A4;
IL2CPP_EXTERN_C String_t* _stringLiteral4783348997FD98C18DE1576BBDFDC07F874F5EE3;
IL2CPP_EXTERN_C String_t* _stringLiteral75C34DCD12ADE7E105FB5FBB9DBC826935CDE184;
IL2CPP_EXTERN_C String_t* _stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B;
IL2CPP_EXTERN_C String_t* _stringLiteralE6ECB5E72735E9C839B8D9D7DFB80178BD4ED7C4;
IL2CPP_EXTERN_C String_t* _stringLiteralE86FA0317BCE6E44F48A8C411A2EB7DFD88DA5E7;
IL2CPP_EXTERN_C String_t* _stringLiteralEAAADDA30681B6C0174EBFDF2728124E13AB07F7;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMoneyPhysics_tB7033BAEBC5948BD795DD1A421E295BEB46AF4C4_mFE7961B339B10395996E420799A275047B9C966A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_m1C96239D3536415A2749CC39DE07AF9EC7A3FD9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m07FF4665438A4E0B44C10E9CB07784F29EE39E7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m745E9A7D62D803D7215D80421AD58C4150926791_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB7FB418C23DF9FAB323EF6234672F16ECA310250_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mCDB8DA3A9CB3A8B0312A56738E1D9BCB85A058B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m00AC7F222DF4FA078F95FD0FC72DA43CC28DFB54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIController_OnCoinButtonClicked_m045DDAEFF76F96FFA06D6650566FA232DDAFBB6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIController_OnUpgradeButtonClicked_m9197CFDF7FFCFC433EF349C3E04FCB40C076BC5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F_RuntimeMethod_var;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<MoneyPhysics/Money>
struct List_1_t21E9C1741989CBD7133DB1F5A09F3409E45644DE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MoneyU5BU5D_t25843BD4CC702F548DC9E7D79E845AC4CE5CAA08* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.UIElements.CallbackEventHandler
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	// UnityEngine.UIElements.EventCallbackRegistry UnityEngine.UIElements.CallbackEventHandler::m_CallbackRegistry
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry_0;
};

// UnityEngine.UIElements.Manipulator
struct Manipulator_tD5727ABA1F5AD1A50927212FAEB090E6BBCB4EBE  : public RuntimeObject
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.Manipulator::m_Target
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Target_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// MoneyPhysics/Money
struct Money_t1D8ED551CDAF88B371449A7ABBB24EF20F439F3B  : public RuntimeObject
{
	// UnityEngine.UIElements.VisualElement MoneyPhysics/Money::_view
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ____view_0;
	// System.Single MoneyPhysics/Money::_speedY
	float ____speedY_1;
	// System.Single MoneyPhysics/Money::_speedX
	float ____speedX_2;
	// System.Single MoneyPhysics/Money::_angularVelocity
	float ____angularVelocity_3;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData>
struct StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData>
struct StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData>
struct StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData>
struct StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData>
struct StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData>
struct StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___m_Ref_0;
};

// UnityEngine.UIElements.UIR.BMPAlloc
struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 
{
	// System.Int32 UnityEngine.UIElements.UIR.BMPAlloc::page
	int32_t ___page_1;
	// System.UInt16 UnityEngine.UIElements.UIR.BMPAlloc::pageLine
	uint16_t ___pageLine_2;
	// System.Byte UnityEngine.UIElements.UIR.BMPAlloc::bitIndex
	uint8_t ___bitIndex_3;
	// UnityEngine.UIElements.UIR.OwnedState UnityEngine.UIElements.UIR.BMPAlloc::ownedState
	uint8_t ___ownedState_4;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.UIElements.Focusable
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	// System.Boolean UnityEngine.UIElements.Focusable::<focusable>k__BackingField
	bool ___U3CfocusableU3Ek__BackingField_1;
	// System.Int32 UnityEngine.UIElements.Focusable::<tabIndex>k__BackingField
	int32_t ___U3CtabIndexU3Ek__BackingField_2;
	// System.Boolean UnityEngine.UIElements.Focusable::m_DelegatesFocus
	bool ___m_DelegatesFocus_3;
	// System.Boolean UnityEngine.UIElements.Focusable::m_ExcludeFromFocusRing
	bool ___m_ExcludeFromFocusRing_4;
	// System.Boolean UnityEngine.UIElements.Focusable::isIMGUIContainer
	bool ___isIMGUIContainer_5;
};

// UnityEngine.UIElements.FontDefinition
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C 
{
	// UnityEngine.Font UnityEngine.UIElements.FontDefinition::m_Font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_0;
	// UnityEngine.TextCore.Text.FontAsset UnityEngine.UIElements.FontDefinition::m_FontAsset
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.FontDefinition
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_0;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.FontDefinition
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_0;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset_1;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.UIElements.Length
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	// System.Single UnityEngine.UIElements.Length::m_Value
	float ___m_Value_1;
	// UnityEngine.UIElements.Length/Unit UnityEngine.UIElements.Length::m_Unit
	int32_t ___m_Unit_2;
};

// UnityEngine.UIElements.ManipulatorActivationFilter
struct ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 
{
	// UnityEngine.UIElements.MouseButton UnityEngine.UIElements.ManipulatorActivationFilter::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_0;
	// UnityEngine.EventModifiers UnityEngine.UIElements.ManipulatorActivationFilter::<modifiers>k__BackingField
	int32_t ___U3CmodifiersU3Ek__BackingField_1;
	// System.Int32 UnityEngine.UIElements.ManipulatorActivationFilter::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_2;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// UnityEngine.PropertyName
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/Hierarchy::m_Owner
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};

// UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C 
{
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData> UnityEngine.UIElements.ComputedStyle::inheritedData
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData> UnityEngine.UIElements.ComputedStyle::layoutData
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData> UnityEngine.UIElements.ComputedStyle::rareData
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData> UnityEngine.UIElements.ComputedStyle::transformData
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData> UnityEngine.UIElements.ComputedStyle::transitionData
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData> UnityEngine.UIElements.ComputedStyle::visualData
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.ComputedStyle::yogaNode
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue> UnityEngine.UIElements.ComputedStyle::customProperties
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	// System.Int64 UnityEngine.UIElements.ComputedStyle::matchingRulesHash
	int64_t ___matchingRulesHash_8;
	// System.Single UnityEngine.UIElements.ComputedStyle::dpiScaling
	float ___dpiScaling_9;
	// UnityEngine.UIElements.ComputedTransitionProperty[] UnityEngine.UIElements.ComputedStyle::computedTransitions
	ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82* ___computedTransitions_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_pinvoke
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke* ___computedTransitions_10;
};
// Native definition for COM marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_com
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com* ___computedTransitions_10;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.UIElements.MouseManipulator
struct MouseManipulator_tE6C609D476BDF311E2934791E620CF833BB4097D  : public Manipulator_tD5727ABA1F5AD1A50927212FAEB090E6BBCB4EBE
{
	// System.Collections.Generic.List`1<UnityEngine.UIElements.ManipulatorActivationFilter> UnityEngine.UIElements.MouseManipulator::<activators>k__BackingField
	List_1_t569CB45C96475FFA9C716A7CC2ADE24112D38121* ___U3CactivatorsU3Ek__BackingField_1;
	// UnityEngine.UIElements.ManipulatorActivationFilter UnityEngine.UIElements.MouseManipulator::m_currentActivator
	ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 ___m_currentActivator_2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prev
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::next
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::groupTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::boneTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::hierarchyDepth
	int32_t ___hierarchyDepth_6;
	// UnityEngine.UIElements.UIR.RenderDataDirtyTypes UnityEngine.UIElements.UIR.RenderChainVEData::dirtiedValues
	int32_t ___dirtiedValues_7;
	// System.UInt32 UnityEngine.UIElements.UIR.RenderChainVEData::dirtyID
	uint32_t ___dirtyID_8;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isInChain
	bool ___isInChain_13;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isHierarchyHidden
	bool ___isHierarchyHidden_14;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::localFlipsWinding
	bool ___localFlipsWinding_15;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::localTransformScaleZero
	bool ___localTransformScaleZero_16;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::worldFlipsWinding
	bool ___worldFlipsWinding_17;
	// UnityEngine.UIElements.UIR.Implementation.ClipMethod UnityEngine.UIElements.UIR.RenderChainVEData::clipMethod
	int32_t ___clipMethod_18;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenStencilRef
	int32_t ___childrenStencilRef_19;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenMaskDepth
	int32_t ___childrenMaskDepth_20;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::disableNudging
	bool ___disableNudging_21;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::usesLegacyText
	bool ___usesLegacyText_22;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::data
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_23;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::closingData
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_24;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.UIR.RenderChainVEData::verticesSpace
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_25;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVStart
	int32_t ___displacementUVStart_26;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVEnd
	int32_t ___displacementUVEnd_27;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::transformID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_28;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::clipRectID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_29;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::opacityID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_30;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::textCoreSettingsID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_31;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_32;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderLeftColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_33;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderTopColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_34;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderRightColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_35;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderBottomColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_36;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::tintColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_37;
	// System.Single UnityEngine.UIElements.UIR.RenderChainVEData::compositeOpacity
	float ___compositeOpacity_38;
	// UnityEngine.Color UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_39;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_40;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_41;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textEntries
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_42;
	// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textures
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_43;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___localTransformScaleZero_16;
	int32_t ___worldFlipsWinding_17;
	int32_t ___clipMethod_18;
	int32_t ___childrenStencilRef_19;
	int32_t ___childrenMaskDepth_20;
	int32_t ___disableNudging_21;
	int32_t ___usesLegacyText_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_23;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_24;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_25;
	int32_t ___displacementUVStart_26;
	int32_t ___displacementUVEnd_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_36;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_37;
	float ___compositeOpacity_38;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_40;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_41;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_42;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_43;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___localTransformScaleZero_16;
	int32_t ___worldFlipsWinding_17;
	int32_t ___clipMethod_18;
	int32_t ___childrenStencilRef_19;
	int32_t ___childrenMaskDepth_20;
	int32_t ___disableNudging_21;
	int32_t ___usesLegacyText_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_23;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_24;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_25;
	int32_t ___displacementUVStart_26;
	int32_t ___displacementUVEnd_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_36;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_37;
	float ___compositeOpacity_38;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_40;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_41;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_42;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_43;
};

// UnityEngine.UIElements.StyleLength
struct StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 
{
	// UnityEngine.UIElements.Length UnityEngine.UIElements.StyleLength::m_Value
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Value_0;
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleLength::m_Keyword
	int32_t ___m_Keyword_1;
};

// UnityEngine.UIElements.MeshGenerationContextUtils/TextParams
struct TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F 
{
	// UnityEngine.Rect UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::rect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect_0;
	// System.String UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::text
	String_t* ___text_1;
	// UnityEngine.Font UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_2;
	// UnityEngine.UIElements.FontDefinition UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::fontDefinition
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C ___fontDefinition_3;
	// System.Int32 UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::fontSize
	int32_t ___fontSize_4;
	// UnityEngine.UIElements.Length UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::letterSpacing
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___letterSpacing_5;
	// UnityEngine.UIElements.Length UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::wordSpacing
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___wordSpacing_6;
	// UnityEngine.UIElements.Length UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::paragraphSpacing
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___paragraphSpacing_7;
	// UnityEngine.FontStyle UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::fontStyle
	int32_t ___fontStyle_8;
	// UnityEngine.Color UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___fontColor_9;
	// UnityEngine.TextAnchor UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::anchor
	int32_t ___anchor_10;
	// System.Boolean UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::wordWrap
	bool ___wordWrap_11;
	// System.Single UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::wordWrapWidth
	float ___wordWrapWidth_12;
	// System.Boolean UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::richText
	bool ___richText_13;
	// UnityEngine.Color UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::playmodeTintColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor_14;
	// UnityEngine.UIElements.TextOverflow UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::textOverflow
	int32_t ___textOverflow_15;
	// UnityEngine.UIElements.TextOverflowPosition UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::textOverflowPosition
	int32_t ___textOverflowPosition_16;
	// UnityEngine.UIElements.OverflowInternal UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::overflow
	int32_t ___overflow_17;
	// UnityEngine.UIElements.IPanel UnityEngine.UIElements.MeshGenerationContextUtils/TextParams::panel
	RuntimeObject* ___panel_18;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.MeshGenerationContextUtils/TextParams
struct TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_marshaled_pinvoke
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect_0;
	char* ___text_1;
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_2;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke ___fontDefinition_3;
	int32_t ___fontSize_4;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___letterSpacing_5;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___wordSpacing_6;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___paragraphSpacing_7;
	int32_t ___fontStyle_8;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___fontColor_9;
	int32_t ___anchor_10;
	int32_t ___wordWrap_11;
	float ___wordWrapWidth_12;
	int32_t ___richText_13;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor_14;
	int32_t ___textOverflow_15;
	int32_t ___textOverflowPosition_16;
	int32_t ___overflow_17;
	RuntimeObject* ___panel_18;
};
// Native definition for COM marshalling of UnityEngine.UIElements.MeshGenerationContextUtils/TextParams
struct TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_marshaled_com
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect_0;
	Il2CppChar* ___text_1;
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_2;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com ___fontDefinition_3;
	int32_t ___fontSize_4;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___letterSpacing_5;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___wordSpacing_6;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___paragraphSpacing_7;
	int32_t ___fontStyle_8;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___fontColor_9;
	int32_t ___anchor_10;
	int32_t ___wordWrap_11;
	float ___wordWrapWidth_12;
	int32_t ___richText_13;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor_14;
	int32_t ___textOverflow_15;
	int32_t ___textOverflowPosition_16;
	int32_t ___overflow_17;
	RuntimeObject* ___panel_18;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.UIElements.PointerManipulator
struct PointerManipulator_t54685840D83869016F04FD137BCC1B07016B2E72  : public MouseManipulator_tE6C609D476BDF311E2934791E620CF833BB4097D
{
	// System.Int32 UnityEngine.UIElements.PointerManipulator::m_CurrentPointerId
	int32_t ___m_CurrentPointerId_3;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115  : public Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0
{
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.runningAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCountU3Ek__BackingField_7;
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.completedAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCountU3Ek__BackingField_8;
	// System.String UnityEngine.UIElements.VisualElement::m_Name
	String_t* ___m_Name_13;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::m_ClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_ClassList_14;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>> UnityEngine.UIElements.VisualElement::m_PropertyBag
	List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260* ___m_PropertyBag_15;
	// UnityEngine.UIElements.VisualElementFlags UnityEngine.UIElements.VisualElement::m_Flags
	int32_t ___m_Flags_16;
	// System.String UnityEngine.UIElements.VisualElement::m_ViewDataKey
	String_t* ___m_ViewDataKey_17;
	// UnityEngine.UIElements.RenderHints UnityEngine.UIElements.VisualElement::m_RenderHints
	int32_t ___m_RenderHints_18;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastLayout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastLayout_19;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastPseudoPadding
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastPseudoPadding_20;
	// UnityEngine.UIElements.UIR.RenderChainVEData UnityEngine.UIElements.VisualElement::renderChainData
	RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 ___renderChainData_21;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_Layout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_Layout_22;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_BoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_BoundingBox_23;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldBoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldBoundingBox_24;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformCache_25;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformInverseCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformInverseCache_26;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClip
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClip_27;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClipMinusGroup
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClipMinusGroup_28;
	// System.Boolean UnityEngine.UIElements.VisualElement::m_WorldClipIsInfinite
	bool ___m_WorldClipIsInfinite_29;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::triggerPseudoMask
	int32_t ___triggerPseudoMask_31;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::dependencyPseudoMask
	int32_t ___dependencyPseudoMask_32;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::m_PseudoStates
	int32_t ___m_PseudoStates_33;
	// System.Int32 UnityEngine.UIElements.VisualElement::<containedPointerIds>k__BackingField
	int32_t ___U3CcontainedPointerIdsU3Ek__BackingField_34;
	// UnityEngine.UIElements.PickingMode UnityEngine.UIElements.VisualElement::<pickingMode>k__BackingField
	int32_t ___U3CpickingModeU3Ek__BackingField_35;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.VisualElement::<yogaNode>k__BackingField
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___U3CyogaNodeU3Ek__BackingField_36;
	// UnityEngine.UIElements.ComputedStyle UnityEngine.UIElements.VisualElement::m_Style
	ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C ___m_Style_37;
	// UnityEngine.UIElements.StyleVariableContext UnityEngine.UIElements.VisualElement::variableContext
	StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527* ___variableContext_38;
	// System.Int32 UnityEngine.UIElements.VisualElement::inheritedStylesHash
	int32_t ___inheritedStylesHash_39;
	// System.UInt32 UnityEngine.UIElements.VisualElement::controlid
	uint32_t ___controlid_40;
	// System.Int32 UnityEngine.UIElements.VisualElement::imguiContainerDescendantCount
	int32_t ___imguiContainerDescendantCount_41;
	// System.Boolean UnityEngine.UIElements.VisualElement::<enabledSelf>k__BackingField
	bool ___U3CenabledSelfU3Ek__BackingField_42;
	// System.Action`1<UnityEngine.UIElements.MeshGenerationContext> UnityEngine.UIElements.VisualElement::<generateVisualContent>k__BackingField
	Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B* ___U3CgenerateVisualContentU3Ek__BackingField_43;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.VisualElement::k_GenerateVisualContentMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateVisualContentMarker_44;
	// UnityEngine.UIElements.VisualElement/RenderTargetMode UnityEngine.UIElements.VisualElement::m_SubRenderTargetMode
	int32_t ___m_SubRenderTargetMode_45;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::m_defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_defaultMaterial_47;
	// UnityEngine.UIElements.VisualElement/TypeData UnityEngine.UIElements.VisualElement::m_TypeData
	TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A* ___m_TypeData_49;
	// UnityEngine.UIElements.VisualElement/Hierarchy UnityEngine.UIElements.VisualElement::<hierarchy>k__BackingField
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 ___U3ChierarchyU3Ek__BackingField_51;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isRootVisualContainer>k__BackingField
	bool ___U3CisRootVisualContainerU3Ek__BackingField_52;
	// System.Boolean UnityEngine.UIElements.VisualElement::<cacheAsBitmap>k__BackingField
	bool ___U3CcacheAsBitmapU3Ek__BackingField_53;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_PhysicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_PhysicalParent_54;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_LogicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_LogicalParent_55;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::m_Children
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___m_Children_57;
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualElement::<elementPanel>k__BackingField
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CelementPanelU3Ek__BackingField_58;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.VisualElement::m_VisualTreeAssetSource
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_VisualTreeAssetSource_59;
	// UnityEngine.UIElements.InlineStyleAccess UnityEngine.UIElements.VisualElement::inlineStyleAccess
	InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165* ___inlineStyleAccess_61;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet> UnityEngine.UIElements.VisualElement::styleSheetList
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___styleSheetList_62;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate> UnityEngine.UIElements.VisualElement::m_RunningAnimations
	List_1_t96E9133B70FB6765E6B138E810D33E18901715DA* ___m_RunningAnimations_64;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.UIElements.BindableElement
struct BindableElement_t873EFF65032D21AB3B7BFBA21675D1693967435C  : public VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115
{
	// UnityEngine.UIElements.IBinding UnityEngine.UIElements.BindableElement::<binding>k__BackingField
	RuntimeObject* ___U3CbindingU3Ek__BackingField_65;
	// System.String UnityEngine.UIElements.BindableElement::<bindingPath>k__BackingField
	String_t* ___U3CbindingPathU3Ek__BackingField_66;
};

// UnityEngine.UIElements.Clickable
struct Clickable_tED3E313565F64BDF5DA9D3FE0FEFFD0E17E53834  : public PointerManipulator_t54685840D83869016F04FD137BCC1B07016B2E72
{
	// System.Action`1<UnityEngine.UIElements.EventBase> UnityEngine.UIElements.Clickable::clickedWithEventInfo
	Action_1_t741CBBCB28E18BDBDEED4AE3BD7DBEEEA526DA43* ___clickedWithEventInfo_4;
	// System.Action UnityEngine.UIElements.Clickable::clicked
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___clicked_5;
	// System.Int64 UnityEngine.UIElements.Clickable::m_Delay
	int64_t ___m_Delay_6;
	// System.Int64 UnityEngine.UIElements.Clickable::m_Interval
	int64_t ___m_Interval_7;
	// System.Boolean UnityEngine.UIElements.Clickable::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_8;
	// UnityEngine.Vector2 UnityEngine.UIElements.Clickable::<lastMousePosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3ClastMousePositionU3Ek__BackingField_9;
	// System.Int32 UnityEngine.UIElements.Clickable::m_ActivePointerId
	int32_t ___m_ActivePointerId_10;
	// System.Boolean UnityEngine.UIElements.Clickable::m_AcceptClicksIfDisabled
	bool ___m_AcceptClicksIfDisabled_11;
	// UnityEngine.UIElements.IVisualElementScheduledItem UnityEngine.UIElements.Clickable::m_Repeater
	RuntimeObject* ___m_Repeater_12;
};

// UnityEngine.UIElements.VisualTreeAsset
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.UIElements.VisualTreeAsset::m_ImportedWithErrors
	bool ___m_ImportedWithErrors_5;
	// System.Boolean UnityEngine.UIElements.VisualTreeAsset::m_ImportedWithWarnings
	bool ___m_ImportedWithWarnings_6;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualTreeAsset/UsingEntry> UnityEngine.UIElements.VisualTreeAsset::m_Usings
	List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* ___m_Usings_8;
	// UnityEngine.UIElements.StyleSheet UnityEngine.UIElements.VisualTreeAsset::inlineSheet
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___inlineSheet_9;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElementAsset> UnityEngine.UIElements.VisualTreeAsset::m_VisualElementAssets
	List_1_tA2DA9358299C5C3E2E66D546D9B0E9089C3D7DBE* ___m_VisualElementAssets_10;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.TemplateAsset> UnityEngine.UIElements.VisualTreeAsset::m_TemplateAssets
	List_1_t63B31A07921C5E19BCA9E85447E2260F37E3E777* ___m_TemplateAssets_11;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualTreeAsset/SlotDefinition> UnityEngine.UIElements.VisualTreeAsset::m_Slots
	List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* ___m_Slots_12;
	// System.Int32 UnityEngine.UIElements.VisualTreeAsset::m_ContentContainerId
	int32_t ___m_ContentContainerId_13;
	// System.Int32 UnityEngine.UIElements.VisualTreeAsset::m_ContentHash
	int32_t ___m_ContentHash_14;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.UIElements.TemplateContainer
struct TemplateContainer_tDF6DDDD82C75A6332F0194C2B39AF157F6342DA2  : public BindableElement_t873EFF65032D21AB3B7BFBA21675D1693967435C
{
	// System.String UnityEngine.UIElements.TemplateContainer::<templateId>k__BackingField
	String_t* ___U3CtemplateIdU3Ek__BackingField_67;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.TemplateContainer::m_ContentContainer
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_ContentContainer_68;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.TemplateContainer::m_TemplateSource
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_TemplateSource_69;
};

// UnityEngine.UIElements.TextElement
struct TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0  : public BindableElement_t873EFF65032D21AB3B7BFBA21675D1693967435C
{
	// UnityEngine.UIElements.ITextHandle UnityEngine.UIElements.TextElement::m_TextHandle
	RuntimeObject* ___m_TextHandle_68;
	// System.String UnityEngine.UIElements.TextElement::m_Text
	String_t* ___m_Text_70;
	// System.Boolean UnityEngine.UIElements.TextElement::m_EnableRichText
	bool ___m_EnableRichText_71;
	// System.Boolean UnityEngine.UIElements.TextElement::m_DisplayTooltipWhenElided
	bool ___m_DisplayTooltipWhenElided_72;
	// System.Boolean UnityEngine.UIElements.TextElement::<isElided>k__BackingField
	bool ___U3CisElidedU3Ek__BackingField_73;
	// System.Boolean UnityEngine.UIElements.TextElement::m_WasElided
	bool ___m_WasElided_75;
	// System.Boolean UnityEngine.UIElements.TextElement::m_UpdateTextParams
	bool ___m_UpdateTextParams_76;
	// UnityEngine.UIElements.MeshGenerationContextUtils/TextParams UnityEngine.UIElements.TextElement::m_TextParams
	TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F ___m_TextParams_77;
	// System.Int32 UnityEngine.UIElements.TextElement::m_PreviousTextParamsHashCode
	int32_t ___m_PreviousTextParamsHashCode_78;
};

// UnityEngine.UIElements.Button
struct Button_t8EC3B431665F84C0B637C11B0EA29236828646C2  : public TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0
{
	// UnityEngine.UIElements.Clickable UnityEngine.UIElements.Button::m_Clickable
	Clickable_tED3E313565F64BDF5DA9D3FE0FEFFD0E17E53834* ___m_Clickable_80;
};

// UnityEngine.UIElements.Label
struct Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70  : public TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0
{
};

// MoneyPhysics
struct MoneyPhysics_tB7033BAEBC5948BD795DD1A421E295BEB46AF4C4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UIElements.VisualElement MoneyPhysics::_ui
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ____ui_4;
	// UnityEngine.UIElements.VisualTreeAsset MoneyPhysics::_moneyTemplate
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ____moneyTemplate_5;
	// System.Collections.Generic.List`1<MoneyPhysics/Money> MoneyPhysics::_moneyList
	List_1_t21E9C1741989CBD7133DB1F5A09F3409E45644DE* ____moneyList_6;
	// System.Single MoneyPhysics::_startMoneySpeed
	float ____startMoneySpeed_7;
	// System.Single MoneyPhysics::_gravity
	float ____gravity_8;
};

// PlayerData
struct PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 PlayerData::_money
	int32_t ____money_4;
	// System.Int32 PlayerData::_level
	int32_t ____level_5;
	// System.Int32 PlayerData::_upgradeCost
	int32_t ____upgradeCost_6;
	// System.Int32 PlayerData::_income
	int32_t ____income_7;
};

// UIController
struct UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UIElements.VisualElement UIController::ui
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___ui_4;
	// UnityEngine.UIElements.Button UIController::_upgradeButton
	Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* ____upgradeButton_5;
	// UnityEngine.UIElements.Button UIController::_moneyButton
	Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* ____moneyButton_6;
	// UnityEngine.UIElements.Label UIController::_moneyLabel
	Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* ____moneyLabel_7;
	// UnityEngine.UIElements.Label UIController::_levelLabel
	Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* ____levelLabel_8;
	// MoneyPhysics UIController::_money
	MoneyPhysics_tB7033BAEBC5948BD795DD1A421E295BEB46AF4C4* ____money_9;
	// PlayerData UIController::_player
	PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* ____player_10;
};

// UnityEngine.UIElements.UIDocument
struct UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 UnityEngine.UIElements.UIDocument::m_UIDocumentCreationIndex
	int32_t ___m_UIDocumentCreationIndex_8;
	// UnityEngine.UIElements.PanelSettings UnityEngine.UIElements.UIDocument::m_PanelSettings
	PanelSettings_t0621207D5DD3BB89DB587440E8F9E07234283DEC* ___m_PanelSettings_9;
	// UnityEngine.UIElements.PanelSettings UnityEngine.UIElements.UIDocument::m_PreviousPanelSettings
	PanelSettings_t0621207D5DD3BB89DB587440E8F9E07234283DEC* ___m_PreviousPanelSettings_10;
	// UnityEngine.UIElements.UIDocument UnityEngine.UIElements.UIDocument::m_ParentUI
	UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77* ___m_ParentUI_11;
	// UnityEngine.UIElements.UIDocumentList UnityEngine.UIElements.UIDocument::m_ChildrenContent
	UIDocumentList_tA2A8305DE916298E4C586EC8235085560914E7C3* ___m_ChildrenContent_12;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.UIDocument> UnityEngine.UIElements.UIDocument::m_ChildrenContentCopy
	List_1_t74EC90C5F42E1A99F29BC6A7FF27FD27FCF98344* ___m_ChildrenContentCopy_13;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.UIDocument::sourceAsset
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___sourceAsset_14;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIDocument::m_RootVisualElement
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_RootVisualElement_15;
	// System.Int32 UnityEngine.UIElements.UIDocument::m_FirstChildInsertIndex
	int32_t ___m_FirstChildInsertIndex_16;
	// System.Single UnityEngine.UIElements.UIDocument::m_SortingOrder
	float ___m_SortingOrder_17;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<MoneyPhysics/Money>
struct List_1_t21E9C1741989CBD7133DB1F5A09F3409E45644DE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MoneyU5BU5D_t25843BD4CC702F548DC9E7D79E845AC4CE5CAA08* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<MoneyPhysics/Money>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// MoneyPhysics/Money

// MoneyPhysics/Money

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.UIElements.StyleLength

// UnityEngine.UIElements.StyleLength

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_StaticFields
{
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::tooltipPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___tooltipPropertyKey_6;
	// System.UInt32 UnityEngine.UIElements.VisualElement::s_NextId
	uint32_t ___s_NextId_9;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::s_EmptyClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___s_EmptyClassList_10;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::userDataPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___userDataPropertyKey_11;
	// System.String UnityEngine.UIElements.VisualElement::disabledUssClassName
	String_t* ___disabledUssClassName_12;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::s_InfiniteRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___s_InfiniteRect_30;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::s_runtimeMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_runtimeMaterial_46;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData> UnityEngine.UIElements.VisualElement::s_TypeData
	Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8* ___s_TypeData_48;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::s_EmptyList
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___s_EmptyList_56;
	// UnityEngine.UIElements.VisualElement/CustomStyleAccess UnityEngine.UIElements.VisualElement::s_CustomStyleAccess
	CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1* ___s_CustomStyleAccess_60;
	// System.Text.RegularExpressions.Regex UnityEngine.UIElements.VisualElement::s_InternalStyleSheetPath
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_InternalStyleSheetPath_63;
};

// UnityEngine.UIElements.VisualElement

// System.Action

// System.Action

// UnityEngine.UIElements.Clickable

// UnityEngine.UIElements.Clickable

// UnityEngine.UIElements.VisualTreeAsset
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB_StaticFields
{
	// System.String UnityEngine.UIElements.VisualTreeAsset::LinkedVEAInTemplatePropertyName
	String_t* ___LinkedVEAInTemplatePropertyName_4;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualTreeAsset::s_TemporarySlotInsertionPoints
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___s_TemporarySlotInsertionPoints_7;
};

// UnityEngine.UIElements.VisualTreeAsset

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.UIElements.TemplateContainer

// UnityEngine.UIElements.TemplateContainer

// UnityEngine.UIElements.TextElement
struct TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0_StaticFields
{
	// System.String UnityEngine.UIElements.TextElement::ussClassName
	String_t* ___ussClassName_67;
	// System.Int32 UnityEngine.UIElements.TextElement::maxTextVertices
	int32_t ___maxTextVertices_69;
	// System.String UnityEngine.UIElements.TextElement::k_EllipsisText
	String_t* ___k_EllipsisText_74;
};

// UnityEngine.UIElements.TextElement

// UnityEngine.UIElements.Button
struct Button_t8EC3B431665F84C0B637C11B0EA29236828646C2_StaticFields
{
	// System.String UnityEngine.UIElements.Button::ussClassName
	String_t* ___ussClassName_79;
	// System.String UnityEngine.UIElements.Button::NonEmptyString
	String_t* ___NonEmptyString_81;
};

// UnityEngine.UIElements.Button

// UnityEngine.UIElements.Label
struct Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70_StaticFields
{
	// System.String UnityEngine.UIElements.Label::ussClassName
	String_t* ___ussClassName_79;
};

// UnityEngine.UIElements.Label

// MoneyPhysics

// MoneyPhysics

// PlayerData

// PlayerData

// UIController

// UIController

// UnityEngine.UIElements.UIDocument
struct UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_StaticFields
{
	// System.Int32 UnityEngine.UIElements.UIDocument::s_CurrentUIDocumentCounter
	int32_t ___s_CurrentUIDocumentCounter_7;
};

// UnityEngine.UIElements.UIDocument
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.UIElements.UQueryExtensions::Q<System.Object>(UnityEngine.UIElements.VisualElement,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UQueryExtensions_Q_TisRuntimeObject_mE41C425481646FE357E4650A7CB20F7C3F2CCA40_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_e, String_t* ___1_name, String_t* ___2_className, const RuntimeMethod* method) ;

// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UIElements.UIDocument>()
inline UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77* Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIDocument::get_rootVisualElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* UIDocument_get_rootVisualElement_mA6214AAAA8DE0A4DE36AA35F9A98CF8065ED51E1 (UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<MoneyPhysics/Money>::get_Item(System.Int32)
inline Money_t1D8ED551CDAF88B371449A7ABBB24EF20F439F3B* List_1_get_Item_m00AC7F222DF4FA078F95FD0FC72DA43CC28DFB54 (List_1_t21E9C1741989CBD7133DB1F5A09F3409E45644DE* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Money_t1D8ED551CDAF88B371449A7ABBB24EF20F439F3B* (*) (List_1_t21E9C1741989CBD7133DB1F5A09F3409E45644DE*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Boolean MoneyPhysics/Money::NextPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Money_NextPosition_mB59F571B088498C0D6A45200AB9B54765C333E59 (Money_t1D8ED551CDAF88B371449A7ABBB24EF20F439F3B* __this, float ___0_gravity, const RuntimeMethod* method) ;
// UnityEngine.UIElements.VisualElement MoneyPhysics/Money::get_view()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* Money_get_view_m8B1CBFFF5B7C443C9DC7317CF0076601DA871EF2_inline (Money_t1D8ED551CDAF88B371449A7ABBB24EF20F439F3B* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.ITransform UnityEngine.UIElements.VisualElement::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_transform_m3BAB67CC182B8B60920924AEE52826BD736A051D (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UQueryExtensions::Q(UnityEngine.UIElements.VisualElement,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* UQueryExtensions_Q_m95306617BF08AC2853EABB5299786D2095BE631E (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_e, String_t* ___1_name, String_t* ___2_className, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualElement::Remove(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_Remove_m03628DA6212FCB2AB529A80B8480FFB8CA1FFEB3 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_element, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<MoneyPhysics/Money>::Remove(T)
inline bool List_1_Remove_m745E9A7D62D803D7215D80421AD58C4150926791 (List_1_t21E9C1741989CBD7133DB1F5A09F3409E45644DE* __this, Money_t1D8ED551CDAF88B371449A7ABBB24EF20F439F3B* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t21E9C1741989CBD7133DB1F5A09F3409E45644DE*, Money_t1D8ED551CDAF88B371449A7ABBB24EF20F439F3B*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Int32 System.Collections.Generic.List`1<MoneyPhysics/Money>::get_Count()
inline int32_t List_1_get_Count_mCDB8DA3A9CB3A8B0312A56738E1D9BCB85A058B1_inline (List_1_t21E9C1741989CBD7133DB1F5A09F3409E45644DE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t21E9C1741989CBD7133DB1F5A09F3409E45644DE*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// UnityEngine.UIElements.TemplateContainer UnityEngine.UIElements.VisualTreeAsset::Instantiate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TemplateContainer_tDF6DDDD82C75A6332F0194C2B39AF157F6342DA2* VisualTreeAsset_Instantiate_m4545E53DD36EEFD05C41C460B8AE4F982BF8020F (VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::ElementAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* VisualElement_ElementAt_m980D009F3780523D910429B71C6335B3BD8E84A7 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.UIElements.VisualElementExtensions::WorldToLocal(UnityEngine.UIElements.VisualElement,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 VisualElementExtensions_WorldToLocal_m9AB4674D3198B2C87E9D53DB56077BA769059EF9 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ele, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_p, const RuntimeMethod* method) ;
// UnityEngine.UIElements.IPanel UnityEngine.UIElements.VisualElement::get_panel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.UIElements.RuntimePanelUtils::ScreenToPanel(UnityEngine.UIElements.IPanel,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RuntimePanelUtils_ScreenToPanel_mB37B421751FA9DC561535145D43C6C6203F17E9F (RuntimeObject* ___0_panel, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_screenPosition, const RuntimeMethod* method) ;
// UnityEngine.UIElements.IStyle UnityEngine.UIElements.VisualElement::get_style()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleLength UnityEngine.UIElements.StyleLength::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 StyleLength_op_Implicit_mA1ED6E9AD696C34231A35B83084B1298A700B019 (float ___0_v, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualElement::Add(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_child, const RuntimeMethod* method) ;
// System.Void MoneyPhysics/Money::.ctor(UnityEngine.UIElements.VisualElement,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Money__ctor_m1395EF1507BAE88E14E61F640B51333C2D079276 (Money_t1D8ED551CDAF88B371449A7ABBB24EF20F439F3B* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_view, float ___1_speedX, float ___2_speedY, float ___3_angularVelocity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<MoneyPhysics/Money>::Add(T)
inline void List_1_Add_m07FF4665438A4E0B44C10E9CB07784F29EE39E7A_inline (List_1_t21E9C1741989CBD7133DB1F5A09F3409E45644DE* __this, Money_t1D8ED551CDAF88B371449A7ABBB24EF20F439F3B* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t21E9C1741989CBD7133DB1F5A09F3409E45644DE*, Money_t1D8ED551CDAF88B371449A7ABBB24EF20F439F3B*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<MoneyPhysics/Money>::.ctor()
inline void List_1__ctor_mB7FB418C23DF9FAB323EF6234672F16ECA310250 (List_1_t21E9C1741989CBD7133DB1F5A09F3409E45644DE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t21E9C1741989CBD7133DB1F5A09F3409E45644DE*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Int32 PlayerData::get_level()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayerData_get_level_mB83D7874078CEBD7D0AF6B654031B28F24332563_inline (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) ;
// T UnityEngine.UIElements.UQueryExtensions::Q<UnityEngine.UIElements.Button>(UnityEngine.UIElements.VisualElement,System.String,System.String)
inline Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_e, String_t* ___1_name, String_t* ___2_className, const RuntimeMethod* method)
{
	return ((  Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* (*) (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, String_t*, String_t*, const RuntimeMethod*))UQueryExtensions_Q_TisRuntimeObject_mE41C425481646FE357E4650A7CB20F7C3F2CCA40_gshared)(___0_e, ___1_name, ___2_className, method);
}
// UnityEngine.UIElements.Clickable UnityEngine.UIElements.Button::get_clickable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Clickable_tED3E313565F64BDF5DA9D3FE0FEFFD0E17E53834* Button_get_clickable_m0204E736F790BAF6761F6CCB50B3271A68F16C75 (Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Clickable::add_clicked(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clickable_add_clicked_m66B60516D2DEF680B5D3055EE1ACB400925A29A8 (Clickable_tED3E313565F64BDF5DA9D3FE0FEFFD0E17E53834* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.UIElements.UQueryExtensions::Q<UnityEngine.UIElements.Label>(UnityEngine.UIElements.VisualElement,System.String,System.String)
inline Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_e, String_t* ___1_name, String_t* ___2_className, const RuntimeMethod* method)
{
	return ((  Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* (*) (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, String_t*, String_t*, const RuntimeMethod*))UQueryExtensions_Q_TisRuntimeObject_mE41C425481646FE357E4650A7CB20F7C3F2CCA40_gshared)(___0_e, ___1_name, ___2_className, method);
}
// T UnityEngine.Component::GetComponent<MoneyPhysics>()
inline MoneyPhysics_tB7033BAEBC5948BD795DD1A421E295BEB46AF4C4* Component_GetComponent_TisMoneyPhysics_tB7033BAEBC5948BD795DD1A421E295BEB46AF4C4_mFE7961B339B10395996E420799A275047B9C966A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MoneyPhysics_tB7033BAEBC5948BD795DD1A421E295BEB46AF4C4* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<PlayerData>()
inline PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* Component_GetComponent_TisPlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_m1C96239D3536415A2749CC39DE07AF9EC7A3FD9E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void MoneyPhysics::ThrowMoney()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoneyPhysics_ThrowMoney_m59366635151ED588A7BBC2849670FD471B964430 (MoneyPhysics_tB7033BAEBC5948BD795DD1A421E295BEB46AF4C4* __this, const RuntimeMethod* method) ;
// System.Void PlayerData::AddMoney()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData_AddMoney_mBE2CB36B23D693AE37C43CF8A122FCDD90D9EBD1 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) ;
// System.Int32 PlayerData::get_money()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayerData_get_money_m03F019A853F3602D1EB4E74009BDEC9341B5E8B1_inline (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.VisualElement::get_enabledSelf()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VisualElement_get_enabledSelf_m0354238C2D86794523B70A10AB7F2DE97A50D3DC_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// System.Int32 PlayerData::get_upgradeCost()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayerData_get_upgradeCost_mED7E3BA15A43885C6BD35E4A2D53FD715C1CCA71_inline (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualElement::SetEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_SetEnabled_mE53446BEB2C83C4D350D9BEDDAADBE9A174EAA5B (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void PlayerData::LevelUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData_LevelUp_m1B0CEED5E23DF16480D19F78C7E7890C350B0033 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) ;
// System.Int32 PlayerData::get_incone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayerData_get_incone_m4E3E464327C01977B693937C8D85BB75A4C40DA6_inline (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MoneyPhysics::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoneyPhysics_Start_m6AF90C895E295CB5431D998A95141D932F86AEBF (MoneyPhysics_tB7033BAEBC5948BD795DD1A421E295BEB46AF4C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _startMoneySpeed = Screen.height / 1.5f;
		int32_t L_0;
		L_0 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		__this->____startMoneySpeed_7 = ((float)(((float)L_0)/(1.5f)));
		// _ui = GetComponent<UIDocument>().rootVisualElement;
		UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77* L_1;
		L_1 = Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F(__this, Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F_RuntimeMethod_var);
		NullCheck(L_1);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_2;
		L_2 = UIDocument_get_rootVisualElement_mA6214AAAA8DE0A4DE36AA35F9A98CF8065ED51E1(L_1, NULL);
		__this->____ui_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ui_4), (void*)L_2);
		// }
		return;
	}
}
// System.Void MoneyPhysics::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoneyPhysics_Update_m45AF5225AB31386434781ED6260AA5543D1A08D9 (MoneyPhysics_tB7033BAEBC5948BD795DD1A421E295BEB46AF4C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITransform_tE5B8E1959EF1ABDE4E6DD44E9FB55EB043FCCDA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m745E9A7D62D803D7215D80421AD58C4150926791_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mCDB8DA3A9CB3A8B0312A56738E1D9BCB85A058B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m00AC7F222DF4FA078F95FD0FC72DA43CC28DFB54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAAADDA30681B6C0174EBFDF2728124E13AB07F7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < _moneyList.Count; i++)
		V_0 = 0;
		goto IL_0090;
	}

IL_0007:
	{
		// _moneyList[i].NextPosition(_gravity);
		List_1_t21E9C1741989CBD7133DB1F5A09F3409E45644DE* L_0 = __this->____moneyList_6;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Money_t1D8ED551CDAF88B371449A7ABBB24EF20F439F3B* L_2;
		L_2 = List_1_get_Item_m00AC7F222DF4FA078F95FD0FC72DA43CC28DFB54(L_0, L_1, List_1_get_Item_m00AC7F222DF4FA078F95FD0FC72DA43CC28DFB54_RuntimeMethod_var);
		float L_3 = __this->____gravity_8;
		NullCheck(L_2);
		bool L_4;
		L_4 = Money_NextPosition_mB59F571B088498C0D6A45200AB9B54765C333E59(L_2, L_3, NULL);
		// if (Screen.height / 2 < _moneyList[i].view.transform.position.y)
		int32_t L_5;
		L_5 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		List_1_t21E9C1741989CBD7133DB1F5A09F3409E45644DE* L_6 = __this->____moneyList_6;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Money_t1D8ED551CDAF88B371449A7ABBB24EF20F439F3B* L_8;
		L_8 = List_1_get_Item_m00AC7F222DF4FA078F95FD0FC72DA43CC28DFB54(L_6, L_7, List_1_get_Item_m00AC7F222DF4FA078F95FD0FC72DA43CC28DFB54_RuntimeMethod_var);
		NullCheck(L_8);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_9;
		L_9 = Money_get_view_m8B1CBFFF5B7C443C9DC7317CF0076601DA871EF2_inline(L_8, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = VisualElement_get_transform_m3BAB67CC182B8B60920924AEE52826BD736A051D(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(0 /* UnityEngine.Vector3 UnityEngine.UIElements.ITransform::get_position() */, ITransform_tE5B8E1959EF1ABDE4E6DD44E9FB55EB043FCCDA4_il2cpp_TypeInfo_var, L_10);
		float L_12 = L_11.___y_3;
		if ((!(((float)((float)((int32_t)(L_5/2)))) < ((float)L_12))))
		{
			goto IL_008c;
		}
	}
	{
		// _ui.Q("MoneyArea").Remove(_moneyList[i].view);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_13 = __this->____ui_4;
		il2cpp_codegen_runtime_class_init_inline(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_14;
		L_14 = UQueryExtensions_Q_m95306617BF08AC2853EABB5299786D2095BE631E(L_13, _stringLiteralEAAADDA30681B6C0174EBFDF2728124E13AB07F7, (String_t*)NULL, NULL);
		List_1_t21E9C1741989CBD7133DB1F5A09F3409E45644DE* L_15 = __this->____moneyList_6;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		Money_t1D8ED551CDAF88B371449A7ABBB24EF20F439F3B* L_17;
		L_17 = List_1_get_Item_m00AC7F222DF4FA078F95FD0FC72DA43CC28DFB54(L_15, L_16, List_1_get_Item_m00AC7F222DF4FA078F95FD0FC72DA43CC28DFB54_RuntimeMethod_var);
		NullCheck(L_17);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_18;
		L_18 = Money_get_view_m8B1CBFFF5B7C443C9DC7317CF0076601DA871EF2_inline(L_17, NULL);
		NullCheck(L_14);
		VisualElement_Remove_m03628DA6212FCB2AB529A80B8480FFB8CA1FFEB3(L_14, L_18, NULL);
		// _moneyList.Remove(_moneyList[i]);
		List_1_t21E9C1741989CBD7133DB1F5A09F3409E45644DE* L_19 = __this->____moneyList_6;
		List_1_t21E9C1741989CBD7133DB1F5A09F3409E45644DE* L_20 = __this->____moneyList_6;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Money_t1D8ED551CDAF88B371449A7ABBB24EF20F439F3B* L_22;
		L_22 = List_1_get_Item_m00AC7F222DF4FA078F95FD0FC72DA43CC28DFB54(L_20, L_21, List_1_get_Item_m00AC7F222DF4FA078F95FD0FC72DA43CC28DFB54_RuntimeMethod_var);
		NullCheck(L_19);
		bool L_23;
		L_23 = List_1_Remove_m745E9A7D62D803D7215D80421AD58C4150926791(L_19, L_22, List_1_Remove_m745E9A7D62D803D7215D80421AD58C4150926791_RuntimeMethod_var);
		// i--;
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
	}

IL_008c:
	{
		// for (int i = 0; i < _moneyList.Count; i++)
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0090:
	{
		// for (int i = 0; i < _moneyList.Count; i++)
		int32_t L_26 = V_0;
		List_1_t21E9C1741989CBD7133DB1F5A09F3409E45644DE* L_27 = __this->____moneyList_6;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = List_1_get_Count_mCDB8DA3A9CB3A8B0312A56738E1D9BCB85A058B1_inline(L_27, List_1_get_Count_mCDB8DA3A9CB3A8B0312A56738E1D9BCB85A058B1_RuntimeMethod_var);
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MoneyPhysics::ThrowMoney()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoneyPhysics_ThrowMoney_m59366635151ED588A7BBC2849670FD471B964430 (MoneyPhysics_tB7033BAEBC5948BD795DD1A421E295BEB46AF4C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m07FF4665438A4E0B44C10E9CB07784F29EE39E7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Money_t1D8ED551CDAF88B371449A7ABBB24EF20F439F3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAAADDA30681B6C0174EBFDF2728124E13AB07F7);
		s_Il2CppMethodInitialized = true;
	}
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// TemplateContainer moneyContainer = _moneyTemplate.Instantiate();
		VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* L_0 = __this->____moneyTemplate_5;
		NullCheck(L_0);
		TemplateContainer_tDF6DDDD82C75A6332F0194C2B39AF157F6342DA2* L_1;
		L_1 = VisualTreeAsset_Instantiate_m4545E53DD36EEFD05C41C460B8AE4F982BF8020F(L_0, NULL);
		// VisualElement moneyView = moneyContainer.ElementAt(0);
		NullCheck(L_1);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_2;
		L_2 = VisualElement_ElementAt_m980D009F3780523D910429B71C6335B3BD8E84A7(L_1, 0, NULL);
		V_0 = L_2;
		// Vector2 pos = new Vector2(Input.mousePosition.x, Screen.height - Input.mousePosition.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_4 = L_3.___x_2;
		int32_t L_5;
		L_5 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_7 = L_6.___y_3;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), L_4, ((float)il2cpp_codegen_subtract(((float)L_5), L_7)), NULL);
		// pos = moneyView.WorldToLocal(pos);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = VisualElementExtensions_WorldToLocal_m9AB4674D3198B2C87E9D53DB56077BA769059EF9(L_8, L_9, NULL);
		V_1 = L_10;
		// pos = RuntimePanelUtils.ScreenToPanel(_ui.panel, pos);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_11 = __this->____ui_4;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = RuntimePanelUtils_ScreenToPanel_mB37B421751FA9DC561535145D43C6C6203F17E9F(L_12, L_13, NULL);
		V_1 = L_14;
		// moneyView.style.top = pos.y;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15 = V_0;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_15, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_1;
		float L_18 = L_17.___y_1;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_19;
		L_19 = StyleLength_op_Implicit_mA1ED6E9AD696C34231A35B83084B1298A700B019(L_18, NULL);
		NullCheck(L_16);
		InterfaceActionInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(43 /* System.Void UnityEngine.UIElements.IStyle::set_top(UnityEngine.UIElements.StyleLength) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_16, L_19);
		// moneyView.style.left = pos.x;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_20 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_20, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_1;
		float L_23 = L_22.___x_0;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_24;
		L_24 = StyleLength_op_Implicit_mA1ED6E9AD696C34231A35B83084B1298A700B019(L_23, NULL);
		NullCheck(L_21);
		InterfaceActionInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(25 /* System.Void UnityEngine.UIElements.IStyle::set_left(UnityEngine.UIElements.StyleLength) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_21, L_24);
		// float speed = Random.Range(-500.0f, 500.0f);
		float L_25;
		L_25 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-500.0f), (500.0f), NULL);
		V_2 = L_25;
		// float angularVelocity = Random.Range(-180.0f, 180.0f);
		float L_26;
		L_26 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-180.0f), (180.0f), NULL);
		V_3 = L_26;
		// _ui.Q("MoneyArea").Add(moneyView);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_27 = __this->____ui_4;
		il2cpp_codegen_runtime_class_init_inline(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_28;
		L_28 = UQueryExtensions_Q_m95306617BF08AC2853EABB5299786D2095BE631E(L_27, _stringLiteralEAAADDA30681B6C0174EBFDF2728124E13AB07F7, (String_t*)NULL, NULL);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_29 = V_0;
		NullCheck(L_28);
		VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(L_28, L_29, NULL);
		// _moneyList.Add(new Money(moneyView, speed, -_startMoneySpeed, angularVelocity));
		List_1_t21E9C1741989CBD7133DB1F5A09F3409E45644DE* L_30 = __this->____moneyList_6;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_31 = V_0;
		float L_32 = V_2;
		float L_33 = __this->____startMoneySpeed_7;
		float L_34 = V_3;
		Money_t1D8ED551CDAF88B371449A7ABBB24EF20F439F3B* L_35 = (Money_t1D8ED551CDAF88B371449A7ABBB24EF20F439F3B*)il2cpp_codegen_object_new(Money_t1D8ED551CDAF88B371449A7ABBB24EF20F439F3B_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		Money__ctor_m1395EF1507BAE88E14E61F640B51333C2D079276(L_35, L_31, L_32, ((-L_33)), L_34, NULL);
		NullCheck(L_30);
		List_1_Add_m07FF4665438A4E0B44C10E9CB07784F29EE39E7A_inline(L_30, L_35, List_1_Add_m07FF4665438A4E0B44C10E9CB07784F29EE39E7A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MoneyPhysics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoneyPhysics__ctor_m49D5964F64EEBB50352C6C4693820DF361A4FAC3 (MoneyPhysics_tB7033BAEBC5948BD795DD1A421E295BEB46AF4C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB7FB418C23DF9FAB323EF6234672F16ECA310250_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t21E9C1741989CBD7133DB1F5A09F3409E45644DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<Money> _moneyList = new List<Money>();             //  ?????? ???????? ?????
		List_1_t21E9C1741989CBD7133DB1F5A09F3409E45644DE* L_0 = (List_1_t21E9C1741989CBD7133DB1F5A09F3409E45644DE*)il2cpp_codegen_object_new(List_1_t21E9C1741989CBD7133DB1F5A09F3409E45644DE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mB7FB418C23DF9FAB323EF6234672F16ECA310250(L_0, List_1__ctor_mB7FB418C23DF9FAB323EF6234672F16ECA310250_RuntimeMethod_var);
		__this->____moneyList_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____moneyList_6), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.UIElements.VisualElement MoneyPhysics/Money::get_view()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* Money_get_view_m8B1CBFFF5B7C443C9DC7317CF0076601DA871EF2 (Money_t1D8ED551CDAF88B371449A7ABBB24EF20F439F3B* __this, const RuntimeMethod* method) 
{
	{
		// get { return _view; }
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = __this->____view_0;
		return L_0;
	}
}
// System.Void MoneyPhysics/Money::.ctor(UnityEngine.UIElements.VisualElement,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Money__ctor_m1395EF1507BAE88E14E61F640B51333C2D079276 (Money_t1D8ED551CDAF88B371449A7ABBB24EF20F439F3B* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_view, float ___1_speedX, float ___2_speedY, float ___3_angularVelocity, const RuntimeMethod* method) 
{
	{
		// public Money(VisualElement view, float speedX, float speedY, float angularVelocity)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _view = view;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_view;
		__this->____view_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____view_0), (void*)L_0);
		// _speedX = speedX;
		float L_1 = ___1_speedX;
		__this->____speedX_2 = L_1;
		// _speedY = speedY;
		float L_2 = ___2_speedY;
		__this->____speedY_1 = L_2;
		// _angularVelocity = angularVelocity;
		float L_3 = ___3_angularVelocity;
		__this->____angularVelocity_3 = L_3;
		// }
		return;
	}
}
// System.Boolean MoneyPhysics/Money::NextPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Money_NextPosition_mB59F571B088498C0D6A45200AB9B54765C333E59 (Money_t1D8ED551CDAF88B371449A7ABBB24EF20F439F3B* __this, float ___0_gravity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITransform_tE5B8E1959EF1ABDE4E6DD44E9FB55EB043FCCDA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// this._view.transform.position += new Vector3(_speedX, _speedY, 0) * Time.deltaTime ;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = __this->____view_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_transform_m3BAB67CC182B8B60920924AEE52826BD736A051D(L_0, NULL);
		RuntimeObject* L_2 = L_1;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(0 /* UnityEngine.Vector3 UnityEngine.UIElements.ITransform::get_position() */, ITransform_tE5B8E1959EF1ABDE4E6DD44E9FB55EB043FCCDA4_il2cpp_TypeInfo_var, L_2);
		float L_4 = __this->____speedX_2;
		float L_5 = __this->____speedY_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_4, L_5, (0.0f), /*hidden argument*/NULL);
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_8, NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(1 /* System.Void UnityEngine.UIElements.ITransform::set_position(UnityEngine.Vector3) */, ITransform_tE5B8E1959EF1ABDE4E6DD44E9FB55EB043FCCDA4_il2cpp_TypeInfo_var, L_2, L_9);
		// this._view.transform.rotation = Quaternion.Euler(new Vector3 (0, 0, _angularVelocity) * Time.deltaTime + this._view.transform.rotation.eulerAngles);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_10 = __this->____view_0;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = VisualElement_get_transform_m3BAB67CC182B8B60920924AEE52826BD736A051D(L_10, NULL);
		float L_12 = __this->____angularVelocity_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), (0.0f), (0.0f), L_12, /*hidden argument*/NULL);
		float L_14;
		L_14 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_13, L_14, NULL);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_16 = __this->____view_0;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = VisualElement_get_transform_m3BAB67CC182B8B60920924AEE52826BD736A051D(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = InterfaceFuncInvoker0< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(2 /* UnityEngine.Quaternion UnityEngine.UIElements.ITransform::get_rotation() */, ITransform_tE5B8E1959EF1ABDE4E6DD44E9FB55EB043FCCDA4_il2cpp_TypeInfo_var, L_17);
		V_0 = L_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_15, L_19, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_20, NULL);
		NullCheck(L_11);
		InterfaceActionInvoker1< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(3 /* System.Void UnityEngine.UIElements.ITransform::set_rotation(UnityEngine.Quaternion) */, ITransform_tE5B8E1959EF1ABDE4E6DD44E9FB55EB043FCCDA4_il2cpp_TypeInfo_var, L_11, L_21);
		// _speedY += gravity * Time.deltaTime;
		float L_22 = __this->____speedY_1;
		float L_23 = ___0_gravity;
		float L_24;
		L_24 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____speedY_1 = ((float)il2cpp_codegen_add(L_22, ((float)il2cpp_codegen_multiply(L_23, L_24))));
		// return true;
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 PlayerData::get_money()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerData_get_money_m03F019A853F3602D1EB4E74009BDEC9341B5E8B1 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) 
{
	{
		// get { return _money; }
		int32_t L_0 = __this->____money_4;
		return L_0;
	}
}
// System.Int32 PlayerData::get_level()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerData_get_level_mB83D7874078CEBD7D0AF6B654031B28F24332563 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) 
{
	{
		// get { return _level; }
		int32_t L_0 = __this->____level_5;
		return L_0;
	}
}
// System.Int32 PlayerData::get_upgradeCost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerData_get_upgradeCost_mED7E3BA15A43885C6BD35E4A2D53FD715C1CCA71 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) 
{
	{
		// get { return _upgradeCost; }
		int32_t L_0 = __this->____upgradeCost_6;
		return L_0;
	}
}
// System.Int32 PlayerData::get_incone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerData_get_incone_m4E3E464327C01977B693937C8D85BB75A4C40DA6 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) 
{
	{
		// get { return _income; }
		int32_t L_0 = __this->____income_7;
		return L_0;
	}
}
// System.Void PlayerData::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData_Start_m9B124058C46B0DA17EA6D6F1135E04BBDD7E0533 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) 
{
	{
		// _money = 0;
		__this->____money_4 = 0;
		// _level = 1;
		__this->____level_5 = 1;
		// _upgradeCost = 10;
		__this->____upgradeCost_6 = ((int32_t)10);
		// _income = 1;
		__this->____income_7 = 1;
		// }
		return;
	}
}
// System.Void PlayerData::AddMoney()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData_AddMoney_mBE2CB36B23D693AE37C43CF8A122FCDD90D9EBD1 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) 
{
	{
		// _money += _income;
		int32_t L_0 = __this->____money_4;
		int32_t L_1 = __this->____income_7;
		__this->____money_4 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// }
		return;
	}
}
// System.Void PlayerData::LevelUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData_LevelUp_m1B0CEED5E23DF16480D19F78C7E7890C350B0033 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) 
{
	{
		// _level++;
		int32_t L_0 = __this->____level_5;
		__this->____level_5 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// _money -= _upgradeCost;
		int32_t L_1 = __this->____money_4;
		int32_t L_2 = __this->____upgradeCost_6;
		__this->____money_4 = ((int32_t)il2cpp_codegen_subtract(L_1, L_2));
		// _upgradeCost = 10 * _level * level;
		int32_t L_3 = __this->____level_5;
		int32_t L_4;
		L_4 = PlayerData_get_level_mB83D7874078CEBD7D0AF6B654031B28F24332563_inline(__this, NULL);
		__this->____upgradeCost_6 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_3)), L_4));
		// _income += _level;
		int32_t L_5 = __this->____income_7;
		int32_t L_6 = __this->____level_5;
		__this->____income_7 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		// }
		return;
	}
}
// System.Void PlayerData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData__ctor_mDD79CC7712EAF325215F97832BFE3403DF47DFA8 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_Start_mDB390A5128712606F938A56F294FBDE7DFE649D4 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMoneyPhysics_tB7033BAEBC5948BD795DD1A421E295BEB46AF4C4_mFE7961B339B10395996E420799A275047B9C966A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_m1C96239D3536415A2749CC39DE07AF9EC7A3FD9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIController_OnCoinButtonClicked_m045DDAEFF76F96FFA06D6650566FA232DDAFBB6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIController_OnUpgradeButtonClicked_m9197CFDF7FFCFC433EF349C3E04FCB40C076BC5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24F45929493475FECA90729BA5EAF2D06F8722A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4783348997FD98C18DE1576BBDFDC07F874F5EE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6ECB5E72735E9C839B8D9D7DFB80178BD4ED7C4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ui = GetComponent<UIDocument>().rootVisualElement;
		UIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77* L_0;
		L_0 = Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F(__this, Component_GetComponent_TisUIDocument_t4186BEBCC01278F63B895274AA08AD9ADFBF4C77_m50669A283DE0DEFD0FFB1F42B965E6FCD460901F_RuntimeMethod_var);
		NullCheck(L_0);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1;
		L_1 = UIDocument_get_rootVisualElement_mA6214AAAA8DE0A4DE36AA35F9A98CF8065ED51E1(L_0, NULL);
		__this->___ui_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ui_4), (void*)L_1);
		// _upgradeButton = ui.Q<Button>("Upgrade");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_2 = __this->___ui_4;
		il2cpp_codegen_runtime_class_init_inline(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_3;
		L_3 = UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75(L_2, _stringLiteral24F45929493475FECA90729BA5EAF2D06F8722A4, (String_t*)NULL, UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var);
		__this->____upgradeButton_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____upgradeButton_5), (void*)L_3);
		// _moneyButton = ui.Q<Button>("AddMoney");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_4 = __this->___ui_4;
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_5;
		L_5 = UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75(L_4, _stringLiteralE6ECB5E72735E9C839B8D9D7DFB80178BD4ED7C4, (String_t*)NULL, UQueryExtensions_Q_TisButton_t8EC3B431665F84C0B637C11B0EA29236828646C2_m36B6EBB624A0831C6B20C70F93EF0517B65A8D75_RuntimeMethod_var);
		__this->____moneyButton_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____moneyButton_6), (void*)L_5);
		// _upgradeButton.clickable.clicked += OnUpgradeButtonClicked;
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_6 = __this->____upgradeButton_5;
		NullCheck(L_6);
		Clickable_tED3E313565F64BDF5DA9D3FE0FEFFD0E17E53834* L_7;
		L_7 = Button_get_clickable_m0204E736F790BAF6761F6CCB50B3271A68F16C75(L_6, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_8, __this, (intptr_t)((void*)UIController_OnUpgradeButtonClicked_m9197CFDF7FFCFC433EF349C3E04FCB40C076BC5B_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		Clickable_add_clicked_m66B60516D2DEF680B5D3055EE1ACB400925A29A8(L_7, L_8, NULL);
		// _moneyButton.clickable.clicked += OnCoinButtonClicked;
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_9 = __this->____moneyButton_6;
		NullCheck(L_9);
		Clickable_tED3E313565F64BDF5DA9D3FE0FEFFD0E17E53834* L_10;
		L_10 = Button_get_clickable_m0204E736F790BAF6761F6CCB50B3271A68F16C75(L_9, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_11, __this, (intptr_t)((void*)UIController_OnCoinButtonClicked_m045DDAEFF76F96FFA06D6650566FA232DDAFBB6A_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		Clickable_add_clicked_m66B60516D2DEF680B5D3055EE1ACB400925A29A8(L_10, L_11, NULL);
		// _moneyLabel = ui.Q<Label>("Money");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_12 = __this->___ui_4;
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_13;
		L_13 = UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F(L_12, _stringLiteral4783348997FD98C18DE1576BBDFDC07F874F5EE3, (String_t*)NULL, UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F_RuntimeMethod_var);
		__this->____moneyLabel_7 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____moneyLabel_7), (void*)L_13);
		// _levelLabel = ui.Q<Label>("Level");
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_14 = __this->___ui_4;
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_15;
		L_15 = UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F(L_14, _stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, (String_t*)NULL, UQueryExtensions_Q_TisLabel_tC160668F9119CE0F5567021FB208E64A5B1C5B70_m8F4BED0AE8A46A7D6F84F222B4154231ED2DAC9F_RuntimeMethod_var);
		__this->____levelLabel_8 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____levelLabel_8), (void*)L_15);
		// _money = GetComponent<MoneyPhysics>();
		MoneyPhysics_tB7033BAEBC5948BD795DD1A421E295BEB46AF4C4* L_16;
		L_16 = Component_GetComponent_TisMoneyPhysics_tB7033BAEBC5948BD795DD1A421E295BEB46AF4C4_mFE7961B339B10395996E420799A275047B9C966A(__this, Component_GetComponent_TisMoneyPhysics_tB7033BAEBC5948BD795DD1A421E295BEB46AF4C4_mFE7961B339B10395996E420799A275047B9C966A_RuntimeMethod_var);
		__this->____money_9 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____money_9), (void*)L_16);
		// _player = GetComponent<PlayerData>();
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_17;
		L_17 = Component_GetComponent_TisPlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_m1C96239D3536415A2749CC39DE07AF9EC7A3FD9E(__this, Component_GetComponent_TisPlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_m1C96239D3536415A2749CC39DE07AF9EC7A3FD9E_RuntimeMethod_var);
		__this->____player_10 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____player_10), (void*)L_17);
		// }
		return;
	}
}
// System.Void UIController::OnCoinButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_OnCoinButtonClicked_m045DDAEFF76F96FFA06D6650566FA232DDAFBB6A (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// _money.ThrowMoney();
		MoneyPhysics_tB7033BAEBC5948BD795DD1A421E295BEB46AF4C4* L_0 = __this->____money_9;
		NullCheck(L_0);
		MoneyPhysics_ThrowMoney_m59366635151ED588A7BBC2849670FD471B964430(L_0, NULL);
		// _player.AddMoney();
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_1 = __this->____player_10;
		NullCheck(L_1);
		PlayerData_AddMoney_mBE2CB36B23D693AE37C43CF8A122FCDD90D9EBD1(L_1, NULL);
		// _moneyLabel.text = ' ' + _player.money.ToString();
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_2 = __this->____moneyLabel_7;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_3 = __this->____player_10;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = PlayerData_get_money_m03F019A853F3602D1EB4E74009BDEC9341B5E8B1_inline(L_3, NULL);
		V_0 = L_4;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_5, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(107 /* System.Void UnityEngine.UIElements.TextElement::set_text(System.String) */, L_2, L_6);
		// if (!_upgradeButton.enabledSelf && _player.upgradeCost <= _player.money)
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_7 = __this->____upgradeButton_5;
		NullCheck(L_7);
		bool L_8;
		L_8 = VisualElement_get_enabledSelf_m0354238C2D86794523B70A10AB7F2DE97A50D3DC_inline(L_7, NULL);
		if (L_8)
		{
			goto IL_006f;
		}
	}
	{
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_9 = __this->____player_10;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = PlayerData_get_upgradeCost_mED7E3BA15A43885C6BD35E4A2D53FD715C1CCA71_inline(L_9, NULL);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_11 = __this->____player_10;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = PlayerData_get_money_m03F019A853F3602D1EB4E74009BDEC9341B5E8B1_inline(L_11, NULL);
		if ((((int32_t)L_10) > ((int32_t)L_12)))
		{
			goto IL_006f;
		}
	}
	{
		// _upgradeButton.SetEnabled(true);
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_13 = __this->____upgradeButton_5;
		NullCheck(L_13);
		VisualElement_SetEnabled_mE53446BEB2C83C4D350D9BEDDAADBE9A174EAA5B(L_13, (bool)1, NULL);
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void UIController::OnUpgradeButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_OnUpgradeButtonClicked_m9197CFDF7FFCFC433EF349C3E04FCB40C076BC5B (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75C34DCD12ADE7E105FB5FBB9DBC826935CDE184);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE86FA0317BCE6E44F48A8C411A2EB7DFD88DA5E7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// _player.LevelUp();
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_0 = __this->____player_10;
		NullCheck(L_0);
		PlayerData_LevelUp_m1B0CEED5E23DF16480D19F78C7E7890C350B0033(L_0, NULL);
		// _levelLabel.text = " lvl: " + _player.level.ToString();
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_1 = __this->____levelLabel_8;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_2 = __this->____player_10;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = PlayerData_get_level_mB83D7874078CEBD7D0AF6B654031B28F24332563_inline(L_2, NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral75C34DCD12ADE7E105FB5FBB9DBC826935CDE184, L_4, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(107 /* System.Void UnityEngine.UIElements.TextElement::set_text(System.String) */, L_1, L_5);
		// _moneyLabel.text = ' ' +_player.money.ToString();
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_6 = __this->____moneyLabel_7;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_7 = __this->____player_10;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = PlayerData_get_money_m03F019A853F3602D1EB4E74009BDEC9341B5E8B1_inline(L_7, NULL);
		V_0 = L_8;
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_9, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(107 /* System.Void UnityEngine.UIElements.TextElement::set_text(System.String) */, L_6, L_10);
		// _moneyButton.text = _player.incone.ToString();
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_11 = __this->____moneyButton_6;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_12 = __this->____player_10;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = PlayerData_get_incone_m4E3E464327C01977B693937C8D85BB75A4C40DA6_inline(L_12, NULL);
		V_0 = L_13;
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(107 /* System.Void UnityEngine.UIElements.TextElement::set_text(System.String) */, L_11, L_14);
		// _upgradeButton.text = "Upgrade\n" + _player.upgradeCost.ToString();
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_15 = __this->____upgradeButton_5;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_16 = __this->____player_10;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = PlayerData_get_upgradeCost_mED7E3BA15A43885C6BD35E4A2D53FD715C1CCA71_inline(L_16, NULL);
		V_0 = L_17;
		String_t* L_18;
		L_18 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_19;
		L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE86FA0317BCE6E44F48A8C411A2EB7DFD88DA5E7, L_18, NULL);
		NullCheck(L_15);
		VirtualActionInvoker1< String_t* >::Invoke(107 /* System.Void UnityEngine.UIElements.TextElement::set_text(System.String) */, L_15, L_19);
		// if (_player.upgradeCost > _player.money)
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_20 = __this->____player_10;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = PlayerData_get_upgradeCost_mED7E3BA15A43885C6BD35E4A2D53FD715C1CCA71_inline(L_20, NULL);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_22 = __this->____player_10;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = PlayerData_get_money_m03F019A853F3602D1EB4E74009BDEC9341B5E8B1_inline(L_22, NULL);
		if ((((int32_t)L_21) <= ((int32_t)L_23)))
		{
			goto IL_00c5;
		}
	}
	{
		// _upgradeButton.SetEnabled(false);
		Button_t8EC3B431665F84C0B637C11B0EA29236828646C2* L_24 = __this->____upgradeButton_5;
		NullCheck(L_24);
		VisualElement_SetEnabled_mE53446BEB2C83C4D350D9BEDDAADBE9A174EAA5B(L_24, (bool)0, NULL);
	}

IL_00c5:
	{
		// }
		return;
	}
}
// System.Void UIController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController__ctor_mFF218DBC8CCEFE36AAC295D2376501658CD8B7A2 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* Money_get_view_m8B1CBFFF5B7C443C9DC7317CF0076601DA871EF2_inline (Money_t1D8ED551CDAF88B371449A7ABBB24EF20F439F3B* __this, const RuntimeMethod* method) 
{
	{
		// get { return _view; }
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = __this->____view_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_euler;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayerData_get_level_mB83D7874078CEBD7D0AF6B654031B28F24332563_inline (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) 
{
	{
		// get { return _level; }
		int32_t L_0 = __this->____level_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayerData_get_money_m03F019A853F3602D1EB4E74009BDEC9341B5E8B1_inline (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) 
{
	{
		// get { return _money; }
		int32_t L_0 = __this->____money_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VisualElement_get_enabledSelf_m0354238C2D86794523B70A10AB7F2DE97A50D3DC_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CenabledSelfU3Ek__BackingField_42;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayerData_get_upgradeCost_mED7E3BA15A43885C6BD35E4A2D53FD715C1CCA71_inline (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) 
{
	{
		// get { return _upgradeCost; }
		int32_t L_0 = __this->____upgradeCost_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayerData_get_incone_m4E3E464327C01977B693937C8D85BB75A4C40DA6_inline (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) 
{
	{
		// get { return _income; }
		int32_t L_0 = __this->____income_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
