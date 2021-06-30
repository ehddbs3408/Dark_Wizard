#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// Boss
struct Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82;
// Bullet
struct Bullet_tF95A945B732B2B929938FB1028878BFBC0081724;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627;
// EnemyBullet
struct EnemyBullet_t3AA58ACF2637B406675B7E16087A796F1FB2E865;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// Magic
struct Magic_t0CC50A162DDF9C4C4549E05883368ACD19D8F36C;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F;
// PoolManager
struct PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Scene
struct Scene_tDE4016BE2BA3F33366B0D42BC2AEAFCAB0A039FB;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// SoundManager
struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// Boss/<AddTimeScore>d__34
struct U3CAddTimeScoreU3Ed__34_tC58DEE55F7328D127BC26C58999917D21648C761;
// Boss/<MoveTo>d__33
struct U3CMoveToU3Ed__33_t55F90767C706DFE31BDD0F94A60426D168A3C65E;
// Boss/<PatternA>d__25
struct U3CPatternAU3Ed__25_t28745CEB3CDE89B25FABB9B1026360F76BCFA885;
// Boss/<PatternB>d__26
struct U3CPatternBU3Ed__26_t2CEB71F5110B1BB461CF4CC7C1509FEDE6714782;
// Boss/<PatternC>d__27
struct U3CPatternCU3Ed__27_t3A8A5112A6A731A35A3E2E988C34E9C5B225EB5D;
// Boss/<PatternD>d__28
struct U3CPatternDU3Ed__28_t5823F6CE054BD0A929622F0A091C411A31F741B0;
// Boss/<PatternE>d__29
struct U3CPatternEU3Ed__29_t2C056D78C572E8729F568AFD66E5C57D9844F599;
// Boss/<PatternF>d__30
struct U3CPatternFU3Ed__30_tEF3418D9378F3DCD674C92CB3CEFFA423C172816;
// Bullet/<Srali>d__9
struct U3CSraliU3Ed__9_t1289A74D5B6E12DCCA8A9F9E98B086A1E44FDA0A;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Enemy/<Damaged>d__11
struct U3CDamagedU3Ed__11_t9A37EFE172E6E7E84D2CAA63B40884A35E7A10E0;
// Enemy/<Shotting>d__9
struct U3CShottingU3Ed__9_tF7F3C440403C77D1DEAE9488B7D073304F82B6C8;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// Player/<Damaged>d__17
struct U3CDamagedU3Ed__17_tB832BEEBB4DD5EDA6B8664FA17B5EE4E3B3CC3F7;
// Player/<Fire>d__14
struct U3CFireU3Ed__14_tE76C69BC1E345D96D8F5422E30F0B7BA407ADD90;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAddTimeScoreU3Ed__34_tC58DEE55F7328D127BC26C58999917D21648C761_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDamagedU3Ed__11_t9A37EFE172E6E7E84D2CAA63B40884A35E7A10E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDamagedU3Ed__17_tB832BEEBB4DD5EDA6B8664FA17B5EE4E3B3CC3F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFireU3Ed__14_tE76C69BC1E345D96D8F5422E30F0B7BA407ADD90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMoveToU3Ed__33_t55F90767C706DFE31BDD0F94A60426D168A3C65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPatternAU3Ed__25_t28745CEB3CDE89B25FABB9B1026360F76BCFA885_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPatternBU3Ed__26_t2CEB71F5110B1BB461CF4CC7C1509FEDE6714782_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPatternCU3Ed__27_t3A8A5112A6A731A35A3E2E988C34E9C5B225EB5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPatternDU3Ed__28_t5823F6CE054BD0A929622F0A091C411A31F741B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPatternEU3Ed__29_t2C056D78C572E8729F568AFD66E5C57D9844F599_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPatternFU3Ed__30_tEF3418D9378F3DCD674C92CB3CEFFA423C172816_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShottingU3Ed__9_tF7F3C440403C77D1DEAE9488B7D073304F82B6C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSraliU3Ed__9_t1289A74D5B6E12DCCA8A9F9E98B086A1E44FDA0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0CD979583B209CE71603EFC4A398E6A9EFA8D872;
IL2CPP_EXTERN_C String_t* _stringLiteral35AC43C98F2BA6A894D0C538DF26C6486AD51744;
IL2CPP_EXTERN_C String_t* _stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D;
IL2CPP_EXTERN_C String_t* _stringLiteral5B4DE4801ED1C6780EFB611D3F8D0FD5DAF29390;
IL2CPP_EXTERN_C String_t* _stringLiteral780088735D08F01D63A81A5B157E00A8C6D5285C;
IL2CPP_EXTERN_C String_t* _stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0;
IL2CPP_EXTERN_C String_t* _stringLiteral9FBF26E76B1A339E90B1A2BD53F5053DB3042D79;
IL2CPP_EXTERN_C String_t* _stringLiteralAB1EA0D19EDD2C3A2F60B0C36AD599E6C289DB3F;
IL2CPP_EXTERN_C String_t* _stringLiteralADE3A5294FA17AC9817CF668B5F1FA54B374187D;
IL2CPP_EXTERN_C String_t* _stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1;
IL2CPP_EXTERN_C String_t* _stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7;
IL2CPP_EXTERN_C String_t* _stringLiteralDADC16E137E91464AB75C5E701B97E5857B076A0;
IL2CPP_EXTERN_C String_t* _stringLiteralE0E3A4D86F2CD816F8A81B072437555E525FC253;
IL2CPP_EXTERN_C String_t* _stringLiteralFC0A008941AD63E0CEC87F35CD74DEBD9F6C5606;
IL2CPP_EXTERN_C String_t* _stringLiteralFC1EA2AFE02F14278901CEC035F7037789947862;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBullet_tF95A945B732B2B929938FB1028878BFBC0081724_m369B5E2F14BDAB6427DDEEECD19954C23617D0B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m770EEE9CD21A968F23ABBBEF9BF3897DA14D085E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMagic_t0CC50A162DDF9C4C4549E05883368ACD19D8F36C_m95355C42A2997AD4E4E148754F3C41EE1BA67860_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7_mEEC433FC7474F2D14FE6AA31A26D4714785F356C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAddTimeScoreU3Ed__34_System_Collections_IEnumerator_Reset_m6DA7E8E3EB331FAF50899C85CD89F3A4EF07109D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDamagedU3Ed__11_System_Collections_IEnumerator_Reset_m4F52D6B10C0B4B12B5AA63818DF98F5003A18DDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDamagedU3Ed__17_System_Collections_IEnumerator_Reset_mD03336DA31BA5F25DEEE474E794EA1680621F5AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFireU3Ed__14_System_Collections_IEnumerator_Reset_mB859AF603D7C3BFA4D7532A2456B28AEC660B246_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveToU3Ed__33_System_Collections_IEnumerator_Reset_m3162F1F2562EE23BF69B3544FC99ECA8283037DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPatternAU3Ed__25_System_Collections_IEnumerator_Reset_m356AB21CD88E087301284911D168D70F7A19128B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPatternBU3Ed__26_System_Collections_IEnumerator_Reset_m78339AB065A456FBBD16D872905E6E9F77455F62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPatternCU3Ed__27_System_Collections_IEnumerator_Reset_m6EFAAAA85277397D4CEBDC3435240F31181274DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPatternDU3Ed__28_System_Collections_IEnumerator_Reset_m12F28D292D9BDDE212E393890733B2A525E1573A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPatternEU3Ed__29_System_Collections_IEnumerator_Reset_m66E911A01BDF35BC17D2126FCBFC5CF0463D7411_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPatternFU3Ed__30_System_Collections_IEnumerator_Reset_m03D2CAEACC07C8B4D4AEA17FEB53190FF34DF3D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShottingU3Ed__9_System_Collections_IEnumerator_Reset_m9E96CF848EE4D9067687868FD3C1400A38BA2543_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSraliU3Ed__9_System_Collections_IEnumerator_Reset_m50DD0375625A07815F33BEEC01A49C69667E38F4_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Boss/<AddTimeScore>d__34
struct U3CAddTimeScoreU3Ed__34_tC58DEE55F7328D127BC26C58999917D21648C761  : public RuntimeObject
{
public:
	// System.Int32 Boss/<AddTimeScore>d__34::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Boss/<AddTimeScore>d__34::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Boss Boss/<AddTimeScore>d__34::<>4__this
	Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * ___U3CU3E4__this_2;
	// System.Int32 Boss/<AddTimeScore>d__34::a
	int32_t ___a_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAddTimeScoreU3Ed__34_tC58DEE55F7328D127BC26C58999917D21648C761, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAddTimeScoreU3Ed__34_tC58DEE55F7328D127BC26C58999917D21648C761, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAddTimeScoreU3Ed__34_tC58DEE55F7328D127BC26C58999917D21648C761, ___U3CU3E4__this_2)); }
	inline Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(U3CAddTimeScoreU3Ed__34_tC58DEE55F7328D127BC26C58999917D21648C761, ___a_3)); }
	inline int32_t get_a_3() const { return ___a_3; }
	inline int32_t* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(int32_t value)
	{
		___a_3 = value;
	}
};


// Boss/<PatternA>d__25
struct U3CPatternAU3Ed__25_t28745CEB3CDE89B25FABB9B1026360F76BCFA885  : public RuntimeObject
{
public:
	// System.Int32 Boss/<PatternA>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Boss/<PatternA>d__25::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Boss Boss/<PatternA>d__25::<>4__this
	Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * ___U3CU3E4__this_2;
	// System.Int32 Boss/<PatternA>d__25::<a>5__2
	int32_t ___U3CaU3E5__2_3;
	// UnityEngine.GameObject Boss/<PatternA>d__25::<bullet>5__3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CbulletU3E5__3_4;
	// System.Int32 Boss/<PatternA>d__25::<i>5__4
	int32_t ___U3CiU3E5__4_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPatternAU3Ed__25_t28745CEB3CDE89B25FABB9B1026360F76BCFA885, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPatternAU3Ed__25_t28745CEB3CDE89B25FABB9B1026360F76BCFA885, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPatternAU3Ed__25_t28745CEB3CDE89B25FABB9B1026360F76BCFA885, ___U3CU3E4__this_2)); }
	inline Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CaU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CPatternAU3Ed__25_t28745CEB3CDE89B25FABB9B1026360F76BCFA885, ___U3CaU3E5__2_3)); }
	inline int32_t get_U3CaU3E5__2_3() const { return ___U3CaU3E5__2_3; }
	inline int32_t* get_address_of_U3CaU3E5__2_3() { return &___U3CaU3E5__2_3; }
	inline void set_U3CaU3E5__2_3(int32_t value)
	{
		___U3CaU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CbulletU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CPatternAU3Ed__25_t28745CEB3CDE89B25FABB9B1026360F76BCFA885, ___U3CbulletU3E5__3_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CbulletU3E5__3_4() const { return ___U3CbulletU3E5__3_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CbulletU3E5__3_4() { return &___U3CbulletU3E5__3_4; }
	inline void set_U3CbulletU3E5__3_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CbulletU3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbulletU3E5__3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CPatternAU3Ed__25_t28745CEB3CDE89B25FABB9B1026360F76BCFA885, ___U3CiU3E5__4_5)); }
	inline int32_t get_U3CiU3E5__4_5() const { return ___U3CiU3E5__4_5; }
	inline int32_t* get_address_of_U3CiU3E5__4_5() { return &___U3CiU3E5__4_5; }
	inline void set_U3CiU3E5__4_5(int32_t value)
	{
		___U3CiU3E5__4_5 = value;
	}
};


// Boss/<PatternB>d__26
struct U3CPatternBU3Ed__26_t2CEB71F5110B1BB461CF4CC7C1509FEDE6714782  : public RuntimeObject
{
public:
	// System.Int32 Boss/<PatternB>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Boss/<PatternB>d__26::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Boss Boss/<PatternB>d__26::<>4__this
	Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * ___U3CU3E4__this_2;
	// System.Int32 Boss/<PatternB>d__26::<one>5__2
	int32_t ___U3ConeU3E5__2_3;
	// System.Int32 Boss/<PatternB>d__26::<a>5__3
	int32_t ___U3CaU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPatternBU3Ed__26_t2CEB71F5110B1BB461CF4CC7C1509FEDE6714782, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPatternBU3Ed__26_t2CEB71F5110B1BB461CF4CC7C1509FEDE6714782, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPatternBU3Ed__26_t2CEB71F5110B1BB461CF4CC7C1509FEDE6714782, ___U3CU3E4__this_2)); }
	inline Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3ConeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CPatternBU3Ed__26_t2CEB71F5110B1BB461CF4CC7C1509FEDE6714782, ___U3ConeU3E5__2_3)); }
	inline int32_t get_U3ConeU3E5__2_3() const { return ___U3ConeU3E5__2_3; }
	inline int32_t* get_address_of_U3ConeU3E5__2_3() { return &___U3ConeU3E5__2_3; }
	inline void set_U3ConeU3E5__2_3(int32_t value)
	{
		___U3ConeU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CaU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CPatternBU3Ed__26_t2CEB71F5110B1BB461CF4CC7C1509FEDE6714782, ___U3CaU3E5__3_4)); }
	inline int32_t get_U3CaU3E5__3_4() const { return ___U3CaU3E5__3_4; }
	inline int32_t* get_address_of_U3CaU3E5__3_4() { return &___U3CaU3E5__3_4; }
	inline void set_U3CaU3E5__3_4(int32_t value)
	{
		___U3CaU3E5__3_4 = value;
	}
};


// Boss/<PatternC>d__27
struct U3CPatternCU3Ed__27_t3A8A5112A6A731A35A3E2E988C34E9C5B225EB5D  : public RuntimeObject
{
public:
	// System.Int32 Boss/<PatternC>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Boss/<PatternC>d__27::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Boss Boss/<PatternC>d__27::<>4__this
	Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * ___U3CU3E4__this_2;
	// System.Int32 Boss/<PatternC>d__27::<one>5__2
	int32_t ___U3ConeU3E5__2_3;
	// System.Int32 Boss/<PatternC>d__27::<a>5__3
	int32_t ___U3CaU3E5__3_4;
	// UnityEngine.GameObject Boss/<PatternC>d__27::<bullet>5__4
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CbulletU3E5__4_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPatternCU3Ed__27_t3A8A5112A6A731A35A3E2E988C34E9C5B225EB5D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPatternCU3Ed__27_t3A8A5112A6A731A35A3E2E988C34E9C5B225EB5D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPatternCU3Ed__27_t3A8A5112A6A731A35A3E2E988C34E9C5B225EB5D, ___U3CU3E4__this_2)); }
	inline Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3ConeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CPatternCU3Ed__27_t3A8A5112A6A731A35A3E2E988C34E9C5B225EB5D, ___U3ConeU3E5__2_3)); }
	inline int32_t get_U3ConeU3E5__2_3() const { return ___U3ConeU3E5__2_3; }
	inline int32_t* get_address_of_U3ConeU3E5__2_3() { return &___U3ConeU3E5__2_3; }
	inline void set_U3ConeU3E5__2_3(int32_t value)
	{
		___U3ConeU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CaU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CPatternCU3Ed__27_t3A8A5112A6A731A35A3E2E988C34E9C5B225EB5D, ___U3CaU3E5__3_4)); }
	inline int32_t get_U3CaU3E5__3_4() const { return ___U3CaU3E5__3_4; }
	inline int32_t* get_address_of_U3CaU3E5__3_4() { return &___U3CaU3E5__3_4; }
	inline void set_U3CaU3E5__3_4(int32_t value)
	{
		___U3CaU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CbulletU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CPatternCU3Ed__27_t3A8A5112A6A731A35A3E2E988C34E9C5B225EB5D, ___U3CbulletU3E5__4_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CbulletU3E5__4_5() const { return ___U3CbulletU3E5__4_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CbulletU3E5__4_5() { return &___U3CbulletU3E5__4_5; }
	inline void set_U3CbulletU3E5__4_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CbulletU3E5__4_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbulletU3E5__4_5), (void*)value);
	}
};


// Boss/<PatternD>d__28
struct U3CPatternDU3Ed__28_t5823F6CE054BD0A929622F0A091C411A31F741B0  : public RuntimeObject
{
public:
	// System.Int32 Boss/<PatternD>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Boss/<PatternD>d__28::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Boss Boss/<PatternD>d__28::<>4__this
	Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * ___U3CU3E4__this_2;
	// UnityEngine.GameObject Boss/<PatternD>d__28::<bullet>5__2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CbulletU3E5__2_3;
	// System.Int32 Boss/<PatternD>d__28::<a>5__3
	int32_t ___U3CaU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPatternDU3Ed__28_t5823F6CE054BD0A929622F0A091C411A31F741B0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPatternDU3Ed__28_t5823F6CE054BD0A929622F0A091C411A31F741B0, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPatternDU3Ed__28_t5823F6CE054BD0A929622F0A091C411A31F741B0, ___U3CU3E4__this_2)); }
	inline Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbulletU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CPatternDU3Ed__28_t5823F6CE054BD0A929622F0A091C411A31F741B0, ___U3CbulletU3E5__2_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CbulletU3E5__2_3() const { return ___U3CbulletU3E5__2_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CbulletU3E5__2_3() { return &___U3CbulletU3E5__2_3; }
	inline void set_U3CbulletU3E5__2_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CbulletU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbulletU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CaU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CPatternDU3Ed__28_t5823F6CE054BD0A929622F0A091C411A31F741B0, ___U3CaU3E5__3_4)); }
	inline int32_t get_U3CaU3E5__3_4() const { return ___U3CaU3E5__3_4; }
	inline int32_t* get_address_of_U3CaU3E5__3_4() { return &___U3CaU3E5__3_4; }
	inline void set_U3CaU3E5__3_4(int32_t value)
	{
		___U3CaU3E5__3_4 = value;
	}
};


// Boss/<PatternE>d__29
struct U3CPatternEU3Ed__29_t2C056D78C572E8729F568AFD66E5C57D9844F599  : public RuntimeObject
{
public:
	// System.Int32 Boss/<PatternE>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Boss/<PatternE>d__29::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Boss Boss/<PatternE>d__29::<>4__this
	Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPatternEU3Ed__29_t2C056D78C572E8729F568AFD66E5C57D9844F599, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPatternEU3Ed__29_t2C056D78C572E8729F568AFD66E5C57D9844F599, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPatternEU3Ed__29_t2C056D78C572E8729F568AFD66E5C57D9844F599, ___U3CU3E4__this_2)); }
	inline Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Boss/<PatternF>d__30
struct U3CPatternFU3Ed__30_tEF3418D9378F3DCD674C92CB3CEFFA423C172816  : public RuntimeObject
{
public:
	// System.Int32 Boss/<PatternF>d__30::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Boss/<PatternF>d__30::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Boss Boss/<PatternF>d__30::<>4__this
	Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * ___U3CU3E4__this_2;
	// System.Int32 Boss/<PatternF>d__30::<a>5__2
	int32_t ___U3CaU3E5__2_3;
	// System.Int32 Boss/<PatternF>d__30::<b>5__3
	int32_t ___U3CbU3E5__3_4;
	// System.Int32 Boss/<PatternF>d__30::<randPattern>5__4
	int32_t ___U3CrandPatternU3E5__4_5;
	// UnityEngine.GameObject Boss/<PatternF>d__30::<bullet>5__5
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CbulletU3E5__5_6;
	// System.Int32 Boss/<PatternF>d__30::<i>5__6
	int32_t ___U3CiU3E5__6_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPatternFU3Ed__30_tEF3418D9378F3DCD674C92CB3CEFFA423C172816, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPatternFU3Ed__30_tEF3418D9378F3DCD674C92CB3CEFFA423C172816, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPatternFU3Ed__30_tEF3418D9378F3DCD674C92CB3CEFFA423C172816, ___U3CU3E4__this_2)); }
	inline Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CaU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CPatternFU3Ed__30_tEF3418D9378F3DCD674C92CB3CEFFA423C172816, ___U3CaU3E5__2_3)); }
	inline int32_t get_U3CaU3E5__2_3() const { return ___U3CaU3E5__2_3; }
	inline int32_t* get_address_of_U3CaU3E5__2_3() { return &___U3CaU3E5__2_3; }
	inline void set_U3CaU3E5__2_3(int32_t value)
	{
		___U3CaU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CbU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CPatternFU3Ed__30_tEF3418D9378F3DCD674C92CB3CEFFA423C172816, ___U3CbU3E5__3_4)); }
	inline int32_t get_U3CbU3E5__3_4() const { return ___U3CbU3E5__3_4; }
	inline int32_t* get_address_of_U3CbU3E5__3_4() { return &___U3CbU3E5__3_4; }
	inline void set_U3CbU3E5__3_4(int32_t value)
	{
		___U3CbU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CrandPatternU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CPatternFU3Ed__30_tEF3418D9378F3DCD674C92CB3CEFFA423C172816, ___U3CrandPatternU3E5__4_5)); }
	inline int32_t get_U3CrandPatternU3E5__4_5() const { return ___U3CrandPatternU3E5__4_5; }
	inline int32_t* get_address_of_U3CrandPatternU3E5__4_5() { return &___U3CrandPatternU3E5__4_5; }
	inline void set_U3CrandPatternU3E5__4_5(int32_t value)
	{
		___U3CrandPatternU3E5__4_5 = value;
	}

	inline static int32_t get_offset_of_U3CbulletU3E5__5_6() { return static_cast<int32_t>(offsetof(U3CPatternFU3Ed__30_tEF3418D9378F3DCD674C92CB3CEFFA423C172816, ___U3CbulletU3E5__5_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CbulletU3E5__5_6() const { return ___U3CbulletU3E5__5_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CbulletU3E5__5_6() { return &___U3CbulletU3E5__5_6; }
	inline void set_U3CbulletU3E5__5_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CbulletU3E5__5_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbulletU3E5__5_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__6_7() { return static_cast<int32_t>(offsetof(U3CPatternFU3Ed__30_tEF3418D9378F3DCD674C92CB3CEFFA423C172816, ___U3CiU3E5__6_7)); }
	inline int32_t get_U3CiU3E5__6_7() const { return ___U3CiU3E5__6_7; }
	inline int32_t* get_address_of_U3CiU3E5__6_7() { return &___U3CiU3E5__6_7; }
	inline void set_U3CiU3E5__6_7(int32_t value)
	{
		___U3CiU3E5__6_7 = value;
	}
};


// Bullet/<Srali>d__9
struct U3CSraliU3Ed__9_t1289A74D5B6E12DCCA8A9F9E98B086A1E44FDA0A  : public RuntimeObject
{
public:
	// System.Int32 Bullet/<Srali>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Bullet/<Srali>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Bullet Bullet/<Srali>d__9::<>4__this
	Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSraliU3Ed__9_t1289A74D5B6E12DCCA8A9F9E98B086A1E44FDA0A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSraliU3Ed__9_t1289A74D5B6E12DCCA8A9F9E98B086A1E44FDA0A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSraliU3Ed__9_t1289A74D5B6E12DCCA8A9F9E98B086A1E44FDA0A, ___U3CU3E4__this_2)); }
	inline Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Enemy/<Damaged>d__11
struct U3CDamagedU3Ed__11_t9A37EFE172E6E7E84D2CAA63B40884A35E7A10E0  : public RuntimeObject
{
public:
	// System.Int32 Enemy/<Damaged>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Enemy/<Damaged>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Enemy Enemy/<Damaged>d__11::<>4__this
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDamagedU3Ed__11_t9A37EFE172E6E7E84D2CAA63B40884A35E7A10E0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDamagedU3Ed__11_t9A37EFE172E6E7E84D2CAA63B40884A35E7A10E0, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDamagedU3Ed__11_t9A37EFE172E6E7E84D2CAA63B40884A35E7A10E0, ___U3CU3E4__this_2)); }
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Enemy/<Shotting>d__9
struct U3CShottingU3Ed__9_tF7F3C440403C77D1DEAE9488B7D073304F82B6C8  : public RuntimeObject
{
public:
	// System.Int32 Enemy/<Shotting>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Enemy/<Shotting>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Enemy Enemy/<Shotting>d__9::<>4__this
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * ___U3CU3E4__this_2;
	// UnityEngine.GameObject Enemy/<Shotting>d__9::<bullet>5__2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CbulletU3E5__2_3;
	// System.Int32 Enemy/<Shotting>d__9::<oneShoting>5__3
	int32_t ___U3ConeShotingU3E5__3_4;
	// System.Single Enemy/<Shotting>d__9::<one>5__4
	float ___U3ConeU3E5__4_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShottingU3Ed__9_tF7F3C440403C77D1DEAE9488B7D073304F82B6C8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CShottingU3Ed__9_tF7F3C440403C77D1DEAE9488B7D073304F82B6C8, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CShottingU3Ed__9_tF7F3C440403C77D1DEAE9488B7D073304F82B6C8, ___U3CU3E4__this_2)); }
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbulletU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CShottingU3Ed__9_tF7F3C440403C77D1DEAE9488B7D073304F82B6C8, ___U3CbulletU3E5__2_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CbulletU3E5__2_3() const { return ___U3CbulletU3E5__2_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CbulletU3E5__2_3() { return &___U3CbulletU3E5__2_3; }
	inline void set_U3CbulletU3E5__2_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CbulletU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbulletU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ConeShotingU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CShottingU3Ed__9_tF7F3C440403C77D1DEAE9488B7D073304F82B6C8, ___U3ConeShotingU3E5__3_4)); }
	inline int32_t get_U3ConeShotingU3E5__3_4() const { return ___U3ConeShotingU3E5__3_4; }
	inline int32_t* get_address_of_U3ConeShotingU3E5__3_4() { return &___U3ConeShotingU3E5__3_4; }
	inline void set_U3ConeShotingU3E5__3_4(int32_t value)
	{
		___U3ConeShotingU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3ConeU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CShottingU3Ed__9_tF7F3C440403C77D1DEAE9488B7D073304F82B6C8, ___U3ConeU3E5__4_5)); }
	inline float get_U3ConeU3E5__4_5() const { return ___U3ConeU3E5__4_5; }
	inline float* get_address_of_U3ConeU3E5__4_5() { return &___U3ConeU3E5__4_5; }
	inline void set_U3ConeU3E5__4_5(float value)
	{
		___U3ConeU3E5__4_5 = value;
	}
};


