#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<HutongGames.PlayMaker.FsmEvent>
struct Action_1_tE1DD63598D608D566A4E17D2EB5AE1F33FC745A1;
// System.Action`1<HutongGames.PlayMaker.FsmState>
struct Action_1_t9212767A523C24A36F10F5C38487A2040C673BEB;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// HutongGames.PlayMaker.Actions.ComponentAction`1<System.Object>
struct ComponentAction_1_t39781389A7A1EAE8E5D32F963B02D6D4A8786FDA;
// HutongGames.PlayMaker.Actions.ComponentAction`1<UnityEngine.Rigidbody>
struct ComponentAction_1_t2BE634736F870C0EF239570C5C20FDEE79697BF8;
// HutongGames.PlayMaker.Actions.ComponentAction`1<UnityEngine.Rigidbody2D>
struct ComponentAction_1_t63BBE28C4E1290F71FF0653AE996063EB9715CD4;
// System.Collections.Generic.Dictionary`2<HutongGames.PlayMaker.Fsm,UnityEngine.RaycastHit2D>
struct Dictionary_2_tC5C4DDD30CBE22C2E681D17CAAC4EFDB82E9AFB5;
// System.Collections.Generic.Dictionary`2<System.String,HutongGames.PlayMaker.FsmEvent>
struct Dictionary_2_t902B24E6F92A525F24A4E5224598523CC55B1025;
// System.Func`2<System.Double[],System.Double>
struct Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577;
// System.Func`3<System.Double,System.Double,System.Double>
struct Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836;
// System.Collections.Generic.List`1<HutongGames.PlayMaker.DelayedEvent>
struct List_1_tA41A4A4B8707C2896E9BDC36BCA6E3E56C2B33B0;
// System.Collections.Generic.List`1<HutongGames.PlayMaker.Fsm>
struct List_1_tD7024F62D6CEB05FED3EDD2429E96D5A02E0A72F;
// System.Collections.Generic.List`1<HutongGames.PlayMaker.FsmEvent>
struct List_1_tBD06A0F686C4C464BEE5C4188807E552AB64D89D;
// System.Collections.Generic.List`1<PlayMakerFSM>
struct List_1_tE4F25CA67A8E800E4DE4A7323F0033AADABCB88C;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
// HutongGames.PlayMaker.FsmEvent[]
struct FsmEventU5BU5D_t6CFFD7E7FC1A5B9371657C586FB9AC012795717B;
// HutongGames.PlayMaker.FsmGameObject[]
struct FsmGameObjectU5BU5D_tC2BA38DD29AD2D8FA24D7F654F0F4BBA805B3008;
// HutongGames.PlayMaker.FsmState[]
struct FsmStateU5BU5D_tDBB92641587345478DF34938358F6BE619ADB154;
// HutongGames.PlayMaker.FsmTransition[]
struct FsmTransitionU5BU5D_t04E06263ABC3B89A4266A9D614A541E009BC8139;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// HutongGames.PlayMaker.NamedVariable[]
struct NamedVariableU5BU5D_t46BF6B013E1D4C724FFC3BA51924114AC0EAF50E;
// UnityEngine.Object[]
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873;
// UnityEngine.Rigidbody[]
struct RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Events.UnityAction[]
struct UnityActionU5BU5D_t9AA7B04736592528B8A2F1EDD3BB4F58F69921D4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// HutongGames.PlayMaker.Actions.AudioStop
struct AudioStop_tE41E93DA79B0F8FB98D7D2F5328FE5D90E005CE8;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0;
// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// HutongGames.PlayMaker.Fsm
struct Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t194C45226C554DFD429FC1674ED697DC66DD1A97;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43;
// HutongGames.PlayMaker.FsmEventData
struct FsmEventData_t453A58C9899C2D7415E4461A62DEF9460A41603D;
// HutongGames.PlayMaker.FsmEventTarget
struct FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0;
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t7025A28070D5CC87929DD35DECF6025E38BFA994;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_tBBEEB90F70BE79DBC16E48E0AE420C011A0A8DC6;
// HutongGames.PlayMaker.FsmLog
struct FsmLog_tF21848ABE23995239708F075B3DBAE380D201846;
// HutongGames.PlayMaker.FsmObject
struct FsmObject_t1DE6D50F1F7D5E8BD2D0356592F35FA7FA369158;
// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27;
// HutongGames.PlayMaker.FsmState
struct FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981;
// HutongGames.PlayMaker.FsmStateAction
struct FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA;
// HutongGames.PlayMaker.FsmString
struct FsmString_tE5EC1F4E6623FE9F414DFAC7F6A05149723279F0;
// FsmTemplate
struct FsmTemplate_t0D1C9EFA6C9EF653553B15A378B0E1E346D63458;
// HutongGames.PlayMaker.FsmTransition
struct FsmTransition_t0F3354FE53374C3EA811FC81F9089C34D615605E;
// HutongGames.PlayMaker.FsmVariables
struct FsmVariables_tD49AB4C0F66D430EDB385B1E45BB23A2E9D04F83;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t064573DA0DA55E7ADD59D064805A3A465403069B;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.Joint2D
struct Joint2D_t6BF0D20078680B9000B5BD0D3C30266458F8B964;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// HutongGames.PlayMaker.NamedVariable
struct NamedVariable_t20CC71366D75BA6F0A571416C460D87D8A20C54C;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PlayMakerFSM
struct PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// HutongGames.PlayMaker.Actions.UiButtonArray
struct UiButtonArray_t5DE403718B30E28AB52D19DB6407C55B9FCABA8F;
// UnityEngine.Video.VideoClip
struct VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86;
// HutongGames.PlayMaker.Actions.VideoPlayerSetUrl
struct VideoPlayerSetUrl_t971DA5BF3C09ED23BC24C51D90C5EC450E17585D;
// HutongGames.PlayMaker.Actions.VideoPlayerSetVideoClip
struct VideoPlayerSetVideoClip_t675AE8212EF3D8C6E4BE0D467B779CEA3808EA2E;
// HutongGames.PlayMaker.Actions.VideoPlayerSetWaitForFirstFrame
struct VideoPlayerSetWaitForFirstFrame_t3820CBC2C4263ECE86477C77B73D8D56E00CE7DB;
// HutongGames.PlayMaker.Actions.VideoPlayerStartedEvent
struct VideoPlayerStartedEvent_t6D74F097936F5E709026F1065BE86AADE7B5B353;
// HutongGames.PlayMaker.Actions.VideoPlayerStepForward
struct VideoPlayerStepForward_tE28310310F2FEF9F36BAD45282CE39220038DB96;
// HutongGames.PlayMaker.Actions.VideoPlayerStop
struct VideoPlayerStop_tD68F9453B27B5A04C629A05D60C32546A113D947;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// HutongGames.PlayMaker.Actions.Wait
struct Wait_t64225863007A083840ECC467675CEF44F2BC7557;
// HutongGames.PlayMaker.Actions.WaitAnyKey
struct WaitAnyKey_tA60E914ADD7DB28422E0BFE0BF7E9C5EE71C24A5;
// HutongGames.PlayMaker.Actions.WakeAllRigidBodies
struct WakeAllRigidBodies_t8BBF975016A4C22DF0DE8275DDC8858CA0A5B03B;
// HutongGames.PlayMaker.Actions.WakeAllRigidBodies2d
struct WakeAllRigidBodies2d_t90EBBB11BA84FEF8917C874A0C35AECE3DF9DAE3;
// HutongGames.PlayMaker.Actions.WakeUp
struct WakeUp_t09D0AF55A7CF33E212DFBA3E62508A4CC4FA5177;
// HutongGames.PlayMaker.Actions.WakeUp2d
struct WakeUp2d_t46006C6907CDFEFD9FD9FABDBD337777866FEEFB;
// HutongGames.PlayMaker.Actions.WorldToScreenPoint
struct WorldToScreenPoint_t8910E6758FFDF0CE1BE7FA19C9D9E9AE6BBAC2C9;
// HutongGames.PlayMaker.Actions.ArrayContains/<>c
struct U3CU3Ec_tC89D48A9864F251FFBA9963727CC54BE4DE96545;
// HutongGames.PlayMaker.Actions.AudioStop/<VolumeFade>d__5
struct U3CVolumeFadeU3Ed__5_tBB4C56747CF82A9E31C3577F8198EDA2918E1B47;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// HutongGames.PlayMaker.Actions.EaseFsmAction/EasingFunction
struct EasingFunction_t21A9929DE6BD9D0A54275182E77EB836E500CA00;
// HutongGames.EasingFunction/Function
struct Function_t4E4E4D61E1262E637C6DEC6FD07D8E2FC563DB8C;
// HutongGames.PlayMaker.Actions.MathExpression/Property
struct Property_t7C58AF94B5215C270A9ABF4C744CDB06CC8E51D9;
// Mathos.Parser.MathParser/<>c
struct U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073;
// PlayMakerFSM/AddEventHandlerDelegate
struct AddEventHandlerDelegate_t062DD81912BDA3D895270DA8788B18FEC448E2BB;
// HutongGames.PlayMaker.Actions.UiButtonArray/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_tBB9CFD4285A7A88C8457754B066FBA85081B4B8C;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8;

IL2CPP_EXTERN_C RuntimeClass* EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rigidbody2DU5BU5D_t9CE3D06C92F81A1266F9DDF9BE6180FE19CC5CEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC89D48A9864F251FFBA9963727CC54BE4DE96545_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0C6689814A54F374A721B62E5320F663A3DDA352;
IL2CPP_EXTERN_C String_t* _stringLiteral60087BCB0F8F1C36AA4514081E294A6D9CA71FCF;
IL2CPP_EXTERN_C String_t* _stringLiteral6118E214E487B4FE7E8547DCB5DC389BFCD866E0;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentAction_1_UpdateCache_m1F7594191AECFAE2119A979F703FD8C43FEFF6B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentAction_1_UpdateCache_mC90D6C90299F65E97FB40E04836D81F1E1BF626D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentAction_1__ctor_m231827CA922C5320028EBFBC77B61F7629C5A5B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentAction_1__ctor_m467D8B3FAFB5A2B8A225C70D0B7973C9F1C3AF20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentAction_1_get_rigidbody2d_mAF15F6B5BC4676C250EECF774CADF3B8A314AEC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentAction_1_get_rigidbody_mF6B7FEFF15FE183AB91B7B9374830EDAE63944B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_mE0279031C6B378280F6E848C495D87D03F1647B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CVolumeFadeU3Ed__5_System_Collections_IEnumerator_Reset_mB237E0E6205412B8BDE7D120D6F21A29234EF4EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VideoPlayerStartedEvent_OnStarted_mF465904D4B4215366A0754BE73C3B97BD304E454_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873;
struct RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B;
struct Rigidbody2DU5BU5D_t9CE3D06C92F81A1266F9DDF9BE6180FE19CC5CEF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// HutongGames.PlayMaker.FsmEvent
struct  FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43  : public RuntimeObject
{
public:
	// System.String HutongGames.PlayMaker.FsmEvent::name
	String_t* ___name_2;
	// System.Boolean HutongGames.PlayMaker.FsmEvent::isSystemEvent
	bool ___isSystemEvent_3;
	// System.Boolean HutongGames.PlayMaker.FsmEvent::isGlobal
	bool ___isGlobal_4;
	// System.String HutongGames.PlayMaker.FsmEvent::_path
	String_t* ____path_5;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}

	inline static int32_t get_offset_of_isSystemEvent_3() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43, ___isSystemEvent_3)); }
	inline bool get_isSystemEvent_3() const { return ___isSystemEvent_3; }
	inline bool* get_address_of_isSystemEvent_3() { return &___isSystemEvent_3; }
	inline void set_isSystemEvent_3(bool value)
	{
		___isSystemEvent_3 = value;
	}

	inline static int32_t get_offset_of_isGlobal_4() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43, ___isGlobal_4)); }
	inline bool get_isGlobal_4() const { return ___isGlobal_4; }
	inline bool* get_address_of_isGlobal_4() { return &___isGlobal_4; }
	inline void set_isGlobal_4(bool value)
	{
		___isGlobal_4 = value;
	}

	inline static int32_t get_offset_of__path_5() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43, ____path_5)); }
	inline String_t* get__path_5() const { return ____path_5; }
	inline String_t** get_address_of__path_5() { return &____path_5; }
	inline void set__path_5(String_t* value)
	{
		____path_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____path_5), (void*)value);
	}
};

struct FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,HutongGames.PlayMaker.FsmEvent> HutongGames.PlayMaker.FsmEvent::_eventLookup
	Dictionary_2_t902B24E6F92A525F24A4E5224598523CC55B1025 * ____eventLookup_0;
	// System.Object HutongGames.PlayMaker.FsmEvent::syncObj
	RuntimeObject * ___syncObj_1;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<BecameInvisible>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CBecameInvisibleU3Ek__BackingField_6;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<BecameVisible>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CBecameVisibleU3Ek__BackingField_7;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<CollisionEnter>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CCollisionEnterU3Ek__BackingField_8;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<CollisionExit>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CCollisionExitU3Ek__BackingField_9;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<CollisionStay>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CCollisionStayU3Ek__BackingField_10;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<CollisionEnter2D>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CCollisionEnter2DU3Ek__BackingField_11;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<CollisionExit2D>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CCollisionExit2DU3Ek__BackingField_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<CollisionStay2D>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CCollisionStay2DU3Ek__BackingField_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<ControllerColliderHit>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CControllerColliderHitU3Ek__BackingField_14;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<Finished>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CFinishedU3Ek__BackingField_15;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<LevelLoaded>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CLevelLoadedU3Ek__BackingField_16;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<MouseDown>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CMouseDownU3Ek__BackingField_17;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<MouseDrag>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CMouseDragU3Ek__BackingField_18;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<MouseEnter>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CMouseEnterU3Ek__BackingField_19;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<MouseExit>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CMouseExitU3Ek__BackingField_20;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<MouseOver>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CMouseOverU3Ek__BackingField_21;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<MouseUp>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CMouseUpU3Ek__BackingField_22;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<MouseUpAsButton>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CMouseUpAsButtonU3Ek__BackingField_23;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<TriggerEnter>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CTriggerEnterU3Ek__BackingField_24;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<TriggerExit>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CTriggerExitU3Ek__BackingField_25;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<TriggerStay>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CTriggerStayU3Ek__BackingField_26;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<TriggerEnter2D>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CTriggerEnter2DU3Ek__BackingField_27;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<TriggerExit2D>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CTriggerExit2DU3Ek__BackingField_28;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<TriggerStay2D>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CTriggerStay2DU3Ek__BackingField_29;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<ApplicationFocus>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CApplicationFocusU3Ek__BackingField_30;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<ApplicationPause>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CApplicationPauseU3Ek__BackingField_31;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<ApplicationQuit>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CApplicationQuitU3Ek__BackingField_32;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<ParticleCollision>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CParticleCollisionU3Ek__BackingField_33;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<JointBreak>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CJointBreakU3Ek__BackingField_34;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<JointBreak2D>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CJointBreak2DU3Ek__BackingField_35;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<Disable>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CDisableU3Ek__BackingField_36;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<PlayerConnected>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CPlayerConnectedU3Ek__BackingField_37;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<ServerInitialized>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CServerInitializedU3Ek__BackingField_38;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<ConnectedToServer>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CConnectedToServerU3Ek__BackingField_39;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<PlayerDisconnected>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CPlayerDisconnectedU3Ek__BackingField_40;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<DisconnectedFromServer>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CDisconnectedFromServerU3Ek__BackingField_41;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<FailedToConnect>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CFailedToConnectU3Ek__BackingField_42;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<FailedToConnectToMasterServer>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CFailedToConnectToMasterServerU3Ek__BackingField_43;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<MasterServerEvent>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CMasterServerEventU3Ek__BackingField_44;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<NetworkInstantiate>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CNetworkInstantiateU3Ek__BackingField_45;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<UiBeginDrag>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CUiBeginDragU3Ek__BackingField_46;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<UiDrag>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CUiDragU3Ek__BackingField_47;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<UiEndDrag>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CUiEndDragU3Ek__BackingField_48;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<UiClick>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CUiClickU3Ek__BackingField_49;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<UiDrop>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CUiDropU3Ek__BackingField_50;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<UiPointerClick>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CUiPointerClickU3Ek__BackingField_51;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<UiPointerDown>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CUiPointerDownU3Ek__BackingField_52;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<UiPointerEnter>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CUiPointerEnterU3Ek__BackingField_53;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<UiPointerExit>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CUiPointerExitU3Ek__BackingField_54;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<UiPointerUp>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CUiPointerUpU3Ek__BackingField_55;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<UiBoolValueChanged>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CUiBoolValueChangedU3Ek__BackingField_56;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<UiFloatValueChanged>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CUiFloatValueChangedU3Ek__BackingField_57;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<UiIntValueChanged>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CUiIntValueChangedU3Ek__BackingField_58;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<UiVector2ValueChanged>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CUiVector2ValueChangedU3Ek__BackingField_59;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<UiEndEdit>k__BackingField
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___U3CUiEndEditU3Ek__BackingField_60;

public:
	inline static int32_t get_offset_of__eventLookup_0() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ____eventLookup_0)); }
	inline Dictionary_2_t902B24E6F92A525F24A4E5224598523CC55B1025 * get__eventLookup_0() const { return ____eventLookup_0; }
	inline Dictionary_2_t902B24E6F92A525F24A4E5224598523CC55B1025 ** get_address_of__eventLookup_0() { return &____eventLookup_0; }
	inline void set__eventLookup_0(Dictionary_2_t902B24E6F92A525F24A4E5224598523CC55B1025 * value)
	{
		____eventLookup_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____eventLookup_0), (void*)value);
	}

	inline static int32_t get_offset_of_syncObj_1() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___syncObj_1)); }
	inline RuntimeObject * get_syncObj_1() const { return ___syncObj_1; }
	inline RuntimeObject ** get_address_of_syncObj_1() { return &___syncObj_1; }
	inline void set_syncObj_1(RuntimeObject * value)
	{
		___syncObj_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncObj_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBecameInvisibleU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CBecameInvisibleU3Ek__BackingField_6)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CBecameInvisibleU3Ek__BackingField_6() const { return ___U3CBecameInvisibleU3Ek__BackingField_6; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CBecameInvisibleU3Ek__BackingField_6() { return &___U3CBecameInvisibleU3Ek__BackingField_6; }
	inline void set_U3CBecameInvisibleU3Ek__BackingField_6(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CBecameInvisibleU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBecameInvisibleU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBecameVisibleU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CBecameVisibleU3Ek__BackingField_7)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CBecameVisibleU3Ek__BackingField_7() const { return ___U3CBecameVisibleU3Ek__BackingField_7; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CBecameVisibleU3Ek__BackingField_7() { return &___U3CBecameVisibleU3Ek__BackingField_7; }
	inline void set_U3CBecameVisibleU3Ek__BackingField_7(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CBecameVisibleU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBecameVisibleU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCollisionEnterU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CCollisionEnterU3Ek__BackingField_8)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CCollisionEnterU3Ek__BackingField_8() const { return ___U3CCollisionEnterU3Ek__BackingField_8; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CCollisionEnterU3Ek__BackingField_8() { return &___U3CCollisionEnterU3Ek__BackingField_8; }
	inline void set_U3CCollisionEnterU3Ek__BackingField_8(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CCollisionEnterU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCollisionEnterU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCollisionExitU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CCollisionExitU3Ek__BackingField_9)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CCollisionExitU3Ek__BackingField_9() const { return ___U3CCollisionExitU3Ek__BackingField_9; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CCollisionExitU3Ek__BackingField_9() { return &___U3CCollisionExitU3Ek__BackingField_9; }
	inline void set_U3CCollisionExitU3Ek__BackingField_9(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CCollisionExitU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCollisionExitU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCollisionStayU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CCollisionStayU3Ek__BackingField_10)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CCollisionStayU3Ek__BackingField_10() const { return ___U3CCollisionStayU3Ek__BackingField_10; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CCollisionStayU3Ek__BackingField_10() { return &___U3CCollisionStayU3Ek__BackingField_10; }
	inline void set_U3CCollisionStayU3Ek__BackingField_10(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CCollisionStayU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCollisionStayU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCollisionEnter2DU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CCollisionEnter2DU3Ek__BackingField_11)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CCollisionEnter2DU3Ek__BackingField_11() const { return ___U3CCollisionEnter2DU3Ek__BackingField_11; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CCollisionEnter2DU3Ek__BackingField_11() { return &___U3CCollisionEnter2DU3Ek__BackingField_11; }
	inline void set_U3CCollisionEnter2DU3Ek__BackingField_11(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CCollisionEnter2DU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCollisionEnter2DU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCollisionExit2DU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CCollisionExit2DU3Ek__BackingField_12)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CCollisionExit2DU3Ek__BackingField_12() const { return ___U3CCollisionExit2DU3Ek__BackingField_12; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CCollisionExit2DU3Ek__BackingField_12() { return &___U3CCollisionExit2DU3Ek__BackingField_12; }
	inline void set_U3CCollisionExit2DU3Ek__BackingField_12(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CCollisionExit2DU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCollisionExit2DU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCollisionStay2DU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CCollisionStay2DU3Ek__BackingField_13)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CCollisionStay2DU3Ek__BackingField_13() const { return ___U3CCollisionStay2DU3Ek__BackingField_13; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CCollisionStay2DU3Ek__BackingField_13() { return &___U3CCollisionStay2DU3Ek__BackingField_13; }
	inline void set_U3CCollisionStay2DU3Ek__BackingField_13(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CCollisionStay2DU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCollisionStay2DU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CControllerColliderHitU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CControllerColliderHitU3Ek__BackingField_14)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CControllerColliderHitU3Ek__BackingField_14() const { return ___U3CControllerColliderHitU3Ek__BackingField_14; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CControllerColliderHitU3Ek__BackingField_14() { return &___U3CControllerColliderHitU3Ek__BackingField_14; }
	inline void set_U3CControllerColliderHitU3Ek__BackingField_14(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CControllerColliderHitU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CControllerColliderHitU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFinishedU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CFinishedU3Ek__BackingField_15)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CFinishedU3Ek__BackingField_15() const { return ___U3CFinishedU3Ek__BackingField_15; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CFinishedU3Ek__BackingField_15() { return &___U3CFinishedU3Ek__BackingField_15; }
	inline void set_U3CFinishedU3Ek__BackingField_15(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CFinishedU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFinishedU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLevelLoadedU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CLevelLoadedU3Ek__BackingField_16)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CLevelLoadedU3Ek__BackingField_16() const { return ___U3CLevelLoadedU3Ek__BackingField_16; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CLevelLoadedU3Ek__BackingField_16() { return &___U3CLevelLoadedU3Ek__BackingField_16; }
	inline void set_U3CLevelLoadedU3Ek__BackingField_16(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CLevelLoadedU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLevelLoadedU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMouseDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CMouseDownU3Ek__BackingField_17)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CMouseDownU3Ek__BackingField_17() const { return ___U3CMouseDownU3Ek__BackingField_17; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CMouseDownU3Ek__BackingField_17() { return &___U3CMouseDownU3Ek__BackingField_17; }
	inline void set_U3CMouseDownU3Ek__BackingField_17(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CMouseDownU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMouseDownU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMouseDragU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CMouseDragU3Ek__BackingField_18)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CMouseDragU3Ek__BackingField_18() const { return ___U3CMouseDragU3Ek__BackingField_18; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CMouseDragU3Ek__BackingField_18() { return &___U3CMouseDragU3Ek__BackingField_18; }
	inline void set_U3CMouseDragU3Ek__BackingField_18(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CMouseDragU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMouseDragU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMouseEnterU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CMouseEnterU3Ek__BackingField_19)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CMouseEnterU3Ek__BackingField_19() const { return ___U3CMouseEnterU3Ek__BackingField_19; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CMouseEnterU3Ek__BackingField_19() { return &___U3CMouseEnterU3Ek__BackingField_19; }
	inline void set_U3CMouseEnterU3Ek__BackingField_19(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CMouseEnterU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMouseEnterU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMouseExitU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CMouseExitU3Ek__BackingField_20)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CMouseExitU3Ek__BackingField_20() const { return ___U3CMouseExitU3Ek__BackingField_20; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CMouseExitU3Ek__BackingField_20() { return &___U3CMouseExitU3Ek__BackingField_20; }
	inline void set_U3CMouseExitU3Ek__BackingField_20(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CMouseExitU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMouseExitU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMouseOverU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CMouseOverU3Ek__BackingField_21)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CMouseOverU3Ek__BackingField_21() const { return ___U3CMouseOverU3Ek__BackingField_21; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CMouseOverU3Ek__BackingField_21() { return &___U3CMouseOverU3Ek__BackingField_21; }
	inline void set_U3CMouseOverU3Ek__BackingField_21(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CMouseOverU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMouseOverU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMouseUpU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CMouseUpU3Ek__BackingField_22)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CMouseUpU3Ek__BackingField_22() const { return ___U3CMouseUpU3Ek__BackingField_22; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CMouseUpU3Ek__BackingField_22() { return &___U3CMouseUpU3Ek__BackingField_22; }
	inline void set_U3CMouseUpU3Ek__BackingField_22(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CMouseUpU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMouseUpU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMouseUpAsButtonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CMouseUpAsButtonU3Ek__BackingField_23)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CMouseUpAsButtonU3Ek__BackingField_23() const { return ___U3CMouseUpAsButtonU3Ek__BackingField_23; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CMouseUpAsButtonU3Ek__BackingField_23() { return &___U3CMouseUpAsButtonU3Ek__BackingField_23; }
	inline void set_U3CMouseUpAsButtonU3Ek__BackingField_23(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CMouseUpAsButtonU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMouseUpAsButtonU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTriggerEnterU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CTriggerEnterU3Ek__BackingField_24)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CTriggerEnterU3Ek__BackingField_24() const { return ___U3CTriggerEnterU3Ek__BackingField_24; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CTriggerEnterU3Ek__BackingField_24() { return &___U3CTriggerEnterU3Ek__BackingField_24; }
	inline void set_U3CTriggerEnterU3Ek__BackingField_24(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CTriggerEnterU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTriggerEnterU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTriggerExitU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CTriggerExitU3Ek__BackingField_25)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CTriggerExitU3Ek__BackingField_25() const { return ___U3CTriggerExitU3Ek__BackingField_25; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CTriggerExitU3Ek__BackingField_25() { return &___U3CTriggerExitU3Ek__BackingField_25; }
	inline void set_U3CTriggerExitU3Ek__BackingField_25(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CTriggerExitU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTriggerExitU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTriggerStayU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CTriggerStayU3Ek__BackingField_26)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CTriggerStayU3Ek__BackingField_26() const { return ___U3CTriggerStayU3Ek__BackingField_26; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CTriggerStayU3Ek__BackingField_26() { return &___U3CTriggerStayU3Ek__BackingField_26; }
	inline void set_U3CTriggerStayU3Ek__BackingField_26(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CTriggerStayU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTriggerStayU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTriggerEnter2DU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CTriggerEnter2DU3Ek__BackingField_27)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CTriggerEnter2DU3Ek__BackingField_27() const { return ___U3CTriggerEnter2DU3Ek__BackingField_27; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CTriggerEnter2DU3Ek__BackingField_27() { return &___U3CTriggerEnter2DU3Ek__BackingField_27; }
	inline void set_U3CTriggerEnter2DU3Ek__BackingField_27(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CTriggerEnter2DU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTriggerEnter2DU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTriggerExit2DU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CTriggerExit2DU3Ek__BackingField_28)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CTriggerExit2DU3Ek__BackingField_28() const { return ___U3CTriggerExit2DU3Ek__BackingField_28; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CTriggerExit2DU3Ek__BackingField_28() { return &___U3CTriggerExit2DU3Ek__BackingField_28; }
	inline void set_U3CTriggerExit2DU3Ek__BackingField_28(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CTriggerExit2DU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTriggerExit2DU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTriggerStay2DU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CTriggerStay2DU3Ek__BackingField_29)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CTriggerStay2DU3Ek__BackingField_29() const { return ___U3CTriggerStay2DU3Ek__BackingField_29; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CTriggerStay2DU3Ek__BackingField_29() { return &___U3CTriggerStay2DU3Ek__BackingField_29; }
	inline void set_U3CTriggerStay2DU3Ek__BackingField_29(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CTriggerStay2DU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTriggerStay2DU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CApplicationFocusU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CApplicationFocusU3Ek__BackingField_30)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CApplicationFocusU3Ek__BackingField_30() const { return ___U3CApplicationFocusU3Ek__BackingField_30; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CApplicationFocusU3Ek__BackingField_30() { return &___U3CApplicationFocusU3Ek__BackingField_30; }
	inline void set_U3CApplicationFocusU3Ek__BackingField_30(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CApplicationFocusU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CApplicationFocusU3Ek__BackingField_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3CApplicationPauseU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CApplicationPauseU3Ek__BackingField_31)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CApplicationPauseU3Ek__BackingField_31() const { return ___U3CApplicationPauseU3Ek__BackingField_31; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CApplicationPauseU3Ek__BackingField_31() { return &___U3CApplicationPauseU3Ek__BackingField_31; }
	inline void set_U3CApplicationPauseU3Ek__BackingField_31(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CApplicationPauseU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CApplicationPauseU3Ek__BackingField_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CApplicationQuitU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CApplicationQuitU3Ek__BackingField_32)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CApplicationQuitU3Ek__BackingField_32() const { return ___U3CApplicationQuitU3Ek__BackingField_32; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CApplicationQuitU3Ek__BackingField_32() { return &___U3CApplicationQuitU3Ek__BackingField_32; }
	inline void set_U3CApplicationQuitU3Ek__BackingField_32(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CApplicationQuitU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CApplicationQuitU3Ek__BackingField_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3CParticleCollisionU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CParticleCollisionU3Ek__BackingField_33)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CParticleCollisionU3Ek__BackingField_33() const { return ___U3CParticleCollisionU3Ek__BackingField_33; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CParticleCollisionU3Ek__BackingField_33() { return &___U3CParticleCollisionU3Ek__BackingField_33; }
	inline void set_U3CParticleCollisionU3Ek__BackingField_33(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CParticleCollisionU3Ek__BackingField_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParticleCollisionU3Ek__BackingField_33), (void*)value);
	}

	inline static int32_t get_offset_of_U3CJointBreakU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CJointBreakU3Ek__BackingField_34)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CJointBreakU3Ek__BackingField_34() const { return ___U3CJointBreakU3Ek__BackingField_34; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CJointBreakU3Ek__BackingField_34() { return &___U3CJointBreakU3Ek__BackingField_34; }
	inline void set_U3CJointBreakU3Ek__BackingField_34(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CJointBreakU3Ek__BackingField_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CJointBreakU3Ek__BackingField_34), (void*)value);
	}

	inline static int32_t get_offset_of_U3CJointBreak2DU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CJointBreak2DU3Ek__BackingField_35)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CJointBreak2DU3Ek__BackingField_35() const { return ___U3CJointBreak2DU3Ek__BackingField_35; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CJointBreak2DU3Ek__BackingField_35() { return &___U3CJointBreak2DU3Ek__BackingField_35; }
	inline void set_U3CJointBreak2DU3Ek__BackingField_35(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CJointBreak2DU3Ek__BackingField_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CJointBreak2DU3Ek__BackingField_35), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDisableU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CDisableU3Ek__BackingField_36)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CDisableU3Ek__BackingField_36() const { return ___U3CDisableU3Ek__BackingField_36; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CDisableU3Ek__BackingField_36() { return &___U3CDisableU3Ek__BackingField_36; }
	inline void set_U3CDisableU3Ek__BackingField_36(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CDisableU3Ek__BackingField_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDisableU3Ek__BackingField_36), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlayerConnectedU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CPlayerConnectedU3Ek__BackingField_37)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CPlayerConnectedU3Ek__BackingField_37() const { return ___U3CPlayerConnectedU3Ek__BackingField_37; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CPlayerConnectedU3Ek__BackingField_37() { return &___U3CPlayerConnectedU3Ek__BackingField_37; }
	inline void set_U3CPlayerConnectedU3Ek__BackingField_37(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CPlayerConnectedU3Ek__BackingField_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPlayerConnectedU3Ek__BackingField_37), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerInitializedU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CServerInitializedU3Ek__BackingField_38)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CServerInitializedU3Ek__BackingField_38() const { return ___U3CServerInitializedU3Ek__BackingField_38; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CServerInitializedU3Ek__BackingField_38() { return &___U3CServerInitializedU3Ek__BackingField_38; }
	inline void set_U3CServerInitializedU3Ek__BackingField_38(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CServerInitializedU3Ek__BackingField_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServerInitializedU3Ek__BackingField_38), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConnectedToServerU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CConnectedToServerU3Ek__BackingField_39)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CConnectedToServerU3Ek__BackingField_39() const { return ___U3CConnectedToServerU3Ek__BackingField_39; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CConnectedToServerU3Ek__BackingField_39() { return &___U3CConnectedToServerU3Ek__BackingField_39; }
	inline void set_U3CConnectedToServerU3Ek__BackingField_39(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CConnectedToServerU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConnectedToServerU3Ek__BackingField_39), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlayerDisconnectedU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CPlayerDisconnectedU3Ek__BackingField_40)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CPlayerDisconnectedU3Ek__BackingField_40() const { return ___U3CPlayerDisconnectedU3Ek__BackingField_40; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CPlayerDisconnectedU3Ek__BackingField_40() { return &___U3CPlayerDisconnectedU3Ek__BackingField_40; }
	inline void set_U3CPlayerDisconnectedU3Ek__BackingField_40(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CPlayerDisconnectedU3Ek__BackingField_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPlayerDisconnectedU3Ek__BackingField_40), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDisconnectedFromServerU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CDisconnectedFromServerU3Ek__BackingField_41)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CDisconnectedFromServerU3Ek__BackingField_41() const { return ___U3CDisconnectedFromServerU3Ek__BackingField_41; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CDisconnectedFromServerU3Ek__BackingField_41() { return &___U3CDisconnectedFromServerU3Ek__BackingField_41; }
	inline void set_U3CDisconnectedFromServerU3Ek__BackingField_41(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CDisconnectedFromServerU3Ek__BackingField_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDisconnectedFromServerU3Ek__BackingField_41), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFailedToConnectU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CFailedToConnectU3Ek__BackingField_42)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CFailedToConnectU3Ek__BackingField_42() const { return ___U3CFailedToConnectU3Ek__BackingField_42; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CFailedToConnectU3Ek__BackingField_42() { return &___U3CFailedToConnectU3Ek__BackingField_42; }
	inline void set_U3CFailedToConnectU3Ek__BackingField_42(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CFailedToConnectU3Ek__BackingField_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFailedToConnectU3Ek__BackingField_42), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFailedToConnectToMasterServerU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CFailedToConnectToMasterServerU3Ek__BackingField_43)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CFailedToConnectToMasterServerU3Ek__BackingField_43() const { return ___U3CFailedToConnectToMasterServerU3Ek__BackingField_43; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CFailedToConnectToMasterServerU3Ek__BackingField_43() { return &___U3CFailedToConnectToMasterServerU3Ek__BackingField_43; }
	inline void set_U3CFailedToConnectToMasterServerU3Ek__BackingField_43(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CFailedToConnectToMasterServerU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFailedToConnectToMasterServerU3Ek__BackingField_43), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMasterServerEventU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CMasterServerEventU3Ek__BackingField_44)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CMasterServerEventU3Ek__BackingField_44() const { return ___U3CMasterServerEventU3Ek__BackingField_44; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CMasterServerEventU3Ek__BackingField_44() { return &___U3CMasterServerEventU3Ek__BackingField_44; }
	inline void set_U3CMasterServerEventU3Ek__BackingField_44(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CMasterServerEventU3Ek__BackingField_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMasterServerEventU3Ek__BackingField_44), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNetworkInstantiateU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CNetworkInstantiateU3Ek__BackingField_45)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CNetworkInstantiateU3Ek__BackingField_45() const { return ___U3CNetworkInstantiateU3Ek__BackingField_45; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CNetworkInstantiateU3Ek__BackingField_45() { return &___U3CNetworkInstantiateU3Ek__BackingField_45; }
	inline void set_U3CNetworkInstantiateU3Ek__BackingField_45(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CNetworkInstantiateU3Ek__BackingField_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNetworkInstantiateU3Ek__BackingField_45), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUiBeginDragU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CUiBeginDragU3Ek__BackingField_46)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CUiBeginDragU3Ek__BackingField_46() const { return ___U3CUiBeginDragU3Ek__BackingField_46; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CUiBeginDragU3Ek__BackingField_46() { return &___U3CUiBeginDragU3Ek__BackingField_46; }
	inline void set_U3CUiBeginDragU3Ek__BackingField_46(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CUiBeginDragU3Ek__BackingField_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUiBeginDragU3Ek__BackingField_46), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUiDragU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CUiDragU3Ek__BackingField_47)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CUiDragU3Ek__BackingField_47() const { return ___U3CUiDragU3Ek__BackingField_47; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CUiDragU3Ek__BackingField_47() { return &___U3CUiDragU3Ek__BackingField_47; }
	inline void set_U3CUiDragU3Ek__BackingField_47(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CUiDragU3Ek__BackingField_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUiDragU3Ek__BackingField_47), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUiEndDragU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CUiEndDragU3Ek__BackingField_48)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CUiEndDragU3Ek__BackingField_48() const { return ___U3CUiEndDragU3Ek__BackingField_48; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CUiEndDragU3Ek__BackingField_48() { return &___U3CUiEndDragU3Ek__BackingField_48; }
	inline void set_U3CUiEndDragU3Ek__BackingField_48(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CUiEndDragU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUiEndDragU3Ek__BackingField_48), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUiClickU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CUiClickU3Ek__BackingField_49)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CUiClickU3Ek__BackingField_49() const { return ___U3CUiClickU3Ek__BackingField_49; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CUiClickU3Ek__BackingField_49() { return &___U3CUiClickU3Ek__BackingField_49; }
	inline void set_U3CUiClickU3Ek__BackingField_49(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CUiClickU3Ek__BackingField_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUiClickU3Ek__BackingField_49), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUiDropU3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CUiDropU3Ek__BackingField_50)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CUiDropU3Ek__BackingField_50() const { return ___U3CUiDropU3Ek__BackingField_50; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CUiDropU3Ek__BackingField_50() { return &___U3CUiDropU3Ek__BackingField_50; }
	inline void set_U3CUiDropU3Ek__BackingField_50(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CUiDropU3Ek__BackingField_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUiDropU3Ek__BackingField_50), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUiPointerClickU3Ek__BackingField_51() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CUiPointerClickU3Ek__BackingField_51)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CUiPointerClickU3Ek__BackingField_51() const { return ___U3CUiPointerClickU3Ek__BackingField_51; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CUiPointerClickU3Ek__BackingField_51() { return &___U3CUiPointerClickU3Ek__BackingField_51; }
	inline void set_U3CUiPointerClickU3Ek__BackingField_51(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CUiPointerClickU3Ek__BackingField_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUiPointerClickU3Ek__BackingField_51), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUiPointerDownU3Ek__BackingField_52() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CUiPointerDownU3Ek__BackingField_52)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CUiPointerDownU3Ek__BackingField_52() const { return ___U3CUiPointerDownU3Ek__BackingField_52; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CUiPointerDownU3Ek__BackingField_52() { return &___U3CUiPointerDownU3Ek__BackingField_52; }
	inline void set_U3CUiPointerDownU3Ek__BackingField_52(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CUiPointerDownU3Ek__BackingField_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUiPointerDownU3Ek__BackingField_52), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUiPointerEnterU3Ek__BackingField_53() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CUiPointerEnterU3Ek__BackingField_53)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CUiPointerEnterU3Ek__BackingField_53() const { return ___U3CUiPointerEnterU3Ek__BackingField_53; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CUiPointerEnterU3Ek__BackingField_53() { return &___U3CUiPointerEnterU3Ek__BackingField_53; }
	inline void set_U3CUiPointerEnterU3Ek__BackingField_53(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CUiPointerEnterU3Ek__BackingField_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUiPointerEnterU3Ek__BackingField_53), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUiPointerExitU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CUiPointerExitU3Ek__BackingField_54)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CUiPointerExitU3Ek__BackingField_54() const { return ___U3CUiPointerExitU3Ek__BackingField_54; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CUiPointerExitU3Ek__BackingField_54() { return &___U3CUiPointerExitU3Ek__BackingField_54; }
	inline void set_U3CUiPointerExitU3Ek__BackingField_54(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CUiPointerExitU3Ek__BackingField_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUiPointerExitU3Ek__BackingField_54), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUiPointerUpU3Ek__BackingField_55() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CUiPointerUpU3Ek__BackingField_55)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CUiPointerUpU3Ek__BackingField_55() const { return ___U3CUiPointerUpU3Ek__BackingField_55; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CUiPointerUpU3Ek__BackingField_55() { return &___U3CUiPointerUpU3Ek__BackingField_55; }
	inline void set_U3CUiPointerUpU3Ek__BackingField_55(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CUiPointerUpU3Ek__BackingField_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUiPointerUpU3Ek__BackingField_55), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUiBoolValueChangedU3Ek__BackingField_56() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CUiBoolValueChangedU3Ek__BackingField_56)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CUiBoolValueChangedU3Ek__BackingField_56() const { return ___U3CUiBoolValueChangedU3Ek__BackingField_56; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CUiBoolValueChangedU3Ek__BackingField_56() { return &___U3CUiBoolValueChangedU3Ek__BackingField_56; }
	inline void set_U3CUiBoolValueChangedU3Ek__BackingField_56(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CUiBoolValueChangedU3Ek__BackingField_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUiBoolValueChangedU3Ek__BackingField_56), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUiFloatValueChangedU3Ek__BackingField_57() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CUiFloatValueChangedU3Ek__BackingField_57)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CUiFloatValueChangedU3Ek__BackingField_57() const { return ___U3CUiFloatValueChangedU3Ek__BackingField_57; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CUiFloatValueChangedU3Ek__BackingField_57() { return &___U3CUiFloatValueChangedU3Ek__BackingField_57; }
	inline void set_U3CUiFloatValueChangedU3Ek__BackingField_57(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CUiFloatValueChangedU3Ek__BackingField_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUiFloatValueChangedU3Ek__BackingField_57), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUiIntValueChangedU3Ek__BackingField_58() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CUiIntValueChangedU3Ek__BackingField_58)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CUiIntValueChangedU3Ek__BackingField_58() const { return ___U3CUiIntValueChangedU3Ek__BackingField_58; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CUiIntValueChangedU3Ek__BackingField_58() { return &___U3CUiIntValueChangedU3Ek__BackingField_58; }
	inline void set_U3CUiIntValueChangedU3Ek__BackingField_58(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CUiIntValueChangedU3Ek__BackingField_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUiIntValueChangedU3Ek__BackingField_58), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUiVector2ValueChangedU3Ek__BackingField_59() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CUiVector2ValueChangedU3Ek__BackingField_59)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CUiVector2ValueChangedU3Ek__BackingField_59() const { return ___U3CUiVector2ValueChangedU3Ek__BackingField_59; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CUiVector2ValueChangedU3Ek__BackingField_59() { return &___U3CUiVector2ValueChangedU3Ek__BackingField_59; }
	inline void set_U3CUiVector2ValueChangedU3Ek__BackingField_59(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CUiVector2ValueChangedU3Ek__BackingField_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUiVector2ValueChangedU3Ek__BackingField_59), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUiEndEditU3Ek__BackingField_60() { return static_cast<int32_t>(offsetof(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43_StaticFields, ___U3CUiEndEditU3Ek__BackingField_60)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_U3CUiEndEditU3Ek__BackingField_60() const { return ___U3CUiEndEditU3Ek__BackingField_60; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_U3CUiEndEditU3Ek__BackingField_60() { return &___U3CUiEndEditU3Ek__BackingField_60; }
	inline void set_U3CUiEndEditU3Ek__BackingField_60(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___U3CUiEndEditU3Ek__BackingField_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUiEndEditU3Ek__BackingField_60), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// HutongGames.PlayMaker.NamedVariable
struct  NamedVariable_t20CC71366D75BA6F0A571416C460D87D8A20C54C  : public RuntimeObject
{
public:
	// System.Boolean HutongGames.PlayMaker.NamedVariable::useVariable
	bool ___useVariable_0;
	// System.String HutongGames.PlayMaker.NamedVariable::name
	String_t* ___name_1;
	// System.String HutongGames.PlayMaker.NamedVariable::tooltip
	String_t* ___tooltip_2;
	// System.Boolean HutongGames.PlayMaker.NamedVariable::showInInspector
	bool ___showInInspector_3;
	// System.Boolean HutongGames.PlayMaker.NamedVariable::networkSync
	bool ___networkSync_4;
	// System.Object HutongGames.PlayMaker.NamedVariable::obj
	RuntimeObject * ___obj_5;

public:
	inline static int32_t get_offset_of_useVariable_0() { return static_cast<int32_t>(offsetof(NamedVariable_t20CC71366D75BA6F0A571416C460D87D8A20C54C, ___useVariable_0)); }
	inline bool get_useVariable_0() const { return ___useVariable_0; }
	inline bool* get_address_of_useVariable_0() { return &___useVariable_0; }
	inline void set_useVariable_0(bool value)
	{
		___useVariable_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(NamedVariable_t20CC71366D75BA6F0A571416C460D87D8A20C54C, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_tooltip_2() { return static_cast<int32_t>(offsetof(NamedVariable_t20CC71366D75BA6F0A571416C460D87D8A20C54C, ___tooltip_2)); }
	inline String_t* get_tooltip_2() const { return ___tooltip_2; }
	inline String_t** get_address_of_tooltip_2() { return &___tooltip_2; }
	inline void set_tooltip_2(String_t* value)
	{
		___tooltip_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tooltip_2), (void*)value);
	}

	inline static int32_t get_offset_of_showInInspector_3() { return static_cast<int32_t>(offsetof(NamedVariable_t20CC71366D75BA6F0A571416C460D87D8A20C54C, ___showInInspector_3)); }
	inline bool get_showInInspector_3() const { return ___showInInspector_3; }
	inline bool* get_address_of_showInInspector_3() { return &___showInInspector_3; }
	inline void set_showInInspector_3(bool value)
	{
		___showInInspector_3 = value;
	}

	inline static int32_t get_offset_of_networkSync_4() { return static_cast<int32_t>(offsetof(NamedVariable_t20CC71366D75BA6F0A571416C460D87D8A20C54C, ___networkSync_4)); }
	inline bool get_networkSync_4() const { return ___networkSync_4; }
	inline bool* get_address_of_networkSync_4() { return &___networkSync_4; }
	inline void set_networkSync_4(bool value)
	{
		___networkSync_4 = value;
	}

	inline static int32_t get_offset_of_obj_5() { return static_cast<int32_t>(offsetof(NamedVariable_t20CC71366D75BA6F0A571416C460D87D8A20C54C, ___obj_5)); }
	inline RuntimeObject * get_obj_5() const { return ___obj_5; }
	inline RuntimeObject ** get_address_of_obj_5() { return &___obj_5; }
	inline void set_obj_5(RuntimeObject * value)
	{
		___obj_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___obj_5), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
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
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// HutongGames.PlayMaker.Actions.ArrayContains/<>c
struct  U3CU3Ec_tC89D48A9864F251FFBA9963727CC54BE4DE96545  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC89D48A9864F251FFBA9963727CC54BE4DE96545_StaticFields
{
public:
	// HutongGames.PlayMaker.Actions.ArrayContains/<>c HutongGames.PlayMaker.Actions.ArrayContains/<>c::<>9
	U3CU3Ec_tC89D48A9864F251FFBA9963727CC54BE4DE96545 * ___U3CU3E9_0;
	// System.Predicate`1<System.Object> HutongGames.PlayMaker.Actions.ArrayContains/<>c::<>9__8_0
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___U3CU3E9__8_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC89D48A9864F251FFBA9963727CC54BE4DE96545_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC89D48A9864F251FFBA9963727CC54BE4DE96545 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC89D48A9864F251FFBA9963727CC54BE4DE96545 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC89D48A9864F251FFBA9963727CC54BE4DE96545 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC89D48A9864F251FFBA9963727CC54BE4DE96545_StaticFields, ___U3CU3E9__8_0_1)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_U3CU3E9__8_0_1() const { return ___U3CU3E9__8_0_1; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_U3CU3E9__8_0_1() { return &___U3CU3E9__8_0_1; }
	inline void set_U3CU3E9__8_0_1(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___U3CU3E9__8_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_0_1), (void*)value);
	}
};


// HutongGames.PlayMaker.Actions.AudioStop/<VolumeFade>d__5
struct  U3CVolumeFadeU3Ed__5_tBB4C56747CF82A9E31C3577F8198EDA2918E1B47  : public RuntimeObject
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.AudioStop/<VolumeFade>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object HutongGames.PlayMaker.Actions.AudioStop/<VolumeFade>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.AudioSource HutongGames.PlayMaker.Actions.AudioStop/<VolumeFade>d__5::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_2;
	// System.Single HutongGames.PlayMaker.Actions.AudioStop/<VolumeFade>d__5::endVolume
	float ___endVolume_3;
	// System.Single HutongGames.PlayMaker.Actions.AudioStop/<VolumeFade>d__5::fadeDuration
	float ___fadeDuration_4;
	// HutongGames.PlayMaker.Actions.AudioStop HutongGames.PlayMaker.Actions.AudioStop/<VolumeFade>d__5::<>4__this
	AudioStop_tE41E93DA79B0F8FB98D7D2F5328FE5D90E005CE8 * ___U3CU3E4__this_5;
	// System.Single HutongGames.PlayMaker.Actions.AudioStop/<VolumeFade>d__5::<startTime>5__1
	float ___U3CstartTimeU3E5__1_6;
	// System.Single HutongGames.PlayMaker.Actions.AudioStop/<VolumeFade>d__5::<alpha>5__2
	float ___U3CalphaU3E5__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CVolumeFadeU3Ed__5_tBB4C56747CF82A9E31C3577F8198EDA2918E1B47, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CVolumeFadeU3Ed__5_tBB4C56747CF82A9E31C3577F8198EDA2918E1B47, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_audioSource_2() { return static_cast<int32_t>(offsetof(U3CVolumeFadeU3Ed__5_tBB4C56747CF82A9E31C3577F8198EDA2918E1B47, ___audioSource_2)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_2() const { return ___audioSource_2; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_2() { return &___audioSource_2; }
	inline void set_audioSource_2(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_2), (void*)value);
	}

	inline static int32_t get_offset_of_endVolume_3() { return static_cast<int32_t>(offsetof(U3CVolumeFadeU3Ed__5_tBB4C56747CF82A9E31C3577F8198EDA2918E1B47, ___endVolume_3)); }
	inline float get_endVolume_3() const { return ___endVolume_3; }
	inline float* get_address_of_endVolume_3() { return &___endVolume_3; }
	inline void set_endVolume_3(float value)
	{
		___endVolume_3 = value;
	}

	inline static int32_t get_offset_of_fadeDuration_4() { return static_cast<int32_t>(offsetof(U3CVolumeFadeU3Ed__5_tBB4C56747CF82A9E31C3577F8198EDA2918E1B47, ___fadeDuration_4)); }
	inline float get_fadeDuration_4() const { return ___fadeDuration_4; }
	inline float* get_address_of_fadeDuration_4() { return &___fadeDuration_4; }
	inline void set_fadeDuration_4(float value)
	{
		___fadeDuration_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CVolumeFadeU3Ed__5_tBB4C56747CF82A9E31C3577F8198EDA2918E1B47, ___U3CU3E4__this_5)); }
	inline AudioStop_tE41E93DA79B0F8FB98D7D2F5328FE5D90E005CE8 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline AudioStop_tE41E93DA79B0F8FB98D7D2F5328FE5D90E005CE8 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(AudioStop_tE41E93DA79B0F8FB98D7D2F5328FE5D90E005CE8 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartTimeU3E5__1_6() { return static_cast<int32_t>(offsetof(U3CVolumeFadeU3Ed__5_tBB4C56747CF82A9E31C3577F8198EDA2918E1B47, ___U3CstartTimeU3E5__1_6)); }
	inline float get_U3CstartTimeU3E5__1_6() const { return ___U3CstartTimeU3E5__1_6; }
	inline float* get_address_of_U3CstartTimeU3E5__1_6() { return &___U3CstartTimeU3E5__1_6; }
	inline void set_U3CstartTimeU3E5__1_6(float value)
	{
		___U3CstartTimeU3E5__1_6 = value;
	}

	inline static int32_t get_offset_of_U3CalphaU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CVolumeFadeU3Ed__5_tBB4C56747CF82A9E31C3577F8198EDA2918E1B47, ___U3CalphaU3E5__2_7)); }
	inline float get_U3CalphaU3E5__2_7() const { return ___U3CalphaU3E5__2_7; }
	inline float* get_address_of_U3CalphaU3E5__2_7() { return &___U3CalphaU3E5__2_7; }
	inline void set_U3CalphaU3E5__2_7(float value)
	{
		___U3CalphaU3E5__2_7 = value;
	}
};


// HutongGames.PlayMaker.Actions.MathExpression/Property
struct  Property_t7C58AF94B5215C270A9ABF4C744CDB06CC8E51D9  : public RuntimeObject
{
public:
	// System.String HutongGames.PlayMaker.Actions.MathExpression/Property::path
	String_t* ___path_0;

public:
	inline static int32_t get_offset_of_path_0() { return static_cast<int32_t>(offsetof(Property_t7C58AF94B5215C270A9ABF4C744CDB06CC8E51D9, ___path_0)); }
	inline String_t* get_path_0() const { return ___path_0; }
	inline String_t** get_address_of_path_0() { return &___path_0; }
	inline void set_path_0(String_t* value)
	{
		___path_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_0), (void*)value);
	}
};


// Mathos.Parser.MathParser/<>c
struct  U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields
{
public:
	// Mathos.Parser.MathParser/<>c Mathos.Parser.MathParser/<>c::<>9
	U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * ___U3CU3E9_0;
	// System.Func`3<System.Double,System.Double,System.Double> Mathos.Parser.MathParser/<>c::<>9__20_0
	Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 * ___U3CU3E9__20_0_1;
	// System.Func`3<System.Double,System.Double,System.Double> Mathos.Parser.MathParser/<>c::<>9__20_1
	Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 * ___U3CU3E9__20_1_2;
	// System.Func`3<System.Double,System.Double,System.Double> Mathos.Parser.MathParser/<>c::<>9__20_2
	Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 * ___U3CU3E9__20_2_3;
	// System.Func`3<System.Double,System.Double,System.Double> Mathos.Parser.MathParser/<>c::<>9__20_3
	Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 * ___U3CU3E9__20_3_4;
	// System.Func`3<System.Double,System.Double,System.Double> Mathos.Parser.MathParser/<>c::<>9__20_4
	Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 * ___U3CU3E9__20_4_5;
	// System.Func`3<System.Double,System.Double,System.Double> Mathos.Parser.MathParser/<>c::<>9__20_5
	Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 * ___U3CU3E9__20_5_6;
	// System.Func`3<System.Double,System.Double,System.Double> Mathos.Parser.MathParser/<>c::<>9__20_6
	Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 * ___U3CU3E9__20_6_7;
	// System.Func`3<System.Double,System.Double,System.Double> Mathos.Parser.MathParser/<>c::<>9__20_7
	Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 * ___U3CU3E9__20_7_8;
	// System.Func`3<System.Double,System.Double,System.Double> Mathos.Parser.MathParser/<>c::<>9__20_8
	Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 * ___U3CU3E9__20_8_9;
	// System.Func`2<System.Double[],System.Double> Mathos.Parser.MathParser/<>c::<>9__20_9
	Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * ___U3CU3E9__20_9_10;
	// System.Func`2<System.Double[],System.Double> Mathos.Parser.MathParser/<>c::<>9__20_10
	Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * ___U3CU3E9__20_10_11;
	// System.Func`2<System.Double[],System.Double> Mathos.Parser.MathParser/<>c::<>9__20_11
	Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * ___U3CU3E9__20_11_12;
	// System.Func`2<System.Double[],System.Double> Mathos.Parser.MathParser/<>c::<>9__20_12
	Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * ___U3CU3E9__20_12_13;
	// System.Func`2<System.Double[],System.Double> Mathos.Parser.MathParser/<>c::<>9__20_13
	Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * ___U3CU3E9__20_13_14;
	// System.Func`2<System.Double[],System.Double> Mathos.Parser.MathParser/<>c::<>9__20_14
	Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * ___U3CU3E9__20_14_15;
	// System.Func`2<System.Double[],System.Double> Mathos.Parser.MathParser/<>c::<>9__20_15
	Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * ___U3CU3E9__20_15_16;
	// System.Func`2<System.Double[],System.Double> Mathos.Parser.MathParser/<>c::<>9__20_16
	Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * ___U3CU3E9__20_16_17;
	// System.Func`2<System.Double[],System.Double> Mathos.Parser.MathParser/<>c::<>9__20_17
	Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * ___U3CU3E9__20_17_18;
	// System.Func`2<System.Double[],System.Double> Mathos.Parser.MathParser/<>c::<>9__20_18
	Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * ___U3CU3E9__20_18_19;
	// System.Func`2<System.Double[],System.Double> Mathos.Parser.MathParser/<>c::<>9__20_19
	Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * ___U3CU3E9__20_19_20;
	// System.Func`2<System.Double[],System.Double> Mathos.Parser.MathParser/<>c::<>9__20_20
	Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * ___U3CU3E9__20_20_21;
	// System.Func`2<System.Double[],System.Double> Mathos.Parser.MathParser/<>c::<>9__20_21
	Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * ___U3CU3E9__20_21_22;
	// System.Func`2<System.Double[],System.Double> Mathos.Parser.MathParser/<>c::<>9__20_22
	Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * ___U3CU3E9__20_22_23;
	// System.Func`2<System.Double[],System.Double> Mathos.Parser.MathParser/<>c::<>9__20_23
	Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * ___U3CU3E9__20_23_24;
	// System.Func`2<System.Double[],System.Double> Mathos.Parser.MathParser/<>c::<>9__20_24
	Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * ___U3CU3E9__20_24_25;
	// System.Func`2<System.Double[],System.Double> Mathos.Parser.MathParser/<>c::<>9__20_25
	Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * ___U3CU3E9__20_25_26;
	// System.Func`2<System.Double[],System.Double> Mathos.Parser.MathParser/<>c::<>9__20_26
	Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * ___U3CU3E9__20_26_27;
	// System.Func`2<System.Double[],System.Double> Mathos.Parser.MathParser/<>c::<>9__20_27
	Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * ___U3CU3E9__20_27_28;
	// System.Func`2<System.Double[],System.Double> Mathos.Parser.MathParser/<>c::<>9__20_28
	Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * ___U3CU3E9__20_28_29;
	// System.Func`2<System.Double[],System.Double> Mathos.Parser.MathParser/<>c::<>9__20_29
	Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * ___U3CU3E9__20_29_30;
	// System.Func`2<System.Double[],System.Double> Mathos.Parser.MathParser/<>c::<>9__20_30
	Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * ___U3CU3E9__20_30_31;
	// System.Func`2<System.Double[],System.Double> Mathos.Parser.MathParser/<>c::<>9__20_31
	Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * ___U3CU3E9__20_31_32;
	// System.Func`2<System.Double[],System.Double> Mathos.Parser.MathParser/<>c::<>9__20_32
	Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * ___U3CU3E9__20_32_33;
	// System.Func`2<System.Double[],System.Double> Mathos.Parser.MathParser/<>c::<>9__20_33
	Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * ___U3CU3E9__20_33_34;
	// System.Func`2<System.Double[],System.Double> Mathos.Parser.MathParser/<>c::<>9__20_34
	Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * ___U3CU3E9__20_34_35;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_0_1)); }
	inline Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 * get_U3CU3E9__20_0_1() const { return ___U3CU3E9__20_0_1; }
	inline Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 ** get_address_of_U3CU3E9__20_0_1() { return &___U3CU3E9__20_0_1; }
	inline void set_U3CU3E9__20_0_1(Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 * value)
	{
		___U3CU3E9__20_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_1_2)); }
	inline Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 * get_U3CU3E9__20_1_2() const { return ___U3CU3E9__20_1_2; }
	inline Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 ** get_address_of_U3CU3E9__20_1_2() { return &___U3CU3E9__20_1_2; }
	inline void set_U3CU3E9__20_1_2(Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 * value)
	{
		___U3CU3E9__20_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_2_3)); }
	inline Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 * get_U3CU3E9__20_2_3() const { return ___U3CU3E9__20_2_3; }
	inline Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 ** get_address_of_U3CU3E9__20_2_3() { return &___U3CU3E9__20_2_3; }
	inline void set_U3CU3E9__20_2_3(Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 * value)
	{
		___U3CU3E9__20_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_3_4)); }
	inline Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 * get_U3CU3E9__20_3_4() const { return ___U3CU3E9__20_3_4; }
	inline Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 ** get_address_of_U3CU3E9__20_3_4() { return &___U3CU3E9__20_3_4; }
	inline void set_U3CU3E9__20_3_4(Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 * value)
	{
		___U3CU3E9__20_3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_4_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_4_5)); }
	inline Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 * get_U3CU3E9__20_4_5() const { return ___U3CU3E9__20_4_5; }
	inline Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 ** get_address_of_U3CU3E9__20_4_5() { return &___U3CU3E9__20_4_5; }
	inline void set_U3CU3E9__20_4_5(Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 * value)
	{
		___U3CU3E9__20_4_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_4_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_5_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_5_6)); }
	inline Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 * get_U3CU3E9__20_5_6() const { return ___U3CU3E9__20_5_6; }
	inline Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 ** get_address_of_U3CU3E9__20_5_6() { return &___U3CU3E9__20_5_6; }
	inline void set_U3CU3E9__20_5_6(Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 * value)
	{
		___U3CU3E9__20_5_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_5_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_6_7() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_6_7)); }
	inline Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 * get_U3CU3E9__20_6_7() const { return ___U3CU3E9__20_6_7; }
	inline Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 ** get_address_of_U3CU3E9__20_6_7() { return &___U3CU3E9__20_6_7; }
	inline void set_U3CU3E9__20_6_7(Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 * value)
	{
		___U3CU3E9__20_6_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_6_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_7_8() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_7_8)); }
	inline Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 * get_U3CU3E9__20_7_8() const { return ___U3CU3E9__20_7_8; }
	inline Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 ** get_address_of_U3CU3E9__20_7_8() { return &___U3CU3E9__20_7_8; }
	inline void set_U3CU3E9__20_7_8(Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 * value)
	{
		___U3CU3E9__20_7_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_7_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_8_9() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_8_9)); }
	inline Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 * get_U3CU3E9__20_8_9() const { return ___U3CU3E9__20_8_9; }
	inline Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 ** get_address_of_U3CU3E9__20_8_9() { return &___U3CU3E9__20_8_9; }
	inline void set_U3CU3E9__20_8_9(Func_3_t5C0F1FF66EE552E9FB4954469A743F2A3B849836 * value)
	{
		___U3CU3E9__20_8_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_8_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_9_10() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_9_10)); }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * get_U3CU3E9__20_9_10() const { return ___U3CU3E9__20_9_10; }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 ** get_address_of_U3CU3E9__20_9_10() { return &___U3CU3E9__20_9_10; }
	inline void set_U3CU3E9__20_9_10(Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * value)
	{
		___U3CU3E9__20_9_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_9_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_10_11() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_10_11)); }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * get_U3CU3E9__20_10_11() const { return ___U3CU3E9__20_10_11; }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 ** get_address_of_U3CU3E9__20_10_11() { return &___U3CU3E9__20_10_11; }
	inline void set_U3CU3E9__20_10_11(Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * value)
	{
		___U3CU3E9__20_10_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_10_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_11_12() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_11_12)); }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * get_U3CU3E9__20_11_12() const { return ___U3CU3E9__20_11_12; }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 ** get_address_of_U3CU3E9__20_11_12() { return &___U3CU3E9__20_11_12; }
	inline void set_U3CU3E9__20_11_12(Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * value)
	{
		___U3CU3E9__20_11_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_11_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_12_13() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_12_13)); }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * get_U3CU3E9__20_12_13() const { return ___U3CU3E9__20_12_13; }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 ** get_address_of_U3CU3E9__20_12_13() { return &___U3CU3E9__20_12_13; }
	inline void set_U3CU3E9__20_12_13(Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * value)
	{
		___U3CU3E9__20_12_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_12_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_13_14() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_13_14)); }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * get_U3CU3E9__20_13_14() const { return ___U3CU3E9__20_13_14; }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 ** get_address_of_U3CU3E9__20_13_14() { return &___U3CU3E9__20_13_14; }
	inline void set_U3CU3E9__20_13_14(Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * value)
	{
		___U3CU3E9__20_13_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_13_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_14_15() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_14_15)); }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * get_U3CU3E9__20_14_15() const { return ___U3CU3E9__20_14_15; }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 ** get_address_of_U3CU3E9__20_14_15() { return &___U3CU3E9__20_14_15; }
	inline void set_U3CU3E9__20_14_15(Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * value)
	{
		___U3CU3E9__20_14_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_14_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_15_16() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_15_16)); }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * get_U3CU3E9__20_15_16() const { return ___U3CU3E9__20_15_16; }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 ** get_address_of_U3CU3E9__20_15_16() { return &___U3CU3E9__20_15_16; }
	inline void set_U3CU3E9__20_15_16(Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * value)
	{
		___U3CU3E9__20_15_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_15_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_16_17() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_16_17)); }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * get_U3CU3E9__20_16_17() const { return ___U3CU3E9__20_16_17; }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 ** get_address_of_U3CU3E9__20_16_17() { return &___U3CU3E9__20_16_17; }
	inline void set_U3CU3E9__20_16_17(Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * value)
	{
		___U3CU3E9__20_16_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_16_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_17_18() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_17_18)); }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * get_U3CU3E9__20_17_18() const { return ___U3CU3E9__20_17_18; }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 ** get_address_of_U3CU3E9__20_17_18() { return &___U3CU3E9__20_17_18; }
	inline void set_U3CU3E9__20_17_18(Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * value)
	{
		___U3CU3E9__20_17_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_17_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_18_19() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_18_19)); }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * get_U3CU3E9__20_18_19() const { return ___U3CU3E9__20_18_19; }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 ** get_address_of_U3CU3E9__20_18_19() { return &___U3CU3E9__20_18_19; }
	inline void set_U3CU3E9__20_18_19(Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * value)
	{
		___U3CU3E9__20_18_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_18_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_19_20() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_19_20)); }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * get_U3CU3E9__20_19_20() const { return ___U3CU3E9__20_19_20; }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 ** get_address_of_U3CU3E9__20_19_20() { return &___U3CU3E9__20_19_20; }
	inline void set_U3CU3E9__20_19_20(Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * value)
	{
		___U3CU3E9__20_19_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_19_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_20_21() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_20_21)); }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * get_U3CU3E9__20_20_21() const { return ___U3CU3E9__20_20_21; }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 ** get_address_of_U3CU3E9__20_20_21() { return &___U3CU3E9__20_20_21; }
	inline void set_U3CU3E9__20_20_21(Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * value)
	{
		___U3CU3E9__20_20_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_20_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_21_22() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_21_22)); }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * get_U3CU3E9__20_21_22() const { return ___U3CU3E9__20_21_22; }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 ** get_address_of_U3CU3E9__20_21_22() { return &___U3CU3E9__20_21_22; }
	inline void set_U3CU3E9__20_21_22(Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * value)
	{
		___U3CU3E9__20_21_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_21_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_22_23() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_22_23)); }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * get_U3CU3E9__20_22_23() const { return ___U3CU3E9__20_22_23; }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 ** get_address_of_U3CU3E9__20_22_23() { return &___U3CU3E9__20_22_23; }
	inline void set_U3CU3E9__20_22_23(Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * value)
	{
		___U3CU3E9__20_22_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_22_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_23_24() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_23_24)); }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * get_U3CU3E9__20_23_24() const { return ___U3CU3E9__20_23_24; }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 ** get_address_of_U3CU3E9__20_23_24() { return &___U3CU3E9__20_23_24; }
	inline void set_U3CU3E9__20_23_24(Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * value)
	{
		___U3CU3E9__20_23_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_23_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_24_25() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_24_25)); }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * get_U3CU3E9__20_24_25() const { return ___U3CU3E9__20_24_25; }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 ** get_address_of_U3CU3E9__20_24_25() { return &___U3CU3E9__20_24_25; }
	inline void set_U3CU3E9__20_24_25(Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * value)
	{
		___U3CU3E9__20_24_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_24_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_25_26() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_25_26)); }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * get_U3CU3E9__20_25_26() const { return ___U3CU3E9__20_25_26; }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 ** get_address_of_U3CU3E9__20_25_26() { return &___U3CU3E9__20_25_26; }
	inline void set_U3CU3E9__20_25_26(Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * value)
	{
		___U3CU3E9__20_25_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_25_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_26_27() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_26_27)); }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * get_U3CU3E9__20_26_27() const { return ___U3CU3E9__20_26_27; }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 ** get_address_of_U3CU3E9__20_26_27() { return &___U3CU3E9__20_26_27; }
	inline void set_U3CU3E9__20_26_27(Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * value)
	{
		___U3CU3E9__20_26_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_26_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_27_28() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_27_28)); }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * get_U3CU3E9__20_27_28() const { return ___U3CU3E9__20_27_28; }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 ** get_address_of_U3CU3E9__20_27_28() { return &___U3CU3E9__20_27_28; }
	inline void set_U3CU3E9__20_27_28(Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * value)
	{
		___U3CU3E9__20_27_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_27_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_28_29() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_28_29)); }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * get_U3CU3E9__20_28_29() const { return ___U3CU3E9__20_28_29; }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 ** get_address_of_U3CU3E9__20_28_29() { return &___U3CU3E9__20_28_29; }
	inline void set_U3CU3E9__20_28_29(Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * value)
	{
		___U3CU3E9__20_28_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_28_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_29_30() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_29_30)); }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * get_U3CU3E9__20_29_30() const { return ___U3CU3E9__20_29_30; }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 ** get_address_of_U3CU3E9__20_29_30() { return &___U3CU3E9__20_29_30; }
	inline void set_U3CU3E9__20_29_30(Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * value)
	{
		___U3CU3E9__20_29_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_29_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_30_31() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_30_31)); }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * get_U3CU3E9__20_30_31() const { return ___U3CU3E9__20_30_31; }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 ** get_address_of_U3CU3E9__20_30_31() { return &___U3CU3E9__20_30_31; }
	inline void set_U3CU3E9__20_30_31(Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * value)
	{
		___U3CU3E9__20_30_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_30_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_31_32() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_31_32)); }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * get_U3CU3E9__20_31_32() const { return ___U3CU3E9__20_31_32; }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 ** get_address_of_U3CU3E9__20_31_32() { return &___U3CU3E9__20_31_32; }
	inline void set_U3CU3E9__20_31_32(Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * value)
	{
		___U3CU3E9__20_31_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_31_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_32_33() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_32_33)); }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * get_U3CU3E9__20_32_33() const { return ___U3CU3E9__20_32_33; }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 ** get_address_of_U3CU3E9__20_32_33() { return &___U3CU3E9__20_32_33; }
	inline void set_U3CU3E9__20_32_33(Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * value)
	{
		___U3CU3E9__20_32_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_32_33), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_33_34() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_33_34)); }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * get_U3CU3E9__20_33_34() const { return ___U3CU3E9__20_33_34; }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 ** get_address_of_U3CU3E9__20_33_34() { return &___U3CU3E9__20_33_34; }
	inline void set_U3CU3E9__20_33_34(Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * value)
	{
		___U3CU3E9__20_33_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_33_34), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_34_35() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields, ___U3CU3E9__20_34_35)); }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * get_U3CU3E9__20_34_35() const { return ___U3CU3E9__20_34_35; }
	inline Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 ** get_address_of_U3CU3E9__20_34_35() { return &___U3CU3E9__20_34_35; }
	inline void set_U3CU3E9__20_34_35(Func_2_tFF4BDE8380C677ED09C6D241FA6BCFB72C01A577 * value)
	{
		___U3CU3E9__20_34_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_34_35), (void*)value);
	}
};


// HutongGames.PlayMaker.Actions.UiButtonArray/<>c__DisplayClass10_0
struct  U3CU3Ec__DisplayClass10_0_tBB9CFD4285A7A88C8457754B066FBA85081B4B8C  : public RuntimeObject
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.UiButtonArray/<>c__DisplayClass10_0::index
	int32_t ___index_0;
	// HutongGames.PlayMaker.Actions.UiButtonArray HutongGames.PlayMaker.Actions.UiButtonArray/<>c__DisplayClass10_0::<>4__this
	UiButtonArray_t5DE403718B30E28AB52D19DB6407C55B9FCABA8F * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tBB9CFD4285A7A88C8457754B066FBA85081B4B8C, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tBB9CFD4285A7A88C8457754B066FBA85081B4B8C, ___U3CU3E4__this_1)); }
	inline UiButtonArray_t5DE403718B30E28AB52D19DB6407C55B9FCABA8F * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline UiButtonArray_t5DE403718B30E28AB52D19DB6407C55B9FCABA8F ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(UiButtonArray_t5DE403718B30E28AB52D19DB6407C55B9FCABA8F * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// HutongGames.PlayMaker.FsmBool
struct  FsmBool_t194C45226C554DFD429FC1674ED697DC66DD1A97  : public NamedVariable_t20CC71366D75BA6F0A571416C460D87D8A20C54C
{
public:
	// System.Boolean HutongGames.PlayMaker.FsmBool::value
	bool ___value_6;

public:
	inline static int32_t get_offset_of_value_6() { return static_cast<int32_t>(offsetof(FsmBool_t194C45226C554DFD429FC1674ED697DC66DD1A97, ___value_6)); }
	inline bool get_value_6() const { return ___value_6; }
	inline bool* get_address_of_value_6() { return &___value_6; }
	inline void set_value_6(bool value)
	{
		___value_6 = value;
	}
};


// HutongGames.PlayMaker.FsmFloat
struct  FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0  : public NamedVariable_t20CC71366D75BA6F0A571416C460D87D8A20C54C
{
public:
	// System.Single HutongGames.PlayMaker.FsmFloat::value
	float ___value_6;

public:
	inline static int32_t get_offset_of_value_6() { return static_cast<int32_t>(offsetof(FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0, ___value_6)); }
	inline float get_value_6() const { return ___value_6; }
	inline float* get_address_of_value_6() { return &___value_6; }
	inline void set_value_6(float value)
	{
		___value_6 = value;
	}
};


// HutongGames.PlayMaker.FsmGameObject
struct  FsmGameObject_t7025A28070D5CC87929DD35DECF6025E38BFA994  : public NamedVariable_t20CC71366D75BA6F0A571416C460D87D8A20C54C
{
public:
	// System.Action HutongGames.PlayMaker.FsmGameObject::OnChange
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnChange_6;
	// UnityEngine.GameObject HutongGames.PlayMaker.FsmGameObject::value
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value_7;

public:
	inline static int32_t get_offset_of_OnChange_6() { return static_cast<int32_t>(offsetof(FsmGameObject_t7025A28070D5CC87929DD35DECF6025E38BFA994, ___OnChange_6)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnChange_6() const { return ___OnChange_6; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnChange_6() { return &___OnChange_6; }
	inline void set_OnChange_6(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnChange_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnChange_6), (void*)value);
	}

	inline static int32_t get_offset_of_value_7() { return static_cast<int32_t>(offsetof(FsmGameObject_t7025A28070D5CC87929DD35DECF6025E38BFA994, ___value_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_value_7() const { return ___value_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_value_7() { return &___value_7; }
	inline void set_value_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___value_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_7), (void*)value);
	}
};


// HutongGames.PlayMaker.FsmObject
struct  FsmObject_t1DE6D50F1F7D5E8BD2D0356592F35FA7FA369158  : public NamedVariable_t20CC71366D75BA6F0A571416C460D87D8A20C54C
{
public:
	// System.String HutongGames.PlayMaker.FsmObject::typeName
	String_t* ___typeName_6;
	// UnityEngine.Object HutongGames.PlayMaker.FsmObject::value
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___value_7;
	// System.Type HutongGames.PlayMaker.FsmObject::objectType
	Type_t * ___objectType_8;

public:
	inline static int32_t get_offset_of_typeName_6() { return static_cast<int32_t>(offsetof(FsmObject_t1DE6D50F1F7D5E8BD2D0356592F35FA7FA369158, ___typeName_6)); }
	inline String_t* get_typeName_6() const { return ___typeName_6; }
	inline String_t** get_address_of_typeName_6() { return &___typeName_6; }
	inline void set_typeName_6(String_t* value)
	{
		___typeName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeName_6), (void*)value);
	}

	inline static int32_t get_offset_of_value_7() { return static_cast<int32_t>(offsetof(FsmObject_t1DE6D50F1F7D5E8BD2D0356592F35FA7FA369158, ___value_7)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_value_7() const { return ___value_7; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_value_7() { return &___value_7; }
	inline void set_value_7(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___value_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_7), (void*)value);
	}

	inline static int32_t get_offset_of_objectType_8() { return static_cast<int32_t>(offsetof(FsmObject_t1DE6D50F1F7D5E8BD2D0356592F35FA7FA369158, ___objectType_8)); }
	inline Type_t * get_objectType_8() const { return ___objectType_8; }
	inline Type_t ** get_address_of_objectType_8() { return &___objectType_8; }
	inline void set_objectType_8(Type_t * value)
	{
		___objectType_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectType_8), (void*)value);
	}
};


// HutongGames.PlayMaker.FsmString
struct  FsmString_tE5EC1F4E6623FE9F414DFAC7F6A05149723279F0  : public NamedVariable_t20CC71366D75BA6F0A571416C460D87D8A20C54C
{
public:
	// System.String HutongGames.PlayMaker.FsmString::value
	String_t* ___value_6;

public:
	inline static int32_t get_offset_of_value_6() { return static_cast<int32_t>(offsetof(FsmString_tE5EC1F4E6623FE9F414DFAC7F6A05149723279F0, ___value_6)); }
	inline String_t* get_value_6() const { return ___value_6; }
	inline String_t** get_address_of_value_6() { return &___value_6; }
	inline void set_value_6(String_t* value)
	{
		___value_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_6), (void*)value);
	}
};


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct  IntPtr_t 
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
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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


// UnityEngine.Rect
struct  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
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
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
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

// HutongGames.PlayMaker.FsmEventData
struct  FsmEventData_t453A58C9899C2D7415E4461A62DEF9460A41603D  : public RuntimeObject
{
public:
	// UnityEngine.GameObject HutongGames.PlayMaker.FsmEventData::SentByGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SentByGameObject_0;
	// HutongGames.PlayMaker.Fsm HutongGames.PlayMaker.FsmEventData::SentByFsm
	Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * ___SentByFsm_1;
	// HutongGames.PlayMaker.FsmState HutongGames.PlayMaker.FsmEventData::SentByState
	FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * ___SentByState_2;
	// HutongGames.PlayMaker.FsmStateAction HutongGames.PlayMaker.FsmEventData::SentByAction
	FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA * ___SentByAction_3;
	// System.Boolean HutongGames.PlayMaker.FsmEventData::BoolData
	bool ___BoolData_4;
	// System.Int32 HutongGames.PlayMaker.FsmEventData::IntData
	int32_t ___IntData_5;
	// System.Single HutongGames.PlayMaker.FsmEventData::FloatData
	float ___FloatData_6;
	// UnityEngine.Vector2 HutongGames.PlayMaker.FsmEventData::Vector2Data
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___Vector2Data_7;
	// UnityEngine.Vector3 HutongGames.PlayMaker.FsmEventData::Vector3Data
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Vector3Data_8;
	// System.String HutongGames.PlayMaker.FsmEventData::StringData
	String_t* ___StringData_9;
	// UnityEngine.Quaternion HutongGames.PlayMaker.FsmEventData::QuaternionData
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___QuaternionData_10;
	// UnityEngine.Rect HutongGames.PlayMaker.FsmEventData::RectData
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___RectData_11;
	// UnityEngine.Color HutongGames.PlayMaker.FsmEventData::ColorData
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___ColorData_12;
	// UnityEngine.Object HutongGames.PlayMaker.FsmEventData::ObjectData
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___ObjectData_13;
	// UnityEngine.GameObject HutongGames.PlayMaker.FsmEventData::GameObjectData
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GameObjectData_14;
	// UnityEngine.Material HutongGames.PlayMaker.FsmEventData::MaterialData
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___MaterialData_15;
	// UnityEngine.Texture HutongGames.PlayMaker.FsmEventData::TextureData
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___TextureData_16;

public:
	inline static int32_t get_offset_of_SentByGameObject_0() { return static_cast<int32_t>(offsetof(FsmEventData_t453A58C9899C2D7415E4461A62DEF9460A41603D, ___SentByGameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SentByGameObject_0() const { return ___SentByGameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SentByGameObject_0() { return &___SentByGameObject_0; }
	inline void set_SentByGameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SentByGameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SentByGameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_SentByFsm_1() { return static_cast<int32_t>(offsetof(FsmEventData_t453A58C9899C2D7415E4461A62DEF9460A41603D, ___SentByFsm_1)); }
	inline Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * get_SentByFsm_1() const { return ___SentByFsm_1; }
	inline Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F ** get_address_of_SentByFsm_1() { return &___SentByFsm_1; }
	inline void set_SentByFsm_1(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * value)
	{
		___SentByFsm_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SentByFsm_1), (void*)value);
	}

	inline static int32_t get_offset_of_SentByState_2() { return static_cast<int32_t>(offsetof(FsmEventData_t453A58C9899C2D7415E4461A62DEF9460A41603D, ___SentByState_2)); }
	inline FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * get_SentByState_2() const { return ___SentByState_2; }
	inline FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 ** get_address_of_SentByState_2() { return &___SentByState_2; }
	inline void set_SentByState_2(FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * value)
	{
		___SentByState_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SentByState_2), (void*)value);
	}

	inline static int32_t get_offset_of_SentByAction_3() { return static_cast<int32_t>(offsetof(FsmEventData_t453A58C9899C2D7415E4461A62DEF9460A41603D, ___SentByAction_3)); }
	inline FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA * get_SentByAction_3() const { return ___SentByAction_3; }
	inline FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA ** get_address_of_SentByAction_3() { return &___SentByAction_3; }
	inline void set_SentByAction_3(FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA * value)
	{
		___SentByAction_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SentByAction_3), (void*)value);
	}

	inline static int32_t get_offset_of_BoolData_4() { return static_cast<int32_t>(offsetof(FsmEventData_t453A58C9899C2D7415E4461A62DEF9460A41603D, ___BoolData_4)); }
	inline bool get_BoolData_4() const { return ___BoolData_4; }
	inline bool* get_address_of_BoolData_4() { return &___BoolData_4; }
	inline void set_BoolData_4(bool value)
	{
		___BoolData_4 = value;
	}

	inline static int32_t get_offset_of_IntData_5() { return static_cast<int32_t>(offsetof(FsmEventData_t453A58C9899C2D7415E4461A62DEF9460A41603D, ___IntData_5)); }
	inline int32_t get_IntData_5() const { return ___IntData_5; }
	inline int32_t* get_address_of_IntData_5() { return &___IntData_5; }
	inline void set_IntData_5(int32_t value)
	{
		___IntData_5 = value;
	}

	inline static int32_t get_offset_of_FloatData_6() { return static_cast<int32_t>(offsetof(FsmEventData_t453A58C9899C2D7415E4461A62DEF9460A41603D, ___FloatData_6)); }
	inline float get_FloatData_6() const { return ___FloatData_6; }
	inline float* get_address_of_FloatData_6() { return &___FloatData_6; }
	inline void set_FloatData_6(float value)
	{
		___FloatData_6 = value;
	}

	inline static int32_t get_offset_of_Vector2Data_7() { return static_cast<int32_t>(offsetof(FsmEventData_t453A58C9899C2D7415E4461A62DEF9460A41603D, ___Vector2Data_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_Vector2Data_7() const { return ___Vector2Data_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_Vector2Data_7() { return &___Vector2Data_7; }
	inline void set_Vector2Data_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___Vector2Data_7 = value;
	}

	inline static int32_t get_offset_of_Vector3Data_8() { return static_cast<int32_t>(offsetof(FsmEventData_t453A58C9899C2D7415E4461A62DEF9460A41603D, ___Vector3Data_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Vector3Data_8() const { return ___Vector3Data_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Vector3Data_8() { return &___Vector3Data_8; }
	inline void set_Vector3Data_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Vector3Data_8 = value;
	}

	inline static int32_t get_offset_of_StringData_9() { return static_cast<int32_t>(offsetof(FsmEventData_t453A58C9899C2D7415E4461A62DEF9460A41603D, ___StringData_9)); }
	inline String_t* get_StringData_9() const { return ___StringData_9; }
	inline String_t** get_address_of_StringData_9() { return &___StringData_9; }
	inline void set_StringData_9(String_t* value)
	{
		___StringData_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringData_9), (void*)value);
	}

	inline static int32_t get_offset_of_QuaternionData_10() { return static_cast<int32_t>(offsetof(FsmEventData_t453A58C9899C2D7415E4461A62DEF9460A41603D, ___QuaternionData_10)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_QuaternionData_10() const { return ___QuaternionData_10; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_QuaternionData_10() { return &___QuaternionData_10; }
	inline void set_QuaternionData_10(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___QuaternionData_10 = value;
	}

	inline static int32_t get_offset_of_RectData_11() { return static_cast<int32_t>(offsetof(FsmEventData_t453A58C9899C2D7415E4461A62DEF9460A41603D, ___RectData_11)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_RectData_11() const { return ___RectData_11; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_RectData_11() { return &___RectData_11; }
	inline void set_RectData_11(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___RectData_11 = value;
	}

	inline static int32_t get_offset_of_ColorData_12() { return static_cast<int32_t>(offsetof(FsmEventData_t453A58C9899C2D7415E4461A62DEF9460A41603D, ___ColorData_12)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_ColorData_12() const { return ___ColorData_12; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_ColorData_12() { return &___ColorData_12; }
	inline void set_ColorData_12(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___ColorData_12 = value;
	}

	inline static int32_t get_offset_of_ObjectData_13() { return static_cast<int32_t>(offsetof(FsmEventData_t453A58C9899C2D7415E4461A62DEF9460A41603D, ___ObjectData_13)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_ObjectData_13() const { return ___ObjectData_13; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_ObjectData_13() { return &___ObjectData_13; }
	inline void set_ObjectData_13(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___ObjectData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ObjectData_13), (void*)value);
	}

	inline static int32_t get_offset_of_GameObjectData_14() { return static_cast<int32_t>(offsetof(FsmEventData_t453A58C9899C2D7415E4461A62DEF9460A41603D, ___GameObjectData_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GameObjectData_14() const { return ___GameObjectData_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GameObjectData_14() { return &___GameObjectData_14; }
	inline void set_GameObjectData_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GameObjectData_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameObjectData_14), (void*)value);
	}

	inline static int32_t get_offset_of_MaterialData_15() { return static_cast<int32_t>(offsetof(FsmEventData_t453A58C9899C2D7415E4461A62DEF9460A41603D, ___MaterialData_15)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_MaterialData_15() const { return ___MaterialData_15; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_MaterialData_15() { return &___MaterialData_15; }
	inline void set_MaterialData_15(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___MaterialData_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MaterialData_15), (void*)value);
	}

	inline static int32_t get_offset_of_TextureData_16() { return static_cast<int32_t>(offsetof(FsmEventData_t453A58C9899C2D7415E4461A62DEF9460A41603D, ___TextureData_16)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_TextureData_16() const { return ___TextureData_16; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_TextureData_16() { return &___TextureData_16; }
	inline void set_TextureData_16(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___TextureData_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TextureData_16), (void*)value);
	}
};


// HutongGames.PlayMaker.FsmStateAction
struct  FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA  : public RuntimeObject
{
public:
	// System.String HutongGames.PlayMaker.FsmStateAction::name
	String_t* ___name_2;
	// System.Boolean HutongGames.PlayMaker.FsmStateAction::enabled
	bool ___enabled_3;
	// System.Boolean HutongGames.PlayMaker.FsmStateAction::isOpen
	bool ___isOpen_4;
	// System.Boolean HutongGames.PlayMaker.FsmStateAction::active
	bool ___active_5;
	// System.Boolean HutongGames.PlayMaker.FsmStateAction::finished
	bool ___finished_6;
	// System.Boolean HutongGames.PlayMaker.FsmStateAction::autoName
	bool ___autoName_7;
	// System.Boolean HutongGames.PlayMaker.FsmStateAction::blocksFinish
	bool ___blocksFinish_8;
	// UnityEngine.GameObject HutongGames.PlayMaker.FsmStateAction::owner
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___owner_9;
	// HutongGames.PlayMaker.FsmState HutongGames.PlayMaker.FsmStateAction::fsmState
	FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * ___fsmState_10;
	// HutongGames.PlayMaker.Fsm HutongGames.PlayMaker.FsmStateAction::fsm
	Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * ___fsm_11;
	// PlayMakerFSM HutongGames.PlayMaker.FsmStateAction::fsmComponent
	PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555 * ___fsmComponent_12;
	// System.String HutongGames.PlayMaker.FsmStateAction::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_13;
	// System.Boolean HutongGames.PlayMaker.FsmStateAction::<Entered>k__BackingField
	bool ___U3CEnteredU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}

	inline static int32_t get_offset_of_enabled_3() { return static_cast<int32_t>(offsetof(FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA, ___enabled_3)); }
	inline bool get_enabled_3() const { return ___enabled_3; }
	inline bool* get_address_of_enabled_3() { return &___enabled_3; }
	inline void set_enabled_3(bool value)
	{
		___enabled_3 = value;
	}

	inline static int32_t get_offset_of_isOpen_4() { return static_cast<int32_t>(offsetof(FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA, ___isOpen_4)); }
	inline bool get_isOpen_4() const { return ___isOpen_4; }
	inline bool* get_address_of_isOpen_4() { return &___isOpen_4; }
	inline void set_isOpen_4(bool value)
	{
		___isOpen_4 = value;
	}

	inline static int32_t get_offset_of_active_5() { return static_cast<int32_t>(offsetof(FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA, ___active_5)); }
	inline bool get_active_5() const { return ___active_5; }
	inline bool* get_address_of_active_5() { return &___active_5; }
	inline void set_active_5(bool value)
	{
		___active_5 = value;
	}

	inline static int32_t get_offset_of_finished_6() { return static_cast<int32_t>(offsetof(FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA, ___finished_6)); }
	inline bool get_finished_6() const { return ___finished_6; }
	inline bool* get_address_of_finished_6() { return &___finished_6; }
	inline void set_finished_6(bool value)
	{
		___finished_6 = value;
	}

	inline static int32_t get_offset_of_autoName_7() { return static_cast<int32_t>(offsetof(FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA, ___autoName_7)); }
	inline bool get_autoName_7() const { return ___autoName_7; }
	inline bool* get_address_of_autoName_7() { return &___autoName_7; }
	inline void set_autoName_7(bool value)
	{
		___autoName_7 = value;
	}

	inline static int32_t get_offset_of_blocksFinish_8() { return static_cast<int32_t>(offsetof(FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA, ___blocksFinish_8)); }
	inline bool get_blocksFinish_8() const { return ___blocksFinish_8; }
	inline bool* get_address_of_blocksFinish_8() { return &___blocksFinish_8; }
	inline void set_blocksFinish_8(bool value)
	{
		___blocksFinish_8 = value;
	}

	inline static int32_t get_offset_of_owner_9() { return static_cast<int32_t>(offsetof(FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA, ___owner_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_owner_9() const { return ___owner_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_owner_9() { return &___owner_9; }
	inline void set_owner_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___owner_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___owner_9), (void*)value);
	}

	inline static int32_t get_offset_of_fsmState_10() { return static_cast<int32_t>(offsetof(FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA, ___fsmState_10)); }
	inline FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * get_fsmState_10() const { return ___fsmState_10; }
	inline FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 ** get_address_of_fsmState_10() { return &___fsmState_10; }
	inline void set_fsmState_10(FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * value)
	{
		___fsmState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fsmState_10), (void*)value);
	}

	inline static int32_t get_offset_of_fsm_11() { return static_cast<int32_t>(offsetof(FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA, ___fsm_11)); }
	inline Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * get_fsm_11() const { return ___fsm_11; }
	inline Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F ** get_address_of_fsm_11() { return &___fsm_11; }
	inline void set_fsm_11(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * value)
	{
		___fsm_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fsm_11), (void*)value);
	}

	inline static int32_t get_offset_of_fsmComponent_12() { return static_cast<int32_t>(offsetof(FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA, ___fsmComponent_12)); }
	inline PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555 * get_fsmComponent_12() const { return ___fsmComponent_12; }
	inline PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555 ** get_address_of_fsmComponent_12() { return &___fsmComponent_12; }
	inline void set_fsmComponent_12(PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555 * value)
	{
		___fsmComponent_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fsmComponent_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDisplayNameU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA, ___U3CDisplayNameU3Ek__BackingField_13)); }
	inline String_t* get_U3CDisplayNameU3Ek__BackingField_13() const { return ___U3CDisplayNameU3Ek__BackingField_13; }
	inline String_t** get_address_of_U3CDisplayNameU3Ek__BackingField_13() { return &___U3CDisplayNameU3Ek__BackingField_13; }
	inline void set_U3CDisplayNameU3Ek__BackingField_13(String_t* value)
	{
		___U3CDisplayNameU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDisplayNameU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnteredU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA, ___U3CEnteredU3Ek__BackingField_14)); }
	inline bool get_U3CEnteredU3Ek__BackingField_14() const { return ___U3CEnteredU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CEnteredU3Ek__BackingField_14() { return &___U3CEnteredU3Ek__BackingField_14; }
	inline void set_U3CEnteredU3Ek__BackingField_14(bool value)
	{
		___U3CEnteredU3Ek__BackingField_14 = value;
	}
};

struct FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA_StaticFields
{
public:
	// UnityEngine.Color HutongGames.PlayMaker.FsmStateAction::ActiveHighlightColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___ActiveHighlightColor_0;
	// System.Boolean HutongGames.PlayMaker.FsmStateAction::Repaint
	bool ___Repaint_1;

public:
	inline static int32_t get_offset_of_ActiveHighlightColor_0() { return static_cast<int32_t>(offsetof(FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA_StaticFields, ___ActiveHighlightColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_ActiveHighlightColor_0() const { return ___ActiveHighlightColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_ActiveHighlightColor_0() { return &___ActiveHighlightColor_0; }
	inline void set_ActiveHighlightColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___ActiveHighlightColor_0 = value;
	}

	inline static int32_t get_offset_of_Repaint_1() { return static_cast<int32_t>(offsetof(FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA_StaticFields, ___Repaint_1)); }
	inline bool get_Repaint_1() const { return ___Repaint_1; }
	inline bool* get_address_of_Repaint_1() { return &___Repaint_1; }
	inline void set_Repaint_1(bool value)
	{
		___Repaint_1 = value;
	}
};


// HutongGames.PlayMaker.FsmVector3
struct  FsmVector3_t064573DA0DA55E7ADD59D064805A3A465403069B  : public NamedVariable_t20CC71366D75BA6F0A571416C460D87D8A20C54C
{
public:
	// UnityEngine.Vector3 HutongGames.PlayMaker.FsmVector3::value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value_6;

public:
	inline static int32_t get_offset_of_value_6() { return static_cast<int32_t>(offsetof(FsmVector3_t064573DA0DA55E7ADD59D064805A3A465403069B, ___value_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_value_6() const { return ___value_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_value_6() { return &___value_6; }
	inline void set_value_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___value_6 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// HutongGames.PlayMaker.OwnerDefaultOption
struct  OwnerDefaultOption_t56529B986FE1FD9223A1A355D04F3A541AFEA6C8 
{
public:
	// System.Int32 HutongGames.PlayMaker.OwnerDefaultOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OwnerDefaultOption_t56529B986FE1FD9223A1A355D04F3A541AFEA6C8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RaycastHit
struct  RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// HutongGames.PlayMaker.UiEvents
struct  UiEvents_t23E84C96ADA1284A42555FD14C11046B088930D4 
{
public:
	// System.Int32 HutongGames.PlayMaker.UiEvents::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UiEvents_t23E84C96ADA1284A42555FD14C11046B088930D4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.AlignToDirection/AlignAxis
struct  AlignAxis_t22A99037AE2BA2A890B0169CB3D75D93B0F35539 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.AlignToDirection/AlignAxis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AlignAxis_t22A99037AE2BA2A890B0169CB3D75D93B0F35539, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.AnimateFsmAction/Calculation
struct  Calculation_tB35C0493A35F938A9B3A9695EF0BB08A8D87F5B3 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.AnimateFsmAction/Calculation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Calculation_tB35C0493A35F938A9B3A9695EF0BB08A8D87F5B3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.ArrayTransferValue/ArrayPasteType
struct  ArrayPasteType_t9BB11CDD57577E190AA5561B905FC69E2EB7C6F7 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.ArrayTransferValue/ArrayPasteType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ArrayPasteType_t9BB11CDD57577E190AA5561B905FC69E2EB7C6F7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.ArrayTransferValue/ArrayTransferType
struct  ArrayTransferType_tD7C454F3DD5918EC52D8AEE897A1456C4EA8BFE5 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.ArrayTransferValue/ArrayTransferType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ArrayTransferType_tD7C454F3DD5918EC52D8AEE897A1456C4EA8BFE5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.Assert/AssertType
struct  AssertType_tA5F9D5C88A0D6623622FBA658F620CBCD6C098CF 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.Assert/AssertType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssertType_tA5F9D5C88A0D6623622FBA658F620CBCD6C098CF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.BaseUpdateAction/UpdateType
struct  UpdateType_t585730B75F5646A93383BE00B7AAC0C04ADD3DA8 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.BaseUpdateAction/UpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateType_t585730B75F5646A93383BE00B7AAC0C04ADD3DA8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.BlockEvents/Options
struct  Options_t2B5752BBB7485FA7768CF22D94C8627355078065 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.BlockEvents/Options::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Options_t2B5752BBB7485FA7768CF22D94C8627355078065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.BoolOperator/Operation
struct  Operation_t43CF6415F6C3A3B6486CAB36601FC695A4AAFDAA 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.BoolOperator/Operation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Operation_t43CF6415F6C3A3B6486CAB36601FC695A4AAFDAA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.ClampOrthographicView/ScreenPlane
struct  ScreenPlane_tA62B06967B256B93339870505020444C5CD096D4 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.ClampOrthographicView/ScreenPlane::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScreenPlane_tA62B06967B256B93339870505020444C5CD096D4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.ClampRotation/ConstraintAxis
struct  ConstraintAxis_t8976D4615B933F72BD80D52E47BC2F4D7D767E40 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.ClampRotation/ConstraintAxis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConstraintAxis_t8976D4615B933F72BD80D52E47BC2F4D7D767E40, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.ConvertFloatToInt/FloatRounding
struct  FloatRounding_t9EE78DF4A7861BE4C6A4DA22B8144CD44E488BD1 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.ConvertFloatToInt/FloatRounding::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FloatRounding_t9EE78DF4A7861BE4C6A4DA22B8144CD44E488BD1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.CurveFsmAction/Calculation
struct  Calculation_t311E479AD5BA2766E23F981330128C74C62BE51E 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.CurveFsmAction/Calculation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Calculation_t311E479AD5BA2766E23F981330128C74C62BE51E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.DebugDrawShape/ShapeType
struct  ShapeType_tD6A0A06E159BC64E31B77638FCB503F105601CF2 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.DebugDrawShape/ShapeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShapeType_tD6A0A06E159BC64E31B77638FCB503F105601CF2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.EaseFsmAction/EaseType
struct  EaseType_tFE801583514540058EAF3B481162A7C740985951 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.EaseFsmAction/EaseType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EaseType_tFE801583514540058EAF3B481162A7C740985951, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.EasingFunction/Ease
struct  Ease_tA7DD9AFF57B2A0B61AAAE71430711C1B5740E734 
{
public:
	// System.Int32 HutongGames.EasingFunction/Ease::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Ease_tA7DD9AFF57B2A0B61AAAE71430711C1B5740E734, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.FindOverlaps/Shape
struct  Shape_t47B6BC04BF39FD9810419C2D8E41C51DB6FE294A 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.FindOverlaps/Shape::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Shape_t47B6BC04BF39FD9810419C2D8E41C51DB6FE294A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.FloatOperator/Operation
struct  Operation_t0F6B17575B5CA596C1130F3A10EBDEFF080BD6A3 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.FloatOperator/Operation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Operation_t0F6B17575B5CA596C1130F3A10EBDEFF080BD6A3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Fsm/EditorFlags
struct  EditorFlags_tB4034C37DE9970465126F449E9257310D6850EEA 
{
public:
	// System.Int32 HutongGames.PlayMaker.Fsm/EditorFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EditorFlags_tB4034C37DE9970465126F449E9257310D6850EEA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.FsmEventTarget/EventTarget
struct  EventTarget_t38069943CB51A8E8EB88159A83CA448980A1C81F 
{
public:
	// System.Int32 HutongGames.PlayMaker.FsmEventTarget/EventTarget::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventTarget_t38069943CB51A8E8EB88159A83CA448980A1C81F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.FsmStateActionAnimatorBase/AnimatorFrameUpdateSelector
struct  AnimatorFrameUpdateSelector_t4899C891EC72695AEF3C70E851D5DD0592FB36E9 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.FsmStateActionAnimatorBase/AnimatorFrameUpdateSelector::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnimatorFrameUpdateSelector_t4899C891EC72695AEF3C70E851D5DD0592FB36E9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.GetAtan2FromVector3/aTan2EnumAxis
struct  aTan2EnumAxis_tA39E68C9B68EA61A16EE50D06A1D172543B18BB3 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.GetAtan2FromVector3/aTan2EnumAxis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(aTan2EnumAxis_tA39E68C9B68EA61A16EE50D06A1D172543B18BB3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.GetAxisVector/AxisPlane
struct  AxisPlane_t590C33D01A8DCFF6EB0A4517D7BB0B13E10CA855 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.GetAxisVector/AxisPlane::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisPlane_t590C33D01A8DCFF6EB0A4517D7BB0B13E10CA855, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.GetDeviceRoll/BaseOrientation
struct  BaseOrientation_t42B24AD4FF0674B0EE2BAE259618108D40B21192 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.GetDeviceRoll/BaseOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BaseOrientation_t42B24AD4FF0674B0EE2BAE259618108D40B21192, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.GetSceneActionBase/SceneAllReferenceOptions
struct  SceneAllReferenceOptions_tB20E09922EEB81B56F143B3A635DCF38DAD6E25D 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.GetSceneActionBase/SceneAllReferenceOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneAllReferenceOptions_tB20E09922EEB81B56F143B3A635DCF38DAD6E25D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.GetSceneActionBase/SceneBuildReferenceOptions
struct  SceneBuildReferenceOptions_tE97DBE3F3A01B08498CDFCEE19064AF02C8255B1 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.GetSceneActionBase/SceneBuildReferenceOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneBuildReferenceOptions_tE97DBE3F3A01B08498CDFCEE19064AF02C8255B1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.GetSceneActionBase/SceneReferenceOptions
struct  SceneReferenceOptions_t1ED57A01B789AD40817651EF49DD5DD8706EAFFB 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.GetSceneActionBase/SceneReferenceOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneReferenceOptions_t1ED57A01B789AD40817651EF49DD5DD8706EAFFB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.GetSceneActionBase/SceneSimpleReferenceOptions
struct  SceneSimpleReferenceOptions_t31BDBDEEE1F388D1F4962275C583330490355892 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.GetSceneActionBase/SceneSimpleReferenceOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneSimpleReferenceOptions_t31BDBDEEE1F388D1F4962275C583330490355892, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.GetTimeInfo/TimeInfo
struct  TimeInfo_tA434C46C33231F7B9E40D9B676AE2123E9A56572 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.GetTimeInfo/TimeInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimeInfo_tA434C46C33231F7B9E40D9B676AE2123E9A56572, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.IgnoreEvents/EventType
struct  EventType_tE79AB41A274724158E8A32D67D185903AC3C6457 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.IgnoreEvents/EventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventType_tE79AB41A274724158E8A32D67D185903AC3C6457, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.IntOperator/Operation
struct  Operation_t419DABCC641605901743ECD916918FA198C359B2 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.IntOperator/Operation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Operation_t419DABCC641605901743ECD916918FA198C359B2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.MouseLook/RotationAxes
struct  RotationAxes_t5FE5CFFEFB5FE4741BAD923360B879232B957415 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.MouseLook/RotationAxes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RotationAxes_t5FE5CFFEFB5FE4741BAD923360B879232B957415, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.MouseLook2/RotationAxes
struct  RotationAxes_t69766F638C0D3398C83FE61B5E138F8ABCFD7888 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.MouseLook2/RotationAxes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RotationAxes_t69766F638C0D3398C83FE61B5E138F8ABCFD7888, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.ProjectLocationToMap/MapProjection
struct  MapProjection_tBB7A29C33E55882A0C5384A8E2D82C74628F8D0E 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.ProjectLocationToMap/MapProjection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MapProjection_tBB7A29C33E55882A0C5384A8E2D82C74628F8D0E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.QuaternionBaseAction/everyFrameOptions
struct  everyFrameOptions_t53334FD9033233B11A63FC87CFFEA0E241897101 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.QuaternionBaseAction/everyFrameOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(everyFrameOptions_t53334FD9033233B11A63FC87CFFEA0E241897101, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.RectTransformFlipLayoutAxis/RectTransformFlipOptions
struct  RectTransformFlipOptions_t98172FC4F61AE50640E4439E82E476A62DAB0FA5 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.RectTransformFlipLayoutAxis/RectTransformFlipOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RectTransformFlipOptions_t98172FC4F61AE50640E4439E82E476A62DAB0FA5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.RectTransformGetLocalPosition/LocalPositionReference
struct  LocalPositionReference_t3CB9560C6E7A58E7ED96857DA9F58658E4EE34BF 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.RectTransformGetLocalPosition/LocalPositionReference::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LocalPositionReference_t3CB9560C6E7A58E7ED96857DA9F58658E4EE34BF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.RectTransformSetAnchorRectPosition/AnchorReference
struct  AnchorReference_t1701E3F84D9205CC9800604BAD3952D8D5893642 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.RectTransformSetAnchorRectPosition/AnchorReference::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnchorReference_t1701E3F84D9205CC9800604BAD3952D8D5893642, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.SendMessage/MessageType
struct  MessageType_tD5C5E11728BB7C1C92A63EAF6B0006ECA8763364 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.SendMessage/MessageType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MessageType_tD5C5E11728BB7C1C92A63EAF6B0006ECA8763364, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.SetActiveScene/SceneReferenceOptions
struct  SceneReferenceOptions_tA841DF78D205B8093897966A68A0D775BC0D88FB 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.SetActiveScene/SceneReferenceOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneReferenceOptions_tA841DF78D205B8093897966A68A0D775BC0D88FB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.TakeScreenshot/Destination
struct  Destination_t8D1574A3C1845D73C4506AA9E571F24E7CFC7F68 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.TakeScreenshot/Destination::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Destination_t8D1574A3C1845D73C4506AA9E571F24E7CFC7F68, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.TouchGUIEvent/OffsetOptions
struct  OffsetOptions_t2D05C1608C19003E521FC5190F1CD2FD4859B214 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.TouchGUIEvent/OffsetOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OffsetOptions_t2D05C1608C19003E521FC5190F1CD2FD4859B214, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.TransformInputToWorldSpace/AxisPlane
struct  AxisPlane_tD4E3EFB4AA2DFCAD8B9468C4F6A82B2C87367D7A 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.TransformInputToWorldSpace/AxisPlane::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisPlane_tD4E3EFB4AA2DFCAD8B9468C4F6A82B2C87367D7A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.TweenAudio/AudioProperty
struct  AudioProperty_tB7E70FACCA071963469FBF01F02FC5B86B42D1C5 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.TweenAudio/AudioProperty::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AudioProperty_tB7E70FACCA071963469FBF01F02FC5B86B42D1C5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.TweenCamera/CameraProperty
struct  CameraProperty_tAF9D04093C52D871EEC143E3049FA4A5A8C0A93D 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.TweenCamera/CameraProperty::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraProperty_tAF9D04093C52D871EEC143E3049FA4A5A8C0A93D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.TweenColor/Target
struct  Target_t4A0EFE21D1BDE1300B77BEA33E342EF069DA4E06 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.TweenColor/Target::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Target_t4A0EFE21D1BDE1300B77BEA33E342EF069DA4E06, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.TweenColor/TargetType
struct  TargetType_t3C59D36738A013ED265E15C169DF5D1E51CA14C4 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.TweenColor/TargetType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TargetType_t3C59D36738A013ED265E15C169DF5D1E51CA14C4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.TweenFade/TargetType
struct  TargetType_t021451BA3B5E5701F9A4F829DE3B4D23FA83F741 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.TweenFade/TargetType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TargetType_t021451BA3B5E5701F9A4F829DE3B4D23FA83F741, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.TweenPunch/PunchType
struct  PunchType_tB54F9FF0673C7E058994F61E858A7849AFD04AD8 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.TweenPunch/PunchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PunchType_tB54F9FF0673C7E058994F61E858A7849AFD04AD8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.UiEventSystemExecuteEvent/EventHandlers
struct  EventHandlers_tFCBADD13FC27995A374ED963F4573D2263F3B05D 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.UiEventSystemExecuteEvent/EventHandlers::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventHandlers_tFCBADD13FC27995A374ED963F4573D2263F3B05D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.UnloadScene/SceneReferenceOptions
struct  SceneReferenceOptions_t6CD67CDA5183FEF092723823EAE636BAB3A9A11C 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.UnloadScene/SceneReferenceOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneReferenceOptions_t6CD67CDA5183FEF092723823EAE636BAB3A9A11C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.UnloadSceneAsynch/SceneReferenceOptions
struct  SceneReferenceOptions_tCBAD99E9E28C9B0C2A39FF75F5708DFC2B30A896 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.UnloadSceneAsynch/SceneReferenceOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneReferenceOptions_tCBAD99E9E28C9B0C2A39FF75F5708DFC2B30A896, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.Vector2Operator/Vector2Operation
struct  Vector2Operation_tB9F155244F6B41E0341B6A13F11A6814AEDC3889 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.Vector2Operator/Vector2Operation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Vector2Operation_tB9F155244F6B41E0341B6A13F11A6814AEDC3889, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.Vector2RandomValue/Option
struct  Option_t7A7AFC067187E000B770406274DBCE3C537E5E10 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.Vector2RandomValue/Option::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Option_t7A7AFC067187E000B770406274DBCE3C537E5E10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.Vector3Operator/Vector3Operation
struct  Vector3Operation_t77B4D32C7FDFB67BAF23881CF21A3EBEFB1DA992 
{
public:
	// System.Int32 HutongGames.PlayMaker.Actions.Vector3Operator/Vector3Operation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Vector3Operation_t77B4D32C7FDFB67BAF23881CF21A3EBEFB1DA992, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HutongGames.PlayMaker.Actions.ComponentAction`1<UnityEngine.AudioSource>
struct  ComponentAction_1_t1961D9C98117E8C62DBCF5C6E7FE67F44349C235  : public FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA
{
public:
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.ComponentAction`1::cachedGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cachedGameObject_15;
	// UnityEngine.Transform HutongGames.PlayMaker.Actions.ComponentAction`1::<cachedTransform>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CcachedTransformU3Ek__BackingField_16;
	// T HutongGames.PlayMaker.Actions.ComponentAction`1::cachedComponent
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___cachedComponent_17;

public:
	inline static int32_t get_offset_of_cachedGameObject_15() { return static_cast<int32_t>(offsetof(ComponentAction_1_t1961D9C98117E8C62DBCF5C6E7FE67F44349C235, ___cachedGameObject_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cachedGameObject_15() const { return ___cachedGameObject_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cachedGameObject_15() { return &___cachedGameObject_15; }
	inline void set_cachedGameObject_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cachedGameObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedGameObject_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcachedTransformU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(ComponentAction_1_t1961D9C98117E8C62DBCF5C6E7FE67F44349C235, ___U3CcachedTransformU3Ek__BackingField_16)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CcachedTransformU3Ek__BackingField_16() const { return ___U3CcachedTransformU3Ek__BackingField_16; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CcachedTransformU3Ek__BackingField_16() { return &___U3CcachedTransformU3Ek__BackingField_16; }
	inline void set_U3CcachedTransformU3Ek__BackingField_16(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CcachedTransformU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcachedTransformU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_cachedComponent_17() { return static_cast<int32_t>(offsetof(ComponentAction_1_t1961D9C98117E8C62DBCF5C6E7FE67F44349C235, ___cachedComponent_17)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_cachedComponent_17() const { return ___cachedComponent_17; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_cachedComponent_17() { return &___cachedComponent_17; }
	inline void set_cachedComponent_17(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___cachedComponent_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedComponent_17), (void*)value);
	}
};


// HutongGames.PlayMaker.Actions.ComponentAction`1<UnityEngine.Rigidbody>
struct  ComponentAction_1_t2BE634736F870C0EF239570C5C20FDEE79697BF8  : public FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA
{
public:
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.ComponentAction`1::cachedGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cachedGameObject_15;
	// UnityEngine.Transform HutongGames.PlayMaker.Actions.ComponentAction`1::<cachedTransform>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CcachedTransformU3Ek__BackingField_16;
	// T HutongGames.PlayMaker.Actions.ComponentAction`1::cachedComponent
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___cachedComponent_17;

public:
	inline static int32_t get_offset_of_cachedGameObject_15() { return static_cast<int32_t>(offsetof(ComponentAction_1_t2BE634736F870C0EF239570C5C20FDEE79697BF8, ___cachedGameObject_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cachedGameObject_15() const { return ___cachedGameObject_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cachedGameObject_15() { return &___cachedGameObject_15; }
	inline void set_cachedGameObject_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cachedGameObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedGameObject_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcachedTransformU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(ComponentAction_1_t2BE634736F870C0EF239570C5C20FDEE79697BF8, ___U3CcachedTransformU3Ek__BackingField_16)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CcachedTransformU3Ek__BackingField_16() const { return ___U3CcachedTransformU3Ek__BackingField_16; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CcachedTransformU3Ek__BackingField_16() { return &___U3CcachedTransformU3Ek__BackingField_16; }
	inline void set_U3CcachedTransformU3Ek__BackingField_16(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CcachedTransformU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcachedTransformU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_cachedComponent_17() { return static_cast<int32_t>(offsetof(ComponentAction_1_t2BE634736F870C0EF239570C5C20FDEE79697BF8, ___cachedComponent_17)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_cachedComponent_17() const { return ___cachedComponent_17; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_cachedComponent_17() { return &___cachedComponent_17; }
	inline void set_cachedComponent_17(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___cachedComponent_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedComponent_17), (void*)value);
	}
};


// HutongGames.PlayMaker.Actions.ComponentAction`1<UnityEngine.Rigidbody2D>
struct  ComponentAction_1_t63BBE28C4E1290F71FF0653AE996063EB9715CD4  : public FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA
{
public:
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.ComponentAction`1::cachedGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cachedGameObject_15;
	// UnityEngine.Transform HutongGames.PlayMaker.Actions.ComponentAction`1::<cachedTransform>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CcachedTransformU3Ek__BackingField_16;
	// T HutongGames.PlayMaker.Actions.ComponentAction`1::cachedComponent
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___cachedComponent_17;

public:
	inline static int32_t get_offset_of_cachedGameObject_15() { return static_cast<int32_t>(offsetof(ComponentAction_1_t63BBE28C4E1290F71FF0653AE996063EB9715CD4, ___cachedGameObject_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cachedGameObject_15() const { return ___cachedGameObject_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cachedGameObject_15() { return &___cachedGameObject_15; }
	inline void set_cachedGameObject_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cachedGameObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedGameObject_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcachedTransformU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(ComponentAction_1_t63BBE28C4E1290F71FF0653AE996063EB9715CD4, ___U3CcachedTransformU3Ek__BackingField_16)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CcachedTransformU3Ek__BackingField_16() const { return ___U3CcachedTransformU3Ek__BackingField_16; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CcachedTransformU3Ek__BackingField_16() { return &___U3CcachedTransformU3Ek__BackingField_16; }
	inline void set_U3CcachedTransformU3Ek__BackingField_16(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CcachedTransformU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcachedTransformU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_cachedComponent_17() { return static_cast<int32_t>(offsetof(ComponentAction_1_t63BBE28C4E1290F71FF0653AE996063EB9715CD4, ___cachedComponent_17)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_cachedComponent_17() const { return ___cachedComponent_17; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_cachedComponent_17() { return &___cachedComponent_17; }
	inline void set_cachedComponent_17(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___cachedComponent_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedComponent_17), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// HutongGames.PlayMaker.Fsm
struct  Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo HutongGames.PlayMaker.Fsm::updateHelperSetDirty
	MethodInfo_t * ___updateHelperSetDirty_2;
	// System.Action`1<HutongGames.PlayMaker.FsmEvent> HutongGames.PlayMaker.Fsm::OnOutputEvent
	Action_1_tE1DD63598D608D566A4E17D2EB5AE1F33FC745A1 * ___OnOutputEvent_5;
	// System.Int32 HutongGames.PlayMaker.Fsm::dataVersion
	int32_t ___dataVersion_6;
	// UnityEngine.MonoBehaviour HutongGames.PlayMaker.Fsm::owner
	MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___owner_7;
	// FsmTemplate HutongGames.PlayMaker.Fsm::usedInTemplate
	FsmTemplate_t0D1C9EFA6C9EF653553B15A378B0E1E346D63458 * ___usedInTemplate_8;
	// System.String HutongGames.PlayMaker.Fsm::name
	String_t* ___name_9;
	// System.String HutongGames.PlayMaker.Fsm::startState
	String_t* ___startState_10;
	// HutongGames.PlayMaker.FsmState[] HutongGames.PlayMaker.Fsm::states
	FsmStateU5BU5D_tDBB92641587345478DF34938358F6BE619ADB154* ___states_11;
	// HutongGames.PlayMaker.FsmEvent[] HutongGames.PlayMaker.Fsm::events
	FsmEventU5BU5D_t6CFFD7E7FC1A5B9371657C586FB9AC012795717B* ___events_12;
	// HutongGames.PlayMaker.FsmTransition[] HutongGames.PlayMaker.Fsm::globalTransitions
	FsmTransitionU5BU5D_t04E06263ABC3B89A4266A9D614A541E009BC8139* ___globalTransitions_13;
	// HutongGames.PlayMaker.FsmVariables HutongGames.PlayMaker.Fsm::variables
	FsmVariables_tD49AB4C0F66D430EDB385B1E45BB23A2E9D04F83 * ___variables_14;
	// System.String HutongGames.PlayMaker.Fsm::description
	String_t* ___description_15;
	// System.String HutongGames.PlayMaker.Fsm::docUrl
	String_t* ___docUrl_16;
	// System.Boolean HutongGames.PlayMaker.Fsm::showStateLabel
	bool ___showStateLabel_17;
	// System.Int32 HutongGames.PlayMaker.Fsm::maxLoopCount
	int32_t ___maxLoopCount_18;
	// System.String HutongGames.PlayMaker.Fsm::watermark
	String_t* ___watermark_19;
	// System.String HutongGames.PlayMaker.Fsm::password
	String_t* ___password_20;
	// System.Boolean HutongGames.PlayMaker.Fsm::locked
	bool ___locked_21;
	// System.Boolean HutongGames.PlayMaker.Fsm::manualUpdate
	bool ___manualUpdate_22;
	// System.Int32[] HutongGames.PlayMaker.Fsm::outVariableIndices
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___outVariableIndices_23;
	// HutongGames.PlayMaker.NamedVariable[] HutongGames.PlayMaker.Fsm::outputVariables
	NamedVariableU5BU5D_t46BF6B013E1D4C724FFC3BA51924114AC0EAF50E* ___outputVariables_24;
	// System.Boolean HutongGames.PlayMaker.Fsm::keepDelayedEventsOnStateExit
	bool ___keepDelayedEventsOnStateExit_25;
	// System.Boolean HutongGames.PlayMaker.Fsm::preprocessed
	bool ___preprocessed_26;
	// HutongGames.PlayMaker.Fsm HutongGames.PlayMaker.Fsm::host
	Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * ___host_27;
	// HutongGames.PlayMaker.Fsm HutongGames.PlayMaker.Fsm::rootFsm
	Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * ___rootFsm_28;
	// System.Collections.Generic.List`1<HutongGames.PlayMaker.Fsm> HutongGames.PlayMaker.Fsm::subFsmList
	List_1_tD7024F62D6CEB05FED3EDD2429E96D5A02E0A72F * ___subFsmList_29;
	// System.Boolean HutongGames.PlayMaker.Fsm::setDirty
	bool ___setDirty_30;
	// System.Boolean HutongGames.PlayMaker.Fsm::activeStateEntered
	bool ___activeStateEntered_31;
	// System.Collections.Generic.List`1<HutongGames.PlayMaker.FsmEvent> HutongGames.PlayMaker.Fsm::ExposedEvents
	List_1_tBD06A0F686C4C464BEE5C4188807E552AB64D89D * ___ExposedEvents_32;
	// System.Collections.Generic.List`1<HutongGames.PlayMaker.FsmEvent> HutongGames.PlayMaker.Fsm::OutputEvents
	List_1_tBD06A0F686C4C464BEE5C4188807E552AB64D89D * ___OutputEvents_33;
	// HutongGames.PlayMaker.FsmLog HutongGames.PlayMaker.Fsm::myLog
	FsmLog_tF21848ABE23995239708F075B3DBAE380D201846 * ___myLog_34;
	// System.Boolean HutongGames.PlayMaker.Fsm::RestartOnEnable
	bool ___RestartOnEnable_35;
	// System.Boolean HutongGames.PlayMaker.Fsm::ResetVariablesOnEnable
	bool ___ResetVariablesOnEnable_36;
	// HutongGames.PlayMaker.FsmVariables HutongGames.PlayMaker.Fsm::_defaultVariableValues
	FsmVariables_tD49AB4C0F66D430EDB385B1E45BB23A2E9D04F83 * ____defaultVariableValues_37;
	// System.Boolean HutongGames.PlayMaker.Fsm::hasErrors
	bool ___hasErrors_38;
	// System.Boolean HutongGames.PlayMaker.Fsm::<Started>k__BackingField
	bool ___U3CStartedU3Ek__BackingField_39;
	// System.Boolean HutongGames.PlayMaker.Fsm::EnableDebugFlow
	bool ___EnableDebugFlow_40;
	// System.Boolean HutongGames.PlayMaker.Fsm::EnableBreakpoints
	bool ___EnableBreakpoints_41;
	// System.Boolean HutongGames.PlayMaker.Fsm::StepFrame
	bool ___StepFrame_42;
	// System.Collections.Generic.List`1<HutongGames.PlayMaker.DelayedEvent> HutongGames.PlayMaker.Fsm::delayedEvents
	List_1_tA41A4A4B8707C2896E9BDC36BCA6E3E56C2B33B0 * ___delayedEvents_43;
	// System.Collections.Generic.List`1<HutongGames.PlayMaker.DelayedEvent> HutongGames.PlayMaker.Fsm::updateEvents
	List_1_tA41A4A4B8707C2896E9BDC36BCA6E3E56C2B33B0 * ___updateEvents_44;
	// System.Collections.Generic.List`1<HutongGames.PlayMaker.DelayedEvent> HutongGames.PlayMaker.Fsm::removeEvents
	List_1_tA41A4A4B8707C2896E9BDC36BCA6E3E56C2B33B0 * ___removeEvents_45;
	// HutongGames.PlayMaker.Fsm/EditorFlags HutongGames.PlayMaker.Fsm::editorFlags
	int32_t ___editorFlags_46;
	// HutongGames.PlayMaker.FsmEventTarget HutongGames.PlayMaker.Fsm::<EventTarget>k__BackingField
	FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE * ___U3CEventTargetU3Ek__BackingField_47;
	// System.Boolean HutongGames.PlayMaker.Fsm::initialized
	bool ___initialized_48;
	// System.Boolean HutongGames.PlayMaker.Fsm::<Finished>k__BackingField
	bool ___U3CFinishedU3Ek__BackingField_49;
	// System.String HutongGames.PlayMaker.Fsm::activeStateName
	String_t* ___activeStateName_50;
	// HutongGames.PlayMaker.FsmState HutongGames.PlayMaker.Fsm::activeState
	FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * ___activeState_51;
	// HutongGames.PlayMaker.FsmState HutongGames.PlayMaker.Fsm::switchToState
	FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * ___switchToState_52;
	// HutongGames.PlayMaker.FsmState HutongGames.PlayMaker.Fsm::previousActiveState
	FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * ___previousActiveState_53;
	// HutongGames.PlayMaker.FsmTransition HutongGames.PlayMaker.Fsm::<LastTransition>k__BackingField
	FsmTransition_t0F3354FE53374C3EA811FC81F9089C34D615605E * ___U3CLastTransitionU3Ek__BackingField_54;
	// System.Action`1<HutongGames.PlayMaker.FsmState> HutongGames.PlayMaker.Fsm::StateChanged
	Action_1_t9212767A523C24A36F10F5C38487A2040C673BEB * ___StateChanged_55;
	// System.Boolean HutongGames.PlayMaker.Fsm::<IsModifiedPrefabInstance>k__BackingField
	bool ___U3CIsModifiedPrefabInstanceU3Ek__BackingField_56;
	// HutongGames.PlayMaker.FsmState HutongGames.PlayMaker.Fsm::editState
	FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * ___editState_57;
	// System.Boolean HutongGames.PlayMaker.Fsm::<SwitchedState>k__BackingField
	bool ___U3CSwitchedStateU3Ek__BackingField_68;
	// System.Boolean HutongGames.PlayMaker.Fsm::mouseEvents
	bool ___mouseEvents_69;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleLevelLoaded
	bool ___handleLevelLoaded_70;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleTriggerEnter2D
	bool ___handleTriggerEnter2D_71;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleTriggerExit2D
	bool ___handleTriggerExit2D_72;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleTriggerStay2D
	bool ___handleTriggerStay2D_73;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleCollisionEnter2D
	bool ___handleCollisionEnter2D_74;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleCollisionExit2D
	bool ___handleCollisionExit2D_75;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleCollisionStay2D
	bool ___handleCollisionStay2D_76;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleTriggerEnter
	bool ___handleTriggerEnter_77;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleTriggerExit
	bool ___handleTriggerExit_78;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleTriggerStay
	bool ___handleTriggerStay_79;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleCollisionEnter
	bool ___handleCollisionEnter_80;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleCollisionExit
	bool ___handleCollisionExit_81;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleCollisionStay
	bool ___handleCollisionStay_82;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleParticleCollision
	bool ___handleParticleCollision_83;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleControllerColliderHit
	bool ___handleControllerColliderHit_84;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleJointBreak
	bool ___handleJointBreak_85;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleJointBreak2D
	bool ___handleJointBreak2D_86;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleOnGUI
	bool ___handleOnGUI_87;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleFixedUpdate
	bool ___handleFixedUpdate_88;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleLateUpdate
	bool ___handleLateUpdate_89;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleApplicationEvents
	bool ___handleApplicationEvents_90;
	// HutongGames.PlayMaker.UiEvents HutongGames.PlayMaker.Fsm::handleUiEvents
	int32_t ___handleUiEvents_91;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleLegacyNetworking
	bool ___handleLegacyNetworking_92;
	// UnityEngine.Collision HutongGames.PlayMaker.Fsm::<CollisionInfo>k__BackingField
	Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___U3CCollisionInfoU3Ek__BackingField_93;
	// UnityEngine.Collider HutongGames.PlayMaker.Fsm::<TriggerCollider>k__BackingField
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___U3CTriggerColliderU3Ek__BackingField_94;
	// UnityEngine.Collision2D HutongGames.PlayMaker.Fsm::<Collision2DInfo>k__BackingField
	Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___U3CCollision2DInfoU3Ek__BackingField_95;
	// UnityEngine.Collider2D HutongGames.PlayMaker.Fsm::<TriggerCollider2D>k__BackingField
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___U3CTriggerCollider2DU3Ek__BackingField_96;
	// System.Single HutongGames.PlayMaker.Fsm::<JointBreakForce>k__BackingField
	float ___U3CJointBreakForceU3Ek__BackingField_97;
	// UnityEngine.Joint2D HutongGames.PlayMaker.Fsm::<BrokenJoint2D>k__BackingField
	Joint2D_t6BF0D20078680B9000B5BD0D3C30266458F8B964 * ___U3CBrokenJoint2DU3Ek__BackingField_98;
	// UnityEngine.GameObject HutongGames.PlayMaker.Fsm::<ParticleCollisionGO>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CParticleCollisionGOU3Ek__BackingField_99;
	// System.String HutongGames.PlayMaker.Fsm::<TriggerName>k__BackingField
	String_t* ___U3CTriggerNameU3Ek__BackingField_100;
	// System.String HutongGames.PlayMaker.Fsm::<CollisionName>k__BackingField
	String_t* ___U3CCollisionNameU3Ek__BackingField_101;
	// System.String HutongGames.PlayMaker.Fsm::<Trigger2dName>k__BackingField
	String_t* ___U3CTrigger2dNameU3Ek__BackingField_102;
	// System.String HutongGames.PlayMaker.Fsm::<Collision2dName>k__BackingField
	String_t* ___U3CCollision2dNameU3Ek__BackingField_103;
	// UnityEngine.ControllerColliderHit HutongGames.PlayMaker.Fsm::<ControllerCollider>k__BackingField
	ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550 * ___U3CControllerColliderU3Ek__BackingField_104;
	// UnityEngine.RaycastHit HutongGames.PlayMaker.Fsm::<RaycastHitInfo>k__BackingField
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___U3CRaycastHitInfoU3Ek__BackingField_105;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleAnimatorMove
	bool ___handleAnimatorMove_107;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleAnimatorIK
	bool ___handleAnimatorIK_108;
	// System.Boolean HutongGames.PlayMaker.Fsm::disableSent
	bool ___disableSent_109;

public:
	inline static int32_t get_offset_of_updateHelperSetDirty_2() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___updateHelperSetDirty_2)); }
	inline MethodInfo_t * get_updateHelperSetDirty_2() const { return ___updateHelperSetDirty_2; }
	inline MethodInfo_t ** get_address_of_updateHelperSetDirty_2() { return &___updateHelperSetDirty_2; }
	inline void set_updateHelperSetDirty_2(MethodInfo_t * value)
	{
		___updateHelperSetDirty_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updateHelperSetDirty_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnOutputEvent_5() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___OnOutputEvent_5)); }
	inline Action_1_tE1DD63598D608D566A4E17D2EB5AE1F33FC745A1 * get_OnOutputEvent_5() const { return ___OnOutputEvent_5; }
	inline Action_1_tE1DD63598D608D566A4E17D2EB5AE1F33FC745A1 ** get_address_of_OnOutputEvent_5() { return &___OnOutputEvent_5; }
	inline void set_OnOutputEvent_5(Action_1_tE1DD63598D608D566A4E17D2EB5AE1F33FC745A1 * value)
	{
		___OnOutputEvent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOutputEvent_5), (void*)value);
	}

	inline static int32_t get_offset_of_dataVersion_6() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___dataVersion_6)); }
	inline int32_t get_dataVersion_6() const { return ___dataVersion_6; }
	inline int32_t* get_address_of_dataVersion_6() { return &___dataVersion_6; }
	inline void set_dataVersion_6(int32_t value)
	{
		___dataVersion_6 = value;
	}

	inline static int32_t get_offset_of_owner_7() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___owner_7)); }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * get_owner_7() const { return ___owner_7; }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** get_address_of_owner_7() { return &___owner_7; }
	inline void set_owner_7(MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		___owner_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___owner_7), (void*)value);
	}

	inline static int32_t get_offset_of_usedInTemplate_8() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___usedInTemplate_8)); }
	inline FsmTemplate_t0D1C9EFA6C9EF653553B15A378B0E1E346D63458 * get_usedInTemplate_8() const { return ___usedInTemplate_8; }
	inline FsmTemplate_t0D1C9EFA6C9EF653553B15A378B0E1E346D63458 ** get_address_of_usedInTemplate_8() { return &___usedInTemplate_8; }
	inline void set_usedInTemplate_8(FsmTemplate_t0D1C9EFA6C9EF653553B15A378B0E1E346D63458 * value)
	{
		___usedInTemplate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___usedInTemplate_8), (void*)value);
	}

	inline static int32_t get_offset_of_name_9() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___name_9)); }
	inline String_t* get_name_9() const { return ___name_9; }
	inline String_t** get_address_of_name_9() { return &___name_9; }
	inline void set_name_9(String_t* value)
	{
		___name_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_9), (void*)value);
	}

	inline static int32_t get_offset_of_startState_10() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___startState_10)); }
	inline String_t* get_startState_10() const { return ___startState_10; }
	inline String_t** get_address_of_startState_10() { return &___startState_10; }
	inline void set_startState_10(String_t* value)
	{
		___startState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startState_10), (void*)value);
	}

	inline static int32_t get_offset_of_states_11() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___states_11)); }
	inline FsmStateU5BU5D_tDBB92641587345478DF34938358F6BE619ADB154* get_states_11() const { return ___states_11; }
	inline FsmStateU5BU5D_tDBB92641587345478DF34938358F6BE619ADB154** get_address_of_states_11() { return &___states_11; }
	inline void set_states_11(FsmStateU5BU5D_tDBB92641587345478DF34938358F6BE619ADB154* value)
	{
		___states_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___states_11), (void*)value);
	}

	inline static int32_t get_offset_of_events_12() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___events_12)); }
	inline FsmEventU5BU5D_t6CFFD7E7FC1A5B9371657C586FB9AC012795717B* get_events_12() const { return ___events_12; }
	inline FsmEventU5BU5D_t6CFFD7E7FC1A5B9371657C586FB9AC012795717B** get_address_of_events_12() { return &___events_12; }
	inline void set_events_12(FsmEventU5BU5D_t6CFFD7E7FC1A5B9371657C586FB9AC012795717B* value)
	{
		___events_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_12), (void*)value);
	}

	inline static int32_t get_offset_of_globalTransitions_13() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___globalTransitions_13)); }
	inline FsmTransitionU5BU5D_t04E06263ABC3B89A4266A9D614A541E009BC8139* get_globalTransitions_13() const { return ___globalTransitions_13; }
	inline FsmTransitionU5BU5D_t04E06263ABC3B89A4266A9D614A541E009BC8139** get_address_of_globalTransitions_13() { return &___globalTransitions_13; }
	inline void set_globalTransitions_13(FsmTransitionU5BU5D_t04E06263ABC3B89A4266A9D614A541E009BC8139* value)
	{
		___globalTransitions_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___globalTransitions_13), (void*)value);
	}

	inline static int32_t get_offset_of_variables_14() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___variables_14)); }
	inline FsmVariables_tD49AB4C0F66D430EDB385B1E45BB23A2E9D04F83 * get_variables_14() const { return ___variables_14; }
	inline FsmVariables_tD49AB4C0F66D430EDB385B1E45BB23A2E9D04F83 ** get_address_of_variables_14() { return &___variables_14; }
	inline void set_variables_14(FsmVariables_tD49AB4C0F66D430EDB385B1E45BB23A2E9D04F83 * value)
	{
		___variables_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___variables_14), (void*)value);
	}

	inline static int32_t get_offset_of_description_15() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___description_15)); }
	inline String_t* get_description_15() const { return ___description_15; }
	inline String_t** get_address_of_description_15() { return &___description_15; }
	inline void set_description_15(String_t* value)
	{
		___description_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_15), (void*)value);
	}

	inline static int32_t get_offset_of_docUrl_16() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___docUrl_16)); }
	inline String_t* get_docUrl_16() const { return ___docUrl_16; }
	inline String_t** get_address_of_docUrl_16() { return &___docUrl_16; }
	inline void set_docUrl_16(String_t* value)
	{
		___docUrl_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___docUrl_16), (void*)value);
	}

	inline static int32_t get_offset_of_showStateLabel_17() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___showStateLabel_17)); }
	inline bool get_showStateLabel_17() const { return ___showStateLabel_17; }
	inline bool* get_address_of_showStateLabel_17() { return &___showStateLabel_17; }
	inline void set_showStateLabel_17(bool value)
	{
		___showStateLabel_17 = value;
	}

	inline static int32_t get_offset_of_maxLoopCount_18() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___maxLoopCount_18)); }
	inline int32_t get_maxLoopCount_18() const { return ___maxLoopCount_18; }
	inline int32_t* get_address_of_maxLoopCount_18() { return &___maxLoopCount_18; }
	inline void set_maxLoopCount_18(int32_t value)
	{
		___maxLoopCount_18 = value;
	}

	inline static int32_t get_offset_of_watermark_19() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___watermark_19)); }
	inline String_t* get_watermark_19() const { return ___watermark_19; }
	inline String_t** get_address_of_watermark_19() { return &___watermark_19; }
	inline void set_watermark_19(String_t* value)
	{
		___watermark_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___watermark_19), (void*)value);
	}

	inline static int32_t get_offset_of_password_20() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___password_20)); }
	inline String_t* get_password_20() const { return ___password_20; }
	inline String_t** get_address_of_password_20() { return &___password_20; }
	inline void set_password_20(String_t* value)
	{
		___password_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___password_20), (void*)value);
	}

	inline static int32_t get_offset_of_locked_21() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___locked_21)); }
	inline bool get_locked_21() const { return ___locked_21; }
	inline bool* get_address_of_locked_21() { return &___locked_21; }
	inline void set_locked_21(bool value)
	{
		___locked_21 = value;
	}

	inline static int32_t get_offset_of_manualUpdate_22() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___manualUpdate_22)); }
	inline bool get_manualUpdate_22() const { return ___manualUpdate_22; }
	inline bool* get_address_of_manualUpdate_22() { return &___manualUpdate_22; }
	inline void set_manualUpdate_22(bool value)
	{
		___manualUpdate_22 = value;
	}

	inline static int32_t get_offset_of_outVariableIndices_23() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___outVariableIndices_23)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_outVariableIndices_23() const { return ___outVariableIndices_23; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_outVariableIndices_23() { return &___outVariableIndices_23; }
	inline void set_outVariableIndices_23(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___outVariableIndices_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outVariableIndices_23), (void*)value);
	}

	inline static int32_t get_offset_of_outputVariables_24() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___outputVariables_24)); }
	inline NamedVariableU5BU5D_t46BF6B013E1D4C724FFC3BA51924114AC0EAF50E* get_outputVariables_24() const { return ___outputVariables_24; }
	inline NamedVariableU5BU5D_t46BF6B013E1D4C724FFC3BA51924114AC0EAF50E** get_address_of_outputVariables_24() { return &___outputVariables_24; }
	inline void set_outputVariables_24(NamedVariableU5BU5D_t46BF6B013E1D4C724FFC3BA51924114AC0EAF50E* value)
	{
		___outputVariables_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputVariables_24), (void*)value);
	}

	inline static int32_t get_offset_of_keepDelayedEventsOnStateExit_25() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___keepDelayedEventsOnStateExit_25)); }
	inline bool get_keepDelayedEventsOnStateExit_25() const { return ___keepDelayedEventsOnStateExit_25; }
	inline bool* get_address_of_keepDelayedEventsOnStateExit_25() { return &___keepDelayedEventsOnStateExit_25; }
	inline void set_keepDelayedEventsOnStateExit_25(bool value)
	{
		___keepDelayedEventsOnStateExit_25 = value;
	}

	inline static int32_t get_offset_of_preprocessed_26() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___preprocessed_26)); }
	inline bool get_preprocessed_26() const { return ___preprocessed_26; }
	inline bool* get_address_of_preprocessed_26() { return &___preprocessed_26; }
	inline void set_preprocessed_26(bool value)
	{
		___preprocessed_26 = value;
	}

	inline static int32_t get_offset_of_host_27() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___host_27)); }
	inline Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * get_host_27() const { return ___host_27; }
	inline Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F ** get_address_of_host_27() { return &___host_27; }
	inline void set_host_27(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * value)
	{
		___host_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___host_27), (void*)value);
	}

	inline static int32_t get_offset_of_rootFsm_28() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___rootFsm_28)); }
	inline Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * get_rootFsm_28() const { return ___rootFsm_28; }
	inline Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F ** get_address_of_rootFsm_28() { return &___rootFsm_28; }
	inline void set_rootFsm_28(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * value)
	{
		___rootFsm_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rootFsm_28), (void*)value);
	}

	inline static int32_t get_offset_of_subFsmList_29() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___subFsmList_29)); }
	inline List_1_tD7024F62D6CEB05FED3EDD2429E96D5A02E0A72F * get_subFsmList_29() const { return ___subFsmList_29; }
	inline List_1_tD7024F62D6CEB05FED3EDD2429E96D5A02E0A72F ** get_address_of_subFsmList_29() { return &___subFsmList_29; }
	inline void set_subFsmList_29(List_1_tD7024F62D6CEB05FED3EDD2429E96D5A02E0A72F * value)
	{
		___subFsmList_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subFsmList_29), (void*)value);
	}

	inline static int32_t get_offset_of_setDirty_30() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___setDirty_30)); }
	inline bool get_setDirty_30() const { return ___setDirty_30; }
	inline bool* get_address_of_setDirty_30() { return &___setDirty_30; }
	inline void set_setDirty_30(bool value)
	{
		___setDirty_30 = value;
	}

	inline static int32_t get_offset_of_activeStateEntered_31() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___activeStateEntered_31)); }
	inline bool get_activeStateEntered_31() const { return ___activeStateEntered_31; }
	inline bool* get_address_of_activeStateEntered_31() { return &___activeStateEntered_31; }
	inline void set_activeStateEntered_31(bool value)
	{
		___activeStateEntered_31 = value;
	}

	inline static int32_t get_offset_of_ExposedEvents_32() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___ExposedEvents_32)); }
	inline List_1_tBD06A0F686C4C464BEE5C4188807E552AB64D89D * get_ExposedEvents_32() const { return ___ExposedEvents_32; }
	inline List_1_tBD06A0F686C4C464BEE5C4188807E552AB64D89D ** get_address_of_ExposedEvents_32() { return &___ExposedEvents_32; }
	inline void set_ExposedEvents_32(List_1_tBD06A0F686C4C464BEE5C4188807E552AB64D89D * value)
	{
		___ExposedEvents_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExposedEvents_32), (void*)value);
	}

	inline static int32_t get_offset_of_OutputEvents_33() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___OutputEvents_33)); }
	inline List_1_tBD06A0F686C4C464BEE5C4188807E552AB64D89D * get_OutputEvents_33() const { return ___OutputEvents_33; }
	inline List_1_tBD06A0F686C4C464BEE5C4188807E552AB64D89D ** get_address_of_OutputEvents_33() { return &___OutputEvents_33; }
	inline void set_OutputEvents_33(List_1_tBD06A0F686C4C464BEE5C4188807E552AB64D89D * value)
	{
		___OutputEvents_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OutputEvents_33), (void*)value);
	}

	inline static int32_t get_offset_of_myLog_34() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___myLog_34)); }
	inline FsmLog_tF21848ABE23995239708F075B3DBAE380D201846 * get_myLog_34() const { return ___myLog_34; }
	inline FsmLog_tF21848ABE23995239708F075B3DBAE380D201846 ** get_address_of_myLog_34() { return &___myLog_34; }
	inline void set_myLog_34(FsmLog_tF21848ABE23995239708F075B3DBAE380D201846 * value)
	{
		___myLog_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myLog_34), (void*)value);
	}

	inline static int32_t get_offset_of_RestartOnEnable_35() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___RestartOnEnable_35)); }
	inline bool get_RestartOnEnable_35() const { return ___RestartOnEnable_35; }
	inline bool* get_address_of_RestartOnEnable_35() { return &___RestartOnEnable_35; }
	inline void set_RestartOnEnable_35(bool value)
	{
		___RestartOnEnable_35 = value;
	}

	inline static int32_t get_offset_of_ResetVariablesOnEnable_36() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___ResetVariablesOnEnable_36)); }
	inline bool get_ResetVariablesOnEnable_36() const { return ___ResetVariablesOnEnable_36; }
	inline bool* get_address_of_ResetVariablesOnEnable_36() { return &___ResetVariablesOnEnable_36; }
	inline void set_ResetVariablesOnEnable_36(bool value)
	{
		___ResetVariablesOnEnable_36 = value;
	}

	inline static int32_t get_offset_of__defaultVariableValues_37() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ____defaultVariableValues_37)); }
	inline FsmVariables_tD49AB4C0F66D430EDB385B1E45BB23A2E9D04F83 * get__defaultVariableValues_37() const { return ____defaultVariableValues_37; }
	inline FsmVariables_tD49AB4C0F66D430EDB385B1E45BB23A2E9D04F83 ** get_address_of__defaultVariableValues_37() { return &____defaultVariableValues_37; }
	inline void set__defaultVariableValues_37(FsmVariables_tD49AB4C0F66D430EDB385B1E45BB23A2E9D04F83 * value)
	{
		____defaultVariableValues_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____defaultVariableValues_37), (void*)value);
	}

	inline static int32_t get_offset_of_hasErrors_38() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___hasErrors_38)); }
	inline bool get_hasErrors_38() const { return ___hasErrors_38; }
	inline bool* get_address_of_hasErrors_38() { return &___hasErrors_38; }
	inline void set_hasErrors_38(bool value)
	{
		___hasErrors_38 = value;
	}

	inline static int32_t get_offset_of_U3CStartedU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CStartedU3Ek__BackingField_39)); }
	inline bool get_U3CStartedU3Ek__BackingField_39() const { return ___U3CStartedU3Ek__BackingField_39; }
	inline bool* get_address_of_U3CStartedU3Ek__BackingField_39() { return &___U3CStartedU3Ek__BackingField_39; }
	inline void set_U3CStartedU3Ek__BackingField_39(bool value)
	{
		___U3CStartedU3Ek__BackingField_39 = value;
	}

	inline static int32_t get_offset_of_EnableDebugFlow_40() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___EnableDebugFlow_40)); }
	inline bool get_EnableDebugFlow_40() const { return ___EnableDebugFlow_40; }
	inline bool* get_address_of_EnableDebugFlow_40() { return &___EnableDebugFlow_40; }
	inline void set_EnableDebugFlow_40(bool value)
	{
		___EnableDebugFlow_40 = value;
	}

	inline static int32_t get_offset_of_EnableBreakpoints_41() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___EnableBreakpoints_41)); }
	inline bool get_EnableBreakpoints_41() const { return ___EnableBreakpoints_41; }
	inline bool* get_address_of_EnableBreakpoints_41() { return &___EnableBreakpoints_41; }
	inline void set_EnableBreakpoints_41(bool value)
	{
		___EnableBreakpoints_41 = value;
	}

	inline static int32_t get_offset_of_StepFrame_42() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___StepFrame_42)); }
	inline bool get_StepFrame_42() const { return ___StepFrame_42; }
	inline bool* get_address_of_StepFrame_42() { return &___StepFrame_42; }
	inline void set_StepFrame_42(bool value)
	{
		___StepFrame_42 = value;
	}

	inline static int32_t get_offset_of_delayedEvents_43() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___delayedEvents_43)); }
	inline List_1_tA41A4A4B8707C2896E9BDC36BCA6E3E56C2B33B0 * get_delayedEvents_43() const { return ___delayedEvents_43; }
	inline List_1_tA41A4A4B8707C2896E9BDC36BCA6E3E56C2B33B0 ** get_address_of_delayedEvents_43() { return &___delayedEvents_43; }
	inline void set_delayedEvents_43(List_1_tA41A4A4B8707C2896E9BDC36BCA6E3E56C2B33B0 * value)
	{
		___delayedEvents_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delayedEvents_43), (void*)value);
	}

	inline static int32_t get_offset_of_updateEvents_44() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___updateEvents_44)); }
	inline List_1_tA41A4A4B8707C2896E9BDC36BCA6E3E56C2B33B0 * get_updateEvents_44() const { return ___updateEvents_44; }
	inline List_1_tA41A4A4B8707C2896E9BDC36BCA6E3E56C2B33B0 ** get_address_of_updateEvents_44() { return &___updateEvents_44; }
	inline void set_updateEvents_44(List_1_tA41A4A4B8707C2896E9BDC36BCA6E3E56C2B33B0 * value)
	{
		___updateEvents_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updateEvents_44), (void*)value);
	}

	inline static int32_t get_offset_of_removeEvents_45() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___removeEvents_45)); }
	inline List_1_tA41A4A4B8707C2896E9BDC36BCA6E3E56C2B33B0 * get_removeEvents_45() const { return ___removeEvents_45; }
	inline List_1_tA41A4A4B8707C2896E9BDC36BCA6E3E56C2B33B0 ** get_address_of_removeEvents_45() { return &___removeEvents_45; }
	inline void set_removeEvents_45(List_1_tA41A4A4B8707C2896E9BDC36BCA6E3E56C2B33B0 * value)
	{
		___removeEvents_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___removeEvents_45), (void*)value);
	}

	inline static int32_t get_offset_of_editorFlags_46() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___editorFlags_46)); }
	inline int32_t get_editorFlags_46() const { return ___editorFlags_46; }
	inline int32_t* get_address_of_editorFlags_46() { return &___editorFlags_46; }
	inline void set_editorFlags_46(int32_t value)
	{
		___editorFlags_46 = value;
	}

	inline static int32_t get_offset_of_U3CEventTargetU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CEventTargetU3Ek__BackingField_47)); }
	inline FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE * get_U3CEventTargetU3Ek__BackingField_47() const { return ___U3CEventTargetU3Ek__BackingField_47; }
	inline FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE ** get_address_of_U3CEventTargetU3Ek__BackingField_47() { return &___U3CEventTargetU3Ek__BackingField_47; }
	inline void set_U3CEventTargetU3Ek__BackingField_47(FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE * value)
	{
		___U3CEventTargetU3Ek__BackingField_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventTargetU3Ek__BackingField_47), (void*)value);
	}

	inline static int32_t get_offset_of_initialized_48() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___initialized_48)); }
	inline bool get_initialized_48() const { return ___initialized_48; }
	inline bool* get_address_of_initialized_48() { return &___initialized_48; }
	inline void set_initialized_48(bool value)
	{
		___initialized_48 = value;
	}

	inline static int32_t get_offset_of_U3CFinishedU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CFinishedU3Ek__BackingField_49)); }
	inline bool get_U3CFinishedU3Ek__BackingField_49() const { return ___U3CFinishedU3Ek__BackingField_49; }
	inline bool* get_address_of_U3CFinishedU3Ek__BackingField_49() { return &___U3CFinishedU3Ek__BackingField_49; }
	inline void set_U3CFinishedU3Ek__BackingField_49(bool value)
	{
		___U3CFinishedU3Ek__BackingField_49 = value;
	}

	inline static int32_t get_offset_of_activeStateName_50() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___activeStateName_50)); }
	inline String_t* get_activeStateName_50() const { return ___activeStateName_50; }
	inline String_t** get_address_of_activeStateName_50() { return &___activeStateName_50; }
	inline void set_activeStateName_50(String_t* value)
	{
		___activeStateName_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeStateName_50), (void*)value);
	}

	inline static int32_t get_offset_of_activeState_51() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___activeState_51)); }
	inline FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * get_activeState_51() const { return ___activeState_51; }
	inline FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 ** get_address_of_activeState_51() { return &___activeState_51; }
	inline void set_activeState_51(FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * value)
	{
		___activeState_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeState_51), (void*)value);
	}

	inline static int32_t get_offset_of_switchToState_52() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___switchToState_52)); }
	inline FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * get_switchToState_52() const { return ___switchToState_52; }
	inline FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 ** get_address_of_switchToState_52() { return &___switchToState_52; }
	inline void set_switchToState_52(FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * value)
	{
		___switchToState_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___switchToState_52), (void*)value);
	}

	inline static int32_t get_offset_of_previousActiveState_53() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___previousActiveState_53)); }
	inline FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * get_previousActiveState_53() const { return ___previousActiveState_53; }
	inline FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 ** get_address_of_previousActiveState_53() { return &___previousActiveState_53; }
	inline void set_previousActiveState_53(FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * value)
	{
		___previousActiveState_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousActiveState_53), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLastTransitionU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CLastTransitionU3Ek__BackingField_54)); }
	inline FsmTransition_t0F3354FE53374C3EA811FC81F9089C34D615605E * get_U3CLastTransitionU3Ek__BackingField_54() const { return ___U3CLastTransitionU3Ek__BackingField_54; }
	inline FsmTransition_t0F3354FE53374C3EA811FC81F9089C34D615605E ** get_address_of_U3CLastTransitionU3Ek__BackingField_54() { return &___U3CLastTransitionU3Ek__BackingField_54; }
	inline void set_U3CLastTransitionU3Ek__BackingField_54(FsmTransition_t0F3354FE53374C3EA811FC81F9089C34D615605E * value)
	{
		___U3CLastTransitionU3Ek__BackingField_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLastTransitionU3Ek__BackingField_54), (void*)value);
	}

	inline static int32_t get_offset_of_StateChanged_55() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___StateChanged_55)); }
	inline Action_1_t9212767A523C24A36F10F5C38487A2040C673BEB * get_StateChanged_55() const { return ___StateChanged_55; }
	inline Action_1_t9212767A523C24A36F10F5C38487A2040C673BEB ** get_address_of_StateChanged_55() { return &___StateChanged_55; }
	inline void set_StateChanged_55(Action_1_t9212767A523C24A36F10F5C38487A2040C673BEB * value)
	{
		___StateChanged_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateChanged_55), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsModifiedPrefabInstanceU3Ek__BackingField_56() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CIsModifiedPrefabInstanceU3Ek__BackingField_56)); }
	inline bool get_U3CIsModifiedPrefabInstanceU3Ek__BackingField_56() const { return ___U3CIsModifiedPrefabInstanceU3Ek__BackingField_56; }
	inline bool* get_address_of_U3CIsModifiedPrefabInstanceU3Ek__BackingField_56() { return &___U3CIsModifiedPrefabInstanceU3Ek__BackingField_56; }
	inline void set_U3CIsModifiedPrefabInstanceU3Ek__BackingField_56(bool value)
	{
		___U3CIsModifiedPrefabInstanceU3Ek__BackingField_56 = value;
	}

	inline static int32_t get_offset_of_editState_57() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___editState_57)); }
	inline FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * get_editState_57() const { return ___editState_57; }
	inline FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 ** get_address_of_editState_57() { return &___editState_57; }
	inline void set_editState_57(FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * value)
	{
		___editState_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___editState_57), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSwitchedStateU3Ek__BackingField_68() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CSwitchedStateU3Ek__BackingField_68)); }
	inline bool get_U3CSwitchedStateU3Ek__BackingField_68() const { return ___U3CSwitchedStateU3Ek__BackingField_68; }
	inline bool* get_address_of_U3CSwitchedStateU3Ek__BackingField_68() { return &___U3CSwitchedStateU3Ek__BackingField_68; }
	inline void set_U3CSwitchedStateU3Ek__BackingField_68(bool value)
	{
		___U3CSwitchedStateU3Ek__BackingField_68 = value;
	}

	inline static int32_t get_offset_of_mouseEvents_69() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___mouseEvents_69)); }
	inline bool get_mouseEvents_69() const { return ___mouseEvents_69; }
	inline bool* get_address_of_mouseEvents_69() { return &___mouseEvents_69; }
	inline void set_mouseEvents_69(bool value)
	{
		___mouseEvents_69 = value;
	}

	inline static int32_t get_offset_of_handleLevelLoaded_70() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleLevelLoaded_70)); }
	inline bool get_handleLevelLoaded_70() const { return ___handleLevelLoaded_70; }
	inline bool* get_address_of_handleLevelLoaded_70() { return &___handleLevelLoaded_70; }
	inline void set_handleLevelLoaded_70(bool value)
	{
		___handleLevelLoaded_70 = value;
	}

	inline static int32_t get_offset_of_handleTriggerEnter2D_71() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleTriggerEnter2D_71)); }
	inline bool get_handleTriggerEnter2D_71() const { return ___handleTriggerEnter2D_71; }
	inline bool* get_address_of_handleTriggerEnter2D_71() { return &___handleTriggerEnter2D_71; }
	inline void set_handleTriggerEnter2D_71(bool value)
	{
		___handleTriggerEnter2D_71 = value;
	}

	inline static int32_t get_offset_of_handleTriggerExit2D_72() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleTriggerExit2D_72)); }
	inline bool get_handleTriggerExit2D_72() const { return ___handleTriggerExit2D_72; }
	inline bool* get_address_of_handleTriggerExit2D_72() { return &___handleTriggerExit2D_72; }
	inline void set_handleTriggerExit2D_72(bool value)
	{
		___handleTriggerExit2D_72 = value;
	}

	inline static int32_t get_offset_of_handleTriggerStay2D_73() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleTriggerStay2D_73)); }
	inline bool get_handleTriggerStay2D_73() const { return ___handleTriggerStay2D_73; }
	inline bool* get_address_of_handleTriggerStay2D_73() { return &___handleTriggerStay2D_73; }
	inline void set_handleTriggerStay2D_73(bool value)
	{
		___handleTriggerStay2D_73 = value;
	}

	inline static int32_t get_offset_of_handleCollisionEnter2D_74() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleCollisionEnter2D_74)); }
	inline bool get_handleCollisionEnter2D_74() const { return ___handleCollisionEnter2D_74; }
	inline bool* get_address_of_handleCollisionEnter2D_74() { return &___handleCollisionEnter2D_74; }
	inline void set_handleCollisionEnter2D_74(bool value)
	{
		___handleCollisionEnter2D_74 = value;
	}

	inline static int32_t get_offset_of_handleCollisionExit2D_75() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleCollisionExit2D_75)); }
	inline bool get_handleCollisionExit2D_75() const { return ___handleCollisionExit2D_75; }
	inline bool* get_address_of_handleCollisionExit2D_75() { return &___handleCollisionExit2D_75; }
	inline void set_handleCollisionExit2D_75(bool value)
	{
		___handleCollisionExit2D_75 = value;
	}

	inline static int32_t get_offset_of_handleCollisionStay2D_76() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleCollisionStay2D_76)); }
	inline bool get_handleCollisionStay2D_76() const { return ___handleCollisionStay2D_76; }
	inline bool* get_address_of_handleCollisionStay2D_76() { return &___handleCollisionStay2D_76; }
	inline void set_handleCollisionStay2D_76(bool value)
	{
		___handleCollisionStay2D_76 = value;
	}

	inline static int32_t get_offset_of_handleTriggerEnter_77() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleTriggerEnter_77)); }
	inline bool get_handleTriggerEnter_77() const { return ___handleTriggerEnter_77; }
	inline bool* get_address_of_handleTriggerEnter_77() { return &___handleTriggerEnter_77; }
	inline void set_handleTriggerEnter_77(bool value)
	{
		___handleTriggerEnter_77 = value;
	}

	inline static int32_t get_offset_of_handleTriggerExit_78() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleTriggerExit_78)); }
	inline bool get_handleTriggerExit_78() const { return ___handleTriggerExit_78; }
	inline bool* get_address_of_handleTriggerExit_78() { return &___handleTriggerExit_78; }
	inline void set_handleTriggerExit_78(bool value)
	{
		___handleTriggerExit_78 = value;
	}

	inline static int32_t get_offset_of_handleTriggerStay_79() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleTriggerStay_79)); }
	inline bool get_handleTriggerStay_79() const { return ___handleTriggerStay_79; }
	inline bool* get_address_of_handleTriggerStay_79() { return &___handleTriggerStay_79; }
	inline void set_handleTriggerStay_79(bool value)
	{
		___handleTriggerStay_79 = value;
	}

	inline static int32_t get_offset_of_handleCollisionEnter_80() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleCollisionEnter_80)); }
	inline bool get_handleCollisionEnter_80() const { return ___handleCollisionEnter_80; }
	inline bool* get_address_of_handleCollisionEnter_80() { return &___handleCollisionEnter_80; }
	inline void set_handleCollisionEnter_80(bool value)
	{
		___handleCollisionEnter_80 = value;
	}

	inline static int32_t get_offset_of_handleCollisionExit_81() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleCollisionExit_81)); }
	inline bool get_handleCollisionExit_81() const { return ___handleCollisionExit_81; }
	inline bool* get_address_of_handleCollisionExit_81() { return &___handleCollisionExit_81; }
	inline void set_handleCollisionExit_81(bool value)
	{
		___handleCollisionExit_81 = value;
	}

	inline static int32_t get_offset_of_handleCollisionStay_82() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleCollisionStay_82)); }
	inline bool get_handleCollisionStay_82() const { return ___handleCollisionStay_82; }
	inline bool* get_address_of_handleCollisionStay_82() { return &___handleCollisionStay_82; }
	inline void set_handleCollisionStay_82(bool value)
	{
		___handleCollisionStay_82 = value;
	}

	inline static int32_t get_offset_of_handleParticleCollision_83() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleParticleCollision_83)); }
	inline bool get_handleParticleCollision_83() const { return ___handleParticleCollision_83; }
	inline bool* get_address_of_handleParticleCollision_83() { return &___handleParticleCollision_83; }
	inline void set_handleParticleCollision_83(bool value)
	{
		___handleParticleCollision_83 = value;
	}

	inline static int32_t get_offset_of_handleControllerColliderHit_84() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleControllerColliderHit_84)); }
	inline bool get_handleControllerColliderHit_84() const { return ___handleControllerColliderHit_84; }
	inline bool* get_address_of_handleControllerColliderHit_84() { return &___handleControllerColliderHit_84; }
	inline void set_handleControllerColliderHit_84(bool value)
	{
		___handleControllerColliderHit_84 = value;
	}

	inline static int32_t get_offset_of_handleJointBreak_85() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleJointBreak_85)); }
	inline bool get_handleJointBreak_85() const { return ___handleJointBreak_85; }
	inline bool* get_address_of_handleJointBreak_85() { return &___handleJointBreak_85; }
	inline void set_handleJointBreak_85(bool value)
	{
		___handleJointBreak_85 = value;
	}

	inline static int32_t get_offset_of_handleJointBreak2D_86() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleJointBreak2D_86)); }
	inline bool get_handleJointBreak2D_86() const { return ___handleJointBreak2D_86; }
	inline bool* get_address_of_handleJointBreak2D_86() { return &___handleJointBreak2D_86; }
	inline void set_handleJointBreak2D_86(bool value)
	{
		___handleJointBreak2D_86 = value;
	}

	inline static int32_t get_offset_of_handleOnGUI_87() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleOnGUI_87)); }
	inline bool get_handleOnGUI_87() const { return ___handleOnGUI_87; }
	inline bool* get_address_of_handleOnGUI_87() { return &___handleOnGUI_87; }
	inline void set_handleOnGUI_87(bool value)
	{
		___handleOnGUI_87 = value;
	}

	inline static int32_t get_offset_of_handleFixedUpdate_88() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleFixedUpdate_88)); }
	inline bool get_handleFixedUpdate_88() const { return ___handleFixedUpdate_88; }
	inline bool* get_address_of_handleFixedUpdate_88() { return &___handleFixedUpdate_88; }
	inline void set_handleFixedUpdate_88(bool value)
	{
		___handleFixedUpdate_88 = value;
	}

	inline static int32_t get_offset_of_handleLateUpdate_89() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleLateUpdate_89)); }
	inline bool get_handleLateUpdate_89() const { return ___handleLateUpdate_89; }
	inline bool* get_address_of_handleLateUpdate_89() { return &___handleLateUpdate_89; }
	inline void set_handleLateUpdate_89(bool value)
	{
		___handleLateUpdate_89 = value;
	}

	inline static int32_t get_offset_of_handleApplicationEvents_90() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleApplicationEvents_90)); }
	inline bool get_handleApplicationEvents_90() const { return ___handleApplicationEvents_90; }
	inline bool* get_address_of_handleApplicationEvents_90() { return &___handleApplicationEvents_90; }
	inline void set_handleApplicationEvents_90(bool value)
	{
		___handleApplicationEvents_90 = value;
	}

	inline static int32_t get_offset_of_handleUiEvents_91() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleUiEvents_91)); }
	inline int32_t get_handleUiEvents_91() const { return ___handleUiEvents_91; }
	inline int32_t* get_address_of_handleUiEvents_91() { return &___handleUiEvents_91; }
	inline void set_handleUiEvents_91(int32_t value)
	{
		___handleUiEvents_91 = value;
	}

	inline static int32_t get_offset_of_handleLegacyNetworking_92() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleLegacyNetworking_92)); }
	inline bool get_handleLegacyNetworking_92() const { return ___handleLegacyNetworking_92; }
	inline bool* get_address_of_handleLegacyNetworking_92() { return &___handleLegacyNetworking_92; }
	inline void set_handleLegacyNetworking_92(bool value)
	{
		___handleLegacyNetworking_92 = value;
	}

	inline static int32_t get_offset_of_U3CCollisionInfoU3Ek__BackingField_93() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CCollisionInfoU3Ek__BackingField_93)); }
	inline Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * get_U3CCollisionInfoU3Ek__BackingField_93() const { return ___U3CCollisionInfoU3Ek__BackingField_93; }
	inline Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 ** get_address_of_U3CCollisionInfoU3Ek__BackingField_93() { return &___U3CCollisionInfoU3Ek__BackingField_93; }
	inline void set_U3CCollisionInfoU3Ek__BackingField_93(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * value)
	{
		___U3CCollisionInfoU3Ek__BackingField_93 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCollisionInfoU3Ek__BackingField_93), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTriggerColliderU3Ek__BackingField_94() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CTriggerColliderU3Ek__BackingField_94)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_U3CTriggerColliderU3Ek__BackingField_94() const { return ___U3CTriggerColliderU3Ek__BackingField_94; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_U3CTriggerColliderU3Ek__BackingField_94() { return &___U3CTriggerColliderU3Ek__BackingField_94; }
	inline void set_U3CTriggerColliderU3Ek__BackingField_94(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___U3CTriggerColliderU3Ek__BackingField_94 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTriggerColliderU3Ek__BackingField_94), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCollision2DInfoU3Ek__BackingField_95() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CCollision2DInfoU3Ek__BackingField_95)); }
	inline Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * get_U3CCollision2DInfoU3Ek__BackingField_95() const { return ___U3CCollision2DInfoU3Ek__BackingField_95; }
	inline Collision2D_t95B5FD331CE95276D3658140844190B485D26564 ** get_address_of_U3CCollision2DInfoU3Ek__BackingField_95() { return &___U3CCollision2DInfoU3Ek__BackingField_95; }
	inline void set_U3CCollision2DInfoU3Ek__BackingField_95(Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * value)
	{
		___U3CCollision2DInfoU3Ek__BackingField_95 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCollision2DInfoU3Ek__BackingField_95), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTriggerCollider2DU3Ek__BackingField_96() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CTriggerCollider2DU3Ek__BackingField_96)); }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * get_U3CTriggerCollider2DU3Ek__BackingField_96() const { return ___U3CTriggerCollider2DU3Ek__BackingField_96; }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** get_address_of_U3CTriggerCollider2DU3Ek__BackingField_96() { return &___U3CTriggerCollider2DU3Ek__BackingField_96; }
	inline void set_U3CTriggerCollider2DU3Ek__BackingField_96(Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		___U3CTriggerCollider2DU3Ek__BackingField_96 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTriggerCollider2DU3Ek__BackingField_96), (void*)value);
	}

	inline static int32_t get_offset_of_U3CJointBreakForceU3Ek__BackingField_97() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CJointBreakForceU3Ek__BackingField_97)); }
	inline float get_U3CJointBreakForceU3Ek__BackingField_97() const { return ___U3CJointBreakForceU3Ek__BackingField_97; }
	inline float* get_address_of_U3CJointBreakForceU3Ek__BackingField_97() { return &___U3CJointBreakForceU3Ek__BackingField_97; }
	inline void set_U3CJointBreakForceU3Ek__BackingField_97(float value)
	{
		___U3CJointBreakForceU3Ek__BackingField_97 = value;
	}

	inline static int32_t get_offset_of_U3CBrokenJoint2DU3Ek__BackingField_98() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CBrokenJoint2DU3Ek__BackingField_98)); }
	inline Joint2D_t6BF0D20078680B9000B5BD0D3C30266458F8B964 * get_U3CBrokenJoint2DU3Ek__BackingField_98() const { return ___U3CBrokenJoint2DU3Ek__BackingField_98; }
	inline Joint2D_t6BF0D20078680B9000B5BD0D3C30266458F8B964 ** get_address_of_U3CBrokenJoint2DU3Ek__BackingField_98() { return &___U3CBrokenJoint2DU3Ek__BackingField_98; }
	inline void set_U3CBrokenJoint2DU3Ek__BackingField_98(Joint2D_t6BF0D20078680B9000B5BD0D3C30266458F8B964 * value)
	{
		___U3CBrokenJoint2DU3Ek__BackingField_98 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBrokenJoint2DU3Ek__BackingField_98), (void*)value);
	}

	inline static int32_t get_offset_of_U3CParticleCollisionGOU3Ek__BackingField_99() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CParticleCollisionGOU3Ek__BackingField_99)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CParticleCollisionGOU3Ek__BackingField_99() const { return ___U3CParticleCollisionGOU3Ek__BackingField_99; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CParticleCollisionGOU3Ek__BackingField_99() { return &___U3CParticleCollisionGOU3Ek__BackingField_99; }
	inline void set_U3CParticleCollisionGOU3Ek__BackingField_99(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CParticleCollisionGOU3Ek__BackingField_99 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParticleCollisionGOU3Ek__BackingField_99), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTriggerNameU3Ek__BackingField_100() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CTriggerNameU3Ek__BackingField_100)); }
	inline String_t* get_U3CTriggerNameU3Ek__BackingField_100() const { return ___U3CTriggerNameU3Ek__BackingField_100; }
	inline String_t** get_address_of_U3CTriggerNameU3Ek__BackingField_100() { return &___U3CTriggerNameU3Ek__BackingField_100; }
	inline void set_U3CTriggerNameU3Ek__BackingField_100(String_t* value)
	{
		___U3CTriggerNameU3Ek__BackingField_100 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTriggerNameU3Ek__BackingField_100), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCollisionNameU3Ek__BackingField_101() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CCollisionNameU3Ek__BackingField_101)); }
	inline String_t* get_U3CCollisionNameU3Ek__BackingField_101() const { return ___U3CCollisionNameU3Ek__BackingField_101; }
	inline String_t** get_address_of_U3CCollisionNameU3Ek__BackingField_101() { return &___U3CCollisionNameU3Ek__BackingField_101; }
	inline void set_U3CCollisionNameU3Ek__BackingField_101(String_t* value)
	{
		___U3CCollisionNameU3Ek__BackingField_101 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCollisionNameU3Ek__BackingField_101), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrigger2dNameU3Ek__BackingField_102() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CTrigger2dNameU3Ek__BackingField_102)); }
	inline String_t* get_U3CTrigger2dNameU3Ek__BackingField_102() const { return ___U3CTrigger2dNameU3Ek__BackingField_102; }
	inline String_t** get_address_of_U3CTrigger2dNameU3Ek__BackingField_102() { return &___U3CTrigger2dNameU3Ek__BackingField_102; }
	inline void set_U3CTrigger2dNameU3Ek__BackingField_102(String_t* value)
	{
		___U3CTrigger2dNameU3Ek__BackingField_102 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrigger2dNameU3Ek__BackingField_102), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCollision2dNameU3Ek__BackingField_103() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CCollision2dNameU3Ek__BackingField_103)); }
	inline String_t* get_U3CCollision2dNameU3Ek__BackingField_103() const { return ___U3CCollision2dNameU3Ek__BackingField_103; }
	inline String_t** get_address_of_U3CCollision2dNameU3Ek__BackingField_103() { return &___U3CCollision2dNameU3Ek__BackingField_103; }
	inline void set_U3CCollision2dNameU3Ek__BackingField_103(String_t* value)
	{
		___U3CCollision2dNameU3Ek__BackingField_103 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCollision2dNameU3Ek__BackingField_103), (void*)value);
	}

	inline static int32_t get_offset_of_U3CControllerColliderU3Ek__BackingField_104() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CControllerColliderU3Ek__BackingField_104)); }
	inline ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550 * get_U3CControllerColliderU3Ek__BackingField_104() const { return ___U3CControllerColliderU3Ek__BackingField_104; }
	inline ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550 ** get_address_of_U3CControllerColliderU3Ek__BackingField_104() { return &___U3CControllerColliderU3Ek__BackingField_104; }
	inline void set_U3CControllerColliderU3Ek__BackingField_104(ControllerColliderHit_t483E787AA2D92263EC1F899BCF1FFC3F2B96D550 * value)
	{
		___U3CControllerColliderU3Ek__BackingField_104 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CControllerColliderU3Ek__BackingField_104), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRaycastHitInfoU3Ek__BackingField_105() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___U3CRaycastHitInfoU3Ek__BackingField_105)); }
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  get_U3CRaycastHitInfoU3Ek__BackingField_105() const { return ___U3CRaycastHitInfoU3Ek__BackingField_105; }
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * get_address_of_U3CRaycastHitInfoU3Ek__BackingField_105() { return &___U3CRaycastHitInfoU3Ek__BackingField_105; }
	inline void set_U3CRaycastHitInfoU3Ek__BackingField_105(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  value)
	{
		___U3CRaycastHitInfoU3Ek__BackingField_105 = value;
	}

	inline static int32_t get_offset_of_handleAnimatorMove_107() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleAnimatorMove_107)); }
	inline bool get_handleAnimatorMove_107() const { return ___handleAnimatorMove_107; }
	inline bool* get_address_of_handleAnimatorMove_107() { return &___handleAnimatorMove_107; }
	inline void set_handleAnimatorMove_107(bool value)
	{
		___handleAnimatorMove_107 = value;
	}

	inline static int32_t get_offset_of_handleAnimatorIK_108() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___handleAnimatorIK_108)); }
	inline bool get_handleAnimatorIK_108() const { return ___handleAnimatorIK_108; }
	inline bool* get_address_of_handleAnimatorIK_108() { return &___handleAnimatorIK_108; }
	inline void set_handleAnimatorIK_108(bool value)
	{
		___handleAnimatorIK_108 = value;
	}

	inline static int32_t get_offset_of_disableSent_109() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F, ___disableSent_109)); }
	inline bool get_disableSent_109() const { return ___disableSent_109; }
	inline bool* get_address_of_disableSent_109() { return &___disableSent_109; }
	inline void set_disableSent_109(bool value)
	{
		___disableSent_109 = value;
	}
};

struct Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields
{
public:
	// HutongGames.PlayMaker.FsmEventData HutongGames.PlayMaker.Fsm::EventData
	FsmEventData_t453A58C9899C2D7415E4461A62DEF9460A41603D * ___EventData_4;
	// UnityEngine.GameObject HutongGames.PlayMaker.Fsm::<LastClickedObject>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CLastClickedObjectU3Ek__BackingField_58;
	// System.Boolean HutongGames.PlayMaker.Fsm::<BreakpointsEnabled>k__BackingField
	bool ___U3CBreakpointsEnabledU3Ek__BackingField_59;
	// System.Boolean HutongGames.PlayMaker.Fsm::<HitBreakpoint>k__BackingField
	bool ___U3CHitBreakpointU3Ek__BackingField_60;
	// HutongGames.PlayMaker.Fsm HutongGames.PlayMaker.Fsm::<BreakAtFsm>k__BackingField
	Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * ___U3CBreakAtFsmU3Ek__BackingField_61;
	// HutongGames.PlayMaker.FsmState HutongGames.PlayMaker.Fsm::<BreakAtState>k__BackingField
	FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * ___U3CBreakAtStateU3Ek__BackingField_62;
	// System.Boolean HutongGames.PlayMaker.Fsm::<IsBreak>k__BackingField
	bool ___U3CIsBreakU3Ek__BackingField_63;
	// System.Boolean HutongGames.PlayMaker.Fsm::<IsErrorBreak>k__BackingField
	bool ___U3CIsErrorBreakU3Ek__BackingField_64;
	// System.String HutongGames.PlayMaker.Fsm::<LastError>k__BackingField
	String_t* ___U3CLastErrorU3Ek__BackingField_65;
	// System.Boolean HutongGames.PlayMaker.Fsm::<StepToStateChange>k__BackingField
	bool ___U3CStepToStateChangeU3Ek__BackingField_66;
	// HutongGames.PlayMaker.Fsm HutongGames.PlayMaker.Fsm::<StepFsm>k__BackingField
	Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * ___U3CStepFsmU3Ek__BackingField_67;
	// System.Collections.Generic.Dictionary`2<HutongGames.PlayMaker.Fsm,UnityEngine.RaycastHit2D> HutongGames.PlayMaker.Fsm::lastRaycastHit2DInfoLUT
	Dictionary_2_tC5C4DDD30CBE22C2E681D17CAAC4EFDB82E9AFB5 * ___lastRaycastHit2DInfoLUT_106;
	// HutongGames.PlayMaker.FsmEventTarget HutongGames.PlayMaker.Fsm::targetSelf
	FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE * ___targetSelf_110;
	// UnityEngine.Color HutongGames.PlayMaker.Fsm::<DebugLookAtColor>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CDebugLookAtColorU3Ek__BackingField_111;
	// UnityEngine.Color HutongGames.PlayMaker.Fsm::<DebugRaycastColor>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CDebugRaycastColorU3Ek__BackingField_112;
	// UnityEngine.Color[] HutongGames.PlayMaker.Fsm::StateColors
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___StateColors_113;

public:
	inline static int32_t get_offset_of_EventData_4() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___EventData_4)); }
	inline FsmEventData_t453A58C9899C2D7415E4461A62DEF9460A41603D * get_EventData_4() const { return ___EventData_4; }
	inline FsmEventData_t453A58C9899C2D7415E4461A62DEF9460A41603D ** get_address_of_EventData_4() { return &___EventData_4; }
	inline void set_EventData_4(FsmEventData_t453A58C9899C2D7415E4461A62DEF9460A41603D * value)
	{
		___EventData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventData_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLastClickedObjectU3Ek__BackingField_58() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___U3CLastClickedObjectU3Ek__BackingField_58)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CLastClickedObjectU3Ek__BackingField_58() const { return ___U3CLastClickedObjectU3Ek__BackingField_58; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CLastClickedObjectU3Ek__BackingField_58() { return &___U3CLastClickedObjectU3Ek__BackingField_58; }
	inline void set_U3CLastClickedObjectU3Ek__BackingField_58(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CLastClickedObjectU3Ek__BackingField_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLastClickedObjectU3Ek__BackingField_58), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBreakpointsEnabledU3Ek__BackingField_59() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___U3CBreakpointsEnabledU3Ek__BackingField_59)); }
	inline bool get_U3CBreakpointsEnabledU3Ek__BackingField_59() const { return ___U3CBreakpointsEnabledU3Ek__BackingField_59; }
	inline bool* get_address_of_U3CBreakpointsEnabledU3Ek__BackingField_59() { return &___U3CBreakpointsEnabledU3Ek__BackingField_59; }
	inline void set_U3CBreakpointsEnabledU3Ek__BackingField_59(bool value)
	{
		___U3CBreakpointsEnabledU3Ek__BackingField_59 = value;
	}

	inline static int32_t get_offset_of_U3CHitBreakpointU3Ek__BackingField_60() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___U3CHitBreakpointU3Ek__BackingField_60)); }
	inline bool get_U3CHitBreakpointU3Ek__BackingField_60() const { return ___U3CHitBreakpointU3Ek__BackingField_60; }
	inline bool* get_address_of_U3CHitBreakpointU3Ek__BackingField_60() { return &___U3CHitBreakpointU3Ek__BackingField_60; }
	inline void set_U3CHitBreakpointU3Ek__BackingField_60(bool value)
	{
		___U3CHitBreakpointU3Ek__BackingField_60 = value;
	}

	inline static int32_t get_offset_of_U3CBreakAtFsmU3Ek__BackingField_61() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___U3CBreakAtFsmU3Ek__BackingField_61)); }
	inline Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * get_U3CBreakAtFsmU3Ek__BackingField_61() const { return ___U3CBreakAtFsmU3Ek__BackingField_61; }
	inline Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F ** get_address_of_U3CBreakAtFsmU3Ek__BackingField_61() { return &___U3CBreakAtFsmU3Ek__BackingField_61; }
	inline void set_U3CBreakAtFsmU3Ek__BackingField_61(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * value)
	{
		___U3CBreakAtFsmU3Ek__BackingField_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBreakAtFsmU3Ek__BackingField_61), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBreakAtStateU3Ek__BackingField_62() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___U3CBreakAtStateU3Ek__BackingField_62)); }
	inline FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * get_U3CBreakAtStateU3Ek__BackingField_62() const { return ___U3CBreakAtStateU3Ek__BackingField_62; }
	inline FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 ** get_address_of_U3CBreakAtStateU3Ek__BackingField_62() { return &___U3CBreakAtStateU3Ek__BackingField_62; }
	inline void set_U3CBreakAtStateU3Ek__BackingField_62(FsmState_t999190485995F03D1EAFBAE54DFB92258B1F7981 * value)
	{
		___U3CBreakAtStateU3Ek__BackingField_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBreakAtStateU3Ek__BackingField_62), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsBreakU3Ek__BackingField_63() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___U3CIsBreakU3Ek__BackingField_63)); }
	inline bool get_U3CIsBreakU3Ek__BackingField_63() const { return ___U3CIsBreakU3Ek__BackingField_63; }
	inline bool* get_address_of_U3CIsBreakU3Ek__BackingField_63() { return &___U3CIsBreakU3Ek__BackingField_63; }
	inline void set_U3CIsBreakU3Ek__BackingField_63(bool value)
	{
		___U3CIsBreakU3Ek__BackingField_63 = value;
	}

	inline static int32_t get_offset_of_U3CIsErrorBreakU3Ek__BackingField_64() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___U3CIsErrorBreakU3Ek__BackingField_64)); }
	inline bool get_U3CIsErrorBreakU3Ek__BackingField_64() const { return ___U3CIsErrorBreakU3Ek__BackingField_64; }
	inline bool* get_address_of_U3CIsErrorBreakU3Ek__BackingField_64() { return &___U3CIsErrorBreakU3Ek__BackingField_64; }
	inline void set_U3CIsErrorBreakU3Ek__BackingField_64(bool value)
	{
		___U3CIsErrorBreakU3Ek__BackingField_64 = value;
	}

	inline static int32_t get_offset_of_U3CLastErrorU3Ek__BackingField_65() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___U3CLastErrorU3Ek__BackingField_65)); }
	inline String_t* get_U3CLastErrorU3Ek__BackingField_65() const { return ___U3CLastErrorU3Ek__BackingField_65; }
	inline String_t** get_address_of_U3CLastErrorU3Ek__BackingField_65() { return &___U3CLastErrorU3Ek__BackingField_65; }
	inline void set_U3CLastErrorU3Ek__BackingField_65(String_t* value)
	{
		___U3CLastErrorU3Ek__BackingField_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLastErrorU3Ek__BackingField_65), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStepToStateChangeU3Ek__BackingField_66() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___U3CStepToStateChangeU3Ek__BackingField_66)); }
	inline bool get_U3CStepToStateChangeU3Ek__BackingField_66() const { return ___U3CStepToStateChangeU3Ek__BackingField_66; }
	inline bool* get_address_of_U3CStepToStateChangeU3Ek__BackingField_66() { return &___U3CStepToStateChangeU3Ek__BackingField_66; }
	inline void set_U3CStepToStateChangeU3Ek__BackingField_66(bool value)
	{
		___U3CStepToStateChangeU3Ek__BackingField_66 = value;
	}

	inline static int32_t get_offset_of_U3CStepFsmU3Ek__BackingField_67() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___U3CStepFsmU3Ek__BackingField_67)); }
	inline Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * get_U3CStepFsmU3Ek__BackingField_67() const { return ___U3CStepFsmU3Ek__BackingField_67; }
	inline Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F ** get_address_of_U3CStepFsmU3Ek__BackingField_67() { return &___U3CStepFsmU3Ek__BackingField_67; }
	inline void set_U3CStepFsmU3Ek__BackingField_67(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * value)
	{
		___U3CStepFsmU3Ek__BackingField_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStepFsmU3Ek__BackingField_67), (void*)value);
	}

	inline static int32_t get_offset_of_lastRaycastHit2DInfoLUT_106() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___lastRaycastHit2DInfoLUT_106)); }
	inline Dictionary_2_tC5C4DDD30CBE22C2E681D17CAAC4EFDB82E9AFB5 * get_lastRaycastHit2DInfoLUT_106() const { return ___lastRaycastHit2DInfoLUT_106; }
	inline Dictionary_2_tC5C4DDD30CBE22C2E681D17CAAC4EFDB82E9AFB5 ** get_address_of_lastRaycastHit2DInfoLUT_106() { return &___lastRaycastHit2DInfoLUT_106; }
	inline void set_lastRaycastHit2DInfoLUT_106(Dictionary_2_tC5C4DDD30CBE22C2E681D17CAAC4EFDB82E9AFB5 * value)
	{
		___lastRaycastHit2DInfoLUT_106 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastRaycastHit2DInfoLUT_106), (void*)value);
	}

	inline static int32_t get_offset_of_targetSelf_110() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___targetSelf_110)); }
	inline FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE * get_targetSelf_110() const { return ___targetSelf_110; }
	inline FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE ** get_address_of_targetSelf_110() { return &___targetSelf_110; }
	inline void set_targetSelf_110(FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE * value)
	{
		___targetSelf_110 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetSelf_110), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDebugLookAtColorU3Ek__BackingField_111() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___U3CDebugLookAtColorU3Ek__BackingField_111)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CDebugLookAtColorU3Ek__BackingField_111() const { return ___U3CDebugLookAtColorU3Ek__BackingField_111; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CDebugLookAtColorU3Ek__BackingField_111() { return &___U3CDebugLookAtColorU3Ek__BackingField_111; }
	inline void set_U3CDebugLookAtColorU3Ek__BackingField_111(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CDebugLookAtColorU3Ek__BackingField_111 = value;
	}

	inline static int32_t get_offset_of_U3CDebugRaycastColorU3Ek__BackingField_112() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___U3CDebugRaycastColorU3Ek__BackingField_112)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CDebugRaycastColorU3Ek__BackingField_112() const { return ___U3CDebugRaycastColorU3Ek__BackingField_112; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CDebugRaycastColorU3Ek__BackingField_112() { return &___U3CDebugRaycastColorU3Ek__BackingField_112; }
	inline void set_U3CDebugRaycastColorU3Ek__BackingField_112(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CDebugRaycastColorU3Ek__BackingField_112 = value;
	}

	inline static int32_t get_offset_of_StateColors_113() { return static_cast<int32_t>(offsetof(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields, ___StateColors_113)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get_StateColors_113() const { return ___StateColors_113; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of_StateColors_113() { return &___StateColors_113; }
	inline void set_StateColors_113(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		___StateColors_113 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateColors_113), (void*)value);
	}
};


// HutongGames.PlayMaker.FsmEventTarget
struct  FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE  : public RuntimeObject
{
public:
	// HutongGames.PlayMaker.FsmEventTarget/EventTarget HutongGames.PlayMaker.FsmEventTarget::target
	int32_t ___target_1;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.FsmEventTarget::excludeSelf
	FsmBool_t194C45226C554DFD429FC1674ED697DC66DD1A97 * ___excludeSelf_2;
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.FsmEventTarget::gameObject
	FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * ___gameObject_3;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.FsmEventTarget::fsmName
	FsmString_tE5EC1F4E6623FE9F414DFAC7F6A05149723279F0 * ___fsmName_4;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.FsmEventTarget::sendToChildren
	FsmBool_t194C45226C554DFD429FC1674ED697DC66DD1A97 * ___sendToChildren_5;
	// PlayMakerFSM HutongGames.PlayMaker.FsmEventTarget::fsmComponent
	PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555 * ___fsmComponent_6;

public:
	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE, ___target_1)); }
	inline int32_t get_target_1() const { return ___target_1; }
	inline int32_t* get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(int32_t value)
	{
		___target_1 = value;
	}

	inline static int32_t get_offset_of_excludeSelf_2() { return static_cast<int32_t>(offsetof(FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE, ___excludeSelf_2)); }
	inline FsmBool_t194C45226C554DFD429FC1674ED697DC66DD1A97 * get_excludeSelf_2() const { return ___excludeSelf_2; }
	inline FsmBool_t194C45226C554DFD429FC1674ED697DC66DD1A97 ** get_address_of_excludeSelf_2() { return &___excludeSelf_2; }
	inline void set_excludeSelf_2(FsmBool_t194C45226C554DFD429FC1674ED697DC66DD1A97 * value)
	{
		___excludeSelf_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___excludeSelf_2), (void*)value);
	}

	inline static int32_t get_offset_of_gameObject_3() { return static_cast<int32_t>(offsetof(FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE, ___gameObject_3)); }
	inline FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * get_gameObject_3() const { return ___gameObject_3; }
	inline FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 ** get_address_of_gameObject_3() { return &___gameObject_3; }
	inline void set_gameObject_3(FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * value)
	{
		___gameObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_3), (void*)value);
	}

	inline static int32_t get_offset_of_fsmName_4() { return static_cast<int32_t>(offsetof(FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE, ___fsmName_4)); }
	inline FsmString_tE5EC1F4E6623FE9F414DFAC7F6A05149723279F0 * get_fsmName_4() const { return ___fsmName_4; }
	inline FsmString_tE5EC1F4E6623FE9F414DFAC7F6A05149723279F0 ** get_address_of_fsmName_4() { return &___fsmName_4; }
	inline void set_fsmName_4(FsmString_tE5EC1F4E6623FE9F414DFAC7F6A05149723279F0 * value)
	{
		___fsmName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fsmName_4), (void*)value);
	}

	inline static int32_t get_offset_of_sendToChildren_5() { return static_cast<int32_t>(offsetof(FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE, ___sendToChildren_5)); }
	inline FsmBool_t194C45226C554DFD429FC1674ED697DC66DD1A97 * get_sendToChildren_5() const { return ___sendToChildren_5; }
	inline FsmBool_t194C45226C554DFD429FC1674ED697DC66DD1A97 ** get_address_of_sendToChildren_5() { return &___sendToChildren_5; }
	inline void set_sendToChildren_5(FsmBool_t194C45226C554DFD429FC1674ED697DC66DD1A97 * value)
	{
		___sendToChildren_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sendToChildren_5), (void*)value);
	}

	inline static int32_t get_offset_of_fsmComponent_6() { return static_cast<int32_t>(offsetof(FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE, ___fsmComponent_6)); }
	inline PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555 * get_fsmComponent_6() const { return ___fsmComponent_6; }
	inline PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555 ** get_address_of_fsmComponent_6() { return &___fsmComponent_6; }
	inline void set_fsmComponent_6(PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555 * value)
	{
		___fsmComponent_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fsmComponent_6), (void*)value);
	}
};

struct FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE_StaticFields
{
public:
	// HutongGames.PlayMaker.FsmEventTarget HutongGames.PlayMaker.FsmEventTarget::self
	FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE * ___self_0;

public:
	inline static int32_t get_offset_of_self_0() { return static_cast<int32_t>(offsetof(FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE_StaticFields, ___self_0)); }
	inline FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE * get_self_0() const { return ___self_0; }
	inline FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE ** get_address_of_self_0() { return &___self_0; }
	inline void set_self_0(FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE * value)
	{
		___self_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___self_0), (void*)value);
	}
};


// HutongGames.PlayMaker.FsmOwnerDefault
struct  FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27  : public RuntimeObject
{
public:
	// HutongGames.PlayMaker.OwnerDefaultOption HutongGames.PlayMaker.FsmOwnerDefault::ownerOption
	int32_t ___ownerOption_0;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.FsmOwnerDefault::gameObject
	FsmGameObject_t7025A28070D5CC87929DD35DECF6025E38BFA994 * ___gameObject_1;

public:
	inline static int32_t get_offset_of_ownerOption_0() { return static_cast<int32_t>(offsetof(FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27, ___ownerOption_0)); }
	inline int32_t get_ownerOption_0() const { return ___ownerOption_0; }
	inline int32_t* get_address_of_ownerOption_0() { return &___ownerOption_0; }
	inline void set_ownerOption_0(int32_t value)
	{
		___ownerOption_0 = value;
	}

	inline static int32_t get_offset_of_gameObject_1() { return static_cast<int32_t>(offsetof(FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27, ___gameObject_1)); }
	inline FsmGameObject_t7025A28070D5CC87929DD35DECF6025E38BFA994 * get_gameObject_1() const { return ___gameObject_1; }
	inline FsmGameObject_t7025A28070D5CC87929DD35DECF6025E38BFA994 ** get_address_of_gameObject_1() { return &___gameObject_1; }
	inline void set_gameObject_1(FsmGameObject_t7025A28070D5CC87929DD35DECF6025E38BFA994 * value)
	{
		___gameObject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_1), (void*)value);
	}
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// HutongGames.PlayMaker.Actions.UiButtonArray
struct  UiButtonArray_t5DE403718B30E28AB52D19DB6407C55B9FCABA8F  : public FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA
{
public:
	// HutongGames.PlayMaker.FsmEventTarget HutongGames.PlayMaker.Actions.UiButtonArray::eventTarget
	FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE * ___eventTarget_15;
	// HutongGames.PlayMaker.FsmGameObject[] HutongGames.PlayMaker.Actions.UiButtonArray::gameObjects
	FsmGameObjectU5BU5D_tC2BA38DD29AD2D8FA24D7F654F0F4BBA805B3008* ___gameObjects_16;
	// HutongGames.PlayMaker.FsmEvent[] HutongGames.PlayMaker.Actions.UiButtonArray::clickEvents
	FsmEventU5BU5D_t6CFFD7E7FC1A5B9371657C586FB9AC012795717B* ___clickEvents_17;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.UiButtonArray::clickIndex
	FsmInt_tBBEEB90F70BE79DBC16E48E0AE420C011A0A8DC6 * ___clickIndex_18;
	// UnityEngine.UI.Button[] HutongGames.PlayMaker.Actions.UiButtonArray::buttons
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* ___buttons_19;
	// UnityEngine.GameObject[] HutongGames.PlayMaker.Actions.UiButtonArray::cachedGameObjects
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___cachedGameObjects_20;
	// UnityEngine.Events.UnityAction[] HutongGames.PlayMaker.Actions.UiButtonArray::actions
	UnityActionU5BU5D_t9AA7B04736592528B8A2F1EDD3BB4F58F69921D4* ___actions_21;

public:
	inline static int32_t get_offset_of_eventTarget_15() { return static_cast<int32_t>(offsetof(UiButtonArray_t5DE403718B30E28AB52D19DB6407C55B9FCABA8F, ___eventTarget_15)); }
	inline FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE * get_eventTarget_15() const { return ___eventTarget_15; }
	inline FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE ** get_address_of_eventTarget_15() { return &___eventTarget_15; }
	inline void set_eventTarget_15(FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE * value)
	{
		___eventTarget_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventTarget_15), (void*)value);
	}

	inline static int32_t get_offset_of_gameObjects_16() { return static_cast<int32_t>(offsetof(UiButtonArray_t5DE403718B30E28AB52D19DB6407C55B9FCABA8F, ___gameObjects_16)); }
	inline FsmGameObjectU5BU5D_tC2BA38DD29AD2D8FA24D7F654F0F4BBA805B3008* get_gameObjects_16() const { return ___gameObjects_16; }
	inline FsmGameObjectU5BU5D_tC2BA38DD29AD2D8FA24D7F654F0F4BBA805B3008** get_address_of_gameObjects_16() { return &___gameObjects_16; }
	inline void set_gameObjects_16(FsmGameObjectU5BU5D_tC2BA38DD29AD2D8FA24D7F654F0F4BBA805B3008* value)
	{
		___gameObjects_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObjects_16), (void*)value);
	}

	inline static int32_t get_offset_of_clickEvents_17() { return static_cast<int32_t>(offsetof(UiButtonArray_t5DE403718B30E28AB52D19DB6407C55B9FCABA8F, ___clickEvents_17)); }
	inline FsmEventU5BU5D_t6CFFD7E7FC1A5B9371657C586FB9AC012795717B* get_clickEvents_17() const { return ___clickEvents_17; }
	inline FsmEventU5BU5D_t6CFFD7E7FC1A5B9371657C586FB9AC012795717B** get_address_of_clickEvents_17() { return &___clickEvents_17; }
	inline void set_clickEvents_17(FsmEventU5BU5D_t6CFFD7E7FC1A5B9371657C586FB9AC012795717B* value)
	{
		___clickEvents_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clickEvents_17), (void*)value);
	}

	inline static int32_t get_offset_of_clickIndex_18() { return static_cast<int32_t>(offsetof(UiButtonArray_t5DE403718B30E28AB52D19DB6407C55B9FCABA8F, ___clickIndex_18)); }
	inline FsmInt_tBBEEB90F70BE79DBC16E48E0AE420C011A0A8DC6 * get_clickIndex_18() const { return ___clickIndex_18; }
	inline FsmInt_tBBEEB90F70BE79DBC16E48E0AE420C011A0A8DC6 ** get_address_of_clickIndex_18() { return &___clickIndex_18; }
	inline void set_clickIndex_18(FsmInt_tBBEEB90F70BE79DBC16E48E0AE420C011A0A8DC6 * value)
	{
		___clickIndex_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clickIndex_18), (void*)value);
	}

	inline static int32_t get_offset_of_buttons_19() { return static_cast<int32_t>(offsetof(UiButtonArray_t5DE403718B30E28AB52D19DB6407C55B9FCABA8F, ___buttons_19)); }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* get_buttons_19() const { return ___buttons_19; }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B** get_address_of_buttons_19() { return &___buttons_19; }
	inline void set_buttons_19(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* value)
	{
		___buttons_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttons_19), (void*)value);
	}

	inline static int32_t get_offset_of_cachedGameObjects_20() { return static_cast<int32_t>(offsetof(UiButtonArray_t5DE403718B30E28AB52D19DB6407C55B9FCABA8F, ___cachedGameObjects_20)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_cachedGameObjects_20() const { return ___cachedGameObjects_20; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_cachedGameObjects_20() { return &___cachedGameObjects_20; }
	inline void set_cachedGameObjects_20(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___cachedGameObjects_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedGameObjects_20), (void*)value);
	}

	inline static int32_t get_offset_of_actions_21() { return static_cast<int32_t>(offsetof(UiButtonArray_t5DE403718B30E28AB52D19DB6407C55B9FCABA8F, ___actions_21)); }
	inline UnityActionU5BU5D_t9AA7B04736592528B8A2F1EDD3BB4F58F69921D4* get_actions_21() const { return ___actions_21; }
	inline UnityActionU5BU5D_t9AA7B04736592528B8A2F1EDD3BB4F58F69921D4** get_address_of_actions_21() { return &___actions_21; }
	inline void set_actions_21(UnityActionU5BU5D_t9AA7B04736592528B8A2F1EDD3BB4F58F69921D4* value)
	{
		___actions_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actions_21), (void*)value);
	}
};


// UnityEngine.Video.VideoClip
struct  VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// HutongGames.PlayMaker.Actions.VideoPlayerSetUrl
struct  VideoPlayerSetUrl_t971DA5BF3C09ED23BC24C51D90C5EC450E17585D  : public FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.VideoPlayerSetUrl::gameObject
	FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * ___gameObject_15;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.VideoPlayerSetUrl::url
	FsmString_tE5EC1F4E6623FE9F414DFAC7F6A05149723279F0 * ___url_16;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.VideoPlayerSetUrl::go
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go_17;
	// UnityEngine.Video.VideoPlayer HutongGames.PlayMaker.Actions.VideoPlayerSetUrl::_vp
	VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ____vp_18;

public:
	inline static int32_t get_offset_of_gameObject_15() { return static_cast<int32_t>(offsetof(VideoPlayerSetUrl_t971DA5BF3C09ED23BC24C51D90C5EC450E17585D, ___gameObject_15)); }
	inline FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * get_gameObject_15() const { return ___gameObject_15; }
	inline FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 ** get_address_of_gameObject_15() { return &___gameObject_15; }
	inline void set_gameObject_15(FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * value)
	{
		___gameObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_15), (void*)value);
	}

	inline static int32_t get_offset_of_url_16() { return static_cast<int32_t>(offsetof(VideoPlayerSetUrl_t971DA5BF3C09ED23BC24C51D90C5EC450E17585D, ___url_16)); }
	inline FsmString_tE5EC1F4E6623FE9F414DFAC7F6A05149723279F0 * get_url_16() const { return ___url_16; }
	inline FsmString_tE5EC1F4E6623FE9F414DFAC7F6A05149723279F0 ** get_address_of_url_16() { return &___url_16; }
	inline void set_url_16(FsmString_tE5EC1F4E6623FE9F414DFAC7F6A05149723279F0 * value)
	{
		___url_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_16), (void*)value);
	}

	inline static int32_t get_offset_of_go_17() { return static_cast<int32_t>(offsetof(VideoPlayerSetUrl_t971DA5BF3C09ED23BC24C51D90C5EC450E17585D, ___go_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_go_17() const { return ___go_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_go_17() { return &___go_17; }
	inline void set_go_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___go_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___go_17), (void*)value);
	}

	inline static int32_t get_offset_of__vp_18() { return static_cast<int32_t>(offsetof(VideoPlayerSetUrl_t971DA5BF3C09ED23BC24C51D90C5EC450E17585D, ____vp_18)); }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * get__vp_18() const { return ____vp_18; }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 ** get_address_of__vp_18() { return &____vp_18; }
	inline void set__vp_18(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * value)
	{
		____vp_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____vp_18), (void*)value);
	}
};


// HutongGames.PlayMaker.Actions.VideoPlayerSetVideoClip
struct  VideoPlayerSetVideoClip_t675AE8212EF3D8C6E4BE0D467B779CEA3808EA2E  : public FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.VideoPlayerSetVideoClip::gameObject
	FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * ___gameObject_15;
	// HutongGames.PlayMaker.FsmObject HutongGames.PlayMaker.Actions.VideoPlayerSetVideoClip::videoClip
	FsmObject_t1DE6D50F1F7D5E8BD2D0356592F35FA7FA369158 * ___videoClip_16;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.VideoPlayerSetVideoClip::go
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go_17;
	// UnityEngine.Video.VideoPlayer HutongGames.PlayMaker.Actions.VideoPlayerSetVideoClip::_vp
	VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ____vp_18;

public:
	inline static int32_t get_offset_of_gameObject_15() { return static_cast<int32_t>(offsetof(VideoPlayerSetVideoClip_t675AE8212EF3D8C6E4BE0D467B779CEA3808EA2E, ___gameObject_15)); }
	inline FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * get_gameObject_15() const { return ___gameObject_15; }
	inline FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 ** get_address_of_gameObject_15() { return &___gameObject_15; }
	inline void set_gameObject_15(FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * value)
	{
		___gameObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_15), (void*)value);
	}

	inline static int32_t get_offset_of_videoClip_16() { return static_cast<int32_t>(offsetof(VideoPlayerSetVideoClip_t675AE8212EF3D8C6E4BE0D467B779CEA3808EA2E, ___videoClip_16)); }
	inline FsmObject_t1DE6D50F1F7D5E8BD2D0356592F35FA7FA369158 * get_videoClip_16() const { return ___videoClip_16; }
	inline FsmObject_t1DE6D50F1F7D5E8BD2D0356592F35FA7FA369158 ** get_address_of_videoClip_16() { return &___videoClip_16; }
	inline void set_videoClip_16(FsmObject_t1DE6D50F1F7D5E8BD2D0356592F35FA7FA369158 * value)
	{
		___videoClip_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___videoClip_16), (void*)value);
	}

	inline static int32_t get_offset_of_go_17() { return static_cast<int32_t>(offsetof(VideoPlayerSetVideoClip_t675AE8212EF3D8C6E4BE0D467B779CEA3808EA2E, ___go_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_go_17() const { return ___go_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_go_17() { return &___go_17; }
	inline void set_go_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___go_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___go_17), (void*)value);
	}

	inline static int32_t get_offset_of__vp_18() { return static_cast<int32_t>(offsetof(VideoPlayerSetVideoClip_t675AE8212EF3D8C6E4BE0D467B779CEA3808EA2E, ____vp_18)); }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * get__vp_18() const { return ____vp_18; }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 ** get_address_of__vp_18() { return &____vp_18; }
	inline void set__vp_18(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * value)
	{
		____vp_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____vp_18), (void*)value);
	}
};


// HutongGames.PlayMaker.Actions.VideoPlayerSetWaitForFirstFrame
struct  VideoPlayerSetWaitForFirstFrame_t3820CBC2C4263ECE86477C77B73D8D56E00CE7DB  : public FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.VideoPlayerSetWaitForFirstFrame::gameObject
	FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * ___gameObject_15;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.VideoPlayerSetWaitForFirstFrame::waitForFirstFrame
	FsmBool_t194C45226C554DFD429FC1674ED697DC66DD1A97 * ___waitForFirstFrame_16;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.VideoPlayerSetWaitForFirstFrame::go
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go_17;
	// UnityEngine.Video.VideoPlayer HutongGames.PlayMaker.Actions.VideoPlayerSetWaitForFirstFrame::_vp
	VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ____vp_18;

public:
	inline static int32_t get_offset_of_gameObject_15() { return static_cast<int32_t>(offsetof(VideoPlayerSetWaitForFirstFrame_t3820CBC2C4263ECE86477C77B73D8D56E00CE7DB, ___gameObject_15)); }
	inline FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * get_gameObject_15() const { return ___gameObject_15; }
	inline FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 ** get_address_of_gameObject_15() { return &___gameObject_15; }
	inline void set_gameObject_15(FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * value)
	{
		___gameObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_15), (void*)value);
	}

	inline static int32_t get_offset_of_waitForFirstFrame_16() { return static_cast<int32_t>(offsetof(VideoPlayerSetWaitForFirstFrame_t3820CBC2C4263ECE86477C77B73D8D56E00CE7DB, ___waitForFirstFrame_16)); }
	inline FsmBool_t194C45226C554DFD429FC1674ED697DC66DD1A97 * get_waitForFirstFrame_16() const { return ___waitForFirstFrame_16; }
	inline FsmBool_t194C45226C554DFD429FC1674ED697DC66DD1A97 ** get_address_of_waitForFirstFrame_16() { return &___waitForFirstFrame_16; }
	inline void set_waitForFirstFrame_16(FsmBool_t194C45226C554DFD429FC1674ED697DC66DD1A97 * value)
	{
		___waitForFirstFrame_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitForFirstFrame_16), (void*)value);
	}

	inline static int32_t get_offset_of_go_17() { return static_cast<int32_t>(offsetof(VideoPlayerSetWaitForFirstFrame_t3820CBC2C4263ECE86477C77B73D8D56E00CE7DB, ___go_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_go_17() const { return ___go_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_go_17() { return &___go_17; }
	inline void set_go_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___go_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___go_17), (void*)value);
	}

	inline static int32_t get_offset_of__vp_18() { return static_cast<int32_t>(offsetof(VideoPlayerSetWaitForFirstFrame_t3820CBC2C4263ECE86477C77B73D8D56E00CE7DB, ____vp_18)); }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * get__vp_18() const { return ____vp_18; }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 ** get_address_of__vp_18() { return &____vp_18; }
	inline void set__vp_18(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * value)
	{
		____vp_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____vp_18), (void*)value);
	}
};


// HutongGames.PlayMaker.Actions.VideoPlayerStartedEvent
struct  VideoPlayerStartedEvent_t6D74F097936F5E709026F1065BE86AADE7B5B353  : public FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.VideoPlayerStartedEvent::gameObject
	FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * ___gameObject_15;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.VideoPlayerStartedEvent::onStartedEvent
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___onStartedEvent_16;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.VideoPlayerStartedEvent::go
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go_17;
	// UnityEngine.Video.VideoPlayer HutongGames.PlayMaker.Actions.VideoPlayerStartedEvent::_vp
	VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ____vp_18;

public:
	inline static int32_t get_offset_of_gameObject_15() { return static_cast<int32_t>(offsetof(VideoPlayerStartedEvent_t6D74F097936F5E709026F1065BE86AADE7B5B353, ___gameObject_15)); }
	inline FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * get_gameObject_15() const { return ___gameObject_15; }
	inline FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 ** get_address_of_gameObject_15() { return &___gameObject_15; }
	inline void set_gameObject_15(FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * value)
	{
		___gameObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_15), (void*)value);
	}

	inline static int32_t get_offset_of_onStartedEvent_16() { return static_cast<int32_t>(offsetof(VideoPlayerStartedEvent_t6D74F097936F5E709026F1065BE86AADE7B5B353, ___onStartedEvent_16)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_onStartedEvent_16() const { return ___onStartedEvent_16; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_onStartedEvent_16() { return &___onStartedEvent_16; }
	inline void set_onStartedEvent_16(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___onStartedEvent_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStartedEvent_16), (void*)value);
	}

	inline static int32_t get_offset_of_go_17() { return static_cast<int32_t>(offsetof(VideoPlayerStartedEvent_t6D74F097936F5E709026F1065BE86AADE7B5B353, ___go_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_go_17() const { return ___go_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_go_17() { return &___go_17; }
	inline void set_go_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___go_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___go_17), (void*)value);
	}

	inline static int32_t get_offset_of__vp_18() { return static_cast<int32_t>(offsetof(VideoPlayerStartedEvent_t6D74F097936F5E709026F1065BE86AADE7B5B353, ____vp_18)); }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * get__vp_18() const { return ____vp_18; }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 ** get_address_of__vp_18() { return &____vp_18; }
	inline void set__vp_18(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * value)
	{
		____vp_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____vp_18), (void*)value);
	}
};


// HutongGames.PlayMaker.Actions.VideoPlayerStepForward
struct  VideoPlayerStepForward_tE28310310F2FEF9F36BAD45282CE39220038DB96  : public FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.VideoPlayerStepForward::gameObject
	FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * ___gameObject_15;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.VideoPlayerStepForward::go
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go_16;
	// UnityEngine.Video.VideoPlayer HutongGames.PlayMaker.Actions.VideoPlayerStepForward::_vp
	VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ____vp_17;

public:
	inline static int32_t get_offset_of_gameObject_15() { return static_cast<int32_t>(offsetof(VideoPlayerStepForward_tE28310310F2FEF9F36BAD45282CE39220038DB96, ___gameObject_15)); }
	inline FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * get_gameObject_15() const { return ___gameObject_15; }
	inline FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 ** get_address_of_gameObject_15() { return &___gameObject_15; }
	inline void set_gameObject_15(FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * value)
	{
		___gameObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_15), (void*)value);
	}

	inline static int32_t get_offset_of_go_16() { return static_cast<int32_t>(offsetof(VideoPlayerStepForward_tE28310310F2FEF9F36BAD45282CE39220038DB96, ___go_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_go_16() const { return ___go_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_go_16() { return &___go_16; }
	inline void set_go_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___go_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___go_16), (void*)value);
	}

	inline static int32_t get_offset_of__vp_17() { return static_cast<int32_t>(offsetof(VideoPlayerStepForward_tE28310310F2FEF9F36BAD45282CE39220038DB96, ____vp_17)); }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * get__vp_17() const { return ____vp_17; }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 ** get_address_of__vp_17() { return &____vp_17; }
	inline void set__vp_17(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * value)
	{
		____vp_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____vp_17), (void*)value);
	}
};


// HutongGames.PlayMaker.Actions.VideoPlayerStop
struct  VideoPlayerStop_tD68F9453B27B5A04C629A05D60C32546A113D947  : public FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.VideoPlayerStop::gameObject
	FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * ___gameObject_15;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.VideoPlayerStop::go
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go_16;
	// UnityEngine.Video.VideoPlayer HutongGames.PlayMaker.Actions.VideoPlayerStop::_vp
	VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ____vp_17;

public:
	inline static int32_t get_offset_of_gameObject_15() { return static_cast<int32_t>(offsetof(VideoPlayerStop_tD68F9453B27B5A04C629A05D60C32546A113D947, ___gameObject_15)); }
	inline FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * get_gameObject_15() const { return ___gameObject_15; }
	inline FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 ** get_address_of_gameObject_15() { return &___gameObject_15; }
	inline void set_gameObject_15(FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * value)
	{
		___gameObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_15), (void*)value);
	}

	inline static int32_t get_offset_of_go_16() { return static_cast<int32_t>(offsetof(VideoPlayerStop_tD68F9453B27B5A04C629A05D60C32546A113D947, ___go_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_go_16() const { return ___go_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_go_16() { return &___go_16; }
	inline void set_go_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___go_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___go_16), (void*)value);
	}

	inline static int32_t get_offset_of__vp_17() { return static_cast<int32_t>(offsetof(VideoPlayerStop_tD68F9453B27B5A04C629A05D60C32546A113D947, ____vp_17)); }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * get__vp_17() const { return ____vp_17; }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 ** get_address_of__vp_17() { return &____vp_17; }
	inline void set__vp_17(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * value)
	{
		____vp_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____vp_17), (void*)value);
	}
};


// HutongGames.PlayMaker.Actions.Wait
struct  Wait_t64225863007A083840ECC467675CEF44F2BC7557  : public FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.Wait::time
	FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * ___time_15;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.Wait::finishEvent
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___finishEvent_16;
	// System.Boolean HutongGames.PlayMaker.Actions.Wait::realTime
	bool ___realTime_17;
	// System.Single HutongGames.PlayMaker.Actions.Wait::startTime
	float ___startTime_18;
	// System.Single HutongGames.PlayMaker.Actions.Wait::timer
	float ___timer_19;

public:
	inline static int32_t get_offset_of_time_15() { return static_cast<int32_t>(offsetof(Wait_t64225863007A083840ECC467675CEF44F2BC7557, ___time_15)); }
	inline FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * get_time_15() const { return ___time_15; }
	inline FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 ** get_address_of_time_15() { return &___time_15; }
	inline void set_time_15(FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * value)
	{
		___time_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___time_15), (void*)value);
	}

	inline static int32_t get_offset_of_finishEvent_16() { return static_cast<int32_t>(offsetof(Wait_t64225863007A083840ECC467675CEF44F2BC7557, ___finishEvent_16)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_finishEvent_16() const { return ___finishEvent_16; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_finishEvent_16() { return &___finishEvent_16; }
	inline void set_finishEvent_16(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___finishEvent_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___finishEvent_16), (void*)value);
	}

	inline static int32_t get_offset_of_realTime_17() { return static_cast<int32_t>(offsetof(Wait_t64225863007A083840ECC467675CEF44F2BC7557, ___realTime_17)); }
	inline bool get_realTime_17() const { return ___realTime_17; }
	inline bool* get_address_of_realTime_17() { return &___realTime_17; }
	inline void set_realTime_17(bool value)
	{
		___realTime_17 = value;
	}

	inline static int32_t get_offset_of_startTime_18() { return static_cast<int32_t>(offsetof(Wait_t64225863007A083840ECC467675CEF44F2BC7557, ___startTime_18)); }
	inline float get_startTime_18() const { return ___startTime_18; }
	inline float* get_address_of_startTime_18() { return &___startTime_18; }
	inline void set_startTime_18(float value)
	{
		___startTime_18 = value;
	}

	inline static int32_t get_offset_of_timer_19() { return static_cast<int32_t>(offsetof(Wait_t64225863007A083840ECC467675CEF44F2BC7557, ___timer_19)); }
	inline float get_timer_19() const { return ___timer_19; }
	inline float* get_address_of_timer_19() { return &___timer_19; }
	inline void set_timer_19(float value)
	{
		___timer_19 = value;
	}
};


// HutongGames.PlayMaker.Actions.WaitAnyKey
struct  WaitAnyKey_tA60E914ADD7DB28422E0BFE0BF7E9C5EE71C24A5  : public FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA
{
public:
	// HutongGames.PlayMaker.FsmEventTarget HutongGames.PlayMaker.Actions.WaitAnyKey::eventTarget
	FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE * ___eventTarget_15;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.WaitAnyKey::sendEvent
	FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___sendEvent_16;

public:
	inline static int32_t get_offset_of_eventTarget_15() { return static_cast<int32_t>(offsetof(WaitAnyKey_tA60E914ADD7DB28422E0BFE0BF7E9C5EE71C24A5, ___eventTarget_15)); }
	inline FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE * get_eventTarget_15() const { return ___eventTarget_15; }
	inline FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE ** get_address_of_eventTarget_15() { return &___eventTarget_15; }
	inline void set_eventTarget_15(FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE * value)
	{
		___eventTarget_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventTarget_15), (void*)value);
	}

	inline static int32_t get_offset_of_sendEvent_16() { return static_cast<int32_t>(offsetof(WaitAnyKey_tA60E914ADD7DB28422E0BFE0BF7E9C5EE71C24A5, ___sendEvent_16)); }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * get_sendEvent_16() const { return ___sendEvent_16; }
	inline FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 ** get_address_of_sendEvent_16() { return &___sendEvent_16; }
	inline void set_sendEvent_16(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * value)
	{
		___sendEvent_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sendEvent_16), (void*)value);
	}
};


// HutongGames.PlayMaker.Actions.WakeAllRigidBodies
struct  WakeAllRigidBodies_t8BBF975016A4C22DF0DE8275DDC8858CA0A5B03B  : public FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA
{
public:
	// System.Boolean HutongGames.PlayMaker.Actions.WakeAllRigidBodies::everyFrame
	bool ___everyFrame_15;
	// UnityEngine.Rigidbody[] HutongGames.PlayMaker.Actions.WakeAllRigidBodies::bodies
	RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B* ___bodies_16;

public:
	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(WakeAllRigidBodies_t8BBF975016A4C22DF0DE8275DDC8858CA0A5B03B, ___everyFrame_15)); }
	inline bool get_everyFrame_15() const { return ___everyFrame_15; }
	inline bool* get_address_of_everyFrame_15() { return &___everyFrame_15; }
	inline void set_everyFrame_15(bool value)
	{
		___everyFrame_15 = value;
	}

	inline static int32_t get_offset_of_bodies_16() { return static_cast<int32_t>(offsetof(WakeAllRigidBodies_t8BBF975016A4C22DF0DE8275DDC8858CA0A5B03B, ___bodies_16)); }
	inline RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B* get_bodies_16() const { return ___bodies_16; }
	inline RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B** get_address_of_bodies_16() { return &___bodies_16; }
	inline void set_bodies_16(RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B* value)
	{
		___bodies_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bodies_16), (void*)value);
	}
};


// HutongGames.PlayMaker.Actions.WakeAllRigidBodies2d
struct  WakeAllRigidBodies2d_t90EBBB11BA84FEF8917C874A0C35AECE3DF9DAE3  : public FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA
{
public:
	// System.Boolean HutongGames.PlayMaker.Actions.WakeAllRigidBodies2d::everyFrame
	bool ___everyFrame_15;

public:
	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(WakeAllRigidBodies2d_t90EBBB11BA84FEF8917C874A0C35AECE3DF9DAE3, ___everyFrame_15)); }
	inline bool get_everyFrame_15() const { return ___everyFrame_15; }
	inline bool* get_address_of_everyFrame_15() { return &___everyFrame_15; }
	inline void set_everyFrame_15(bool value)
	{
		___everyFrame_15 = value;
	}
};


// HutongGames.PlayMaker.Actions.WorldToScreenPoint
struct  WorldToScreenPoint_t8910E6758FFDF0CE1BE7FA19C9D9E9AE6BBAC2C9  : public FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA
{
public:
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.WorldToScreenPoint::camera
	FsmGameObject_t7025A28070D5CC87929DD35DECF6025E38BFA994 * ___camera_15;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.WorldToScreenPoint::worldPosition
	FsmVector3_t064573DA0DA55E7ADD59D064805A3A465403069B * ___worldPosition_16;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.WorldToScreenPoint::worldX
	FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * ___worldX_17;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.WorldToScreenPoint::worldY
	FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * ___worldY_18;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.WorldToScreenPoint::worldZ
	FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * ___worldZ_19;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.WorldToScreenPoint::storeScreenPoint
	FsmVector3_t064573DA0DA55E7ADD59D064805A3A465403069B * ___storeScreenPoint_20;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.WorldToScreenPoint::storeScreenX
	FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * ___storeScreenX_21;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.WorldToScreenPoint::storeScreenY
	FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * ___storeScreenY_22;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.WorldToScreenPoint::normalize
	FsmBool_t194C45226C554DFD429FC1674ED697DC66DD1A97 * ___normalize_23;
	// System.Boolean HutongGames.PlayMaker.Actions.WorldToScreenPoint::everyFrame
	bool ___everyFrame_24;
	// UnityEngine.GameObject HutongGames.PlayMaker.Actions.WorldToScreenPoint::cameraGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cameraGameObject_25;
	// UnityEngine.Camera HutongGames.PlayMaker.Actions.WorldToScreenPoint::screenCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___screenCamera_26;

public:
	inline static int32_t get_offset_of_camera_15() { return static_cast<int32_t>(offsetof(WorldToScreenPoint_t8910E6758FFDF0CE1BE7FA19C9D9E9AE6BBAC2C9, ___camera_15)); }
	inline FsmGameObject_t7025A28070D5CC87929DD35DECF6025E38BFA994 * get_camera_15() const { return ___camera_15; }
	inline FsmGameObject_t7025A28070D5CC87929DD35DECF6025E38BFA994 ** get_address_of_camera_15() { return &___camera_15; }
	inline void set_camera_15(FsmGameObject_t7025A28070D5CC87929DD35DECF6025E38BFA994 * value)
	{
		___camera_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___camera_15), (void*)value);
	}

	inline static int32_t get_offset_of_worldPosition_16() { return static_cast<int32_t>(offsetof(WorldToScreenPoint_t8910E6758FFDF0CE1BE7FA19C9D9E9AE6BBAC2C9, ___worldPosition_16)); }
	inline FsmVector3_t064573DA0DA55E7ADD59D064805A3A465403069B * get_worldPosition_16() const { return ___worldPosition_16; }
	inline FsmVector3_t064573DA0DA55E7ADD59D064805A3A465403069B ** get_address_of_worldPosition_16() { return &___worldPosition_16; }
	inline void set_worldPosition_16(FsmVector3_t064573DA0DA55E7ADD59D064805A3A465403069B * value)
	{
		___worldPosition_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___worldPosition_16), (void*)value);
	}

	inline static int32_t get_offset_of_worldX_17() { return static_cast<int32_t>(offsetof(WorldToScreenPoint_t8910E6758FFDF0CE1BE7FA19C9D9E9AE6BBAC2C9, ___worldX_17)); }
	inline FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * get_worldX_17() const { return ___worldX_17; }
	inline FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 ** get_address_of_worldX_17() { return &___worldX_17; }
	inline void set_worldX_17(FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * value)
	{
		___worldX_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___worldX_17), (void*)value);
	}

	inline static int32_t get_offset_of_worldY_18() { return static_cast<int32_t>(offsetof(WorldToScreenPoint_t8910E6758FFDF0CE1BE7FA19C9D9E9AE6BBAC2C9, ___worldY_18)); }
	inline FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * get_worldY_18() const { return ___worldY_18; }
	inline FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 ** get_address_of_worldY_18() { return &___worldY_18; }
	inline void set_worldY_18(FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * value)
	{
		___worldY_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___worldY_18), (void*)value);
	}

	inline static int32_t get_offset_of_worldZ_19() { return static_cast<int32_t>(offsetof(WorldToScreenPoint_t8910E6758FFDF0CE1BE7FA19C9D9E9AE6BBAC2C9, ___worldZ_19)); }
	inline FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * get_worldZ_19() const { return ___worldZ_19; }
	inline FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 ** get_address_of_worldZ_19() { return &___worldZ_19; }
	inline void set_worldZ_19(FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * value)
	{
		___worldZ_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___worldZ_19), (void*)value);
	}

	inline static int32_t get_offset_of_storeScreenPoint_20() { return static_cast<int32_t>(offsetof(WorldToScreenPoint_t8910E6758FFDF0CE1BE7FA19C9D9E9AE6BBAC2C9, ___storeScreenPoint_20)); }
	inline FsmVector3_t064573DA0DA55E7ADD59D064805A3A465403069B * get_storeScreenPoint_20() const { return ___storeScreenPoint_20; }
	inline FsmVector3_t064573DA0DA55E7ADD59D064805A3A465403069B ** get_address_of_storeScreenPoint_20() { return &___storeScreenPoint_20; }
	inline void set_storeScreenPoint_20(FsmVector3_t064573DA0DA55E7ADD59D064805A3A465403069B * value)
	{
		___storeScreenPoint_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___storeScreenPoint_20), (void*)value);
	}

	inline static int32_t get_offset_of_storeScreenX_21() { return static_cast<int32_t>(offsetof(WorldToScreenPoint_t8910E6758FFDF0CE1BE7FA19C9D9E9AE6BBAC2C9, ___storeScreenX_21)); }
	inline FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * get_storeScreenX_21() const { return ___storeScreenX_21; }
	inline FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 ** get_address_of_storeScreenX_21() { return &___storeScreenX_21; }
	inline void set_storeScreenX_21(FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * value)
	{
		___storeScreenX_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___storeScreenX_21), (void*)value);
	}

	inline static int32_t get_offset_of_storeScreenY_22() { return static_cast<int32_t>(offsetof(WorldToScreenPoint_t8910E6758FFDF0CE1BE7FA19C9D9E9AE6BBAC2C9, ___storeScreenY_22)); }
	inline FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * get_storeScreenY_22() const { return ___storeScreenY_22; }
	inline FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 ** get_address_of_storeScreenY_22() { return &___storeScreenY_22; }
	inline void set_storeScreenY_22(FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * value)
	{
		___storeScreenY_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___storeScreenY_22), (void*)value);
	}

	inline static int32_t get_offset_of_normalize_23() { return static_cast<int32_t>(offsetof(WorldToScreenPoint_t8910E6758FFDF0CE1BE7FA19C9D9E9AE6BBAC2C9, ___normalize_23)); }
	inline FsmBool_t194C45226C554DFD429FC1674ED697DC66DD1A97 * get_normalize_23() const { return ___normalize_23; }
	inline FsmBool_t194C45226C554DFD429FC1674ED697DC66DD1A97 ** get_address_of_normalize_23() { return &___normalize_23; }
	inline void set_normalize_23(FsmBool_t194C45226C554DFD429FC1674ED697DC66DD1A97 * value)
	{
		___normalize_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___normalize_23), (void*)value);
	}

	inline static int32_t get_offset_of_everyFrame_24() { return static_cast<int32_t>(offsetof(WorldToScreenPoint_t8910E6758FFDF0CE1BE7FA19C9D9E9AE6BBAC2C9, ___everyFrame_24)); }
	inline bool get_everyFrame_24() const { return ___everyFrame_24; }
	inline bool* get_address_of_everyFrame_24() { return &___everyFrame_24; }
	inline void set_everyFrame_24(bool value)
	{
		___everyFrame_24 = value;
	}

	inline static int32_t get_offset_of_cameraGameObject_25() { return static_cast<int32_t>(offsetof(WorldToScreenPoint_t8910E6758FFDF0CE1BE7FA19C9D9E9AE6BBAC2C9, ___cameraGameObject_25)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cameraGameObject_25() const { return ___cameraGameObject_25; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cameraGameObject_25() { return &___cameraGameObject_25; }
	inline void set_cameraGameObject_25(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cameraGameObject_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraGameObject_25), (void*)value);
	}

	inline static int32_t get_offset_of_screenCamera_26() { return static_cast<int32_t>(offsetof(WorldToScreenPoint_t8910E6758FFDF0CE1BE7FA19C9D9E9AE6BBAC2C9, ___screenCamera_26)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_screenCamera_26() const { return ___screenCamera_26; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_screenCamera_26() { return &___screenCamera_26; }
	inline void set_screenCamera_26(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___screenCamera_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___screenCamera_26), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// HutongGames.PlayMaker.Actions.AudioStop
struct  AudioStop_tE41E93DA79B0F8FB98D7D2F5328FE5D90E005CE8  : public ComponentAction_1_t1961D9C98117E8C62DBCF5C6E7FE67F44349C235
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.AudioStop::gameObject
	FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * ___gameObject_18;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.AudioStop::fadeTime
	FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * ___fadeTime_19;
	// System.Single HutongGames.PlayMaker.Actions.AudioStop::volume
	float ___volume_20;

public:
	inline static int32_t get_offset_of_gameObject_18() { return static_cast<int32_t>(offsetof(AudioStop_tE41E93DA79B0F8FB98D7D2F5328FE5D90E005CE8, ___gameObject_18)); }
	inline FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * get_gameObject_18() const { return ___gameObject_18; }
	inline FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 ** get_address_of_gameObject_18() { return &___gameObject_18; }
	inline void set_gameObject_18(FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * value)
	{
		___gameObject_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_18), (void*)value);
	}

	inline static int32_t get_offset_of_fadeTime_19() { return static_cast<int32_t>(offsetof(AudioStop_tE41E93DA79B0F8FB98D7D2F5328FE5D90E005CE8, ___fadeTime_19)); }
	inline FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * get_fadeTime_19() const { return ___fadeTime_19; }
	inline FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 ** get_address_of_fadeTime_19() { return &___fadeTime_19; }
	inline void set_fadeTime_19(FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * value)
	{
		___fadeTime_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fadeTime_19), (void*)value);
	}

	inline static int32_t get_offset_of_volume_20() { return static_cast<int32_t>(offsetof(AudioStop_tE41E93DA79B0F8FB98D7D2F5328FE5D90E005CE8, ___volume_20)); }
	inline float get_volume_20() const { return ___volume_20; }
	inline float* get_address_of_volume_20() { return &___volume_20; }
	inline void set_volume_20(float value)
	{
		___volume_20 = value;
	}
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Rigidbody
struct  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// HutongGames.PlayMaker.Actions.WakeUp
struct  WakeUp_t09D0AF55A7CF33E212DFBA3E62508A4CC4FA5177  : public ComponentAction_1_t2BE634736F870C0EF239570C5C20FDEE79697BF8
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.WakeUp::gameObject
	FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * ___gameObject_18;

public:
	inline static int32_t get_offset_of_gameObject_18() { return static_cast<int32_t>(offsetof(WakeUp_t09D0AF55A7CF33E212DFBA3E62508A4CC4FA5177, ___gameObject_18)); }
	inline FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * get_gameObject_18() const { return ___gameObject_18; }
	inline FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 ** get_address_of_gameObject_18() { return &___gameObject_18; }
	inline void set_gameObject_18(FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * value)
	{
		___gameObject_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_18), (void*)value);
	}
};


// HutongGames.PlayMaker.Actions.WakeUp2d
struct  WakeUp2d_t46006C6907CDFEFD9FD9FABDBD337777866FEEFB  : public ComponentAction_1_t63BBE28C4E1290F71FF0653AE996063EB9715CD4
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.WakeUp2d::gameObject
	FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * ___gameObject_18;

public:
	inline static int32_t get_offset_of_gameObject_18() { return static_cast<int32_t>(offsetof(WakeUp2d_t46006C6907CDFEFD9FD9FABDBD337777866FEEFB, ___gameObject_18)); }
	inline FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * get_gameObject_18() const { return ___gameObject_18; }
	inline FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 ** get_address_of_gameObject_18() { return &___gameObject_18; }
	inline void set_gameObject_18(FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * value)
	{
		___gameObject_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_18), (void*)value);
	}
};


// HutongGames.PlayMaker.Actions.EaseFsmAction/EasingFunction
struct  EasingFunction_t21A9929DE6BD9D0A54275182E77EB836E500CA00  : public MulticastDelegate_t
{
public:

public:
};


// HutongGames.EasingFunction/Function
struct  Function_t4E4E4D61E1262E637C6DEC6FD07D8E2FC563DB8C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Video.VideoPlayer/EventHandler
struct  EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Video.VideoPlayer
struct  VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___prepareCompleted_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___loopPointReached_5;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___started_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___frameDropped_7;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * ___errorReceived_8;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___seekCompleted_9;
	// UnityEngine.Video.VideoPlayer/TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * ___clockResyncOccurred_10;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * ___frameReady_11;

public:
	inline static int32_t get_offset_of_prepareCompleted_4() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___prepareCompleted_4)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_prepareCompleted_4() const { return ___prepareCompleted_4; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_prepareCompleted_4() { return &___prepareCompleted_4; }
	inline void set_prepareCompleted_4(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___prepareCompleted_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prepareCompleted_4), (void*)value);
	}

	inline static int32_t get_offset_of_loopPointReached_5() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___loopPointReached_5)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_loopPointReached_5() const { return ___loopPointReached_5; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_loopPointReached_5() { return &___loopPointReached_5; }
	inline void set_loopPointReached_5(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___loopPointReached_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loopPointReached_5), (void*)value);
	}

	inline static int32_t get_offset_of_started_6() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___started_6)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_started_6() const { return ___started_6; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_started_6() { return &___started_6; }
	inline void set_started_6(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___started_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___started_6), (void*)value);
	}

	inline static int32_t get_offset_of_frameDropped_7() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___frameDropped_7)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_frameDropped_7() const { return ___frameDropped_7; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_frameDropped_7() { return &___frameDropped_7; }
	inline void set_frameDropped_7(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___frameDropped_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameDropped_7), (void*)value);
	}

	inline static int32_t get_offset_of_errorReceived_8() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___errorReceived_8)); }
	inline ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * get_errorReceived_8() const { return ___errorReceived_8; }
	inline ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 ** get_address_of_errorReceived_8() { return &___errorReceived_8; }
	inline void set_errorReceived_8(ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * value)
	{
		___errorReceived_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___errorReceived_8), (void*)value);
	}

	inline static int32_t get_offset_of_seekCompleted_9() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___seekCompleted_9)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_seekCompleted_9() const { return ___seekCompleted_9; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_seekCompleted_9() { return &___seekCompleted_9; }
	inline void set_seekCompleted_9(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___seekCompleted_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seekCompleted_9), (void*)value);
	}

	inline static int32_t get_offset_of_clockResyncOccurred_10() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___clockResyncOccurred_10)); }
	inline TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * get_clockResyncOccurred_10() const { return ___clockResyncOccurred_10; }
	inline TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 ** get_address_of_clockResyncOccurred_10() { return &___clockResyncOccurred_10; }
	inline void set_clockResyncOccurred_10(TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * value)
	{
		___clockResyncOccurred_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clockResyncOccurred_10), (void*)value);
	}

	inline static int32_t get_offset_of_frameReady_11() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___frameReady_11)); }
	inline FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * get_frameReady_11() const { return ___frameReady_11; }
	inline FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC ** get_address_of_frameReady_11() { return &___frameReady_11; }
	inline void set_frameReady_11(FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * value)
	{
		___frameReady_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameReady_11), (void*)value);
	}
};


// UnityEngine.AudioSource
struct  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// PlayMakerFSM
struct  PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// HutongGames.PlayMaker.Fsm PlayMakerFSM::fsm
	Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * ___fsm_7;
	// FsmTemplate PlayMakerFSM::fsmTemplate
	FsmTemplate_t0D1C9EFA6C9EF653553B15A378B0E1E346D63458 * ___fsmTemplate_8;
	// System.Boolean PlayMakerFSM::eventHandlerComponentsAdded
	bool ___eventHandlerComponentsAdded_9;
	// System.Action PlayMakerFSM::OnReset
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnReset_11;
	// System.Action PlayMakerFSM::OnValidated
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnValidated_12;
	// PlayMakerFSM/AddEventHandlerDelegate PlayMakerFSM::addEventHandlers
	AddEventHandlerDelegate_t062DD81912BDA3D895270DA8788B18FEC448E2BB * ___addEventHandlers_14;

public:
	inline static int32_t get_offset_of_fsm_7() { return static_cast<int32_t>(offsetof(PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555, ___fsm_7)); }
	inline Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * get_fsm_7() const { return ___fsm_7; }
	inline Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F ** get_address_of_fsm_7() { return &___fsm_7; }
	inline void set_fsm_7(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * value)
	{
		___fsm_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fsm_7), (void*)value);
	}

	inline static int32_t get_offset_of_fsmTemplate_8() { return static_cast<int32_t>(offsetof(PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555, ___fsmTemplate_8)); }
	inline FsmTemplate_t0D1C9EFA6C9EF653553B15A378B0E1E346D63458 * get_fsmTemplate_8() const { return ___fsmTemplate_8; }
	inline FsmTemplate_t0D1C9EFA6C9EF653553B15A378B0E1E346D63458 ** get_address_of_fsmTemplate_8() { return &___fsmTemplate_8; }
	inline void set_fsmTemplate_8(FsmTemplate_t0D1C9EFA6C9EF653553B15A378B0E1E346D63458 * value)
	{
		___fsmTemplate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fsmTemplate_8), (void*)value);
	}

	inline static int32_t get_offset_of_eventHandlerComponentsAdded_9() { return static_cast<int32_t>(offsetof(PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555, ___eventHandlerComponentsAdded_9)); }
	inline bool get_eventHandlerComponentsAdded_9() const { return ___eventHandlerComponentsAdded_9; }
	inline bool* get_address_of_eventHandlerComponentsAdded_9() { return &___eventHandlerComponentsAdded_9; }
	inline void set_eventHandlerComponentsAdded_9(bool value)
	{
		___eventHandlerComponentsAdded_9 = value;
	}

	inline static int32_t get_offset_of_OnReset_11() { return static_cast<int32_t>(offsetof(PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555, ___OnReset_11)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnReset_11() const { return ___OnReset_11; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnReset_11() { return &___OnReset_11; }
	inline void set_OnReset_11(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnReset_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnReset_11), (void*)value);
	}

	inline static int32_t get_offset_of_OnValidated_12() { return static_cast<int32_t>(offsetof(PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555, ___OnValidated_12)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnValidated_12() const { return ___OnValidated_12; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnValidated_12() { return &___OnValidated_12; }
	inline void set_OnValidated_12(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnValidated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnValidated_12), (void*)value);
	}

	inline static int32_t get_offset_of_addEventHandlers_14() { return static_cast<int32_t>(offsetof(PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555, ___addEventHandlers_14)); }
	inline AddEventHandlerDelegate_t062DD81912BDA3D895270DA8788B18FEC448E2BB * get_addEventHandlers_14() const { return ___addEventHandlers_14; }
	inline AddEventHandlerDelegate_t062DD81912BDA3D895270DA8788B18FEC448E2BB ** get_address_of_addEventHandlers_14() { return &___addEventHandlers_14; }
	inline void set_addEventHandlers_14(AddEventHandlerDelegate_t062DD81912BDA3D895270DA8788B18FEC448E2BB * value)
	{
		___addEventHandlers_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___addEventHandlers_14), (void*)value);
	}
};

struct PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555_StaticFields
{
public:
	// System.Action`1<System.String> PlayMakerFSM::OnSettingChanged
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___OnSettingChanged_4;
	// System.Collections.Generic.List`1<PlayMakerFSM> PlayMakerFSM::fsmList
	List_1_tE4F25CA67A8E800E4DE4A7323F0033AADABCB88C * ___fsmList_5;
	// System.Boolean PlayMakerFSM::ApplicationIsQuitting
	bool ___ApplicationIsQuitting_6;
	// System.Boolean PlayMakerFSM::<DrawGizmos>k__BackingField
	bool ___U3CDrawGizmosU3Ek__BackingField_10;
	// System.Threading.Thread PlayMakerFSM::mainThread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___mainThread_13;

public:
	inline static int32_t get_offset_of_OnSettingChanged_4() { return static_cast<int32_t>(offsetof(PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555_StaticFields, ___OnSettingChanged_4)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_OnSettingChanged_4() const { return ___OnSettingChanged_4; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_OnSettingChanged_4() { return &___OnSettingChanged_4; }
	inline void set_OnSettingChanged_4(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___OnSettingChanged_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSettingChanged_4), (void*)value);
	}

	inline static int32_t get_offset_of_fsmList_5() { return static_cast<int32_t>(offsetof(PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555_StaticFields, ___fsmList_5)); }
	inline List_1_tE4F25CA67A8E800E4DE4A7323F0033AADABCB88C * get_fsmList_5() const { return ___fsmList_5; }
	inline List_1_tE4F25CA67A8E800E4DE4A7323F0033AADABCB88C ** get_address_of_fsmList_5() { return &___fsmList_5; }
	inline void set_fsmList_5(List_1_tE4F25CA67A8E800E4DE4A7323F0033AADABCB88C * value)
	{
		___fsmList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fsmList_5), (void*)value);
	}

	inline static int32_t get_offset_of_ApplicationIsQuitting_6() { return static_cast<int32_t>(offsetof(PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555_StaticFields, ___ApplicationIsQuitting_6)); }
	inline bool get_ApplicationIsQuitting_6() const { return ___ApplicationIsQuitting_6; }
	inline bool* get_address_of_ApplicationIsQuitting_6() { return &___ApplicationIsQuitting_6; }
	inline void set_ApplicationIsQuitting_6(bool value)
	{
		___ApplicationIsQuitting_6 = value;
	}

	inline static int32_t get_offset_of_U3CDrawGizmosU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555_StaticFields, ___U3CDrawGizmosU3Ek__BackingField_10)); }
	inline bool get_U3CDrawGizmosU3Ek__BackingField_10() const { return ___U3CDrawGizmosU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CDrawGizmosU3Ek__BackingField_10() { return &___U3CDrawGizmosU3Ek__BackingField_10; }
	inline void set_U3CDrawGizmosU3Ek__BackingField_10(bool value)
	{
		___U3CDrawGizmosU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_mainThread_13() { return static_cast<int32_t>(offsetof(PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555_StaticFields, ___mainThread_13)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_mainThread_13() const { return ___mainThread_13; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_mainThread_13() { return &___mainThread_13; }
	inline void set_mainThread_13(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___mainThread_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainThread_13), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Object[]
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * m_Items[1];

public:
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Rigidbody[]
struct RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * m_Items[1];

public:
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Rigidbody2D[]
struct Rigidbody2DU5BU5D_t9CE3D06C92F81A1266F9DDF9BE6180FE19CC5CEF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * m_Items[1];

public:
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean HutongGames.PlayMaker.Actions.ComponentAction`1<System.Object>::UpdateCache(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ComponentAction_1_UpdateCache_m7C63CC2C1CF30A20789DCED048D6500025CA9A37_gshared (ComponentAction_1_t39781389A7A1EAE8E5D32F963B02D6D4A8786FDA * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go0, const RuntimeMethod* method);
// UnityEngine.Rigidbody HutongGames.PlayMaker.Actions.ComponentAction`1<System.Object>::get_rigidbody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ComponentAction_1_get_rigidbody_mEE7D5D412FFB49D91F20132876A1CDA407A378DE_gshared (ComponentAction_1_t39781389A7A1EAE8E5D32F963B02D6D4A8786FDA * __this, const RuntimeMethod* method);
// System.Void HutongGames.PlayMaker.Actions.ComponentAction`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentAction_1__ctor_m683718D842CD6596D893BA725BC453186C7EC2D8_gshared (ComponentAction_1_t39781389A7A1EAE8E5D32F963B02D6D4A8786FDA * __this, const RuntimeMethod* method);
// UnityEngine.Rigidbody2D HutongGames.PlayMaker.Actions.ComponentAction`1<System.Object>::get_rigidbody2d()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ComponentAction_1_get_rigidbody2d_mEDB75983E3B0C8D9481D4ED30AA6A4C3EC022C32_gshared (ComponentAction_1_t39781389A7A1EAE8E5D32F963B02D6D4A8786FDA * __this, const RuntimeMethod* method);

// System.Void HutongGames.PlayMaker.Actions.VideoPlayerSetUrl::GetVideoPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerSetUrl_GetVideoPlayer_m04A42CA0EB605CDE913CBBCF37012F3D5D210C7C (VideoPlayerSetUrl_t971DA5BF3C09ED23BC24C51D90C5EC450E17585D * __this, const RuntimeMethod* method);
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerSetUrl::ExecuteAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerSetUrl_ExecuteAction_m3BE97DCFC539C741FF4E0CF0FF3776DE5B9E7147 (VideoPlayerSetUrl_t971DA5BF3C09ED23BC24C51D90C5EC450E17585D * __this, const RuntimeMethod* method);
// System.Void HutongGames.PlayMaker.FsmStateAction::Finish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmStateAction_Finish_mCD9071F8CE720F6A648B39BB9783B047945C2DFC (FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.String HutongGames.PlayMaker.FsmString::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FsmString_get_Value_m02B56CD7B4288C1C9E3C0E3886CC8C037C936F2A (FsmString_tE5EC1F4E6623FE9F414DFAC7F6A05149723279F0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::set_url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_url_m9C9942D6C54D50F6255A2AA1646D9F40E551BF13 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, String_t* ___value0, const RuntimeMethod* method);
// HutongGames.PlayMaker.Fsm HutongGames.PlayMaker.FsmStateAction::get_Fsm()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * FsmStateAction_get_Fsm_mB070E4AB8D6223F26E312624FB53B2C844DED2F2_inline (FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA * __this, const RuntimeMethod* method);
// UnityEngine.GameObject HutongGames.PlayMaker.Fsm::GetOwnerDefaultTarget(HutongGames.PlayMaker.FsmOwnerDefault)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Fsm_GetOwnerDefaultTarget_mB412CB0055B742D7D560833FA7D6892AA9147AE7 (Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * __this, FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * ___ownerDefault0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Video.VideoPlayer>()
inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * GameObject_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_mE0279031C6B378280F6E848C495D87D03F1647B2 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void HutongGames.PlayMaker.FsmStateAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmStateAction__ctor_m816C30B8FFC911E0BAB25C82730629ADCCA38D7F (FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA * __this, const RuntimeMethod* method);
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerSetVideoClip::GetVideoPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerSetVideoClip_GetVideoPlayer_mB3D4178E1DDB269D9F2B43E000F0E8FB6A5D6104 (VideoPlayerSetVideoClip_t675AE8212EF3D8C6E4BE0D467B779CEA3808EA2E * __this, const RuntimeMethod* method);
// UnityEngine.Object HutongGames.PlayMaker.FsmObject::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * FsmObject_get_Value_mE68C923283E7A8D141D3973BD957ED4BDDFFC00C (FsmObject_t1DE6D50F1F7D5E8BD2D0356592F35FA7FA369158 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::set_clip(UnityEngine.Video.VideoClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_clip_mECA56632F836FE1297D1A10115570E07D05FDB6C (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F * ___value0, const RuntimeMethod* method);
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerSetWaitForFirstFrame::GetVideoPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerSetWaitForFirstFrame_GetVideoPlayer_m6E092A5F3ACAABF3275FE0ECDE2C64D019584044 (VideoPlayerSetWaitForFirstFrame_t3820CBC2C4263ECE86477C77B73D8D56E00CE7DB * __this, const RuntimeMethod* method);
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerSetWaitForFirstFrame::ExecuteAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerSetWaitForFirstFrame_ExecuteAction_m2F2588308BFDDC30391BBF2A0DE2E99B361FD63A (VideoPlayerSetWaitForFirstFrame_t3820CBC2C4263ECE86477C77B73D8D56E00CE7DB * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean HutongGames.PlayMaker.FsmBool::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FsmBool_get_Value_m6DD837475A0A630DE0D29E25DF0F65527DB97684 (FsmBool_t194C45226C554DFD429FC1674ED697DC66DD1A97 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::set_waitForFirstFrame(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_waitForFirstFrame_m1705BDF01773506E0BF0585B0BB5FF4ECD073532 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerStartedEvent::GetVideoPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerStartedEvent_GetVideoPlayer_m444D4FDFBC4E8C302252AD1C7224FD9E4F54179D (VideoPlayerStartedEvent_t6D74F097936F5E709026F1065BE86AADE7B5B353 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_mA1A6722C36644D8F49E5A5008B68352561E03400 (EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::add_started(UnityEngine.Video.VideoPlayer/EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_add_started_mCF94075E95992F117E4F572F6A9C4533DFF79230 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::remove_started(UnityEngine.Video.VideoPlayer/EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_remove_started_m413FD525DAA289A2D65BB757C06314D8DDF4356C (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void HutongGames.PlayMaker.Fsm::Event(HutongGames.PlayMaker.FsmEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fsm_Event_m58CEF84BDA7A3A0A0C714BB35268C947ADEFCED3 (Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * __this, FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___fsmEvent0, const RuntimeMethod* method);
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerStepForward::GetVideoPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerStepForward_GetVideoPlayer_m497766EA0AA62D8C6E752F6C0AC45CA1C5DF2BA4 (VideoPlayerStepForward_tE28310310F2FEF9F36BAD45282CE39220038DB96 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::StepForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_StepForward_m06C849B3CE22EE18580B47525F884A3B06791EFC (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method);
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerStop::GetVideoPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerStop_GetVideoPlayer_mF7B0987102F90DC52F21744100CE920294DDC5BD (VideoPlayerStop_tD68F9453B27B5A04C629A05D60C32546A113D947 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Stop_mC65F299C170F41E6823207427F782982031DE293 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method);
// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.FsmFloat::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * FsmFloat_op_Implicit_m833DD25A0E7E3A4FDF3FC62CD82C2BD526D75C97 (float ___value0, const RuntimeMethod* method);
// System.Single HutongGames.PlayMaker.FsmFloat::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FsmFloat_get_Value_mAF9FBC2F97703B39885E123CFEF53D5935C50FD9 (FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * __this, const RuntimeMethod* method);
// System.Single HutongGames.PlayMaker.FsmTime::get_RealtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FsmTime_get_RealtimeSinceStartup_m95B1289EEC615D5EE66EBCE8F61583EEA39A92D6 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// HutongGames.PlayMaker.FsmEventTarget HutongGames.PlayMaker.FsmEventTarget::get_Self()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE * FsmEventTarget_get_Self_m6F822318B29DBFB2E41CA9E6CDF7931A1F57E2FC (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::get_anyKeyDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_anyKeyDown_m0E5B02352AC40A25BBE31F4532764279D5AF03A5 (const RuntimeMethod* method);
// System.Void HutongGames.PlayMaker.Fsm::Event(HutongGames.PlayMaker.FsmEventTarget,HutongGames.PlayMaker.FsmEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fsm_Event_mC17983237B2D50BC0F80C22F16BF5EAA149C6EA7 (Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * __this, FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE * ___eventTarget0, FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * ___fsmEvent1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* Object_FindObjectsOfType_m6E4A383F89274D0F316FDDA39745C59025A11B02 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void HutongGames.PlayMaker.Actions.WakeAllRigidBodies::DoWakeAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WakeAllRigidBodies_DoWakeAll_m8C27EF19FAA7D51360C7CA6C0861B6472F359C6D (WakeAllRigidBodies_t8BBF975016A4C22DF0DE8275DDC8858CA0A5B03B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::WakeUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_WakeUp_m89308E6756834CF3705D9CDE89D636EEEE409316 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// System.Void HutongGames.PlayMaker.Actions.WakeAllRigidBodies2d::DoWakeAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WakeAllRigidBodies2d_DoWakeAll_mB8DD2833979086BB1272E8959163B7F12EE8FABC (WakeAllRigidBodies2d_t90EBBB11BA84FEF8917C874A0C35AECE3DF9DAE3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::WakeUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_WakeUp_mB5A3852660DB19F546F0651ADD80BAA2D96D81C0 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Void HutongGames.PlayMaker.Actions.WakeUp::DoWakeUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WakeUp_DoWakeUp_m2EBA3C1E4371305B15E9051274ABDE3FD0008128 (WakeUp_t09D0AF55A7CF33E212DFBA3E62508A4CC4FA5177 * __this, const RuntimeMethod* method);
// HutongGames.PlayMaker.OwnerDefaultOption HutongGames.PlayMaker.FsmOwnerDefault::get_OwnerOption()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FsmOwnerDefault_get_OwnerOption_m2912191C36F5FC05B3D08322DFA16BC9B61D65D2_inline (FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * __this, const RuntimeMethod* method);
// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.FsmOwnerDefault::get_GameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FsmGameObject_t7025A28070D5CC87929DD35DECF6025E38BFA994 * FsmOwnerDefault_get_GameObject_m1300CD43FFACCE2B7ED7D1A1A1235BE736A11427_inline (FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject HutongGames.PlayMaker.FsmGameObject::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * FsmGameObject_get_Value_m878535B9E02FE729B7C855E7B1929BCC5AAE1B05 (FsmGameObject_t7025A28070D5CC87929DD35DECF6025E38BFA994 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject HutongGames.PlayMaker.FsmStateAction::get_Owner()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * FsmStateAction_get_Owner_m480BD7FC1EBB2AB5C136ECECE4AC58FB67A18F2F_inline (FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA * __this, const RuntimeMethod* method);
// System.Boolean HutongGames.PlayMaker.Actions.ComponentAction`1<UnityEngine.Rigidbody>::UpdateCache(UnityEngine.GameObject)
inline bool ComponentAction_1_UpdateCache_mC90D6C90299F65E97FB40E04836D81F1E1BF626D (ComponentAction_1_t2BE634736F870C0EF239570C5C20FDEE79697BF8 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go0, const RuntimeMethod* method)
{
	return ((  bool (*) (ComponentAction_1_t2BE634736F870C0EF239570C5C20FDEE79697BF8 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))ComponentAction_1_UpdateCache_m7C63CC2C1CF30A20789DCED048D6500025CA9A37_gshared)(__this, ___go0, method);
}
// UnityEngine.Rigidbody HutongGames.PlayMaker.Actions.ComponentAction`1<UnityEngine.Rigidbody>::get_rigidbody()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ComponentAction_1_get_rigidbody_mF6B7FEFF15FE183AB91B7B9374830EDAE63944B4 (ComponentAction_1_t2BE634736F870C0EF239570C5C20FDEE79697BF8 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (ComponentAction_1_t2BE634736F870C0EF239570C5C20FDEE79697BF8 *, const RuntimeMethod*))ComponentAction_1_get_rigidbody_mEE7D5D412FFB49D91F20132876A1CDA407A378DE_gshared)(__this, method);
}
// System.Void HutongGames.PlayMaker.Actions.ComponentAction`1<UnityEngine.Rigidbody>::.ctor()
inline void ComponentAction_1__ctor_m231827CA922C5320028EBFBC77B61F7629C5A5B1 (ComponentAction_1_t2BE634736F870C0EF239570C5C20FDEE79697BF8 * __this, const RuntimeMethod* method)
{
	((  void (*) (ComponentAction_1_t2BE634736F870C0EF239570C5C20FDEE79697BF8 *, const RuntimeMethod*))ComponentAction_1__ctor_m683718D842CD6596D893BA725BC453186C7EC2D8_gshared)(__this, method);
}
// System.Void HutongGames.PlayMaker.Actions.WakeUp2d::DoWakeUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WakeUp2d_DoWakeUp_mDF117E55BD5F1EEA69003B81E9F083415FBEA7B8 (WakeUp2d_t46006C6907CDFEFD9FD9FABDBD337777866FEEFB * __this, const RuntimeMethod* method);
// System.Boolean HutongGames.PlayMaker.Actions.ComponentAction`1<UnityEngine.Rigidbody2D>::UpdateCache(UnityEngine.GameObject)
inline bool ComponentAction_1_UpdateCache_m1F7594191AECFAE2119A979F703FD8C43FEFF6B2 (ComponentAction_1_t63BBE28C4E1290F71FF0653AE996063EB9715CD4 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go0, const RuntimeMethod* method)
{
	return ((  bool (*) (ComponentAction_1_t63BBE28C4E1290F71FF0653AE996063EB9715CD4 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))ComponentAction_1_UpdateCache_m7C63CC2C1CF30A20789DCED048D6500025CA9A37_gshared)(__this, ___go0, method);
}
// UnityEngine.Rigidbody2D HutongGames.PlayMaker.Actions.ComponentAction`1<UnityEngine.Rigidbody2D>::get_rigidbody2d()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ComponentAction_1_get_rigidbody2d_mAF15F6B5BC4676C250EECF774CADF3B8A314AEC0 (ComponentAction_1_t63BBE28C4E1290F71FF0653AE996063EB9715CD4 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (ComponentAction_1_t63BBE28C4E1290F71FF0653AE996063EB9715CD4 *, const RuntimeMethod*))ComponentAction_1_get_rigidbody2d_mEDB75983E3B0C8D9481D4ED30AA6A4C3EC022C32_gshared)(__this, method);
}
// System.Void HutongGames.PlayMaker.Actions.ComponentAction`1<UnityEngine.Rigidbody2D>::.ctor()
inline void ComponentAction_1__ctor_m467D8B3FAFB5A2B8A225C70D0B7973C9F1C3AF20 (ComponentAction_1_t63BBE28C4E1290F71FF0653AE996063EB9715CD4 * __this, const RuntimeMethod* method)
{
	((  void (*) (ComponentAction_1_t63BBE28C4E1290F71FF0653AE996063EB9715CD4 *, const RuntimeMethod*))ComponentAction_1__ctor_m683718D842CD6596D893BA725BC453186C7EC2D8_gshared)(__this, method);
}
// System.Void HutongGames.PlayMaker.FsmFloat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmFloat__ctor_mE328EE1FE0C070FB4BE42E32FB9126B44597A106 (FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * __this, const RuntimeMethod* method);
// System.Void HutongGames.PlayMaker.NamedVariable::set_UseVariable(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NamedVariable_set_UseVariable_m0FEF6D0831D13AD751FF464092B5E13E3FF25579_inline (NamedVariable_t20CC71366D75BA6F0A571416C460D87D8A20C54C * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Void HutongGames.PlayMaker.Actions.WorldToScreenPoint::DoWorldToScreenPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldToScreenPoint_DoWorldToScreenPoint_mFF81AE15F7CEA5F1E1E5512B1B6283789075348A (WorldToScreenPoint_t8910E6758FFDF0CE1BE7FA19C9D9E9AE6BBAC2C9 * __this, const RuntimeMethod* method);
// System.Void HutongGames.PlayMaker.Actions.WorldToScreenPoint::InitCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldToScreenPoint_InitCamera_m70EC07C9E4E8F40CE2CC553EAD0064F1E1A227D9 (WorldToScreenPoint_t8910E6758FFDF0CE1BE7FA19C9D9E9AE6BBAC2C9 * __this, const RuntimeMethod* method);
// System.Void HutongGames.PlayMaker.FsmStateAction::LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmStateAction_LogError_mE5107C30112B968ED44D3B1AA967F2F0EBE3578C (FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA * __this, String_t* ___text0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Boolean HutongGames.PlayMaker.NamedVariable::get_IsNone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NamedVariable_get_IsNone_mF19BE1B89159A1ABA225E9C25A1AA82AE886396B (NamedVariable_t20CC71366D75BA6F0A571416C460D87D8A20C54C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 HutongGames.PlayMaker.FsmVector3::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FsmVector3_get_Value_m600A235295138F32E1ECB710001168F1B79EE68C (FsmVector3_t064573DA0DA55E7ADD59D064805A3A465403069B * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void HutongGames.PlayMaker.FsmVector3::set_Value(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FsmVector3_set_Value_m603D2D8920DB5C4F98FD6BF5BE7D2020D088B6ED_inline (FsmVector3_t064573DA0DA55E7ADD59D064805A3A465403069B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void HutongGames.PlayMaker.FsmFloat::set_Value(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FsmFloat_set_Value_m5A1CC5BFC4E278438B1ECD7E550146A99D9AA804_inline (FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * __this, float ___value0, const RuntimeMethod* method);
// System.Void HutongGames.PlayMaker.Actions.ArrayContains/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6DFAC57ED79C3982B19DD2A8F9B99860D318743F (U3CU3Ec_tC89D48A9864F251FFBA9963727CC54BE4DE96545 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Mathos.Parser.MathParser/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0CEBD4251334C563EBBBB1AD2935B536FEEA776F (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, const RuntimeMethod* method);
// System.Double System.Math::Pow(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Pow_mC2C8700DAAD1316AA457A1D271F78CDF0D61AC2F (double ___x0, double ___y1, const RuntimeMethod* method);
// System.Double System.Math::IEEERemainder(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_IEEERemainder_m2B06020D10636AC81B0DD05AE00C951A24C4186F (double ___x0, double ___y1, const RuntimeMethod* method);
// System.Int32 System.Math::Sign(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Sign_mF70767482E334D3EA66CAD19C6B575FBB2DAF565 (double ___value0, const RuntimeMethod* method);
// System.Double System.Math::Log(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Log_m05D6B4CE873ABBA5D8E39F798BBB67D49ABECE2C (double ___a0, double ___newBase1, const RuntimeMethod* method);
// System.Void HutongGames.PlayMaker.Actions.UiButtonArray::OnClick(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UiButtonArray_OnClick_mBE4F79B4FF9330445ADC819DC8AC60805F845A81 (UiButtonArray_t5DE403718B30E28AB52D19DB6407C55B9FCABA8F * __this, int32_t ___index0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerSetUrl::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerSetUrl_Reset_m41E8BA9AAD396CC19349E9C685E399B0D6D0707D (VideoPlayerSetUrl_t971DA5BF3C09ED23BC24C51D90C5EC450E17585D * __this, const RuntimeMethod* method)
{
	{
		// gameObject = null;
		__this->set_gameObject_15((FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 *)NULL);
		// url = null;
		__this->set_url_16((FsmString_tE5EC1F4E6623FE9F414DFAC7F6A05149723279F0 *)NULL);
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerSetUrl::OnEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerSetUrl_OnEnter_m50B3F7057DCDA3C2BADF9634D30C55904EE019E0 (VideoPlayerSetUrl_t971DA5BF3C09ED23BC24C51D90C5EC450E17585D * __this, const RuntimeMethod* method)
{
	{
		// GetVideoPlayer ();
		VideoPlayerSetUrl_GetVideoPlayer_m04A42CA0EB605CDE913CBBCF37012F3D5D210C7C(__this, /*hidden argument*/NULL);
		// ExecuteAction ();
		VideoPlayerSetUrl_ExecuteAction_m3BE97DCFC539C741FF4E0CF0FF3776DE5B9E7147(__this, /*hidden argument*/NULL);
		// Finish ();
		FsmStateAction_Finish_mCD9071F8CE720F6A648B39BB9783B047945C2DFC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerSetUrl::ExecuteAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerSetUrl_ExecuteAction_m3BE97DCFC539C741FF4E0CF0FF3776DE5B9E7147 (VideoPlayerSetUrl_t971DA5BF3C09ED23BC24C51D90C5EC450E17585D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_vp != null)
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0 = __this->get__vp_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// _vp.url = url.Value;
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_3 = __this->get__vp_18();
		FsmString_tE5EC1F4E6623FE9F414DFAC7F6A05149723279F0 * L_4 = __this->get_url_16();
		String_t* L_5;
		L_5 = FsmString_get_Value_m02B56CD7B4288C1C9E3C0E3886CC8C037C936F2A(L_4, /*hidden argument*/NULL);
		VideoPlayer_set_url_m9C9942D6C54D50F6255A2AA1646D9F40E551BF13(L_3, L_5, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerSetUrl::GetVideoPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerSetUrl_GetVideoPlayer_m04A42CA0EB605CDE913CBBCF37012F3D5D210C7C (VideoPlayerSetUrl_t971DA5BF3C09ED23BC24C51D90C5EC450E17585D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_mE0279031C6B378280F6E848C495D87D03F1647B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// go = Fsm.GetOwnerDefaultTarget(gameObject);
		Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * L_0;
		L_0 = FsmStateAction_get_Fsm_mB070E4AB8D6223F26E312624FB53B2C844DED2F2_inline(__this, /*hidden argument*/NULL);
		FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * L_1 = __this->get_gameObject_15();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Fsm_GetOwnerDefaultTarget_mB412CB0055B742D7D560833FA7D6892AA9147AE7(L_0, L_1, /*hidden argument*/NULL);
		__this->set_go_17(L_2);
		// if (go != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_go_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// _vp = go.GetComponent<VideoPlayer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_go_17();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_7;
		L_7 = GameObject_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_mE0279031C6B378280F6E848C495D87D03F1647B2(L_6, /*hidden argument*/GameObject_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_mE0279031C6B378280F6E848C495D87D03F1647B2_RuntimeMethod_var);
		__this->set__vp_18(L_7);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerSetUrl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerSetUrl__ctor_m8A4AD0479075CCDE21B05D02A65D0652DBCFAB38 (VideoPlayerSetUrl_t971DA5BF3C09ED23BC24C51D90C5EC450E17585D * __this, const RuntimeMethod* method)
{
	{
		FsmStateAction__ctor_m816C30B8FFC911E0BAB25C82730629ADCCA38D7F(__this, /*hidden argument*/NULL);
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
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerSetVideoClip::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerSetVideoClip_Reset_m3CCA3E5CDE236736FFD2B5A95A73A9EDE2D9A6E6 (VideoPlayerSetVideoClip_t675AE8212EF3D8C6E4BE0D467B779CEA3808EA2E * __this, const RuntimeMethod* method)
{
	{
		// gameObject = null;
		__this->set_gameObject_15((FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 *)NULL);
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerSetVideoClip::OnEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerSetVideoClip_OnEnter_m052F013CF27C6CA2ED44381E1D3BDA583987C8D0 (VideoPlayerSetVideoClip_t675AE8212EF3D8C6E4BE0D467B779CEA3808EA2E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// GetVideoPlayer ();
		VideoPlayerSetVideoClip_GetVideoPlayer_mB3D4178E1DDB269D9F2B43E000F0E8FB6A5D6104(__this, /*hidden argument*/NULL);
		// if (_vp != null)
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0 = __this->get__vp_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// _vp.clip = videoClip.Value as VideoClip;
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_3 = __this->get__vp_18();
		FsmObject_t1DE6D50F1F7D5E8BD2D0356592F35FA7FA369158 * L_4 = __this->get_videoClip_16();
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_5;
		L_5 = FsmObject_get_Value_mE68C923283E7A8D141D3973BD957ED4BDDFFC00C(L_4, /*hidden argument*/NULL);
		VideoPlayer_set_clip_mECA56632F836FE1297D1A10115570E07D05FDB6C(L_3, ((VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F *)IsInstSealed((RuntimeObject*)L_5, VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_0036:
	{
		// Finish();
		FsmStateAction_Finish_mCD9071F8CE720F6A648B39BB9783B047945C2DFC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerSetVideoClip::GetVideoPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerSetVideoClip_GetVideoPlayer_mB3D4178E1DDB269D9F2B43E000F0E8FB6A5D6104 (VideoPlayerSetVideoClip_t675AE8212EF3D8C6E4BE0D467B779CEA3808EA2E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_mE0279031C6B378280F6E848C495D87D03F1647B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// go = Fsm.GetOwnerDefaultTarget(gameObject);
		Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * L_0;
		L_0 = FsmStateAction_get_Fsm_mB070E4AB8D6223F26E312624FB53B2C844DED2F2_inline(__this, /*hidden argument*/NULL);
		FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * L_1 = __this->get_gameObject_15();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Fsm_GetOwnerDefaultTarget_mB412CB0055B742D7D560833FA7D6892AA9147AE7(L_0, L_1, /*hidden argument*/NULL);
		__this->set_go_17(L_2);
		// if (go != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_go_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// _vp = go.GetComponent<VideoPlayer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_go_17();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_7;
		L_7 = GameObject_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_mE0279031C6B378280F6E848C495D87D03F1647B2(L_6, /*hidden argument*/GameObject_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_mE0279031C6B378280F6E848C495D87D03F1647B2_RuntimeMethod_var);
		__this->set__vp_18(L_7);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerSetVideoClip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerSetVideoClip__ctor_mBF1231665433F3189E6F22EB7F4A34223DBBCE72 (VideoPlayerSetVideoClip_t675AE8212EF3D8C6E4BE0D467B779CEA3808EA2E * __this, const RuntimeMethod* method)
{
	{
		FsmStateAction__ctor_m816C30B8FFC911E0BAB25C82730629ADCCA38D7F(__this, /*hidden argument*/NULL);
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
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerSetWaitForFirstFrame::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerSetWaitForFirstFrame_Reset_m36E78A81BE85EAE5976656FDBDDCE97CEB184A37 (VideoPlayerSetWaitForFirstFrame_t3820CBC2C4263ECE86477C77B73D8D56E00CE7DB * __this, const RuntimeMethod* method)
{
	{
		// gameObject = null;
		__this->set_gameObject_15((FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 *)NULL);
		// waitForFirstFrame = null;
		__this->set_waitForFirstFrame_16((FsmBool_t194C45226C554DFD429FC1674ED697DC66DD1A97 *)NULL);
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerSetWaitForFirstFrame::OnEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerSetWaitForFirstFrame_OnEnter_mC3EE9B6E7E451151D895D6093634F3EFADF3437E (VideoPlayerSetWaitForFirstFrame_t3820CBC2C4263ECE86477C77B73D8D56E00CE7DB * __this, const RuntimeMethod* method)
{
	{
		// GetVideoPlayer ();
		VideoPlayerSetWaitForFirstFrame_GetVideoPlayer_m6E092A5F3ACAABF3275FE0ECDE2C64D019584044(__this, /*hidden argument*/NULL);
		// ExecuteAction ();
		VideoPlayerSetWaitForFirstFrame_ExecuteAction_m2F2588308BFDDC30391BBF2A0DE2E99B361FD63A(__this, /*hidden argument*/NULL);
		// Finish ();
		FsmStateAction_Finish_mCD9071F8CE720F6A648B39BB9783B047945C2DFC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerSetWaitForFirstFrame::ExecuteAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerSetWaitForFirstFrame_ExecuteAction_m2F2588308BFDDC30391BBF2A0DE2E99B361FD63A (VideoPlayerSetWaitForFirstFrame_t3820CBC2C4263ECE86477C77B73D8D56E00CE7DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_vp == null)
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0 = __this->get__vp_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		goto IL_002b;
	}

IL_0014:
	{
		// _vp.waitForFirstFrame = waitForFirstFrame.Value;
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_3 = __this->get__vp_18();
		FsmBool_t194C45226C554DFD429FC1674ED697DC66DD1A97 * L_4 = __this->get_waitForFirstFrame_16();
		bool L_5;
		L_5 = FsmBool_get_Value_m6DD837475A0A630DE0D29E25DF0F65527DB97684(L_4, /*hidden argument*/NULL);
		VideoPlayer_set_waitForFirstFrame_m1705BDF01773506E0BF0585B0BB5FF4ECD073532(L_3, L_5, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerSetWaitForFirstFrame::GetVideoPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerSetWaitForFirstFrame_GetVideoPlayer_m6E092A5F3ACAABF3275FE0ECDE2C64D019584044 (VideoPlayerSetWaitForFirstFrame_t3820CBC2C4263ECE86477C77B73D8D56E00CE7DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_mE0279031C6B378280F6E848C495D87D03F1647B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// go = Fsm.GetOwnerDefaultTarget(gameObject);
		Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * L_0;
		L_0 = FsmStateAction_get_Fsm_mB070E4AB8D6223F26E312624FB53B2C844DED2F2_inline(__this, /*hidden argument*/NULL);
		FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * L_1 = __this->get_gameObject_15();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Fsm_GetOwnerDefaultTarget_mB412CB0055B742D7D560833FA7D6892AA9147AE7(L_0, L_1, /*hidden argument*/NULL);
		__this->set_go_17(L_2);
		// if (go != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_go_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// _vp = go.GetComponent<VideoPlayer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_go_17();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_7;
		L_7 = GameObject_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_mE0279031C6B378280F6E848C495D87D03F1647B2(L_6, /*hidden argument*/GameObject_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_mE0279031C6B378280F6E848C495D87D03F1647B2_RuntimeMethod_var);
		__this->set__vp_18(L_7);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerSetWaitForFirstFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerSetWaitForFirstFrame__ctor_mB4672D8876C4DBD24AF689465FC8CC53A055C24A (VideoPlayerSetWaitForFirstFrame_t3820CBC2C4263ECE86477C77B73D8D56E00CE7DB * __this, const RuntimeMethod* method)
{
	{
		FsmStateAction__ctor_m816C30B8FFC911E0BAB25C82730629ADCCA38D7F(__this, /*hidden argument*/NULL);
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
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerStartedEvent::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerStartedEvent_Reset_mDE6DD298CC197C48515E44663FC0956722EB4CD3 (VideoPlayerStartedEvent_t6D74F097936F5E709026F1065BE86AADE7B5B353 * __this, const RuntimeMethod* method)
{
	{
		// gameObject = null;
		__this->set_gameObject_15((FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 *)NULL);
		// onStartedEvent = null;
		__this->set_onStartedEvent_16((FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 *)NULL);
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerStartedEvent::OnEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerStartedEvent_OnEnter_m0B93F74E62BF72B38FC227719F3103996D587CF6 (VideoPlayerStartedEvent_t6D74F097936F5E709026F1065BE86AADE7B5B353 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoPlayerStartedEvent_OnStarted_mF465904D4B4215366A0754BE73C3B97BD304E454_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// GetVideoPlayer ();
		VideoPlayerStartedEvent_GetVideoPlayer_m444D4FDFBC4E8C302252AD1C7224FD9E4F54179D(__this, /*hidden argument*/NULL);
		// if (_vp != null)
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0 = __this->get__vp_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// _vp.started += OnStarted;
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_3 = __this->get__vp_18();
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_4 = (EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)il2cpp_codegen_object_new(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var);
		EventHandler__ctor_mA1A6722C36644D8F49E5A5008B68352561E03400(L_4, __this, (intptr_t)((intptr_t)VideoPlayerStartedEvent_OnStarted_mF465904D4B4215366A0754BE73C3B97BD304E454_RuntimeMethod_var), /*hidden argument*/NULL);
		VideoPlayer_add_started_mCF94075E95992F117E4F572F6A9C4533DFF79230(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerStartedEvent::OnExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerStartedEvent_OnExit_m5D46D07D0CB8CA9471FBD27EBE88E71086D1C414 (VideoPlayerStartedEvent_t6D74F097936F5E709026F1065BE86AADE7B5B353 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoPlayerStartedEvent_OnStarted_mF465904D4B4215366A0754BE73C3B97BD304E454_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_vp != null)
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0 = __this->get__vp_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// _vp.started -= OnStarted;
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_3 = __this->get__vp_18();
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_4 = (EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)il2cpp_codegen_object_new(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var);
		EventHandler__ctor_mA1A6722C36644D8F49E5A5008B68352561E03400(L_4, __this, (intptr_t)((intptr_t)VideoPlayerStartedEvent_OnStarted_mF465904D4B4215366A0754BE73C3B97BD304E454_RuntimeMethod_var), /*hidden argument*/NULL);
		VideoPlayer_remove_started_m413FD525DAA289A2D65BB757C06314D8DDF4356C(L_3, L_4, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerStartedEvent::OnStarted(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerStartedEvent_OnStarted_mF465904D4B4215366A0754BE73C3B97BD304E454 (VideoPlayerStartedEvent_t6D74F097936F5E709026F1065BE86AADE7B5B353 * __this, VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Fsm.EventData.GameObjectData = source.gameObject;
		IL2CPP_RUNTIME_CLASS_INIT(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_il2cpp_TypeInfo_var);
		FsmEventData_t453A58C9899C2D7415E4461A62DEF9460A41603D * L_0 = ((Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_StaticFields*)il2cpp_codegen_static_fields_for(Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F_il2cpp_TypeInfo_var))->get_EventData_4();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_1 = ___source0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		L_0->set_GameObjectData_14(L_2);
		// Fsm.Event (onStartedEvent);
		Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * L_3;
		L_3 = FsmStateAction_get_Fsm_mB070E4AB8D6223F26E312624FB53B2C844DED2F2_inline(__this, /*hidden argument*/NULL);
		FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * L_4 = __this->get_onStartedEvent_16();
		Fsm_Event_m58CEF84BDA7A3A0A0C714BB35268C947ADEFCED3(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerStartedEvent::GetVideoPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerStartedEvent_GetVideoPlayer_m444D4FDFBC4E8C302252AD1C7224FD9E4F54179D (VideoPlayerStartedEvent_t6D74F097936F5E709026F1065BE86AADE7B5B353 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_mE0279031C6B378280F6E848C495D87D03F1647B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// go = Fsm.GetOwnerDefaultTarget(gameObject);
		Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * L_0;
		L_0 = FsmStateAction_get_Fsm_mB070E4AB8D6223F26E312624FB53B2C844DED2F2_inline(__this, /*hidden argument*/NULL);
		FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * L_1 = __this->get_gameObject_15();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Fsm_GetOwnerDefaultTarget_mB412CB0055B742D7D560833FA7D6892AA9147AE7(L_0, L_1, /*hidden argument*/NULL);
		__this->set_go_17(L_2);
		// if (go != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_go_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// _vp = go.GetComponent<VideoPlayer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_go_17();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_7;
		L_7 = GameObject_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_mE0279031C6B378280F6E848C495D87D03F1647B2(L_6, /*hidden argument*/GameObject_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_mE0279031C6B378280F6E848C495D87D03F1647B2_RuntimeMethod_var);
		__this->set__vp_18(L_7);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerStartedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerStartedEvent__ctor_mA551BBDD68D4CD22390536A18FC085F589E5E012 (VideoPlayerStartedEvent_t6D74F097936F5E709026F1065BE86AADE7B5B353 * __this, const RuntimeMethod* method)
{
	{
		FsmStateAction__ctor_m816C30B8FFC911E0BAB25C82730629ADCCA38D7F(__this, /*hidden argument*/NULL);
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
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerStepForward::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerStepForward_Reset_m008A882912F5F5B24ADFBAB5FC2A60B192D40BF7 (VideoPlayerStepForward_tE28310310F2FEF9F36BAD45282CE39220038DB96 * __this, const RuntimeMethod* method)
{
	{
		// gameObject = null;
		__this->set_gameObject_15((FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 *)NULL);
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerStepForward::OnEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerStepForward_OnEnter_mDD02D1C0FCC8E11CB375312D9A003E517F51C4B0 (VideoPlayerStepForward_tE28310310F2FEF9F36BAD45282CE39220038DB96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// GetVideoPlayer ();
		VideoPlayerStepForward_GetVideoPlayer_m497766EA0AA62D8C6E752F6C0AC45CA1C5DF2BA4(__this, /*hidden argument*/NULL);
		// if (_vp != null)
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0 = __this->get__vp_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// _vp.StepForward();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_3 = __this->get__vp_17();
		VideoPlayer_StepForward_m06C849B3CE22EE18580B47525F884A3B06791EFC(L_3, /*hidden argument*/NULL);
		// return;
		goto IL_002e;
	}

IL_0027:
	{
		// Finish();
		FsmStateAction_Finish_mCD9071F8CE720F6A648B39BB9783B047945C2DFC(__this, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerStepForward::GetVideoPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerStepForward_GetVideoPlayer_m497766EA0AA62D8C6E752F6C0AC45CA1C5DF2BA4 (VideoPlayerStepForward_tE28310310F2FEF9F36BAD45282CE39220038DB96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_mE0279031C6B378280F6E848C495D87D03F1647B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// go = Fsm.GetOwnerDefaultTarget(gameObject);
		Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * L_0;
		L_0 = FsmStateAction_get_Fsm_mB070E4AB8D6223F26E312624FB53B2C844DED2F2_inline(__this, /*hidden argument*/NULL);
		FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * L_1 = __this->get_gameObject_15();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Fsm_GetOwnerDefaultTarget_mB412CB0055B742D7D560833FA7D6892AA9147AE7(L_0, L_1, /*hidden argument*/NULL);
		__this->set_go_16(L_2);
		// if (go != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_go_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// _vp = go.GetComponent<VideoPlayer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_go_16();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_7;
		L_7 = GameObject_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_mE0279031C6B378280F6E848C495D87D03F1647B2(L_6, /*hidden argument*/GameObject_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_mE0279031C6B378280F6E848C495D87D03F1647B2_RuntimeMethod_var);
		__this->set__vp_17(L_7);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerStepForward::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerStepForward__ctor_m9B54C4B78B0CE94689824554EDCC81D9F835EA4A (VideoPlayerStepForward_tE28310310F2FEF9F36BAD45282CE39220038DB96 * __this, const RuntimeMethod* method)
{
	{
		FsmStateAction__ctor_m816C30B8FFC911E0BAB25C82730629ADCCA38D7F(__this, /*hidden argument*/NULL);
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
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerStop::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerStop_Reset_mA9052DF73DFF6364DBAF1B946823097D1B12AB96 (VideoPlayerStop_tD68F9453B27B5A04C629A05D60C32546A113D947 * __this, const RuntimeMethod* method)
{
	{
		// gameObject = null;
		__this->set_gameObject_15((FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 *)NULL);
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerStop::OnEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerStop_OnEnter_mB81452C8B33A463227F730D1D1A42552E32B3046 (VideoPlayerStop_tD68F9453B27B5A04C629A05D60C32546A113D947 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// GetVideoPlayer ();
		VideoPlayerStop_GetVideoPlayer_mF7B0987102F90DC52F21744100CE920294DDC5BD(__this, /*hidden argument*/NULL);
		// if (_vp != null)
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0 = __this->get__vp_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// _vp.Stop ();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_3 = __this->get__vp_17();
		VideoPlayer_Stop_mC65F299C170F41E6823207427F782982031DE293(L_3, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// Finish();
		FsmStateAction_Finish_mCD9071F8CE720F6A648B39BB9783B047945C2DFC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerStop::GetVideoPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerStop_GetVideoPlayer_mF7B0987102F90DC52F21744100CE920294DDC5BD (VideoPlayerStop_tD68F9453B27B5A04C629A05D60C32546A113D947 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_mE0279031C6B378280F6E848C495D87D03F1647B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// go = Fsm.GetOwnerDefaultTarget(gameObject);
		Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * L_0;
		L_0 = FsmStateAction_get_Fsm_mB070E4AB8D6223F26E312624FB53B2C844DED2F2_inline(__this, /*hidden argument*/NULL);
		FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * L_1 = __this->get_gameObject_15();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Fsm_GetOwnerDefaultTarget_mB412CB0055B742D7D560833FA7D6892AA9147AE7(L_0, L_1, /*hidden argument*/NULL);
		__this->set_go_16(L_2);
		// if (go != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_go_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// _vp = go.GetComponent<VideoPlayer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_go_16();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_7;
		L_7 = GameObject_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_mE0279031C6B378280F6E848C495D87D03F1647B2(L_6, /*hidden argument*/GameObject_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_mE0279031C6B378280F6E848C495D87D03F1647B2_RuntimeMethod_var);
		__this->set__vp_17(L_7);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.VideoPlayerStop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerStop__ctor_m3C9743E1D8E5E90EE29D1D22B53F93A398059401 (VideoPlayerStop_tD68F9453B27B5A04C629A05D60C32546A113D947 * __this, const RuntimeMethod* method)
{
	{
		FsmStateAction__ctor_m816C30B8FFC911E0BAB25C82730629ADCCA38D7F(__this, /*hidden argument*/NULL);
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
// System.Void HutongGames.PlayMaker.Actions.Wait::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wait_Reset_mBD88AF59024E21BDB164F1CF29C23FFC091F4776 (Wait_t64225863007A083840ECC467675CEF44F2BC7557 * __this, const RuntimeMethod* method)
{
	{
		// time = 1f;
		FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * L_0;
		L_0 = FsmFloat_op_Implicit_m833DD25A0E7E3A4FDF3FC62CD82C2BD526D75C97((1.0f), /*hidden argument*/NULL);
		__this->set_time_15(L_0);
		// finishEvent = null;
		__this->set_finishEvent_16((FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 *)NULL);
		// realTime = false;
		__this->set_realTime_17((bool)0);
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.Wait::OnEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wait_OnEnter_m3315A99B36AE8D70368E3CBDC14D639D251FE9D0 (Wait_t64225863007A083840ECC467675CEF44F2BC7557 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (time.Value <= 0)
		FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * L_0 = __this->get_time_15();
		float L_1;
		L_1 = FsmFloat_get_Value_mAF9FBC2F97703B39885E123CFEF53D5935C50FD9(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((!(((float)L_1) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// Fsm.Event(finishEvent);
		Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * L_3;
		L_3 = FsmStateAction_get_Fsm_mB070E4AB8D6223F26E312624FB53B2C844DED2F2_inline(__this, /*hidden argument*/NULL);
		FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * L_4 = __this->get_finishEvent_16();
		Fsm_Event_m58CEF84BDA7A3A0A0C714BB35268C947ADEFCED3(L_3, L_4, /*hidden argument*/NULL);
		// Finish();
		FsmStateAction_Finish_mCD9071F8CE720F6A648B39BB9783B047945C2DFC(__this, /*hidden argument*/NULL);
		// return;
		goto IL_004c;
	}

IL_0036:
	{
		// startTime = FsmTime.RealtimeSinceStartup;
		float L_5;
		L_5 = FsmTime_get_RealtimeSinceStartup_m95B1289EEC615D5EE66EBCE8F61583EEA39A92D6(/*hidden argument*/NULL);
		__this->set_startTime_18(L_5);
		// timer = 0f;
		__this->set_timer_19((0.0f));
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.Wait::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wait_OnUpdate_m214781A056CDBBD7CB5554732813A4A4412D4A60 (Wait_t64225863007A083840ECC467675CEF44F2BC7557 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (realTime)
		bool L_0 = __this->get_realTime_17();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// timer = FsmTime.RealtimeSinceStartup - startTime;
		float L_2;
		L_2 = FsmTime_get_RealtimeSinceStartup_m95B1289EEC615D5EE66EBCE8F61583EEA39A92D6(/*hidden argument*/NULL);
		float L_3 = __this->get_startTime_18();
		__this->set_timer_19(((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)));
		goto IL_0035;
	}

IL_0021:
	{
		// timer += Time.deltaTime;
		float L_4 = __this->get_timer_19();
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timer_19(((float)il2cpp_codegen_add((float)L_4, (float)L_5)));
	}

IL_0035:
	{
		// if (timer >= time.Value)
		float L_6 = __this->get_timer_19();
		FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * L_7 = __this->get_time_15();
		float L_8;
		L_8 = FsmFloat_get_Value_mAF9FBC2F97703B39885E123CFEF53D5935C50FD9(L_7, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((!(((float)L_6) >= ((float)L_8)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0079;
		}
	}
	{
		// Finish();
		FsmStateAction_Finish_mCD9071F8CE720F6A648B39BB9783B047945C2DFC(__this, /*hidden argument*/NULL);
		// if (finishEvent != null)
		FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * L_10 = __this->get_finishEvent_16();
		V_2 = (bool)((!(((RuntimeObject*)(FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 *)L_10) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0078;
		}
	}
	{
		// Fsm.Event(finishEvent);
		Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * L_12;
		L_12 = FsmStateAction_get_Fsm_mB070E4AB8D6223F26E312624FB53B2C844DED2F2_inline(__this, /*hidden argument*/NULL);
		FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * L_13 = __this->get_finishEvent_16();
		Fsm_Event_m58CEF84BDA7A3A0A0C714BB35268C947ADEFCED3(L_12, L_13, /*hidden argument*/NULL);
	}

IL_0078:
	{
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.Wait::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wait__ctor_mFB11685FD8FFFDB38F142713F824793286DA918C (Wait_t64225863007A083840ECC467675CEF44F2BC7557 * __this, const RuntimeMethod* method)
{
	{
		FsmStateAction__ctor_m816C30B8FFC911E0BAB25C82730629ADCCA38D7F(__this, /*hidden argument*/NULL);
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
// System.Void HutongGames.PlayMaker.Actions.WaitAnyKey::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitAnyKey_Reset_mC7E48EF0308834C021C79CE2601B5E390E23ADF9 (WaitAnyKey_tA60E914ADD7DB28422E0BFE0BF7E9C5EE71C24A5 * __this, const RuntimeMethod* method)
{
	{
		// eventTarget = FsmEventTarget.Self;
		FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE * L_0;
		L_0 = FsmEventTarget_get_Self_m6F822318B29DBFB2E41CA9E6CDF7931A1F57E2FC(/*hidden argument*/NULL);
		__this->set_eventTarget_15(L_0);
		// sendEvent = null;
		__this->set_sendEvent_16((FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 *)NULL);
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.WaitAnyKey::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitAnyKey_OnUpdate_mD31FCF13C5952F36278D1D4448435D92680583C1 (WaitAnyKey_tA60E914ADD7DB28422E0BFE0BF7E9C5EE71C24A5 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (Input.anyKeyDown)
		bool L_0;
		L_0 = Input_get_anyKeyDown_m0E5B02352AC40A25BBE31F4532764279D5AF03A5(/*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// Fsm.Event(eventTarget, sendEvent);
		Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * L_2;
		L_2 = FsmStateAction_get_Fsm_mB070E4AB8D6223F26E312624FB53B2C844DED2F2_inline(__this, /*hidden argument*/NULL);
		FsmEventTarget_t064689159266602F6B7CC17F386BE2E0EB6AEEEE * L_3 = __this->get_eventTarget_15();
		FsmEvent_t80BDB567414A617AFDFC1B87DA7C2BEE38D4FA43 * L_4 = __this->get_sendEvent_16();
		Fsm_Event_mC17983237B2D50BC0F80C22F16BF5EAA149C6EA7(L_2, L_3, L_4, /*hidden argument*/NULL);
		// Finish();
		FsmStateAction_Finish_mCD9071F8CE720F6A648B39BB9783B047945C2DFC(__this, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.WaitAnyKey::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitAnyKey__ctor_m680C61F31FD05B6DC604BE4C9E76028126A2C3D5 (WaitAnyKey_tA60E914ADD7DB28422E0BFE0BF7E9C5EE71C24A5 * __this, const RuntimeMethod* method)
{
	{
		FsmStateAction__ctor_m816C30B8FFC911E0BAB25C82730629ADCCA38D7F(__this, /*hidden argument*/NULL);
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
// System.Void HutongGames.PlayMaker.Actions.WakeAllRigidBodies::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WakeAllRigidBodies_Reset_m247B2B48797838432F503A5C4CE6DCAC6F2AA19B (WakeAllRigidBodies_t8BBF975016A4C22DF0DE8275DDC8858CA0A5B03B * __this, const RuntimeMethod* method)
{
	{
		// everyFrame = false;
		__this->set_everyFrame_15((bool)0);
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.WakeAllRigidBodies::OnEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WakeAllRigidBodies_OnEnter_m10CAC183A09390ED9B59829EEB8F417DDEC47E58 (WakeAllRigidBodies_t8BBF975016A4C22DF0DE8275DDC8858CA0A5B03B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// bodies = Object.FindObjectsOfType(typeof(Rigidbody)) as Rigidbody[];
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* L_2;
		L_2 = Object_FindObjectsOfType_m6E4A383F89274D0F316FDDA39745C59025A11B02(L_1, /*hidden argument*/NULL);
		__this->set_bodies_16(((RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B*)IsInst((RuntimeObject*)L_2, RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B_il2cpp_TypeInfo_var)));
		// DoWakeAll();
		WakeAllRigidBodies_DoWakeAll_m8C27EF19FAA7D51360C7CA6C0861B6472F359C6D(__this, /*hidden argument*/NULL);
		// if (!everyFrame)
		bool L_3 = __this->get_everyFrame_15();
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// Finish();
		FsmStateAction_Finish_mCD9071F8CE720F6A648B39BB9783B047945C2DFC(__this, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.WakeAllRigidBodies::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WakeAllRigidBodies_OnUpdate_mD1974A94FC08D1E0A510200C08139CC6FE984C20 (WakeAllRigidBodies_t8BBF975016A4C22DF0DE8275DDC8858CA0A5B03B * __this, const RuntimeMethod* method)
{
	{
		// DoWakeAll();
		WakeAllRigidBodies_DoWakeAll_m8C27EF19FAA7D51360C7CA6C0861B6472F359C6D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.WakeAllRigidBodies::DoWakeAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WakeAllRigidBodies_DoWakeAll_m8C27EF19FAA7D51360C7CA6C0861B6472F359C6D (WakeAllRigidBodies_t8BBF975016A4C22DF0DE8275DDC8858CA0A5B03B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B* V_1 = NULL;
	int32_t V_2 = 0;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * V_3 = NULL;
	{
		// bodies = Object.FindObjectsOfType(typeof(Rigidbody)) as Rigidbody[];
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* L_2;
		L_2 = Object_FindObjectsOfType_m6E4A383F89274D0F316FDDA39745C59025A11B02(L_1, /*hidden argument*/NULL);
		__this->set_bodies_16(((RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B*)IsInst((RuntimeObject*)L_2, RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B_il2cpp_TypeInfo_var)));
		// if (bodies != null)
		RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B* L_3 = __this->get_bodies_16();
		V_0 = (bool)((!(((RuntimeObject*)(RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B*)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_004d;
		}
	}
	{
		// foreach (var body in bodies)
		RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B* L_5 = __this->get_bodies_16();
		V_1 = L_5;
		V_2 = 0;
		goto IL_0046;
	}

IL_0035:
	{
		// foreach (var body in bodies)
		RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B* L_6 = V_1;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		// body.WakeUp();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_10 = V_3;
		Rigidbody_WakeUp_m89308E6756834CF3705D9CDE89D636EEEE409316(L_10, /*hidden argument*/NULL);
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0046:
	{
		// foreach (var body in bodies)
		int32_t L_12 = V_2;
		RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B* L_13 = V_1;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.WakeAllRigidBodies::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WakeAllRigidBodies__ctor_m4F1CF44C71F82B974AB089A503BCF8FF28FD6246 (WakeAllRigidBodies_t8BBF975016A4C22DF0DE8275DDC8858CA0A5B03B * __this, const RuntimeMethod* method)
{
	{
		FsmStateAction__ctor_m816C30B8FFC911E0BAB25C82730629ADCCA38D7F(__this, /*hidden argument*/NULL);
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
// System.Void HutongGames.PlayMaker.Actions.WakeAllRigidBodies2d::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WakeAllRigidBodies2d_Reset_m07ED5E5A922662201063A73F2310DEC58F2C36B3 (WakeAllRigidBodies2d_t90EBBB11BA84FEF8917C874A0C35AECE3DF9DAE3 * __this, const RuntimeMethod* method)
{
	{
		// everyFrame = false;
		__this->set_everyFrame_15((bool)0);
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.WakeAllRigidBodies2d::OnEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WakeAllRigidBodies2d_OnEnter_m556452A47DCE6912AE4BB566F493BA469AAC6DCD (WakeAllRigidBodies2d_t90EBBB11BA84FEF8917C874A0C35AECE3DF9DAE3 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// DoWakeAll();
		WakeAllRigidBodies2d_DoWakeAll_mB8DD2833979086BB1272E8959163B7F12EE8FABC(__this, /*hidden argument*/NULL);
		// if (!everyFrame)
		bool L_0 = __this->get_everyFrame_15();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// Finish();
		FsmStateAction_Finish_mCD9071F8CE720F6A648B39BB9783B047945C2DFC(__this, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.WakeAllRigidBodies2d::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WakeAllRigidBodies2d_OnUpdate_m4E7DC706FE23E6AAB9CABEFAFEE625910D3D1CEB (WakeAllRigidBodies2d_t90EBBB11BA84FEF8917C874A0C35AECE3DF9DAE3 * __this, const RuntimeMethod* method)
{
	{
		// DoWakeAll();
		WakeAllRigidBodies2d_DoWakeAll_mB8DD2833979086BB1272E8959163B7F12EE8FABC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.WakeAllRigidBodies2d::DoWakeAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WakeAllRigidBodies2d_DoWakeAll_mB8DD2833979086BB1272E8959163B7F12EE8FABC (WakeAllRigidBodies2d_t90EBBB11BA84FEF8917C874A0C35AECE3DF9DAE3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rigidbody2DU5BU5D_t9CE3D06C92F81A1266F9DDF9BE6180FE19CC5CEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody2DU5BU5D_t9CE3D06C92F81A1266F9DDF9BE6180FE19CC5CEF* V_0 = NULL;
	bool V_1 = false;
	Rigidbody2DU5BU5D_t9CE3D06C92F81A1266F9DDF9BE6180FE19CC5CEF* V_2 = NULL;
	int32_t V_3 = 0;
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * V_4 = NULL;
	{
		// var bodies = Object.FindObjectsOfType(typeof(Rigidbody2D)) as Rigidbody2D[];
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* L_2;
		L_2 = Object_FindObjectsOfType_m6E4A383F89274D0F316FDDA39745C59025A11B02(L_1, /*hidden argument*/NULL);
		V_0 = ((Rigidbody2DU5BU5D_t9CE3D06C92F81A1266F9DDF9BE6180FE19CC5CEF*)IsInst((RuntimeObject*)L_2, Rigidbody2DU5BU5D_t9CE3D06C92F81A1266F9DDF9BE6180FE19CC5CEF_il2cpp_TypeInfo_var));
		// if (bodies != null)
		Rigidbody2DU5BU5D_t9CE3D06C92F81A1266F9DDF9BE6180FE19CC5CEF* L_3 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Rigidbody2DU5BU5D_t9CE3D06C92F81A1266F9DDF9BE6180FE19CC5CEF*)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		// foreach (var body in bodies)
		Rigidbody2DU5BU5D_t9CE3D06C92F81A1266F9DDF9BE6180FE19CC5CEF* L_5 = V_0;
		V_2 = L_5;
		V_3 = 0;
		goto IL_0039;
	}

IL_0026:
	{
		// foreach (var body in bodies)
		Rigidbody2DU5BU5D_t9CE3D06C92F81A1266F9DDF9BE6180FE19CC5CEF* L_6 = V_2;
		int32_t L_7 = V_3;
		int32_t L_8 = L_7;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_4 = L_9;
		// body.WakeUp();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_10 = V_4;
		Rigidbody2D_WakeUp_mB5A3852660DB19F546F0651ADD80BAA2D96D81C0(L_10, /*hidden argument*/NULL);
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0039:
	{
		// foreach (var body in bodies)
		int32_t L_12 = V_3;
		Rigidbody2DU5BU5D_t9CE3D06C92F81A1266F9DDF9BE6180FE19CC5CEF* L_13 = V_2;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0026;
		}
	}
	{
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.WakeAllRigidBodies2d::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WakeAllRigidBodies2d__ctor_mB301BA4F11A85B7B81469C0FB8AC89EF06967CE3 (WakeAllRigidBodies2d_t90EBBB11BA84FEF8917C874A0C35AECE3DF9DAE3 * __this, const RuntimeMethod* method)
{
	{
		FsmStateAction__ctor_m816C30B8FFC911E0BAB25C82730629ADCCA38D7F(__this, /*hidden argument*/NULL);
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
// System.Void HutongGames.PlayMaker.Actions.WakeUp::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WakeUp_Reset_mAE761C6E5B8D6A03730361FC9AE3DA79AE3D52DC (WakeUp_t09D0AF55A7CF33E212DFBA3E62508A4CC4FA5177 * __this, const RuntimeMethod* method)
{
	{
		// gameObject = null;
		__this->set_gameObject_18((FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 *)NULL);
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.WakeUp::OnEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WakeUp_OnEnter_mEAAA645C78E8ABECE069444BEA205192EBF31354 (WakeUp_t09D0AF55A7CF33E212DFBA3E62508A4CC4FA5177 * __this, const RuntimeMethod* method)
{
	{
		// DoWakeUp();
		WakeUp_DoWakeUp_m2EBA3C1E4371305B15E9051274ABDE3FD0008128(__this, /*hidden argument*/NULL);
		// Finish();
		FsmStateAction_Finish_mCD9071F8CE720F6A648B39BB9783B047945C2DFC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.WakeUp::DoWakeUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WakeUp_DoWakeUp_m2EBA3C1E4371305B15E9051274ABDE3FD0008128 (WakeUp_t09D0AF55A7CF33E212DFBA3E62508A4CC4FA5177 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentAction_1_UpdateCache_mC90D6C90299F65E97FB40E04836D81F1E1BF626D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentAction_1_get_rigidbody_mF6B7FEFF15FE183AB91B7B9374830EDAE63944B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	bool V_1 = false;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B3_0 = NULL;
	{
		// var go = gameObject.OwnerOption == OwnerDefaultOption.UseOwner ? Owner : gameObject.GameObject.Value;
		FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * L_0 = __this->get_gameObject_18();
		int32_t L_1;
		L_1 = FsmOwnerDefault_get_OwnerOption_m2912191C36F5FC05B3D08322DFA16BC9B61D65D2_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * L_2 = __this->get_gameObject_18();
		FsmGameObject_t7025A28070D5CC87929DD35DECF6025E38BFA994 * L_3;
		L_3 = FsmOwnerDefault_get_GameObject_m1300CD43FFACCE2B7ED7D1A1A1235BE736A11427_inline(L_2, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = FsmGameObject_get_Value_m878535B9E02FE729B7C855E7B1929BCC5AAE1B05(L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		goto IL_0026;
	}

IL_0020:
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = FsmStateAction_get_Owner_m480BD7FC1EBB2AB5C136ECECE4AC58FB67A18F2F_inline(__this, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_0026:
	{
		V_0 = G_B3_0;
		// if (UpdateCache(go))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_0;
		bool L_7;
		L_7 = ComponentAction_1_UpdateCache_mC90D6C90299F65E97FB40E04836D81F1E1BF626D(__this, L_6, /*hidden argument*/ComponentAction_1_UpdateCache_mC90D6C90299F65E97FB40E04836D81F1E1BF626D_RuntimeMethod_var);
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		// rigidbody.WakeUp();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_9;
		L_9 = ComponentAction_1_get_rigidbody_mF6B7FEFF15FE183AB91B7B9374830EDAE63944B4(__this, /*hidden argument*/ComponentAction_1_get_rigidbody_mF6B7FEFF15FE183AB91B7B9374830EDAE63944B4_RuntimeMethod_var);
		Rigidbody_WakeUp_m89308E6756834CF3705D9CDE89D636EEEE409316(L_9, /*hidden argument*/NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.WakeUp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WakeUp__ctor_mFD285890861A774EE0A27FC0292AB1ED40CF22EC (WakeUp_t09D0AF55A7CF33E212DFBA3E62508A4CC4FA5177 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentAction_1__ctor_m231827CA922C5320028EBFBC77B61F7629C5A5B1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ComponentAction_1__ctor_m231827CA922C5320028EBFBC77B61F7629C5A5B1(__this, /*hidden argument*/ComponentAction_1__ctor_m231827CA922C5320028EBFBC77B61F7629C5A5B1_RuntimeMethod_var);
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
// System.Void HutongGames.PlayMaker.Actions.WakeUp2d::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WakeUp2d_Reset_m48E8EE8AF3C286D6A19EE5D0959D843568260BFD (WakeUp2d_t46006C6907CDFEFD9FD9FABDBD337777866FEEFB * __this, const RuntimeMethod* method)
{
	{
		// gameObject = null;
		__this->set_gameObject_18((FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 *)NULL);
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.WakeUp2d::OnEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WakeUp2d_OnEnter_m03079000F74312F0E44C458609782C6E96DB437F (WakeUp2d_t46006C6907CDFEFD9FD9FABDBD337777866FEEFB * __this, const RuntimeMethod* method)
{
	{
		// DoWakeUp();
		WakeUp2d_DoWakeUp_mDF117E55BD5F1EEA69003B81E9F083415FBEA7B8(__this, /*hidden argument*/NULL);
		// Finish();
		FsmStateAction_Finish_mCD9071F8CE720F6A648B39BB9783B047945C2DFC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.WakeUp2d::DoWakeUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WakeUp2d_DoWakeUp_mDF117E55BD5F1EEA69003B81E9F083415FBEA7B8 (WakeUp2d_t46006C6907CDFEFD9FD9FABDBD337777866FEEFB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentAction_1_UpdateCache_m1F7594191AECFAE2119A979F703FD8C43FEFF6B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentAction_1_get_rigidbody2d_mAF15F6B5BC4676C250EECF774CADF3B8A314AEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	bool V_1 = false;
	{
		// var go = Fsm.GetOwnerDefaultTarget(gameObject);
		Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * L_0;
		L_0 = FsmStateAction_get_Fsm_mB070E4AB8D6223F26E312624FB53B2C844DED2F2_inline(__this, /*hidden argument*/NULL);
		FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * L_1 = __this->get_gameObject_18();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Fsm_GetOwnerDefaultTarget_mB412CB0055B742D7D560833FA7D6892AA9147AE7(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (!UpdateCache(go))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_0;
		bool L_4;
		L_4 = ComponentAction_1_UpdateCache_m1F7594191AECFAE2119A979F703FD8C43FEFF6B2(__this, L_3, /*hidden argument*/ComponentAction_1_UpdateCache_m1F7594191AECFAE2119A979F703FD8C43FEFF6B2_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		// return;
		goto IL_0030;
	}

IL_0024:
	{
		// rigidbody2d.WakeUp();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_6;
		L_6 = ComponentAction_1_get_rigidbody2d_mAF15F6B5BC4676C250EECF774CADF3B8A314AEC0(__this, /*hidden argument*/ComponentAction_1_get_rigidbody2d_mAF15F6B5BC4676C250EECF774CADF3B8A314AEC0_RuntimeMethod_var);
		Rigidbody2D_WakeUp_mB5A3852660DB19F546F0651ADD80BAA2D96D81C0(L_6, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.WakeUp2d::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WakeUp2d__ctor_m9D3691543DEBB5D9968FABB09D144295D54E1634 (WakeUp2d_t46006C6907CDFEFD9FD9FABDBD337777866FEEFB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentAction_1__ctor_m467D8B3FAFB5A2B8A225C70D0B7973C9F1C3AF20_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ComponentAction_1__ctor_m467D8B3FAFB5A2B8A225C70D0B7973C9F1C3AF20(__this, /*hidden argument*/ComponentAction_1__ctor_m467D8B3FAFB5A2B8A225C70D0B7973C9F1C3AF20_RuntimeMethod_var);
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
// System.Void HutongGames.PlayMaker.Actions.WorldToScreenPoint::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldToScreenPoint_Reset_mE20838EA797B36F351BAC6873A6D2EBB5AF4956A (WorldToScreenPoint_t8910E6758FFDF0CE1BE7FA19C9D9E9AE6BBAC2C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// worldPosition = null;
		__this->set_worldPosition_16((FsmVector3_t064573DA0DA55E7ADD59D064805A3A465403069B *)NULL);
		// worldX = new FsmFloat { UseVariable = true };
		FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * L_0 = (FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 *)il2cpp_codegen_object_new(FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0_il2cpp_TypeInfo_var);
		FsmFloat__ctor_mE328EE1FE0C070FB4BE42E32FB9126B44597A106(L_0, /*hidden argument*/NULL);
		FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * L_1 = L_0;
		NamedVariable_set_UseVariable_m0FEF6D0831D13AD751FF464092B5E13E3FF25579_inline(L_1, (bool)1, /*hidden argument*/NULL);
		__this->set_worldX_17(L_1);
		// worldY = new FsmFloat { UseVariable = true };
		FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * L_2 = (FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 *)il2cpp_codegen_object_new(FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0_il2cpp_TypeInfo_var);
		FsmFloat__ctor_mE328EE1FE0C070FB4BE42E32FB9126B44597A106(L_2, /*hidden argument*/NULL);
		FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * L_3 = L_2;
		NamedVariable_set_UseVariable_m0FEF6D0831D13AD751FF464092B5E13E3FF25579_inline(L_3, (bool)1, /*hidden argument*/NULL);
		__this->set_worldY_18(L_3);
		// worldZ = new FsmFloat { UseVariable = true };
		FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * L_4 = (FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 *)il2cpp_codegen_object_new(FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0_il2cpp_TypeInfo_var);
		FsmFloat__ctor_mE328EE1FE0C070FB4BE42E32FB9126B44597A106(L_4, /*hidden argument*/NULL);
		FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * L_5 = L_4;
		NamedVariable_set_UseVariable_m0FEF6D0831D13AD751FF464092B5E13E3FF25579_inline(L_5, (bool)1, /*hidden argument*/NULL);
		__this->set_worldZ_19(L_5);
		// storeScreenPoint = null;
		__this->set_storeScreenPoint_20((FsmVector3_t064573DA0DA55E7ADD59D064805A3A465403069B *)NULL);
		// storeScreenX = null;
		__this->set_storeScreenX_21((FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 *)NULL);
		// storeScreenY = null;
		__this->set_storeScreenY_22((FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 *)NULL);
		// everyFrame = false;
		__this->set_everyFrame_24((bool)0);
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.WorldToScreenPoint::InitCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldToScreenPoint_InitCamera_m70EC07C9E4E8F40CE2CC553EAD0064F1E1A227D9 (WorldToScreenPoint_t8910E6758FFDF0CE1BE7FA19C9D9E9AE6BBAC2C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// if (screenCamera == null || cameraGameObject != camera.Value) // camera value might change!
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_screenCamera_26();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_cameraGameObject_25();
		FsmGameObject_t7025A28070D5CC87929DD35DECF6025E38BFA994 * L_3 = __this->get_camera_15();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = FsmGameObject_get_Value_m878535B9E02FE729B7C855E7B1929BCC5AAE1B05(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 1;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0099;
		}
	}
	{
		// cameraGameObject = camera.Value;
		FsmGameObject_t7025A28070D5CC87929DD35DECF6025E38BFA994 * L_7 = __this->get_camera_15();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = FsmGameObject_get_Value_m878535B9E02FE729B7C855E7B1929BCC5AAE1B05(L_7, /*hidden argument*/NULL);
		__this->set_cameraGameObject_25(L_8);
		// if (cameraGameObject != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_cameraGameObject_25();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0068;
		}
	}
	{
		// screenCamera = camera.Value.GetComponent<Camera>();
		FsmGameObject_t7025A28070D5CC87929DD35DECF6025E38BFA994 * L_12 = __this->get_camera_15();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = FsmGameObject_get_Value_m878535B9E02FE729B7C855E7B1929BCC5AAE1B05(L_12, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_14;
		L_14 = GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49(L_13, /*hidden argument*/GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49_RuntimeMethod_var);
		__this->set_screenCamera_26(L_14);
		goto IL_0098;
	}

IL_0068:
	{
		// screenCamera = Camera.main;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_15;
		L_15 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		__this->set_screenCamera_26(L_15);
		// if (screenCamera != null)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_16 = __this->get_screenCamera_26();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_16, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_17;
		bool L_18 = V_2;
		if (!L_18)
		{
			goto IL_0097;
		}
	}
	{
		// cameraGameObject = screenCamera.gameObject;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_19 = __this->get_screenCamera_26();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_19, /*hidden argument*/NULL);
		__this->set_cameraGameObject_25(L_20);
	}

IL_0097:
	{
	}

IL_0098:
	{
	}

IL_0099:
	{
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.WorldToScreenPoint::OnEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldToScreenPoint_OnEnter_m7FEC77A0A859E27D0763AA62D14C7347CEBF1782 (WorldToScreenPoint_t8910E6758FFDF0CE1BE7FA19C9D9E9AE6BBAC2C9 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// DoWorldToScreenPoint();
		WorldToScreenPoint_DoWorldToScreenPoint_mFF81AE15F7CEA5F1E1E5512B1B6283789075348A(__this, /*hidden argument*/NULL);
		// if (!everyFrame)
		bool L_0 = __this->get_everyFrame_24();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// Finish();
		FsmStateAction_Finish_mCD9071F8CE720F6A648B39BB9783B047945C2DFC(__this, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.WorldToScreenPoint::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldToScreenPoint_OnUpdate_m4959F06113EC91B58B4CD1F35090318C24CEE782 (WorldToScreenPoint_t8910E6758FFDF0CE1BE7FA19C9D9E9AE6BBAC2C9 * __this, const RuntimeMethod* method)
{
	{
		// DoWorldToScreenPoint();
		WorldToScreenPoint_DoWorldToScreenPoint_mFF81AE15F7CEA5F1E1E5512B1B6283789075348A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.WorldToScreenPoint::DoWorldToScreenPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldToScreenPoint_DoWorldToScreenPoint_mFF81AE15F7CEA5F1E1E5512B1B6283789075348A (WorldToScreenPoint_t8910E6758FFDF0CE1BE7FA19C9D9E9AE6BBAC2C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60087BCB0F8F1C36AA4514081E294A6D9CA71FCF);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		// if (PlayMakerFSM.ApplicationIsQuitting) return;
		IL2CPP_RUNTIME_CLASS_INIT(PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555_il2cpp_TypeInfo_var);
		bool L_0 = ((PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555_StaticFields*)il2cpp_codegen_static_fields_for(PlayMakerFSM_tB2F34362321F3634A34BF226E2BF9DB8120DF555_il2cpp_TypeInfo_var))->get_ApplicationIsQuitting_6();
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (PlayMakerFSM.ApplicationIsQuitting) return;
		goto IL_0147;
	}

IL_000f:
	{
		// InitCamera();
		WorldToScreenPoint_InitCamera_m70EC07C9E4E8F40CE2CC553EAD0064F1E1A227D9(__this, /*hidden argument*/NULL);
		// if (screenCamera == null)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = __this->get_screenCamera_26();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		// LogError("No camera defined!");
		FsmStateAction_LogError_mE5107C30112B968ED44D3B1AA967F2F0EBE3578C(__this, _stringLiteral60087BCB0F8F1C36AA4514081E294A6D9CA71FCF, /*hidden argument*/NULL);
		// Finish();
		FsmStateAction_Finish_mCD9071F8CE720F6A648B39BB9783B047945C2DFC(__this, /*hidden argument*/NULL);
		// return;
		goto IL_0147;
	}

IL_003f:
	{
		// var position = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_0 = L_5;
		// if(!worldPosition.IsNone) position = worldPosition.Value;
		FsmVector3_t064573DA0DA55E7ADD59D064805A3A465403069B * L_6 = __this->get_worldPosition_16();
		bool L_7;
		L_7 = NamedVariable_get_IsNone_mF19BE1B89159A1ABA225E9C25A1AA82AE886396B(L_6, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0063;
		}
	}
	{
		// if(!worldPosition.IsNone) position = worldPosition.Value;
		FsmVector3_t064573DA0DA55E7ADD59D064805A3A465403069B * L_9 = __this->get_worldPosition_16();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = FsmVector3_get_Value_m600A235295138F32E1ECB710001168F1B79EE68C(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
	}

IL_0063:
	{
		// if (!worldX.IsNone) position.x = worldX.Value;
		FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * L_11 = __this->get_worldX_17();
		bool L_12;
		L_12 = NamedVariable_get_IsNone_mF19BE1B89159A1ABA225E9C25A1AA82AE886396B(L_11, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0089;
		}
	}
	{
		// if (!worldX.IsNone) position.x = worldX.Value;
		FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * L_14 = __this->get_worldX_17();
		float L_15;
		L_15 = FsmFloat_get_Value_mAF9FBC2F97703B39885E123CFEF53D5935C50FD9(L_14, /*hidden argument*/NULL);
		(&V_0)->set_x_2(L_15);
	}

IL_0089:
	{
		// if (!worldY.IsNone) position.y = worldY.Value;
		FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * L_16 = __this->get_worldY_18();
		bool L_17;
		L_17 = NamedVariable_get_IsNone_mF19BE1B89159A1ABA225E9C25A1AA82AE886396B(L_16, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_00af;
		}
	}
	{
		// if (!worldY.IsNone) position.y = worldY.Value;
		FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * L_19 = __this->get_worldY_18();
		float L_20;
		L_20 = FsmFloat_get_Value_mAF9FBC2F97703B39885E123CFEF53D5935C50FD9(L_19, /*hidden argument*/NULL);
		(&V_0)->set_y_3(L_20);
	}

IL_00af:
	{
		// if (!worldZ.IsNone) position.z = worldZ.Value;
		FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * L_21 = __this->get_worldZ_19();
		bool L_22;
		L_22 = NamedVariable_get_IsNone_mF19BE1B89159A1ABA225E9C25A1AA82AE886396B(L_21, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_00d5;
		}
	}
	{
		// if (!worldZ.IsNone) position.z = worldZ.Value;
		FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * L_24 = __this->get_worldZ_19();
		float L_25;
		L_25 = FsmFloat_get_Value_mAF9FBC2F97703B39885E123CFEF53D5935C50FD9(L_24, /*hidden argument*/NULL);
		(&V_0)->set_z_4(L_25);
	}

IL_00d5:
	{
		// position = Camera.main.WorldToScreenPoint(position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_26;
		L_26 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C(L_26, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		// if (normalize.Value)
		FsmBool_t194C45226C554DFD429FC1674ED697DC66DD1A97 * L_29 = __this->get_normalize_23();
		bool L_30;
		L_30 = FsmBool_get_Value_m6DD837475A0A630DE0D29E25DF0F65527DB97684(L_29, /*hidden argument*/NULL);
		V_7 = L_30;
		bool L_31 = V_7;
		if (!L_31)
		{
			goto IL_0116;
		}
	}
	{
		// position.x /= Screen.width;
		float* L_32 = (&V_0)->get_address_of_x_2();
		float* L_33 = L_32;
		float L_34 = *((float*)L_33);
		int32_t L_35;
		L_35 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		*((float*)L_33) = (float)((float)((float)L_34/(float)((float)((float)L_35))));
		// position.y /= Screen.height;
		float* L_36 = (&V_0)->get_address_of_y_3();
		float* L_37 = L_36;
		float L_38 = *((float*)L_37);
		int32_t L_39;
		L_39 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		*((float*)L_37) = (float)((float)((float)L_38/(float)((float)((float)L_39))));
	}

IL_0116:
	{
		// storeScreenPoint.Value = position;
		FsmVector3_t064573DA0DA55E7ADD59D064805A3A465403069B * L_40 = __this->get_storeScreenPoint_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = V_0;
		FsmVector3_set_Value_m603D2D8920DB5C4F98FD6BF5BE7D2020D088B6ED_inline(L_40, L_41, /*hidden argument*/NULL);
		// storeScreenX.Value = position.x;
		FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * L_42 = __this->get_storeScreenX_21();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = V_0;
		float L_44 = L_43.get_x_2();
		FsmFloat_set_Value_m5A1CC5BFC4E278438B1ECD7E550146A99D9AA804_inline(L_42, L_44, /*hidden argument*/NULL);
		// storeScreenY.Value = position.y;
		FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * L_45 = __this->get_storeScreenY_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = V_0;
		float L_47 = L_46.get_y_3();
		FsmFloat_set_Value_m5A1CC5BFC4E278438B1ECD7E550146A99D9AA804_inline(L_45, L_47, /*hidden argument*/NULL);
	}

IL_0147:
	{
		// }
		return;
	}
}
// System.String HutongGames.PlayMaker.Actions.WorldToScreenPoint::ErrorCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WorldToScreenPoint_ErrorCheck_mB7B058086C11276B3A89FEAB88F16FBE68AD6F72 (WorldToScreenPoint_t8910E6758FFDF0CE1BE7FA19C9D9E9AE6BBAC2C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C6689814A54F374A721B62E5320F663A3DDA352);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6118E214E487B4FE7E8547DCB5DC389BFCD866E0);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		// InitCamera();
		WorldToScreenPoint_InitCamera_m70EC07C9E4E8F40CE2CC553EAD0064F1E1A227D9(__this, /*hidden argument*/NULL);
		// if (screenCamera != null) return null;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_screenCamera_26();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// if (screenCamera != null) return null;
		V_1 = (String_t*)NULL;
		goto IL_0059;
	}

IL_001c:
	{
		// if (camera.Value == null)
		FsmGameObject_t7025A28070D5CC87929DD35DECF6025E38BFA994 * L_3 = __this->get_camera_15();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = FsmGameObject_get_Value_m878535B9E02FE729B7C855E7B1929BCC5AAE1B05(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		// if (Camera.main == null)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_7;
		L_7 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0049;
		}
	}
	{
		// return "@camera:No MainCamera Defined!";
		V_1 = _stringLiteral6118E214E487B4FE7E8547DCB5DC389BFCD866E0;
		goto IL_0059;
	}

IL_0049:
	{
		goto IL_0055;
	}

IL_004c:
	{
		// return "@camera:GameObject has no Camera!";
		V_1 = _stringLiteral0C6689814A54F374A721B62E5320F663A3DDA352;
		goto IL_0059;
	}

IL_0055:
	{
		// return null;
		V_1 = (String_t*)NULL;
		goto IL_0059;
	}

IL_0059:
	{
		// }
		String_t* L_10 = V_1;
		return L_10;
	}
}
// System.Void HutongGames.PlayMaker.Actions.WorldToScreenPoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldToScreenPoint__ctor_mE5C42A103B96D272D7613BE059C083D2C7409786 (WorldToScreenPoint_t8910E6758FFDF0CE1BE7FA19C9D9E9AE6BBAC2C9 * __this, const RuntimeMethod* method)
{
	{
		FsmStateAction__ctor_m816C30B8FFC911E0BAB25C82730629ADCCA38D7F(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void HutongGames.PlayMaker.Actions.ArrayContains/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m86329B1D99B1413107C8E5489E8DA8453465157C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC89D48A9864F251FFBA9963727CC54BE4DE96545_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC89D48A9864F251FFBA9963727CC54BE4DE96545 * L_0 = (U3CU3Ec_tC89D48A9864F251FFBA9963727CC54BE4DE96545 *)il2cpp_codegen_object_new(U3CU3Ec_tC89D48A9864F251FFBA9963727CC54BE4DE96545_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m6DFAC57ED79C3982B19DD2A8F9B99860D318743F(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC89D48A9864F251FFBA9963727CC54BE4DE96545_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC89D48A9864F251FFBA9963727CC54BE4DE96545_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.ArrayContains/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6DFAC57ED79C3982B19DD2A8F9B99860D318743F (U3CU3Ec_tC89D48A9864F251FFBA9963727CC54BE4DE96545 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean HutongGames.PlayMaker.Actions.ArrayContains/<>c::<DoCheckContainsValue>b__8_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CDoCheckContainsValueU3Eb__8_0_m9A98AD92C71F987DC550062CA9D49F009DA52271 (U3CU3Ec_tC89D48A9864F251FFBA9963727CC54BE4DE96545 * __this, RuntimeObject * ___x0, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		// _id =Array.FindIndex(array.Values,x => x==null || x.Equals(null));
		RuntimeObject * L_0 = ___x0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		RuntimeObject * L_1 = ___x0;
		bool L_2;
		L_2 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_1, NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 1;
	}

IL_000d:
	{
		return (bool)G_B3_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HutongGames.PlayMaker.Actions.AudioStop/<VolumeFade>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CVolumeFadeU3Ed__5__ctor_mB8FD5B34E951D89779F918E70F4A125684DAE6C2 (U3CVolumeFadeU3Ed__5_tBB4C56747CF82A9E31C3577F8198EDA2918E1B47 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.AudioStop/<VolumeFade>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CVolumeFadeU3Ed__5_System_IDisposable_Dispose_m017EC25269A69900D5B473480B534D24F776DF24 (U3CVolumeFadeU3Ed__5_tBB4C56747CF82A9E31C3577F8198EDA2918E1B47 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean HutongGames.PlayMaker.Actions.AudioStop/<VolumeFade>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CVolumeFadeU3Ed__5_MoveNext_mF4E2C6D9BA05FBE461EE20508132152990B3CB86 (U3CVolumeFadeU3Ed__5_tBB4C56747CF82A9E31C3577F8198EDA2918E1B47 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_00a6;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var startTime = Time.time;
		float L_3;
		L_3 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_U3CstartTimeU3E5__1_6(L_3);
		goto IL_00ae;
	}

IL_0030:
	{
		// var alpha = (startTime + fadeDuration - Time.time) / fadeDuration;
		float L_4 = __this->get_U3CstartTimeU3E5__1_6();
		float L_5 = __this->get_fadeDuration_4();
		float L_6;
		L_6 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_7 = __this->get_fadeDuration_4();
		__this->set_U3CalphaU3E5__2_7(((float)((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_4, (float)L_5)), (float)L_6))/(float)L_7)));
		// alpha *= alpha;
		float L_8 = __this->get_U3CalphaU3E5__2_7();
		float L_9 = __this->get_U3CalphaU3E5__2_7();
		__this->set_U3CalphaU3E5__2_7(((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)));
		// audioSource.volume = alpha * volume + endVolume * (1.0f - alpha);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_10 = __this->get_audioSource_2();
		float L_11 = __this->get_U3CalphaU3E5__2_7();
		AudioStop_tE41E93DA79B0F8FB98D7D2F5328FE5D90E005CE8 * L_12 = __this->get_U3CU3E4__this_5();
		float L_13 = L_12->get_volume_20();
		float L_14 = __this->get_endVolume_3();
		float L_15 = __this->get_U3CalphaU3E5__2_7();
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_10, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_11, (float)L_13)), (float)((float)il2cpp_codegen_multiply((float)L_14, (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_15)))))), /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00a6:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00ae:
	{
		// while (Time.time < startTime + fadeDuration)
		float L_16;
		L_16 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_17 = __this->get_U3CstartTimeU3E5__1_6();
		float L_18 = __this->get_fadeDuration_4();
		V_1 = (bool)((((float)L_16) < ((float)((float)il2cpp_codegen_add((float)L_17, (float)L_18))))? 1 : 0);
		bool L_19 = V_1;
		if (L_19)
		{
			goto IL_0030;
		}
	}
	{
		// if (Math.Abs(endVolume) < .01f)
		float L_20 = __this->get_endVolume_3();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_21;
		L_21 = fabsf(L_20);
		V_2 = (bool)((((float)L_21) < ((float)(0.00999999978f)))? 1 : 0);
		bool L_22 = V_2;
		if (!L_22)
		{
			goto IL_00ed;
		}
	}
	{
		// audioSource.Stop();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_23 = __this->get_audioSource_2();
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_23, /*hidden argument*/NULL);
	}

IL_00ed:
	{
		// }
		return (bool)0;
	}
}
// System.Object HutongGames.PlayMaker.Actions.AudioStop/<VolumeFade>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CVolumeFadeU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2E3F7D66B2F75EC2332FCBAD75C9C35F1C54C328 (U3CVolumeFadeU3Ed__5_tBB4C56747CF82A9E31C3577F8198EDA2918E1B47 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void HutongGames.PlayMaker.Actions.AudioStop/<VolumeFade>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CVolumeFadeU3Ed__5_System_Collections_IEnumerator_Reset_mB237E0E6205412B8BDE7D120D6F21A29234EF4EE (U3CVolumeFadeU3Ed__5_tBB4C56747CF82A9E31C3577F8198EDA2918E1B47 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CVolumeFadeU3Ed__5_System_Collections_IEnumerator_Reset_mB237E0E6205412B8BDE7D120D6F21A29234EF4EE_RuntimeMethod_var)));
	}
}
// System.Object HutongGames.PlayMaker.Actions.AudioStop/<VolumeFade>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CVolumeFadeU3Ed__5_System_Collections_IEnumerator_get_Current_m37FF053724522ECB046C62B751E0FE4282E45BC1 (U3CVolumeFadeU3Ed__5_tBB4C56747CF82A9E31C3577F8198EDA2918E1B47 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  float DelegatePInvokeWrapper_EasingFunction_t21A9929DE6BD9D0A54275182E77EB836E500CA00 (EasingFunction_t21A9929DE6BD9D0A54275182E77EB836E500CA00 * __this, float ___start0, float ___end1, float ___value2, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc)(float, float, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	float returnValue = il2cppPInvokeFunc(___start0, ___end1, ___value2);

	return returnValue;
}
// System.Void HutongGames.PlayMaker.Actions.EaseFsmAction/EasingFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasingFunction__ctor_m65A5CA2502F49CD40C6D53BA1CF89AEEAD775B9B (EasingFunction_t21A9929DE6BD9D0A54275182E77EB836E500CA00 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Single HutongGames.PlayMaker.Actions.EaseFsmAction/EasingFunction::Invoke(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EasingFunction_Invoke_m705238BDCAB56926F454EF5C0F8789E774D3B949 (EasingFunction_t21A9929DE6BD9D0A54275182E77EB836E500CA00 * __this, float ___start0, float ___end1, float ___value2, const RuntimeMethod* method)
{
	float result = 0.0f;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef float (*FunctionPointerType) (float, float, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___start0, ___end1, ___value2, targetMethod);
			}
			else
			{
				// closed
				typedef float (*FunctionPointerType) (void*, float, float, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___start0, ___end1, ___value2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< float, float, float, float >::Invoke(targetMethod, targetThis, ___start0, ___end1, ___value2);
					else
						result = GenericVirtFuncInvoker3< float, float, float, float >::Invoke(targetMethod, targetThis, ___start0, ___end1, ___value2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< float, float, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___start0, ___end1, ___value2);
					else
						result = VirtFuncInvoker3< float, float, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___start0, ___end1, ___value2);
				}
			}
			else
			{
				typedef float (*FunctionPointerType) (void*, float, float, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___start0, ___end1, ___value2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult HutongGames.PlayMaker.Actions.EaseFsmAction/EasingFunction::BeginInvoke(System.Single,System.Single,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EasingFunction_BeginInvoke_m520F92B2686C4B672C7D81EC712C7F565CC287C6 (EasingFunction_t21A9929DE6BD9D0A54275182E77EB836E500CA00 * __this, float ___start0, float ___end1, float ___value2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___start0);
	__d_args[1] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___end1);
	__d_args[2] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___value2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Single HutongGames.PlayMaker.Actions.EaseFsmAction/EasingFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EasingFunction_EndInvoke_m716AA4822A2E6CD3ED3BAC424A445285B50D9CF2 (EasingFunction_t21A9929DE6BD9D0A54275182E77EB836E500CA00 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(float*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_EXTERN_C  float DelegatePInvokeWrapper_Function_t4E4E4D61E1262E637C6DEC6FD07D8E2FC563DB8C (Function_t4E4E4D61E1262E637C6DEC6FD07D8E2FC563DB8C * __this, float ___s0, float ___e1, float ___v2, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc)(float, float, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	float returnValue = il2cppPInvokeFunc(___s0, ___e1, ___v2);

	return returnValue;
}
// System.Void HutongGames.EasingFunction/Function::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Function__ctor_m23FF39E281EE5B1C6D583922BB74C1065862CFD6 (Function_t4E4E4D61E1262E637C6DEC6FD07D8E2FC563DB8C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Single HutongGames.EasingFunction/Function::Invoke(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Function_Invoke_m8215F59DDB79DDF7266ED09486411EC407628C48 (Function_t4E4E4D61E1262E637C6DEC6FD07D8E2FC563DB8C * __this, float ___s0, float ___e1, float ___v2, const RuntimeMethod* method)
{
	float result = 0.0f;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef float (*FunctionPointerType) (float, float, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___s0, ___e1, ___v2, targetMethod);
			}
			else
			{
				// closed
				typedef float (*FunctionPointerType) (void*, float, float, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___s0, ___e1, ___v2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< float, float, float, float >::Invoke(targetMethod, targetThis, ___s0, ___e1, ___v2);
					else
						result = GenericVirtFuncInvoker3< float, float, float, float >::Invoke(targetMethod, targetThis, ___s0, ___e1, ___v2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< float, float, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___s0, ___e1, ___v2);
					else
						result = VirtFuncInvoker3< float, float, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___s0, ___e1, ___v2);
				}
			}
			else
			{
				typedef float (*FunctionPointerType) (void*, float, float, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___s0, ___e1, ___v2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult HutongGames.EasingFunction/Function::BeginInvoke(System.Single,System.Single,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Function_BeginInvoke_m32DDACCE098BA1BCDAF288844E791BE23727490E (Function_t4E4E4D61E1262E637C6DEC6FD07D8E2FC563DB8C * __this, float ___s0, float ___e1, float ___v2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___s0);
	__d_args[1] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___e1);
	__d_args[2] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___v2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Single HutongGames.EasingFunction/Function::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Function_EndInvoke_m2D28C81A3967C6D14E233ED4D5A1DE17005CE623 (Function_t4E4E4D61E1262E637C6DEC6FD07D8E2FC563DB8C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(float*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void HutongGames.PlayMaker.Actions.MathExpression/Property::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property__ctor_m0AF6921381838540F732273E85A1B39E59DF8E7C (Property_t7C58AF94B5215C270A9ABF4C744CDB06CC8E51D9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Mathos.Parser.MathParser/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5DD33A4E8703EEC8C6630F856AEF8C73039E2764 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * L_0 = (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 *)il2cpp_codegen_object_new(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m0CEBD4251334C563EBBBB1AD2935B536FEEA776F(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Mathos.Parser.MathParser/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0CEBD4251334C563EBBBB1AD2935B536FEEA776F (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_0(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_0_m065CC62684463946F59A237FE9D255DE87B0C5C8 (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, double ___a0, double ___b1, const RuntimeMethod* method)
{
	{
		// OperatorAction["%"] = (a, b) => a % b;
		double L_0 = ___a0;
		double L_1 = ___b1;
		return (fmod(L_0, L_1));
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_1(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_1_m646B92102ECBB37F71CEC6E279F28C8D88D6F3A9 (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, double ___a0, double ___b1, const RuntimeMethod* method)
{
	{
		// OperatorAction[":"] = (a, b) => a / b;
		double L_0 = ___a0;
		double L_1 = ___b1;
		return ((double)((double)L_0/(double)L_1));
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_2(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_2_m42A80578E70DF2AD198389FC14E92A0A671D36F2 (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, double ___a0, double ___b1, const RuntimeMethod* method)
{
	{
		// OperatorAction["/"] = (a, b) => a / b;
		double L_0 = ___a0;
		double L_1 = ___b1;
		return ((double)((double)L_0/(double)L_1));
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_3(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_3_mD8E3DCC3B9C12C7982227177DF2411A7C01E2C70 (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, double ___a0, double ___b1, const RuntimeMethod* method)
{
	{
		// OperatorAction["*"] = (a, b) => a * b;
		double L_0 = ___a0;
		double L_1 = ___b1;
		return ((double)il2cpp_codegen_multiply((double)L_0, (double)L_1));
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_4(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_4_m769E7F5FB475F10E86E31B718744550E8C1763EB (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, double ___a0, double ___b1, const RuntimeMethod* method)
{
	{
		// OperatorAction["-"] = (a, b) => a - b;
		double L_0 = ___a0;
		double L_1 = ___b1;
		return ((double)il2cpp_codegen_subtract((double)L_0, (double)L_1));
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_5(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_5_m9AD3096A3144D2DB7D687B0B25E295D40A138779 (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, double ___a0, double ___b1, const RuntimeMethod* method)
{
	{
		// OperatorAction["+"] = (a, b) => a + b;
		double L_0 = ___a0;
		double L_1 = ___b1;
		return ((double)il2cpp_codegen_add((double)L_0, (double)L_1));
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_6(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_6_m8E44663E9E8AE53977D99368233DF22638D76116 (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, double ___a0, double ___b1, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		// OperatorAction[">"] = (a, b) => a > b ? 1 : 0;
		double L_0 = ___a0;
		double L_1 = ___b1;
		if ((((double)L_0) > ((double)L_1)))
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0008;
	}

IL_0007:
	{
		G_B3_0 = 1;
	}

IL_0008:
	{
		return ((double)((double)G_B3_0));
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_7(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_7_m34BBD0C46EAA59C0B0DE6B4146C7A931B2DD54F4 (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, double ___a0, double ___b1, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		// OperatorAction["<"] = (a, b) => a < b ? 1 : 0;
		double L_0 = ___a0;
		double L_1 = ___b1;
		if ((((double)L_0) < ((double)L_1)))
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0008;
	}

IL_0007:
	{
		G_B3_0 = 1;
	}

IL_0008:
	{
		return ((double)((double)G_B3_0));
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_8(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_8_m3F1964AAAF8D488CA697D9F78B228FA987749075 (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, double ___a0, double ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// OperatorAction["="] = (a, b) => Math.Abs(a - b) < 0.00000001 ? 1 : 0;
		double L_0 = ___a0;
		double L_1 = ___b1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = fabs(((double)il2cpp_codegen_subtract((double)L_0, (double)L_1)));
		if ((((double)L_2) < ((double)(1.0E-08))))
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		return ((double)((double)G_B3_0));
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_9(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_9_m95A8A9A59FB75968E196F4CC0E7FC17C28962AE4 (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___inputs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LocalFunctions["abs"] = inputs => Math.Abs(inputs[0]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___inputs0;
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = fabs(L_2);
		return L_3;
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_10(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_10_m99BFC6E03393F3635D010C8FE330C4E1D1C594D7 (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___inputs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LocalFunctions["cos"] = inputs => Math.Cos(inputs[0]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___inputs0;
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = cos(L_2);
		return L_3;
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_11(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_11_mF0E541B49B9C5487169AB01B3C4F7DB2C081F646 (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___inputs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LocalFunctions["cosh"] = inputs => Math.Cosh(inputs[0]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___inputs0;
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = cosh(L_2);
		return L_3;
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_12(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_12_m45F72B8A399FC27067CFAA83AFCC62A95A514B87 (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___inputs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LocalFunctions["acos"] = inputs => Math.Acos(inputs[0]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___inputs0;
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = acos(L_2);
		return L_3;
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_13(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_13_m9E2861BA6519A12836B55B82163AE2D329EB4FCD (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___inputs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LocalFunctions["arccos"] = inputs => Math.Acos(inputs[0]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___inputs0;
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = acos(L_2);
		return L_3;
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_14(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_14_m6066411E471C513AEA40E7CDB6291E80996CC400 (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___inputs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LocalFunctions["sin"] = inputs => Math.Sin(inputs[0]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___inputs0;
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = sin(L_2);
		return L_3;
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_15(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_15_mD9E0FADAE8F5497A854C4C0EFC1369694013A0BA (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___inputs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LocalFunctions["sinh"] = inputs => Math.Sinh(inputs[0]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___inputs0;
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = sinh(L_2);
		return L_3;
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_16(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_16_m48FDF3251DA06E4EF9B72EB1E633959BBEA38E97 (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___inputs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LocalFunctions["asin"] = inputs => Math.Asin(inputs[0]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___inputs0;
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = asin(L_2);
		return L_3;
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_17(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_17_mAE4720E0C699721DE8C8F9C99CF855635CEDEE88 (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___inputs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LocalFunctions["arcsin"] = inputs => Math.Asin(inputs[0]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___inputs0;
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = asin(L_2);
		return L_3;
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_18(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_18_mE5C4D494E55D90E65F3E7B6ED8912165C4B4F6FB (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___inputs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LocalFunctions["tan"] = inputs => Math.Tan(inputs[0]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___inputs0;
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = tan(L_2);
		return L_3;
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_19(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_19_m344C7A89DF1CE398E929A6CA806AECED509CE4C3 (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___inputs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LocalFunctions["tanh"] = inputs => Math.Tanh(inputs[0]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___inputs0;
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = tanh(L_2);
		return L_3;
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_20(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_20_m4EB1C29338CC1996883513C22D4A3DBEBA139C12 (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___inputs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LocalFunctions["atan"] = inputs => Math.Atan(inputs[0]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___inputs0;
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = atan(L_2);
		return L_3;
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_21(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_21_m1985FD47FCD5393D4CE85C8BA9985C7CC40AEE9D (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___inputs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LocalFunctions["arctan"] = inputs => Math.Atan(inputs[0]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___inputs0;
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = atan(L_2);
		return L_3;
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_22(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_22_mFF4D18652D5735531F2F9BF5F2E78B4AF0199378 (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___inputs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LocalFunctions["sqrt"] = inputs => Math.Sqrt(inputs[0]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___inputs0;
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = sqrt(L_2);
		return L_3;
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_23(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_23_m91557B0318CAD1BEB6293FD5293211F3A14F3A2A (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___inputs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LocalFunctions["pow"] = inputs => Math.Pow(inputs[0], inputs[1]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___inputs0;
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_3 = ___inputs0;
		int32_t L_4 = 1;
		double L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = Math_Pow_mC2C8700DAAD1316AA457A1D271F78CDF0D61AC2F(L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_24(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_24_m6DAD591345752405970FF67973F74C1B6D3A84A7 (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___inputs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LocalFunctions["root"] = inputs => Math.Pow(inputs[0], 1 / inputs[1]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___inputs0;
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_3 = ___inputs0;
		int32_t L_4 = 1;
		double L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = Math_Pow_mC2C8700DAAD1316AA457A1D271F78CDF0D61AC2F(L_2, ((double)((double)(1.0)/(double)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_25(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_25_m1D1B60EA9330F55C7348BA9BC4AE1D72455E2D91 (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___inputs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LocalFunctions["rem"] = inputs => Math.IEEERemainder(inputs[0], inputs[1]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___inputs0;
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_3 = ___inputs0;
		int32_t L_4 = 1;
		double L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = Math_IEEERemainder_m2B06020D10636AC81B0DD05AE00C951A24C4186F(L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_26(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_26_m707515439C4A420EF3C5E15D66AA6EB384327707 (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___inputs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LocalFunctions["sign"] = inputs => Math.Sign(inputs[0]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___inputs0;
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Math_Sign_mF70767482E334D3EA66CAD19C6B575FBB2DAF565(L_2, /*hidden argument*/NULL);
		return ((double)((double)L_3));
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_27(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_27_mC19BAEA307A879D7FB86B7F3B55B4B1BDF2B8421 (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___inputs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LocalFunctions["exp"] = inputs => Math.Exp(inputs[0]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___inputs0;
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = exp(L_2);
		return L_3;
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_28(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_28_m599493F31A8AD791FE20C443B5888F45E5F759A8 (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___inputs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LocalFunctions["floor"] = inputs => Math.Floor(inputs[0]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___inputs0;
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = floor(L_2);
		return L_3;
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_29(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_29_mE9FF3B6B85B97D1501F1E808B7420FB7DCB6DBE1 (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___inputs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LocalFunctions["ceil"] = inputs => Math.Ceiling(inputs[0]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___inputs0;
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = ceil(L_2);
		return L_3;
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_30(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_30_m871C26736C974732BB2E092F63256F1F9F930348 (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___inputs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LocalFunctions["ceiling"] = inputs => Math.Ceiling(inputs[0]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___inputs0;
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = ceil(L_2);
		return L_3;
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_31(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_31_mA30C1EA8FD0A9EF43E3D91D9F834ED9B1282CA7A (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___inputs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LocalFunctions["round"] = inputs => Math.Round(inputs[0]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___inputs0;
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = bankers_round(L_2);
		return L_3;
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_32(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_32_m0AC312FA3F681D01F35AEEB572F7417008B1818D (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___inputs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double G_B3_0 = 0.0;
	{
		// LocalFunctions["truncate"] = inputs => inputs[0] < 0 ? -Math.Floor(-inputs[0]) : Math.Floor(inputs[0]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___inputs0;
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		if ((((double)L_2) < ((double)(0.0))))
		{
			goto IL_0018;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_3 = ___inputs0;
		int32_t L_4 = 0;
		double L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = floor(L_5);
		G_B3_0 = L_6;
		goto IL_0022;
	}

IL_0018:
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_7 = ___inputs0;
		int32_t L_8 = 0;
		double L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_10;
		L_10 = floor(((-L_9)));
		G_B3_0 = ((-L_10));
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_33(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_33_m11D3B81D73A9CFC1AD7EA58D4E002A1D003CA51F (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___inputs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	double V_2 = 0.0;
	{
		// switch (inputs.Length)
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___inputs0;
		V_1 = ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_001e;
		}
	}
	{
		goto IL_002c;
	}

IL_0013:
	{
		// return Math.Log10(inputs[0]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_4 = ___inputs0;
		int32_t L_5 = 0;
		double L_6 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_7;
		L_7 = log10(L_6);
		V_2 = L_7;
		goto IL_0038;
	}

IL_001e:
	{
		// return Math.Log(inputs[0], inputs[1]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_8 = ___inputs0;
		int32_t L_9 = 0;
		double L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_11 = ___inputs0;
		int32_t L_12 = 1;
		double L_13 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_14;
		L_14 = Math_Log_m05D6B4CE873ABBA5D8E39F798BBB67D49ABECE2C(L_10, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		goto IL_0038;
	}

IL_002c:
	{
		// return 0;
		V_2 = (0.0);
		goto IL_0038;
	}

IL_0038:
	{
		// };
		double L_15 = V_2;
		return L_15;
	}
}
// System.Double Mathos.Parser.MathParser/<>c::<.ctor>b__20_34(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double U3CU3Ec_U3C_ctorU3Eb__20_34_m1430361674AB83EBED8636B87278898DD7D2F1BB (U3CU3Ec_t5BCDCA864945681A3626AA6CE49430DC1B664073 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___inputs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LocalFunctions["ln"] = inputs => Math.Log(inputs[0]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___inputs0;
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = log(L_2);
		return L_3;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void HutongGames.PlayMaker.Actions.UiButtonArray/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m73EF34EFA5DEE05FEB209B664E12A68E02708FEA (U3CU3Ec__DisplayClass10_0_tBB9CFD4285A7A88C8457754B066FBA85081B4B8C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HutongGames.PlayMaker.Actions.UiButtonArray/<>c__DisplayClass10_0::<OnEnter>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3COnEnterU3Eb__0_m69EE2AE64792C108C5F1B21A11F8FD7E660B73C9 (U3CU3Ec__DisplayClass10_0_tBB9CFD4285A7A88C8457754B066FBA85081B4B8C * __this, const RuntimeMethod* method)
{
	{
		// actions[i] = () => { OnClick(index); };
		UiButtonArray_t5DE403718B30E28AB52D19DB6407C55B9FCABA8F * L_0 = __this->get_U3CU3E4__this_1();
		int32_t L_1 = __this->get_index_0();
		UiButtonArray_OnClick_mBE4F79B4FF9330445ADC819DC8AC60805F845A81(L_0, L_1, /*hidden argument*/NULL);
		// actions[i] = () => { OnClick(index); };
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * FsmStateAction_get_Fsm_mB070E4AB8D6223F26E312624FB53B2C844DED2F2_inline (FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA * __this, const RuntimeMethod* method)
{
	{
		Fsm_t234772DCE02511C7E7AFE3C99F440159D653F39F * L_0 = __this->get_fsm_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FsmOwnerDefault_get_OwnerOption_m2912191C36F5FC05B3D08322DFA16BC9B61D65D2_inline (FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_ownerOption_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FsmGameObject_t7025A28070D5CC87929DD35DECF6025E38BFA994 * FsmOwnerDefault_get_GameObject_m1300CD43FFACCE2B7ED7D1A1A1235BE736A11427_inline (FsmOwnerDefault_t2B4F5E4C748AE60FE6779D77088A052A27570D27 * __this, const RuntimeMethod* method)
{
	{
		FsmGameObject_t7025A28070D5CC87929DD35DECF6025E38BFA994 * L_0 = __this->get_gameObject_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * FsmStateAction_get_Owner_m480BD7FC1EBB2AB5C136ECECE4AC58FB67A18F2F_inline (FsmStateAction_t2543F709D040ACC915075F73A10802AB54C766AA * __this, const RuntimeMethod* method)
{
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_owner_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NamedVariable_set_UseVariable_m0FEF6D0831D13AD751FF464092B5E13E3FF25579_inline (NamedVariable_t20CC71366D75BA6F0A571416C460D87D8A20C54C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_useVariable_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FsmVector3_set_Value_m603D2D8920DB5C4F98FD6BF5BE7D2020D088B6ED_inline (FsmVector3_t064573DA0DA55E7ADD59D064805A3A465403069B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_value_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FsmFloat_set_Value_m5A1CC5BFC4E278438B1ECD7E550146A99D9AA804_inline (FsmFloat_tBF23EA9C8377423A49C3AAC2D5603E6FEAD9EAA0 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_value_6(L_0);
		return;
	}
}