// Player/<Damaged>d__17
struct U3CDamagedU3Ed__17_tB832BEEBB4DD5EDA6B8664FA17B5EE4E3B3CC3F7  : public RuntimeObject
{
public:
	// System.Int32 Player/<Damaged>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Player/<Damaged>d__17::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Player Player/<Damaged>d__17::<>4__this
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ___U3CU3E4__this_2;
	// System.Int32 Player/<Damaged>d__17::<i>5__2
	int32_t ___U3CiU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDamagedU3Ed__17_tB832BEEBB4DD5EDA6B8664FA17B5EE4E3B3CC3F7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDamagedU3Ed__17_tB832BEEBB4DD5EDA6B8664FA17B5EE4E3B3CC3F7, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDamagedU3Ed__17_tB832BEEBB4DD5EDA6B8664FA17B5EE4E3B3CC3F7, ___U3CU3E4__this_2)); }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CDamagedU3Ed__17_tB832BEEBB4DD5EDA6B8664FA17B5EE4E3B3CC3F7, ___U3CiU3E5__2_3)); }
	inline int32_t get_U3CiU3E5__2_3() const { return ___U3CiU3E5__2_3; }
	inline int32_t* get_address_of_U3CiU3E5__2_3() { return &___U3CiU3E5__2_3; }
	inline void set_U3CiU3E5__2_3(int32_t value)
	{
		___U3CiU3E5__2_3 = value;
	}
};


// Player/<Fire>d__14
struct U3CFireU3Ed__14_tE76C69BC1E345D96D8F5422E30F0B7BA407ADD90  : public RuntimeObject
{
public:
	// System.Int32 Player/<Fire>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Player/<Fire>d__14::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Player Player/<Fire>d__14::<>4__this
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFireU3Ed__14_tE76C69BC1E345D96D8F5422E30F0B7BA407ADD90, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFireU3Ed__14_tE76C69BC1E345D96D8F5422E30F0B7BA407ADD90, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFireU3Ed__14_tE76C69BC1E345D96D8F5422E30F0B7BA407ADD90, ___U3CU3E4__this_2)); }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Boss/<MoveTo>d__33
struct U3CMoveToU3Ed__33_t55F90767C706DFE31BDD0F94A60426D168A3C65E  : public RuntimeObject
{
public:
	// System.Int32 Boss/<MoveTo>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Boss/<MoveTo>d__33::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.GameObject Boss/<MoveTo>d__33::a
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___a_2;
	// UnityEngine.Vector3 Boss/<MoveTo>d__33::toPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___toPos_3;
	// System.Single Boss/<MoveTo>d__33::<count>5__2
	float ___U3CcountU3E5__2_4;
	// UnityEngine.Vector3 Boss/<MoveTo>d__33::<wasPos>5__3
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CwasPosU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMoveToU3Ed__33_t55F90767C706DFE31BDD0F94A60426D168A3C65E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMoveToU3Ed__33_t55F90767C706DFE31BDD0F94A60426D168A3C65E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_a_2() { return static_cast<int32_t>(offsetof(U3CMoveToU3Ed__33_t55F90767C706DFE31BDD0F94A60426D168A3C65E, ___a_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_a_2() const { return ___a_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_a_2() { return &___a_2; }
	inline void set_a_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___a_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___a_2), (void*)value);
	}

	inline static int32_t get_offset_of_toPos_3() { return static_cast<int32_t>(offsetof(U3CMoveToU3Ed__33_t55F90767C706DFE31BDD0F94A60426D168A3C65E, ___toPos_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_toPos_3() const { return ___toPos_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_toPos_3() { return &___toPos_3; }
	inline void set_toPos_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___toPos_3 = value;
	}

	inline static int32_t get_offset_of_U3CcountU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CMoveToU3Ed__33_t55F90767C706DFE31BDD0F94A60426D168A3C65E, ___U3CcountU3E5__2_4)); }
	inline float get_U3CcountU3E5__2_4() const { return ___U3CcountU3E5__2_4; }
	inline float* get_address_of_U3CcountU3E5__2_4() { return &___U3CcountU3E5__2_4; }
	inline void set_U3CcountU3E5__2_4(float value)
	{
		___U3CcountU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CwasPosU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CMoveToU3Ed__33_t55F90767C706DFE31BDD0F94A60426D168A3C65E, ___U3CwasPosU3E5__3_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CwasPosU3E5__3_5() const { return ___U3CwasPosU3E5__3_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CwasPosU3E5__3_5() { return &___U3CwasPosU3E5__3_5; }
	inline void set_U3CwasPosU3E5__3_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CwasPosU3E5__3_5 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// Bullet
struct Bullet_tF95A945B732B2B929938FB1028878BFBC0081724  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.SpriteRenderer Bullet::spriteRenderer
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___spriteRenderer_4;
	// GameManager Bullet::gameManager
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gameManager_5;
	// UnityEngine.Animator Bullet::ani
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___ani_6;
	// UnityEngine.Sprite[] Bullet::sprites
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ___sprites_7;
	// System.Single Bullet::speed
	float ___speed_8;

public:
	inline static int32_t get_offset_of_spriteRenderer_4() { return static_cast<int32_t>(offsetof(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724, ___spriteRenderer_4)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_spriteRenderer_4() const { return ___spriteRenderer_4; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_spriteRenderer_4() { return &___spriteRenderer_4; }
	inline void set_spriteRenderer_4(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___spriteRenderer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteRenderer_4), (void*)value);
	}

	inline static int32_t get_offset_of_gameManager_5() { return static_cast<int32_t>(offsetof(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724, ___gameManager_5)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gameManager_5() const { return ___gameManager_5; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gameManager_5() { return &___gameManager_5; }
	inline void set_gameManager_5(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gameManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameManager_5), (void*)value);
	}

	inline static int32_t get_offset_of_ani_6() { return static_cast<int32_t>(offsetof(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724, ___ani_6)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_ani_6() const { return ___ani_6; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_ani_6() { return &___ani_6; }
	inline void set_ani_6(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___ani_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ani_6), (void*)value);
	}

	inline static int32_t get_offset_of_sprites_7() { return static_cast<int32_t>(offsetof(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724, ___sprites_7)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get_sprites_7() const { return ___sprites_7; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of_sprites_7() { return &___sprites_7; }
	inline void set_sprites_7(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		___sprites_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprites_7), (void*)value);
	}

	inline static int32_t get_offset_of_speed_8() { return static_cast<int32_t>(offsetof(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724, ___speed_8)); }
	inline float get_speed_8() const { return ___speed_8; }
	inline float* get_address_of_speed_8() { return &___speed_8; }
	inline void set_speed_8(float value)
	{
		___speed_8 = value;
	}
};


// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Enemy::bulletPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bulletPrefab_4;
	// UnityEngine.Transform Enemy::bulletPosition
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___bulletPosition_5;
	// GameManager Enemy::gameManager
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gameManager_6;
	// UnityEngine.SpriteRenderer Enemy::spriteRenderer
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___spriteRenderer_7;
	// System.Int32 Enemy::hp
	int32_t ___hp_8;
	// System.Single Enemy::speed
	float ___speed_9;

public:
	inline static int32_t get_offset_of_bulletPrefab_4() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___bulletPrefab_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bulletPrefab_4() const { return ___bulletPrefab_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bulletPrefab_4() { return &___bulletPrefab_4; }
	inline void set_bulletPrefab_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bulletPrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletPrefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_bulletPosition_5() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___bulletPosition_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_bulletPosition_5() const { return ___bulletPosition_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_bulletPosition_5() { return &___bulletPosition_5; }
	inline void set_bulletPosition_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___bulletPosition_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletPosition_5), (void*)value);
	}

	inline static int32_t get_offset_of_gameManager_6() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___gameManager_6)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gameManager_6() const { return ___gameManager_6; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gameManager_6() { return &___gameManager_6; }
	inline void set_gameManager_6(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gameManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameManager_6), (void*)value);
	}

	inline static int32_t get_offset_of_spriteRenderer_7() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___spriteRenderer_7)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_spriteRenderer_7() const { return ___spriteRenderer_7; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_spriteRenderer_7() { return &___spriteRenderer_7; }
	inline void set_spriteRenderer_7(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___spriteRenderer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteRenderer_7), (void*)value);
	}

	inline static int32_t get_offset_of_hp_8() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___hp_8)); }
	inline int32_t get_hp_8() const { return ___hp_8; }
	inline int32_t* get_address_of_hp_8() { return &___hp_8; }
	inline void set_hp_8(int32_t value)
	{
		___hp_8 = value;
	}

	inline static int32_t get_offset_of_speed_9() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___speed_9)); }
	inline float get_speed_9() const { return ___speed_9; }
	inline float* get_address_of_speed_9() { return &___speed_9; }
	inline void set_speed_9(float value)
	{
		___speed_9 = value;
	}
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector2 GameManager::<MaxPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CMaxPositionU3Ek__BackingField_4;
	// UnityEngine.Vector2 GameManager::<MinPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CMinPositionU3Ek__BackingField_5;
	// PoolManager GameManager::<PoolManager>k__BackingField
	PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * ___U3CPoolManagerU3Ek__BackingField_6;
	// UnityEngine.SpriteRenderer GameManager::spriteRenderer
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___spriteRenderer_7;
	// UnityEngine.UI.Text GameManager::textScore
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textScore_8;
	// System.Int32 GameManager::highscore
	int32_t ___highscore_9;
	// System.Int32 GameManager::score
	int32_t ___score_10;
	// System.Int32 GameManager::life
	int32_t ___life_11;
	// UnityEngine.UI.Image[] GameManager::playerHp
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* ___playerHp_12;

public:
	inline static int32_t get_offset_of_U3CMaxPositionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___U3CMaxPositionU3Ek__BackingField_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CMaxPositionU3Ek__BackingField_4() const { return ___U3CMaxPositionU3Ek__BackingField_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CMaxPositionU3Ek__BackingField_4() { return &___U3CMaxPositionU3Ek__BackingField_4; }
	inline void set_U3CMaxPositionU3Ek__BackingField_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CMaxPositionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CMinPositionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___U3CMinPositionU3Ek__BackingField_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CMinPositionU3Ek__BackingField_5() const { return ___U3CMinPositionU3Ek__BackingField_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CMinPositionU3Ek__BackingField_5() { return &___U3CMinPositionU3Ek__BackingField_5; }
	inline void set_U3CMinPositionU3Ek__BackingField_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CMinPositionU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CPoolManagerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___U3CPoolManagerU3Ek__BackingField_6)); }
	inline PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * get_U3CPoolManagerU3Ek__BackingField_6() const { return ___U3CPoolManagerU3Ek__BackingField_6; }
	inline PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 ** get_address_of_U3CPoolManagerU3Ek__BackingField_6() { return &___U3CPoolManagerU3Ek__BackingField_6; }
	inline void set_U3CPoolManagerU3Ek__BackingField_6(PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * value)
	{
		___U3CPoolManagerU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPoolManagerU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_spriteRenderer_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___spriteRenderer_7)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_spriteRenderer_7() const { return ___spriteRenderer_7; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_spriteRenderer_7() { return &___spriteRenderer_7; }
	inline void set_spriteRenderer_7(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___spriteRenderer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteRenderer_7), (void*)value);
	}

	inline static int32_t get_offset_of_textScore_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___textScore_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textScore_8() const { return ___textScore_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textScore_8() { return &___textScore_8; }
	inline void set_textScore_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textScore_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textScore_8), (void*)value);
	}

	inline static int32_t get_offset_of_highscore_9() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___highscore_9)); }
	inline int32_t get_highscore_9() const { return ___highscore_9; }
	inline int32_t* get_address_of_highscore_9() { return &___highscore_9; }
	inline void set_highscore_9(int32_t value)
	{
		___highscore_9 = value;
	}

	inline static int32_t get_offset_of_score_10() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___score_10)); }
	inline int32_t get_score_10() const { return ___score_10; }
	inline int32_t* get_address_of_score_10() { return &___score_10; }
	inline void set_score_10(int32_t value)
	{
		___score_10 = value;
	}

	inline static int32_t get_offset_of_life_11() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___life_11)); }
	inline int32_t get_life_11() const { return ___life_11; }
	inline int32_t* get_address_of_life_11() { return &___life_11; }
	inline void set_life_11(int32_t value)
	{
		___life_11 = value;
	}

	inline static int32_t get_offset_of_playerHp_12() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___playerHp_12)); }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* get_playerHp_12() const { return ___playerHp_12; }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224** get_address_of_playerHp_12() { return &___playerHp_12; }
	inline void set_playerHp_12(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* value)
	{
		___playerHp_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerHp_12), (void*)value);
	}
};


// Magic
struct Magic_t0CC50A162DDF9C4C4549E05883368ACD19D8F36C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.SpriteRenderer Magic::spriteRenderer
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___spriteRenderer_4;
	// UnityEngine.Collider2D Magic::col
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col_5;
	// System.Single Magic::speed
	float ___speed_6;
	// System.Int32 Magic::magicNumber
	int32_t ___magicNumber_7;
	// UnityEngine.Sprite[] Magic::sprites
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ___sprites_8;

public:
	inline static int32_t get_offset_of_spriteRenderer_4() { return static_cast<int32_t>(offsetof(Magic_t0CC50A162DDF9C4C4549E05883368ACD19D8F36C, ___spriteRenderer_4)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_spriteRenderer_4() const { return ___spriteRenderer_4; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_spriteRenderer_4() { return &___spriteRenderer_4; }
	inline void set_spriteRenderer_4(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___spriteRenderer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteRenderer_4), (void*)value);
	}

	inline static int32_t get_offset_of_col_5() { return static_cast<int32_t>(offsetof(Magic_t0CC50A162DDF9C4C4549E05883368ACD19D8F36C, ___col_5)); }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * get_col_5() const { return ___col_5; }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** get_address_of_col_5() { return &___col_5; }
	inline void set_col_5(Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		___col_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___col_5), (void*)value);
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(Magic_t0CC50A162DDF9C4C4549E05883368ACD19D8F36C, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_magicNumber_7() { return static_cast<int32_t>(offsetof(Magic_t0CC50A162DDF9C4C4549E05883368ACD19D8F36C, ___magicNumber_7)); }
	inline int32_t get_magicNumber_7() const { return ___magicNumber_7; }
	inline int32_t* get_address_of_magicNumber_7() { return &___magicNumber_7; }
	inline void set_magicNumber_7(int32_t value)
	{
		___magicNumber_7 = value;
	}

	inline static int32_t get_offset_of_sprites_8() { return static_cast<int32_t>(offsetof(Magic_t0CC50A162DDF9C4C4549E05883368ACD19D8F36C, ___sprites_8)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get_sprites_8() const { return ___sprites_8; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of_sprites_8() { return &___sprites_8; }
	inline void set_sprites_8(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		___sprites_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprites_8), (void*)value);
	}
};


// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform Player::bulletPosition
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___bulletPosition_4;
	// UnityEngine.GameObject Player::bulletPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bulletPrefab_5;
	// UnityEngine.AudioClip Player::clip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip_6;
	// UnityEngine.Vector3 Player::targetPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition_7;
	// GameManager Player::gameManager
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gameManager_8;
	// UnityEngine.SpriteRenderer Player::spriteRenderer
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___spriteRenderer_9;
	// System.Single Player::speed
	float ___speed_10;
	// System.Single Player::firelate
	float ___firelate_11;
	// System.Boolean Player::im
	bool ___im_12;
	// System.Boolean Player::isDead
	bool ___isDead_13;

public:
	inline static int32_t get_offset_of_bulletPosition_4() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___bulletPosition_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_bulletPosition_4() const { return ___bulletPosition_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_bulletPosition_4() { return &___bulletPosition_4; }
	inline void set_bulletPosition_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___bulletPosition_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletPosition_4), (void*)value);
	}

	inline static int32_t get_offset_of_bulletPrefab_5() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___bulletPrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bulletPrefab_5() const { return ___bulletPrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bulletPrefab_5() { return &___bulletPrefab_5; }
	inline void set_bulletPrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bulletPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_clip_6() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___clip_6)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_clip_6() const { return ___clip_6; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_clip_6() { return &___clip_6; }
	inline void set_clip_6(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___clip_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clip_6), (void*)value);
	}

	inline static int32_t get_offset_of_targetPosition_7() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___targetPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_targetPosition_7() const { return ___targetPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_targetPosition_7() { return &___targetPosition_7; }
	inline void set_targetPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___targetPosition_7 = value;
	}

	inline static int32_t get_offset_of_gameManager_8() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___gameManager_8)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gameManager_8() const { return ___gameManager_8; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gameManager_8() { return &___gameManager_8; }
	inline void set_gameManager_8(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gameManager_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameManager_8), (void*)value);
	}

	inline static int32_t get_offset_of_spriteRenderer_9() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___spriteRenderer_9)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_spriteRenderer_9() const { return ___spriteRenderer_9; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_spriteRenderer_9() { return &___spriteRenderer_9; }
	inline void set_spriteRenderer_9(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___spriteRenderer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteRenderer_9), (void*)value);
	}

	inline static int32_t get_offset_of_speed_10() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___speed_10)); }
	inline float get_speed_10() const { return ___speed_10; }
	inline float* get_address_of_speed_10() { return &___speed_10; }
	inline void set_speed_10(float value)
	{
		___speed_10 = value;
	}

	inline static int32_t get_offset_of_firelate_11() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___firelate_11)); }
	inline float get_firelate_11() const { return ___firelate_11; }
	inline float* get_address_of_firelate_11() { return &___firelate_11; }
	inline void set_firelate_11(float value)
	{
		___firelate_11 = value;
	}

	inline static int32_t get_offset_of_im_12() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___im_12)); }
	inline bool get_im_12() const { return ___im_12; }
	inline bool* get_address_of_im_12() { return &___im_12; }
	inline void set_im_12(bool value)
	{
		___im_12 = value;
	}

	inline static int32_t get_offset_of_isDead_13() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___isDead_13)); }
	inline bool get_isDead_13() const { return ___isDead_13; }
	inline bool* get_address_of_isDead_13() { return &___isDead_13; }
	inline void set_isDead_13(bool value)
	{
		___isDead_13 = value;
	}
};


// PoolManager
struct PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Scene
struct Scene_tDE4016BE2BA3F33366B0D42BC2AEAFCAB0A039FB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text Scene::textHighScore
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textHighScore_4;
	// UnityEngine.UI.Text Scene::textScore
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textScore_5;
	// System.Int32 Scene::sceneNumber
	int32_t ___sceneNumber_6;

public:
	inline static int32_t get_offset_of_textHighScore_4() { return static_cast<int32_t>(offsetof(Scene_tDE4016BE2BA3F33366B0D42BC2AEAFCAB0A039FB, ___textHighScore_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textHighScore_4() const { return ___textHighScore_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textHighScore_4() { return &___textHighScore_4; }
	inline void set_textHighScore_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textHighScore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textHighScore_4), (void*)value);
	}

	inline static int32_t get_offset_of_textScore_5() { return static_cast<int32_t>(offsetof(Scene_tDE4016BE2BA3F33366B0D42BC2AEAFCAB0A039FB, ___textScore_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textScore_5() const { return ___textScore_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textScore_5() { return &___textScore_5; }
	inline void set_textScore_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textScore_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textScore_5), (void*)value);
	}

	inline static int32_t get_offset_of_sceneNumber_6() { return static_cast<int32_t>(offsetof(Scene_tDE4016BE2BA3F33366B0D42BC2AEAFCAB0A039FB, ___sceneNumber_6)); }
	inline int32_t get_sceneNumber_6() const { return ___sceneNumber_6; }
	inline int32_t* get_address_of_sceneNumber_6() { return &___sceneNumber_6; }
	inline void set_sceneNumber_6(int32_t value)
	{
		___sceneNumber_6 = value;
	}
};


// SoundManager
struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields
{
public:
	// SoundManager SoundManager::instance
	SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields, ___instance_4)); }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * get_instance_4() const { return ___instance_4; }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Boss
struct Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82  : public GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1
{
public:
	// UnityEngine.Animator Boss::ani
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___ani_13;
	// GameManager Boss::gameManager
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gameManager_14;
	// UnityEngine.GameObject Boss::bulletPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bulletPrefab_15;
	// UnityEngine.GameObject Boss::enemyPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemyPrefab_16;
	// UnityEngine.GameObject Boss::laserObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___laserObject_17;
	// UnityEngine.Transform Boss::targetPosition
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___targetPosition_18;
	// UnityEngine.Transform Boss::bulletPosition
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___bulletPosition_19;
	// UnityEngine.Transform Boss::pos1
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___pos1_20;
	// UnityEngine.UI.Slider Boss::HpBar
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___HpBar_21;
	// System.Single Boss::damaged
	float ___damaged_22;
	// System.Single Boss::moveSpeed
	float ___moveSpeed_23;
	// System.Single Boss::moveArea
	float ___moveArea_24;
	// System.Single Boss::speed
	float ___speed_25;
	// System.Single Boss::oneShoting
	float ___oneShoting_26;
	// System.Boolean Boss::isPhase
	bool ___isPhase_27;
	// System.Boolean Boss::isMove
	bool ___isMove_28;
	// System.Boolean Boss::isPhase2
	bool ___isPhase2_29;
	// System.Int32 Boss::time
	int32_t ___time_30;

public:
	inline static int32_t get_offset_of_ani_13() { return static_cast<int32_t>(offsetof(Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82, ___ani_13)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_ani_13() const { return ___ani_13; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_ani_13() { return &___ani_13; }
	inline void set_ani_13(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___ani_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ani_13), (void*)value);
	}

	inline static int32_t get_offset_of_gameManager_14() { return static_cast<int32_t>(offsetof(Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82, ___gameManager_14)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gameManager_14() const { return ___gameManager_14; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gameManager_14() { return &___gameManager_14; }
	inline void set_gameManager_14(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gameManager_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameManager_14), (void*)value);
	}

	inline static int32_t get_offset_of_bulletPrefab_15() { return static_cast<int32_t>(offsetof(Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82, ___bulletPrefab_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bulletPrefab_15() const { return ___bulletPrefab_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bulletPrefab_15() { return &___bulletPrefab_15; }
	inline void set_bulletPrefab_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bulletPrefab_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletPrefab_15), (void*)value);
	}

	inline static int32_t get_offset_of_enemyPrefab_16() { return static_cast<int32_t>(offsetof(Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82, ___enemyPrefab_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_enemyPrefab_16() const { return ___enemyPrefab_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_enemyPrefab_16() { return &___enemyPrefab_16; }
	inline void set_enemyPrefab_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___enemyPrefab_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyPrefab_16), (void*)value);
	}

	inline static int32_t get_offset_of_laserObject_17() { return static_cast<int32_t>(offsetof(Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82, ___laserObject_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_laserObject_17() const { return ___laserObject_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_laserObject_17() { return &___laserObject_17; }
	inline void set_laserObject_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___laserObject_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___laserObject_17), (void*)value);
	}

	inline static int32_t get_offset_of_targetPosition_18() { return static_cast<int32_t>(offsetof(Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82, ___targetPosition_18)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_targetPosition_18() const { return ___targetPosition_18; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_targetPosition_18() { return &___targetPosition_18; }
	inline void set_targetPosition_18(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___targetPosition_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetPosition_18), (void*)value);
	}

	inline static int32_t get_offset_of_bulletPosition_19() { return static_cast<int32_t>(offsetof(Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82, ___bulletPosition_19)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_bulletPosition_19() const { return ___bulletPosition_19; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_bulletPosition_19() { return &___bulletPosition_19; }
	inline void set_bulletPosition_19(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___bulletPosition_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletPosition_19), (void*)value);
	}

	inline static int32_t get_offset_of_pos1_20() { return static_cast<int32_t>(offsetof(Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82, ___pos1_20)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_pos1_20() const { return ___pos1_20; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_pos1_20() { return &___pos1_20; }
	inline void set_pos1_20(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___pos1_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pos1_20), (void*)value);
	}

	inline static int32_t get_offset_of_HpBar_21() { return static_cast<int32_t>(offsetof(Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82, ___HpBar_21)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_HpBar_21() const { return ___HpBar_21; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_HpBar_21() { return &___HpBar_21; }
	inline void set_HpBar_21(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___HpBar_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HpBar_21), (void*)value);
	}

	inline static int32_t get_offset_of_damaged_22() { return static_cast<int32_t>(offsetof(Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82, ___damaged_22)); }
	inline float get_damaged_22() const { return ___damaged_22; }
	inline float* get_address_of_damaged_22() { return &___damaged_22; }
	inline void set_damaged_22(float value)
	{
		___damaged_22 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_23() { return static_cast<int32_t>(offsetof(Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82, ___moveSpeed_23)); }
	inline float get_moveSpeed_23() const { return ___moveSpeed_23; }
	inline float* get_address_of_moveSpeed_23() { return &___moveSpeed_23; }
	inline void set_moveSpeed_23(float value)
	{
		___moveSpeed_23 = value;
	}

	inline static int32_t get_offset_of_moveArea_24() { return static_cast<int32_t>(offsetof(Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82, ___moveArea_24)); }
	inline float get_moveArea_24() const { return ___moveArea_24; }
	inline float* get_address_of_moveArea_24() { return &___moveArea_24; }
	inline void set_moveArea_24(float value)
	{
		___moveArea_24 = value;
	}

	inline static int32_t get_offset_of_speed_25() { return static_cast<int32_t>(offsetof(Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82, ___speed_25)); }
	inline float get_speed_25() const { return ___speed_25; }
	inline float* get_address_of_speed_25() { return &___speed_25; }
	inline void set_speed_25(float value)
	{
		___speed_25 = value;
	}

	inline static int32_t get_offset_of_oneShoting_26() { return static_cast<int32_t>(offsetof(Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82, ___oneShoting_26)); }
	inline float get_oneShoting_26() const { return ___oneShoting_26; }
	inline float* get_address_of_oneShoting_26() { return &___oneShoting_26; }
	inline void set_oneShoting_26(float value)
	{
		___oneShoting_26 = value;
	}

	inline static int32_t get_offset_of_isPhase_27() { return static_cast<int32_t>(offsetof(Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82, ___isPhase_27)); }
	inline bool get_isPhase_27() const { return ___isPhase_27; }
	inline bool* get_address_of_isPhase_27() { return &___isPhase_27; }
	inline void set_isPhase_27(bool value)
	{
		___isPhase_27 = value;
	}

	inline static int32_t get_offset_of_isMove_28() { return static_cast<int32_t>(offsetof(Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82, ___isMove_28)); }
	inline bool get_isMove_28() const { return ___isMove_28; }
	inline bool* get_address_of_isMove_28() { return &___isMove_28; }
	inline void set_isMove_28(bool value)
	{
		___isMove_28 = value;
	}

	inline static int32_t get_offset_of_isPhase2_29() { return static_cast<int32_t>(offsetof(Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82, ___isPhase2_29)); }
	inline bool get_isPhase2_29() const { return ___isPhase2_29; }
	inline bool* get_address_of_isPhase2_29() { return &___isPhase2_29; }
	inline void set_isPhase2_29(bool value)
	{
		___isPhase2_29 = value;
	}

	inline static int32_t get_offset_of_time_30() { return static_cast<int32_t>(offsetof(Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82, ___time_30)); }
	inline int32_t get_time_30() const { return ___time_30; }
	inline int32_t* get_address_of_time_30() { return &___time_30; }
	inline void set_time_30(int32_t value)
	{
		___time_30 = value;
	}
};


// EnemyBullet
struct EnemyBullet_t3AA58ACF2637B406675B7E16087A796F1FB2E865  : public Bullet_tF95A945B732B2B929938FB1028878BFBC0081724
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * m_Items[1];

public:
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * m_Items[1];

public:
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// !!0 UnityEngine.Object::FindObjectOfType<GameManager>()
inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59 (const RuntimeMethod* method)
{
	return ((  GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Collections.IEnumerator Boss::AddTimeScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss_AddTimeScore_m0252415E7214E8B75096736A1D4CDDBFDABDA9D0 (Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * __this, int32_t ___a0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Collections.IEnumerator Boss::PatternA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss_PatternA_mEB1A431AFF00704E3B75FE1F1BB98CC749265A0A (Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * __this, const RuntimeMethod* method);
// System.Void Boss::Phase_star()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss_Phase_star_mF33716F57F985C41723A1C53C17425D1718EA45C (Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * __this, const RuntimeMethod* method);
// System.Void GameManager::AddScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddScore_mF7D9082C1C297FC0547D0DDE027410E708CEA226 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___addsocre0, const RuntimeMethod* method);
// System.Void GameManager::GameEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameEnd_m69211289C2A19242B67388052C830AAC7A37EAF4 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186 (String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Bullet>()
inline Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * GameObject_GetComponent_TisBullet_tF95A945B732B2B929938FB1028878BFBC0081724_m369B5E2F14BDAB6427DDEEECD19954C23617D0B6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Collections.IEnumerator Bullet::Srali()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Bullet_Srali_m204EA46954B0B10B22B85D3FF7DB91914FC7232C (Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Boss::PatternD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss_PatternD_mF16453584470D0F9B39877FEE1E6BA708AAD3032 (Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * __this, const RuntimeMethod* method);
// System.Void Boss::Phase_2Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss_Phase_2Move_m6732CDBE8F99649D0A59297A194AE4FBC4AC870A (Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// PoolManager GameManager::get_PoolManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * GameManager_get_PoolManager_m6D739307662563512C61E7785E677AE86C308166_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method);
// System.Void Boss/<PatternA>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPatternAU3Ed__25__ctor_m293FD07A6FA9E5A72A70F285AC8FBAA25BB2B345 (U3CPatternAU3Ed__25_t28745CEB3CDE89B25FABB9B1026360F76BCFA885 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Boss/<PatternB>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPatternBU3Ed__26__ctor_m7740ED605DE7D079AB3538622B9D24B085293EF5 (U3CPatternBU3Ed__26_t2CEB71F5110B1BB461CF4CC7C1509FEDE6714782 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Boss/<PatternC>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPatternCU3Ed__27__ctor_m1CA26DE87E263599F37333396B094FD9BF2175B9 (U3CPatternCU3Ed__27_t3A8A5112A6A731A35A3E2E988C34E9C5B225EB5D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Boss/<PatternD>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPatternDU3Ed__28__ctor_m094E564F626A5A024F0EBEAEA5DD3C15D98D1047 (U3CPatternDU3Ed__28_t5823F6CE054BD0A929622F0A091C411A31F741B0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Boss/<PatternE>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPatternEU3Ed__29__ctor_m67F307BA33BD9573163C02F2B76F96BDD901B93C (U3CPatternEU3Ed__29_t2C056D78C572E8729F568AFD66E5C57D9844F599 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Boss/<PatternF>d__30::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPatternFU3Ed__30__ctor_mEFDCC296BD01112C480AC5A53C1FD791208E71B1 (U3CPatternFU3Ed__30_tEF3418D9378F3DCD674C92CB3CEFFA423C172816 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.GameObject Boss::Fire(UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Boss_Fire_mB2EAC4B5566D62F3C5C9829617A39CB22AD8C9E2 (Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bullet0, int32_t ___a1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___force0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___p0, const RuntimeMethod* method);
// System.Void Bullet::SetSprite(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_SetSprite_m08A3E01DB9F3F13D788B620D70FECF898257BA28 (Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * __this, int32_t ___cat0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void Boss/<MoveTo>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveToU3Ed__33__ctor_mE6F0091AF997117B8A803B7D97567714C7B9A9AE (U3CMoveToU3Ed__33_t55F90767C706DFE31BDD0F94A60426D168A3C65E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Boss/<AddTimeScore>d__34::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddTimeScoreU3Ed__34__ctor_mFDB48EA686C4E098576421FA06425D542F57495C (U3CAddTimeScoreU3Ed__34_tC58DEE55F7328D127BC26C58999917D21648C761 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, const RuntimeMethod* method);
// UnityEngine.Vector2 GameManager::get_MaxPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GameManager_get_MaxPosition_m39454AABAA11B1EDBC2ECD786BF9F9E2A3F629BB_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 GameManager::get_MinPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GameManager_get_MinPosition_mB50D1C8AA1A9FA284172ACA40CA9C09082581FC8_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void Bullet/<Srali>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSraliU3Ed__9__ctor_m97FD948693D7EDE63DD66107DD81A40A328C4703 (U3CSraliU3Ed__9_t1289A74D5B6E12DCCA8A9F9E98B086A1E44FDA0A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Enemy::Shotting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enemy_Shotting_mAB188ADDB086F2F3019C547A656F5810FFDECCE3 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Enemy::Damaged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enemy_Damaged_mC5044FF9CAC3E3BDFE34C1F732735140C753D938 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void Enemy/<Shotting>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShottingU3Ed__9__ctor_m551FF20B689683CD560034C00367ED28BA0EFF22 (U3CShottingU3Ed__9_tF7F3C440403C77D1DEAE9488B7D073304F82B6C8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Enemy/<Damaged>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDamagedU3Ed__11__ctor_m776303E53AEA06D86068D99387B002B05226EC5A (U3CDamagedU3Ed__11_t9A37EFE172E6E7E84D2CAA63B40884A35E7A10E0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Bullet::CheckLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_CheckLimit_mC03B03994B3FD61DF42471BB4514A70A7288228D (Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * __this, const RuntimeMethod* method);
// System.Void Bullet::Despawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_Despawn_m313600A636D182457C1DD511B46689F47B2F1495 (Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * __this, const RuntimeMethod* method);
// System.Void Bullet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet__ctor_mC7D931FE508342F413FBA79525A4819D4114B3EC (Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<PoolManager>()
inline PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * Object_FindObjectOfType_TisPoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7_mEEC433FC7474F2D14FE6AA31A26D4714785F356C (const RuntimeMethod* method)
{
	return ((  PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void GameManager::set_PoolManager(PoolManager)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_PoolManager_m7639FE628749BA4FBE2322CA0CBE3213FAFB4EFB_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * ___value0, const RuntimeMethod* method);
// System.Void GameManager::set_MaxPosition(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_MaxPosition_mAF31D2CBDC7D08C3791DAC343441132B58B2CC82_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void GameManager::set_MinPosition(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_MinPosition_m338E34493C6235788B3850D4F6FAC27D605788F5_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14 (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void GameManager::UdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_UdateUI_mC85B69F86DAFA4375CCC2A1399A2F812D92B81B3 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider2D>()
inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Magic::Rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Magic_Rotate_mFA67A9738D90AA3608644FC767C58323851AF8B9 (Magic_t0CC50A162DDF9C4C4549E05883368ACD19D8F36C * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Player::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Player_Fire_m4FE229BEDD63A9DFD9623E4B09581A32DA125E88 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Void Player::I_am()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_I_am_mEB30C8EA111BD62651670AAD71AA55242A62E3E2 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Void Player::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Move_mBA49290713053DFE90D02C9B5E38353A71C1E0C8 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m77E2F3719EC63690632731872A691FF6A27C589C (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::MoveTowards(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_MoveTowards_m1EC393CAB6ACD04D7A7856F02169D22FD61CDB89 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___current0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Player/<Fire>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireU3Ed__14__ctor_m43C9A721CDB5041D91908AFABECEDCE95D5C6C9C (U3CFireU3Ed__14_tE76C69BC1E345D96D8F5422E30F0B7BA407ADD90 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// System.Void SoundManager::SFXPlay(System.String,UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_SFXPlay_mABB8C91BDDF88454B9BD440466377C99FAC477A7 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, String_t* ___sfxName0, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void GameManager::Dead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Dead_mE95F9E77F108C5BF2D131A089EB8BE36AA972B9B (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Player::Damaged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Player_Damaged_m597853252FA71D9C82EAFCEC0781CBA4A5E3E1DA (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Void Player/<Damaged>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDamagedU3Ed__17__ctor_m54A714F395665DD537395C9D53DEE68FD0698EAE (U3CDamagedU3Ed__17_tB832BEEBB4DD5EDA6B8664FA17B5EE4E3B3CC3F7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AudioClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m2223F2281D853F847BE0048620BA6F61F26440E4 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void Boss::CircleFire(UnityEngine.GameObject,System.Single,System.Int32,UnityEngine.Transform,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss_CircleFire_mA7EFF362AE1DF31979EBCA9AE0237D8A6E833CA6 (Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bullet0, float ___oneShoting1, int32_t ___one2, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___bulletPosition3, int32_t ___a4, float ___addspeed5, const RuntimeMethod* method);
// System.Collections.IEnumerator Boss::MoveTo(UnityEngine.GameObject,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss_MoveTo_m510E6DCD3C69625AA8B17053B193C1EB58459B70 (Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___toPos1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Collections.IEnumerator Boss::PatternB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss_PatternB_m9E5221483223FBF6C4BFF2D95B8DBAF045984F27 (Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Boss::PatternC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss_PatternC_m8E7987E8F6E2CD0F288F5B06A875A982BA784759 (Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Boss::PatternE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss_PatternE_mE63F28CED6D6726F17A508DCF1B91E02779721B9 (Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Boss::PatternF()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss_PatternF_m2C03698AC2FFCAAF7865F97C88CC33AF0BC18255 (Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Collider2D>()
inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * GameObject_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m770EEE9CD21A968F23ABBBEF9BF3897DA14D085E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<Magic>()
inline Magic_t0CC50A162DDF9C4C4549E05883368ACD19D8F36C * GameObject_GetComponent_TisMagic_t0CC50A162DDF9C4C4549E05883368ACD19D8F36C_m95355C42A2997AD4E4E148754F3C41EE1BA67860 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Magic_t0CC50A162DDF9C4C4549E05883368ACD19D8F36C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Magic::Changesprite(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Magic_Changesprite_m59AE75B14F17C675A79BE5E049B8E64257870583 (Magic_t0CC50A162DDF9C4C4549E05883368ACD19D8F36C * __this, int32_t ___cat0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___stateName0, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject Enemy::Fire(UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Enemy_Fire_m635E8B9C975C4D57A7CC90535A295C0133EEC39B (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bullet0, int32_t ___a1, const RuntimeMethod* method);
// System.Void Player::InstantiateOnPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_InstantiateOnPool_m50562C36529398998CEEC6774E100FC8D0A1B20A (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
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
// System.Void Boss::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss_Start_m8DB2131537D11AC7361945199C18C06F6320876A (Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameManager = FindObjectOfType<GameManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0;
		L_0 = Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59(/*hidden argument*/Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59_RuntimeMethod_var);
		__this->set_gameManager_14(L_0);
		// ani = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1;
		L_1 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_ani_13(L_1);
		// StartCoroutine(AddTimeScore(0));
		RuntimeObject* L_2;
		L_2 = Boss_AddTimeScore_m0252415E7214E8B75096736A1D4CDDBFDABDA9D0(__this, 0, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		// StartCoroutine(PatternA());
		RuntimeObject* L_4;
		L_4 = Boss_PatternA_mEB1A431AFF00704E3B75FE1F1BB98CC749265A0A(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Boss::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss_Update_m7B73B59D0659578B1A73EB64D4586ADF8F594076 (Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * __this, const RuntimeMethod* method)
{
	{
		// Phase_star();
		Boss_Phase_star_mF33716F57F985C41723A1C53C17425D1718EA45C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Boss::AddScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss_AddScore_m5A3078A50053B7B35721305976E04073494624D8 (Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * __this, int32_t ___addsocre0, const RuntimeMethod* method)
{
	{
		// base.AddScore(addsocre);
		int32_t L_0 = ___addsocre0;
		GameManager_AddScore_mF7D9082C1C297FC0547D0DDE027410E708CEA226(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Boss::GameEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss_GameEnd_m13AFE6E8BF47F31A61DA4F2A284EBE5852D9A483 (Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * __this, const RuntimeMethod* method)
{
	{
		// base.GameEnd();
		GameManager_GameEnd_m69211289C2A19242B67388052C830AAC7A37EAF4(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Boss::Phase_star()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss_Phase_star_mF33716F57F985C41723A1C53C17425D1718EA45C (Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBullet_tF95A945B732B2B929938FB1028878BFBC0081724_m369B5E2F14BDAB6427DDEEECD19954C23617D0B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FBF26E76B1A339E90B1A2BD53F5053DB3042D79);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (HpBar.value <= 0)
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_HpBar_21();
		NullCheck(L_0);
		float L_1;
		L_1 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		if ((!(((float)L_1) <= ((float)(0.0f)))))
		{
			goto IL_00cc;
		}
	}
	{
		// if (isPhase2==false&&isPhase==true)
		bool L_2 = __this->get_isPhase2_29();
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		bool L_3 = __this->get_isPhase_27();
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// isPhase2 = true;
		__this->set_isPhase2_29((bool)1);
		// GameEnd();
		VirtActionInvoker0::Invoke(5 /* System.Void GameManager::GameEnd() */, __this);
	}

IL_0032:
	{
		// isMove = true;
		__this->set_isMove_28((bool)1);
		// isPhase = true;
		__this->set_isPhase_27((bool)1);
		// GameObject[] obj = GameObject.FindGameObjectsWithTag("Bullet_E");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4;
		L_4 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral9FBF26E76B1A339E90B1A2BD53F5053DB3042D79, /*hidden argument*/NULL);
		V_0 = L_4;
		// for (int i = 0; i < obj.Length; i++)
		V_1 = 0;
		goto IL_006e;
	}

IL_004f:
	{
		// StartCoroutine(obj[i].GetComponent<Bullet>().Srali());
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_9;
		L_9 = GameObject_GetComponent_TisBullet_tF95A945B732B2B929938FB1028878BFBC0081724_m369B5E2F14BDAB6427DDEEECD19954C23617D0B6(L_8, /*hidden argument*/GameObject_GetComponent_TisBullet_tF95A945B732B2B929938FB1028878BFBC0081724_m369B5E2F14BDAB6427DDEEECD19954C23617D0B6_RuntimeMethod_var);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = Bullet_Srali_m204EA46954B0B10B22B85D3FF7DB91914FC7232C(L_9, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_11;
		L_11 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_10, /*hidden argument*/NULL);
		// AddScore(5);
		VirtActionInvoker1< int32_t >::Invoke(4 /* System.Void GameManager::AddScore(System.Int32) */, __this, 5);
		// for (int i = 0; i < obj.Length; i++)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_006e:
	{
		// for (int i = 0; i < obj.Length; i++)
		int32_t L_13 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_004f;
		}
	}
	{
		goto IL_008d;
	}

IL_0076:
	{
		// HpBar.value += 0.1f;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_15 = __this->get_HpBar_21();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_16 = L_15;
		NullCheck(L_16);
		float L_17;
		L_17 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_16);
		NullCheck(L_16);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_16, ((float)il2cpp_codegen_add((float)L_17, (float)(0.100000001f))));
	}

IL_008d:
	{
		// while (HpBar.value < 100)
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_18 = __this->get_HpBar_21();
		NullCheck(L_18);
		float L_19;
		L_19 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_18);
		if ((((float)L_19) < ((float)(100.0f))))
		{
			goto IL_0076;
		}
	}
	{
		// StartCoroutine(PatternD());
		RuntimeObject* L_20;
		L_20 = Boss_PatternD_mF16453584470D0F9B39877FEE1E6BA708AAD3032(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_21;
		L_21 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_20, /*hidden argument*/NULL);
		// StartCoroutine(AddTimeScore(1));
		RuntimeObject* L_22;
		L_22 = Boss_AddTimeScore_m0252415E7214E8B75096736A1D4CDDBFDABDA9D0(__this, 1, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_23;
		L_23 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_22, /*hidden argument*/NULL);
		// damaged -= 0.15f;
		float L_24 = __this->get_damaged_22();
		__this->set_damaged_22(((float)il2cpp_codegen_subtract((float)L_24, (float)(0.150000006f))));
	}

IL_00cc:
	{
		// if(isMove)
		bool L_25 = __this->get_isMove_28();
		if (!L_25)
		{
			goto IL_00da;
		}
	}
	{
		// Phase_2Move();
		Boss_Phase_2Move_m6732CDBE8F99649D0A59297A194AE4FBC4AC870A(__this, /*hidden argument*/NULL);
	}

IL_00da:
	{
		// }
		return;
	}
}
// System.Void Boss::Phase_2Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss_Phase_2Move_m6732CDBE8F99649D0A59297A194AE4FBC4AC870A (Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float x = Mathf.Cos(Time.time * 1) * 2;
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_1;
		L_1 = cosf(((float)il2cpp_codegen_multiply((float)L_0, (float)(1.0f))));
		V_0 = ((float)il2cpp_codegen_multiply((float)L_1, (float)(2.0f)));
		// float y = Mathf.Sin(Time.time *2) * 1;
		float L_2;
		L_2 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_3;
		L_3 = sinf(((float)il2cpp_codegen_multiply((float)L_2, (float)(2.0f))));
		V_1 = ((float)il2cpp_codegen_multiply((float)L_3, (float)(1.0f)));
		// transform.position = new Vector3(x, y + 2.5f, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_5 = V_0;
		float L_6 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), L_5, ((float)il2cpp_codegen_add((float)L_6, (float)(2.5f))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_4, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Boss::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss_OnTriggerEnter2D_mD32AC8A2D12580C3817A0F21E2A3A8F9B70D4D9A (Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.tag == "Bullet")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_005f;
		}
	}
	{
		// collision.gameObject.SetActive(false);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = ___collision0;
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// collision.gameObject.transform.SetParent(gameManager.PoolManager.transform, false);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_5 = ___collision0;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_8 = __this->get_gameManager_14();
		NullCheck(L_8);
		PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * L_9;
		L_9 = GameManager_get_PoolManager_m6D739307662563512C61E7785E677AE86C308166_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_7, L_10, (bool)0, /*hidden argument*/NULL);
		// HpBar.value -= damaged;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_11 = __this->get_HpBar_21();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_12 = L_11;
		NullCheck(L_12);
		float L_13;
		L_13 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_12);
		float L_14 = __this->get_damaged_22();
		NullCheck(L_12);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_12, ((float)il2cpp_codegen_subtract((float)L_13, (float)L_14)));
		// AddScore(10);
		VirtActionInvoker1< int32_t >::Invoke(4 /* System.Void GameManager::AddScore(System.Int32) */, __this, ((int32_t)10));
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Boss::PatternA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss_PatternA_mEB1A431AFF00704E3B75FE1F1BB98CC749265A0A (Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPatternAU3Ed__25_t28745CEB3CDE89B25FABB9B1026360F76BCFA885_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPatternAU3Ed__25_t28745CEB3CDE89B25FABB9B1026360F76BCFA885 * L_0 = (U3CPatternAU3Ed__25_t28745CEB3CDE89B25FABB9B1026360F76BCFA885 *)il2cpp_codegen_object_new(U3CPatternAU3Ed__25_t28745CEB3CDE89B25FABB9B1026360F76BCFA885_il2cpp_TypeInfo_var);
		U3CPatternAU3Ed__25__ctor_m293FD07A6FA9E5A72A70F285AC8FBAA25BB2B345(L_0, 0, /*hidden argument*/NULL);
		U3CPatternAU3Ed__25_t28745CEB3CDE89B25FABB9B1026360F76BCFA885 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Boss::PatternB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss_PatternB_m9E5221483223FBF6C4BFF2D95B8DBAF045984F27 (Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPatternBU3Ed__26_t2CEB71F5110B1BB461CF4CC7C1509FEDE6714782_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPatternBU3Ed__26_t2CEB71F5110B1BB461CF4CC7C1509FEDE6714782 * L_0 = (U3CPatternBU3Ed__26_t2CEB71F5110B1BB461CF4CC7C1509FEDE6714782 *)il2cpp_codegen_object_new(U3CPatternBU3Ed__26_t2CEB71F5110B1BB461CF4CC7C1509FEDE6714782_il2cpp_TypeInfo_var);
		U3CPatternBU3Ed__26__ctor_m7740ED605DE7D079AB3538622B9D24B085293EF5(L_0, 0, /*hidden argument*/NULL);
		U3CPatternBU3Ed__26_t2CEB71F5110B1BB461CF4CC7C1509FEDE6714782 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Boss::PatternC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss_PatternC_m8E7987E8F6E2CD0F288F5B06A875A982BA784759 (Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPatternCU3Ed__27_t3A8A5112A6A731A35A3E2E988C34E9C5B225EB5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPatternCU3Ed__27_t3A8A5112A6A731A35A3E2E988C34E9C5B225EB5D * L_0 = (U3CPatternCU3Ed__27_t3A8A5112A6A731A35A3E2E988C34E9C5B225EB5D *)il2cpp_codegen_object_new(U3CPatternCU3Ed__27_t3A8A5112A6A731A35A3E2E988C34E9C5B225EB5D_il2cpp_TypeInfo_var);
		U3CPatternCU3Ed__27__ctor_m1CA26DE87E263599F37333396B094FD9BF2175B9(L_0, 0, /*hidden argument*/NULL);
		U3CPatternCU3Ed__27_t3A8A5112A6A731A35A3E2E988C34E9C5B225EB5D * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Boss::PatternD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss_PatternD_mF16453584470D0F9B39877FEE1E6BA708AAD3032 (Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPatternDU3Ed__28_t5823F6CE054BD0A929622F0A091C411A31F741B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPatternDU3Ed__28_t5823F6CE054BD0A929622F0A091C411A31F741B0 * L_0 = (U3CPatternDU3Ed__28_t5823F6CE054BD0A929622F0A091C411A31F741B0 *)il2cpp_codegen_object_new(U3CPatternDU3Ed__28_t5823F6CE054BD0A929622F0A091C411A31F741B0_il2cpp_TypeInfo_var);
		U3CPatternDU3Ed__28__ctor_m094E564F626A5A024F0EBEAEA5DD3C15D98D1047(L_0, 0, /*hidden argument*/NULL);
		U3CPatternDU3Ed__28_t5823F6CE054BD0A929622F0A091C411A31F741B0 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Boss::PatternE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss_PatternE_mE63F28CED6D6726F17A508DCF1B91E02779721B9 (Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPatternEU3Ed__29_t2C056D78C572E8729F568AFD66E5C57D9844F599_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPatternEU3Ed__29_t2C056D78C572E8729F568AFD66E5C57D9844F599 * L_0 = (U3CPatternEU3Ed__29_t2C056D78C572E8729F568AFD66E5C57D9844F599 *)il2cpp_codegen_object_new(U3CPatternEU3Ed__29_t2C056D78C572E8729F568AFD66E5C57D9844F599_il2cpp_TypeInfo_var);
		U3CPatternEU3Ed__29__ctor_m67F307BA33BD9573163C02F2B76F96BDD901B93C(L_0, 0, /*hidden argument*/NULL);
		U3CPatternEU3Ed__29_t2C056D78C572E8729F568AFD66E5C57D9844F599 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Boss::PatternF()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss_PatternF_m2C03698AC2FFCAAF7865F97C88CC33AF0BC18255 (Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPatternFU3Ed__30_tEF3418D9378F3DCD674C92CB3CEFFA423C172816_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPatternFU3Ed__30_tEF3418D9378F3DCD674C92CB3CEFFA423C172816 * L_0 = (U3CPatternFU3Ed__30_tEF3418D9378F3DCD674C92CB3CEFFA423C172816 *)il2cpp_codegen_object_new(U3CPatternFU3Ed__30_tEF3418D9378F3DCD674C92CB3CEFFA423C172816_il2cpp_TypeInfo_var);
		U3CPatternFU3Ed__30__ctor_mEFDCC296BD01112C480AC5A53C1FD791208E71B1(L_0, 0, /*hidden argument*/NULL);
		U3CPatternFU3Ed__30_tEF3418D9378F3DCD674C92CB3CEFFA423C172816 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Boss::CircleFire(UnityEngine.GameObject,System.Single,System.Int32,UnityEngine.Transform,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss_CircleFire_mA7EFF362AE1DF31979EBCA9AE0237D8A6E833CA6 (Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bullet0, float ___oneShoting1, int32_t ___one2, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___bulletPosition3, int32_t ___a4, float ___addspeed5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < oneShoting; i++)
		V_0 = 0;
		goto IL_0092;
	}

IL_0007:
	{
		// bullet = Fire(bullet,a);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___bullet0;
		int32_t L_1 = ___a4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Boss_Fire_mB2EAC4B5566D62F3C5C9829617A39CB22AD8C9E2(__this, L_0, L_1, /*hidden argument*/NULL);
		___bullet0 = L_2;
		// bullet.transform.position = bulletPosition.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = ___bullet0;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = ___bulletPosition3;
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_4, L_6, /*hidden argument*/NULL);
		// bullet.GetComponent<Rigidbody2D>().AddForce(new Vector2(addspeed * Mathf.Cos(Mathf.PI * 2 * i / oneShoting + one), addspeed * Mathf.Sin(Mathf.PI * i * 2 / oneShoting + one)));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = ___bullet0;
		NullCheck(L_7);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_8;
		L_8 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_7, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		float L_9 = ___addspeed5;
		int32_t L_10 = V_0;
		float L_11 = ___oneShoting1;
		int32_t L_12 = ___one2;
		float L_13;
		L_13 = cosf(((float)il2cpp_codegen_add((float)((float)((float)((float)il2cpp_codegen_multiply((float)(6.28318548f), (float)((float)((float)L_10))))/(float)L_11)), (float)((float)((float)L_12)))));
		float L_14 = ___addspeed5;
		int32_t L_15 = V_0;
		float L_16 = ___oneShoting1;
		int32_t L_17 = ___one2;
		float L_18;
		L_18 = sinf(((float)il2cpp_codegen_add((float)((float)((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(3.14159274f), (float)((float)((float)L_15)))), (float)(2.0f)))/(float)L_16)), (float)((float)((float)L_17)))));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_19), ((float)il2cpp_codegen_multiply((float)L_9, (float)L_13)), ((float)il2cpp_codegen_multiply((float)L_14, (float)L_18)), /*hidden argument*/NULL);
		NullCheck(L_8);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_8, L_19, /*hidden argument*/NULL);
		// bullet.transform.Rotate(new Vector3(0f, 0f, 360 * i / oneShoting - 90));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = ___bullet0;
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
		int32_t L_22 = V_0;
		float L_23 = ___oneShoting1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_24), (0.0f), (0.0f), ((float)il2cpp_codegen_subtract((float)((float)((float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)360), (int32_t)L_22))))/(float)L_23)), (float)(90.0f))), /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_21, L_24, /*hidden argument*/NULL);
		// for (int i = 0; i < oneShoting; i++)
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0092:
	{
		// for (int i = 0; i < oneShoting; i++)
		int32_t L_26 = V_0;
		float L_27 = ___oneShoting1;
		if ((((float)((float)((float)L_26))) < ((float)L_27)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.GameObject Boss::Fire(UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Boss_Fire_mB2EAC4B5566D62F3C5C9829617A39CB22AD8C9E2 (Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bullet0, int32_t ___a1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBullet_tF95A945B732B2B929938FB1028878BFBC0081724_m369B5E2F14BDAB6427DDEEECD19954C23617D0B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameManager.PoolManager.transform.childCount > 0)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_gameManager_14();
		NullCheck(L_0);
		PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * L_1;
		L_1 = GameManager_get_PoolManager_m6D739307662563512C61E7785E677AE86C308166_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		// bullet = gameManager.PoolManager.transform.GetChild(0).gameObject;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4 = __this->get_gameManager_14();
		NullCheck(L_4);
		PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * L_5;
		L_5 = GameManager_get_PoolManager_m6D739307662563512C61E7785E677AE86C308166_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_6, 0, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		___bullet0 = L_8;
		// bullet.transform.position = bulletPosition.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = ___bullet0;
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = __this->get_bulletPosition_19();
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_10, L_12, /*hidden argument*/NULL);
		// bullet.transform.SetParent(null);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = ___bullet0;
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_14, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/NULL);
		// Bullet bm = bullet.GetComponent<Bullet>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = ___bullet0;
		NullCheck(L_15);
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_16;
		L_16 = GameObject_GetComponent_TisBullet_tF95A945B732B2B929938FB1028878BFBC0081724_m369B5E2F14BDAB6427DDEEECD19954C23617D0B6(L_15, /*hidden argument*/GameObject_GetComponent_TisBullet_tF95A945B732B2B929938FB1028878BFBC0081724_m369B5E2F14BDAB6427DDEEECD19954C23617D0B6_RuntimeMethod_var);
		// bm.SetSprite(a);
		int32_t L_17 = ___a1;
		NullCheck(L_16);
		Bullet_SetSprite_m08A3E01DB9F3F13D788B620D70FECF898257BA28(L_16, L_17, /*hidden argument*/NULL);
		// bullet.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = ___bullet0;
		NullCheck(L_18);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_18, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_00a3;
	}

IL_006c:
	{
		// bullet = Instantiate(bulletPrefab, bulletPosition.position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_bulletPrefab_15();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = __this->get_bulletPosition_19();
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_22;
		L_22 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_19, L_21, L_22, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		___bullet0 = L_23;
		// bullet.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = ___bullet0;
		NullCheck(L_24);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_24, (bool)0, /*hidden argument*/NULL);
		// Bullet bm = bullet.GetComponent<Bullet>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = ___bullet0;
		NullCheck(L_25);
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_26;
		L_26 = GameObject_GetComponent_TisBullet_tF95A945B732B2B929938FB1028878BFBC0081724_m369B5E2F14BDAB6427DDEEECD19954C23617D0B6(L_25, /*hidden argument*/GameObject_GetComponent_TisBullet_tF95A945B732B2B929938FB1028878BFBC0081724_m369B5E2F14BDAB6427DDEEECD19954C23617D0B6_RuntimeMethod_var);
		// bm.SetSprite(a);
		int32_t L_27 = ___a1;
		NullCheck(L_26);
		Bullet_SetSprite_m08A3E01DB9F3F13D788B620D70FECF898257BA28(L_26, L_27, /*hidden argument*/NULL);
		// bullet.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = ___bullet0;
		NullCheck(L_28);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_28, (bool)1, /*hidden argument*/NULL);
	}

IL_00a3:
	{
		// if (bullet != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = ___bullet0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_29, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00b8;
		}
	}
	{
		// bullet.transform.SetParent(null);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = ___bullet0;
		NullCheck(L_31);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_32, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/NULL);
	}

IL_00b8:
	{
		// return bullet;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = ___bullet0;
		return L_33;
	}
}
// System.Collections.IEnumerator Boss::MoveTo(UnityEngine.GameObject,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss_MoveTo_m510E6DCD3C69625AA8B17053B193C1EB58459B70 (Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___toPos1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMoveToU3Ed__33_t55F90767C706DFE31BDD0F94A60426D168A3C65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMoveToU3Ed__33_t55F90767C706DFE31BDD0F94A60426D168A3C65E * L_0 = (U3CMoveToU3Ed__33_t55F90767C706DFE31BDD0F94A60426D168A3C65E *)il2cpp_codegen_object_new(U3CMoveToU3Ed__33_t55F90767C706DFE31BDD0F94A60426D168A3C65E_il2cpp_TypeInfo_var);
		U3CMoveToU3Ed__33__ctor_mE6F0091AF997117B8A803B7D97567714C7B9A9AE(L_0, 0, /*hidden argument*/NULL);
		U3CMoveToU3Ed__33_t55F90767C706DFE31BDD0F94A60426D168A3C65E * L_1 = L_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ___a0;
		NullCheck(L_1);
		L_1->set_a_2(L_2);
		U3CMoveToU3Ed__33_t55F90767C706DFE31BDD0F94A60426D168A3C65E * L_3 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___toPos1;
		NullCheck(L_3);
		L_3->set_toPos_3(L_4);
		return L_3;
	}
}
// System.Collections.IEnumerator Boss::AddTimeScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss_AddTimeScore_m0252415E7214E8B75096736A1D4CDDBFDABDA9D0 (Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * __this, int32_t ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAddTimeScoreU3Ed__34_tC58DEE55F7328D127BC26C58999917D21648C761_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAddTimeScoreU3Ed__34_tC58DEE55F7328D127BC26C58999917D21648C761 * L_0 = (U3CAddTimeScoreU3Ed__34_tC58DEE55F7328D127BC26C58999917D21648C761 *)il2cpp_codegen_object_new(U3CAddTimeScoreU3Ed__34_tC58DEE55F7328D127BC26C58999917D21648C761_il2cpp_TypeInfo_var);
		U3CAddTimeScoreU3Ed__34__ctor_mFDB48EA686C4E098576421FA06425D542F57495C(L_0, 0, /*hidden argument*/NULL);
		U3CAddTimeScoreU3Ed__34_tC58DEE55F7328D127BC26C58999917D21648C761 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CAddTimeScoreU3Ed__34_tC58DEE55F7328D127BC26C58999917D21648C761 * L_2 = L_1;
		int32_t L_3 = ___a0;
		NullCheck(L_2);
		L_2->set_a_3(L_3);
		return L_2;
	}
}
// System.Void Boss::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss__ctor_mCEB1D7BFC2C85DF7CE281A5BB76D0D55ADFB089F (Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * __this, const RuntimeMethod* method)
{
	{
		// private float damaged = 0.5f;
		__this->set_damaged_22((0.5f));
		// private float moveSpeed = 0.1f;
		__this->set_moveSpeed_23((0.100000001f));
		// private float moveArea = 0.1f;
		__this->set_moveArea_24((0.100000001f));
		// private float speed = 0.1f;
		__this->set_speed_25((0.100000001f));
		// private float oneShoting = 0.5f;
		__this->set_oneShoting_26((0.5f));
		GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D(__this, /*hidden argument*/NULL);
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
// System.Void Bullet::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_Awake_m2D77C2A3CF11F66E86FF074B8C4397C0E3DE2004 (Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameManager = FindObjectOfType<GameManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0;
		L_0 = Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59(/*hidden argument*/Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59_RuntimeMethod_var);
		__this->set_gameManager_5(L_0);
		// spriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1;
		L_1 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_spriteRenderer_4(L_1);
		// ani = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2;
		L_2 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_ani_6(L_2);
		// }
		return;
	}
}
// System.Void Bullet::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_Start_m58181B46F80FE1ABECE1AFF455C253B51B7EB0E4 (Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Bullet::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_Update_mB82408CA535D8533168045E7C0321090448B596B (Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * __this, const RuntimeMethod* method)
{
	{
		// transform.Translate(Vector2.up * speed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		float L_2 = __this->get_speed_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_1, L_2, /*hidden argument*/NULL);
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_3, L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_0, L_6, /*hidden argument*/NULL);
		// CheckLimit();
		VirtActionInvoker0::Invoke(4 /* System.Void Bullet::CheckLimit() */, __this);
		// }
		return;
	}
}
// System.Void Bullet::CheckLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_CheckLimit_mC03B03994B3FD61DF42471BB4514A70A7288228D (Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * __this, const RuntimeMethod* method)
{
	{
		// if (transform.position.y > gameManager.MaxPosition.y + 2f)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_3 = __this->get_gameManager_5();
		NullCheck(L_3);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = GameManager_get_MaxPosition_m39454AABAA11B1EDBC2ECD786BF9F9E2A3F629BB_inline(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_1();
		if ((!(((float)L_2) > ((float)((float)il2cpp_codegen_add((float)L_5, (float)(2.0f)))))))
		{
			goto IL_002e;
		}
	}
	{
		// Despawn();
		VirtActionInvoker0::Invoke(5 /* System.Void Bullet::Despawn() */, __this);
	}

IL_002e:
	{
		// if (transform.position.y < gameManager.MinPosition.y - 2f)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_y_3();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_9 = __this->get_gameManager_5();
		NullCheck(L_9);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = GameManager_get_MinPosition_mB50D1C8AA1A9FA284172ACA40CA9C09082581FC8_inline(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_1();
		if ((!(((float)L_8) < ((float)((float)il2cpp_codegen_subtract((float)L_11, (float)(2.0f)))))))
		{
			goto IL_005c;
		}
	}
	{
		// Despawn();
		VirtActionInvoker0::Invoke(5 /* System.Void Bullet::Despawn() */, __this);
	}

IL_005c:
	{
		// if (transform.position.x > gameManager.MaxPosition.x + 2f)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_x_2();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_15 = __this->get_gameManager_5();
		NullCheck(L_15);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		L_16 = GameManager_get_MaxPosition_m39454AABAA11B1EDBC2ECD786BF9F9E2A3F629BB_inline(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_x_0();
		if ((!(((float)L_14) > ((float)((float)il2cpp_codegen_add((float)L_17, (float)(2.0f)))))))
		{
			goto IL_008a;
		}
	}
	{
		// Despawn();
		VirtActionInvoker0::Invoke(5 /* System.Void Bullet::Despawn() */, __this);
	}

IL_008a:
	{
		// if (transform.position.x < gameManager.MinPosition.x - 2f)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_x_2();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_21 = __this->get_gameManager_5();
		NullCheck(L_21);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22;
		L_22 = GameManager_get_MinPosition_mB50D1C8AA1A9FA284172ACA40CA9C09082581FC8_inline(L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_x_0();
		if ((!(((float)L_20) < ((float)((float)il2cpp_codegen_subtract((float)L_23, (float)(2.0f)))))))
		{
			goto IL_00b8;
		}
	}
	{
		// Despawn();
		VirtActionInvoker0::Invoke(5 /* System.Void Bullet::Despawn() */, __this);
	}

IL_00b8:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Bullet::Srali()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Bullet_Srali_m204EA46954B0B10B22B85D3FF7DB91914FC7232C (Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSraliU3Ed__9_t1289A74D5B6E12DCCA8A9F9E98B086A1E44FDA0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSraliU3Ed__9_t1289A74D5B6E12DCCA8A9F9E98B086A1E44FDA0A * L_0 = (U3CSraliU3Ed__9_t1289A74D5B6E12DCCA8A9F9E98B086A1E44FDA0A *)il2cpp_codegen_object_new(U3CSraliU3Ed__9_t1289A74D5B6E12DCCA8A9F9E98B086A1E44FDA0A_il2cpp_TypeInfo_var);
		U3CSraliU3Ed__9__ctor_m97FD948693D7EDE63DD66107DD81A40A328C4703(L_0, 0, /*hidden argument*/NULL);
		U3CSraliU3Ed__9_t1289A74D5B6E12DCCA8A9F9E98B086A1E44FDA0A * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Bullet::Despawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_Despawn_m313600A636D182457C1DD511B46689F47B2F1495 (Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * __this, const RuntimeMethod* method)
{
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// transform.SetParent(gameManager.PoolManager.transform, false);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_2 = __this->get_gameManager_5();
		NullCheck(L_2);
		PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * L_3;
		L_3 = GameManager_get_PoolManager_m6D739307662563512C61E7785E677AE86C308166_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_1, L_4, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Bullet::SetSprite(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_SetSprite_m08A3E01DB9F3F13D788B620D70FECF898257BA28 (Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * __this, int32_t ___cat0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FBF26E76B1A339E90B1A2BD53F5053DB3042D79);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spriteRenderer.sprite = sprites[cat];
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_spriteRenderer_4();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_1 = __this->get_sprites_7();
		int32_t L_2 = ___cat0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_0);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_0, L_4, /*hidden argument*/NULL);
		// if (cat == 1)
		int32_t L_5 = ___cat0;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0074;
		}
	}
	{
		// gameObject.tag = "Bullet";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE(L_6, _stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0, /*hidden argument*/NULL);
		// transform.eulerAngles = new Vector3(transform.rotation.x, transform.rotation.y, 0f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_x_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		L_12 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_14), L_10, L_13, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_7, L_14, /*hidden argument*/NULL);
		// speed = 20f;
		__this->set_speed_8((20.0f));
		// gameObject.layer = 6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6(L_15, 6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0074:
	{
		// transform.eulerAngles = new Vector3(transform.rotation.x, transform.rotation.y, 0f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18;
		L_18 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_x_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_21;
		L_21 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_20, /*hidden argument*/NULL);
		float L_22 = L_21.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), L_19, L_22, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_16, L_23, /*hidden argument*/NULL);
		// gameObject.tag = "Bullet_E";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE(L_24, _stringLiteral9FBF26E76B1A339E90B1A2BD53F5053DB3042D79, /*hidden argument*/NULL);
		// gameObject.layer = 7;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6(L_25, 7, /*hidden argument*/NULL);
		// speed = 0;
		__this->set_speed_8((0.0f));
		// }
		return;
	}
}
// System.Void Bullet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet__ctor_mC7D931FE508342F413FBA79525A4819D4114B3EC (Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * __this, const RuntimeMethod* method)
{
	{
		// protected float speed = 0.5f;
		__this->set_speed_8((0.5f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_m9FA35B427F2B9FDFD390E9812C2556775C62CB02 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameManager = FindObjectOfType<GameManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0;
		L_0 = Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59(/*hidden argument*/Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59_RuntimeMethod_var);
		__this->set_gameManager_6(L_0);
		// spriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1;
		L_1 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_spriteRenderer_7(L_1);
		// StartCoroutine(Shotting());
		RuntimeObject* L_2;
		L_2 = Enemy_Shotting_mAB188ADDB086F2F3019C547A656F5810FFDECCE3(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Update_mA01EE7AF5D3B97687752E9D22BECB4A3E13F8FD2 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// transform.Rotate(new Vector3(transform.rotation.x, transform.rotation.y, 53 * Time.deltaTime));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2;
		L_2 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_1();
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), L_3, L_6, ((float)il2cpp_codegen_multiply((float)(53.0f), (float)L_7)), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_0, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnTriggerEnter2D_mDECB4702894034560FBA7606CDC45A5B12EB0B38 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.tag == "Bullet")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_005a;
		}
	}
	{
		// collision.gameObject.SetActive(false);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = ___collision0;
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// collision.gameObject.transform.SetParent(gameManager.PoolManager.transform, false);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_5 = ___collision0;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_8 = __this->get_gameManager_6();
		NullCheck(L_8);
		PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * L_9;
		L_9 = GameManager_get_PoolManager_m6D739307662563512C61E7785E677AE86C308166_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_7, L_10, (bool)0, /*hidden argument*/NULL);
		// StartCoroutine(Damaged());
		RuntimeObject* L_11;
		L_11 = Enemy_Damaged_mC5044FF9CAC3E3BDFE34C1F732735140C753D938(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_12;
		L_12 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_11, /*hidden argument*/NULL);
		// hp--;
		int32_t L_13 = __this->get_hp_8();
		__this->set_hp_8(((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)));
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Enemy::Shotting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enemy_Shotting_mAB188ADDB086F2F3019C547A656F5810FFDECCE3 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShottingU3Ed__9_tF7F3C440403C77D1DEAE9488B7D073304F82B6C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShottingU3Ed__9_tF7F3C440403C77D1DEAE9488B7D073304F82B6C8 * L_0 = (U3CShottingU3Ed__9_tF7F3C440403C77D1DEAE9488B7D073304F82B6C8 *)il2cpp_codegen_object_new(U3CShottingU3Ed__9_tF7F3C440403C77D1DEAE9488B7D073304F82B6C8_il2cpp_TypeInfo_var);
		U3CShottingU3Ed__9__ctor_m551FF20B689683CD560034C00367ED28BA0EFF22(L_0, 0, /*hidden argument*/NULL);
		U3CShottingU3Ed__9_tF7F3C440403C77D1DEAE9488B7D073304F82B6C8 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// UnityEngine.GameObject Enemy::Fire(UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Enemy_Fire_m635E8B9C975C4D57A7CC90535A295C0133EEC39B (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bullet0, int32_t ___a1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBullet_tF95A945B732B2B929938FB1028878BFBC0081724_m369B5E2F14BDAB6427DDEEECD19954C23617D0B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameManager.PoolManager.transform.childCount > 0)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_gameManager_6();
		NullCheck(L_0);
		PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * L_1;
		L_1 = GameManager_get_PoolManager_m6D739307662563512C61E7785E677AE86C308166_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		// bullet = gameManager.PoolManager.transform.GetChild(0).gameObject;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4 = __this->get_gameManager_6();
		NullCheck(L_4);
		PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * L_5;
		L_5 = GameManager_get_PoolManager_m6D739307662563512C61E7785E677AE86C308166_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_6, 0, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		___bullet0 = L_8;
		// bullet.transform.position = bulletPosition.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = ___bullet0;
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = __this->get_bulletPosition_5();
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_10, L_12, /*hidden argument*/NULL);
		// bullet.transform.SetParent(null);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = ___bullet0;
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_14, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/NULL);
		// Bullet bm = bullet.GetComponent<Bullet>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = ___bullet0;
		NullCheck(L_15);
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_16;
		L_16 = GameObject_GetComponent_TisBullet_tF95A945B732B2B929938FB1028878BFBC0081724_m369B5E2F14BDAB6427DDEEECD19954C23617D0B6(L_15, /*hidden argument*/GameObject_GetComponent_TisBullet_tF95A945B732B2B929938FB1028878BFBC0081724_m369B5E2F14BDAB6427DDEEECD19954C23617D0B6_RuntimeMethod_var);
		// bm.SetSprite(a);
		int32_t L_17 = ___a1;
		NullCheck(L_16);
		Bullet_SetSprite_m08A3E01DB9F3F13D788B620D70FECF898257BA28(L_16, L_17, /*hidden argument*/NULL);
		// bullet.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = ___bullet0;
		NullCheck(L_18);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_18, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_00a3;
	}

IL_006c:
	{
		// bullet = Instantiate(bulletPrefab, bulletPosition.position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_bulletPrefab_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = __this->get_bulletPosition_5();
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_22;
		L_22 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_19, L_21, L_22, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		___bullet0 = L_23;
		// bullet.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = ___bullet0;
		NullCheck(L_24);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_24, (bool)0, /*hidden argument*/NULL);
		// Bullet bm = bullet.GetComponent<Bullet>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = ___bullet0;
		NullCheck(L_25);
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_26;
		L_26 = GameObject_GetComponent_TisBullet_tF95A945B732B2B929938FB1028878BFBC0081724_m369B5E2F14BDAB6427DDEEECD19954C23617D0B6(L_25, /*hidden argument*/GameObject_GetComponent_TisBullet_tF95A945B732B2B929938FB1028878BFBC0081724_m369B5E2F14BDAB6427DDEEECD19954C23617D0B6_RuntimeMethod_var);
		// bm.SetSprite(a);
		int32_t L_27 = ___a1;
		NullCheck(L_26);
		Bullet_SetSprite_m08A3E01DB9F3F13D788B620D70FECF898257BA28(L_26, L_27, /*hidden argument*/NULL);
		// bullet.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = ___bullet0;
		NullCheck(L_28);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_28, (bool)1, /*hidden argument*/NULL);
	}

IL_00a3:
	{
		// if (bullet != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = ___bullet0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_29, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00b8;
		}
	}
	{
		// bullet.transform.SetParent(null);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = ___bullet0;
		NullCheck(L_31);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_32, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/NULL);
	}

IL_00b8:
	{
		// return bullet;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = ___bullet0;
		return L_33;
	}
}
// System.Collections.IEnumerator Enemy::Damaged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enemy_Damaged_mC5044FF9CAC3E3BDFE34C1F732735140C753D938 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDamagedU3Ed__11_t9A37EFE172E6E7E84D2CAA63B40884A35E7A10E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDamagedU3Ed__11_t9A37EFE172E6E7E84D2CAA63B40884A35E7A10E0 * L_0 = (U3CDamagedU3Ed__11_t9A37EFE172E6E7E84D2CAA63B40884A35E7A10E0 *)il2cpp_codegen_object_new(U3CDamagedU3Ed__11_t9A37EFE172E6E7E84D2CAA63B40884A35E7A10E0_il2cpp_TypeInfo_var);
		U3CDamagedU3Ed__11__ctor_m776303E53AEA06D86068D99387B002B05226EC5A(L_0, 0, /*hidden argument*/NULL);
		U3CDamagedU3Ed__11_t9A37EFE172E6E7E84D2CAA63B40884A35E7A10E0 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_m3C82F8269DE4132408E15B523907244771640734 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// private int hp = 100;
		__this->set_hp_8(((int32_t)100));
		// private float speed = 0.5f;
		__this->set_speed_9((0.5f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void EnemyBullet::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBullet_Start_m63FE8026E379396D67169F6CB7CE127E56402105 (EnemyBullet_t3AA58ACF2637B406675B7E16087A796F1FB2E865 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void EnemyBullet::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBullet_Update_m7C71216AA0458C6A838064CC9D87EF9F6E96DCB5 (EnemyBullet_t3AA58ACF2637B406675B7E16087A796F1FB2E865 * __this, const RuntimeMethod* method)
{
	{
		// transform.Translate(Vector2.up * speed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		float L_2 = ((Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 *)__this)->get_speed_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_1, L_2, /*hidden argument*/NULL);
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_3, L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_0, L_6, /*hidden argument*/NULL);
		// CheckLimit();
		VirtActionInvoker0::Invoke(4 /* System.Void Bullet::CheckLimit() */, __this);
		// }
		return;
	}
}
// System.Void EnemyBullet::CheckLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBullet_CheckLimit_m0E2174DCFDA0E725BD68498A279B369C50A08EA7 (EnemyBullet_t3AA58ACF2637B406675B7E16087A796F1FB2E865 * __this, const RuntimeMethod* method)
{
	{
		// base.CheckLimit();
		Bullet_CheckLimit_mC03B03994B3FD61DF42471BB4514A70A7288228D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyBullet::Despawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBullet_Despawn_mB63493D87607CF807C404BF0AD5A128F0889E599 (EnemyBullet_t3AA58ACF2637B406675B7E16087A796F1FB2E865 * __this, const RuntimeMethod* method)
{
	{
		// base.Despawn();
		Bullet_Despawn_m313600A636D182457C1DD511B46689F47B2F1495(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyBullet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBullet__ctor_m04AD7D8C44F99D4158DDEBAA06C29912B54F9624 (EnemyBullet_t3AA58ACF2637B406675B7E16087A796F1FB2E865 * __this, const RuntimeMethod* method)
{
	{
		Bullet__ctor_mC7D931FE508342F413FBA79525A4819D4114B3EC(__this, /*hidden argument*/NULL);
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
// UnityEngine.Vector2 GameManager::get_MaxPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GameManager_get_MaxPosition_m39454AABAA11B1EDBC2ECD786BF9F9E2A3F629BB (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 MaxPosition { get; private set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CMaxPositionU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void GameManager::set_MaxPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_MaxPosition_mAF31D2CBDC7D08C3791DAC343441132B58B2CC82 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2 MaxPosition { get; private set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_U3CMaxPositionU3Ek__BackingField_4(L_0);
		return;
	}
}
// UnityEngine.Vector2 GameManager::get_MinPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GameManager_get_MinPosition_mB50D1C8AA1A9FA284172ACA40CA9C09082581FC8 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 MinPosition { get; private set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CMinPositionU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void GameManager::set_MinPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_MinPosition_m338E34493C6235788B3850D4F6FAC27D605788F5 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2 MinPosition { get; private set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_U3CMinPositionU3Ek__BackingField_5(L_0);
		return;
	}
}
// PoolManager GameManager::get_PoolManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * GameManager_get_PoolManager_m6D739307662563512C61E7785E677AE86C308166 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// public PoolManager PoolManager { get; private set; }
		PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * L_0 = __this->get_U3CPoolManagerU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void GameManager::set_PoolManager(PoolManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_PoolManager_m7639FE628749BA4FBE2322CA0CBE3213FAFB4EFB (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * ___value0, const RuntimeMethod* method)
{
	{
		// public PoolManager PoolManager { get; private set; }
		PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * L_0 = ___value0;
		__this->set_U3CPoolManagerU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m22F42B2A82708B10F652CAD8F2E0A4767110FF30 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7_mEEC433FC7474F2D14FE6AA31A26D4714785F356C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB1EA0D19EDD2C3A2F60B0C36AD599E6C289DB3F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PoolManager = FindObjectOfType<PoolManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * L_0;
		L_0 = Object_FindObjectOfType_TisPoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7_mEEC433FC7474F2D14FE6AA31A26D4714785F356C(/*hidden argument*/Object_FindObjectOfType_TisPoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7_mEEC433FC7474F2D14FE6AA31A26D4714785F356C_RuntimeMethod_var);
		GameManager_set_PoolManager_m7639FE628749BA4FBE2322CA0CBE3213FAFB4EFB_inline(__this, L_0, /*hidden argument*/NULL);
		// spriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1;
		L_1 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_spriteRenderer_7(L_1);
		// MaxPosition = new Vector2(2.5f, 4.5f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_2), (2.5f), (4.5f), /*hidden argument*/NULL);
		GameManager_set_MaxPosition_mAF31D2CBDC7D08C3791DAC343441132B58B2CC82_inline(__this, L_2, /*hidden argument*/NULL);
		// MinPosition = new Vector2(-2.5f, -5f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_3), (-2.5f), (-5.0f), /*hidden argument*/NULL);
		GameManager_set_MinPosition_m338E34493C6235788B3850D4F6FAC27D605788F5_inline(__this, L_3, /*hidden argument*/NULL);
		// highscore = PlayerPrefs.GetInt("HIGHSCORE", 0);
		int32_t L_4;
		L_4 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralAB1EA0D19EDD2C3A2F60B0C36AD599E6C289DB3F, 0, /*hidden argument*/NULL);
		__this->set_highscore_9(L_4);
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_mC9303BA7C3117BD861F49F8E36151CC52117E6C1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GameManager::Dead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Dead_mE95F9E77F108C5BF2D131A089EB8BE36AA972B9B (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// life--;
		int32_t L_0 = __this->get_life_11();
		__this->set_life_11(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// if(life < 0)
		int32_t L_1 = __this->get_life_11();
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		// SceneManager.LoadScene("GameOver");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0022:
	{
		// playerHp[life].color = new Color(1, 1, 1, 0);
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_2 = __this->get_playerHp_12();
		int32_t L_3 = __this->get_life_11();
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_6), (1.0f), (1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// }
		return;
	}
}
// System.Void GameManager::AddScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddScore_mF7D9082C1C297FC0547D0DDE027410E708CEA226 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___addsocre0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B4DE4801ED1C6780EFB611D3F8D0FD5DAF29390);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score += addsocre;
		int32_t L_0 = __this->get_score_10();
		int32_t L_1 = ___addsocre0;
		__this->set_score_10(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// textScore.text = string.Format("Score\n{0}", score);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_textScore_8();
		int32_t L_3 = __this->get_score_10();
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral5B4DE4801ED1C6780EFB611D3F8D0FD5DAF29390, L_5, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_6);
		// UdateUI();
		GameManager_UdateUI_mC85B69F86DAFA4375CCC2A1399A2F812D92B81B3(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::GameEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameEnd_m69211289C2A19242B67388052C830AAC7A37EAF4 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADE3A5294FA17AC9817CF668B5F1FA54B374187D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("GameEnd");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralADE3A5294FA17AC9817CF668B5F1FA54B374187D, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::UdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_UdateUI_mC85B69F86DAFA4375CCC2A1399A2F812D92B81B3 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral780088735D08F01D63A81A5B157E00A8C6D5285C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB1EA0D19EDD2C3A2F60B0C36AD599E6C289DB3F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("SCORE",score);
		int32_t L_0 = __this->get_score_10();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral780088735D08F01D63A81A5B157E00A8C6D5285C, L_0, /*hidden argument*/NULL);
		// if (score > highscore)
		int32_t L_1 = __this->get_score_10();
		int32_t L_2 = __this->get_highscore_9();
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_003a;
		}
	}
	{
		// highscore = score;
		int32_t L_3 = __this->get_score_10();
		__this->set_highscore_9(L_3);
		// PlayerPrefs.SetInt("HIGHSCORE", highscore);
		int32_t L_4 = __this->get_highscore_9();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralAB1EA0D19EDD2C3A2F60B0C36AD599E6C289DB3F, L_4, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// private int life = 3;
		__this->set_life_11(3);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Magic::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Magic_Awake_m19B2FDF03655D285164253692CEB508EE81BA9C5 (Magic_t0CC50A162DDF9C4C4549E05883368ACD19D8F36C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// col = GetComponent<Collider2D>();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0;
		L_0 = Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30(__this, /*hidden argument*/Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30_RuntimeMethod_var);
		__this->set_col_5(L_0);
		// spriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1;
		L_1 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_spriteRenderer_4(L_1);
		// if (magicNumber == 1)
		int32_t L_2 = __this->get_magicNumber_7();
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0039;
		}
	}
	{
		// spriteRenderer.enabled = false;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_3 = __this->get_spriteRenderer_4();
		NullCheck(L_3);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_3, (bool)0, /*hidden argument*/NULL);
		// col.enabled = false;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_4 = __this->get_col_5();
		NullCheck(L_4);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_4, (bool)0, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void Magic::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Magic_Update_m9BEF6FAE333411588FACDFC8AC99B1C8057302A4 (Magic_t0CC50A162DDF9C4C4549E05883368ACD19D8F36C * __this, const RuntimeMethod* method)
{
	{
		// if(magicNumber==0)
		int32_t L_0 = __this->get_magicNumber_7();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Rotate();
		Magic_Rotate_mFA67A9738D90AA3608644FC767C58323851AF8B9(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void Magic::Rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Magic_Rotate_mFA67A9738D90AA3608644FC767C58323851AF8B9 (Magic_t0CC50A162DDF9C4C4549E05883368ACD19D8F36C * __this, const RuntimeMethod* method)
{
	{
		// transform.Rotate(new Vector3(transform.rotation.x, transform.rotation.y, speed * Time.deltaTime));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2;
		L_2 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_1();
		float L_7 = __this->get_speed_6();
		float L_8;
		L_8 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), L_3, L_6, ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_0, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Magic::Changesprite(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Magic_Changesprite_m59AE75B14F17C675A79BE5E049B8E64257870583 (Magic_t0CC50A162DDF9C4C4549E05883368ACD19D8F36C * __this, int32_t ___cat0, const RuntimeMethod* method)
{
	{
		// spriteRenderer.sprite = sprites[cat];
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_spriteRenderer_4();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_1 = __this->get_sprites_8();
		int32_t L_2 = ___cat0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_0);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_0, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Magic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Magic__ctor_m886D6B87C69D82E60EB1B81D082A87F220F13697 (Magic_t0CC50A162DDF9C4C4549E05883368ACD19D8F36C * __this, const RuntimeMethod* method)
{
	{
		// private float speed = 0.5f;
		__this->set_speed_6((0.5f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mBD692B64AAC791B93A589E7D3596F36787EAF021 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_spriteRenderer_9(L_0);
		// gameManager = FindObjectOfType<GameManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1;
		L_1 = Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59(/*hidden argument*/Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59_RuntimeMethod_var);
		__this->set_gameManager_8(L_1);
		// StartCoroutine(Fire());
		RuntimeObject* L_2;
		L_2 = Player_Fire_m4FE229BEDD63A9DFD9623E4B09581A32DA125E88(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_mBA04F1D6FE3C18037EA95DFAEEAA9977BFD49CD3 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// I_am();
		Player_I_am_mEB30C8EA111BD62651670AAD71AA55242A62E3E2(__this, /*hidden argument*/NULL);
		// Move();
		Player_Move_mBA49290713053DFE90D02C9B5E38353A71C1E0C8(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::I_am()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_I_am_mEB30C8EA111BD62651670AAD71AA55242A62E3E2 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CD979583B209CE71603EFC4A398E6A9EFA8D872);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Input.GetKey("h"))
		bool L_0;
		L_0 = Input_GetKey_m77E2F3719EC63690632731872A691FF6A27C589C(_stringLiteral0CD979583B209CE71603EFC4A398E6A9EFA8D872, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// im = true;
		__this->set_im_12((bool)1);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Player::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Move_mBA49290713053DFE90D02C9B5E38353A71C1E0C8 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetMouseButton(0))
		bool L_0;
		L_0 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_00d2;
		}
	}
	{
		// targetPosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1;
		L_1 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_1, L_2, /*hidden argument*/NULL);
		__this->set_targetPosition_7(L_3);
		// targetPosition.x = Mathf.Clamp(targetPosition.x, gameManager.MinPosition.x, gameManager.MaxPosition.x);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = __this->get_address_of_targetPosition_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_targetPosition_7();
		float L_6 = L_5->get_x_2();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_7 = __this->get_gameManager_8();
		NullCheck(L_7);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = GameManager_get_MinPosition_mB50D1C8AA1A9FA284172ACA40CA9C09082581FC8_inline(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_0();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_10 = __this->get_gameManager_8();
		NullCheck(L_10);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = GameManager_get_MaxPosition_m39454AABAA11B1EDBC2ECD786BF9F9E2A3F629BB_inline(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_x_0();
		float L_13;
		L_13 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_6, L_9, L_12, /*hidden argument*/NULL);
		L_4->set_x_2(L_13);
		// targetPosition.y = Mathf.Clamp(targetPosition.y, gameManager.MinPosition.y, gameManager.MaxPosition.y);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_14 = __this->get_address_of_targetPosition_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_15 = __this->get_address_of_targetPosition_7();
		float L_16 = L_15->get_y_3();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_17 = __this->get_gameManager_8();
		NullCheck(L_17);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		L_18 = GameManager_get_MinPosition_mB50D1C8AA1A9FA284172ACA40CA9C09082581FC8_inline(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_y_1();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_20 = __this->get_gameManager_8();
		NullCheck(L_20);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21;
		L_21 = GameManager_get_MaxPosition_m39454AABAA11B1EDBC2ECD786BF9F9E2A3F629BB_inline(L_20, /*hidden argument*/NULL);
		float L_22 = L_21.get_y_1();
		float L_23;
		L_23 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_16, L_19, L_22, /*hidden argument*/NULL);
		L_14->set_y_3(L_23);
		// transform.localPosition = Vector2.MoveTowards(transform.localPosition, targetPosition, speed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_25, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27;
		L_27 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = __this->get_targetPosition_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29;
		L_29 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_28, /*hidden argument*/NULL);
		float L_30 = __this->get_speed_10();
		float L_31;
		L_31 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32;
		L_32 = Vector2_MoveTowards_m1EC393CAB6ACD04D7A7856F02169D22FD61CDB89(L_27, L_29, ((float)il2cpp_codegen_multiply((float)L_30, (float)L_31)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_32, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_24, L_33, /*hidden argument*/NULL);
	}

IL_00d2:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Player::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Player_Fire_m4FE229BEDD63A9DFD9623E4B09581A32DA125E88 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFireU3Ed__14_tE76C69BC1E345D96D8F5422E30F0B7BA407ADD90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFireU3Ed__14_tE76C69BC1E345D96D8F5422E30F0B7BA407ADD90 * L_0 = (U3CFireU3Ed__14_tE76C69BC1E345D96D8F5422E30F0B7BA407ADD90 *)il2cpp_codegen_object_new(U3CFireU3Ed__14_tE76C69BC1E345D96D8F5422E30F0B7BA407ADD90_il2cpp_TypeInfo_var);
		U3CFireU3Ed__14__ctor_m43C9A721CDB5041D91908AFABECEDCE95D5C6C9C(L_0, 0, /*hidden argument*/NULL);
		U3CFireU3Ed__14_tE76C69BC1E345D96D8F5422E30F0B7BA407ADD90 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Player::InstantiateOnPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_InstantiateOnPool_m50562C36529398998CEEC6774E100FC8D0A1B20A (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBullet_tF95A945B732B2B929938FB1028878BFBC0081724_m369B5E2F14BDAB6427DDEEECD19954C23617D0B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// GameObject result = null;
		V_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL;
		// if (gameManager.PoolManager.transform.childCount > 0)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_gameManager_8();
		NullCheck(L_0);
		PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * L_1;
		L_1 = GameManager_get_PoolManager_m6D739307662563512C61E7785E677AE86C308166_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_006d;
		}
	}
	{
		// result = gameManager.PoolManager.transform.GetChild(0).gameObject;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4 = __this->get_gameManager_8();
		NullCheck(L_4);
		PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * L_5;
		L_5 = GameManager_get_PoolManager_m6D739307662563512C61E7785E677AE86C308166_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_6, 0, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// result.transform.position = bulletPosition.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_0;
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = __this->get_bulletPosition_4();
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_10, L_12, /*hidden argument*/NULL);
		// result.transform.SetParent(null);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = V_0;
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_14, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/NULL);
		// Bullet bm = result.GetComponent<Bullet>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = V_0;
		NullCheck(L_15);
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_16;
		L_16 = GameObject_GetComponent_TisBullet_tF95A945B732B2B929938FB1028878BFBC0081724_m369B5E2F14BDAB6427DDEEECD19954C23617D0B6(L_15, /*hidden argument*/GameObject_GetComponent_TisBullet_tF95A945B732B2B929938FB1028878BFBC0081724_m369B5E2F14BDAB6427DDEEECD19954C23617D0B6_RuntimeMethod_var);
		// bm.SetSprite(1);
		NullCheck(L_16);
		Bullet_SetSprite_m08A3E01DB9F3F13D788B620D70FECF898257BA28(L_16, 1, /*hidden argument*/NULL);
		// result.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = V_0;
		NullCheck(L_17);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_17, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_0099;
	}

IL_006d:
	{
		// result = Instantiate(bulletPrefab, bulletPosition);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_bulletPrefab_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19 = __this->get_bulletPosition_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_18, L_19, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		V_0 = L_20;
		// result.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = V_0;
		NullCheck(L_21);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_21, (bool)0, /*hidden argument*/NULL);
		// Bullet bm = result.GetComponent<Bullet>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = V_0;
		NullCheck(L_22);
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_23;
		L_23 = GameObject_GetComponent_TisBullet_tF95A945B732B2B929938FB1028878BFBC0081724_m369B5E2F14BDAB6427DDEEECD19954C23617D0B6(L_22, /*hidden argument*/GameObject_GetComponent_TisBullet_tF95A945B732B2B929938FB1028878BFBC0081724_m369B5E2F14BDAB6427DDEEECD19954C23617D0B6_RuntimeMethod_var);
		// bm.SetSprite(1);
		NullCheck(L_23);
		Bullet_SetSprite_m08A3E01DB9F3F13D788B620D70FECF898257BA28(L_23, 1, /*hidden argument*/NULL);
		// result.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = V_0;
		NullCheck(L_24);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_24, (bool)1, /*hidden argument*/NULL);
	}

IL_0099:
	{
		// if (result != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_25, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00ae;
		}
	}
	{
		// result.transform.SetParent(null);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = V_0;
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_28, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/NULL);
	}

IL_00ae:
	{
		// }
		return;
	}
}
// System.Void Player::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnTriggerEnter2D_mAF357F7244427CB9EADB81B5A6C4F0AF481641D0 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35AC43C98F2BA6A894D0C538DF26C6486AD51744);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDADC16E137E91464AB75C5E701B97E5857B076A0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (im) return;
		bool L_0 = __this->get_im_12();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (im) return;
		return;
	}

IL_0009:
	{
		// if (isDead) return;
		bool L_1 = __this->get_isDead_13();
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if (isDead) return;
		return;
	}

IL_0012:
	{
		// SoundManager.instance.SFXPlay("DAMAG", clip);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_2 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_4();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_3 = __this->get_clip_6();
		NullCheck(L_2);
		SoundManager_SFXPlay_mABB8C91BDDF88454B9BD440466377C99FAC477A7(L_2, _stringLiteralDADC16E137E91464AB75C5E701B97E5857B076A0, L_3, /*hidden argument*/NULL);
		// Debug.Log("asd");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral35AC43C98F2BA6A894D0C538DF26C6486AD51744, /*hidden argument*/NULL);
		// gameManager.Dead();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4 = __this->get_gameManager_8();
		NullCheck(L_4);
		GameManager_Dead_mE95F9E77F108C5BF2D131A089EB8BE36AA972B9B(L_4, /*hidden argument*/NULL);
		// isDead = true;
		__this->set_isDead_13((bool)1);
		// StartCoroutine(Damaged());
		RuntimeObject* L_5;
		L_5 = Player_Damaged_m597853252FA71D9C82EAFCEC0781CBA4A5E3E1DA(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_6;
		L_6 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Player::Damaged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Player_Damaged_m597853252FA71D9C82EAFCEC0781CBA4A5E3E1DA (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDamagedU3Ed__17_tB832BEEBB4DD5EDA6B8664FA17B5EE4E3B3CC3F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDamagedU3Ed__17_tB832BEEBB4DD5EDA6B8664FA17B5EE4E3B3CC3F7 * L_0 = (U3CDamagedU3Ed__17_tB832BEEBB4DD5EDA6B8664FA17B5EE4E3B3CC3F7 *)il2cpp_codegen_object_new(U3CDamagedU3Ed__17_tB832BEEBB4DD5EDA6B8664FA17B5EE4E3B3CC3F7_il2cpp_TypeInfo_var);
		U3CDamagedU3Ed__17__ctor_m54A714F395665DD537395C9D53DEE68FD0698EAE(L_0, 0, /*hidden argument*/NULL);
		U3CDamagedU3Ed__17_tB832BEEBB4DD5EDA6B8664FA17B5EE4E3B3CC3F7 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_mDE8EB5B351975D4E7E24DE341B8B49B8A29CC2B7 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// private Vector3 targetPosition = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_targetPosition_7(L_0);
		// private float speed = 0.5f;
		__this->set_speed_10((0.5f));
		// private float firelate = 0.5f;
		__this->set_firelate_11((0.5f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PoolManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolManager__ctor_mB63FFA1BD11E3C07306CA9E388496F85BD09A7FF (PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Scene::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scene_Start_mFBC09E712566D2AB148D1F7C7F789490E90AD242 (Scene_tDE4016BE2BA3F33366B0D42BC2AEAFCAB0A039FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral780088735D08F01D63A81A5B157E00A8C6D5285C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB1EA0D19EDD2C3A2F60B0C36AD599E6C289DB3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0E3A4D86F2CD816F8A81B072437555E525FC253);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC1EA2AFE02F14278901CEC035F7037789947862);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(sceneNumber == 1)
		int32_t L_0 = __this->get_sceneNumber_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0053;
		}
	}
	{
		// textScore.text = string.Format("SCORE\n{0}", PlayerPrefs.GetInt("SCORE", 0));
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_textScore_5();
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral780088735D08F01D63A81A5B157E00A8C6D5285C, 0, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralFC1EA2AFE02F14278901CEC035F7037789947862, L_4, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_5);
		// textHighScore.text = string.Format("HIGHSCORE\n{0}", PlayerPrefs.GetInt("HIGHSCORE", 0));
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_textHighScore_4();
		int32_t L_7;
		L_7 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralAB1EA0D19EDD2C3A2F60B0C36AD599E6C289DB3F, 0, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralE0E3A4D86F2CD816F8A81B072437555E525FC253, L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_10);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void Scene::Started()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scene_Started_m55DDB3DBF18408BA160AEA175438061D682FAB01 (Scene_tDE4016BE2BA3F33366B0D42BC2AEAFCAB0A039FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Main");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Scene::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scene_Exit_mF8D850B7A68E7901CE946D7955BB5B7F7B24F386 (Scene_tDE4016BE2BA3F33366B0D42BC2AEAFCAB0A039FB * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Scene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scene__ctor_mE4E08911D71ED67675EDD133FDA16063AF953EA9 (Scene_tDE4016BE2BA3F33366B0D42BC2AEAFCAB0A039FB * __this, const RuntimeMethod* method)
{
	{
		// private int sceneNumber = 1;
		__this->set_sceneNumber_6(1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SoundManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Awake_m78F953F39CFB3F539240E1226D04270B793B1A76 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_0 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// instance = this;
		((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->set_instance_4(__this);
		// DontDestroyOnLoad(instance);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_2 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001e:
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::SFXPlay(System.String,UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_SFXPlay_mABB8C91BDDF88454B9BD440466377C99FAC477A7 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, String_t* ___sfxName0, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject go = new GameObject(sfxName + "Sound");
		String_t* L_0 = ___sfxName0;
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_2, L_1, /*hidden argument*/NULL);
		// AudioSource audiosource = go.AddComponent<AudioSource>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = L_2;
		NullCheck(L_3);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4;
		L_4 = GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76(L_3, /*hidden argument*/GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
		// audiosource.clip = clip;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5 = L_4;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_6 = ___clip1;
		NullCheck(L_5);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_5, L_6, /*hidden argument*/NULL);
		// audiosource.Play();
		NullCheck(L_5);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_5, /*hidden argument*/NULL);
		// Destroy(go, clip.length);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_7 = ___clip1;
		NullCheck(L_7);
		float L_8;
		L_8 = AudioClip_get_length_m2223F2281D853F847BE0048620BA6F61F26440E4(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_3, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__ctor_m30D18BC25871BD3FF7FB195A1CAE50A2EE48FCAE (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Boss/<AddTimeScore>d__34::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddTimeScoreU3Ed__34__ctor_mFDB48EA686C4E098576421FA06425D542F57495C (U3CAddTimeScoreU3Ed__34_tC58DEE55F7328D127BC26C58999917D21648C761 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Boss/<AddTimeScore>d__34::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddTimeScoreU3Ed__34_System_IDisposable_Dispose_m42FD82A81F9A156024E27B77FA4CA4B8D5C9E5AF (U3CAddTimeScoreU3Ed__34_tC58DEE55F7328D127BC26C58999917D21648C761 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Boss/<AddTimeScore>d__34::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAddTimeScoreU3Ed__34_MoveNext_mDB42C5A952CDAA5F1C465B9BAC0777C712F80C6E (U3CAddTimeScoreU3Ed__34_tC58DEE55F7328D127BC26C58999917D21648C761 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00f0;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// time = 0;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_4 = V_1;
		NullCheck(L_4);
		L_4->set_time_30(0);
	}

IL_0028:
	{
		// if(isPhase == true&&a==0)
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_5 = V_1;
		NullCheck(L_5);
		bool L_6 = L_5->get_isPhase_27();
		if (!L_6)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_7 = __this->get_a_3();
		if (L_7)
		{
			goto IL_007f;
		}
	}
	{
		// if (time < 50)
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_time_30();
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)50))))
		{
			goto IL_007d;
		}
	}
	{
		// if (time < 40)
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_time_30();
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)40))))
		{
			goto IL_0070;
		}
	}
	{
		// if (time < 35)
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = L_12->get_time_30();
		if ((((int32_t)L_13) >= ((int32_t)((int32_t)35))))
		{
			goto IL_0063;
		}
	}
	{
		// AddScore(1500);
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_14 = V_1;
		NullCheck(L_14);
		VirtActionInvoker1< int32_t >::Invoke(4 /* System.Void GameManager::AddScore(System.Int32) */, L_14, ((int32_t)1500));
		// yield break;
		return (bool)0;
	}

IL_0063:
	{
		// AddScore(1000);
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_15 = V_1;
		NullCheck(L_15);
		VirtActionInvoker1< int32_t >::Invoke(4 /* System.Void GameManager::AddScore(System.Int32) */, L_15, ((int32_t)1000));
		// yield break;
		return (bool)0;
	}

IL_0070:
	{
		// AddScore(500);
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_16 = V_1;
		NullCheck(L_16);
		VirtActionInvoker1< int32_t >::Invoke(4 /* System.Void GameManager::AddScore(System.Int32) */, L_16, ((int32_t)500));
		// yield break;
		return (bool)0;
	}

IL_007d:
	{
		// yield break;
		return (bool)0;
	}

IL_007f:
	{
		// if(isPhase2==true&&a==1)
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_17 = V_1;
		NullCheck(L_17);
		bool L_18 = L_17->get_isPhase2_29();
		if (!L_18)
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_19 = __this->get_a_3();
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_00d7;
		}
	}
	{
		// if (time < 105)
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = L_20->get_time_30();
		if ((((int32_t)L_21) >= ((int32_t)((int32_t)105))))
		{
			goto IL_00d5;
		}
	}
	{
		// if (time < 95)
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_time_30();
		if ((((int32_t)L_23) >= ((int32_t)((int32_t)95))))
		{
			goto IL_00c8;
		}
	}
	{
		// if (time < 85)
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_24 = V_1;
		NullCheck(L_24);
		int32_t L_25 = L_24->get_time_30();
		if ((((int32_t)L_25) >= ((int32_t)((int32_t)85))))
		{
			goto IL_00bb;
		}
	}
	{
		// AddScore(3000);
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_26 = V_1;
		NullCheck(L_26);
		VirtActionInvoker1< int32_t >::Invoke(4 /* System.Void GameManager::AddScore(System.Int32) */, L_26, ((int32_t)3000));
		// yield break;
		return (bool)0;
	}

IL_00bb:
	{
		// AddScore(2000);
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_27 = V_1;
		NullCheck(L_27);
		VirtActionInvoker1< int32_t >::Invoke(4 /* System.Void GameManager::AddScore(System.Int32) */, L_27, ((int32_t)2000));
		// yield break;
		return (bool)0;
	}

IL_00c8:
	{
		// AddScore(1000);
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_28 = V_1;
		NullCheck(L_28);
		VirtActionInvoker1< int32_t >::Invoke(4 /* System.Void GameManager::AddScore(System.Int32) */, L_28, ((int32_t)1000));
		// yield break;
		return (bool)0;
	}

IL_00d5:
	{
		// yield break;
		return (bool)0;
	}

IL_00d7:
	{
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_29 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_29, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_29);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00f0:
	{
		__this->set_U3CU3E1__state_0((-1));
		// time++;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_30 = V_1;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_31 = V_1;
		NullCheck(L_31);
		int32_t L_32 = L_31->get_time_30();
		NullCheck(L_30);
		L_30->set_time_30(((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1)));
		// Debug.Log(time);
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_33 = V_1;
		NullCheck(L_33);
		int32_t L_34 = L_33->get_time_30();
		int32_t L_35 = L_34;
		RuntimeObject * L_36 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_35);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_36, /*hidden argument*/NULL);
		// while(true)
		goto IL_0028;
	}
}
// System.Object Boss/<AddTimeScore>d__34::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAddTimeScoreU3Ed__34_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBC0096C8ABBFD395D5215D407B599DDAC7B85059 (U3CAddTimeScoreU3Ed__34_tC58DEE55F7328D127BC26C58999917D21648C761 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Boss/<AddTimeScore>d__34::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddTimeScoreU3Ed__34_System_Collections_IEnumerator_Reset_m6DA7E8E3EB331FAF50899C85CD89F3A4EF07109D (U3CAddTimeScoreU3Ed__34_tC58DEE55F7328D127BC26C58999917D21648C761 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAddTimeScoreU3Ed__34_System_Collections_IEnumerator_Reset_m6DA7E8E3EB331FAF50899C85CD89F3A4EF07109D_RuntimeMethod_var)));
	}
}
// System.Object Boss/<AddTimeScore>d__34::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAddTimeScoreU3Ed__34_System_Collections_IEnumerator_get_Current_mF6DE7ED64393D86ECFEF2B966687D17CDDEB5EC7 (U3CAddTimeScoreU3Ed__34_tC58DEE55F7328D127BC26C58999917D21648C761 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Boss/<MoveTo>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveToU3Ed__33__ctor_mE6F0091AF997117B8A803B7D97567714C7B9A9AE (U3CMoveToU3Ed__33_t55F90767C706DFE31BDD0F94A60426D168A3C65E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Boss/<MoveTo>d__33::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveToU3Ed__33_System_IDisposable_Dispose_m5723F64EA9D6160B68BE9CD680554656AD337D4C (U3CMoveToU3Ed__33_t55F90767C706DFE31BDD0F94A60426D168A3C65E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Boss/<MoveTo>d__33::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveToU3Ed__33_MoveNext_m44F1C49852952829CE0145FD79A71FFE90FCA971 (U3CMoveToU3Ed__33_t55F90767C706DFE31BDD0F94A60426D168A3C65E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_00a9;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float count = 0.4f;
		__this->set_U3CcountU3E5__2_4((0.400000006f));
		// Vector3 wasPos = a.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_a_2();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		__this->set_U3CwasPosU3E5__3_5(L_5);
	}

IL_003b:
	{
		// count += Time.deltaTime;
		float L_6 = __this->get_U3CcountU3E5__2_4();
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CcountU3E5__2_4(((float)il2cpp_codegen_add((float)L_6, (float)L_7)));
		// a.transform.position = Vector3.Lerp(wasPos, toPos, count);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_a_2();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = __this->get_U3CwasPosU3E5__3_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = __this->get_toPos_3();
		float L_12 = __this->get_U3CcountU3E5__2_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_10, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_9, L_13, /*hidden argument*/NULL);
		// if (count >= 1)
		float L_14 = __this->get_U3CcountU3E5__2_4();
		if ((!(((float)L_14) >= ((float)(1.0f)))))
		{
			goto IL_0099;
		}
	}
	{
		// a.transform.position = toPos;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_a_2();
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = __this->get_toPos_3();
		NullCheck(L_16);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_16, L_17, /*hidden argument*/NULL);
		// break;
		goto IL_00b2;
	}

IL_0099:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00a9:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_003b;
	}

IL_00b2:
	{
		// }
		return (bool)0;
	}
}
// System.Object Boss/<MoveTo>d__33::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMoveToU3Ed__33_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB036BA539310D128AECD779C3A0E457DFF86E30A (U3CMoveToU3Ed__33_t55F90767C706DFE31BDD0F94A60426D168A3C65E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Boss/<MoveTo>d__33::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveToU3Ed__33_System_Collections_IEnumerator_Reset_m3162F1F2562EE23BF69B3544FC99ECA8283037DD (U3CMoveToU3Ed__33_t55F90767C706DFE31BDD0F94A60426D168A3C65E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoveToU3Ed__33_System_Collections_IEnumerator_Reset_m3162F1F2562EE23BF69B3544FC99ECA8283037DD_RuntimeMethod_var)));
	}
}
// System.Object Boss/<MoveTo>d__33::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMoveToU3Ed__33_System_Collections_IEnumerator_get_Current_m2FFEA317E8BA77D23212587007E596B253CDD4CC (U3CMoveToU3Ed__33_t55F90767C706DFE31BDD0F94A60426D168A3C65E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Boss/<PatternA>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPatternAU3Ed__25__ctor_m293FD07A6FA9E5A72A70F285AC8FBAA25BB2B345 (U3CPatternAU3Ed__25_t28745CEB3CDE89B25FABB9B1026360F76BCFA885 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Boss/<PatternA>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPatternAU3Ed__25_System_IDisposable_Dispose_m2C566F9ECFFE77C0D8156CE08246B25FF06DF99F (U3CPatternAU3Ed__25_t28745CEB3CDE89B25FABB9B1026360F76BCFA885 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Boss/<PatternA>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPatternAU3Ed__25_MoveNext_m1E94320A7325F882B0C5C224A9E901F045D166B4 (U3CPatternAU3Ed__25_t28745CEB3CDE89B25FABB9B1026360F76BCFA885 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0075;
			}
			case 2:
			{
				goto IL_016c;
			}
			case 3:
			{
				goto IL_01bd;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float randomX = 0f;
		V_2 = (0.0f);
		// float randomY = 0f;
		V_3 = (0.0f);
		// int a = 0;
		__this->set_U3CaU3E5__2_3(0);
		// oneShoting = 30;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_3 = V_1;
		NullCheck(L_3);
		L_3->set_oneShoting_26((30.0f));
		// Vector2 dir = new Vector2(0, 0);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_4), (0.0f), (0.0f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0075:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_01cb;
	}

IL_0081:
	{
		// if (isPhase)
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_5 = V_1;
		NullCheck(L_5);
		bool L_6 = L_5->get_isPhase_27();
		if (!L_6)
		{
			goto IL_008b;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_008b:
	{
		// randomX = Random.Range(-1.7f, 1.7f);
		float L_7;
		L_7 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-1.70000005f), (1.70000005f), /*hidden argument*/NULL);
		V_2 = L_7;
		// randomY = Random.Range(1, 4f);
		float L_8;
		L_8 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((1.0f), (4.0f), /*hidden argument*/NULL);
		V_3 = L_8;
		// GameObject bullet = null;
		__this->set_U3CbulletU3E5__3_4((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// CircleFire(bullet, 30, 0,bulletPosition,0,speed);
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_9 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_U3CbulletU3E5__3_4();
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_11 = V_1;
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = L_11->get_bulletPosition_19();
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_13 = V_1;
		NullCheck(L_13);
		float L_14 = L_13->get_speed_25();
		NullCheck(L_9);
		Boss_CircleFire_mA7EFF362AE1DF31979EBCA9AE0237D8A6E833CA6(L_9, L_10, (30.0f), 0, L_12, 0, L_14, /*hidden argument*/NULL);
		// StartCoroutine(MoveTo(gameObject, new Vector3(randomX, randomY, 0)));
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_15 = V_1;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_16 = V_1;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_17 = V_1;
		NullCheck(L_17);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_17, /*hidden argument*/NULL);
		float L_19 = V_2;
		float L_20 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_21), L_19, L_20, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		RuntimeObject* L_22;
		L_22 = Boss_MoveTo_m510E6DCD3C69625AA8B17053B193C1EB58459B70(L_16, L_18, L_21, /*hidden argument*/NULL);
		NullCheck(L_15);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_23;
		L_23 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_15, L_22, /*hidden argument*/NULL);
		// for (int i = 0;i<15;i++)
		__this->set_U3CiU3E5__4_5(0);
		goto IL_0185;
	}

IL_00fc:
	{
		// bullet = Fire(bullet,0);
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_24 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = __this->get_U3CbulletU3E5__3_4();
		NullCheck(L_24);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = Boss_Fire_mB2EAC4B5566D62F3C5C9829617A39CB22AD8C9E2(L_24, L_25, 0, /*hidden argument*/NULL);
		__this->set_U3CbulletU3E5__3_4(L_26);
		// dir = targetPosition.position - bullet.transform.position;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_27 = V_1;
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28 = L_27->get_targetPosition_18();
		NullCheck(L_28);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_28, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = __this->get_U3CbulletU3E5__3_4();
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_31, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_29, L_32, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34;
		L_34 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_33, /*hidden argument*/NULL);
		V_4 = L_34;
		// bullet.GetComponent<Rigidbody2D>().AddForce(dir * speed);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = __this->get_U3CbulletU3E5__3_4();
		NullCheck(L_35);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_36;
		L_36 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_35, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37 = V_4;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_38 = V_1;
		NullCheck(L_38);
		float L_39 = L_38->get_speed_25();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_40;
		L_40 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_37, L_39, /*hidden argument*/NULL);
		NullCheck(L_36);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_36, L_40, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.3f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_41 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_41, (0.300000012f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_41);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_016c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0;i<15;i++)
		int32_t L_42 = __this->get_U3CiU3E5__4_5();
		V_5 = L_42;
		int32_t L_43 = V_5;
		__this->set_U3CiU3E5__4_5(((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1)));
	}

IL_0185:
	{
		// for (int i = 0;i<15;i++)
		int32_t L_44 = __this->get_U3CiU3E5__4_5();
		if ((((int32_t)L_44) < ((int32_t)((int32_t)15))))
		{
			goto IL_00fc;
		}
	}
	{
		// a++;
		int32_t L_45 = __this->get_U3CaU3E5__2_3();
		V_5 = L_45;
		int32_t L_46 = V_5;
		__this->set_U3CaU3E5__2_3(((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1)));
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_47 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_47, (0.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_47);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_01bd:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		__this->set_U3CbulletU3E5__3_4((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
	}

IL_01cb:
	{
		// while (a<3)
		int32_t L_48 = __this->get_U3CaU3E5__2_3();
		if ((((int32_t)L_48) < ((int32_t)3)))
		{
			goto IL_0081;
		}
	}
	{
		// StartCoroutine(PatternB());
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_49 = V_1;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_50 = V_1;
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = Boss_PatternB_m9E5221483223FBF6C4BFF2D95B8DBAF045984F27(L_50, /*hidden argument*/NULL);
		NullCheck(L_49);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_52;
		L_52 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_49, L_51, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Boss/<PatternA>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPatternAU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m46D54115F751DD7035262F160287D9F7AC14E531 (U3CPatternAU3Ed__25_t28745CEB3CDE89B25FABB9B1026360F76BCFA885 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Boss/<PatternA>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPatternAU3Ed__25_System_Collections_IEnumerator_Reset_m356AB21CD88E087301284911D168D70F7A19128B (U3CPatternAU3Ed__25_t28745CEB3CDE89B25FABB9B1026360F76BCFA885 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPatternAU3Ed__25_System_Collections_IEnumerator_Reset_m356AB21CD88E087301284911D168D70F7A19128B_RuntimeMethod_var)));
	}
}
// System.Object Boss/<PatternA>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPatternAU3Ed__25_System_Collections_IEnumerator_get_Current_m98C5B74BE8E99955C8D8F11FC9888E3FDD53A761 (U3CPatternAU3Ed__25_t28745CEB3CDE89B25FABB9B1026360F76BCFA885 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Boss/<PatternB>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPatternBU3Ed__26__ctor_m7740ED605DE7D079AB3538622B9D24B085293EF5 (U3CPatternBU3Ed__26_t2CEB71F5110B1BB461CF4CC7C1509FEDE6714782 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Boss/<PatternB>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPatternBU3Ed__26_System_IDisposable_Dispose_m22A771591CB8577B3F4898D4681F7A2D21BCD0D9 (U3CPatternBU3Ed__26_t2CEB71F5110B1BB461CF4CC7C1509FEDE6714782 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Boss/<PatternB>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPatternBU3Ed__26_MoveNext_m0D3D93ACF5501E59E2CC1C7CA9843195AAE08574 (U3CPatternBU3Ed__26_t2CEB71F5110B1BB461CF4CC7C1509FEDE6714782 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00f4;
			}
			case 2:
			{
				goto IL_0121;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// int one = 0;
		__this->set_U3ConeU3E5__2_3(0);
		// int a = 0;
		__this->set_U3CaU3E5__3_4(0);
		// StartCoroutine(MoveTo(gameObject, new Vector3(0f, 3.7f, 0)));
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_3 = V_1;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_4 = V_1;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_5 = V_1;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), (0.0f), (3.70000005f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_8;
		L_8 = Boss_MoveTo_m510E6DCD3C69625AA8B17053B193C1EB58459B70(L_4, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_3);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_9;
		L_9 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_3, L_8, /*hidden argument*/NULL);
		// oneShoting = 40;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_10 = V_1;
		NullCheck(L_10);
		L_10->set_oneShoting_26((40.0f));
		goto IL_00fb;
	}

IL_006e:
	{
		// if (isPhase)
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_11 = V_1;
		NullCheck(L_11);
		bool L_12 = L_11->get_isPhase_27();
		if (!L_12)
		{
			goto IL_0078;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0078:
	{
		// if (one >360)
		int32_t L_13 = __this->get_U3ConeU3E5__2_3();
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)360))))
		{
			goto IL_008d;
		}
	}
	{
		// one = 10;
		__this->set_U3ConeU3E5__2_3(((int32_t)10));
	}

IL_008d:
	{
		// float angle = 360 / oneShoting;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_14 = V_1;
		NullCheck(L_14);
		float L_15 = L_14->get_oneShoting_26();
		// GameObject bullet = null;
		V_2 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL;
		// CircleFire(bullet, oneShoting, one, bulletPosition,2,speed);
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_16 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = V_2;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_18 = V_1;
		NullCheck(L_18);
		float L_19 = L_18->get_oneShoting_26();
		int32_t L_20 = __this->get_U3ConeU3E5__2_3();
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_21 = V_1;
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = L_21->get_bulletPosition_19();
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_23 = V_1;
		NullCheck(L_23);
		float L_24 = L_23->get_speed_25();
		NullCheck(L_16);
		Boss_CircleFire_mA7EFF362AE1DF31979EBCA9AE0237D8A6E833CA6(L_16, L_17, L_19, L_20, L_22, 2, L_24, /*hidden argument*/NULL);
		// one += 10;
		int32_t L_25 = __this->get_U3ConeU3E5__2_3();
		__this->set_U3ConeU3E5__2_3(((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)((int32_t)10))));
		// a++;
		int32_t L_26 = __this->get_U3CaU3E5__3_4();
		V_3 = L_26;
		int32_t L_27 = V_3;
		__this->set_U3CaU3E5__3_4(((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1)));
		// yield return new WaitForSeconds(0.3f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_28 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_28, (0.300000012f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_28);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00f4:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00fb:
	{
		// while (a<40)
		int32_t L_29 = __this->get_U3CaU3E5__3_4();
		if ((((int32_t)L_29) < ((int32_t)((int32_t)40))))
		{
			goto IL_006e;
		}
	}
	{
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_30 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_30, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_30);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0121:
	{
		__this->set_U3CU3E1__state_0((-1));
		// StartCoroutine(MoveTo(gameObject, new Vector3(0f, 3.7f, 0)));
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_31 = V_1;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_32 = V_1;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_33 = V_1;
		NullCheck(L_33);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34;
		L_34 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_33, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_35), (0.0f), (3.70000005f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_32);
		RuntimeObject* L_36;
		L_36 = Boss_MoveTo_m510E6DCD3C69625AA8B17053B193C1EB58459B70(L_32, L_34, L_35, /*hidden argument*/NULL);
		NullCheck(L_31);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_37;
		L_37 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_31, L_36, /*hidden argument*/NULL);
		// StartCoroutine(PatternC());
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_38 = V_1;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_39 = V_1;
		NullCheck(L_39);
		RuntimeObject* L_40;
		L_40 = Boss_PatternC_m8E7987E8F6E2CD0F288F5B06A875A982BA784759(L_39, /*hidden argument*/NULL);
		NullCheck(L_38);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_41;
		L_41 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_38, L_40, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Boss/<PatternB>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPatternBU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFEB1847F09CBB86D764E03B9F12C31C5C5647B38 (U3CPatternBU3Ed__26_t2CEB71F5110B1BB461CF4CC7C1509FEDE6714782 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Boss/<PatternB>d__26::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPatternBU3Ed__26_System_Collections_IEnumerator_Reset_m78339AB065A456FBBD16D872905E6E9F77455F62 (U3CPatternBU3Ed__26_t2CEB71F5110B1BB461CF4CC7C1509FEDE6714782 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPatternBU3Ed__26_System_Collections_IEnumerator_Reset_m78339AB065A456FBBD16D872905E6E9F77455F62_RuntimeMethod_var)));
	}
}
// System.Object Boss/<PatternB>d__26::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPatternBU3Ed__26_System_Collections_IEnumerator_get_Current_mE4AA9D0F75BA38FEDC0C802B2EB58487DF9A1CA5 (U3CPatternBU3Ed__26_t2CEB71F5110B1BB461CF4CC7C1509FEDE6714782 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Boss/<PatternC>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPatternCU3Ed__27__ctor_m1CA26DE87E263599F37333396B094FD9BF2175B9 (U3CPatternCU3Ed__27_t3A8A5112A6A731A35A3E2E988C34E9C5B225EB5D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Boss/<PatternC>d__27::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPatternCU3Ed__27_System_IDisposable_Dispose_m63B8468B98F7C7A15DB3189AD271EFBC004851DD (U3CPatternCU3Ed__27_t3A8A5112A6A731A35A3E2E988C34E9C5B225EB5D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Boss/<PatternC>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPatternCU3Ed__27_MoveNext_m35266FA90C02E45C71ADD2583FD578D8157EFFFF (U3CPatternCU3Ed__27_t3A8A5112A6A731A35A3E2E988C34E9C5B225EB5D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0112;
			}
			case 2:
			{
				goto IL_021b;
			}
			case 3:
			{
				goto IL_0266;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// int one = 0;
		__this->set_U3ConeU3E5__2_3(0);
		// int a = 0;
		__this->set_U3CaU3E5__3_4(0);
		// oneShoting = 30;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_3 = V_1;
		NullCheck(L_3);
		L_3->set_oneShoting_26((30.0f));
		// GameObject bullet = null;
		__this->set_U3CbulletU3E5__4_5((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		goto IL_0138;
	}

IL_0052:
	{
		// if (isPhase)
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = L_4->get_isPhase_27();
		if (!L_5)
		{
			goto IL_005c;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_005c:
	{
		// if (one > 360)
		int32_t L_6 = __this->get_U3ConeU3E5__2_3();
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)360))))
		{
			goto IL_0071;
		}
	}
	{
		// one = 20;
		__this->set_U3ConeU3E5__2_3(((int32_t)20));
	}

IL_0071:
	{
		// pos1.position = new Vector3(-1.5f, 3.7f, 0);
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_7 = V_1;
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = L_7->get_pos1_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), (-1.5f), (3.70000005f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_8, L_9, /*hidden argument*/NULL);
		// CircleFire(bullet, oneShoting, one, pos1,2,speed);
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_10 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_U3CbulletU3E5__4_5();
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_12 = V_1;
		NullCheck(L_12);
		float L_13 = L_12->get_oneShoting_26();
		int32_t L_14 = __this->get_U3ConeU3E5__2_3();
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_15 = V_1;
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = L_15->get_pos1_20();
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_17 = V_1;
		NullCheck(L_17);
		float L_18 = L_17->get_speed_25();
		NullCheck(L_10);
		Boss_CircleFire_mA7EFF362AE1DF31979EBCA9AE0237D8A6E833CA6(L_10, L_11, L_13, L_14, L_16, 2, L_18, /*hidden argument*/NULL);
		// pos1.position = new Vector3(1.5f, 3.7f, 0);
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_19 = V_1;
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = L_19->get_pos1_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_21), (1.5f), (3.70000005f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_20, L_21, /*hidden argument*/NULL);
		// CircleFire(bullet, oneShoting, one, pos1,2,speed);
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_22 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_U3CbulletU3E5__4_5();
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_24 = V_1;
		NullCheck(L_24);
		float L_25 = L_24->get_oneShoting_26();
		int32_t L_26 = __this->get_U3ConeU3E5__2_3();
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_27 = V_1;
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28 = L_27->get_pos1_20();
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_29 = V_1;
		NullCheck(L_29);
		float L_30 = L_29->get_speed_25();
		NullCheck(L_22);
		Boss_CircleFire_mA7EFF362AE1DF31979EBCA9AE0237D8A6E833CA6(L_22, L_23, L_25, L_26, L_28, 2, L_30, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.3f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_31 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_31, (0.300000012f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_31);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0112:
	{
		__this->set_U3CU3E1__state_0((-1));
		// one += 20;
		int32_t L_32 = __this->get_U3ConeU3E5__2_3();
		__this->set_U3ConeU3E5__2_3(((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)((int32_t)20))));
		// a++;
		int32_t L_33 = __this->get_U3CaU3E5__3_4();
		V_2 = L_33;
		int32_t L_34 = V_2;
		__this->set_U3CaU3E5__3_4(((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1)));
	}

IL_0138:
	{
		// while (a<20)
		int32_t L_35 = __this->get_U3CaU3E5__3_4();
		if ((((int32_t)L_35) < ((int32_t)((int32_t)20))))
		{
			goto IL_0052;
		}
	}
	{
		// a = 0;
		__this->set_U3CaU3E5__3_4(0);
		// oneShoting = 40;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_36 = V_1;
		NullCheck(L_36);
		L_36->set_oneShoting_26((40.0f));
		goto IL_0240;
	}

IL_015c:
	{
		// if (isPhase)
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_37 = V_1;
		NullCheck(L_37);
		bool L_38 = L_37->get_isPhase_27();
		if (!L_38)
		{
			goto IL_0166;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0166:
	{
		// if (one > 360)
		int32_t L_39 = __this->get_U3ConeU3E5__2_3();
		if ((((int32_t)L_39) <= ((int32_t)((int32_t)360))))
		{
			goto IL_017a;
		}
	}
	{
		// one = 5;
		__this->set_U3ConeU3E5__2_3(5);
	}

IL_017a:
	{
		// pos1.position = new Vector3(-1.5f, 3.7f, 0);
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_40 = V_1;
		NullCheck(L_40);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41 = L_40->get_pos1_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_42), (-1.5f), (3.70000005f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_41);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_41, L_42, /*hidden argument*/NULL);
		// CircleFire(bullet, oneShoting, one, pos1,2,speed);
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_43 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44 = __this->get_U3CbulletU3E5__4_5();
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_45 = V_1;
		NullCheck(L_45);
		float L_46 = L_45->get_oneShoting_26();
		int32_t L_47 = __this->get_U3ConeU3E5__2_3();
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_48 = V_1;
		NullCheck(L_48);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49 = L_48->get_pos1_20();
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_50 = V_1;
		NullCheck(L_50);
		float L_51 = L_50->get_speed_25();
		NullCheck(L_43);
		Boss_CircleFire_mA7EFF362AE1DF31979EBCA9AE0237D8A6E833CA6(L_43, L_44, L_46, L_47, L_49, 2, L_51, /*hidden argument*/NULL);
		// pos1.position = new Vector3(1.5f, 3.7f, 0);
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_52 = V_1;
		NullCheck(L_52);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53 = L_52->get_pos1_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_54), (1.5f), (3.70000005f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_53);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_53, L_54, /*hidden argument*/NULL);
		// CircleFire(bullet, oneShoting, one, pos1,2,speed);
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_55 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56 = __this->get_U3CbulletU3E5__4_5();
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_57 = V_1;
		NullCheck(L_57);
		float L_58 = L_57->get_oneShoting_26();
		int32_t L_59 = __this->get_U3ConeU3E5__2_3();
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_60 = V_1;
		NullCheck(L_60);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_61 = L_60->get_pos1_20();
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_62 = V_1;
		NullCheck(L_62);
		float L_63 = L_62->get_speed_25();
		NullCheck(L_55);
		Boss_CircleFire_mA7EFF362AE1DF31979EBCA9AE0237D8A6E833CA6(L_55, L_56, L_58, L_59, L_61, 2, L_63, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.3f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_64 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_64, (0.300000012f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_64);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_021b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// one += 5;
		int32_t L_65 = __this->get_U3ConeU3E5__2_3();
		__this->set_U3ConeU3E5__2_3(((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)5)));
		// a++;
		int32_t L_66 = __this->get_U3CaU3E5__3_4();
		V_2 = L_66;
		int32_t L_67 = V_2;
		__this->set_U3CaU3E5__3_4(((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1)));
	}

IL_0240:
	{
		// while (a < 10)
		int32_t L_68 = __this->get_U3CaU3E5__3_4();
		if ((((int32_t)L_68) < ((int32_t)((int32_t)10))))
		{
			goto IL_015c;
		}
	}
	{
		// yield return new WaitForSeconds(3f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_69 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_69, (3.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_69);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_0266:
	{
		__this->set_U3CU3E1__state_0((-1));
		// StartCoroutine(PatternA());
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_70 = V_1;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_71 = V_1;
		NullCheck(L_71);
		RuntimeObject* L_72;
		L_72 = Boss_PatternA_mEB1A431AFF00704E3B75FE1F1BB98CC749265A0A(L_71, /*hidden argument*/NULL);
		NullCheck(L_70);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_73;
		L_73 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_70, L_72, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Boss/<PatternC>d__27::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPatternCU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9A03F1E88AD33ED30245C6420CC57A396DBCC380 (U3CPatternCU3Ed__27_t3A8A5112A6A731A35A3E2E988C34E9C5B225EB5D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Boss/<PatternC>d__27::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPatternCU3Ed__27_System_Collections_IEnumerator_Reset_m6EFAAAA85277397D4CEBDC3435240F31181274DD (U3CPatternCU3Ed__27_t3A8A5112A6A731A35A3E2E988C34E9C5B225EB5D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPatternCU3Ed__27_System_Collections_IEnumerator_Reset_m6EFAAAA85277397D4CEBDC3435240F31181274DD_RuntimeMethod_var)));
	}
}
// System.Object Boss/<PatternC>d__27::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPatternCU3Ed__27_System_Collections_IEnumerator_get_Current_mA8C95EAA0AD390F464A26330C769FD8B6FFEFB74 (U3CPatternCU3Ed__27_t3A8A5112A6A731A35A3E2E988C34E9C5B225EB5D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Boss/<PatternD>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPatternDU3Ed__28__ctor_m094E564F626A5A024F0EBEAEA5DD3C15D98D1047 (U3CPatternDU3Ed__28_t5823F6CE054BD0A929622F0A091C411A31F741B0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Boss/<PatternD>d__28::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPatternDU3Ed__28_System_IDisposable_Dispose_mEF2E78545481DFF53AB6182E2A7FDFA9AED953F4 (U3CPatternDU3Ed__28_t5823F6CE054BD0A929622F0A091C411A31F741B0 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Boss/<PatternD>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPatternDU3Ed__28_MoveNext_m75F36F81A3B6F1EFCA57BB2CB030B42E71E6FBE8 (U3CPatternDU3Ed__28_t5823F6CE054BD0A929622F0A091C411A31F741B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * V_1 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0065;
			}
			case 2:
			{
				goto IL_0166;
			}
			case 3:
			{
				goto IL_01b2;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// GameObject bullet = null;
		__this->set_U3CbulletU3E5__2_3((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// Vector2 dir = new Vector2(0, 0);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		// int a = 0;
		__this->set_U3CaU3E5__3_4(0);
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0065:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_017f;
	}

IL_0071:
	{
		// if (isPhase == false) continue;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = L_4->get_isPhase_27();
		if (!L_5)
		{
			goto IL_017f;
		}
	}
	{
		// float x = Mathf.Cos(Time.time * moveSpeed) * moveArea;
		float L_6;
		L_6 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_7 = V_1;
		NullCheck(L_7);
		float L_8 = L_7->get_moveSpeed_23();
		float L_9;
		L_9 = cosf(((float)il2cpp_codegen_multiply((float)L_6, (float)L_8)));
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_10 = V_1;
		NullCheck(L_10);
		float L_11 = L_10->get_moveArea_24();
		V_3 = ((float)il2cpp_codegen_multiply((float)L_9, (float)L_11));
		// float y = Mathf.Sin(Time.time * moveSpeed) * moveArea;
		float L_12;
		L_12 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_13 = V_1;
		NullCheck(L_13);
		float L_14 = L_13->get_moveSpeed_23();
		float L_15;
		L_15 = sinf(((float)il2cpp_codegen_multiply((float)L_12, (float)L_14)));
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_16 = V_1;
		NullCheck(L_16);
		float L_17 = L_16->get_moveArea_24();
		V_4 = ((float)il2cpp_codegen_multiply((float)L_15, (float)L_17));
		// bullet = Fire(bullet,0);
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_18 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_U3CbulletU3E5__2_3();
		NullCheck(L_18);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Boss_Fire_mB2EAC4B5566D62F3C5C9829617A39CB22AD8C9E2(L_18, L_19, 0, /*hidden argument*/NULL);
		__this->set_U3CbulletU3E5__2_3(L_20);
		// bullet.transform.position = new Vector3(transform.position.x + x, transform.position.y + y, transform.position.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_U3CbulletU3E5__2_3();
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_23 = V_1;
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_x_2();
		float L_27 = V_3;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_28 = V_1;
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_y_3();
		float L_32 = V_4;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_33 = V_1;
		NullCheck(L_33);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_34, /*hidden argument*/NULL);
		float L_36 = L_35.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_37), ((float)il2cpp_codegen_add((float)L_26, (float)L_27)), ((float)il2cpp_codegen_add((float)L_31, (float)L_32)), L_36, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_22, L_37, /*hidden argument*/NULL);
		// dir = targetPosition.position - bullet.transform.position;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_38 = V_1;
		NullCheck(L_38);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39 = L_38->get_targetPosition_18();
		NullCheck(L_39);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_39, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = __this->get_U3CbulletU3E5__2_3();
		NullCheck(L_41);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_42, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_40, L_43, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_45;
		L_45 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_44, /*hidden argument*/NULL);
		V_2 = L_45;
		// bullet.GetComponent<Rigidbody2D>().AddForce(dir * 50);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46 = __this->get_U3CbulletU3E5__2_3();
		NullCheck(L_46);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_47;
		L_47 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_46, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_48 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_49;
		L_49 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_48, (50.0f), /*hidden argument*/NULL);
		NullCheck(L_47);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_47, L_49, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_50 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_50, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_50);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0166:
	{
		__this->set_U3CU3E1__state_0((-1));
		// a++;
		int32_t L_51 = __this->get_U3CaU3E5__3_4();
		V_5 = L_51;
		int32_t L_52 = V_5;
		__this->set_U3CaU3E5__3_4(((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1)));
	}

IL_017f:
	{
		// while (a <100)
		int32_t L_53 = __this->get_U3CaU3E5__3_4();
		if ((((int32_t)L_53) < ((int32_t)((int32_t)100))))
		{
			goto IL_0071;
		}
	}
	{
		// StartCoroutine(PatternE());
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_54 = V_1;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_55 = V_1;
		NullCheck(L_55);
		RuntimeObject* L_56;
		L_56 = Boss_PatternE_mE63F28CED6D6726F17A508DCF1B91E02779721B9(L_55, /*hidden argument*/NULL);
		NullCheck(L_54);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_57;
		L_57 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_54, L_56, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(20f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_58 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_58, (20.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_58);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_01b2:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object Boss/<PatternD>d__28::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPatternDU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m60D2FEC2C9C3953350BC168B36BED9BC66B59A67 (U3CPatternDU3Ed__28_t5823F6CE054BD0A929622F0A091C411A31F741B0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Boss/<PatternD>d__28::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPatternDU3Ed__28_System_Collections_IEnumerator_Reset_m12F28D292D9BDDE212E393890733B2A525E1573A (U3CPatternDU3Ed__28_t5823F6CE054BD0A929622F0A091C411A31F741B0 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPatternDU3Ed__28_System_Collections_IEnumerator_Reset_m12F28D292D9BDDE212E393890733B2A525E1573A_RuntimeMethod_var)));
	}
}
// System.Object Boss/<PatternD>d__28::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPatternDU3Ed__28_System_Collections_IEnumerator_get_Current_mB8A69448C8DCDFB376C3469067A83472F1130084 (U3CPatternDU3Ed__28_t5823F6CE054BD0A929622F0A091C411A31F741B0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Boss/<PatternE>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPatternEU3Ed__29__ctor_m67F307BA33BD9573163C02F2B76F96BDD901B93C (U3CPatternEU3Ed__29_t2C056D78C572E8729F568AFD66E5C57D9844F599 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Boss/<PatternE>d__29::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPatternEU3Ed__29_System_IDisposable_Dispose_mBD863DD22A2E7A5FB8608AA636D6CF09BAC0E0D8 (U3CPatternEU3Ed__29_t2C056D78C572E8729F568AFD66E5C57D9844F599 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Boss/<PatternE>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPatternEU3Ed__29_MoveNext_m7C4C0BC72B88EEA1CAC63B84C23CA1D90ED00CEF (U3CPatternEU3Ed__29_t2C056D78C572E8729F568AFD66E5C57D9844F599 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0070;
			}
			case 2:
			{
				goto IL_00d0;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// isMove = false;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_3 = V_1;
		NullCheck(L_3);
		L_3->set_isMove_28((bool)0);
		// StartCoroutine(MoveTo(gameObject, new Vector3(0f, 4.2f, 0)));
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_4 = V_1;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_5 = V_1;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_6 = V_1;
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), (0.0f), (4.19999981f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		RuntimeObject* L_9;
		L_9 = Boss_MoveTo_m510E6DCD3C69625AA8B17053B193C1EB58459B70(L_5, L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_4);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_10;
		L_10 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_4, L_9, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_11 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_11, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0070:
	{
		__this->set_U3CU3E1__state_0((-1));
		// GameObject prefab = Instantiate(enemyPrefab, bulletPosition);
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_12 = V_1;
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = L_12->get_enemyPrefab_16();
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_14 = V_1;
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = L_14->get_bulletPosition_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_13, L_15, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		V_2 = L_16;
		// prefab.transform.SetParent(null);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = V_2;
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_18, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/NULL);
		// StartCoroutine(MoveTo(prefab, new Vector3(0f, 0f, 0f)));
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_19 = V_1;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_20 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_22), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_20);
		RuntimeObject* L_23;
		L_23 = Boss_MoveTo_m510E6DCD3C69625AA8B17053B193C1EB58459B70(L_20, L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_19);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_24;
		L_24 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_19, L_23, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(10f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_25 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_25, (10.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_25);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00d0:
	{
		__this->set_U3CU3E1__state_0((-1));
		// StartCoroutine(PatternF());
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_26 = V_1;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_27 = V_1;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = Boss_PatternF_m2C03698AC2FFCAAF7865F97C88CC33AF0BC18255(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_29;
		L_29 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_26, L_28, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Boss/<PatternE>d__29::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPatternEU3Ed__29_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8FEE9AB44B409C418B8B71DB113972F127C40AAF (U3CPatternEU3Ed__29_t2C056D78C572E8729F568AFD66E5C57D9844F599 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Boss/<PatternE>d__29::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPatternEU3Ed__29_System_Collections_IEnumerator_Reset_m66E911A01BDF35BC17D2126FCBFC5CF0463D7411 (U3CPatternEU3Ed__29_t2C056D78C572E8729F568AFD66E5C57D9844F599 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPatternEU3Ed__29_System_Collections_IEnumerator_Reset_m66E911A01BDF35BC17D2126FCBFC5CF0463D7411_RuntimeMethod_var)));
	}
}
// System.Object Boss/<PatternE>d__29::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPatternEU3Ed__29_System_Collections_IEnumerator_get_Current_mEC525BA9C962863594FC6B21785EC1FABE645080 (U3CPatternEU3Ed__29_t2C056D78C572E8729F568AFD66E5C57D9844F599 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Boss/<PatternF>d__30::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPatternFU3Ed__30__ctor_mEFDCC296BD01112C480AC5A53C1FD791208E71B1 (U3CPatternFU3Ed__30_tEF3418D9378F3DCD674C92CB3CEFFA423C172816 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Boss/<PatternF>d__30::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPatternFU3Ed__30_System_IDisposable_Dispose_mDFF60B33C48036BC3BFF03071845A62764D7F415 (U3CPatternFU3Ed__30_tEF3418D9378F3DCD674C92CB3CEFFA423C172816 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Boss/<PatternF>d__30::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPatternFU3Ed__30_MoveNext_m6B18126C901AB0FB253D518A45FA926DF2EFB354 (U3CPatternFU3Ed__30_tEF3418D9378F3DCD674C92CB3CEFFA423C172816 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m770EEE9CD21A968F23ABBBEF9BF3897DA14D085E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMagic_t0CC50A162DDF9C4C4549E05883368ACD19D8F36C_m95355C42A2997AD4E4E148754F3C41EE1BA67860_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_00ff;
			}
			case 2:
			{
				goto IL_0130;
			}
			case 3:
			{
				goto IL_01c8;
			}
			case 4:
			{
				goto IL_0203;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// int a = 0;
		__this->set_U3CaU3E5__2_3(0);
		// int b = 0;
		__this->set_U3CbU3E5__3_4(0);
		// float randomX = 0f;
		V_2 = (0.0f);
		// float randomY = 0f;
		V_3 = (0.0f);
		// int randPattern = 0;
		__this->set_U3CrandPatternU3E5__4_5(0);
		// randPattern = Random.Range(1, 2);
		int32_t L_3;
		L_3 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, 2, /*hidden argument*/NULL);
		__this->set_U3CrandPatternU3E5__4_5(L_3);
		// GameObject bullet =null;
		__this->set_U3CbulletU3E5__5_6((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		goto IL_021c;
	}

IL_006b:
	{
		// randomX = Random.Range(-1.3f, 1.3f);
		float L_4;
		L_4 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-1.29999995f), (1.29999995f), /*hidden argument*/NULL);
		V_2 = L_4;
		// randomY = Random.Range(-2.5f, 2.5f);
		float L_5;
		L_5 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-2.5f), (2.5f), /*hidden argument*/NULL);
		V_3 = L_5;
		// StartCoroutine(MoveTo(gameObject, new Vector3(randomX, randomY, 0)));
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_6 = V_1;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_7 = V_1;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_8 = V_1;
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		float L_10 = V_2;
		float L_11 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), L_10, L_11, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		RuntimeObject* L_13;
		L_13 = Boss_MoveTo_m510E6DCD3C69625AA8B17053B193C1EB58459B70(L_7, L_9, L_12, /*hidden argument*/NULL);
		NullCheck(L_6);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_14;
		L_14 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_6, L_13, /*hidden argument*/NULL);
		// laserObject.GetComponent<Collider2D>().enabled = false;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_15 = V_1;
		NullCheck(L_15);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = L_15->get_laserObject_17();
		NullCheck(L_16);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_17;
		L_17 = GameObject_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m770EEE9CD21A968F23ABBBEF9BF3897DA14D085E(L_16, /*hidden argument*/GameObject_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m770EEE9CD21A968F23ABBBEF9BF3897DA14D085E_RuntimeMethod_var);
		NullCheck(L_17);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_17, (bool)0, /*hidden argument*/NULL);
		// laserObject.GetComponent<SpriteRenderer>().enabled = true;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_18 = V_1;
		NullCheck(L_18);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = L_18->get_laserObject_17();
		NullCheck(L_19);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_20;
		L_20 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_19, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		NullCheck(L_20);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_20, (bool)1, /*hidden argument*/NULL);
		// for (int i=0;i<3;i++)
		__this->set_U3CiU3E5__6_7(0);
		goto IL_0149;
	}

IL_00d5:
	{
		// laserObject.GetComponent<Magic>().Changesprite(1);
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_21 = V_1;
		NullCheck(L_21);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = L_21->get_laserObject_17();
		NullCheck(L_22);
		Magic_t0CC50A162DDF9C4C4549E05883368ACD19D8F36C * L_23;
		L_23 = GameObject_GetComponent_TisMagic_t0CC50A162DDF9C4C4549E05883368ACD19D8F36C_m95355C42A2997AD4E4E148754F3C41EE1BA67860(L_22, /*hidden argument*/GameObject_GetComponent_TisMagic_t0CC50A162DDF9C4C4549E05883368ACD19D8F36C_m95355C42A2997AD4E4E148754F3C41EE1BA67860_RuntimeMethod_var);
		NullCheck(L_23);
		Magic_Changesprite_m59AE75B14F17C675A79BE5E049B8E64257870583(L_23, 1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_24 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_24, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_24);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00ff:
	{
		__this->set_U3CU3E1__state_0((-1));
		// laserObject.GetComponent<Magic>().Changesprite(0);
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_25 = V_1;
		NullCheck(L_25);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = L_25->get_laserObject_17();
		NullCheck(L_26);
		Magic_t0CC50A162DDF9C4C4549E05883368ACD19D8F36C * L_27;
		L_27 = GameObject_GetComponent_TisMagic_t0CC50A162DDF9C4C4549E05883368ACD19D8F36C_m95355C42A2997AD4E4E148754F3C41EE1BA67860(L_26, /*hidden argument*/GameObject_GetComponent_TisMagic_t0CC50A162DDF9C4C4549E05883368ACD19D8F36C_m95355C42A2997AD4E4E148754F3C41EE1BA67860_RuntimeMethod_var);
		NullCheck(L_27);
		Magic_Changesprite_m59AE75B14F17C675A79BE5E049B8E64257870583(L_27, 0, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_28 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_28, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_28);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0130:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i=0;i<3;i++)
		int32_t L_29 = __this->get_U3CiU3E5__6_7();
		V_4 = L_29;
		int32_t L_30 = V_4;
		__this->set_U3CiU3E5__6_7(((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1)));
	}

IL_0149:
	{
		// for (int i=0;i<3;i++)
		int32_t L_31 = __this->get_U3CiU3E5__6_7();
		if ((((int32_t)L_31) < ((int32_t)3)))
		{
			goto IL_00d5;
		}
	}
	{
		// laserObject.GetComponent<Magic>().Changesprite(2);
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_32 = V_1;
		NullCheck(L_32);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = L_32->get_laserObject_17();
		NullCheck(L_33);
		Magic_t0CC50A162DDF9C4C4549E05883368ACD19D8F36C * L_34;
		L_34 = GameObject_GetComponent_TisMagic_t0CC50A162DDF9C4C4549E05883368ACD19D8F36C_m95355C42A2997AD4E4E148754F3C41EE1BA67860(L_33, /*hidden argument*/GameObject_GetComponent_TisMagic_t0CC50A162DDF9C4C4549E05883368ACD19D8F36C_m95355C42A2997AD4E4E148754F3C41EE1BA67860_RuntimeMethod_var);
		NullCheck(L_34);
		Magic_Changesprite_m59AE75B14F17C675A79BE5E049B8E64257870583(L_34, 2, /*hidden argument*/NULL);
		// laserObject.GetComponent<Collider2D>().enabled = true;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_35 = V_1;
		NullCheck(L_35);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = L_35->get_laserObject_17();
		NullCheck(L_36);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_37;
		L_37 = GameObject_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m770EEE9CD21A968F23ABBBEF9BF3897DA14D085E(L_36, /*hidden argument*/GameObject_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m770EEE9CD21A968F23ABBBEF9BF3897DA14D085E_RuntimeMethod_var);
		NullCheck(L_37);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_37, (bool)1, /*hidden argument*/NULL);
		// for (int i = 0;i<5;i++)
		__this->set_U3CiU3E5__6_7(0);
		goto IL_01e1;
	}

IL_017d:
	{
		// CircleFire(bullet, 25, b, bulletPosition, 0,130);
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_38 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = __this->get_U3CbulletU3E5__5_6();
		int32_t L_40 = __this->get_U3CbU3E5__3_4();
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_41 = V_1;
		NullCheck(L_41);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42 = L_41->get_bulletPosition_19();
		NullCheck(L_38);
		Boss_CircleFire_mA7EFF362AE1DF31979EBCA9AE0237D8A6E833CA6(L_38, L_39, (25.0f), L_40, L_42, 0, (130.0f), /*hidden argument*/NULL);
		// b += 10;
		int32_t L_43 = __this->get_U3CbU3E5__3_4();
		__this->set_U3CbU3E5__3_4(((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)((int32_t)10))));
		// yield return new WaitForSeconds(0.2f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_44 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_44, (0.200000003f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_44);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_01c8:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0;i<5;i++)
		int32_t L_45 = __this->get_U3CiU3E5__6_7();
		V_4 = L_45;
		int32_t L_46 = V_4;
		__this->set_U3CiU3E5__6_7(((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1)));
	}

IL_01e1:
	{
		// for (int i = 0;i<5;i++)
		int32_t L_47 = __this->get_U3CiU3E5__6_7();
		if ((((int32_t)L_47) < ((int32_t)5)))
		{
			goto IL_017d;
		}
	}
	{
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_48 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_48, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_48);
		__this->set_U3CU3E1__state_0(4);
		return (bool)1;
	}

IL_0203:
	{
		__this->set_U3CU3E1__state_0((-1));
		// a++;
		int32_t L_49 = __this->get_U3CaU3E5__2_3();
		V_4 = L_49;
		int32_t L_50 = V_4;
		__this->set_U3CaU3E5__2_3(((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1)));
	}

IL_021c:
	{
		// while (a<4)
		int32_t L_51 = __this->get_U3CaU3E5__2_3();
		if ((((int32_t)L_51) < ((int32_t)4)))
		{
			goto IL_006b;
		}
	}
	{
		// laserObject.GetComponent<Collider2D>().enabled = false;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_52 = V_1;
		NullCheck(L_52);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_53 = L_52->get_laserObject_17();
		NullCheck(L_53);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_54;
		L_54 = GameObject_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m770EEE9CD21A968F23ABBBEF9BF3897DA14D085E(L_53, /*hidden argument*/GameObject_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m770EEE9CD21A968F23ABBBEF9BF3897DA14D085E_RuntimeMethod_var);
		NullCheck(L_54);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_54, (bool)0, /*hidden argument*/NULL);
		// laserObject.GetComponent<SpriteRenderer>().enabled = false;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_55 = V_1;
		NullCheck(L_55);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56 = L_55->get_laserObject_17();
		NullCheck(L_56);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_57;
		L_57 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_56, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		NullCheck(L_57);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_57, (bool)0, /*hidden argument*/NULL);
		// if (randPattern==1)
		int32_t L_58 = __this->get_U3CrandPatternU3E5__4_5();
		if ((!(((uint32_t)L_58) == ((uint32_t)1))))
		{
			goto IL_0269;
		}
	}
	{
		// isMove = true;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_59 = V_1;
		NullCheck(L_59);
		L_59->set_isMove_28((bool)1);
		// StartCoroutine(PatternD());
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_60 = V_1;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_61 = V_1;
		NullCheck(L_61);
		RuntimeObject* L_62;
		L_62 = Boss_PatternD_mF16453584470D0F9B39877FEE1E6BA708AAD3032(L_61, /*hidden argument*/NULL);
		NullCheck(L_60);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_63;
		L_63 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_60, L_62, /*hidden argument*/NULL);
		// }
		goto IL_0276;
	}

IL_0269:
	{
		// StartCoroutine(PatternE());
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_64 = V_1;
		Boss_tE082AD2D46B396DA3B89068C8DC91FB90B7CCC82 * L_65 = V_1;
		NullCheck(L_65);
		RuntimeObject* L_66;
		L_66 = Boss_PatternE_mE63F28CED6D6726F17A508DCF1B91E02779721B9(L_65, /*hidden argument*/NULL);
		NullCheck(L_64);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_67;
		L_67 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_64, L_66, /*hidden argument*/NULL);
	}

IL_0276:
	{
		// }
		return (bool)0;
	}
}
// System.Object Boss/<PatternF>d__30::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPatternFU3Ed__30_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m80583CB0526B194EA0E0210BD2D273B6FEDA343E (U3CPatternFU3Ed__30_tEF3418D9378F3DCD674C92CB3CEFFA423C172816 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Boss/<PatternF>d__30::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPatternFU3Ed__30_System_Collections_IEnumerator_Reset_m03D2CAEACC07C8B4D4AEA17FEB53190FF34DF3D2 (U3CPatternFU3Ed__30_tEF3418D9378F3DCD674C92CB3CEFFA423C172816 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPatternFU3Ed__30_System_Collections_IEnumerator_Reset_m03D2CAEACC07C8B4D4AEA17FEB53190FF34DF3D2_RuntimeMethod_var)));
	}
}
// System.Object Boss/<PatternF>d__30::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPatternFU3Ed__30_System_Collections_IEnumerator_get_Current_m0F518753DB4BE91350E9E11CB5FB90763D0E9DA4 (U3CPatternFU3Ed__30_tEF3418D9378F3DCD674C92CB3CEFFA423C172816 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Bullet/<Srali>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSraliU3Ed__9__ctor_m97FD948693D7EDE63DD66107DD81A40A328C4703 (U3CSraliU3Ed__9_t1289A74D5B6E12DCCA8A9F9E98B086A1E44FDA0A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Bullet/<Srali>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSraliU3Ed__9_System_IDisposable_Dispose_mE534C1398752A8CBEC27789105EE920991DD1C33 (U3CSraliU3Ed__9_t1289A74D5B6E12DCCA8A9F9E98B086A1E44FDA0A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Bullet/<Srali>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSraliU3Ed__9_MoveNext_m62EEA2A56446C16E6ED020BABC1F6B81A0AB5702 (U3CSraliU3Ed__9_t1289A74D5B6E12DCCA8A9F9E98B086A1E44FDA0A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC0A008941AD63E0CEC87F35CD74DEBD9F6C5606);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0047;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// ani.Play("Destoy");
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_4 = V_1;
		NullCheck(L_4);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_5 = L_4->get_ani_6();
		NullCheck(L_5);
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_5, _stringLiteralFC0A008941AD63E0CEC87F35CD74DEBD9F6C5606, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.54f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, (0.540000021f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0047:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Despawn();
		Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(5 /* System.Void Bullet::Despawn() */, L_7);
		// }
		return (bool)0;
	}
}
// System.Object Bullet/<Srali>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSraliU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3B2422C995D7320D7BA68AED8ED90C84E3FD0364 (U3CSraliU3Ed__9_t1289A74D5B6E12DCCA8A9F9E98B086A1E44FDA0A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Bullet/<Srali>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSraliU3Ed__9_System_Collections_IEnumerator_Reset_m50DD0375625A07815F33BEEC01A49C69667E38F4 (U3CSraliU3Ed__9_t1289A74D5B6E12DCCA8A9F9E98B086A1E44FDA0A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSraliU3Ed__9_System_Collections_IEnumerator_Reset_m50DD0375625A07815F33BEEC01A49C69667E38F4_RuntimeMethod_var)));
	}
}
// System.Object Bullet/<Srali>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSraliU3Ed__9_System_Collections_IEnumerator_get_Current_m9AAEA2662524E6A92A727A49BD7901DC3601DDA3 (U3CSraliU3Ed__9_t1289A74D5B6E12DCCA8A9F9E98B086A1E44FDA0A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Enemy/<Damaged>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDamagedU3Ed__11__ctor_m776303E53AEA06D86068D99387B002B05226EC5A (U3CDamagedU3Ed__11_t9A37EFE172E6E7E84D2CAA63B40884A35E7A10E0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Enemy/<Damaged>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDamagedU3Ed__11_System_IDisposable_Dispose_m5595A26C98AE461C58950CFBE3DEE652F4826821 (U3CDamagedU3Ed__11_t9A37EFE172E6E7E84D2CAA63B40884A35E7A10E0 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Enemy/<Damaged>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDamagedU3Ed__11_MoveNext_m8C38CC20CE5B195C38A494B5A06D8E2E5221EBA7 (U3CDamagedU3Ed__11_t9A37EFE172E6E7E84D2CAA63B40884A35E7A10E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0070;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if(hp <=0)
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_hp_8();
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		// gameObject.SetActive(false);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_6 = V_1;
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// spriteRenderer.color = new Color(0, 0, 0, 0);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_8 = V_1;
		NullCheck(L_8);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_9 = L_8->get_spriteRenderer_7();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_10), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_9, L_10, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_11 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_11, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0070:
	{
		__this->set_U3CU3E1__state_0((-1));
		// spriteRenderer.color = new Color(1, 1, 1, 1);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_12 = V_1;
		NullCheck(L_12);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_13 = L_12->get_spriteRenderer_7();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_14), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_13, L_14, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Enemy/<Damaged>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDamagedU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB2EF3A727E5243D1ACEE6AB3935513A6D97741A4 (U3CDamagedU3Ed__11_t9A37EFE172E6E7E84D2CAA63B40884A35E7A10E0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Enemy/<Damaged>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDamagedU3Ed__11_System_Collections_IEnumerator_Reset_m4F52D6B10C0B4B12B5AA63818DF98F5003A18DDB (U3CDamagedU3Ed__11_t9A37EFE172E6E7E84D2CAA63B40884A35E7A10E0 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDamagedU3Ed__11_System_Collections_IEnumerator_Reset_m4F52D6B10C0B4B12B5AA63818DF98F5003A18DDB_RuntimeMethod_var)));
	}
}
// System.Object Enemy/<Damaged>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDamagedU3Ed__11_System_Collections_IEnumerator_get_Current_mEDF5D642C6DFFEDB4341CC6C6EA9167C4EAD5B51 (U3CDamagedU3Ed__11_t9A37EFE172E6E7E84D2CAA63B40884A35E7A10E0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Enemy/<Shotting>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShottingU3Ed__9__ctor_m551FF20B689683CD560034C00367ED28BA0EFF22 (U3CShottingU3Ed__9_tF7F3C440403C77D1DEAE9488B7D073304F82B6C8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Enemy/<Shotting>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShottingU3Ed__9_System_IDisposable_Dispose_m0C9B2FD32ACAD98D49723B42F0F4CB37782FE6AE (U3CShottingU3Ed__9_tF7F3C440403C77D1DEAE9488B7D073304F82B6C8 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Enemy/<Shotting>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShottingU3Ed__9_MoveNext_mDC3705AC6DD74B9654A0DE209DFC7492E96C530D (U3CShottingU3Ed__9_tF7F3C440403C77D1DEAE9488B7D073304F82B6C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_005b;
			}
			case 2:
			{
				goto IL_017c;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// GameObject bullet = null;
		__this->set_U3CbulletU3E5__2_3((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// int oneShoting = 8;
		__this->set_U3ConeShotingU3E5__3_4(8);
		// float one = 0;
		__this->set_U3ConeU3E5__4_5((0.0f));
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005b:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0062:
	{
		// if (one>360)
		float L_4 = __this->get_U3ConeU3E5__4_5();
		if ((!(((float)L_4) > ((float)(360.0f)))))
		{
			goto IL_007a;
		}
	}
	{
		// one = 0;
		__this->set_U3ConeU3E5__4_5((0.0f));
	}

IL_007a:
	{
		// for (int i = 0; i < oneShoting; i++)
		V_2 = 0;
		goto IL_0145;
	}

IL_0081:
	{
		// bullet = Fire(bullet, 3);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_5 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_U3CbulletU3E5__2_3();
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Enemy_Fire_m635E8B9C975C4D57A7CC90535A295C0133EEC39B(L_5, L_6, 3, /*hidden argument*/NULL);
		__this->set_U3CbulletU3E5__2_3(L_7);
		// bullet.transform.position = bulletPosition.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_U3CbulletU3E5__2_3();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_10 = V_1;
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = L_10->get_bulletPosition_5();
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_9, L_12, /*hidden argument*/NULL);
		// bullet.GetComponent<Rigidbody2D>().AddForce(new Vector2(speed * Mathf.Cos(Mathf.PI * 2 * i / oneShoting + one), speed * Mathf.Sin(Mathf.PI * i * 2 / oneShoting + one)));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_U3CbulletU3E5__2_3();
		NullCheck(L_13);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_14;
		L_14 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_13, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_15 = V_1;
		NullCheck(L_15);
		float L_16 = L_15->get_speed_9();
		int32_t L_17 = V_2;
		int32_t L_18 = __this->get_U3ConeShotingU3E5__3_4();
		float L_19 = __this->get_U3ConeU3E5__4_5();
		float L_20;
		L_20 = cosf(((float)il2cpp_codegen_add((float)((float)((float)((float)il2cpp_codegen_multiply((float)(6.28318548f), (float)((float)((float)L_17))))/(float)((float)((float)L_18)))), (float)L_19)));
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_21 = V_1;
		NullCheck(L_21);
		float L_22 = L_21->get_speed_9();
		int32_t L_23 = V_2;
		int32_t L_24 = __this->get_U3ConeShotingU3E5__3_4();
		float L_25 = __this->get_U3ConeU3E5__4_5();
		float L_26;
		L_26 = sinf(((float)il2cpp_codegen_add((float)((float)((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(3.14159274f), (float)((float)((float)L_23)))), (float)(2.0f)))/(float)((float)((float)L_24)))), (float)L_25)));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_27), ((float)il2cpp_codegen_multiply((float)L_16, (float)L_20)), ((float)il2cpp_codegen_multiply((float)L_22, (float)L_26)), /*hidden argument*/NULL);
		NullCheck(L_14);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_14, L_27, /*hidden argument*/NULL);
		// bullet.transform.Rotate(new Vector3(0f, 0f, 360 * i / oneShoting - 90));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = __this->get_U3CbulletU3E5__2_3();
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_28, /*hidden argument*/NULL);
		int32_t L_30 = V_2;
		int32_t L_31 = __this->get_U3ConeShotingU3E5__3_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_32), (0.0f), (0.0f), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)360), (int32_t)L_30))/(int32_t)L_31)), (int32_t)((int32_t)90))))), /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_29, L_32, /*hidden argument*/NULL);
		// for (int i = 0; i < oneShoting; i++)
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_0145:
	{
		// for (int i = 0; i < oneShoting; i++)
		int32_t L_34 = V_2;
		int32_t L_35 = __this->get_U3ConeShotingU3E5__3_4();
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0081;
		}
	}
	{
		// one+=0.1f;
		float L_36 = __this->get_U3ConeU3E5__4_5();
		__this->set_U3ConeU3E5__4_5(((float)il2cpp_codegen_add((float)L_36, (float)(0.100000001f))));
		// yield return new WaitForSeconds(0.08f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_37 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_37, (0.0799999982f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_37);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_017c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_0062;
	}
}
// System.Object Enemy/<Shotting>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShottingU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD718C450BDDAF4757F01A5EA547683815306A047 (U3CShottingU3Ed__9_tF7F3C440403C77D1DEAE9488B7D073304F82B6C8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Enemy/<Shotting>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShottingU3Ed__9_System_Collections_IEnumerator_Reset_m9E96CF848EE4D9067687868FD3C1400A38BA2543 (U3CShottingU3Ed__9_tF7F3C440403C77D1DEAE9488B7D073304F82B6C8 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShottingU3Ed__9_System_Collections_IEnumerator_Reset_m9E96CF848EE4D9067687868FD3C1400A38BA2543_RuntimeMethod_var)));
	}
}
// System.Object Enemy/<Shotting>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShottingU3Ed__9_System_Collections_IEnumerator_get_Current_m5C684695942B9AD7A1A7390653962A769393CB12 (U3CShottingU3Ed__9_tF7F3C440403C77D1DEAE9488B7D073304F82B6C8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Player/<Damaged>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDamagedU3Ed__17__ctor_m54A714F395665DD537395C9D53DEE68FD0698EAE (U3CDamagedU3Ed__17_tB832BEEBB4DD5EDA6B8664FA17B5EE4E3B3CC3F7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Player/<Damaged>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDamagedU3Ed__17_System_IDisposable_Dispose_mEEA1022195492FD867F8E74FF5750775E59113FE (U3CDamagedU3Ed__17_tB832BEEBB4DD5EDA6B8664FA17B5EE4E3B3CC3F7 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Player/<Damaged>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDamagedU3Ed__17_MoveNext_m7B671F3AAEF84C6C1A0C0962304BF8E9FDF4D16C (U3CDamagedU3Ed__17_tB832BEEBB4DD5EDA6B8664FA17B5EE4E3B3CC3F7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0072;
			}
			case 2:
			{
				goto IL_00b6;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for(int i =0;i<5;i++)
		__this->set_U3CiU3E5__2_3(0);
		goto IL_00cd;
	}

IL_0035:
	{
		// spriteRenderer.color = new Color(1, 0, 0, 1);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_3 = V_1;
		NullCheck(L_3);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_4 = L_3->get_spriteRenderer_9();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_5), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_4, L_5, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.2f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, (0.200000003f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0072:
	{
		__this->set_U3CU3E1__state_0((-1));
		// spriteRenderer.color = new Color(1, 1, 1, 1);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_7 = V_1;
		NullCheck(L_7);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_8 = L_7->get_spriteRenderer_9();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_9), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_8, L_9, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.2f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_10 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_10, (0.200000003f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00b6:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for(int i =0;i<5;i++)
		int32_t L_11 = __this->get_U3CiU3E5__2_3();
		V_2 = L_11;
		int32_t L_12 = V_2;
		__this->set_U3CiU3E5__2_3(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)));
	}

IL_00cd:
	{
		// for(int i =0;i<5;i++)
		int32_t L_13 = __this->get_U3CiU3E5__2_3();
		if ((((int32_t)L_13) < ((int32_t)5)))
		{
			goto IL_0035;
		}
	}
	{
		// isDead = false;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_14 = V_1;
		NullCheck(L_14);
		L_14->set_isDead_13((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object Player/<Damaged>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDamagedU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2650C4CD40F1B4D917C13F33286B5AB129D9E147 (U3CDamagedU3Ed__17_tB832BEEBB4DD5EDA6B8664FA17B5EE4E3B3CC3F7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Player/<Damaged>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDamagedU3Ed__17_System_Collections_IEnumerator_Reset_mD03336DA31BA5F25DEEE474E794EA1680621F5AC (U3CDamagedU3Ed__17_tB832BEEBB4DD5EDA6B8664FA17B5EE4E3B3CC3F7 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDamagedU3Ed__17_System_Collections_IEnumerator_Reset_mD03336DA31BA5F25DEEE474E794EA1680621F5AC_RuntimeMethod_var)));
	}
}
// System.Object Player/<Damaged>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDamagedU3Ed__17_System_Collections_IEnumerator_get_Current_m9E22CE734AB91E43463D28520D6B443F674CAB44 (U3CDamagedU3Ed__17_tB832BEEBB4DD5EDA6B8664FA17B5EE4E3B3CC3F7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Player/<Fire>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireU3Ed__14__ctor_m43C9A721CDB5041D91908AFABECEDCE95D5C6C9C (U3CFireU3Ed__14_tE76C69BC1E345D96D8F5422E30F0B7BA407ADD90 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Player/<Fire>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireU3Ed__14_System_IDisposable_Dispose_m137B2A950F5FF620588A05107064831980080139 (U3CFireU3Ed__14_tE76C69BC1E345D96D8F5422E30F0B7BA407ADD90 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Player/<Fire>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFireU3Ed__14_MoveNext_m427D9CF355B7E20D57120801F8E67C22553D5C0E (U3CFireU3Ed__14_tE76C69BC1E345D96D8F5422E30F0B7BA407ADD90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// InstantiateOnPool();
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_4 = V_1;
		NullCheck(L_4);
		Player_InstantiateOnPool_m50562C36529398998CEEC6774E100FC8D0A1B20A(L_4, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(firelate);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_5 = V_1;
		NullCheck(L_5);
		float L_6 = L_5->get_firelate_11();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_7 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_7, L_6, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while(true)
		goto IL_001e;
	}
}
// System.Object Player/<Fire>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFireU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB83B32D545CF909E7228D089A815EF8725CA6B2B (U3CFireU3Ed__14_tE76C69BC1E345D96D8F5422E30F0B7BA407ADD90 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Player/<Fire>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireU3Ed__14_System_Collections_IEnumerator_Reset_mB859AF603D7C3BFA4D7532A2456B28AEC660B246 (U3CFireU3Ed__14_tE76C69BC1E345D96D8F5422E30F0B7BA407ADD90 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFireU3Ed__14_System_Collections_IEnumerator_Reset_mB859AF603D7C3BFA4D7532A2456B28AEC660B246_RuntimeMethod_var)));
	}
}
// System.Object Player/<Fire>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFireU3Ed__14_System_Collections_IEnumerator_get_Current_mFA4D2407EFBFFC56502EB7975C90A30F0ECEE3C3 (U3CFireU3Ed__14_tE76C69BC1E345D96D8F5422E30F0B7BA407ADD90 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * GameManager_get_PoolManager_m6D739307662563512C61E7785E677AE86C308166_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// public PoolManager PoolManager { get; private set; }
		PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * L_0 = __this->get_U3CPoolManagerU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GameManager_get_MaxPosition_m39454AABAA11B1EDBC2ECD786BF9F9E2A3F629BB_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 MaxPosition { get; private set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CMaxPositionU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GameManager_get_MinPosition_mB50D1C8AA1A9FA284172ACA40CA9C09082581FC8_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 MinPosition { get; private set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CMinPositionU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_PoolManager_m7639FE628749BA4FBE2322CA0CBE3213FAFB4EFB_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * ___value0, const RuntimeMethod* method)
{
	{
		// public PoolManager PoolManager { get; private set; }
		PoolManager_t3D87D7E524D29750183F40C27F3E4E707D6352B7 * L_0 = ___value0;
		__this->set_U3CPoolManagerU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_MaxPosition_mAF31D2CBDC7D08C3791DAC343441132B58B2CC82_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2 MaxPosition { get; private set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_U3CMaxPositionU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_MinPosition_m338E34493C6235788B3850D4F6FAC27D605788F5_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2 MinPosition { get; private set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_U3CMinPositionU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
