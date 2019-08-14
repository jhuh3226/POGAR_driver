#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// BoundingBoxRenderer
struct BoundingBoxRenderer_t3223945734;
// DefaultInitializationErrorHandler
struct DefaultInitializationErrorHandler_t3109936861;
// DefaultModelRecoEventHandler
struct DefaultModelRecoEventHandler_t1899894298;
// DefaultTrackableEventHandler
struct DefaultTrackableEventHandler_t1588957063;
// System.Action
struct Action_t1264377477;
// System.Action`1<System.Boolean>
struct Action_1_t269755560;
// System.Action`1<UnityEngine.Font>
struct Action_1_t2129269699;
// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct Action_1_t3593217305;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ObjectTarget>
struct Dictionary_2_t2100965753;
// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder>
struct Dictionary_2_t588711963;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Collections.Generic.IEnumerable`1<Vuforia.ModelTargetBehaviour>
struct IEnumerable_1_t3987798514;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<Vuforia.DataSet>
struct List_1_t463142320;
// System.Collections.Generic.List`1<Vuforia.IObjectRecoEventHandler>
struct List_1_t2783226355;
// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>
struct List_1_t2968050330;
// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>
struct List_1_t905170877;
// System.Collections.Generic.List`1<Vuforia.ModelTargetBehaviour>
struct List_1_t2185053071;
// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>
struct List_1_t619090059;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t3759279471;
// System.Func`2<Vuforia.ModelTargetBehaviour,System.Boolean>
struct Func_2_t1155892566;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t3309123499;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t682926938;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t4234922487;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Font
struct Font_t1956802104;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t2467502454;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t3146511083;
// UnityEngine.GUIStyle
struct GUIStyle_t3956901511;
// UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.MeshRenderer
struct MeshRenderer_t587009260;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Plane[]
struct PlaneU5BU5D_t3656189108;
// UnityEngine.RectOffset
struct RectOffset_t1369453676;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t3210418286;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// Vuforia.DigitalEyewearARController
struct DigitalEyewearARController_t1054226036;
// Vuforia.DigitalEyewearARController/SerializableViewerParameters
struct SerializableViewerParameters_t2043332680;
// Vuforia.ICameraConfiguration
struct ICameraConfiguration_t283990539;
// Vuforia.IObjectRecoEventHandler
struct IObjectRecoEventHandler_t1311151613;
// Vuforia.ITrackableEventHandler
struct ITrackableEventHandler_t1495975588;
// Vuforia.ITrackerManager
struct ITrackerManager_t607206903;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t2430893908;
// Vuforia.InternalModelTarget
struct InternalModelTarget_t456317394;
// Vuforia.ModelRecoBehaviour
struct ModelRecoBehaviour_t2312633019;
// Vuforia.ModelTarget
struct ModelTarget_t66867180;
// Vuforia.ModelTargetBehaviour
struct ModelTargetBehaviour_t712978329;
// Vuforia.ModelTargetBehaviour[]
struct ModelTargetBehaviourU5BU5D_t240552420;
// Vuforia.ObjectRecoBehaviour
struct ObjectRecoBehaviour_t2762250941;
// Vuforia.ObjectTracker
struct ObjectTracker_t4177997237;
// Vuforia.PositionalDeviceTracker
struct PositionalDeviceTracker_t656722001;
// Vuforia.TargetFinder
struct TargetFinder_t2439332195;
// Vuforia.TargetFinder/ModelRecoSearchResult
struct ModelRecoSearchResult_t2344666983;
// Vuforia.TargetFinder/TargetSearchResult
struct TargetSearchResult_t3441982613;
// Vuforia.Trackable
struct Trackable_t2451999991;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1113559212;
// Vuforia.VRDeviceController
struct VRDeviceController_t3863472269;
// Vuforia.VuforiaARController
struct VuforiaARController_t1876945237;
// Vuforia.VuforiaBehaviour
struct VuforiaBehaviour_t2151848540;
// Vuforia.VuforiaConfiguration
struct VuforiaConfiguration_t1763229349;
// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration
struct DeviceTrackerConfiguration_t721467671;
// Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration
struct DigitalEyewearConfiguration_t546560202;
// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration
struct GenericVuforiaConfiguration_t3697830469;
// Vuforia.VuforiaConfiguration/SmartTerrainConfiguration
struct SmartTerrainConfiguration_t1514074484;
// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration
struct VideoBackgroundConfiguration_t3392414655;
// Vuforia.VuforiaConfiguration/WebCamConfiguration
struct WebCamConfiguration_t1101614731;
// Vuforia.VuforiaRuntime
struct VuforiaRuntime_t1949122020;
// VuforiaMonoBehaviour
struct VuforiaMonoBehaviour_t1150221792;

extern RuntimeClass* Action_1_t3593217305_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* DefaultModelRecoEventHandler_t1899894298_il2cpp_TypeInfo_var;
extern RuntimeClass* DigitalEyewearARController_t1054226036_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t1155892566_il2cpp_TypeInfo_var;
extern RuntimeClass* GUIStyle_t3956901511_il2cpp_TypeInfo_var;
extern RuntimeClass* GUI_t1624858472_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern RuntimeClass* InitError_t3420749710_il2cpp_TypeInfo_var;
extern RuntimeClass* InitState_t538152685_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* Material_t340375123_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* ModelRecoSearchResult_t2344666983_il2cpp_TypeInfo_var;
extern RuntimeClass* ModelTargetBehaviour_t712978329_il2cpp_TypeInfo_var;
extern RuntimeClass* ModelTarget_t66867180_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern RuntimeClass* RectOffset_t1369453676_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Texture2D_t3840446185_il2cpp_TypeInfo_var;
extern RuntimeClass* Trackable_t2451999991_il2cpp_TypeInfo_var;
extern RuntimeClass* UpdateState_t1279515537_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* VuforiaARController_t1876945237_il2cpp_TypeInfo_var;
extern RuntimeClass* VuforiaConfiguration_t1763229349_il2cpp_TypeInfo_var;
extern RuntimeClass* VuforiaRuntime_t1949122020_il2cpp_TypeInfo_var;
extern RuntimeClass* WindowFunction_t3146511083_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1108443480;
extern String_t* _stringLiteral113129142;
extern String_t* _stringLiteral1274569038;
extern String_t* _stringLiteral1431967569;
extern String_t* _stringLiteral1443903581;
extern String_t* _stringLiteral1493258606;
extern String_t* _stringLiteral1498400317;
extern String_t* _stringLiteral1772667862;
extern String_t* _stringLiteral1830904685;
extern String_t* _stringLiteral1844011637;
extern String_t* _stringLiteral2007731032;
extern String_t* _stringLiteral2041662187;
extern String_t* _stringLiteral2072581803;
extern String_t* _stringLiteral2072975055;
extern String_t* _stringLiteral2078408139;
extern String_t* _stringLiteral229317972;
extern String_t* _stringLiteral2293327149;
extern String_t* _stringLiteral230305671;
extern String_t* _stringLiteral2368256712;
extern String_t* _stringLiteral2437766712;
extern String_t* _stringLiteral2642543365;
extern String_t* _stringLiteral2746077084;
extern String_t* _stringLiteral2959890895;
extern String_t* _stringLiteral2974894664;
extern String_t* _stringLiteral2981165936;
extern String_t* _stringLiteral3073488411;
extern String_t* _stringLiteral3107087099;
extern String_t* _stringLiteral3183081100;
extern String_t* _stringLiteral3452614528;
extern String_t* _stringLiteral3452614641;
extern String_t* _stringLiteral3453007782;
extern String_t* _stringLiteral3483481617;
extern String_t* _stringLiteral3483484711;
extern String_t* _stringLiteral3797279721;
extern String_t* _stringLiteral3820270571;
extern String_t* _stringLiteral3956703359;
extern String_t* _stringLiteral4215120540;
extern String_t* _stringLiteral491174246;
extern String_t* _stringLiteral59887064;
extern String_t* _stringLiteral604358790;
extern String_t* _stringLiteral804407930;
extern String_t* _stringLiteral868600955;
extern String_t* _stringLiteral904309638;
extern const RuntimeMethod* Action_1__ctor_m2713332384_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisModelRecoBehaviour_t2312633019_m4226608877_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisCanvas_t3310196443_m1479281147_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var;
extern const RuntimeMethod* DefaultInitializationErrorHandler_DrawWindowContent_m3171003143_RuntimeMethod_var;
extern const RuntimeMethod* DefaultInitializationErrorHandler_OnVuforiaInitializationError_m3498850087_RuntimeMethod_var;
extern const RuntimeMethod* DefaultModelRecoEventHandler_U3CFindExistingModelTargetU3Em__0_m506785536_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToArray_TisModelTargetBehaviour_t712978329_m2713120712_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToList_TisModelTargetBehaviour_t712978329_m1512531048_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Where_TisModelTargetBehaviour_t712978329_m2189177002_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m2330586455_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisBoundingBoxRenderer_t3223945734_m2281293885_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t587009260_m1904099017_RuntimeMethod_var;
extern const RuntimeMethod* ITrackerManager_GetTracker_TisObjectTracker_t4177997237_m1548597255_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var;
extern const RuntimeMethod* Resources_FindObjectsOfTypeAll_TisModelTargetBehaviour_t712978329_m2409703281_RuntimeMethod_var;
extern const RuntimeMethod* Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830_RuntimeMethod_var;
extern const uint32_t BoundingBoxRenderer_OnRenderObject_m825095911_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_Awake_m2464808560_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_CreateSinglePixelTexture_m3383403409_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_DrawWindowContent_m3171003143_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_OnDestroy_m1669200062_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_OnGUI_m440136624_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_SetErrorCode_m594938833_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_SetupGUIStyles_m1676302763_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler__ctor_m2502050417_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_getKeyInfo_m3940778236_MetadataUsageId;
extern const uint32_t DefaultModelRecoEventHandler_CreateBoundingBox_m4103029589_MetadataUsageId;
extern const uint32_t DefaultModelRecoEventHandler_FindExistingModelTarget_m2602418696_MetadataUsageId;
extern const uint32_t DefaultModelRecoEventHandler_GetModelTargetWorldBounds_m2581221330_MetadataUsageId;
extern const uint32_t DefaultModelRecoEventHandler_IsModelTrackedInView_m2762291640_MetadataUsageId;
extern const uint32_t DefaultModelRecoEventHandler_OnDestroy_m1566504237_MetadataUsageId;
extern const uint32_t DefaultModelRecoEventHandler_OnInitError_m227334212_MetadataUsageId;
extern const uint32_t DefaultModelRecoEventHandler_OnInitialized_m1166165534_MetadataUsageId;
extern const uint32_t DefaultModelRecoEventHandler_OnNewSearchResult_m600664621_MetadataUsageId;
extern const uint32_t DefaultModelRecoEventHandler_OnStateChanged_m3071975502_MetadataUsageId;
extern const uint32_t DefaultModelRecoEventHandler_OnUpdateError_m3553734370_MetadataUsageId;
extern const uint32_t DefaultModelRecoEventHandler_ResetModelReco_m544517377_MetadataUsageId;
extern const uint32_t DefaultModelRecoEventHandler_ShowErrorMessageInUI_m2318961360_MetadataUsageId;
extern const uint32_t DefaultModelRecoEventHandler_Start_m1367192129_MetadataUsageId;
extern const uint32_t DefaultModelRecoEventHandler_Update_m247953367_MetadataUsageId;
extern const uint32_t DefaultTrackableEventHandler_OnDestroy_m3526422712_MetadataUsageId;
extern const uint32_t DefaultTrackableEventHandler_OnTrackableStateChanged_m615981434_MetadataUsageId;
extern const uint32_t DefaultTrackableEventHandler_OnTrackingFound_m2146197130_MetadataUsageId;
extern const uint32_t DefaultTrackableEventHandler_OnTrackingLost_m2776455481_MetadataUsageId;
extern const uint32_t DefaultTrackableEventHandler_Start_m3259365141_MetadataUsageId;
struct GUIStyleState_t1397964415_marshaled_com;
struct GUIStyleState_t1397964415_marshaled_pinvoke;
struct GUIStyle_t3956901511_marshaled_com;
struct GUIStyle_t3956901511_marshaled_pinvoke;
struct RectOffset_t1369453676_marshaled_com;

struct ObjectU5BU5D_t2843939325;
struct CanvasU5BU5D_t682926938;
struct ColliderU5BU5D_t4234922487;
struct PlaneU5BU5D_t3656189108;
struct RendererU5BU5D_t3210418286;
struct ModelTargetBehaviourU5BU5D_t240552420;


#ifndef U3CMODULEU3E_T692745549_H
#define U3CMODULEU3E_T692745549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745549 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745549_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T2185053071_H
#define LIST_1_T2185053071_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Vuforia.ModelTargetBehaviour>
struct  List_1_t2185053071  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ModelTargetBehaviourU5BU5D_t240552420* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2185053071, ____items_1)); }
	inline ModelTargetBehaviourU5BU5D_t240552420* get__items_1() const { return ____items_1; }
	inline ModelTargetBehaviourU5BU5D_t240552420** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ModelTargetBehaviourU5BU5D_t240552420* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2185053071, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2185053071, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2185053071_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ModelTargetBehaviourU5BU5D_t240552420* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2185053071_StaticFields, ___EmptyArray_4)); }
	inline ModelTargetBehaviourU5BU5D_t240552420* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ModelTargetBehaviourU5BU5D_t240552420** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ModelTargetBehaviourU5BU5D_t240552420* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2185053071_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef ARCONTROLLER_T116632334_H
#define ARCONTROLLER_T116632334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ARController
struct  ARController_t116632334  : public RuntimeObject
{
public:
	// Vuforia.VuforiaBehaviour Vuforia.ARController::mVuforiaBehaviour
	VuforiaBehaviour_t2151848540 * ___mVuforiaBehaviour_0;

public:
	inline static int32_t get_offset_of_mVuforiaBehaviour_0() { return static_cast<int32_t>(offsetof(ARController_t116632334, ___mVuforiaBehaviour_0)); }
	inline VuforiaBehaviour_t2151848540 * get_mVuforiaBehaviour_0() const { return ___mVuforiaBehaviour_0; }
	inline VuforiaBehaviour_t2151848540 ** get_address_of_mVuforiaBehaviour_0() { return &___mVuforiaBehaviour_0; }
	inline void set_mVuforiaBehaviour_0(VuforiaBehaviour_t2151848540 * value)
	{
		___mVuforiaBehaviour_0 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARCONTROLLER_T116632334_H
#ifndef TRACKER_T2709586299_H
#define TRACKER_T2709586299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Tracker
struct  Tracker_t2709586299  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.Tracker::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Tracker_t2709586299, ___U3CIsActiveU3Ek__BackingField_0)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_0() const { return ___U3CIsActiveU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_0() { return &___U3CIsActiveU3Ek__BackingField_0; }
	inline void set_U3CIsActiveU3Ek__BackingField_0(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKER_T2709586299_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
{
public:
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

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
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
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef OBJECTTRACKER_T4177997237_H
#define OBJECTTRACKER_T4177997237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ObjectTracker
struct  ObjectTracker_t4177997237  : public Tracker_t2709586299
{
public:
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.ObjectTracker::mActiveDataSets
	List_1_t463142320 * ___mActiveDataSets_1;
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.ObjectTracker::mDataSets
	List_1_t463142320 * ___mDataSets_2;
	// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder> Vuforia.ObjectTracker::mTargetFinders
	Dictionary_2_t588711963 * ___mTargetFinders_3;
	// Vuforia.ImageTargetBuilder Vuforia.ObjectTracker::mImageTargetBuilder
	ImageTargetBuilder_t2430893908 * ___mImageTargetBuilder_4;

public:
	inline static int32_t get_offset_of_mActiveDataSets_1() { return static_cast<int32_t>(offsetof(ObjectTracker_t4177997237, ___mActiveDataSets_1)); }
	inline List_1_t463142320 * get_mActiveDataSets_1() const { return ___mActiveDataSets_1; }
	inline List_1_t463142320 ** get_address_of_mActiveDataSets_1() { return &___mActiveDataSets_1; }
	inline void set_mActiveDataSets_1(List_1_t463142320 * value)
	{
		___mActiveDataSets_1 = value;
		Il2CppCodeGenWriteBarrier((&___mActiveDataSets_1), value);
	}

	inline static int32_t get_offset_of_mDataSets_2() { return static_cast<int32_t>(offsetof(ObjectTracker_t4177997237, ___mDataSets_2)); }
	inline List_1_t463142320 * get_mDataSets_2() const { return ___mDataSets_2; }
	inline List_1_t463142320 ** get_address_of_mDataSets_2() { return &___mDataSets_2; }
	inline void set_mDataSets_2(List_1_t463142320 * value)
	{
		___mDataSets_2 = value;
		Il2CppCodeGenWriteBarrier((&___mDataSets_2), value);
	}

	inline static int32_t get_offset_of_mTargetFinders_3() { return static_cast<int32_t>(offsetof(ObjectTracker_t4177997237, ___mTargetFinders_3)); }
	inline Dictionary_2_t588711963 * get_mTargetFinders_3() const { return ___mTargetFinders_3; }
	inline Dictionary_2_t588711963 ** get_address_of_mTargetFinders_3() { return &___mTargetFinders_3; }
	inline void set_mTargetFinders_3(Dictionary_2_t588711963 * value)
	{
		___mTargetFinders_3 = value;
		Il2CppCodeGenWriteBarrier((&___mTargetFinders_3), value);
	}

	inline static int32_t get_offset_of_mImageTargetBuilder_4() { return static_cast<int32_t>(offsetof(ObjectTracker_t4177997237, ___mImageTargetBuilder_4)); }
	inline ImageTargetBuilder_t2430893908 * get_mImageTargetBuilder_4() const { return ___mImageTargetBuilder_4; }
	inline ImageTargetBuilder_t2430893908 ** get_address_of_mImageTargetBuilder_4() { return &___mImageTargetBuilder_4; }
	inline void set_mImageTargetBuilder_4(ImageTargetBuilder_t2430893908 * value)
	{
		___mImageTargetBuilder_4 = value;
		Il2CppCodeGenWriteBarrier((&___mImageTargetBuilder_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTTRACKER_T4177997237_H
#ifndef TARGETFINDERSTATE_T3286805956_H
#define TARGETFINDERSTATE_T3286805956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TargetFinder/TargetFinderState
#pragma pack(push, tp, 1)
struct  TargetFinderState_t3286805956 
{
public:
	// System.Int32 Vuforia.TargetFinder/TargetFinderState::IsRequesting
	int32_t ___IsRequesting_0;
	// System.Int32 Vuforia.TargetFinder/TargetFinderState::UpdateState
	int32_t ___UpdateState_1;

public:
	inline static int32_t get_offset_of_IsRequesting_0() { return static_cast<int32_t>(offsetof(TargetFinderState_t3286805956, ___IsRequesting_0)); }
	inline int32_t get_IsRequesting_0() const { return ___IsRequesting_0; }
	inline int32_t* get_address_of_IsRequesting_0() { return &___IsRequesting_0; }
	inline void set_IsRequesting_0(int32_t value)
	{
		___IsRequesting_0 = value;
	}

	inline static int32_t get_offset_of_UpdateState_1() { return static_cast<int32_t>(offsetof(TargetFinderState_t3286805956, ___UpdateState_1)); }
	inline int32_t get_UpdateState_1() const { return ___UpdateState_1; }
	inline int32_t* get_address_of_UpdateState_1() { return &___UpdateState_1; }
	inline void set_UpdateState_1(int32_t value)
	{
		___UpdateState_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETFINDERSTATE_T3286805956_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef BOUNDS_T2266837910_H
#define BOUNDS_T2266837910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t2266837910 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t3722313464  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t3722313464  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Center_0)); }
	inline Vector3_t3722313464  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t3722313464 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t3722313464  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Extents_1)); }
	inline Vector3_t3722313464  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t3722313464 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t3722313464  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T2266837910_H
#ifndef GUISTYLESTATE_T1397964415_H
#define GUISTYLESTATE_T1397964415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyleState
struct  GUIStyleState_t1397964415  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t3956901511 * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_SourceStyle_1)); }
	inline GUIStyle_t3956901511 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t3956901511 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t3956901511 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t3956901511_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t3956901511_marshaled_com* ___m_SourceStyle_1;
};
#endif // GUISTYLESTATE_T1397964415_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef PLANE_T1000493321_H
#define PLANE_T1000493321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Plane
struct  Plane_t1000493321 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t3722313464  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t1000493321, ___m_Normal_0)); }
	inline Vector3_t3722313464  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_t3722313464  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t1000493321, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANE_T1000493321_H
#ifndef PRIMITIVETYPE_T3468579401_H
#define PRIMITIVETYPE_T3468579401_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PrimitiveType
struct  PrimitiveType_t3468579401 
{
public:
	// System.Int32 UnityEngine.PrimitiveType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PrimitiveType_t3468579401, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMITIVETYPE_T3468579401_H
#ifndef RECTOFFSET_T1369453676_H
#define RECTOFFSET_T1369453676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_t1369453676  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
#endif // RECTOFFSET_T1369453676_H
#ifndef TEXTANCHOR_T2035777396_H
#define TEXTANCHOR_T2035777396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAnchor
struct  TextAnchor_t2035777396 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextAnchor_t2035777396, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTANCHOR_T2035777396_H
#ifndef TEXTUREFORMAT_T2701165832_H
#define TEXTUREFORMAT_T2701165832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t2701165832 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureFormat_t2701165832, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREFORMAT_T2701165832_H
#ifndef CAMERADEVICEMODE_T2478715656_H
#define CAMERADEVICEMODE_T2478715656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDeviceMode
struct  CameraDeviceMode_t2478715656 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDeviceMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraDeviceMode_t2478715656, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADEVICEMODE_T2478715656_H
#ifndef CAMERADIRECTION_T637748435_H
#define CAMERADIRECTION_T637748435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDirection
struct  CameraDirection_t637748435 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraDirection_t637748435, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADIRECTION_T637748435_H
#ifndef EYEWEARTYPE_T2277580470_H
#define EYEWEARTYPE_T2277580470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController/EyewearType
struct  EyewearType_t2277580470 
{
public:
	// System.Int32 Vuforia.DigitalEyewearARController/EyewearType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EyewearType_t2277580470, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EYEWEARTYPE_T2277580470_H
#ifndef SEETHROUGHCONFIGURATION_T568665021_H
#define SEETHROUGHCONFIGURATION_T568665021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController/SeeThroughConfiguration
struct  SeeThroughConfiguration_t568665021 
{
public:
	// System.Int32 Vuforia.DigitalEyewearARController/SeeThroughConfiguration::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SeeThroughConfiguration_t568665021, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEETHROUGHCONFIGURATION_T568665021_H
#ifndef STEREOFRAMEWORK_T3144873991_H
#define STEREOFRAMEWORK_T3144873991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController/StereoFramework
struct  StereoFramework_t3144873991 
{
public:
	// System.Int32 Vuforia.DigitalEyewearARController/StereoFramework::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StereoFramework_t3144873991, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STEREOFRAMEWORK_T3144873991_H
#ifndef GUIDEVIEWDISPLAYMODE_T3044577557_H
#define GUIDEVIEWDISPLAYMODE_T3044577557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ModelTargetBehaviour/GuideViewDisplayMode
struct  GuideViewDisplayMode_t3044577557 
{
public:
	// System.Int32 Vuforia.ModelTargetBehaviour/GuideViewDisplayMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GuideViewDisplayMode_t3044577557, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDEVIEWDISPLAYMODE_T3044577557_H
#ifndef MODELTARGETTYPE_T1938212705_H
#define MODELTARGETTYPE_T1938212705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ModelTargetType
struct  ModelTargetType_t1938212705 
{
public:
	// System.Int32 Vuforia.ModelTargetType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ModelTargetType_t1938212705, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODELTARGETTYPE_T1938212705_H
#ifndef ORIENTEDBOUNDINGBOX3D_T4089508388_H
#define ORIENTEDBOUNDINGBOX3D_T4089508388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.OrientedBoundingBox3D
struct  OrientedBoundingBox3D_t4089508388 
{
public:
	// UnityEngine.Vector3 Vuforia.OrientedBoundingBox3D::<Center>k__BackingField
	Vector3_t3722313464  ___U3CCenterU3Ek__BackingField_0;
	// UnityEngine.Vector3 Vuforia.OrientedBoundingBox3D::<HalfExtents>k__BackingField
	Vector3_t3722313464  ___U3CHalfExtentsU3Ek__BackingField_1;
	// System.Single Vuforia.OrientedBoundingBox3D::<RotationY>k__BackingField
	float ___U3CRotationYU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CCenterU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(OrientedBoundingBox3D_t4089508388, ___U3CCenterU3Ek__BackingField_0)); }
	inline Vector3_t3722313464  get_U3CCenterU3Ek__BackingField_0() const { return ___U3CCenterU3Ek__BackingField_0; }
	inline Vector3_t3722313464 * get_address_of_U3CCenterU3Ek__BackingField_0() { return &___U3CCenterU3Ek__BackingField_0; }
	inline void set_U3CCenterU3Ek__BackingField_0(Vector3_t3722313464  value)
	{
		___U3CCenterU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CHalfExtentsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(OrientedBoundingBox3D_t4089508388, ___U3CHalfExtentsU3Ek__BackingField_1)); }
	inline Vector3_t3722313464  get_U3CHalfExtentsU3Ek__BackingField_1() const { return ___U3CHalfExtentsU3Ek__BackingField_1; }
	inline Vector3_t3722313464 * get_address_of_U3CHalfExtentsU3Ek__BackingField_1() { return &___U3CHalfExtentsU3Ek__BackingField_1; }
	inline void set_U3CHalfExtentsU3Ek__BackingField_1(Vector3_t3722313464  value)
	{
		___U3CHalfExtentsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CRotationYU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(OrientedBoundingBox3D_t4089508388, ___U3CRotationYU3Ek__BackingField_2)); }
	inline float get_U3CRotationYU3Ek__BackingField_2() const { return ___U3CRotationYU3Ek__BackingField_2; }
	inline float* get_address_of_U3CRotationYU3Ek__BackingField_2() { return &___U3CRotationYU3Ek__BackingField_2; }
	inline void set_U3CRotationYU3Ek__BackingField_2(float value)
	{
		___U3CRotationYU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORIENTEDBOUNDINGBOX3D_T4089508388_H
#ifndef TARGETFINDER_T2439332195_H
#define TARGETFINDER_T2439332195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TargetFinder
struct  TargetFinder_t2439332195  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.TargetFinder::mTargetFinderPtr
	intptr_t ___mTargetFinderPtr_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ObjectTarget> Vuforia.TargetFinder::mTargets
	Dictionary_2_t2100965753 * ___mTargets_1;
	// System.IntPtr Vuforia.TargetFinder::mTargetFinderStatePtr
	intptr_t ___mTargetFinderStatePtr_2;
	// Vuforia.TargetFinder/TargetFinderState Vuforia.TargetFinder::mTargetFinderState
	TargetFinderState_t3286805956  ___mTargetFinderState_3;
	// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult> Vuforia.TargetFinder::mNewResults
	List_1_t619090059 * ___mNewResults_4;

public:
	inline static int32_t get_offset_of_mTargetFinderPtr_0() { return static_cast<int32_t>(offsetof(TargetFinder_t2439332195, ___mTargetFinderPtr_0)); }
	inline intptr_t get_mTargetFinderPtr_0() const { return ___mTargetFinderPtr_0; }
	inline intptr_t* get_address_of_mTargetFinderPtr_0() { return &___mTargetFinderPtr_0; }
	inline void set_mTargetFinderPtr_0(intptr_t value)
	{
		___mTargetFinderPtr_0 = value;
	}

	inline static int32_t get_offset_of_mTargets_1() { return static_cast<int32_t>(offsetof(TargetFinder_t2439332195, ___mTargets_1)); }
	inline Dictionary_2_t2100965753 * get_mTargets_1() const { return ___mTargets_1; }
	inline Dictionary_2_t2100965753 ** get_address_of_mTargets_1() { return &___mTargets_1; }
	inline void set_mTargets_1(Dictionary_2_t2100965753 * value)
	{
		___mTargets_1 = value;
		Il2CppCodeGenWriteBarrier((&___mTargets_1), value);
	}

	inline static int32_t get_offset_of_mTargetFinderStatePtr_2() { return static_cast<int32_t>(offsetof(TargetFinder_t2439332195, ___mTargetFinderStatePtr_2)); }
	inline intptr_t get_mTargetFinderStatePtr_2() const { return ___mTargetFinderStatePtr_2; }
	inline intptr_t* get_address_of_mTargetFinderStatePtr_2() { return &___mTargetFinderStatePtr_2; }
	inline void set_mTargetFinderStatePtr_2(intptr_t value)
	{
		___mTargetFinderStatePtr_2 = value;
	}

	inline static int32_t get_offset_of_mTargetFinderState_3() { return static_cast<int32_t>(offsetof(TargetFinder_t2439332195, ___mTargetFinderState_3)); }
	inline TargetFinderState_t3286805956  get_mTargetFinderState_3() const { return ___mTargetFinderState_3; }
	inline TargetFinderState_t3286805956 * get_address_of_mTargetFinderState_3() { return &___mTargetFinderState_3; }
	inline void set_mTargetFinderState_3(TargetFinderState_t3286805956  value)
	{
		___mTargetFinderState_3 = value;
	}

	inline static int32_t get_offset_of_mNewResults_4() { return static_cast<int32_t>(offsetof(TargetFinder_t2439332195, ___mNewResults_4)); }
	inline List_1_t619090059 * get_mNewResults_4() const { return ___mNewResults_4; }
	inline List_1_t619090059 ** get_address_of_mNewResults_4() { return &___mNewResults_4; }
	inline void set_mNewResults_4(List_1_t619090059 * value)
	{
		___mNewResults_4 = value;
		Il2CppCodeGenWriteBarrier((&___mNewResults_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETFINDER_T2439332195_H
#ifndef INITSTATE_T538152685_H
#define INITSTATE_T538152685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TargetFinder/InitState
struct  InitState_t538152685 
{
public:
	// System.Int32 Vuforia.TargetFinder/InitState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InitState_t538152685, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITSTATE_T538152685_H
#ifndef TARGETSEARCHRESULT_T3441982613_H
#define TARGETSEARCHRESULT_T3441982613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TargetFinder/TargetSearchResult
struct  TargetSearchResult_t3441982613  : public RuntimeObject
{
public:
	// System.String Vuforia.TargetFinder/TargetSearchResult::TargetName
	String_t* ___TargetName_0;
	// System.String Vuforia.TargetFinder/TargetSearchResult::UniqueTargetId
	String_t* ___UniqueTargetId_1;
	// System.IntPtr Vuforia.TargetFinder/TargetSearchResult::TargetSearchResultPtr
	intptr_t ___TargetSearchResultPtr_2;

public:
	inline static int32_t get_offset_of_TargetName_0() { return static_cast<int32_t>(offsetof(TargetSearchResult_t3441982613, ___TargetName_0)); }
	inline String_t* get_TargetName_0() const { return ___TargetName_0; }
	inline String_t** get_address_of_TargetName_0() { return &___TargetName_0; }
	inline void set_TargetName_0(String_t* value)
	{
		___TargetName_0 = value;
		Il2CppCodeGenWriteBarrier((&___TargetName_0), value);
	}

	inline static int32_t get_offset_of_UniqueTargetId_1() { return static_cast<int32_t>(offsetof(TargetSearchResult_t3441982613, ___UniqueTargetId_1)); }
	inline String_t* get_UniqueTargetId_1() const { return ___UniqueTargetId_1; }
	inline String_t** get_address_of_UniqueTargetId_1() { return &___UniqueTargetId_1; }
	inline void set_UniqueTargetId_1(String_t* value)
	{
		___UniqueTargetId_1 = value;
		Il2CppCodeGenWriteBarrier((&___UniqueTargetId_1), value);
	}

	inline static int32_t get_offset_of_TargetSearchResultPtr_2() { return static_cast<int32_t>(offsetof(TargetSearchResult_t3441982613, ___TargetSearchResultPtr_2)); }
	inline intptr_t get_TargetSearchResultPtr_2() const { return ___TargetSearchResultPtr_2; }
	inline intptr_t* get_address_of_TargetSearchResultPtr_2() { return &___TargetSearchResultPtr_2; }
	inline void set_TargetSearchResultPtr_2(intptr_t value)
	{
		___TargetSearchResultPtr_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETSEARCHRESULT_T3441982613_H
#ifndef UPDATESTATE_T1279515537_H
#define UPDATESTATE_T1279515537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TargetFinder/UpdateState
struct  UpdateState_t1279515537 
{
public:
	// System.Int32 Vuforia.TargetFinder/UpdateState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UpdateState_t1279515537, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATESTATE_T1279515537_H
#ifndef STATUS_T1100905814_H
#define STATUS_T1100905814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour/Status
struct  Status_t1100905814 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour/Status::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Status_t1100905814, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATUS_T1100905814_H
#ifndef WORLDCENTERMODE_T3672819471_H
#define WORLDCENTERMODE_T3672819471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaARController/WorldCenterMode
struct  WorldCenterMode_t3672819471 
{
public:
	// System.Int32 Vuforia.VuforiaARController/WorldCenterMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WorldCenterMode_t3672819471, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORLDCENTERMODE_T3672819471_H
#ifndef VIDEOBACKGROUNDREFLECTION_T736962841_H
#define VIDEOBACKGROUNDREFLECTION_T736962841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/VideoBackgroundReflection
struct  VideoBackgroundReflection_t736962841 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/VideoBackgroundReflection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VideoBackgroundReflection_t736962841, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOBACKGROUNDREFLECTION_T736962841_H
#ifndef INITSTATE_T3374939742_H
#define INITSTATE_T3374939742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRuntime/InitState
struct  InitState_t3374939742 
{
public:
	// System.Int32 Vuforia.VuforiaRuntime/InitState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InitState_t3374939742, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITSTATE_T3374939742_H
#ifndef INITERROR_T3420749710_H
#define INITERROR_T3420749710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaUnity/InitError
struct  InitError_t3420749710 
{
public:
	// System.Int32 Vuforia.VuforiaUnity/InitError::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InitError_t3420749710, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITERROR_T3420749710_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef FONT_T1956802104_H
#define FONT_T1956802104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Font
struct  Font_t1956802104  : public Object_t631007953
{
public:
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t2467502454 * ___m_FontTextureRebuildCallback_5;

public:
	inline static int32_t get_offset_of_m_FontTextureRebuildCallback_5() { return static_cast<int32_t>(offsetof(Font_t1956802104, ___m_FontTextureRebuildCallback_5)); }
	inline FontTextureRebuildCallback_t2467502454 * get_m_FontTextureRebuildCallback_5() const { return ___m_FontTextureRebuildCallback_5; }
	inline FontTextureRebuildCallback_t2467502454 ** get_address_of_m_FontTextureRebuildCallback_5() { return &___m_FontTextureRebuildCallback_5; }
	inline void set_m_FontTextureRebuildCallback_5(FontTextureRebuildCallback_t2467502454 * value)
	{
		___m_FontTextureRebuildCallback_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontTextureRebuildCallback_5), value);
	}
};

struct Font_t1956802104_StaticFields
{
public:
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_t2129269699 * ___textureRebuilt_4;

public:
	inline static int32_t get_offset_of_textureRebuilt_4() { return static_cast<int32_t>(offsetof(Font_t1956802104_StaticFields, ___textureRebuilt_4)); }
	inline Action_1_t2129269699 * get_textureRebuilt_4() const { return ___textureRebuilt_4; }
	inline Action_1_t2129269699 ** get_address_of_textureRebuilt_4() { return &___textureRebuilt_4; }
	inline void set_textureRebuilt_4(Action_1_t2129269699 * value)
	{
		___textureRebuilt_4 = value;
		Il2CppCodeGenWriteBarrier((&___textureRebuilt_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONT_T1956802104_H
#ifndef GUISTYLE_T3956901511_H
#define GUISTYLE_T3956901511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyle
struct  GUIStyle_t3956901511  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t1397964415 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t1397964415 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t1397964415 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t1397964415 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t1397964415 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t1397964415 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t1397964415 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t1397964415 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t1369453676 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t1369453676 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t1369453676 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t1369453676 * ___m_Overflow_12;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Normal_1)); }
	inline GUIStyleState_t1397964415 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_t1397964415 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Normal_1), value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Hover_2)); }
	inline GUIStyleState_t1397964415 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_t1397964415 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Hover_2), value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Active_3)); }
	inline GUIStyleState_t1397964415 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_t1397964415 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Active_3), value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Focused_4)); }
	inline GUIStyleState_t1397964415 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_t1397964415 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Focused_4), value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnNormal_5)); }
	inline GUIStyleState_t1397964415 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_t1397964415 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnNormal_5), value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnHover_6)); }
	inline GUIStyleState_t1397964415 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_t1397964415 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnHover_6), value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnActive_7)); }
	inline GUIStyleState_t1397964415 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_t1397964415 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnActive_7), value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnFocused_8)); }
	inline GUIStyleState_t1397964415 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_t1397964415 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnFocused_8), value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Border_9)); }
	inline RectOffset_t1369453676 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_t1369453676 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_t1369453676 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Border_9), value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Padding_10)); }
	inline RectOffset_t1369453676 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_t1369453676 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_t1369453676 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Padding_10), value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Margin_11)); }
	inline RectOffset_t1369453676 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_t1369453676 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_t1369453676 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Margin_11), value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Overflow_12)); }
	inline RectOffset_t1369453676 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_t1369453676 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_t1369453676 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Overflow_12), value);
	}
};

struct GUIStyle_t3956901511_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_13;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t3956901511 * ___s_None_14;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_13() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___showKeyboardFocus_13)); }
	inline bool get_showKeyboardFocus_13() const { return ___showKeyboardFocus_13; }
	inline bool* get_address_of_showKeyboardFocus_13() { return &___showKeyboardFocus_13; }
	inline void set_showKeyboardFocus_13(bool value)
	{
		___showKeyboardFocus_13 = value;
	}

	inline static int32_t get_offset_of_s_None_14() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___s_None_14)); }
	inline GUIStyle_t3956901511 * get_s_None_14() const { return ___s_None_14; }
	inline GUIStyle_t3956901511 ** get_address_of_s_None_14() { return &___s_None_14; }
	inline void set_s_None_14(GUIStyle_t3956901511 * value)
	{
		___s_None_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_None_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Border_9;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Overflow_12;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_com* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_com* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_com* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_com* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_com* ___m_Border_9;
	RectOffset_t1369453676_marshaled_com* ___m_Padding_10;
	RectOffset_t1369453676_marshaled_com* ___m_Margin_11;
	RectOffset_t1369453676_marshaled_com* ___m_Overflow_12;
};
#endif // GUISTYLE_T3956901511_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef DIGITALEYEWEARARCONTROLLER_T1054226036_H
#define DIGITALEYEWEARARCONTROLLER_T1054226036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController
struct  DigitalEyewearARController_t1054226036  : public ARController_t116632334
{
public:
	// System.Single Vuforia.DigitalEyewearARController::mCameraOffset
	float ___mCameraOffset_5;
	// System.Int32 Vuforia.DigitalEyewearARController::mDistortionRenderingLayer
	int32_t ___mDistortionRenderingLayer_6;
	// Vuforia.DigitalEyewearARController/EyewearType Vuforia.DigitalEyewearARController::mEyewearType
	int32_t ___mEyewearType_7;
	// Vuforia.DigitalEyewearARController/StereoFramework Vuforia.DigitalEyewearARController::mStereoFramework
	int32_t ___mStereoFramework_8;
	// Vuforia.DigitalEyewearARController/SeeThroughConfiguration Vuforia.DigitalEyewearARController::mSeeThroughConfiguration
	int32_t ___mSeeThroughConfiguration_9;
	// System.String Vuforia.DigitalEyewearARController::mViewerName
	String_t* ___mViewerName_10;
	// System.String Vuforia.DigitalEyewearARController::mViewerManufacturer
	String_t* ___mViewerManufacturer_11;
	// System.Boolean Vuforia.DigitalEyewearARController::mUseCustomViewer
	bool ___mUseCustomViewer_12;
	// Vuforia.DigitalEyewearARController/SerializableViewerParameters Vuforia.DigitalEyewearARController::mCustomViewer
	SerializableViewerParameters_t2043332680 * ___mCustomViewer_13;
	// UnityEngine.Transform Vuforia.DigitalEyewearARController::mCentralAnchorPoint
	Transform_t3600365921 * ___mCentralAnchorPoint_14;
	// UnityEngine.Camera Vuforia.DigitalEyewearARController::mPrimaryCamera
	Camera_t4157153871 * ___mPrimaryCamera_15;
	// Vuforia.VuforiaARController Vuforia.DigitalEyewearARController::mVuforiaBehaviour
	VuforiaARController_t1876945237 * ___mVuforiaBehaviour_16;
	// System.Boolean Vuforia.DigitalEyewearARController::mSetFocusPlaneAutomatically
	bool ___mSetFocusPlaneAutomatically_17;
	// Vuforia.VRDeviceController Vuforia.DigitalEyewearARController::mVRDeviceController
	VRDeviceController_t3863472269 * ___mVRDeviceController_18;
	// UnityEngine.Vector3 Vuforia.DigitalEyewearARController::mCamPositionAtSceneStart
	Vector3_t3722313464  ___mCamPositionAtSceneStart_19;
	// UnityEngine.Quaternion Vuforia.DigitalEyewearARController::mCamRotationAtSceneStart
	Quaternion_t2301928331  ___mCamRotationAtSceneStart_20;

public:
	inline static int32_t get_offset_of_mCameraOffset_5() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mCameraOffset_5)); }
	inline float get_mCameraOffset_5() const { return ___mCameraOffset_5; }
	inline float* get_address_of_mCameraOffset_5() { return &___mCameraOffset_5; }
	inline void set_mCameraOffset_5(float value)
	{
		___mCameraOffset_5 = value;
	}

	inline static int32_t get_offset_of_mDistortionRenderingLayer_6() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mDistortionRenderingLayer_6)); }
	inline int32_t get_mDistortionRenderingLayer_6() const { return ___mDistortionRenderingLayer_6; }
	inline int32_t* get_address_of_mDistortionRenderingLayer_6() { return &___mDistortionRenderingLayer_6; }
	inline void set_mDistortionRenderingLayer_6(int32_t value)
	{
		___mDistortionRenderingLayer_6 = value;
	}

	inline static int32_t get_offset_of_mEyewearType_7() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mEyewearType_7)); }
	inline int32_t get_mEyewearType_7() const { return ___mEyewearType_7; }
	inline int32_t* get_address_of_mEyewearType_7() { return &___mEyewearType_7; }
	inline void set_mEyewearType_7(int32_t value)
	{
		___mEyewearType_7 = value;
	}

	inline static int32_t get_offset_of_mStereoFramework_8() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mStereoFramework_8)); }
	inline int32_t get_mStereoFramework_8() const { return ___mStereoFramework_8; }
	inline int32_t* get_address_of_mStereoFramework_8() { return &___mStereoFramework_8; }
	inline void set_mStereoFramework_8(int32_t value)
	{
		___mStereoFramework_8 = value;
	}

	inline static int32_t get_offset_of_mSeeThroughConfiguration_9() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mSeeThroughConfiguration_9)); }
	inline int32_t get_mSeeThroughConfiguration_9() const { return ___mSeeThroughConfiguration_9; }
	inline int32_t* get_address_of_mSeeThroughConfiguration_9() { return &___mSeeThroughConfiguration_9; }
	inline void set_mSeeThroughConfiguration_9(int32_t value)
	{
		___mSeeThroughConfiguration_9 = value;
	}

	inline static int32_t get_offset_of_mViewerName_10() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mViewerName_10)); }
	inline String_t* get_mViewerName_10() const { return ___mViewerName_10; }
	inline String_t** get_address_of_mViewerName_10() { return &___mViewerName_10; }
	inline void set_mViewerName_10(String_t* value)
	{
		___mViewerName_10 = value;
		Il2CppCodeGenWriteBarrier((&___mViewerName_10), value);
	}

	inline static int32_t get_offset_of_mViewerManufacturer_11() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mViewerManufacturer_11)); }
	inline String_t* get_mViewerManufacturer_11() const { return ___mViewerManufacturer_11; }
	inline String_t** get_address_of_mViewerManufacturer_11() { return &___mViewerManufacturer_11; }
	inline void set_mViewerManufacturer_11(String_t* value)
	{
		___mViewerManufacturer_11 = value;
		Il2CppCodeGenWriteBarrier((&___mViewerManufacturer_11), value);
	}

	inline static int32_t get_offset_of_mUseCustomViewer_12() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mUseCustomViewer_12)); }
	inline bool get_mUseCustomViewer_12() const { return ___mUseCustomViewer_12; }
	inline bool* get_address_of_mUseCustomViewer_12() { return &___mUseCustomViewer_12; }
	inline void set_mUseCustomViewer_12(bool value)
	{
		___mUseCustomViewer_12 = value;
	}

	inline static int32_t get_offset_of_mCustomViewer_13() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mCustomViewer_13)); }
	inline SerializableViewerParameters_t2043332680 * get_mCustomViewer_13() const { return ___mCustomViewer_13; }
	inline SerializableViewerParameters_t2043332680 ** get_address_of_mCustomViewer_13() { return &___mCustomViewer_13; }
	inline void set_mCustomViewer_13(SerializableViewerParameters_t2043332680 * value)
	{
		___mCustomViewer_13 = value;
		Il2CppCodeGenWriteBarrier((&___mCustomViewer_13), value);
	}

	inline static int32_t get_offset_of_mCentralAnchorPoint_14() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mCentralAnchorPoint_14)); }
	inline Transform_t3600365921 * get_mCentralAnchorPoint_14() const { return ___mCentralAnchorPoint_14; }
	inline Transform_t3600365921 ** get_address_of_mCentralAnchorPoint_14() { return &___mCentralAnchorPoint_14; }
	inline void set_mCentralAnchorPoint_14(Transform_t3600365921 * value)
	{
		___mCentralAnchorPoint_14 = value;
		Il2CppCodeGenWriteBarrier((&___mCentralAnchorPoint_14), value);
	}

	inline static int32_t get_offset_of_mPrimaryCamera_15() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mPrimaryCamera_15)); }
	inline Camera_t4157153871 * get_mPrimaryCamera_15() const { return ___mPrimaryCamera_15; }
	inline Camera_t4157153871 ** get_address_of_mPrimaryCamera_15() { return &___mPrimaryCamera_15; }
	inline void set_mPrimaryCamera_15(Camera_t4157153871 * value)
	{
		___mPrimaryCamera_15 = value;
		Il2CppCodeGenWriteBarrier((&___mPrimaryCamera_15), value);
	}

	inline static int32_t get_offset_of_mVuforiaBehaviour_16() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mVuforiaBehaviour_16)); }
	inline VuforiaARController_t1876945237 * get_mVuforiaBehaviour_16() const { return ___mVuforiaBehaviour_16; }
	inline VuforiaARController_t1876945237 ** get_address_of_mVuforiaBehaviour_16() { return &___mVuforiaBehaviour_16; }
	inline void set_mVuforiaBehaviour_16(VuforiaARController_t1876945237 * value)
	{
		___mVuforiaBehaviour_16 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_16), value);
	}

	inline static int32_t get_offset_of_mSetFocusPlaneAutomatically_17() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mSetFocusPlaneAutomatically_17)); }
	inline bool get_mSetFocusPlaneAutomatically_17() const { return ___mSetFocusPlaneAutomatically_17; }
	inline bool* get_address_of_mSetFocusPlaneAutomatically_17() { return &___mSetFocusPlaneAutomatically_17; }
	inline void set_mSetFocusPlaneAutomatically_17(bool value)
	{
		___mSetFocusPlaneAutomatically_17 = value;
	}

	inline static int32_t get_offset_of_mVRDeviceController_18() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mVRDeviceController_18)); }
	inline VRDeviceController_t3863472269 * get_mVRDeviceController_18() const { return ___mVRDeviceController_18; }
	inline VRDeviceController_t3863472269 ** get_address_of_mVRDeviceController_18() { return &___mVRDeviceController_18; }
	inline void set_mVRDeviceController_18(VRDeviceController_t3863472269 * value)
	{
		___mVRDeviceController_18 = value;
		Il2CppCodeGenWriteBarrier((&___mVRDeviceController_18), value);
	}

	inline static int32_t get_offset_of_mCamPositionAtSceneStart_19() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mCamPositionAtSceneStart_19)); }
	inline Vector3_t3722313464  get_mCamPositionAtSceneStart_19() const { return ___mCamPositionAtSceneStart_19; }
	inline Vector3_t3722313464 * get_address_of_mCamPositionAtSceneStart_19() { return &___mCamPositionAtSceneStart_19; }
	inline void set_mCamPositionAtSceneStart_19(Vector3_t3722313464  value)
	{
		___mCamPositionAtSceneStart_19 = value;
	}

	inline static int32_t get_offset_of_mCamRotationAtSceneStart_20() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mCamRotationAtSceneStart_20)); }
	inline Quaternion_t2301928331  get_mCamRotationAtSceneStart_20() const { return ___mCamRotationAtSceneStart_20; }
	inline Quaternion_t2301928331 * get_address_of_mCamRotationAtSceneStart_20() { return &___mCamRotationAtSceneStart_20; }
	inline void set_mCamRotationAtSceneStart_20(Quaternion_t2301928331  value)
	{
		___mCamRotationAtSceneStart_20 = value;
	}
};

struct DigitalEyewearARController_t1054226036_StaticFields
{
public:
	// Vuforia.DigitalEyewearARController Vuforia.DigitalEyewearARController::mInstance
	DigitalEyewearARController_t1054226036 * ___mInstance_21;
	// System.Object Vuforia.DigitalEyewearARController::mPadlock
	RuntimeObject * ___mPadlock_22;

public:
	inline static int32_t get_offset_of_mInstance_21() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036_StaticFields, ___mInstance_21)); }
	inline DigitalEyewearARController_t1054226036 * get_mInstance_21() const { return ___mInstance_21; }
	inline DigitalEyewearARController_t1054226036 ** get_address_of_mInstance_21() { return &___mInstance_21; }
	inline void set_mInstance_21(DigitalEyewearARController_t1054226036 * value)
	{
		___mInstance_21 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_21), value);
	}

	inline static int32_t get_offset_of_mPadlock_22() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036_StaticFields, ___mPadlock_22)); }
	inline RuntimeObject * get_mPadlock_22() const { return ___mPadlock_22; }
	inline RuntimeObject ** get_address_of_mPadlock_22() { return &___mPadlock_22; }
	inline void set_mPadlock_22(RuntimeObject * value)
	{
		___mPadlock_22 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIGITALEYEWEARARCONTROLLER_T1054226036_H
#ifndef MODELRECOSEARCHRESULT_T2344666983_H
#define MODELRECOSEARCHRESULT_T2344666983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TargetFinder/ModelRecoSearchResult
struct  ModelRecoSearchResult_t2344666983  : public TargetSearchResult_t3441982613
{
public:
	// System.String Vuforia.TargetFinder/ModelRecoSearchResult::GuideViewName
	String_t* ___GuideViewName_3;
	// System.Single Vuforia.TargetFinder/ModelRecoSearchResult::Confidence
	float ___Confidence_4;

public:
	inline static int32_t get_offset_of_GuideViewName_3() { return static_cast<int32_t>(offsetof(ModelRecoSearchResult_t2344666983, ___GuideViewName_3)); }
	inline String_t* get_GuideViewName_3() const { return ___GuideViewName_3; }
	inline String_t** get_address_of_GuideViewName_3() { return &___GuideViewName_3; }
	inline void set_GuideViewName_3(String_t* value)
	{
		___GuideViewName_3 = value;
		Il2CppCodeGenWriteBarrier((&___GuideViewName_3), value);
	}

	inline static int32_t get_offset_of_Confidence_4() { return static_cast<int32_t>(offsetof(ModelRecoSearchResult_t2344666983, ___Confidence_4)); }
	inline float get_Confidence_4() const { return ___Confidence_4; }
	inline float* get_address_of_Confidence_4() { return &___Confidence_4; }
	inline void set_Confidence_4(float value)
	{
		___Confidence_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODELRECOSEARCHRESULT_T2344666983_H
#ifndef VUFORIAARCONTROLLER_T1876945237_H
#define VUFORIAARCONTROLLER_T1876945237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaARController
struct  VuforiaARController_t1876945237  : public ARController_t116632334
{
public:
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaARController::CameraDeviceModeSetting
	int32_t ___CameraDeviceModeSetting_1;
	// System.Int32 Vuforia.VuforiaARController::MaxSimultaneousImageTargets
	int32_t ___MaxSimultaneousImageTargets_2;
	// System.Int32 Vuforia.VuforiaARController::MaxSimultaneousObjectTargets
	int32_t ___MaxSimultaneousObjectTargets_3;
	// System.Boolean Vuforia.VuforiaARController::UseDelayedLoadingObjectTargets
	bool ___UseDelayedLoadingObjectTargets_4;
	// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaARController::CameraDirection
	int32_t ___CameraDirection_5;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaARController::MirrorVideoBackground
	int32_t ___MirrorVideoBackground_6;
	// Vuforia.VuforiaARController/WorldCenterMode Vuforia.VuforiaARController::mWorldCenterMode
	int32_t ___mWorldCenterMode_7;
	// Vuforia.TrackableBehaviour Vuforia.VuforiaARController::mWorldCenter
	TrackableBehaviour_t1113559212 * ___mWorldCenter_8;
	// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler> Vuforia.VuforiaARController::mVideoBgEventHandlers
	List_1_t905170877 * ___mVideoBgEventHandlers_9;
	// System.Action Vuforia.VuforiaARController::mOnBeforeVuforiaTrackersInitialized
	Action_t1264377477 * ___mOnBeforeVuforiaTrackersInitialized_10;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaInitialized
	Action_t1264377477 * ___mOnVuforiaInitialized_11;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaStarted
	Action_t1264377477 * ___mOnVuforiaStarted_12;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaDeinitialized
	Action_t1264377477 * ___mOnVuforiaDeinitialized_13;
	// System.Action Vuforia.VuforiaARController::mOnTrackablesUpdated
	Action_t1264377477 * ___mOnTrackablesUpdated_14;
	// System.Action Vuforia.VuforiaARController::mRenderOnUpdate
	Action_t1264377477 * ___mRenderOnUpdate_15;
	// System.Action`1<System.Boolean> Vuforia.VuforiaARController::mOnPause
	Action_1_t269755560 * ___mOnPause_16;
	// System.Boolean Vuforia.VuforiaARController::mPaused
	bool ___mPaused_17;
	// System.Action Vuforia.VuforiaARController::mOnBackgroundTextureChanged
	Action_t1264377477 * ___mOnBackgroundTextureChanged_18;
	// System.Boolean Vuforia.VuforiaARController::mStartHasBeenInvoked
	bool ___mStartHasBeenInvoked_19;
	// System.Boolean Vuforia.VuforiaARController::mHasStarted
	bool ___mHasStarted_20;
	// Vuforia.ICameraConfiguration Vuforia.VuforiaARController::mCameraConfiguration
	RuntimeObject* ___mCameraConfiguration_21;
	// Vuforia.DigitalEyewearARController Vuforia.VuforiaARController::mEyewearBehaviour
	DigitalEyewearARController_t1054226036 * ___mEyewearBehaviour_22;
	// System.Boolean Vuforia.VuforiaARController::mCheckStopCamera
	bool ___mCheckStopCamera_23;
	// UnityEngine.Material Vuforia.VuforiaARController::mClearMaterial
	Material_t340375123 * ___mClearMaterial_24;
	// System.Boolean Vuforia.VuforiaARController::mMetalRendering
	bool ___mMetalRendering_25;
	// System.Boolean Vuforia.VuforiaARController::mHasStartedOnce
	bool ___mHasStartedOnce_26;
	// System.Boolean Vuforia.VuforiaARController::mWasEnabledBeforePause
	bool ___mWasEnabledBeforePause_27;
	// System.Boolean Vuforia.VuforiaARController::mObjectTrackerWasActiveBeforePause
	bool ___mObjectTrackerWasActiveBeforePause_28;
	// System.Boolean Vuforia.VuforiaARController::mObjectTrackerWasActiveBeforeDisabling
	bool ___mObjectTrackerWasActiveBeforeDisabling_29;
	// System.Int32 Vuforia.VuforiaARController::mLastUpdatedFrame
	int32_t ___mLastUpdatedFrame_30;

public:
	inline static int32_t get_offset_of_CameraDeviceModeSetting_1() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___CameraDeviceModeSetting_1)); }
	inline int32_t get_CameraDeviceModeSetting_1() const { return ___CameraDeviceModeSetting_1; }
	inline int32_t* get_address_of_CameraDeviceModeSetting_1() { return &___CameraDeviceModeSetting_1; }
	inline void set_CameraDeviceModeSetting_1(int32_t value)
	{
		___CameraDeviceModeSetting_1 = value;
	}

	inline static int32_t get_offset_of_MaxSimultaneousImageTargets_2() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___MaxSimultaneousImageTargets_2)); }
	inline int32_t get_MaxSimultaneousImageTargets_2() const { return ___MaxSimultaneousImageTargets_2; }
	inline int32_t* get_address_of_MaxSimultaneousImageTargets_2() { return &___MaxSimultaneousImageTargets_2; }
	inline void set_MaxSimultaneousImageTargets_2(int32_t value)
	{
		___MaxSimultaneousImageTargets_2 = value;
	}

	inline static int32_t get_offset_of_MaxSimultaneousObjectTargets_3() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___MaxSimultaneousObjectTargets_3)); }
	inline int32_t get_MaxSimultaneousObjectTargets_3() const { return ___MaxSimultaneousObjectTargets_3; }
	inline int32_t* get_address_of_MaxSimultaneousObjectTargets_3() { return &___MaxSimultaneousObjectTargets_3; }
	inline void set_MaxSimultaneousObjectTargets_3(int32_t value)
	{
		___MaxSimultaneousObjectTargets_3 = value;
	}

	inline static int32_t get_offset_of_UseDelayedLoadingObjectTargets_4() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___UseDelayedLoadingObjectTargets_4)); }
	inline bool get_UseDelayedLoadingObjectTargets_4() const { return ___UseDelayedLoadingObjectTargets_4; }
	inline bool* get_address_of_UseDelayedLoadingObjectTargets_4() { return &___UseDelayedLoadingObjectTargets_4; }
	inline void set_UseDelayedLoadingObjectTargets_4(bool value)
	{
		___UseDelayedLoadingObjectTargets_4 = value;
	}

	inline static int32_t get_offset_of_CameraDirection_5() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___CameraDirection_5)); }
	inline int32_t get_CameraDirection_5() const { return ___CameraDirection_5; }
	inline int32_t* get_address_of_CameraDirection_5() { return &___CameraDirection_5; }
	inline void set_CameraDirection_5(int32_t value)
	{
		___CameraDirection_5 = value;
	}

	inline static int32_t get_offset_of_MirrorVideoBackground_6() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___MirrorVideoBackground_6)); }
	inline int32_t get_MirrorVideoBackground_6() const { return ___MirrorVideoBackground_6; }
	inline int32_t* get_address_of_MirrorVideoBackground_6() { return &___MirrorVideoBackground_6; }
	inline void set_MirrorVideoBackground_6(int32_t value)
	{
		___MirrorVideoBackground_6 = value;
	}

	inline static int32_t get_offset_of_mWorldCenterMode_7() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mWorldCenterMode_7)); }
	inline int32_t get_mWorldCenterMode_7() const { return ___mWorldCenterMode_7; }
	inline int32_t* get_address_of_mWorldCenterMode_7() { return &___mWorldCenterMode_7; }
	inline void set_mWorldCenterMode_7(int32_t value)
	{
		___mWorldCenterMode_7 = value;
	}

	inline static int32_t get_offset_of_mWorldCenter_8() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mWorldCenter_8)); }
	inline TrackableBehaviour_t1113559212 * get_mWorldCenter_8() const { return ___mWorldCenter_8; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mWorldCenter_8() { return &___mWorldCenter_8; }
	inline void set_mWorldCenter_8(TrackableBehaviour_t1113559212 * value)
	{
		___mWorldCenter_8 = value;
		Il2CppCodeGenWriteBarrier((&___mWorldCenter_8), value);
	}

	inline static int32_t get_offset_of_mVideoBgEventHandlers_9() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mVideoBgEventHandlers_9)); }
	inline List_1_t905170877 * get_mVideoBgEventHandlers_9() const { return ___mVideoBgEventHandlers_9; }
	inline List_1_t905170877 ** get_address_of_mVideoBgEventHandlers_9() { return &___mVideoBgEventHandlers_9; }
	inline void set_mVideoBgEventHandlers_9(List_1_t905170877 * value)
	{
		___mVideoBgEventHandlers_9 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBgEventHandlers_9), value);
	}

	inline static int32_t get_offset_of_mOnBeforeVuforiaTrackersInitialized_10() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnBeforeVuforiaTrackersInitialized_10)); }
	inline Action_t1264377477 * get_mOnBeforeVuforiaTrackersInitialized_10() const { return ___mOnBeforeVuforiaTrackersInitialized_10; }
	inline Action_t1264377477 ** get_address_of_mOnBeforeVuforiaTrackersInitialized_10() { return &___mOnBeforeVuforiaTrackersInitialized_10; }
	inline void set_mOnBeforeVuforiaTrackersInitialized_10(Action_t1264377477 * value)
	{
		___mOnBeforeVuforiaTrackersInitialized_10 = value;
		Il2CppCodeGenWriteBarrier((&___mOnBeforeVuforiaTrackersInitialized_10), value);
	}

	inline static int32_t get_offset_of_mOnVuforiaInitialized_11() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnVuforiaInitialized_11)); }
	inline Action_t1264377477 * get_mOnVuforiaInitialized_11() const { return ___mOnVuforiaInitialized_11; }
	inline Action_t1264377477 ** get_address_of_mOnVuforiaInitialized_11() { return &___mOnVuforiaInitialized_11; }
	inline void set_mOnVuforiaInitialized_11(Action_t1264377477 * value)
	{
		___mOnVuforiaInitialized_11 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaInitialized_11), value);
	}

	inline static int32_t get_offset_of_mOnVuforiaStarted_12() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnVuforiaStarted_12)); }
	inline Action_t1264377477 * get_mOnVuforiaStarted_12() const { return ___mOnVuforiaStarted_12; }
	inline Action_t1264377477 ** get_address_of_mOnVuforiaStarted_12() { return &___mOnVuforiaStarted_12; }
	inline void set_mOnVuforiaStarted_12(Action_t1264377477 * value)
	{
		___mOnVuforiaStarted_12 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaStarted_12), value);
	}

	inline static int32_t get_offset_of_mOnVuforiaDeinitialized_13() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnVuforiaDeinitialized_13)); }
	inline Action_t1264377477 * get_mOnVuforiaDeinitialized_13() const { return ___mOnVuforiaDeinitialized_13; }
	inline Action_t1264377477 ** get_address_of_mOnVuforiaDeinitialized_13() { return &___mOnVuforiaDeinitialized_13; }
	inline void set_mOnVuforiaDeinitialized_13(Action_t1264377477 * value)
	{
		___mOnVuforiaDeinitialized_13 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaDeinitialized_13), value);
	}

	inline static int32_t get_offset_of_mOnTrackablesUpdated_14() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnTrackablesUpdated_14)); }
	inline Action_t1264377477 * get_mOnTrackablesUpdated_14() const { return ___mOnTrackablesUpdated_14; }
	inline Action_t1264377477 ** get_address_of_mOnTrackablesUpdated_14() { return &___mOnTrackablesUpdated_14; }
	inline void set_mOnTrackablesUpdated_14(Action_t1264377477 * value)
	{
		___mOnTrackablesUpdated_14 = value;
		Il2CppCodeGenWriteBarrier((&___mOnTrackablesUpdated_14), value);
	}

	inline static int32_t get_offset_of_mRenderOnUpdate_15() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mRenderOnUpdate_15)); }
	inline Action_t1264377477 * get_mRenderOnUpdate_15() const { return ___mRenderOnUpdate_15; }
	inline Action_t1264377477 ** get_address_of_mRenderOnUpdate_15() { return &___mRenderOnUpdate_15; }
	inline void set_mRenderOnUpdate_15(Action_t1264377477 * value)
	{
		___mRenderOnUpdate_15 = value;
		Il2CppCodeGenWriteBarrier((&___mRenderOnUpdate_15), value);
	}

	inline static int32_t get_offset_of_mOnPause_16() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnPause_16)); }
	inline Action_1_t269755560 * get_mOnPause_16() const { return ___mOnPause_16; }
	inline Action_1_t269755560 ** get_address_of_mOnPause_16() { return &___mOnPause_16; }
	inline void set_mOnPause_16(Action_1_t269755560 * value)
	{
		___mOnPause_16 = value;
		Il2CppCodeGenWriteBarrier((&___mOnPause_16), value);
	}

	inline static int32_t get_offset_of_mPaused_17() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mPaused_17)); }
	inline bool get_mPaused_17() const { return ___mPaused_17; }
	inline bool* get_address_of_mPaused_17() { return &___mPaused_17; }
	inline void set_mPaused_17(bool value)
	{
		___mPaused_17 = value;
	}

	inline static int32_t get_offset_of_mOnBackgroundTextureChanged_18() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnBackgroundTextureChanged_18)); }
	inline Action_t1264377477 * get_mOnBackgroundTextureChanged_18() const { return ___mOnBackgroundTextureChanged_18; }
	inline Action_t1264377477 ** get_address_of_mOnBackgroundTextureChanged_18() { return &___mOnBackgroundTextureChanged_18; }
	inline void set_mOnBackgroundTextureChanged_18(Action_t1264377477 * value)
	{
		___mOnBackgroundTextureChanged_18 = value;
		Il2CppCodeGenWriteBarrier((&___mOnBackgroundTextureChanged_18), value);
	}

	inline static int32_t get_offset_of_mStartHasBeenInvoked_19() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mStartHasBeenInvoked_19)); }
	inline bool get_mStartHasBeenInvoked_19() const { return ___mStartHasBeenInvoked_19; }
	inline bool* get_address_of_mStartHasBeenInvoked_19() { return &___mStartHasBeenInvoked_19; }
	inline void set_mStartHasBeenInvoked_19(bool value)
	{
		___mStartHasBeenInvoked_19 = value;
	}

	inline static int32_t get_offset_of_mHasStarted_20() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mHasStarted_20)); }
	inline bool get_mHasStarted_20() const { return ___mHasStarted_20; }
	inline bool* get_address_of_mHasStarted_20() { return &___mHasStarted_20; }
	inline void set_mHasStarted_20(bool value)
	{
		___mHasStarted_20 = value;
	}

	inline static int32_t get_offset_of_mCameraConfiguration_21() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mCameraConfiguration_21)); }
	inline RuntimeObject* get_mCameraConfiguration_21() const { return ___mCameraConfiguration_21; }
	inline RuntimeObject** get_address_of_mCameraConfiguration_21() { return &___mCameraConfiguration_21; }
	inline void set_mCameraConfiguration_21(RuntimeObject* value)
	{
		___mCameraConfiguration_21 = value;
		Il2CppCodeGenWriteBarrier((&___mCameraConfiguration_21), value);
	}

	inline static int32_t get_offset_of_mEyewearBehaviour_22() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mEyewearBehaviour_22)); }
	inline DigitalEyewearARController_t1054226036 * get_mEyewearBehaviour_22() const { return ___mEyewearBehaviour_22; }
	inline DigitalEyewearARController_t1054226036 ** get_address_of_mEyewearBehaviour_22() { return &___mEyewearBehaviour_22; }
	inline void set_mEyewearBehaviour_22(DigitalEyewearARController_t1054226036 * value)
	{
		___mEyewearBehaviour_22 = value;
		Il2CppCodeGenWriteBarrier((&___mEyewearBehaviour_22), value);
	}

	inline static int32_t get_offset_of_mCheckStopCamera_23() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mCheckStopCamera_23)); }
	inline bool get_mCheckStopCamera_23() const { return ___mCheckStopCamera_23; }
	inline bool* get_address_of_mCheckStopCamera_23() { return &___mCheckStopCamera_23; }
	inline void set_mCheckStopCamera_23(bool value)
	{
		___mCheckStopCamera_23 = value;
	}

	inline static int32_t get_offset_of_mClearMaterial_24() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mClearMaterial_24)); }
	inline Material_t340375123 * get_mClearMaterial_24() const { return ___mClearMaterial_24; }
	inline Material_t340375123 ** get_address_of_mClearMaterial_24() { return &___mClearMaterial_24; }
	inline void set_mClearMaterial_24(Material_t340375123 * value)
	{
		___mClearMaterial_24 = value;
		Il2CppCodeGenWriteBarrier((&___mClearMaterial_24), value);
	}

	inline static int32_t get_offset_of_mMetalRendering_25() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mMetalRendering_25)); }
	inline bool get_mMetalRendering_25() const { return ___mMetalRendering_25; }
	inline bool* get_address_of_mMetalRendering_25() { return &___mMetalRendering_25; }
	inline void set_mMetalRendering_25(bool value)
	{
		___mMetalRendering_25 = value;
	}

	inline static int32_t get_offset_of_mHasStartedOnce_26() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mHasStartedOnce_26)); }
	inline bool get_mHasStartedOnce_26() const { return ___mHasStartedOnce_26; }
	inline bool* get_address_of_mHasStartedOnce_26() { return &___mHasStartedOnce_26; }
	inline void set_mHasStartedOnce_26(bool value)
	{
		___mHasStartedOnce_26 = value;
	}

	inline static int32_t get_offset_of_mWasEnabledBeforePause_27() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mWasEnabledBeforePause_27)); }
	inline bool get_mWasEnabledBeforePause_27() const { return ___mWasEnabledBeforePause_27; }
	inline bool* get_address_of_mWasEnabledBeforePause_27() { return &___mWasEnabledBeforePause_27; }
	inline void set_mWasEnabledBeforePause_27(bool value)
	{
		___mWasEnabledBeforePause_27 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerWasActiveBeforePause_28() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mObjectTrackerWasActiveBeforePause_28)); }
	inline bool get_mObjectTrackerWasActiveBeforePause_28() const { return ___mObjectTrackerWasActiveBeforePause_28; }
	inline bool* get_address_of_mObjectTrackerWasActiveBeforePause_28() { return &___mObjectTrackerWasActiveBeforePause_28; }
	inline void set_mObjectTrackerWasActiveBeforePause_28(bool value)
	{
		___mObjectTrackerWasActiveBeforePause_28 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerWasActiveBeforeDisabling_29() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mObjectTrackerWasActiveBeforeDisabling_29)); }
	inline bool get_mObjectTrackerWasActiveBeforeDisabling_29() const { return ___mObjectTrackerWasActiveBeforeDisabling_29; }
	inline bool* get_address_of_mObjectTrackerWasActiveBeforeDisabling_29() { return &___mObjectTrackerWasActiveBeforeDisabling_29; }
	inline void set_mObjectTrackerWasActiveBeforeDisabling_29(bool value)
	{
		___mObjectTrackerWasActiveBeforeDisabling_29 = value;
	}

	inline static int32_t get_offset_of_mLastUpdatedFrame_30() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mLastUpdatedFrame_30)); }
	inline int32_t get_mLastUpdatedFrame_30() const { return ___mLastUpdatedFrame_30; }
	inline int32_t* get_address_of_mLastUpdatedFrame_30() { return &___mLastUpdatedFrame_30; }
	inline void set_mLastUpdatedFrame_30(int32_t value)
	{
		___mLastUpdatedFrame_30 = value;
	}
};

struct VuforiaARController_t1876945237_StaticFields
{
public:
	// Vuforia.VuforiaARController Vuforia.VuforiaARController::mInstance
	VuforiaARController_t1876945237 * ___mInstance_31;
	// System.Object Vuforia.VuforiaARController::mPadlock
	RuntimeObject * ___mPadlock_32;

public:
	inline static int32_t get_offset_of_mInstance_31() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237_StaticFields, ___mInstance_31)); }
	inline VuforiaARController_t1876945237 * get_mInstance_31() const { return ___mInstance_31; }
	inline VuforiaARController_t1876945237 ** get_address_of_mInstance_31() { return &___mInstance_31; }
	inline void set_mInstance_31(VuforiaARController_t1876945237 * value)
	{
		___mInstance_31 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_31), value);
	}

	inline static int32_t get_offset_of_mPadlock_32() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237_StaticFields, ___mPadlock_32)); }
	inline RuntimeObject * get_mPadlock_32() const { return ___mPadlock_32; }
	inline RuntimeObject ** get_address_of_mPadlock_32() { return &___mPadlock_32; }
	inline void set_mPadlock_32(RuntimeObject * value)
	{
		___mPadlock_32 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAARCONTROLLER_T1876945237_H
#ifndef GENERICVUFORIACONFIGURATION_T3697830469_H
#define GENERICVUFORIACONFIGURATION_T3697830469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration
struct  GenericVuforiaConfiguration_t3697830469  : public RuntimeObject
{
public:
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::vuforiaLicenseKey
	String_t* ___vuforiaLicenseKey_1;
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::ufoLicenseKey
	String_t* ___ufoLicenseKey_2;
	// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::delayedInitialization
	bool ___delayedInitialization_3;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::cameraDeviceModeSetting
	int32_t ___cameraDeviceModeSetting_4;
	// System.Int32 Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::maxSimultaneousImageTargets
	int32_t ___maxSimultaneousImageTargets_5;
	// System.Int32 Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::maxSimultaneousObjectTargets
	int32_t ___maxSimultaneousObjectTargets_6;
	// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::useDelayedLoadingObjectTargets
	bool ___useDelayedLoadingObjectTargets_7;
	// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::cameraDirection
	int32_t ___cameraDirection_8;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::mirrorVideoBackground
	int32_t ___mirrorVideoBackground_9;
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::version
	String_t* ___version_10;
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::eulaAcceptedVersions
	String_t* ___eulaAcceptedVersions_11;

public:
	inline static int32_t get_offset_of_vuforiaLicenseKey_1() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___vuforiaLicenseKey_1)); }
	inline String_t* get_vuforiaLicenseKey_1() const { return ___vuforiaLicenseKey_1; }
	inline String_t** get_address_of_vuforiaLicenseKey_1() { return &___vuforiaLicenseKey_1; }
	inline void set_vuforiaLicenseKey_1(String_t* value)
	{
		___vuforiaLicenseKey_1 = value;
		Il2CppCodeGenWriteBarrier((&___vuforiaLicenseKey_1), value);
	}

	inline static int32_t get_offset_of_ufoLicenseKey_2() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___ufoLicenseKey_2)); }
	inline String_t* get_ufoLicenseKey_2() const { return ___ufoLicenseKey_2; }
	inline String_t** get_address_of_ufoLicenseKey_2() { return &___ufoLicenseKey_2; }
	inline void set_ufoLicenseKey_2(String_t* value)
	{
		___ufoLicenseKey_2 = value;
		Il2CppCodeGenWriteBarrier((&___ufoLicenseKey_2), value);
	}

	inline static int32_t get_offset_of_delayedInitialization_3() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___delayedInitialization_3)); }
	inline bool get_delayedInitialization_3() const { return ___delayedInitialization_3; }
	inline bool* get_address_of_delayedInitialization_3() { return &___delayedInitialization_3; }
	inline void set_delayedInitialization_3(bool value)
	{
		___delayedInitialization_3 = value;
	}

	inline static int32_t get_offset_of_cameraDeviceModeSetting_4() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___cameraDeviceModeSetting_4)); }
	inline int32_t get_cameraDeviceModeSetting_4() const { return ___cameraDeviceModeSetting_4; }
	inline int32_t* get_address_of_cameraDeviceModeSetting_4() { return &___cameraDeviceModeSetting_4; }
	inline void set_cameraDeviceModeSetting_4(int32_t value)
	{
		___cameraDeviceModeSetting_4 = value;
	}

	inline static int32_t get_offset_of_maxSimultaneousImageTargets_5() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___maxSimultaneousImageTargets_5)); }
	inline int32_t get_maxSimultaneousImageTargets_5() const { return ___maxSimultaneousImageTargets_5; }
	inline int32_t* get_address_of_maxSimultaneousImageTargets_5() { return &___maxSimultaneousImageTargets_5; }
	inline void set_maxSimultaneousImageTargets_5(int32_t value)
	{
		___maxSimultaneousImageTargets_5 = value;
	}

	inline static int32_t get_offset_of_maxSimultaneousObjectTargets_6() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___maxSimultaneousObjectTargets_6)); }
	inline int32_t get_maxSimultaneousObjectTargets_6() const { return ___maxSimultaneousObjectTargets_6; }
	inline int32_t* get_address_of_maxSimultaneousObjectTargets_6() { return &___maxSimultaneousObjectTargets_6; }
	inline void set_maxSimultaneousObjectTargets_6(int32_t value)
	{
		___maxSimultaneousObjectTargets_6 = value;
	}

	inline static int32_t get_offset_of_useDelayedLoadingObjectTargets_7() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___useDelayedLoadingObjectTargets_7)); }
	inline bool get_useDelayedLoadingObjectTargets_7() const { return ___useDelayedLoadingObjectTargets_7; }
	inline bool* get_address_of_useDelayedLoadingObjectTargets_7() { return &___useDelayedLoadingObjectTargets_7; }
	inline void set_useDelayedLoadingObjectTargets_7(bool value)
	{
		___useDelayedLoadingObjectTargets_7 = value;
	}

	inline static int32_t get_offset_of_cameraDirection_8() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___cameraDirection_8)); }
	inline int32_t get_cameraDirection_8() const { return ___cameraDirection_8; }
	inline int32_t* get_address_of_cameraDirection_8() { return &___cameraDirection_8; }
	inline void set_cameraDirection_8(int32_t value)
	{
		___cameraDirection_8 = value;
	}

	inline static int32_t get_offset_of_mirrorVideoBackground_9() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___mirrorVideoBackground_9)); }
	inline int32_t get_mirrorVideoBackground_9() const { return ___mirrorVideoBackground_9; }
	inline int32_t* get_address_of_mirrorVideoBackground_9() { return &___mirrorVideoBackground_9; }
	inline void set_mirrorVideoBackground_9(int32_t value)
	{
		___mirrorVideoBackground_9 = value;
	}

	inline static int32_t get_offset_of_version_10() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___version_10)); }
	inline String_t* get_version_10() const { return ___version_10; }
	inline String_t** get_address_of_version_10() { return &___version_10; }
	inline void set_version_10(String_t* value)
	{
		___version_10 = value;
		Il2CppCodeGenWriteBarrier((&___version_10), value);
	}

	inline static int32_t get_offset_of_eulaAcceptedVersions_11() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___eulaAcceptedVersions_11)); }
	inline String_t* get_eulaAcceptedVersions_11() const { return ___eulaAcceptedVersions_11; }
	inline String_t** get_address_of_eulaAcceptedVersions_11() { return &___eulaAcceptedVersions_11; }
	inline void set_eulaAcceptedVersions_11(String_t* value)
	{
		___eulaAcceptedVersions_11 = value;
		Il2CppCodeGenWriteBarrier((&___eulaAcceptedVersions_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICVUFORIACONFIGURATION_T3697830469_H
#ifndef VUFORIARUNTIME_T1949122020_H
#define VUFORIARUNTIME_T1949122020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRuntime
struct  VuforiaRuntime_t1949122020  : public RuntimeObject
{
public:
	// System.Action`1<Vuforia.VuforiaUnity/InitError> Vuforia.VuforiaRuntime::mOnVuforiaInitError
	Action_1_t3593217305 * ___mOnVuforiaInitError_1;
	// System.Boolean Vuforia.VuforiaRuntime::mFailedToInitialize
	bool ___mFailedToInitialize_2;
	// Vuforia.VuforiaUnity/InitError Vuforia.VuforiaRuntime::mInitError
	int32_t ___mInitError_3;
	// Vuforia.VuforiaRuntime/InitState Vuforia.VuforiaRuntime::mInitState
	int32_t ___mInitState_4;
	// System.Boolean Vuforia.VuforiaRuntime::mInitThreadReturned
	bool ___mInitThreadReturned_5;
	// Vuforia.VuforiaUnity/InitError Vuforia.VuforiaRuntime::mReturnedError
	int32_t ___mReturnedError_6;
	// System.Boolean Vuforia.VuforiaRuntime::mAppIsQuitting
	bool ___mAppIsQuitting_9;

public:
	inline static int32_t get_offset_of_mOnVuforiaInitError_1() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mOnVuforiaInitError_1)); }
	inline Action_1_t3593217305 * get_mOnVuforiaInitError_1() const { return ___mOnVuforiaInitError_1; }
	inline Action_1_t3593217305 ** get_address_of_mOnVuforiaInitError_1() { return &___mOnVuforiaInitError_1; }
	inline void set_mOnVuforiaInitError_1(Action_1_t3593217305 * value)
	{
		___mOnVuforiaInitError_1 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaInitError_1), value);
	}

	inline static int32_t get_offset_of_mFailedToInitialize_2() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mFailedToInitialize_2)); }
	inline bool get_mFailedToInitialize_2() const { return ___mFailedToInitialize_2; }
	inline bool* get_address_of_mFailedToInitialize_2() { return &___mFailedToInitialize_2; }
	inline void set_mFailedToInitialize_2(bool value)
	{
		___mFailedToInitialize_2 = value;
	}

	inline static int32_t get_offset_of_mInitError_3() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mInitError_3)); }
	inline int32_t get_mInitError_3() const { return ___mInitError_3; }
	inline int32_t* get_address_of_mInitError_3() { return &___mInitError_3; }
	inline void set_mInitError_3(int32_t value)
	{
		___mInitError_3 = value;
	}

	inline static int32_t get_offset_of_mInitState_4() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mInitState_4)); }
	inline int32_t get_mInitState_4() const { return ___mInitState_4; }
	inline int32_t* get_address_of_mInitState_4() { return &___mInitState_4; }
	inline void set_mInitState_4(int32_t value)
	{
		___mInitState_4 = value;
	}

	inline static int32_t get_offset_of_mInitThreadReturned_5() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mInitThreadReturned_5)); }
	inline bool get_mInitThreadReturned_5() const { return ___mInitThreadReturned_5; }
	inline bool* get_address_of_mInitThreadReturned_5() { return &___mInitThreadReturned_5; }
	inline void set_mInitThreadReturned_5(bool value)
	{
		___mInitThreadReturned_5 = value;
	}

	inline static int32_t get_offset_of_mReturnedError_6() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mReturnedError_6)); }
	inline int32_t get_mReturnedError_6() const { return ___mReturnedError_6; }
	inline int32_t* get_address_of_mReturnedError_6() { return &___mReturnedError_6; }
	inline void set_mReturnedError_6(int32_t value)
	{
		___mReturnedError_6 = value;
	}

	inline static int32_t get_offset_of_mAppIsQuitting_9() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mAppIsQuitting_9)); }
	inline bool get_mAppIsQuitting_9() const { return ___mAppIsQuitting_9; }
	inline bool* get_address_of_mAppIsQuitting_9() { return &___mAppIsQuitting_9; }
	inline void set_mAppIsQuitting_9(bool value)
	{
		___mAppIsQuitting_9 = value;
	}
};

struct VuforiaRuntime_t1949122020_StaticFields
{
public:
	// Vuforia.VuforiaRuntime Vuforia.VuforiaRuntime::mInstance
	VuforiaRuntime_t1949122020 * ___mInstance_7;
	// System.Object Vuforia.VuforiaRuntime::mPadlock
	RuntimeObject * ___mPadlock_8;

public:
	inline static int32_t get_offset_of_mInstance_7() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020_StaticFields, ___mInstance_7)); }
	inline VuforiaRuntime_t1949122020 * get_mInstance_7() const { return ___mInstance_7; }
	inline VuforiaRuntime_t1949122020 ** get_address_of_mInstance_7() { return &___mInstance_7; }
	inline void set_mInstance_7(VuforiaRuntime_t1949122020 * value)
	{
		___mInstance_7 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_7), value);
	}

	inline static int32_t get_offset_of_mPadlock_8() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020_StaticFields, ___mPadlock_8)); }
	inline RuntimeObject * get_mPadlock_8() const { return ___mPadlock_8; }
	inline RuntimeObject ** get_address_of_mPadlock_8() { return &___mPadlock_8; }
	inline void set_mPadlock_8(RuntimeObject * value)
	{
		___mPadlock_8 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIARUNTIME_T1949122020_H
#ifndef ACTION_1_T3593217305_H
#define ACTION_1_T3593217305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct  Action_1_t3593217305  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3593217305_H
#ifndef FUNC_2_T1155892566_H
#define FUNC_2_T1155892566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<Vuforia.ModelTargetBehaviour,System.Boolean>
struct  Func_2_t1155892566  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T1155892566_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef WINDOWFUNCTION_T3146511083_H
#define WINDOWFUNCTION_T3146511083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUI/WindowFunction
struct  WindowFunction_t3146511083  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWFUNCTION_T3146511083_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:
	// System.Int32 UnityEngine.Transform::<hierarchyCount>k__BackingField
	int32_t ___U3ChierarchyCountU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3ChierarchyCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Transform_t3600365921, ___U3ChierarchyCountU3Ek__BackingField_4)); }
	inline int32_t get_U3ChierarchyCountU3Ek__BackingField_4() const { return ___U3ChierarchyCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3ChierarchyCountU3Ek__BackingField_4() { return &___U3ChierarchyCountU3Ek__BackingField_4; }
	inline void set_U3ChierarchyCountU3Ek__BackingField_4(int32_t value)
	{
		___U3ChierarchyCountU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef VUFORIACONFIGURATION_T1763229349_H
#define VUFORIACONFIGURATION_T1763229349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration
struct  VuforiaConfiguration_t1763229349  : public ScriptableObject_t2528358522
{
public:
	// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration Vuforia.VuforiaConfiguration::vuforia
	GenericVuforiaConfiguration_t3697830469 * ___vuforia_6;
	// Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration Vuforia.VuforiaConfiguration::digitalEyewear
	DigitalEyewearConfiguration_t546560202 * ___digitalEyewear_7;
	// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration Vuforia.VuforiaConfiguration::videoBackground
	VideoBackgroundConfiguration_t3392414655 * ___videoBackground_8;
	// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration Vuforia.VuforiaConfiguration::deviceTracker
	DeviceTrackerConfiguration_t721467671 * ___deviceTracker_9;
	// Vuforia.VuforiaConfiguration/SmartTerrainConfiguration Vuforia.VuforiaConfiguration::smartTerrain
	SmartTerrainConfiguration_t1514074484 * ___smartTerrain_10;
	// Vuforia.VuforiaConfiguration/WebCamConfiguration Vuforia.VuforiaConfiguration::webcam
	WebCamConfiguration_t1101614731 * ___webcam_11;

public:
	inline static int32_t get_offset_of_vuforia_6() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___vuforia_6)); }
	inline GenericVuforiaConfiguration_t3697830469 * get_vuforia_6() const { return ___vuforia_6; }
	inline GenericVuforiaConfiguration_t3697830469 ** get_address_of_vuforia_6() { return &___vuforia_6; }
	inline void set_vuforia_6(GenericVuforiaConfiguration_t3697830469 * value)
	{
		___vuforia_6 = value;
		Il2CppCodeGenWriteBarrier((&___vuforia_6), value);
	}

	inline static int32_t get_offset_of_digitalEyewear_7() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___digitalEyewear_7)); }
	inline DigitalEyewearConfiguration_t546560202 * get_digitalEyewear_7() const { return ___digitalEyewear_7; }
	inline DigitalEyewearConfiguration_t546560202 ** get_address_of_digitalEyewear_7() { return &___digitalEyewear_7; }
	inline void set_digitalEyewear_7(DigitalEyewearConfiguration_t546560202 * value)
	{
		___digitalEyewear_7 = value;
		Il2CppCodeGenWriteBarrier((&___digitalEyewear_7), value);
	}

	inline static int32_t get_offset_of_videoBackground_8() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___videoBackground_8)); }
	inline VideoBackgroundConfiguration_t3392414655 * get_videoBackground_8() const { return ___videoBackground_8; }
	inline VideoBackgroundConfiguration_t3392414655 ** get_address_of_videoBackground_8() { return &___videoBackground_8; }
	inline void set_videoBackground_8(VideoBackgroundConfiguration_t3392414655 * value)
	{
		___videoBackground_8 = value;
		Il2CppCodeGenWriteBarrier((&___videoBackground_8), value);
	}

	inline static int32_t get_offset_of_deviceTracker_9() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___deviceTracker_9)); }
	inline DeviceTrackerConfiguration_t721467671 * get_deviceTracker_9() const { return ___deviceTracker_9; }
	inline DeviceTrackerConfiguration_t721467671 ** get_address_of_deviceTracker_9() { return &___deviceTracker_9; }
	inline void set_deviceTracker_9(DeviceTrackerConfiguration_t721467671 * value)
	{
		___deviceTracker_9 = value;
		Il2CppCodeGenWriteBarrier((&___deviceTracker_9), value);
	}

	inline static int32_t get_offset_of_smartTerrain_10() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___smartTerrain_10)); }
	inline SmartTerrainConfiguration_t1514074484 * get_smartTerrain_10() const { return ___smartTerrain_10; }
	inline SmartTerrainConfiguration_t1514074484 ** get_address_of_smartTerrain_10() { return &___smartTerrain_10; }
	inline void set_smartTerrain_10(SmartTerrainConfiguration_t1514074484 * value)
	{
		___smartTerrain_10 = value;
		Il2CppCodeGenWriteBarrier((&___smartTerrain_10), value);
	}

	inline static int32_t get_offset_of_webcam_11() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___webcam_11)); }
	inline WebCamConfiguration_t1101614731 * get_webcam_11() const { return ___webcam_11; }
	inline WebCamConfiguration_t1101614731 ** get_address_of_webcam_11() { return &___webcam_11; }
	inline void set_webcam_11(WebCamConfiguration_t1101614731 * value)
	{
		___webcam_11 = value;
		Il2CppCodeGenWriteBarrier((&___webcam_11), value);
	}
};

struct VuforiaConfiguration_t1763229349_StaticFields
{
public:
	// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::mInstance
	VuforiaConfiguration_t1763229349 * ___mInstance_4;
	// System.Object Vuforia.VuforiaConfiguration::mPadlock
	RuntimeObject * ___mPadlock_5;

public:
	inline static int32_t get_offset_of_mInstance_4() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349_StaticFields, ___mInstance_4)); }
	inline VuforiaConfiguration_t1763229349 * get_mInstance_4() const { return ___mInstance_4; }
	inline VuforiaConfiguration_t1763229349 ** get_address_of_mInstance_4() { return &___mInstance_4; }
	inline void set_mInstance_4(VuforiaConfiguration_t1763229349 * value)
	{
		___mInstance_4 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_4), value);
	}

	inline static int32_t get_offset_of_mPadlock_5() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349_StaticFields, ___mPadlock_5)); }
	inline RuntimeObject * get_mPadlock_5() const { return ___mPadlock_5; }
	inline RuntimeObject ** get_address_of_mPadlock_5() { return &___mPadlock_5; }
	inline void set_mPadlock_5(RuntimeObject * value)
	{
		___mPadlock_5 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIACONFIGURATION_T1763229349_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t190067161 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t190067161 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t190067161 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t190067161 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t190067161 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t190067161 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef CANVAS_T3310196443_H
#define CANVAS_T3310196443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Canvas
struct  Canvas_t3310196443  : public Behaviour_t1437897464
{
public:

public:
};

struct Canvas_t3310196443_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t3309123499 * ___willRenderCanvases_4;

public:
	inline static int32_t get_offset_of_willRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_t3310196443_StaticFields, ___willRenderCanvases_4)); }
	inline WillRenderCanvases_t3309123499 * get_willRenderCanvases_4() const { return ___willRenderCanvases_4; }
	inline WillRenderCanvases_t3309123499 ** get_address_of_willRenderCanvases_4() { return &___willRenderCanvases_4; }
	inline void set_willRenderCanvases_4(WillRenderCanvases_t3309123499 * value)
	{
		___willRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((&___willRenderCanvases_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVAS_T3310196443_H
#ifndef MESHRENDERER_T587009260_H
#define MESHRENDERER_T587009260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshRenderer
struct  MeshRenderer_t587009260  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHRENDERER_T587009260_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef BOUNDINGBOXRENDERER_T3223945734_H
#define BOUNDINGBOXRENDERER_T3223945734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BoundingBoxRenderer
struct  BoundingBoxRenderer_t3223945734  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Material BoundingBoxRenderer::mLineMaterial
	Material_t340375123 * ___mLineMaterial_4;

public:
	inline static int32_t get_offset_of_mLineMaterial_4() { return static_cast<int32_t>(offsetof(BoundingBoxRenderer_t3223945734, ___mLineMaterial_4)); }
	inline Material_t340375123 * get_mLineMaterial_4() const { return ___mLineMaterial_4; }
	inline Material_t340375123 ** get_address_of_mLineMaterial_4() { return &___mLineMaterial_4; }
	inline void set_mLineMaterial_4(Material_t340375123 * value)
	{
		___mLineMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((&___mLineMaterial_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDINGBOXRENDERER_T3223945734_H
#ifndef DEFAULTMODELRECOEVENTHANDLER_T1899894298_H
#define DEFAULTMODELRECOEVENTHANDLER_T1899894298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultModelRecoEventHandler
struct  DefaultModelRecoEventHandler_t1899894298  : public MonoBehaviour_t3962482529
{
public:
	// Vuforia.ModelTargetBehaviour DefaultModelRecoEventHandler::mLastRecoModelTarget
	ModelTargetBehaviour_t712978329 * ___mLastRecoModelTarget_4;
	// System.Boolean DefaultModelRecoEventHandler::mSearching
	bool ___mSearching_5;
	// System.Single DefaultModelRecoEventHandler::mLastStatusCheckTime
	float ___mLastStatusCheckTime_6;
	// Vuforia.ModelRecoBehaviour DefaultModelRecoEventHandler::mModelRecoBehaviour
	ModelRecoBehaviour_t2312633019 * ___mModelRecoBehaviour_7;
	// Vuforia.TargetFinder DefaultModelRecoEventHandler::mTargetFinder
	TargetFinder_t2439332195 * ___mTargetFinder_8;
	// Vuforia.ModelTargetBehaviour DefaultModelRecoEventHandler::ModelTargetTemplate
	ModelTargetBehaviour_t712978329 * ___ModelTargetTemplate_9;
	// System.Boolean DefaultModelRecoEventHandler::ShowBoundingBox
	bool ___ShowBoundingBox_10;
	// UnityEngine.UI.Text DefaultModelRecoEventHandler::ModelRecoErrorText
	Text_t1901882714 * ___ModelRecoErrorText_11;
	// System.Boolean DefaultModelRecoEventHandler::StopSearchWhenModelFound
	bool ___StopSearchWhenModelFound_12;
	// System.Boolean DefaultModelRecoEventHandler::StopSearchWhileTracking
	bool ___StopSearchWhileTracking_13;

public:
	inline static int32_t get_offset_of_mLastRecoModelTarget_4() { return static_cast<int32_t>(offsetof(DefaultModelRecoEventHandler_t1899894298, ___mLastRecoModelTarget_4)); }
	inline ModelTargetBehaviour_t712978329 * get_mLastRecoModelTarget_4() const { return ___mLastRecoModelTarget_4; }
	inline ModelTargetBehaviour_t712978329 ** get_address_of_mLastRecoModelTarget_4() { return &___mLastRecoModelTarget_4; }
	inline void set_mLastRecoModelTarget_4(ModelTargetBehaviour_t712978329 * value)
	{
		___mLastRecoModelTarget_4 = value;
		Il2CppCodeGenWriteBarrier((&___mLastRecoModelTarget_4), value);
	}

	inline static int32_t get_offset_of_mSearching_5() { return static_cast<int32_t>(offsetof(DefaultModelRecoEventHandler_t1899894298, ___mSearching_5)); }
	inline bool get_mSearching_5() const { return ___mSearching_5; }
	inline bool* get_address_of_mSearching_5() { return &___mSearching_5; }
	inline void set_mSearching_5(bool value)
	{
		___mSearching_5 = value;
	}

	inline static int32_t get_offset_of_mLastStatusCheckTime_6() { return static_cast<int32_t>(offsetof(DefaultModelRecoEventHandler_t1899894298, ___mLastStatusCheckTime_6)); }
	inline float get_mLastStatusCheckTime_6() const { return ___mLastStatusCheckTime_6; }
	inline float* get_address_of_mLastStatusCheckTime_6() { return &___mLastStatusCheckTime_6; }
	inline void set_mLastStatusCheckTime_6(float value)
	{
		___mLastStatusCheckTime_6 = value;
	}

	inline static int32_t get_offset_of_mModelRecoBehaviour_7() { return static_cast<int32_t>(offsetof(DefaultModelRecoEventHandler_t1899894298, ___mModelRecoBehaviour_7)); }
	inline ModelRecoBehaviour_t2312633019 * get_mModelRecoBehaviour_7() const { return ___mModelRecoBehaviour_7; }
	inline ModelRecoBehaviour_t2312633019 ** get_address_of_mModelRecoBehaviour_7() { return &___mModelRecoBehaviour_7; }
	inline void set_mModelRecoBehaviour_7(ModelRecoBehaviour_t2312633019 * value)
	{
		___mModelRecoBehaviour_7 = value;
		Il2CppCodeGenWriteBarrier((&___mModelRecoBehaviour_7), value);
	}

	inline static int32_t get_offset_of_mTargetFinder_8() { return static_cast<int32_t>(offsetof(DefaultModelRecoEventHandler_t1899894298, ___mTargetFinder_8)); }
	inline TargetFinder_t2439332195 * get_mTargetFinder_8() const { return ___mTargetFinder_8; }
	inline TargetFinder_t2439332195 ** get_address_of_mTargetFinder_8() { return &___mTargetFinder_8; }
	inline void set_mTargetFinder_8(TargetFinder_t2439332195 * value)
	{
		___mTargetFinder_8 = value;
		Il2CppCodeGenWriteBarrier((&___mTargetFinder_8), value);
	}

	inline static int32_t get_offset_of_ModelTargetTemplate_9() { return static_cast<int32_t>(offsetof(DefaultModelRecoEventHandler_t1899894298, ___ModelTargetTemplate_9)); }
	inline ModelTargetBehaviour_t712978329 * get_ModelTargetTemplate_9() const { return ___ModelTargetTemplate_9; }
	inline ModelTargetBehaviour_t712978329 ** get_address_of_ModelTargetTemplate_9() { return &___ModelTargetTemplate_9; }
	inline void set_ModelTargetTemplate_9(ModelTargetBehaviour_t712978329 * value)
	{
		___ModelTargetTemplate_9 = value;
		Il2CppCodeGenWriteBarrier((&___ModelTargetTemplate_9), value);
	}

	inline static int32_t get_offset_of_ShowBoundingBox_10() { return static_cast<int32_t>(offsetof(DefaultModelRecoEventHandler_t1899894298, ___ShowBoundingBox_10)); }
	inline bool get_ShowBoundingBox_10() const { return ___ShowBoundingBox_10; }
	inline bool* get_address_of_ShowBoundingBox_10() { return &___ShowBoundingBox_10; }
	inline void set_ShowBoundingBox_10(bool value)
	{
		___ShowBoundingBox_10 = value;
	}

	inline static int32_t get_offset_of_ModelRecoErrorText_11() { return static_cast<int32_t>(offsetof(DefaultModelRecoEventHandler_t1899894298, ___ModelRecoErrorText_11)); }
	inline Text_t1901882714 * get_ModelRecoErrorText_11() const { return ___ModelRecoErrorText_11; }
	inline Text_t1901882714 ** get_address_of_ModelRecoErrorText_11() { return &___ModelRecoErrorText_11; }
	inline void set_ModelRecoErrorText_11(Text_t1901882714 * value)
	{
		___ModelRecoErrorText_11 = value;
		Il2CppCodeGenWriteBarrier((&___ModelRecoErrorText_11), value);
	}

	inline static int32_t get_offset_of_StopSearchWhenModelFound_12() { return static_cast<int32_t>(offsetof(DefaultModelRecoEventHandler_t1899894298, ___StopSearchWhenModelFound_12)); }
	inline bool get_StopSearchWhenModelFound_12() const { return ___StopSearchWhenModelFound_12; }
	inline bool* get_address_of_StopSearchWhenModelFound_12() { return &___StopSearchWhenModelFound_12; }
	inline void set_StopSearchWhenModelFound_12(bool value)
	{
		___StopSearchWhenModelFound_12 = value;
	}

	inline static int32_t get_offset_of_StopSearchWhileTracking_13() { return static_cast<int32_t>(offsetof(DefaultModelRecoEventHandler_t1899894298, ___StopSearchWhileTracking_13)); }
	inline bool get_StopSearchWhileTracking_13() const { return ___StopSearchWhileTracking_13; }
	inline bool* get_address_of_StopSearchWhileTracking_13() { return &___StopSearchWhileTracking_13; }
	inline void set_StopSearchWhileTracking_13(bool value)
	{
		___StopSearchWhileTracking_13 = value;
	}
};

struct DefaultModelRecoEventHandler_t1899894298_StaticFields
{
public:
	// System.Func`2<Vuforia.ModelTargetBehaviour,System.Boolean> DefaultModelRecoEventHandler::<>f__am$cache0
	Func_2_t1155892566 * ___U3CU3Ef__amU24cache0_14;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_14() { return static_cast<int32_t>(offsetof(DefaultModelRecoEventHandler_t1899894298_StaticFields, ___U3CU3Ef__amU24cache0_14)); }
	inline Func_2_t1155892566 * get_U3CU3Ef__amU24cache0_14() const { return ___U3CU3Ef__amU24cache0_14; }
	inline Func_2_t1155892566 ** get_address_of_U3CU3Ef__amU24cache0_14() { return &___U3CU3Ef__amU24cache0_14; }
	inline void set_U3CU3Ef__amU24cache0_14(Func_2_t1155892566 * value)
	{
		___U3CU3Ef__amU24cache0_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTMODELRECOEVENTHANDLER_T1899894298_H
#ifndef DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#define DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultTrackableEventHandler
struct  DefaultTrackableEventHandler_t1588957063  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean DefaultTrackableEventHandler::imageTrackedTrue
	bool ___imageTrackedTrue_4;
	// Vuforia.TrackableBehaviour DefaultTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t1113559212 * ___mTrackableBehaviour_5;
	// Vuforia.TrackableBehaviour/Status DefaultTrackableEventHandler::m_PreviousStatus
	int32_t ___m_PreviousStatus_6;
	// Vuforia.TrackableBehaviour/Status DefaultTrackableEventHandler::m_NewStatus
	int32_t ___m_NewStatus_7;

public:
	inline static int32_t get_offset_of_imageTrackedTrue_4() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1588957063, ___imageTrackedTrue_4)); }
	inline bool get_imageTrackedTrue_4() const { return ___imageTrackedTrue_4; }
	inline bool* get_address_of_imageTrackedTrue_4() { return &___imageTrackedTrue_4; }
	inline void set_imageTrackedTrue_4(bool value)
	{
		___imageTrackedTrue_4 = value;
	}

	inline static int32_t get_offset_of_mTrackableBehaviour_5() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1588957063, ___mTrackableBehaviour_5)); }
	inline TrackableBehaviour_t1113559212 * get_mTrackableBehaviour_5() const { return ___mTrackableBehaviour_5; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mTrackableBehaviour_5() { return &___mTrackableBehaviour_5; }
	inline void set_mTrackableBehaviour_5(TrackableBehaviour_t1113559212 * value)
	{
		___mTrackableBehaviour_5 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableBehaviour_5), value);
	}

	inline static int32_t get_offset_of_m_PreviousStatus_6() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1588957063, ___m_PreviousStatus_6)); }
	inline int32_t get_m_PreviousStatus_6() const { return ___m_PreviousStatus_6; }
	inline int32_t* get_address_of_m_PreviousStatus_6() { return &___m_PreviousStatus_6; }
	inline void set_m_PreviousStatus_6(int32_t value)
	{
		___m_PreviousStatus_6 = value;
	}

	inline static int32_t get_offset_of_m_NewStatus_7() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1588957063, ___m_NewStatus_7)); }
	inline int32_t get_m_NewStatus_7() const { return ___m_NewStatus_7; }
	inline int32_t* get_address_of_m_NewStatus_7() { return &___m_NewStatus_7; }
	inline void set_m_NewStatus_7(int32_t value)
	{
		___m_NewStatus_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef VUFORIAMONOBEHAVIOUR_T1150221792_H
#define VUFORIAMONOBEHAVIOUR_T1150221792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VuforiaMonoBehaviour
struct  VuforiaMonoBehaviour_t1150221792  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAMONOBEHAVIOUR_T1150221792_H
#ifndef DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#define DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultInitializationErrorHandler
struct  DefaultInitializationErrorHandler_t3109936861  : public VuforiaMonoBehaviour_t1150221792
{
public:
	// System.String DefaultInitializationErrorHandler::mErrorText
	String_t* ___mErrorText_4;
	// System.Boolean DefaultInitializationErrorHandler::mErrorOccurred
	bool ___mErrorOccurred_5;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::bodyStyle
	GUIStyle_t3956901511 * ___bodyStyle_7;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::headerStyle
	GUIStyle_t3956901511 * ___headerStyle_8;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::footerStyle
	GUIStyle_t3956901511 * ___footerStyle_9;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::bodyTexture
	Texture2D_t3840446185 * ___bodyTexture_10;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::headerTexture
	Texture2D_t3840446185 * ___headerTexture_11;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::footerTexture
	Texture2D_t3840446185 * ___footerTexture_12;

public:
	inline static int32_t get_offset_of_mErrorText_4() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___mErrorText_4)); }
	inline String_t* get_mErrorText_4() const { return ___mErrorText_4; }
	inline String_t** get_address_of_mErrorText_4() { return &___mErrorText_4; }
	inline void set_mErrorText_4(String_t* value)
	{
		___mErrorText_4 = value;
		Il2CppCodeGenWriteBarrier((&___mErrorText_4), value);
	}

	inline static int32_t get_offset_of_mErrorOccurred_5() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___mErrorOccurred_5)); }
	inline bool get_mErrorOccurred_5() const { return ___mErrorOccurred_5; }
	inline bool* get_address_of_mErrorOccurred_5() { return &___mErrorOccurred_5; }
	inline void set_mErrorOccurred_5(bool value)
	{
		___mErrorOccurred_5 = value;
	}

	inline static int32_t get_offset_of_bodyStyle_7() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___bodyStyle_7)); }
	inline GUIStyle_t3956901511 * get_bodyStyle_7() const { return ___bodyStyle_7; }
	inline GUIStyle_t3956901511 ** get_address_of_bodyStyle_7() { return &___bodyStyle_7; }
	inline void set_bodyStyle_7(GUIStyle_t3956901511 * value)
	{
		___bodyStyle_7 = value;
		Il2CppCodeGenWriteBarrier((&___bodyStyle_7), value);
	}

	inline static int32_t get_offset_of_headerStyle_8() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___headerStyle_8)); }
	inline GUIStyle_t3956901511 * get_headerStyle_8() const { return ___headerStyle_8; }
	inline GUIStyle_t3956901511 ** get_address_of_headerStyle_8() { return &___headerStyle_8; }
	inline void set_headerStyle_8(GUIStyle_t3956901511 * value)
	{
		___headerStyle_8 = value;
		Il2CppCodeGenWriteBarrier((&___headerStyle_8), value);
	}

	inline static int32_t get_offset_of_footerStyle_9() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___footerStyle_9)); }
	inline GUIStyle_t3956901511 * get_footerStyle_9() const { return ___footerStyle_9; }
	inline GUIStyle_t3956901511 ** get_address_of_footerStyle_9() { return &___footerStyle_9; }
	inline void set_footerStyle_9(GUIStyle_t3956901511 * value)
	{
		___footerStyle_9 = value;
		Il2CppCodeGenWriteBarrier((&___footerStyle_9), value);
	}

	inline static int32_t get_offset_of_bodyTexture_10() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___bodyTexture_10)); }
	inline Texture2D_t3840446185 * get_bodyTexture_10() const { return ___bodyTexture_10; }
	inline Texture2D_t3840446185 ** get_address_of_bodyTexture_10() { return &___bodyTexture_10; }
	inline void set_bodyTexture_10(Texture2D_t3840446185 * value)
	{
		___bodyTexture_10 = value;
		Il2CppCodeGenWriteBarrier((&___bodyTexture_10), value);
	}

	inline static int32_t get_offset_of_headerTexture_11() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___headerTexture_11)); }
	inline Texture2D_t3840446185 * get_headerTexture_11() const { return ___headerTexture_11; }
	inline Texture2D_t3840446185 ** get_address_of_headerTexture_11() { return &___headerTexture_11; }
	inline void set_headerTexture_11(Texture2D_t3840446185 * value)
	{
		___headerTexture_11 = value;
		Il2CppCodeGenWriteBarrier((&___headerTexture_11), value);
	}

	inline static int32_t get_offset_of_footerTexture_12() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___footerTexture_12)); }
	inline Texture2D_t3840446185 * get_footerTexture_12() const { return ___footerTexture_12; }
	inline Texture2D_t3840446185 ** get_address_of_footerTexture_12() { return &___footerTexture_12; }
	inline void set_footerTexture_12(Texture2D_t3840446185 * value)
	{
		___footerTexture_12 = value;
		Il2CppCodeGenWriteBarrier((&___footerTexture_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_8;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_9;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_t2598313366 * ___m_CanvasRenderer_10;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_11;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_12;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_14;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_16;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_19;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_6)); }
	inline Material_t340375123 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t340375123 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t340375123 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_6), value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_7)); }
	inline Color_t2555686324  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t2555686324 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t2555686324  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_8)); }
	inline bool get_m_RaycastTarget_8() const { return ___m_RaycastTarget_8; }
	inline bool* get_address_of_m_RaycastTarget_8() { return &___m_RaycastTarget_8; }
	inline void set_m_RaycastTarget_8(bool value)
	{
		___m_RaycastTarget_8 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_9)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_9() const { return ___m_RectTransform_9; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_9() { return &___m_RectTransform_9; }
	inline void set_m_RectTransform_9(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_9), value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRenderer_10)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRenderer_10() const { return ___m_CanvasRenderer_10; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRenderer_10() { return &___m_CanvasRenderer_10; }
	inline void set_m_CanvasRenderer_10(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_10), value);
	}

	inline static int32_t get_offset_of_m_Canvas_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_11)); }
	inline Canvas_t3310196443 * get_m_Canvas_11() const { return ___m_Canvas_11; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_11() { return &___m_Canvas_11; }
	inline void set_m_Canvas_11(Canvas_t3310196443 * value)
	{
		___m_Canvas_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_11), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_12)); }
	inline bool get_m_VertsDirty_12() const { return ___m_VertsDirty_12; }
	inline bool* get_address_of_m_VertsDirty_12() { return &___m_VertsDirty_12; }
	inline void set_m_VertsDirty_12(bool value)
	{
		___m_VertsDirty_12 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_13)); }
	inline bool get_m_MaterialDirty_13() const { return ___m_MaterialDirty_13; }
	inline bool* get_address_of_m_MaterialDirty_13() { return &___m_MaterialDirty_13; }
	inline void set_m_MaterialDirty_13(bool value)
	{
		___m_MaterialDirty_13 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_14() const { return ___m_OnDirtyLayoutCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_14() { return &___m_OnDirtyLayoutCallback_14; }
	inline void set_m_OnDirtyLayoutCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_14), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_15)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_15() const { return ___m_OnDirtyVertsCallback_15; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_15() { return &___m_OnDirtyVertsCallback_15; }
	inline void set_m_OnDirtyVertsCallback_15(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_15), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_16)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_16() const { return ___m_OnDirtyMaterialCallback_16; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_16() { return &___m_OnDirtyMaterialCallback_16; }
	inline void set_m_OnDirtyMaterialCallback_16(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_16), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_19() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_19)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_19() const { return ___m_ColorTweenRunner_19; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_19() { return &___m_ColorTweenRunner_19; }
	inline void set_m_ColorTweenRunner_19(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_19), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_20(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_20 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_17;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_18;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t340375123 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t340375123 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_4), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_5), value);
	}

	inline static int32_t get_offset_of_s_Mesh_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_17)); }
	inline Mesh_t3648964284 * get_s_Mesh_17() const { return ___s_Mesh_17; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_17() { return &___s_Mesh_17; }
	inline void set_s_Mesh_17(Mesh_t3648964284 * value)
	{
		___s_Mesh_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_17), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_18)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_18() const { return ___s_VertexHelper_18; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_18() { return &___s_VertexHelper_18; }
	inline void set_s_VertexHelper_18(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef OBJECTRECOBEHAVIOUR_T2762250941_H
#define OBJECTRECOBEHAVIOUR_T2762250941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ObjectRecoBehaviour
struct  ObjectRecoBehaviour_t2762250941  : public VuforiaMonoBehaviour_t1150221792
{
public:
	// Vuforia.ObjectTracker Vuforia.ObjectRecoBehaviour::mObjectTracker
	ObjectTracker_t4177997237 * ___mObjectTracker_4;
	// Vuforia.TargetFinder Vuforia.ObjectRecoBehaviour::mTargetFinder
	TargetFinder_t2439332195 * ___mTargetFinder_5;
	// System.Boolean Vuforia.ObjectRecoBehaviour::mCurrentlyInitializing
	bool ___mCurrentlyInitializing_6;
	// System.Boolean Vuforia.ObjectRecoBehaviour::mInitSuccess
	bool ___mInitSuccess_7;
	// System.Boolean Vuforia.ObjectRecoBehaviour::mRecoStarted
	bool ___mRecoStarted_8;
	// System.Boolean Vuforia.ObjectRecoBehaviour::mOnInitializedCalled
	bool ___mOnInitializedCalled_9;
	// System.Collections.Generic.List`1<Vuforia.IObjectRecoEventHandler> Vuforia.ObjectRecoBehaviour::mHandlers
	List_1_t2783226355 * ___mHandlers_10;
	// System.Boolean Vuforia.ObjectRecoBehaviour::mTargetFinderStartedBeforeDisable
	bool ___mTargetFinderStartedBeforeDisable_11;

public:
	inline static int32_t get_offset_of_mObjectTracker_4() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_t2762250941, ___mObjectTracker_4)); }
	inline ObjectTracker_t4177997237 * get_mObjectTracker_4() const { return ___mObjectTracker_4; }
	inline ObjectTracker_t4177997237 ** get_address_of_mObjectTracker_4() { return &___mObjectTracker_4; }
	inline void set_mObjectTracker_4(ObjectTracker_t4177997237 * value)
	{
		___mObjectTracker_4 = value;
		Il2CppCodeGenWriteBarrier((&___mObjectTracker_4), value);
	}

	inline static int32_t get_offset_of_mTargetFinder_5() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_t2762250941, ___mTargetFinder_5)); }
	inline TargetFinder_t2439332195 * get_mTargetFinder_5() const { return ___mTargetFinder_5; }
	inline TargetFinder_t2439332195 ** get_address_of_mTargetFinder_5() { return &___mTargetFinder_5; }
	inline void set_mTargetFinder_5(TargetFinder_t2439332195 * value)
	{
		___mTargetFinder_5 = value;
		Il2CppCodeGenWriteBarrier((&___mTargetFinder_5), value);
	}

	inline static int32_t get_offset_of_mCurrentlyInitializing_6() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_t2762250941, ___mCurrentlyInitializing_6)); }
	inline bool get_mCurrentlyInitializing_6() const { return ___mCurrentlyInitializing_6; }
	inline bool* get_address_of_mCurrentlyInitializing_6() { return &___mCurrentlyInitializing_6; }
	inline void set_mCurrentlyInitializing_6(bool value)
	{
		___mCurrentlyInitializing_6 = value;
	}

	inline static int32_t get_offset_of_mInitSuccess_7() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_t2762250941, ___mInitSuccess_7)); }
	inline bool get_mInitSuccess_7() const { return ___mInitSuccess_7; }
	inline bool* get_address_of_mInitSuccess_7() { return &___mInitSuccess_7; }
	inline void set_mInitSuccess_7(bool value)
	{
		___mInitSuccess_7 = value;
	}

	inline static int32_t get_offset_of_mRecoStarted_8() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_t2762250941, ___mRecoStarted_8)); }
	inline bool get_mRecoStarted_8() const { return ___mRecoStarted_8; }
	inline bool* get_address_of_mRecoStarted_8() { return &___mRecoStarted_8; }
	inline void set_mRecoStarted_8(bool value)
	{
		___mRecoStarted_8 = value;
	}

	inline static int32_t get_offset_of_mOnInitializedCalled_9() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_t2762250941, ___mOnInitializedCalled_9)); }
	inline bool get_mOnInitializedCalled_9() const { return ___mOnInitializedCalled_9; }
	inline bool* get_address_of_mOnInitializedCalled_9() { return &___mOnInitializedCalled_9; }
	inline void set_mOnInitializedCalled_9(bool value)
	{
		___mOnInitializedCalled_9 = value;
	}

	inline static int32_t get_offset_of_mHandlers_10() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_t2762250941, ___mHandlers_10)); }
	inline List_1_t2783226355 * get_mHandlers_10() const { return ___mHandlers_10; }
	inline List_1_t2783226355 ** get_address_of_mHandlers_10() { return &___mHandlers_10; }
	inline void set_mHandlers_10(List_1_t2783226355 * value)
	{
		___mHandlers_10 = value;
		Il2CppCodeGenWriteBarrier((&___mHandlers_10), value);
	}

	inline static int32_t get_offset_of_mTargetFinderStartedBeforeDisable_11() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_t2762250941, ___mTargetFinderStartedBeforeDisable_11)); }
	inline bool get_mTargetFinderStartedBeforeDisable_11() const { return ___mTargetFinderStartedBeforeDisable_11; }
	inline bool* get_address_of_mTargetFinderStartedBeforeDisable_11() { return &___mTargetFinderStartedBeforeDisable_11; }
	inline void set_mTargetFinderStartedBeforeDisable_11(bool value)
	{
		___mTargetFinderStartedBeforeDisable_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTRECOBEHAVIOUR_T2762250941_H
#ifndef TRACKABLEBEHAVIOUR_T1113559212_H
#define TRACKABLEBEHAVIOUR_T1113559212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour
struct  TrackableBehaviour_t1113559212  : public VuforiaMonoBehaviour_t1150221792
{
public:
	// System.Double Vuforia.TrackableBehaviour::<TimeStamp>k__BackingField
	double ___U3CTimeStampU3Ek__BackingField_4;
	// System.String Vuforia.TrackableBehaviour::mTrackableName
	String_t* ___mTrackableName_5;
	// System.Boolean Vuforia.TrackableBehaviour::mPreserveChildSize
	bool ___mPreserveChildSize_6;
	// System.Boolean Vuforia.TrackableBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_7;
	// UnityEngine.Vector3 Vuforia.TrackableBehaviour::mPreviousScale
	Vector3_t3722313464  ___mPreviousScale_8;
	// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::mStatus
	int32_t ___mStatus_9;
	// Vuforia.Trackable Vuforia.TrackableBehaviour::mTrackable
	RuntimeObject* ___mTrackable_10;
	// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler> Vuforia.TrackableBehaviour::mTrackableEventHandlers
	List_1_t2968050330 * ___mTrackableEventHandlers_11;

public:
	inline static int32_t get_offset_of_U3CTimeStampU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___U3CTimeStampU3Ek__BackingField_4)); }
	inline double get_U3CTimeStampU3Ek__BackingField_4() const { return ___U3CTimeStampU3Ek__BackingField_4; }
	inline double* get_address_of_U3CTimeStampU3Ek__BackingField_4() { return &___U3CTimeStampU3Ek__BackingField_4; }
	inline void set_U3CTimeStampU3Ek__BackingField_4(double value)
	{
		___U3CTimeStampU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_mTrackableName_5() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackableName_5)); }
	inline String_t* get_mTrackableName_5() const { return ___mTrackableName_5; }
	inline String_t** get_address_of_mTrackableName_5() { return &___mTrackableName_5; }
	inline void set_mTrackableName_5(String_t* value)
	{
		___mTrackableName_5 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableName_5), value);
	}

	inline static int32_t get_offset_of_mPreserveChildSize_6() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mPreserveChildSize_6)); }
	inline bool get_mPreserveChildSize_6() const { return ___mPreserveChildSize_6; }
	inline bool* get_address_of_mPreserveChildSize_6() { return &___mPreserveChildSize_6; }
	inline void set_mPreserveChildSize_6(bool value)
	{
		___mPreserveChildSize_6 = value;
	}

	inline static int32_t get_offset_of_mInitializedInEditor_7() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mInitializedInEditor_7)); }
	inline bool get_mInitializedInEditor_7() const { return ___mInitializedInEditor_7; }
	inline bool* get_address_of_mInitializedInEditor_7() { return &___mInitializedInEditor_7; }
	inline void set_mInitializedInEditor_7(bool value)
	{
		___mInitializedInEditor_7 = value;
	}

	inline static int32_t get_offset_of_mPreviousScale_8() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mPreviousScale_8)); }
	inline Vector3_t3722313464  get_mPreviousScale_8() const { return ___mPreviousScale_8; }
	inline Vector3_t3722313464 * get_address_of_mPreviousScale_8() { return &___mPreviousScale_8; }
	inline void set_mPreviousScale_8(Vector3_t3722313464  value)
	{
		___mPreviousScale_8 = value;
	}

	inline static int32_t get_offset_of_mStatus_9() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mStatus_9)); }
	inline int32_t get_mStatus_9() const { return ___mStatus_9; }
	inline int32_t* get_address_of_mStatus_9() { return &___mStatus_9; }
	inline void set_mStatus_9(int32_t value)
	{
		___mStatus_9 = value;
	}

	inline static int32_t get_offset_of_mTrackable_10() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackable_10)); }
	inline RuntimeObject* get_mTrackable_10() const { return ___mTrackable_10; }
	inline RuntimeObject** get_address_of_mTrackable_10() { return &___mTrackable_10; }
	inline void set_mTrackable_10(RuntimeObject* value)
	{
		___mTrackable_10 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackable_10), value);
	}

	inline static int32_t get_offset_of_mTrackableEventHandlers_11() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackableEventHandlers_11)); }
	inline List_1_t2968050330 * get_mTrackableEventHandlers_11() const { return ___mTrackableEventHandlers_11; }
	inline List_1_t2968050330 ** get_address_of_mTrackableEventHandlers_11() { return &___mTrackableEventHandlers_11; }
	inline void set_mTrackableEventHandlers_11(List_1_t2968050330 * value)
	{
		___mTrackableEventHandlers_11 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableEventHandlers_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEBEHAVIOUR_T1113559212_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_21;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_22;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_23;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_25;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_26;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_27;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_28;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_29;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_21)); }
	inline bool get_m_ShouldRecalculateStencil_21() const { return ___m_ShouldRecalculateStencil_21; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_21() { return &___m_ShouldRecalculateStencil_21; }
	inline void set_m_ShouldRecalculateStencil_21(bool value)
	{
		___m_ShouldRecalculateStencil_21 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_22)); }
	inline Material_t340375123 * get_m_MaskMaterial_22() const { return ___m_MaskMaterial_22; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_22() { return &___m_MaskMaterial_22; }
	inline void set_m_MaskMaterial_22(Material_t340375123 * value)
	{
		___m_MaskMaterial_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_22), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_23)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_23() const { return ___m_ParentMask_23; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_23() { return &___m_ParentMask_23; }
	inline void set_m_ParentMask_23(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_23), value);
	}

	inline static int32_t get_offset_of_m_Maskable_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_24)); }
	inline bool get_m_Maskable_24() const { return ___m_Maskable_24; }
	inline bool* get_address_of_m_Maskable_24() { return &___m_Maskable_24; }
	inline void set_m_Maskable_24(bool value)
	{
		___m_Maskable_24 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_25)); }
	inline bool get_m_IncludeForMasking_25() const { return ___m_IncludeForMasking_25; }
	inline bool* get_address_of_m_IncludeForMasking_25() { return &___m_IncludeForMasking_25; }
	inline void set_m_IncludeForMasking_25(bool value)
	{
		___m_IncludeForMasking_25 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_26)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_26() const { return ___m_OnCullStateChanged_26; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_26() { return &___m_OnCullStateChanged_26; }
	inline void set_m_OnCullStateChanged_26(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_26), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_27)); }
	inline bool get_m_ShouldRecalculate_27() const { return ___m_ShouldRecalculate_27; }
	inline bool* get_address_of_m_ShouldRecalculate_27() { return &___m_ShouldRecalculate_27; }
	inline void set_m_ShouldRecalculate_27(bool value)
	{
		___m_ShouldRecalculate_27 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_28)); }
	inline int32_t get_m_StencilValue_28() const { return ___m_StencilValue_28; }
	inline int32_t* get_address_of_m_StencilValue_28() { return &___m_StencilValue_28; }
	inline void set_m_StencilValue_28(int32_t value)
	{
		___m_StencilValue_28 = value;
	}

	inline static int32_t get_offset_of_m_Corners_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_29)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_29() const { return ___m_Corners_29; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_29() { return &___m_Corners_29; }
	inline void set_m_Corners_29(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef DATASETTRACKABLEBEHAVIOUR_T3430730379_H
#define DATASETTRACKABLEBEHAVIOUR_T3430730379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DataSetTrackableBehaviour
struct  DataSetTrackableBehaviour_t3430730379  : public TrackableBehaviour_t1113559212
{
public:
	// System.String Vuforia.DataSetTrackableBehaviour::mDataSetPath
	String_t* ___mDataSetPath_12;

public:
	inline static int32_t get_offset_of_mDataSetPath_12() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t3430730379, ___mDataSetPath_12)); }
	inline String_t* get_mDataSetPath_12() const { return ___mDataSetPath_12; }
	inline String_t** get_address_of_mDataSetPath_12() { return &___mDataSetPath_12; }
	inline void set_mDataSetPath_12(String_t* value)
	{
		___mDataSetPath_12 = value;
		Il2CppCodeGenWriteBarrier((&___mDataSetPath_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASETTRACKABLEBEHAVIOUR_T3430730379_H
#ifndef MODELRECOBEHAVIOUR_T2312633019_H
#define MODELRECOBEHAVIOUR_T2312633019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ModelRecoBehaviour
struct  ModelRecoBehaviour_t2312633019  : public ObjectRecoBehaviour_t2762250941
{
public:
	// System.String Vuforia.ModelRecoBehaviour::Database
	String_t* ___Database_12;

public:
	inline static int32_t get_offset_of_Database_12() { return static_cast<int32_t>(offsetof(ModelRecoBehaviour_t2312633019, ___Database_12)); }
	inline String_t* get_Database_12() const { return ___Database_12; }
	inline String_t** get_address_of_Database_12() { return &___Database_12; }
	inline void set_Database_12(String_t* value)
	{
		___Database_12 = value;
		Il2CppCodeGenWriteBarrier((&___Database_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODELRECOBEHAVIOUR_T2312633019_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_30;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_31;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_32;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_33;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_35;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_36;

public:
	inline static int32_t get_offset_of_m_FontData_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_30)); }
	inline FontData_t746620069 * get_m_FontData_30() const { return ___m_FontData_30; }
	inline FontData_t746620069 ** get_address_of_m_FontData_30() { return &___m_FontData_30; }
	inline void set_m_FontData_30(FontData_t746620069 * value)
	{
		___m_FontData_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_30), value);
	}

	inline static int32_t get_offset_of_m_Text_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_31)); }
	inline String_t* get_m_Text_31() const { return ___m_Text_31; }
	inline String_t** get_address_of_m_Text_31() { return &___m_Text_31; }
	inline void set_m_Text_31(String_t* value)
	{
		___m_Text_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_31), value);
	}

	inline static int32_t get_offset_of_m_TextCache_32() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_32)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_32() const { return ___m_TextCache_32; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_32() { return &___m_TextCache_32; }
	inline void set_m_TextCache_32(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_32), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_33)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_33() const { return ___m_TextCacheForLayout_33; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_33() { return &___m_TextCacheForLayout_33; }
	inline void set_m_TextCacheForLayout_33(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_33), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_35() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_35)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_35() const { return ___m_DisableFontTextureRebuiltCallback_35; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_35() { return &___m_DisableFontTextureRebuiltCallback_35; }
	inline void set_m_DisableFontTextureRebuiltCallback_35(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_35 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_36() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_36)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_36() const { return ___m_TempVerts_36; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_36() { return &___m_TempVerts_36; }
	inline void set_m_TempVerts_36(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_36), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_34;

public:
	inline static int32_t get_offset_of_s_DefaultText_34() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_34)); }
	inline Material_t340375123 * get_s_DefaultText_34() const { return ___s_DefaultText_34; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_34() { return &___s_DefaultText_34; }
	inline void set_s_DefaultText_34(Material_t340375123 * value)
	{
		___s_DefaultText_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_34), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
#ifndef MODELTARGETBEHAVIOUR_T712978329_H
#define MODELTARGETBEHAVIOUR_T712978329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ModelTargetBehaviour
struct  ModelTargetBehaviour_t712978329  : public DataSetTrackableBehaviour_t3430730379
{
public:
	// Vuforia.InternalModelTarget Vuforia.ModelTargetBehaviour::mModelTarget
	RuntimeObject* ___mModelTarget_14;
	// UnityEngine.GameObject Vuforia.ModelTargetBehaviour::mGuideViewRenderer
	GameObject_t1113636619 * ___mGuideViewRenderer_15;
	// Vuforia.PositionalDeviceTracker Vuforia.ModelTargetBehaviour::mDeviceTracker
	PositionalDeviceTracker_t656722001 * ___mDeviceTracker_16;
	// Vuforia.ModelTargetType Vuforia.ModelTargetBehaviour::mModelTargetType
	int32_t ___mModelTargetType_17;
	// System.Single Vuforia.ModelTargetBehaviour::mBaseSize
	float ___mBaseSize_18;
	// System.Single Vuforia.ModelTargetBehaviour::mAspectRatioXY
	float ___mAspectRatioXY_19;
	// System.Single Vuforia.ModelTargetBehaviour::mAspectRatioXZ
	float ___mAspectRatioXZ_20;
	// System.Boolean Vuforia.ModelTargetBehaviour::mShowBoundingBox
	bool ___mShowBoundingBox_21;
	// System.Boolean Vuforia.ModelTargetBehaviour::mOverrideSnappingPose
	bool ___mOverrideSnappingPose_22;
	// UnityEngine.Vector3 Vuforia.ModelTargetBehaviour::mBBoxMin
	Vector3_t3722313464  ___mBBoxMin_23;
	// UnityEngine.Vector3 Vuforia.ModelTargetBehaviour::mBBoxMax
	Vector3_t3722313464  ___mBBoxMax_24;
	// UnityEngine.Texture2D Vuforia.ModelTargetBehaviour::mPreviewImage
	Texture2D_t3840446185 * ___mPreviewImage_25;
	// System.Single Vuforia.ModelTargetBehaviour::mLength
	float ___mLength_26;
	// System.Single Vuforia.ModelTargetBehaviour::mWidth
	float ___mWidth_27;
	// System.Single Vuforia.ModelTargetBehaviour::mHeight
	float ___mHeight_28;
	// UnityEngine.GameObject Vuforia.ModelTargetBehaviour::m3DGuideViewModel
	GameObject_t1113636619 * ___m3DGuideViewModel_29;
	// UnityEngine.Texture2D Vuforia.ModelTargetBehaviour::m2DGuideViewImage
	Texture2D_t3840446185 * ___m2DGuideViewImage_30;
	// Vuforia.ModelTargetBehaviour/GuideViewDisplayMode Vuforia.ModelTargetBehaviour::mGuideViewDisplayMode
	int32_t ___mGuideViewDisplayMode_31;
	// UnityEngine.Material Vuforia.ModelTargetBehaviour::m2DGuideViewMaterial
	Material_t340375123 * ___m2DGuideViewMaterial_32;
	// UnityEngine.Material Vuforia.ModelTargetBehaviour::m3DGuideViewMaterial
	Material_t340375123 * ___m3DGuideViewMaterial_33;
	// System.String Vuforia.ModelTargetBehaviour::mSelectedGuideView
	String_t* ___mSelectedGuideView_34;
	// UnityEngine.Vector3 Vuforia.ModelTargetBehaviour::mLastTransformScale
	Vector3_t3722313464  ___mLastTransformScale_35;
	// UnityEngine.Vector3 Vuforia.ModelTargetBehaviour::mLastSize
	Vector3_t3722313464  ___mLastSize_36;
	// System.Boolean Vuforia.ModelTargetBehaviour::mDataSetIsActive
	bool ___mDataSetIsActive_37;
	// Vuforia.ModelRecoBehaviour Vuforia.ModelTargetBehaviour::mModelRecoBehaviour
	ModelRecoBehaviour_t2312633019 * ___mModelRecoBehaviour_38;

public:
	inline static int32_t get_offset_of_mModelTarget_14() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t712978329, ___mModelTarget_14)); }
	inline RuntimeObject* get_mModelTarget_14() const { return ___mModelTarget_14; }
	inline RuntimeObject** get_address_of_mModelTarget_14() { return &___mModelTarget_14; }
	inline void set_mModelTarget_14(RuntimeObject* value)
	{
		___mModelTarget_14 = value;
		Il2CppCodeGenWriteBarrier((&___mModelTarget_14), value);
	}

	inline static int32_t get_offset_of_mGuideViewRenderer_15() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t712978329, ___mGuideViewRenderer_15)); }
	inline GameObject_t1113636619 * get_mGuideViewRenderer_15() const { return ___mGuideViewRenderer_15; }
	inline GameObject_t1113636619 ** get_address_of_mGuideViewRenderer_15() { return &___mGuideViewRenderer_15; }
	inline void set_mGuideViewRenderer_15(GameObject_t1113636619 * value)
	{
		___mGuideViewRenderer_15 = value;
		Il2CppCodeGenWriteBarrier((&___mGuideViewRenderer_15), value);
	}

	inline static int32_t get_offset_of_mDeviceTracker_16() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t712978329, ___mDeviceTracker_16)); }
	inline PositionalDeviceTracker_t656722001 * get_mDeviceTracker_16() const { return ___mDeviceTracker_16; }
	inline PositionalDeviceTracker_t656722001 ** get_address_of_mDeviceTracker_16() { return &___mDeviceTracker_16; }
	inline void set_mDeviceTracker_16(PositionalDeviceTracker_t656722001 * value)
	{
		___mDeviceTracker_16 = value;
		Il2CppCodeGenWriteBarrier((&___mDeviceTracker_16), value);
	}

	inline static int32_t get_offset_of_mModelTargetType_17() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t712978329, ___mModelTargetType_17)); }
	inline int32_t get_mModelTargetType_17() const { return ___mModelTargetType_17; }
	inline int32_t* get_address_of_mModelTargetType_17() { return &___mModelTargetType_17; }
	inline void set_mModelTargetType_17(int32_t value)
	{
		___mModelTargetType_17 = value;
	}

	inline static int32_t get_offset_of_mBaseSize_18() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t712978329, ___mBaseSize_18)); }
	inline float get_mBaseSize_18() const { return ___mBaseSize_18; }
	inline float* get_address_of_mBaseSize_18() { return &___mBaseSize_18; }
	inline void set_mBaseSize_18(float value)
	{
		___mBaseSize_18 = value;
	}

	inline static int32_t get_offset_of_mAspectRatioXY_19() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t712978329, ___mAspectRatioXY_19)); }
	inline float get_mAspectRatioXY_19() const { return ___mAspectRatioXY_19; }
	inline float* get_address_of_mAspectRatioXY_19() { return &___mAspectRatioXY_19; }
	inline void set_mAspectRatioXY_19(float value)
	{
		___mAspectRatioXY_19 = value;
	}

	inline static int32_t get_offset_of_mAspectRatioXZ_20() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t712978329, ___mAspectRatioXZ_20)); }
	inline float get_mAspectRatioXZ_20() const { return ___mAspectRatioXZ_20; }
	inline float* get_address_of_mAspectRatioXZ_20() { return &___mAspectRatioXZ_20; }
	inline void set_mAspectRatioXZ_20(float value)
	{
		___mAspectRatioXZ_20 = value;
	}

	inline static int32_t get_offset_of_mShowBoundingBox_21() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t712978329, ___mShowBoundingBox_21)); }
	inline bool get_mShowBoundingBox_21() const { return ___mShowBoundingBox_21; }
	inline bool* get_address_of_mShowBoundingBox_21() { return &___mShowBoundingBox_21; }
	inline void set_mShowBoundingBox_21(bool value)
	{
		___mShowBoundingBox_21 = value;
	}

	inline static int32_t get_offset_of_mOverrideSnappingPose_22() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t712978329, ___mOverrideSnappingPose_22)); }
	inline bool get_mOverrideSnappingPose_22() const { return ___mOverrideSnappingPose_22; }
	inline bool* get_address_of_mOverrideSnappingPose_22() { return &___mOverrideSnappingPose_22; }
	inline void set_mOverrideSnappingPose_22(bool value)
	{
		___mOverrideSnappingPose_22 = value;
	}

	inline static int32_t get_offset_of_mBBoxMin_23() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t712978329, ___mBBoxMin_23)); }
	inline Vector3_t3722313464  get_mBBoxMin_23() const { return ___mBBoxMin_23; }
	inline Vector3_t3722313464 * get_address_of_mBBoxMin_23() { return &___mBBoxMin_23; }
	inline void set_mBBoxMin_23(Vector3_t3722313464  value)
	{
		___mBBoxMin_23 = value;
	}

	inline static int32_t get_offset_of_mBBoxMax_24() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t712978329, ___mBBoxMax_24)); }
	inline Vector3_t3722313464  get_mBBoxMax_24() const { return ___mBBoxMax_24; }
	inline Vector3_t3722313464 * get_address_of_mBBoxMax_24() { return &___mBBoxMax_24; }
	inline void set_mBBoxMax_24(Vector3_t3722313464  value)
	{
		___mBBoxMax_24 = value;
	}

	inline static int32_t get_offset_of_mPreviewImage_25() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t712978329, ___mPreviewImage_25)); }
	inline Texture2D_t3840446185 * get_mPreviewImage_25() const { return ___mPreviewImage_25; }
	inline Texture2D_t3840446185 ** get_address_of_mPreviewImage_25() { return &___mPreviewImage_25; }
	inline void set_mPreviewImage_25(Texture2D_t3840446185 * value)
	{
		___mPreviewImage_25 = value;
		Il2CppCodeGenWriteBarrier((&___mPreviewImage_25), value);
	}

	inline static int32_t get_offset_of_mLength_26() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t712978329, ___mLength_26)); }
	inline float get_mLength_26() const { return ___mLength_26; }
	inline float* get_address_of_mLength_26() { return &___mLength_26; }
	inline void set_mLength_26(float value)
	{
		___mLength_26 = value;
	}

	inline static int32_t get_offset_of_mWidth_27() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t712978329, ___mWidth_27)); }
	inline float get_mWidth_27() const { return ___mWidth_27; }
	inline float* get_address_of_mWidth_27() { return &___mWidth_27; }
	inline void set_mWidth_27(float value)
	{
		___mWidth_27 = value;
	}

	inline static int32_t get_offset_of_mHeight_28() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t712978329, ___mHeight_28)); }
	inline float get_mHeight_28() const { return ___mHeight_28; }
	inline float* get_address_of_mHeight_28() { return &___mHeight_28; }
	inline void set_mHeight_28(float value)
	{
		___mHeight_28 = value;
	}

	inline static int32_t get_offset_of_m3DGuideViewModel_29() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t712978329, ___m3DGuideViewModel_29)); }
	inline GameObject_t1113636619 * get_m3DGuideViewModel_29() const { return ___m3DGuideViewModel_29; }
	inline GameObject_t1113636619 ** get_address_of_m3DGuideViewModel_29() { return &___m3DGuideViewModel_29; }
	inline void set_m3DGuideViewModel_29(GameObject_t1113636619 * value)
	{
		___m3DGuideViewModel_29 = value;
		Il2CppCodeGenWriteBarrier((&___m3DGuideViewModel_29), value);
	}

	inline static int32_t get_offset_of_m2DGuideViewImage_30() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t712978329, ___m2DGuideViewImage_30)); }
	inline Texture2D_t3840446185 * get_m2DGuideViewImage_30() const { return ___m2DGuideViewImage_30; }
	inline Texture2D_t3840446185 ** get_address_of_m2DGuideViewImage_30() { return &___m2DGuideViewImage_30; }
	inline void set_m2DGuideViewImage_30(Texture2D_t3840446185 * value)
	{
		___m2DGuideViewImage_30 = value;
		Il2CppCodeGenWriteBarrier((&___m2DGuideViewImage_30), value);
	}

	inline static int32_t get_offset_of_mGuideViewDisplayMode_31() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t712978329, ___mGuideViewDisplayMode_31)); }
	inline int32_t get_mGuideViewDisplayMode_31() const { return ___mGuideViewDisplayMode_31; }
	inline int32_t* get_address_of_mGuideViewDisplayMode_31() { return &___mGuideViewDisplayMode_31; }
	inline void set_mGuideViewDisplayMode_31(int32_t value)
	{
		___mGuideViewDisplayMode_31 = value;
	}

	inline static int32_t get_offset_of_m2DGuideViewMaterial_32() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t712978329, ___m2DGuideViewMaterial_32)); }
	inline Material_t340375123 * get_m2DGuideViewMaterial_32() const { return ___m2DGuideViewMaterial_32; }
	inline Material_t340375123 ** get_address_of_m2DGuideViewMaterial_32() { return &___m2DGuideViewMaterial_32; }
	inline void set_m2DGuideViewMaterial_32(Material_t340375123 * value)
	{
		___m2DGuideViewMaterial_32 = value;
		Il2CppCodeGenWriteBarrier((&___m2DGuideViewMaterial_32), value);
	}

	inline static int32_t get_offset_of_m3DGuideViewMaterial_33() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t712978329, ___m3DGuideViewMaterial_33)); }
	inline Material_t340375123 * get_m3DGuideViewMaterial_33() const { return ___m3DGuideViewMaterial_33; }
	inline Material_t340375123 ** get_address_of_m3DGuideViewMaterial_33() { return &___m3DGuideViewMaterial_33; }
	inline void set_m3DGuideViewMaterial_33(Material_t340375123 * value)
	{
		___m3DGuideViewMaterial_33 = value;
		Il2CppCodeGenWriteBarrier((&___m3DGuideViewMaterial_33), value);
	}

	inline static int32_t get_offset_of_mSelectedGuideView_34() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t712978329, ___mSelectedGuideView_34)); }
	inline String_t* get_mSelectedGuideView_34() const { return ___mSelectedGuideView_34; }
	inline String_t** get_address_of_mSelectedGuideView_34() { return &___mSelectedGuideView_34; }
	inline void set_mSelectedGuideView_34(String_t* value)
	{
		___mSelectedGuideView_34 = value;
		Il2CppCodeGenWriteBarrier((&___mSelectedGuideView_34), value);
	}

	inline static int32_t get_offset_of_mLastTransformScale_35() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t712978329, ___mLastTransformScale_35)); }
	inline Vector3_t3722313464  get_mLastTransformScale_35() const { return ___mLastTransformScale_35; }
	inline Vector3_t3722313464 * get_address_of_mLastTransformScale_35() { return &___mLastTransformScale_35; }
	inline void set_mLastTransformScale_35(Vector3_t3722313464  value)
	{
		___mLastTransformScale_35 = value;
	}

	inline static int32_t get_offset_of_mLastSize_36() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t712978329, ___mLastSize_36)); }
	inline Vector3_t3722313464  get_mLastSize_36() const { return ___mLastSize_36; }
	inline Vector3_t3722313464 * get_address_of_mLastSize_36() { return &___mLastSize_36; }
	inline void set_mLastSize_36(Vector3_t3722313464  value)
	{
		___mLastSize_36 = value;
	}

	inline static int32_t get_offset_of_mDataSetIsActive_37() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t712978329, ___mDataSetIsActive_37)); }
	inline bool get_mDataSetIsActive_37() const { return ___mDataSetIsActive_37; }
	inline bool* get_address_of_mDataSetIsActive_37() { return &___mDataSetIsActive_37; }
	inline void set_mDataSetIsActive_37(bool value)
	{
		___mDataSetIsActive_37 = value;
	}

	inline static int32_t get_offset_of_mModelRecoBehaviour_38() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t712978329, ___mModelRecoBehaviour_38)); }
	inline ModelRecoBehaviour_t2312633019 * get_mModelRecoBehaviour_38() const { return ___mModelRecoBehaviour_38; }
	inline ModelRecoBehaviour_t2312633019 ** get_address_of_mModelRecoBehaviour_38() { return &___mModelRecoBehaviour_38; }
	inline void set_mModelRecoBehaviour_38(ModelRecoBehaviour_t2312633019 * value)
	{
		___mModelRecoBehaviour_38 = value;
		Il2CppCodeGenWriteBarrier((&___mModelRecoBehaviour_38), value);
	}
};

struct ModelTargetBehaviour_t712978329_StaticFields
{
public:
	// System.String Vuforia.ModelTargetBehaviour::GUIDE_VIEW_RENDERER_NAME
	String_t* ___GUIDE_VIEW_RENDERER_NAME_13;

public:
	inline static int32_t get_offset_of_GUIDE_VIEW_RENDERER_NAME_13() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t712978329_StaticFields, ___GUIDE_VIEW_RENDERER_NAME_13)); }
	inline String_t* get_GUIDE_VIEW_RENDERER_NAME_13() const { return ___GUIDE_VIEW_RENDERER_NAME_13; }
	inline String_t** get_address_of_GUIDE_VIEW_RENDERER_NAME_13() { return &___GUIDE_VIEW_RENDERER_NAME_13; }
	inline void set_GUIDE_VIEW_RENDERER_NAME_13(String_t* value)
	{
		___GUIDE_VIEW_RENDERER_NAME_13 = value;
		Il2CppCodeGenWriteBarrier((&___GUIDE_VIEW_RENDERER_NAME_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODELTARGETBEHAVIOUR_T712978329_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Vuforia.ModelTargetBehaviour[]
struct ModelTargetBehaviourU5BU5D_t240552420  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ModelTargetBehaviour_t712978329 * m_Items[1];

public:
	inline ModelTargetBehaviour_t712978329 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ModelTargetBehaviour_t712978329 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ModelTargetBehaviour_t712978329 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ModelTargetBehaviour_t712978329 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ModelTargetBehaviour_t712978329 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ModelTargetBehaviour_t712978329 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Plane[]
struct PlaneU5BU5D_t3656189108  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Plane_t1000493321  m_Items[1];

public:
	inline Plane_t1000493321  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Plane_t1000493321 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Plane_t1000493321  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Plane_t1000493321  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Plane_t1000493321 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Plane_t1000493321  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t3210418286  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Renderer_t2627027031 * m_Items[1];

public:
	inline Renderer_t2627027031 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t2627027031 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t2627027031 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Renderer_t2627027031 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t2627027031 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t2627027031 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t4234922487  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t1773347010 * m_Items[1];

public:
	inline Collider_t1773347010 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1773347010 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1773347010 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Collider_t1773347010 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1773347010 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1773347010 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t682926938  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Canvas_t3310196443 * m_Items[1];

public:
	inline Canvas_t3310196443 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Canvas_t3310196443 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Canvas_t3310196443 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Canvas_t3310196443 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Canvas_t3310196443 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Canvas_t3310196443 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<Vuforia.VuforiaUnity/InitError>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_m2713332384_gshared (Action_1_t3593217305 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::GetBuiltinResource<System.Object>(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Resources_GetBuiltinResource_TisRuntimeObject_m3352626831_gshared (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// !!0[] UnityEngine.Resources::FindObjectsOfTypeAll<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Resources_FindObjectsOfTypeAll_TisRuntimeObject_m1330590825_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR List_1_t257213610 * Enumerable_ToList_TisRuntimeObject_m1551499789_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_2__ctor_m3104565095_gshared (Func_2_t3759279471 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m3454096398_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t3759279471 * p1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Enumerable_ToArray_TisRuntimeObject_m3447781822_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared (Component_t1923634451 * __this, bool p0, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GL::PushMatrix()
extern "C" IL2CPP_METHOD_ATTR void GL_PushMatrix_m1848274883 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  Transform_get_localToWorldMatrix_m4155710351 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GL::MultMatrix(UnityEngine.Matrix4x4)
extern "C" IL2CPP_METHOD_ATTR void GL_MultMatrix_m3576884247 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * GameObject_CreatePrimitive_m2902598419 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t587009260 * GameObject_GetComponent_TisMeshRenderer_t587009260_m1904099017 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t587009260 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C" IL2CPP_METHOD_ATTR Material_t340375123 * Renderer_get_material_m4171603682 (Renderer_t2627027031 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Material__ctor_m249231841 (Material_t340375123 * __this, Material_t340375123 * p0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Material_set_color_m1794818007 (Material_t340375123 * __this, Color_t2555686324  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Material_SetPass_m686253719 (Material_t340375123 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::Begin(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GL_Begin_m1290681325 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void GL_Vertex3_m766753641 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.GL::End()
extern "C" IL2CPP_METHOD_ATTR void GL_End_m539612367 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.GL::PopMatrix()
extern "C" IL2CPP_METHOD_ATTR void GL_PopMatrix_m3416050869 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void VuforiaMonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VuforiaMonoBehaviour__ctor_m348562674 (VuforiaMonoBehaviour_t1150221792 * __this, const RuntimeMethod* method);
// System.Void DefaultInitializationErrorHandler::SetErrorCode(Vuforia.VuforiaUnity/InitError)
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetErrorCode_m594938833 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___errorCode0, const RuntimeMethod* method);
// System.Void DefaultInitializationErrorHandler::SetErrorOccurred(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetErrorOccurred_m2281554525 (DefaultInitializationErrorHandler_t3109936861 * __this, bool ___errorOccurred0, const RuntimeMethod* method);
// Vuforia.VuforiaRuntime Vuforia.VuforiaRuntime::get_Instance()
extern "C" IL2CPP_METHOD_ATTR VuforiaRuntime_t1949122020 * VuforiaRuntime_get_Instance_m1058251676 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Action`1<Vuforia.VuforiaUnity/InitError>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2713332384 (Action_1_t3593217305 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3593217305 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m2713332384_gshared)(__this, p0, p1, method);
}
// System.Void Vuforia.VuforiaRuntime::RegisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C" IL2CPP_METHOD_ATTR void VuforiaRuntime_RegisterVuforiaInitErrorCallback_m2728879505 (VuforiaRuntime_t1949122020 * __this, Action_1_t3593217305 * p0, const RuntimeMethod* method);
// System.Void DefaultInitializationErrorHandler::SetupGUIStyles()
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetupGUIStyles_m1676302763 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void WindowFunction__ctor_m2544237635 (WindowFunction_t3146511083 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
extern "C" IL2CPP_METHOD_ATTR Rect_t2360479859  GUI_Window_m1088326791 (RuntimeObject * __this /* static, unused */, int32_t p0, Rect_t2360479859  p1, WindowFunction_t3146511083 * p2, String_t* p3, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaRuntime::UnregisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C" IL2CPP_METHOD_ATTR void VuforiaRuntime_UnregisterVuforiaInitErrorCallback_m1304340042 (VuforiaRuntime_t1949122020 * __this, Action_1_t3593217305 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUI_Label_m2420537077 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, String_t* p1, GUIStyle_t3956901511 * p2, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR bool GUI_Button_m2223708732 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, String_t* p1, GUIStyle_t3956901511 * p2, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
extern "C" IL2CPP_METHOD_ATTR void Application_Quit_m470877999 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String DefaultInitializationErrorHandler::getKeyInfo()
extern "C" IL2CPP_METHOD_ATTR String_t* DefaultInitializationErrorHandler_getKeyInfo_m3940778236 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_productName()
extern "C" IL2CPP_METHOD_ATTR String_t* Application_get_productName_m2401755738 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Replace_m1273907647 (String_t* __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::get_Instance()
extern "C" IL2CPP_METHOD_ATTR VuforiaConfiguration_t1763229349 * VuforiaConfiguration_get_Instance_m3335903280 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration Vuforia.VuforiaConfiguration::get_Vuforia()
extern "C" IL2CPP_METHOD_ATTR GenericVuforiaConfiguration_t3697830469 * VuforiaConfiguration_get_Vuforia_m1588208597 (VuforiaConfiguration_t1763229349 * __this, const RuntimeMethod* method);
// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_LicenseKey()
extern "C" IL2CPP_METHOD_ATTR String_t* GenericVuforiaConfiguration_get_LicenseKey_m2270076687 (GenericVuforiaConfiguration_t3697830469 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Single UnityEngine.Screen::get_dpi()
extern "C" IL2CPP_METHOD_ATTR float Screen_get_dpi_m495672463 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Texture2D DefaultInitializationErrorHandler::CreateSinglePixelTexture(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * DefaultInitializationErrorHandler_CreateSinglePixelTexture_m3383403409 (DefaultInitializationErrorHandler_t3109936861 * __this, Color_t2555686324  ___color0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_InverseLerp_m4155825980 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Color__ctor_m286683560 (Color_t2555686324 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GUIStyle__ctor_m4038363858 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method);
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
extern "C" IL2CPP_METHOD_ATTR GUIStyleState_t1397964415 * GUIStyle_get_normal_m729441812 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_background(UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR void GUIStyleState_set_background_m369476077 (GUIStyleState_t1397964415 * __this, Texture2D_t3840446185 * p0, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::GetBuiltinResource<UnityEngine.Font>(System.String)
inline Font_t1956802104 * Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method)
{
	return ((  Font_t1956802104 * (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))Resources_GetBuiltinResource_TisRuntimeObject_m3352626831_gshared)(__this /* static, unused */, p0, method);
}
// System.Void UnityEngine.GUIStyle::set_font(UnityEngine.Font)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_font_m2490449107 (GUIStyle_t3956901511 * __this, Font_t1956802104 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_m1566850023 (GUIStyle_t3956901511 * __this, int32_t p0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_black_m719512684 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_m1105876047 (GUIStyleState_t1397964415 * __this, Color_t2555686324  p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_wordWrap_m1419501823 (GUIStyle_t3956901511 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_alignment_m3944619660 (GUIStyle_t3956901511 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.RectOffset::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RectOffset__ctor_m732140021 (RectOffset_t1369453676 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_padding(UnityEngine.RectOffset)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_padding_m3302456044 (GUIStyle_t3956901511 * __this, RectOffset_t1369453676 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle__ctor_m2912682974 (GUIStyle_t3956901511 * __this, GUIStyle_t3956901511 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2D__ctor_m2862217990 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, int32_t p2, bool p3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m2984741184 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, Color_t2555686324  p2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
extern "C" IL2CPP_METHOD_ATTR void Texture2D_Apply_m2271746283 (Texture2D_t3840446185 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Vuforia.ModelRecoBehaviour>()
inline ModelRecoBehaviour_t2312633019 * Component_GetComponent_TisModelRecoBehaviour_t2312633019_m4226608877 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  ModelRecoBehaviour_t2312633019 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Void Vuforia.ObjectRecoBehaviour::RegisterEventHandler(Vuforia.IObjectRecoEventHandler)
extern "C" IL2CPP_METHOD_ATTR void ObjectRecoBehaviour_RegisterEventHandler_m3987952524 (ObjectRecoBehaviour_t2762250941 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// Vuforia.VuforiaARController Vuforia.VuforiaARController::get_Instance()
extern "C" IL2CPP_METHOD_ATTR VuforiaARController_t1876945237 * VuforiaARController_get_Instance_m1100644214 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean Vuforia.VuforiaARController::get_HasStarted()
extern "C" IL2CPP_METHOD_ATTR bool VuforiaARController_get_HasStarted_m4199565299 (VuforiaARController_t1876945237 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
extern "C" IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m3141794964 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean DefaultModelRecoEventHandler::IsModelTrackedInView(Vuforia.ModelTargetBehaviour)
extern "C" IL2CPP_METHOD_ATTR bool DefaultModelRecoEventHandler_IsModelTrackedInView_m2762291640 (DefaultModelRecoEventHandler_t1899894298 * __this, ModelTargetBehaviour_t712978329 * ___modelTarget0, const RuntimeMethod* method);
// System.Void Vuforia.ModelRecoBehaviour::set_ModelRecoEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ModelRecoBehaviour_set_ModelRecoEnabled_m2350120140 (ModelRecoBehaviour_t2312633019 * __this, bool p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Boolean Vuforia.ObjectRecoBehaviour::UnregisterEventHandler(Vuforia.IObjectRecoEventHandler)
extern "C" IL2CPP_METHOD_ATTR bool ObjectRecoBehaviour_UnregisterEventHandler_m3178355983 (ObjectRecoBehaviour_t2762250941 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void DefaultModelRecoEventHandler::ShowErrorMessageInUI(System.String)
extern "C" IL2CPP_METHOD_ATTR void DefaultModelRecoEventHandler_ShowErrorMessageInUI_m2318961360 (DefaultModelRecoEventHandler_t1899894298 * __this, String_t* ___text0, const RuntimeMethod* method);
// System.Void Vuforia.TargetFinder::ClearTrackables(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void TargetFinder_ClearTrackables_m4075376692 (TargetFinder_t2439332195 * __this, bool p0, const RuntimeMethod* method);
// Vuforia.ModelTargetBehaviour DefaultModelRecoEventHandler::FindExistingModelTarget(Vuforia.TargetFinder/ModelRecoSearchResult)
extern "C" IL2CPP_METHOD_ATTR ModelTargetBehaviour_t712978329 * DefaultModelRecoEventHandler_FindExistingModelTarget_m2602418696 (DefaultModelRecoEventHandler_t1899894298 * __this, ModelRecoSearchResult_t2344666983 * ___searchResult0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_t1113636619 * Object_Instantiate_TisGameObject_t1113636619_m4070250708 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, const RuntimeMethod* method)
{
	return ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method);
}
// Vuforia.TrackableBehaviour Vuforia.TargetFinder::EnableTracking(Vuforia.TargetFinder/TargetSearchResult,UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR TrackableBehaviour_t1113559212 * TargetFinder_EnableTracking_m37863320 (TargetFinder_t2439332195 * __this, TargetSearchResult_t3441982613 * p0, GameObject_t1113636619 * p1, const RuntimeMethod* method);
// Vuforia.ModelTarget Vuforia.ModelTargetBehaviour::get_ModelTarget()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ModelTargetBehaviour_get_ModelTarget_m3550182162 (ModelTargetBehaviour_t712978329 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject DefaultModelRecoEventHandler::CreateBoundingBox(System.String,Vuforia.OrientedBoundingBox3D)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * DefaultModelRecoEventHandler_CreateBoundingBox_m4103029589 (DefaultModelRecoEventHandler_t1899894298 * __this, String_t* ___modelTargetName0, OrientedBoundingBox3D_t4089508388  ___bbox1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Transform_SetParent_m273471670 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, bool p1, const RuntimeMethod* method);
// !!0[] UnityEngine.Resources::FindObjectsOfTypeAll<Vuforia.ModelTargetBehaviour>()
inline ModelTargetBehaviourU5BU5D_t240552420* Resources_FindObjectsOfTypeAll_TisModelTargetBehaviour_t712978329_m2409703281 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	return ((  ModelTargetBehaviourU5BU5D_t240552420* (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Resources_FindObjectsOfTypeAll_TisRuntimeObject_m1330590825_gshared)(__this /* static, unused */, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<Vuforia.ModelTargetBehaviour>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t2185053071 * Enumerable_ToList_TisModelTargetBehaviour_t712978329_m1512531048 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  List_1_t2185053071 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m1551499789_gshared)(__this /* static, unused */, p0, method);
}
// System.Void System.Func`2<Vuforia.ModelTargetBehaviour,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m2330586455 (Func_2_t1155892566 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1155892566 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m3104565095_gshared)(__this, p0, p1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<Vuforia.ModelTargetBehaviour>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisModelTargetBehaviour_t712978329_m2189177002 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t1155892566 * p1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t1155892566 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m3454096398_gshared)(__this /* static, unused */, p0, p1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<Vuforia.ModelTargetBehaviour>(System.Collections.Generic.IEnumerable`1<!!0>)
inline ModelTargetBehaviourU5BU5D_t240552420* Enumerable_ToArray_TisModelTargetBehaviour_t712978329_m2713120712 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  ModelTargetBehaviourU5BU5D_t240552420* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m3447781822_gshared)(__this /* static, unused */, p0, method);
}
// System.String Vuforia.TrackableBehaviour::get_TrackableName()
extern "C" IL2CPP_METHOD_ATTR String_t* TrackableBehaviour_get_TrackableName_m3644057705 (TrackableBehaviour_t1113559212 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Vector3 Vuforia.OrientedBoundingBox3D::get_Center()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  OrientedBoundingBox3D_get_Center_m1292922245 (OrientedBoundingBox3D_t4089508388 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localRotation_m19445462 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 Vuforia.OrientedBoundingBox3D::get_HalfExtents()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  OrientedBoundingBox3D_get_HalfExtents_m3655789049 (OrientedBoundingBox3D_t4089508388 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Multiply_m2104357790 (RuntimeObject * __this /* static, unused */, float p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<BoundingBoxRenderer>()
inline BoundingBoxRenderer_t3223945734 * GameObject_AddComponent_TisBoundingBoxRenderer_t3223945734_m2281293885 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  BoundingBoxRenderer_t3223945734 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_TransformPoint_m226827784 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformVector(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_TransformVector_m1386854030 (Transform_t3600365921 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Bounds_set_center_m335768106 (Bounds_t2266837910 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Bounds_set_extents_m2537337060 (Bounds_t2266837910 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::get_CurrentStatus()
extern "C" IL2CPP_METHOD_ATTR int32_t TrackableBehaviour_get_CurrentStatus_m119666118 (TrackableBehaviour_t1113559212 * __this, const RuntimeMethod* method);
// Vuforia.DigitalEyewearARController Vuforia.DigitalEyewearARController::get_Instance()
extern "C" IL2CPP_METHOD_ATTR DigitalEyewearARController_t1054226036 * DigitalEyewearARController_get_Instance_m3573866503 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Camera Vuforia.DigitalEyewearARController::get_PrimaryCamera()
extern "C" IL2CPP_METHOD_ATTR Camera_t4157153871 * DigitalEyewearARController_get_PrimaryCamera_m3122713263 (DigitalEyewearARController_t1054226036 * __this, const RuntimeMethod* method);
// UnityEngine.Bounds DefaultModelRecoEventHandler::GetModelTargetWorldBounds(Vuforia.ModelTargetBehaviour)
extern "C" IL2CPP_METHOD_ATTR Bounds_t2266837910  DefaultModelRecoEventHandler_GetModelTargetWorldBounds_m2581221330 (RuntimeObject * __this /* static, unused */, ModelTargetBehaviour_t712978329 * ___mtb0, const RuntimeMethod* method);
// UnityEngine.Plane[] UnityEngine.GeometryUtility::CalculateFrustumPlanes(UnityEngine.Camera)
extern "C" IL2CPP_METHOD_ATTR PlaneU5BU5D_t3656189108* GeometryUtility_CalculateFrustumPlanes_m809305451 (RuntimeObject * __this /* static, unused */, Camera_t4157153871 * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GeometryUtility::TestPlanesAABB(UnityEngine.Plane[],UnityEngine.Bounds)
extern "C" IL2CPP_METHOD_ATTR bool GeometryUtility_TestPlanesAABB_m2149367188 (RuntimeObject * __this /* static, unused */, PlaneU5BU5D_t3656189108* p0, Bounds_t2266837910  p1, const RuntimeMethod* method);
// Vuforia.ITrackerManager Vuforia.TrackerManager::get_Instance()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TrackerManager_get_Instance_m777262631 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean Vuforia.TargetFinder::Stop()
extern "C" IL2CPP_METHOD_ATTR bool TargetFinder_Stop_m3996786362 (TargetFinder_t2439332195 * __this, const RuntimeMethod* method);
// System.Boolean Vuforia.TargetFinder::StartRecognition()
extern "C" IL2CPP_METHOD_ATTR bool TargetFinder_StartRecognition_m3316027096 (TargetFinder_t2439332195 * __this, const RuntimeMethod* method);
// Vuforia.ModelTargetType Vuforia.ModelTargetBehaviour::get_ModelTargetType()
extern "C" IL2CPP_METHOD_ATTR int32_t ModelTargetBehaviour_get_ModelTargetType_m1538254607 (ModelTargetBehaviour_t712978329 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Vuforia.TrackableBehaviour>()
inline TrackableBehaviour_t1113559212 * Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  TrackableBehaviour_t1113559212 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void Vuforia.TrackableBehaviour::RegisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C" IL2CPP_METHOD_ATTR void TrackableBehaviour_RegisterTrackableEventHandler_m2462783619 (TrackableBehaviour_t1113559212 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Boolean Vuforia.TrackableBehaviour::UnregisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C" IL2CPP_METHOD_ATTR bool TrackableBehaviour_UnregisterTrackableEventHandler_m1201569614 (TrackableBehaviour_t1113559212 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>(System.Boolean)
inline RendererU5BU5D_t3210418286* Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911 (Component_t1923634451 * __this, bool p0, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t3210418286* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared)(__this, p0, method);
}
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Collider>(System.Boolean)
inline ColliderU5BU5D_t4234922487* Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426 (Component_t1923634451 * __this, bool p0, const RuntimeMethod* method)
{
	return ((  ColliderU5BU5D_t4234922487* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared)(__this, p0, method);
}
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Canvas>(System.Boolean)
inline CanvasU5BU5D_t682926938* Component_GetComponentsInChildren_TisCanvas_t3310196443_m1479281147 (Component_t1923634451 * __this, bool p0, const RuntimeMethod* method)
{
	return ((  CanvasU5BU5D_t682926938* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_enabled_m1727253150 (Renderer_t2627027031 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Collider_set_enabled_m1517463283 (Collider_t1773347010 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method);
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
// System.Void BoundingBoxRenderer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BoundingBoxRenderer__ctor_m1540017364 (BoundingBoxRenderer_t3223945734 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoundingBoxRenderer::OnRenderObject()
extern "C" IL2CPP_METHOD_ATTR void BoundingBoxRenderer_OnRenderObject_m825095911 (BoundingBoxRenderer_t3223945734 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundingBoxRenderer_OnRenderObject_m825095911_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	MeshRenderer_t587009260 * V_1 = NULL;
	{
		GL_PushMatrix_m1848274883(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Matrix4x4_t1817901843  L_1 = Transform_get_localToWorldMatrix_m4155710351(L_0, /*hidden argument*/NULL);
		GL_MultMatrix_m3576884247(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		Material_t340375123 * L_2 = __this->get_mLineMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_005b;
		}
	}
	{
		GameObject_t1113636619 * L_4 = GameObject_CreatePrimitive_m2902598419(NULL /*static, unused*/, 3, /*hidden argument*/NULL);
		V_0 = L_4;
		GameObject_t1113636619 * L_5 = V_0;
		NullCheck(L_5);
		MeshRenderer_t587009260 * L_6 = GameObject_GetComponent_TisMeshRenderer_t587009260_m1904099017(L_5, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t587009260_m1904099017_RuntimeMethod_var);
		V_1 = L_6;
		MeshRenderer_t587009260 * L_7 = V_1;
		NullCheck(L_7);
		Material_t340375123 * L_8 = Renderer_get_material_m4171603682(L_7, /*hidden argument*/NULL);
		Material_t340375123 * L_9 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
		Material__ctor_m249231841(L_9, L_8, /*hidden argument*/NULL);
		__this->set_mLineMaterial_4(L_9);
		Material_t340375123 * L_10 = __this->get_mLineMaterial_4();
		Color_t2555686324  L_11 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		Material_set_color_m1794818007(L_10, L_11, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
	}

IL_005b:
	{
		Material_t340375123 * L_13 = __this->get_mLineMaterial_4();
		NullCheck(L_13);
		Material_SetPass_m686253719(L_13, 0, /*hidden argument*/NULL);
		Material_t340375123 * L_14 = __this->get_mLineMaterial_4();
		Color_t2555686324  L_15 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_14);
		Material_set_color_m1794818007(L_14, L_15, /*hidden argument*/NULL);
		GL_Begin_m1290681325(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		GL_Vertex3_m766753641(NULL /*static, unused*/, (-0.5f), (-0.5f), (-0.5f), /*hidden argument*/NULL);
		GL_Vertex3_m766753641(NULL /*static, unused*/, (0.5f), (-0.5f), (-0.5f), /*hidden argument*/NULL);
		GL_Vertex3_m766753641(NULL /*static, unused*/, (0.5f), (-0.5f), (-0.5f), /*hidden argument*/NULL);
		GL_Vertex3_m766753641(NULL /*static, unused*/, (0.5f), (-0.5f), (0.5f), /*hidden argument*/NULL);
		GL_Vertex3_m766753641(NULL /*static, unused*/, (0.5f), (-0.5f), (0.5f), /*hidden argument*/NULL);
		GL_Vertex3_m766753641(NULL /*static, unused*/, (-0.5f), (-0.5f), (0.5f), /*hidden argument*/NULL);
		GL_Vertex3_m766753641(NULL /*static, unused*/, (-0.5f), (-0.5f), (0.5f), /*hidden argument*/NULL);
		GL_Vertex3_m766753641(NULL /*static, unused*/, (-0.5f), (-0.5f), (-0.5f), /*hidden argument*/NULL);
		GL_Vertex3_m766753641(NULL /*static, unused*/, (-0.5f), (0.5f), (-0.5f), /*hidden argument*/NULL);
		GL_Vertex3_m766753641(NULL /*static, unused*/, (0.5f), (0.5f), (-0.5f), /*hidden argument*/NULL);
		GL_Vertex3_m766753641(NULL /*static, unused*/, (0.5f), (0.5f), (-0.5f), /*hidden argument*/NULL);
		GL_Vertex3_m766753641(NULL /*static, unused*/, (0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		GL_Vertex3_m766753641(NULL /*static, unused*/, (0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		GL_Vertex3_m766753641(NULL /*static, unused*/, (-0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		GL_Vertex3_m766753641(NULL /*static, unused*/, (-0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		GL_Vertex3_m766753641(NULL /*static, unused*/, (-0.5f), (0.5f), (-0.5f), /*hidden argument*/NULL);
		GL_Vertex3_m766753641(NULL /*static, unused*/, (-0.5f), (-0.5f), (-0.5f), /*hidden argument*/NULL);
		GL_Vertex3_m766753641(NULL /*static, unused*/, (-0.5f), (0.5f), (-0.5f), /*hidden argument*/NULL);
		GL_Vertex3_m766753641(NULL /*static, unused*/, (0.5f), (-0.5f), (-0.5f), /*hidden argument*/NULL);
		GL_Vertex3_m766753641(NULL /*static, unused*/, (0.5f), (0.5f), (-0.5f), /*hidden argument*/NULL);
		GL_Vertex3_m766753641(NULL /*static, unused*/, (0.5f), (-0.5f), (0.5f), /*hidden argument*/NULL);
		GL_Vertex3_m766753641(NULL /*static, unused*/, (0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		GL_Vertex3_m766753641(NULL /*static, unused*/, (-0.5f), (-0.5f), (0.5f), /*hidden argument*/NULL);
		GL_Vertex3_m766753641(NULL /*static, unused*/, (-0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		GL_End_m539612367(NULL /*static, unused*/, /*hidden argument*/NULL);
		GL_PopMatrix_m3416050869(NULL /*static, unused*/, /*hidden argument*/NULL);
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
// System.Void DefaultInitializationErrorHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler__ctor_m2502050417 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler__ctor_m2502050417_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_mErrorText_4(L_0);
		VuforiaMonoBehaviour__ctor_m348562674(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::OnVuforiaInitializationError(Vuforia.VuforiaUnity/InitError)
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_OnVuforiaInitializationError_m3498850087 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___initError0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___initError0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = ___initError0;
		DefaultInitializationErrorHandler_SetErrorCode_m594938833(__this, L_1, /*hidden argument*/NULL);
		DefaultInitializationErrorHandler_SetErrorOccurred_m2281554525(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::Awake()
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_Awake_m2464808560 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_Awake_m2464808560_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntime_t1949122020_il2cpp_TypeInfo_var);
		VuforiaRuntime_t1949122020 * L_0 = VuforiaRuntime_get_Instance_m1058251676(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_1 = (intptr_t)DefaultInitializationErrorHandler_OnVuforiaInitializationError_m3498850087_RuntimeMethod_var;
		Action_1_t3593217305 * L_2 = (Action_1_t3593217305 *)il2cpp_codegen_object_new(Action_1_t3593217305_il2cpp_TypeInfo_var);
		Action_1__ctor_m2713332384(L_2, __this, L_1, /*hidden argument*/Action_1__ctor_m2713332384_RuntimeMethod_var);
		NullCheck(L_0);
		VuforiaRuntime_RegisterVuforiaInitErrorCallback_m2728879505(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::Start()
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_Start_m170033127 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	{
		DefaultInitializationErrorHandler_SetupGUIStyles_m1676302763(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::OnGUI()
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_OnGUI_m440136624 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_OnGUI_m440136624_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_mErrorOccurred_5();
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_1 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t2360479859  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Rect__ctor_m2614021312((&L_3), (0.0f), (0.0f), (((float)((float)L_1))), (((float)((float)L_2))), /*hidden argument*/NULL);
		intptr_t L_4 = (intptr_t)DefaultInitializationErrorHandler_DrawWindowContent_m3171003143_RuntimeMethod_var;
		WindowFunction_t3146511083 * L_5 = (WindowFunction_t3146511083 *)il2cpp_codegen_object_new(WindowFunction_t3146511083_il2cpp_TypeInfo_var);
		WindowFunction__ctor_m2544237635(L_5, __this, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_Window_m1088326791(NULL /*static, unused*/, 0, L_3, L_5, L_6, /*hidden argument*/NULL);
	}

IL_003e:
	{
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_OnDestroy_m1669200062 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_OnDestroy_m1669200062_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntime_t1949122020_il2cpp_TypeInfo_var);
		VuforiaRuntime_t1949122020 * L_0 = VuforiaRuntime_get_Instance_m1058251676(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_1 = (intptr_t)DefaultInitializationErrorHandler_OnVuforiaInitializationError_m3498850087_RuntimeMethod_var;
		Action_1_t3593217305 * L_2 = (Action_1_t3593217305 *)il2cpp_codegen_object_new(Action_1_t3593217305_il2cpp_TypeInfo_var);
		Action_1__ctor_m2713332384(L_2, __this, L_1, /*hidden argument*/Action_1__ctor_m2713332384_RuntimeMethod_var);
		NullCheck(L_0);
		VuforiaRuntime_UnregisterVuforiaInitErrorCallback_m1304340042(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::DrawWindowContent(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_DrawWindowContent_m3171003143 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_DrawWindowContent_m3171003143_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Rect_t2360479859  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Rect_t2360479859  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		int32_t L_0 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect__ctor_m2614021312((Rect_t2360479859 *)(&V_0), (0.0f), (0.0f), (((float)((float)L_0))), (((float)((float)((int32_t)((int32_t)L_1/(int32_t)8))))), /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_4 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect__ctor_m2614021312((Rect_t2360479859 *)(&V_1), (0.0f), (((float)((float)((int32_t)((int32_t)L_2/(int32_t)8))))), (((float)((float)L_3))), (((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_4/(int32_t)8)), (int32_t)6))))), /*hidden argument*/NULL);
		int32_t L_5 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_6 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_7 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_8 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect__ctor_m2614021312((Rect_t2360479859 *)(&V_2), (0.0f), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)((int32_t)L_6/(int32_t)8))))))), (((float)((float)L_7))), (((float)((float)((int32_t)((int32_t)L_8/(int32_t)8))))), /*hidden argument*/NULL);
		Rect_t2360479859  L_9 = V_0;
		GUIStyle_t3956901511 * L_10 = __this->get_headerStyle_8();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_Label_m2420537077(NULL /*static, unused*/, L_9, _stringLiteral1830904685, L_10, /*hidden argument*/NULL);
		Rect_t2360479859  L_11 = V_1;
		String_t* L_12 = __this->get_mErrorText_4();
		GUIStyle_t3956901511 * L_13 = __this->get_bodyStyle_7();
		GUI_Label_m2420537077(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		Rect_t2360479859  L_14 = V_2;
		GUIStyle_t3956901511 * L_15 = __this->get_footerStyle_9();
		bool L_16 = GUI_Button_m2223708732(NULL /*static, unused*/, L_14, _stringLiteral3483484711, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00a9;
		}
	}
	{
		Application_Quit_m470877999(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::SetErrorCode(Vuforia.VuforiaUnity/InitError)
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetErrorCode_m594938833 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___errorCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_SetErrorCode_m594938833_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = ___errorCode0;
		switch (((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)10))))
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_00ac;
			}
			case 2:
			{
				goto IL_0091;
			}
			case 3:
			{
				goto IL_0071;
			}
			case 4:
			{
				goto IL_0081;
			}
			case 5:
			{
				goto IL_0056;
			}
			case 6:
			{
				goto IL_0046;
			}
			case 7:
			{
				goto IL_00cc;
			}
			case 8:
			{
				goto IL_00eb;
			}
			case 9:
			{
				goto IL_00fb;
			}
		}
	}
	{
		goto IL_010b;
	}

IL_0036:
	{
		__this->set_mErrorText_4(_stringLiteral2981165936);
		goto IL_010b;
	}

IL_0046:
	{
		__this->set_mErrorText_4(_stringLiteral2368256712);
		goto IL_010b;
	}

IL_0056:
	{
		String_t* L_1 = DefaultInitializationErrorHandler_getKeyInfo_m3940778236(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral230305671, L_1, /*hidden argument*/NULL);
		__this->set_mErrorText_4(L_2);
		goto IL_010b;
	}

IL_0071:
	{
		__this->set_mErrorText_4(_stringLiteral2959890895);
		goto IL_010b;
	}

IL_0081:
	{
		__this->set_mErrorText_4(_stringLiteral2293327149);
		goto IL_010b;
	}

IL_0091:
	{
		String_t* L_3 = DefaultInitializationErrorHandler_getKeyInfo_m3940778236(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2746077084, L_3, /*hidden argument*/NULL);
		__this->set_mErrorText_4(L_4);
		goto IL_010b;
	}

IL_00ac:
	{
		String_t* L_5 = DefaultInitializationErrorHandler_getKeyInfo_m3940778236(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral604358790, L_5, _stringLiteral491174246, /*hidden argument*/NULL);
		__this->set_mErrorText_4(L_6);
		goto IL_010b;
	}

IL_00cc:
	{
		String_t* L_7 = Application_get_productName_m2401755738(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3183081100, L_7, _stringLiteral868600955, /*hidden argument*/NULL);
		__this->set_mErrorText_4(L_8);
		goto IL_010b;
	}

IL_00eb:
	{
		__this->set_mErrorText_4(_stringLiteral2041662187);
		goto IL_010b;
	}

IL_00fb:
	{
		__this->set_mErrorText_4(_stringLiteral2078408139);
		goto IL_010b;
	}

IL_010b:
	{
		RuntimeObject * L_9 = Box(InitError_t3420749710_il2cpp_TypeInfo_var, (&___errorCode0));
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		___errorCode0 = *(int32_t*)UnBox(L_9);
		NullCheck(L_10);
		String_t* L_11 = String_Replace_m1273907647(L_10, _stringLiteral3452614641, _stringLiteral3452614528, /*hidden argument*/NULL);
		String_t* L_12 = __this->get_mErrorText_4();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral229317972, L_11, _stringLiteral2072581803, L_12, /*hidden argument*/NULL);
		__this->set_mErrorText_4(L_13);
		String_t* L_14 = __this->get_mErrorText_4();
		String_t* L_15 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_14);
		String_t* L_16 = String_Replace_m1273907647(L_14, _stringLiteral229317972, L_15, /*hidden argument*/NULL);
		String_t* L_17 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_16);
		String_t* L_18 = String_Replace_m1273907647(L_16, _stringLiteral2642543365, L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		ObjectU5BU5D_t2843939325* L_19 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral113129142);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral113129142);
		ObjectU5BU5D_t2843939325* L_21 = L_20;
		int32_t L_22 = ___errorCode0;
		int32_t L_23 = L_22;
		RuntimeObject * L_24 = Box(InitError_t3420749710_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_24);
		ObjectU5BU5D_t2843939325* L_25 = L_21;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral3453007782);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3453007782);
		ObjectU5BU5D_t2843939325* L_26 = L_25;
		String_t* L_27 = V_0;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_27);
		String_t* L_28 = String_Concat_m2971454694(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::SetErrorOccurred(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetErrorOccurred_m2281554525 (DefaultInitializationErrorHandler_t3109936861 * __this, bool ___errorOccurred0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___errorOccurred0;
		__this->set_mErrorOccurred_5(L_0);
		return;
	}
}
// System.String DefaultInitializationErrorHandler::getKeyInfo()
extern "C" IL2CPP_METHOD_ATTR String_t* DefaultInitializationErrorHandler_getKeyInfo_m3940778236 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_getKeyInfo_m3940778236_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaConfiguration_t1763229349_il2cpp_TypeInfo_var);
		VuforiaConfiguration_t1763229349 * L_0 = VuforiaConfiguration_get_Instance_m3335903280(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GenericVuforiaConfiguration_t3697830469 * L_1 = VuforiaConfiguration_get_Vuforia_m1588208597(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GenericVuforiaConfiguration_get_LicenseKey_m2270076687(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m3847582255(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)10))))
		{
			goto IL_0079;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_5 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral1431967569);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1431967569);
		ObjectU5BU5D_t2843939325* L_7 = L_6;
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m3847582255(L_8, /*hidden argument*/NULL);
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_11);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_11);
		ObjectU5BU5D_t2843939325* L_12 = L_7;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral3797279721);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3797279721);
		ObjectU5BU5D_t2843939325* L_13 = L_12;
		String_t* L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15 = String_Substring_m1610150815(L_14, 0, 5, /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		ObjectU5BU5D_t2843939325* L_16 = L_13;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral1108443480);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral1108443480);
		ObjectU5BU5D_t2843939325* L_17 = L_16;
		String_t* L_18 = V_0;
		String_t* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = String_get_Length_m3847582255(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_21 = String_Substring_m1610150815(L_18, ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)5)), 5, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_21);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_21);
		ObjectU5BU5D_t2843939325* L_22 = L_17;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral2072975055);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral2072975055);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m2971454694(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		goto IL_00af;
	}

IL_0079:
	{
		ObjectU5BU5D_t2843939325* L_24 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t2843939325* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral1431967569);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1431967569);
		ObjectU5BU5D_t2843939325* L_26 = L_25;
		String_t* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = String_get_Length_m3847582255(L_27, /*hidden argument*/NULL);
		int32_t L_29 = L_28;
		RuntimeObject * L_30 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_30);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_30);
		ObjectU5BU5D_t2843939325* L_31 = L_26;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteral1498400317);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral1498400317);
		ObjectU5BU5D_t2843939325* L_32 = L_31;
		String_t* L_33 = V_0;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_33);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_33);
		ObjectU5BU5D_t2843939325* L_34 = L_32;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteral2072975055);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral2072975055);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_35 = String_Concat_m2971454694(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		V_1 = L_35;
	}

IL_00af:
	{
		String_t* L_36 = V_1;
		return L_36;
	}
}
// System.Void DefaultInitializationErrorHandler::SetupGUIStyles()
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetupGUIStyles_m1676302763 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_SetupGUIStyles_m1676302763_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001e;
	}

IL_0019:
	{
		int32_t L_3 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_001e:
	{
		V_0 = G_B3_0;
		int32_t L_4 = V_0;
		float L_5 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)((float)(((float)((float)L_4)))/(float)L_5));
		float L_6 = V_1;
		if ((!(((float)L_6) > ((float)(4.0f)))))
		{
			goto IL_0039;
		}
	}
	{
		G_B6_0 = 2;
		goto IL_003a;
	}

IL_0039:
	{
		G_B6_0 = 1;
	}

IL_003a:
	{
		V_2 = G_B6_0;
		Color_t2555686324  L_7 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_8 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m3383403409(__this, L_7, /*hidden argument*/NULL);
		__this->set_bodyTexture_10(L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_9 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		float L_10 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		float L_11 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		Color_t2555686324  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Color__ctor_m286683560((&L_12), L_9, L_10, L_11, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_13 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m3383403409(__this, L_12, /*hidden argument*/NULL);
		__this->set_headerTexture_11(L_13);
		float L_14 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (35.0f), /*hidden argument*/NULL);
		float L_15 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (178.0f), /*hidden argument*/NULL);
		float L_16 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (0.0f), /*hidden argument*/NULL);
		Color_t2555686324  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Color__ctor_m286683560((&L_17), L_14, L_15, L_16, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_18 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m3383403409(__this, L_17, /*hidden argument*/NULL);
		__this->set_footerTexture_12(L_18);
		GUIStyle_t3956901511 * L_19 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4038363858(L_19, /*hidden argument*/NULL);
		__this->set_bodyStyle_7(L_19);
		GUIStyle_t3956901511 * L_20 = __this->get_bodyStyle_7();
		NullCheck(L_20);
		GUIStyleState_t1397964415 * L_21 = GUIStyle_get_normal_m729441812(L_20, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_22 = __this->get_bodyTexture_10();
		NullCheck(L_21);
		GUIStyleState_set_background_m369476077(L_21, L_22, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_23 = __this->get_bodyStyle_7();
		Font_t1956802104 * L_24 = Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830(NULL /*static, unused*/, _stringLiteral2974894664, /*hidden argument*/Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830_RuntimeMethod_var);
		NullCheck(L_23);
		GUIStyle_set_font_m2490449107(L_23, L_24, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_25 = __this->get_bodyStyle_7();
		int32_t L_26 = V_2;
		float L_27 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_25);
		GUIStyle_set_fontSize_m1566850023(L_25, (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)18), (int32_t)L_26))))), (float)L_27))/(float)(160.0f)))))), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_28 = __this->get_bodyStyle_7();
		NullCheck(L_28);
		GUIStyleState_t1397964415 * L_29 = GUIStyle_get_normal_m729441812(L_28, /*hidden argument*/NULL);
		Color_t2555686324  L_30 = Color_get_black_m719512684(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_29);
		GUIStyleState_set_textColor_m1105876047(L_29, L_30, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_31 = __this->get_bodyStyle_7();
		NullCheck(L_31);
		GUIStyle_set_wordWrap_m1419501823(L_31, (bool)1, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_32 = __this->get_bodyStyle_7();
		NullCheck(L_32);
		GUIStyle_set_alignment_m3944619660(L_32, 4, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_33 = __this->get_bodyStyle_7();
		RectOffset_t1369453676 * L_34 = (RectOffset_t1369453676 *)il2cpp_codegen_object_new(RectOffset_t1369453676_il2cpp_TypeInfo_var);
		RectOffset__ctor_m732140021(L_34, ((int32_t)40), ((int32_t)40), 0, 0, /*hidden argument*/NULL);
		NullCheck(L_33);
		GUIStyle_set_padding_m3302456044(L_33, L_34, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_35 = __this->get_bodyStyle_7();
		GUIStyle_t3956901511 * L_36 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2912682974(L_36, L_35, /*hidden argument*/NULL);
		__this->set_headerStyle_8(L_36);
		GUIStyle_t3956901511 * L_37 = __this->get_headerStyle_8();
		NullCheck(L_37);
		GUIStyleState_t1397964415 * L_38 = GUIStyle_get_normal_m729441812(L_37, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_39 = __this->get_headerTexture_11();
		NullCheck(L_38);
		GUIStyleState_set_background_m369476077(L_38, L_39, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_40 = __this->get_headerStyle_8();
		int32_t L_41 = V_2;
		float L_42 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_40);
		GUIStyle_set_fontSize_m1566850023(L_40, (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)24), (int32_t)L_41))))), (float)L_42))/(float)(160.0f)))))), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_43 = __this->get_bodyStyle_7();
		GUIStyle_t3956901511 * L_44 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2912682974(L_44, L_43, /*hidden argument*/NULL);
		__this->set_footerStyle_9(L_44);
		GUIStyle_t3956901511 * L_45 = __this->get_footerStyle_9();
		NullCheck(L_45);
		GUIStyleState_t1397964415 * L_46 = GUIStyle_get_normal_m729441812(L_45, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_47 = __this->get_footerTexture_12();
		NullCheck(L_46);
		GUIStyleState_set_background_m369476077(L_46, L_47, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_48 = __this->get_footerStyle_9();
		NullCheck(L_48);
		GUIStyleState_t1397964415 * L_49 = GUIStyle_get_normal_m729441812(L_48, /*hidden argument*/NULL);
		Color_t2555686324  L_50 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_49);
		GUIStyleState_set_textColor_m1105876047(L_49, L_50, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_51 = __this->get_footerStyle_9();
		int32_t L_52 = V_2;
		float L_53 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_51);
		GUIStyle_set_fontSize_m1566850023(L_51, (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)28), (int32_t)L_52))))), (float)L_53))/(float)(160.0f)))))), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Texture2D DefaultInitializationErrorHandler::CreateSinglePixelTexture(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * DefaultInitializationErrorHandler_CreateSinglePixelTexture_m3383403409 (DefaultInitializationErrorHandler_t3109936861 * __this, Color_t2555686324  ___color0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_CreateSinglePixelTexture_m3383403409_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t3840446185 * V_0 = NULL;
	{
		Texture2D_t3840446185 * L_0 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m2862217990(L_0, 1, 1, 5, (bool)0, /*hidden argument*/NULL);
		V_0 = L_0;
		Texture2D_t3840446185 * L_1 = V_0;
		Color_t2555686324  L_2 = ___color0;
		NullCheck(L_1);
		Texture2D_SetPixel_m2984741184(L_1, 0, 0, L_2, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_3 = V_0;
		NullCheck(L_3);
		Texture2D_Apply_m2271746283(L_3, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_4 = V_0;
		return L_4;
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
// System.Void DefaultModelRecoEventHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DefaultModelRecoEventHandler__ctor_m383762655 (DefaultModelRecoEventHandler_t1899894298 * __this, const RuntimeMethod* method)
{
	{
		__this->set_StopSearchWhileTracking_13((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultModelRecoEventHandler::Start()
extern "C" IL2CPP_METHOD_ATTR void DefaultModelRecoEventHandler_Start_m1367192129 (DefaultModelRecoEventHandler_t1899894298 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultModelRecoEventHandler_Start_m1367192129_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ModelRecoBehaviour_t2312633019 * V_0 = NULL;
	{
		ModelRecoBehaviour_t2312633019 * L_0 = Component_GetComponent_TisModelRecoBehaviour_t2312633019_m4226608877(__this, /*hidden argument*/Component_GetComponent_TisModelRecoBehaviour_t2312633019_m4226608877_RuntimeMethod_var);
		V_0 = L_0;
		ModelRecoBehaviour_t2312633019 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		ModelRecoBehaviour_t2312633019 * L_3 = V_0;
		NullCheck(L_3);
		ObjectRecoBehaviour_RegisterEventHandler_m3987952524(L_3, __this, /*hidden argument*/NULL);
	}

IL_0019:
	{
		ModelRecoBehaviour_t2312633019 * L_4 = V_0;
		__this->set_mModelRecoBehaviour_7(L_4);
		return;
	}
}
// System.Void DefaultModelRecoEventHandler::Update()
extern "C" IL2CPP_METHOD_ATTR void DefaultModelRecoEventHandler_Update_m247953367 (DefaultModelRecoEventHandler_t1899894298 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultModelRecoEventHandler_Update_m247953367_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaARController_t1876945237_il2cpp_TypeInfo_var);
		VuforiaARController_t1876945237 * L_0 = VuforiaARController_get_Instance_m1100644214(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = VuforiaARController_get_HasStarted_m4199565299(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		TargetFinder_t2439332195 * L_2 = __this->get_mTargetFinder_8();
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		float L_3 = Time_get_realtimeSinceStartup_m3141794964(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = __this->get_mLastStatusCheckTime_6();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_3, (float)L_4));
		bool L_5 = __this->get_StopSearchWhenModelFound_12();
		if (L_5)
		{
			goto IL_00ad;
		}
	}
	{
		bool L_6 = __this->get_StopSearchWhileTracking_13();
		if (!L_6)
		{
			goto IL_00ad;
		}
	}
	{
		float L_7 = V_0;
		if ((!(((float)L_7) > ((float)(0.5f)))))
		{
			goto IL_00ad;
		}
	}
	{
		float L_8 = Time_get_realtimeSinceStartup_m3141794964(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_mLastStatusCheckTime_6(L_8);
		bool L_9 = __this->get_mSearching_5();
		if (!L_9)
		{
			goto IL_0089;
		}
	}
	{
		ModelTargetBehaviour_t712978329 * L_10 = __this->get_mLastRecoModelTarget_4();
		bool L_11 = DefaultModelRecoEventHandler_IsModelTrackedInView_m2762291640(__this, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0084;
		}
	}
	{
		ModelRecoBehaviour_t2312633019 * L_12 = __this->get_mModelRecoBehaviour_7();
		NullCheck(L_12);
		ModelRecoBehaviour_set_ModelRecoEnabled_m2350120140(L_12, (bool)0, /*hidden argument*/NULL);
		__this->set_mSearching_5((bool)0);
	}

IL_0084:
	{
		goto IL_00ad;
	}

IL_0089:
	{
		ModelTargetBehaviour_t712978329 * L_13 = __this->get_mLastRecoModelTarget_4();
		bool L_14 = DefaultModelRecoEventHandler_IsModelTrackedInView_m2762291640(__this, L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_00ad;
		}
	}
	{
		ModelRecoBehaviour_t2312633019 * L_15 = __this->get_mModelRecoBehaviour_7();
		NullCheck(L_15);
		ModelRecoBehaviour_set_ModelRecoEnabled_m2350120140(L_15, (bool)1, /*hidden argument*/NULL);
		__this->set_mSearching_5((bool)1);
	}

IL_00ad:
	{
		return;
	}
}
// System.Void DefaultModelRecoEventHandler::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void DefaultModelRecoEventHandler_OnDestroy_m1566504237 (DefaultModelRecoEventHandler_t1899894298 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultModelRecoEventHandler_OnDestroy_m1566504237_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ModelRecoBehaviour_t2312633019 * L_0 = __this->get_mModelRecoBehaviour_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		ModelRecoBehaviour_t2312633019 * L_2 = __this->get_mModelRecoBehaviour_7();
		NullCheck(L_2);
		ObjectRecoBehaviour_UnregisterEventHandler_m3178355983(L_2, __this, /*hidden argument*/NULL);
	}

IL_001e:
	{
		__this->set_mModelRecoBehaviour_7((ModelRecoBehaviour_t2312633019 *)NULL);
		return;
	}
}
// System.Void DefaultModelRecoEventHandler::OnInitialized(Vuforia.TargetFinder)
extern "C" IL2CPP_METHOD_ATTR void DefaultModelRecoEventHandler_OnInitialized_m1166165534 (DefaultModelRecoEventHandler_t1899894298 * __this, TargetFinder_t2439332195 * ___targetFinder0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultModelRecoEventHandler_OnInitialized_m1166165534_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1443903581, /*hidden argument*/NULL);
		TargetFinder_t2439332195 * L_0 = ___targetFinder0;
		__this->set_mTargetFinder_8(L_0);
		return;
	}
}
// System.Void DefaultModelRecoEventHandler::OnInitError(Vuforia.TargetFinder/InitState)
extern "C" IL2CPP_METHOD_ATTR void DefaultModelRecoEventHandler_OnInitError_m227334212 (DefaultModelRecoEventHandler_t1899894298 * __this, int32_t ___initError0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultModelRecoEventHandler_OnInitError_m227334212_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_mTargetFinder_8((TargetFinder_t2439332195 *)NULL);
		RuntimeObject * L_0 = Box(InitState_t538152685_il2cpp_TypeInfo_var, (&___initError0));
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___initError0 = *(int32_t*)UnBox(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2007731032, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		RuntimeObject * L_3 = Box(InitState_t538152685_il2cpp_TypeInfo_var, (&___initError0));
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		___initError0 = *(int32_t*)UnBox(L_3);
		DefaultModelRecoEventHandler_ShowErrorMessageInUI_m2318961360(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultModelRecoEventHandler::OnUpdateError(Vuforia.TargetFinder/UpdateState)
extern "C" IL2CPP_METHOD_ATTR void DefaultModelRecoEventHandler_OnUpdateError_m3553734370 (DefaultModelRecoEventHandler_t1899894298 * __this, int32_t ___updateError0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultModelRecoEventHandler_OnUpdateError_m3553734370_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = Box(UpdateState_t1279515537_il2cpp_TypeInfo_var, (&___updateError0));
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___updateError0 = *(int32_t*)UnBox(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral59887064, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		RuntimeObject * L_3 = Box(UpdateState_t1279515537_il2cpp_TypeInfo_var, (&___updateError0));
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		___updateError0 = *(int32_t*)UnBox(L_3);
		DefaultModelRecoEventHandler_ShowErrorMessageInUI_m2318961360(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultModelRecoEventHandler::OnStateChanged(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DefaultModelRecoEventHandler_OnStateChanged_m3071975502 (DefaultModelRecoEventHandler_t1899894298 * __this, bool ___searching0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultModelRecoEventHandler_OnStateChanged_m3071975502_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		bool L_0 = ___searching0;
		G_B1_0 = _stringLiteral1274569038;
		if (!L_0)
		{
			G_B2_0 = _stringLiteral1274569038;
			goto IL_0015;
		}
	}
	{
		G_B3_0 = _stringLiteral804407930;
		G_B3_1 = G_B1_0;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = _stringLiteral1772667862;
		G_B3_1 = G_B2_0;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		bool L_2 = ___searching0;
		__this->set_mSearching_5(L_2);
		bool L_3 = ___searching0;
		if (!L_3)
		{
			goto IL_0048;
		}
	}
	{
		TargetFinder_t2439332195 * L_4 = __this->get_mTargetFinder_8();
		if (!L_4)
		{
			goto IL_0048;
		}
	}
	{
		TargetFinder_t2439332195 * L_5 = __this->get_mTargetFinder_8();
		NullCheck(L_5);
		TargetFinder_ClearTrackables_m4075376692(L_5, (bool)0, /*hidden argument*/NULL);
	}

IL_0048:
	{
		return;
	}
}
// System.Void DefaultModelRecoEventHandler::OnNewSearchResult(Vuforia.TargetFinder/TargetSearchResult)
extern "C" IL2CPP_METHOD_ATTR void DefaultModelRecoEventHandler_OnNewSearchResult_m600664621 (DefaultModelRecoEventHandler_t1899894298 * __this, TargetSearchResult_t3441982613 * ___searchResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultModelRecoEventHandler_OnNewSearchResult_m600664621_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	bool V_1 = false;
	ModelTargetBehaviour_t712978329 * V_2 = NULL;
	ModelTargetBehaviour_t712978329 * V_3 = NULL;
	OrientedBoundingBox3D_t4089508388  V_4;
	memset(&V_4, 0, sizeof(V_4));
	GameObject_t1113636619 * V_5 = NULL;
	{
		TargetSearchResult_t3441982613 * L_0 = ___searchResult0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_TargetName_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3956703359, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = (GameObject_t1113636619 *)NULL;
		V_1 = (bool)0;
		TargetSearchResult_t3441982613 * L_3 = ___searchResult0;
		ModelTargetBehaviour_t712978329 * L_4 = DefaultModelRecoEventHandler_FindExistingModelTarget_m2602418696(__this, ((ModelRecoSearchResult_t2344666983 *)CastclassClass((RuntimeObject*)L_3, ModelRecoSearchResult_t2344666983_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_2 = L_4;
		ModelTargetBehaviour_t712978329 * L_5 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		ModelTargetBehaviour_t712978329 * L_7 = V_2;
		NullCheck(L_7);
		GameObject_t1113636619 * L_8 = Component_get_gameObject_m442555142(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		V_1 = (bool)0;
		goto IL_0062;
	}

IL_003f:
	{
		ModelTargetBehaviour_t712978329 * L_9 = __this->get_ModelTargetTemplate_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0062;
		}
	}
	{
		ModelTargetBehaviour_t712978329 * L_11 = __this->get_ModelTargetTemplate_9();
		NullCheck(L_11);
		GameObject_t1113636619 * L_12 = Component_get_gameObject_m442555142(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_13 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_12, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		V_0 = L_13;
		V_1 = (bool)1;
	}

IL_0062:
	{
		GameObject_t1113636619 * L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0078;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral4215120540, /*hidden argument*/NULL);
		return;
	}

IL_0078:
	{
		TargetFinder_t2439332195 * L_16 = __this->get_mTargetFinder_8();
		TargetSearchResult_t3441982613 * L_17 = ___searchResult0;
		GameObject_t1113636619 * L_18 = V_0;
		NullCheck(L_16);
		TrackableBehaviour_t1113559212 * L_19 = TargetFinder_EnableTracking_m37863320(L_16, L_17, L_18, /*hidden argument*/NULL);
		V_3 = ((ModelTargetBehaviour_t712978329 *)IsInstClass((RuntimeObject*)L_19, ModelTargetBehaviour_t712978329_il2cpp_TypeInfo_var));
		ModelTargetBehaviour_t712978329 * L_20 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_21 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00fa;
		}
	}
	{
		ModelTargetBehaviour_t712978329 * L_22 = V_3;
		__this->set_mLastRecoModelTarget_4(L_22);
		bool L_23 = V_1;
		if (!L_23)
		{
			goto IL_00e3;
		}
	}
	{
		bool L_24 = __this->get_ShowBoundingBox_10();
		if (!L_24)
		{
			goto IL_00e3;
		}
	}
	{
		ModelTargetBehaviour_t712978329 * L_25 = V_3;
		NullCheck(L_25);
		RuntimeObject* L_26 = ModelTargetBehaviour_get_ModelTarget_m3550182162(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		OrientedBoundingBox3D_t4089508388  L_27 = InterfaceFuncInvoker0< OrientedBoundingBox3D_t4089508388  >::Invoke(1 /* Vuforia.OrientedBoundingBox3D Vuforia.ModelTarget::GetBoundingBox() */, ModelTarget_t66867180_il2cpp_TypeInfo_var, L_26);
		V_4 = L_27;
		ModelTargetBehaviour_t712978329 * L_28 = V_3;
		NullCheck(L_28);
		RuntimeObject* L_29 = ModelTargetBehaviour_get_ModelTarget_m3550182162(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		String_t* L_30 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Vuforia.Trackable::get_Name() */, Trackable_t2451999991_il2cpp_TypeInfo_var, L_29);
		OrientedBoundingBox3D_t4089508388  L_31 = V_4;
		GameObject_t1113636619 * L_32 = DefaultModelRecoEventHandler_CreateBoundingBox_m4103029589(__this, L_30, L_31, /*hidden argument*/NULL);
		V_5 = L_32;
		GameObject_t1113636619 * L_33 = V_5;
		NullCheck(L_33);
		Transform_t3600365921 * L_34 = GameObject_get_transform_m1369836730(L_33, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_35 = V_0;
		NullCheck(L_35);
		Transform_t3600365921 * L_36 = GameObject_get_transform_m1369836730(L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_SetParent_m273471670(L_34, L_36, (bool)0, /*hidden argument*/NULL);
	}

IL_00e3:
	{
		bool L_37 = __this->get_StopSearchWhenModelFound_12();
		if (!L_37)
		{
			goto IL_00fa;
		}
	}
	{
		ModelRecoBehaviour_t2312633019 * L_38 = __this->get_mModelRecoBehaviour_7();
		NullCheck(L_38);
		ModelRecoBehaviour_set_ModelRecoEnabled_m2350120140(L_38, (bool)0, /*hidden argument*/NULL);
	}

IL_00fa:
	{
		return;
	}
}
// Vuforia.ModelTargetBehaviour DefaultModelRecoEventHandler::FindExistingModelTarget(Vuforia.TargetFinder/ModelRecoSearchResult)
extern "C" IL2CPP_METHOD_ATTR ModelTargetBehaviour_t712978329 * DefaultModelRecoEventHandler_FindExistingModelTarget_m2602418696 (DefaultModelRecoEventHandler_t1899894298 * __this, ModelRecoSearchResult_t2344666983 * ___searchResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultModelRecoEventHandler_FindExistingModelTarget_m2602418696_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ModelTargetBehaviourU5BU5D_t240552420* V_0 = NULL;
	String_t* V_1 = NULL;
	ModelTargetBehaviour_t712978329 * V_2 = NULL;
	ModelTargetBehaviourU5BU5D_t240552420* V_3 = NULL;
	int32_t V_4 = 0;
	List_1_t2185053071 * G_B2_0 = NULL;
	List_1_t2185053071 * G_B1_0 = NULL;
	{
		ModelTargetBehaviourU5BU5D_t240552420* L_0 = Resources_FindObjectsOfTypeAll_TisModelTargetBehaviour_t712978329_m2409703281(NULL /*static, unused*/, /*hidden argument*/Resources_FindObjectsOfTypeAll_TisModelTargetBehaviour_t712978329_m2409703281_RuntimeMethod_var);
		List_1_t2185053071 * L_1 = Enumerable_ToList_TisModelTargetBehaviour_t712978329_m1512531048(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_0, /*hidden argument*/Enumerable_ToList_TisModelTargetBehaviour_t712978329_m1512531048_RuntimeMethod_var);
		Func_2_t1155892566 * L_2 = ((DefaultModelRecoEventHandler_t1899894298_StaticFields*)il2cpp_codegen_static_fields_for(DefaultModelRecoEventHandler_t1899894298_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_14();
		G_B1_0 = L_1;
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_0022;
		}
	}
	{
		intptr_t L_3 = (intptr_t)DefaultModelRecoEventHandler_U3CFindExistingModelTargetU3Em__0_m506785536_RuntimeMethod_var;
		Func_2_t1155892566 * L_4 = (Func_2_t1155892566 *)il2cpp_codegen_object_new(Func_2_t1155892566_il2cpp_TypeInfo_var);
		Func_2__ctor_m2330586455(L_4, NULL, L_3, /*hidden argument*/Func_2__ctor_m2330586455_RuntimeMethod_var);
		((DefaultModelRecoEventHandler_t1899894298_StaticFields*)il2cpp_codegen_static_fields_for(DefaultModelRecoEventHandler_t1899894298_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_14(L_4);
		G_B2_0 = G_B1_0;
	}

IL_0022:
	{
		Func_2_t1155892566 * L_5 = ((DefaultModelRecoEventHandler_t1899894298_StaticFields*)il2cpp_codegen_static_fields_for(DefaultModelRecoEventHandler_t1899894298_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_14();
		RuntimeObject* L_6 = Enumerable_Where_TisModelTargetBehaviour_t712978329_m2189177002(NULL /*static, unused*/, G_B2_0, L_5, /*hidden argument*/Enumerable_Where_TisModelTargetBehaviour_t712978329_m2189177002_RuntimeMethod_var);
		ModelTargetBehaviourU5BU5D_t240552420* L_7 = Enumerable_ToArray_TisModelTargetBehaviour_t712978329_m2713120712(NULL /*static, unused*/, L_6, /*hidden argument*/Enumerable_ToArray_TisModelTargetBehaviour_t712978329_m2713120712_RuntimeMethod_var);
		V_0 = L_7;
		ModelTargetBehaviourU5BU5D_t240552420* L_8 = V_0;
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		ModelTargetBehaviourU5BU5D_t240552420* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))
		{
			goto IL_0042;
		}
	}

IL_0040:
	{
		return (ModelTargetBehaviour_t712978329 *)NULL;
	}

IL_0042:
	{
		ModelRecoSearchResult_t2344666983 * L_10 = ___searchResult0;
		NullCheck(L_10);
		String_t* L_11 = ((TargetSearchResult_t3441982613 *)L_10)->get_TargetName_0();
		V_1 = L_11;
		ModelTargetBehaviourU5BU5D_t240552420* L_12 = V_0;
		V_3 = L_12;
		V_4 = 0;
		goto IL_007d;
	}

IL_0053:
	{
		ModelTargetBehaviourU5BU5D_t240552420* L_13 = V_3;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		ModelTargetBehaviour_t712978329 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_2 = L_16;
		ModelTargetBehaviour_t712978329 * L_17 = V_2;
		NullCheck(L_17);
		String_t* L_18 = TrackableBehaviour_get_TrackableName_m3644057705(L_17, /*hidden argument*/NULL);
		String_t* L_19 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_20 = String_op_Equality_m920492651(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0077;
		}
	}
	{
		ModelTargetBehaviour_t712978329 * L_21 = V_2;
		NullCheck(L_21);
		GameObject_t1113636619 * L_22 = Component_get_gameObject_m442555142(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		GameObject_SetActive_m796801857(L_22, (bool)1, /*hidden argument*/NULL);
		ModelTargetBehaviour_t712978329 * L_23 = V_2;
		return L_23;
	}

IL_0077:
	{
		int32_t L_24 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_007d:
	{
		int32_t L_25 = V_4;
		ModelTargetBehaviourU5BU5D_t240552420* L_26 = V_3;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length)))))))
		{
			goto IL_0053;
		}
	}
	{
		return (ModelTargetBehaviour_t712978329 *)NULL;
	}
}
// UnityEngine.GameObject DefaultModelRecoEventHandler::CreateBoundingBox(System.String,Vuforia.OrientedBoundingBox3D)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * DefaultModelRecoEventHandler_CreateBoundingBox_m4103029589 (DefaultModelRecoEventHandler_t1899894298 * __this, String_t* ___modelTargetName0, OrientedBoundingBox3D_t4089508388  ___bbox1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultModelRecoEventHandler_CreateBoundingBox_m4103029589_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		String_t* L_0 = ___modelTargetName0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, L_0, _stringLiteral3107087099, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		GameObject_t1113636619 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = GameObject_get_transform_m1369836730(L_3, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = OrientedBoundingBox3D_get_Center_m1292922245((OrientedBoundingBox3D_t4089508388 *)(&___bbox1), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localPosition_m4128471975(L_4, L_5, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_6 = V_0;
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = GameObject_get_transform_m1369836730(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_8 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localRotation_m19445462(L_7, L_8, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_9 = V_0;
		NullCheck(L_9);
		Transform_t3600365921 * L_10 = GameObject_get_transform_m1369836730(L_9, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = OrientedBoundingBox3D_get_HalfExtents_m3655789049((OrientedBoundingBox3D_t4089508388 *)(&___bbox1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_12 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, (2.0f), L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localScale_m3053443106(L_10, L_12, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_13 = V_0;
		NullCheck(L_13);
		GameObject_AddComponent_TisBoundingBoxRenderer_t3223945734_m2281293885(L_13, /*hidden argument*/GameObject_AddComponent_TisBoundingBoxRenderer_t3223945734_m2281293885_RuntimeMethod_var);
		GameObject_t1113636619 * L_14 = V_0;
		return L_14;
	}
}
// System.Void DefaultModelRecoEventHandler::ShowErrorMessageInUI(System.String)
extern "C" IL2CPP_METHOD_ATTR void DefaultModelRecoEventHandler_ShowErrorMessageInUI_m2318961360 (DefaultModelRecoEventHandler_t1899894298 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultModelRecoEventHandler_ShowErrorMessageInUI_m2318961360_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t1901882714 * L_0 = __this->get_ModelRecoErrorText_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Text_t1901882714 * L_2 = __this->get_ModelRecoErrorText_11();
		String_t* L_3 = ___text0;
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
	}

IL_001c:
	{
		return;
	}
}
// UnityEngine.Bounds DefaultModelRecoEventHandler::GetModelTargetWorldBounds(Vuforia.ModelTargetBehaviour)
extern "C" IL2CPP_METHOD_ATTR Bounds_t2266837910  DefaultModelRecoEventHandler_GetModelTargetWorldBounds_m2581221330 (RuntimeObject * __this /* static, unused */, ModelTargetBehaviour_t712978329 * ___mtb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultModelRecoEventHandler_GetModelTargetWorldBounds_m2581221330_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OrientedBoundingBox3D_t4089508388  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Bounds_t2266837910  V_8;
	memset(&V_8, 0, sizeof(V_8));
	{
		ModelTargetBehaviour_t712978329 * L_0 = ___mtb0;
		NullCheck(L_0);
		RuntimeObject* L_1 = ModelTargetBehaviour_get_ModelTarget_m3550182162(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		OrientedBoundingBox3D_t4089508388  L_2 = InterfaceFuncInvoker0< OrientedBoundingBox3D_t4089508388  >::Invoke(1 /* Vuforia.OrientedBoundingBox3D Vuforia.ModelTarget::GetBoundingBox() */, ModelTarget_t66867180_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		Vector3_t3722313464  L_3 = OrientedBoundingBox3D_get_Center_m1292922245((OrientedBoundingBox3D_t4089508388 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_3;
		Vector3_t3722313464  L_4 = OrientedBoundingBox3D_get_HalfExtents_m3655789049((OrientedBoundingBox3D_t4089508388 *)(&V_0), /*hidden argument*/NULL);
		V_2 = L_4;
		ModelTargetBehaviour_t712978329 * L_5 = ___mtb0;
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(L_5, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = V_1;
		NullCheck(L_6);
		Vector3_t3722313464  L_8 = Transform_TransformPoint_m226827784(L_6, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		ModelTargetBehaviour_t712978329 * L_9 = ___mtb0;
		NullCheck(L_9);
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(L_9, /*hidden argument*/NULL);
		float L_11 = (&V_2)->get_x_2();
		NullCheck(L_10);
		Vector3_t3722313464  L_12 = Transform_TransformVector_m1386854030(L_10, L_11, (0.0f), (0.0f), /*hidden argument*/NULL);
		V_4 = L_12;
		ModelTargetBehaviour_t712978329 * L_13 = ___mtb0;
		NullCheck(L_13);
		Transform_t3600365921 * L_14 = Component_get_transform_m3162698980(L_13, /*hidden argument*/NULL);
		float L_15 = (&V_2)->get_y_3();
		NullCheck(L_14);
		Vector3_t3722313464  L_16 = Transform_TransformVector_m1386854030(L_14, (0.0f), L_15, (0.0f), /*hidden argument*/NULL);
		V_5 = L_16;
		ModelTargetBehaviour_t712978329 * L_17 = ___mtb0;
		NullCheck(L_17);
		Transform_t3600365921 * L_18 = Component_get_transform_m3162698980(L_17, /*hidden argument*/NULL);
		float L_19 = (&V_2)->get_z_4();
		NullCheck(L_18);
		Vector3_t3722313464  L_20 = Transform_TransformVector_m1386854030(L_18, (0.0f), (0.0f), L_19, /*hidden argument*/NULL);
		V_6 = L_20;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_21 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_7 = L_21;
		float L_22 = (&V_4)->get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_23 = fabsf(L_22);
		float L_24 = (&V_5)->get_x_2();
		float L_25 = fabsf(L_24);
		float L_26 = (&V_6)->get_x_2();
		float L_27 = fabsf(L_26);
		(&V_7)->set_x_2(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_23, (float)L_25)), (float)L_27)));
		float L_28 = (&V_4)->get_y_3();
		float L_29 = fabsf(L_28);
		float L_30 = (&V_5)->get_y_3();
		float L_31 = fabsf(L_30);
		float L_32 = (&V_6)->get_y_3();
		float L_33 = fabsf(L_32);
		(&V_7)->set_y_3(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_29, (float)L_31)), (float)L_33)));
		float L_34 = (&V_4)->get_z_4();
		float L_35 = fabsf(L_34);
		float L_36 = (&V_5)->get_z_4();
		float L_37 = fabsf(L_36);
		float L_38 = (&V_6)->get_z_4();
		float L_39 = fabsf(L_38);
		(&V_7)->set_z_4(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_35, (float)L_37)), (float)L_39)));
		il2cpp_codegen_initobj((&V_8), sizeof(Bounds_t2266837910 ));
		Vector3_t3722313464  L_40 = V_3;
		Bounds_set_center_m335768106((Bounds_t2266837910 *)(&V_8), L_40, /*hidden argument*/NULL);
		Vector3_t3722313464  L_41 = V_7;
		Bounds_set_extents_m2537337060((Bounds_t2266837910 *)(&V_8), L_41, /*hidden argument*/NULL);
		Bounds_t2266837910  L_42 = V_8;
		return L_42;
	}
}
// System.Boolean DefaultModelRecoEventHandler::IsModelTrackedInView(Vuforia.ModelTargetBehaviour)
extern "C" IL2CPP_METHOD_ATTR bool DefaultModelRecoEventHandler_IsModelTrackedInView_m2762291640 (DefaultModelRecoEventHandler_t1899894298 * __this, ModelTargetBehaviour_t712978329 * ___modelTarget0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultModelRecoEventHandler_IsModelTrackedInView_m2762291640_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Camera_t4157153871 * V_0 = NULL;
	Bounds_t2266837910  V_1;
	memset(&V_1, 0, sizeof(V_1));
	PlaneU5BU5D_t3656189108* V_2 = NULL;
	{
		ModelTargetBehaviour_t712978329 * L_0 = ___modelTarget0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		ModelTargetBehaviour_t712978329 * L_2 = ___modelTarget0;
		NullCheck(L_2);
		int32_t L_3 = TrackableBehaviour_get_CurrentStatus_m119666118(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DigitalEyewearARController_t1054226036_il2cpp_TypeInfo_var);
		DigitalEyewearARController_t1054226036 * L_4 = DigitalEyewearARController_get_Instance_m3573866503(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		Camera_t4157153871 * L_5 = DigitalEyewearARController_get_PrimaryCamera_m3122713263(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Camera_t4157153871 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		return (bool)0;
	}

IL_0032:
	{
		ModelTargetBehaviour_t712978329 * L_8 = ___modelTarget0;
		Bounds_t2266837910  L_9 = DefaultModelRecoEventHandler_GetModelTargetWorldBounds_m2581221330(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		Camera_t4157153871 * L_10 = V_0;
		PlaneU5BU5D_t3656189108* L_11 = GeometryUtility_CalculateFrustumPlanes_m809305451(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		PlaneU5BU5D_t3656189108* L_12 = V_2;
		Bounds_t2266837910  L_13 = V_1;
		bool L_14 = GeometryUtility_TestPlanesAABB_m2149367188(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// Vuforia.TargetFinder DefaultModelRecoEventHandler::GetTargetFinder()
extern "C" IL2CPP_METHOD_ATTR TargetFinder_t2439332195 * DefaultModelRecoEventHandler_GetTargetFinder_m2886216247 (DefaultModelRecoEventHandler_t1899894298 * __this, const RuntimeMethod* method)
{
	{
		TargetFinder_t2439332195 * L_0 = __this->get_mTargetFinder_8();
		return L_0;
	}
}
// System.Void DefaultModelRecoEventHandler::ResetModelReco(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DefaultModelRecoEventHandler_ResetModelReco_m544517377 (DefaultModelRecoEventHandler_t1899894298 * __this, bool ___destroyGameObjects0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultModelRecoEventHandler_ResetModelReco_m544517377_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectTracker_t4177997237 * V_0 = NULL;
	{
		RuntimeObject* L_0 = TrackerManager_get_Instance_m777262631(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectTracker_t4177997237 * L_1 = GenericInterfaceFuncInvoker0< ObjectTracker_t4177997237 * >::Invoke(ITrackerManager_GetTracker_TisObjectTracker_t4177997237_m1548597255_RuntimeMethod_var, L_0);
		V_0 = L_1;
		ObjectTracker_t4177997237 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0061;
		}
	}
	{
		ObjectTracker_t4177997237 * L_3 = V_0;
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(5 /* System.Void Vuforia.Tracker::Stop() */, L_3);
		TargetFinder_t2439332195 * L_4 = __this->get_mTargetFinder_8();
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		TargetFinder_t2439332195 * L_5 = __this->get_mTargetFinder_8();
		bool L_6 = ___destroyGameObjects0;
		NullCheck(L_5);
		TargetFinder_ClearTrackables_m4075376692(L_5, L_6, /*hidden argument*/NULL);
		TargetFinder_t2439332195 * L_7 = __this->get_mTargetFinder_8();
		NullCheck(L_7);
		TargetFinder_Stop_m3996786362(L_7, /*hidden argument*/NULL);
		TargetFinder_t2439332195 * L_8 = __this->get_mTargetFinder_8();
		NullCheck(L_8);
		TargetFinder_StartRecognition_m3316027096(L_8, /*hidden argument*/NULL);
		goto IL_0055;
	}

IL_004b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral904309638, /*hidden argument*/NULL);
	}

IL_0055:
	{
		ObjectTracker_t4177997237 * L_9 = V_0;
		NullCheck(L_9);
		VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean Vuforia.Tracker::Start() */, L_9);
		goto IL_006b;
	}

IL_0061:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral1493258606, /*hidden argument*/NULL);
	}

IL_006b:
	{
		return;
	}
}
// System.Boolean DefaultModelRecoEventHandler::<FindExistingModelTarget>m__0(Vuforia.ModelTargetBehaviour)
extern "C" IL2CPP_METHOD_ATTR bool DefaultModelRecoEventHandler_U3CFindExistingModelTargetU3Em__0_m506785536 (RuntimeObject * __this /* static, unused */, ModelTargetBehaviour_t712978329 * ___mt0, const RuntimeMethod* method)
{
	{
		ModelTargetBehaviour_t712978329 * L_0 = ___mt0;
		NullCheck(L_0);
		int32_t L_1 = ModelTargetBehaviour_get_ModelTargetType_m1538254607(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// System.Void DefaultTrackableEventHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler__ctor_m1782586389 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultTrackableEventHandler::Start()
extern "C" IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler_Start_m3259365141 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_Start_m3259365141_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackableBehaviour_t1113559212 * L_0 = Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408(__this, /*hidden argument*/Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408_RuntimeMethod_var);
		__this->set_mTrackableBehaviour_5(L_0);
		TrackableBehaviour_t1113559212 * L_1 = __this->get_mTrackableBehaviour_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_3 = __this->get_mTrackableBehaviour_5();
		NullCheck(L_3);
		TrackableBehaviour_RegisterTrackableEventHandler_m2462783619(L_3, __this, /*hidden argument*/NULL);
	}

IL_0028:
	{
		__this->set_imageTrackedTrue_4((bool)0);
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler_OnDestroy_m3526422712 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnDestroy_m3526422712_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackableBehaviour_t1113559212 * L_0 = __this->get_mTrackableBehaviour_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_2 = __this->get_mTrackableBehaviour_5();
		NullCheck(L_2);
		TrackableBehaviour_UnregisterTrackableEventHandler_m1201569614(L_2, __this, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnTrackableStateChanged(Vuforia.TrackableBehaviour/Status,Vuforia.TrackableBehaviour/Status)
extern "C" IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler_OnTrackableStateChanged_m615981434 (DefaultTrackableEventHandler_t1588957063 * __this, int32_t ___previousStatus0, int32_t ___newStatus1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnTrackableStateChanged_m615981434_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___previousStatus0;
		__this->set_m_PreviousStatus_6(L_0);
		int32_t L_1 = ___newStatus1;
		__this->set_m_NewStatus_7(L_1);
		int32_t L_2 = ___newStatus1;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = ___newStatus1;
		if ((((int32_t)L_3) == ((int32_t)3)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_4 = ___newStatus1;
		if ((!(((uint32_t)L_4) == ((uint32_t)4))))
		{
			goto IL_004d;
		}
	}

IL_0023:
	{
		TrackableBehaviour_t1113559212 * L_5 = __this->get_mTrackableBehaviour_5();
		NullCheck(L_5);
		String_t* L_6 = TrackableBehaviour_get_TrackableName_m3644057705(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3820270571, L_6, _stringLiteral3073488411, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(7 /* System.Void DefaultTrackableEventHandler::OnTrackingFound() */, __this);
		goto IL_008a;
	}

IL_004d:
	{
		int32_t L_8 = ___previousStatus0;
		if ((!(((uint32_t)L_8) == ((uint32_t)3))))
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_9 = ___newStatus1;
		if (L_9)
		{
			goto IL_0084;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_10 = __this->get_mTrackableBehaviour_5();
		NullCheck(L_10);
		String_t* L_11 = TrackableBehaviour_get_TrackableName_m3644057705(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3820270571, L_11, _stringLiteral3483481617, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(8 /* System.Void DefaultTrackableEventHandler::OnTrackingLost() */, __this);
		goto IL_008a;
	}

IL_0084:
	{
		VirtActionInvoker0::Invoke(8 /* System.Void DefaultTrackableEventHandler::OnTrackingLost() */, __this);
	}

IL_008a:
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnTrackingFound()
extern "C" IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler_OnTrackingFound_m2146197130 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnTrackingFound_m2146197130_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t3210418286* V_0 = NULL;
	ColliderU5BU5D_t4234922487* V_1 = NULL;
	CanvasU5BU5D_t682926938* V_2 = NULL;
	Renderer_t2627027031 * V_3 = NULL;
	RendererU5BU5D_t3210418286* V_4 = NULL;
	int32_t V_5 = 0;
	Collider_t1773347010 * V_6 = NULL;
	ColliderU5BU5D_t4234922487* V_7 = NULL;
	int32_t V_8 = 0;
	Canvas_t3310196443 * V_9 = NULL;
	CanvasU5BU5D_t682926938* V_10 = NULL;
	int32_t V_11 = 0;
	{
		RendererU5BU5D_t3210418286* L_0 = Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var);
		V_0 = L_0;
		ColliderU5BU5D_t4234922487* L_1 = Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var);
		V_1 = L_1;
		CanvasU5BU5D_t682926938* L_2 = Component_GetComponentsInChildren_TisCanvas_t3310196443_m1479281147(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCanvas_t3310196443_m1479281147_RuntimeMethod_var);
		V_2 = L_2;
		RendererU5BU5D_t3210418286* L_3 = V_0;
		V_4 = L_3;
		V_5 = 0;
		goto IL_0036;
	}

IL_0023:
	{
		RendererU5BU5D_t3210418286* L_4 = V_4;
		int32_t L_5 = V_5;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Renderer_t2627027031 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		Renderer_t2627027031 * L_8 = V_3;
		NullCheck(L_8);
		Renderer_set_enabled_m1727253150(L_8, (bool)1, /*hidden argument*/NULL);
		int32_t L_9 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0036:
	{
		int32_t L_10 = V_5;
		RendererU5BU5D_t3210418286* L_11 = V_4;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_0023;
		}
	}
	{
		ColliderU5BU5D_t4234922487* L_12 = V_1;
		V_7 = L_12;
		V_8 = 0;
		goto IL_0061;
	}

IL_004c:
	{
		ColliderU5BU5D_t4234922487* L_13 = V_7;
		int32_t L_14 = V_8;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Collider_t1773347010 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		Collider_t1773347010 * L_17 = V_6;
		NullCheck(L_17);
		Collider_set_enabled_m1517463283(L_17, (bool)1, /*hidden argument*/NULL);
		int32_t L_18 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_19 = V_8;
		ColliderU5BU5D_t4234922487* L_20 = V_7;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_004c;
		}
	}
	{
		CanvasU5BU5D_t682926938* L_21 = V_2;
		V_10 = L_21;
		V_11 = 0;
		goto IL_008c;
	}

IL_0077:
	{
		CanvasU5BU5D_t682926938* L_22 = V_10;
		int32_t L_23 = V_11;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Canvas_t3310196443 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		Canvas_t3310196443 * L_26 = V_9;
		NullCheck(L_26);
		Behaviour_set_enabled_m20417929(L_26, (bool)1, /*hidden argument*/NULL);
		int32_t L_27 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_008c:
	{
		int32_t L_28 = V_11;
		CanvasU5BU5D_t682926938* L_29 = V_10;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
		{
			goto IL_0077;
		}
	}
	{
		__this->set_imageTrackedTrue_4((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1844011637, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnTrackingLost()
extern "C" IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler_OnTrackingLost_m2776455481 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnTrackingLost_m2776455481_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t3210418286* V_0 = NULL;
	ColliderU5BU5D_t4234922487* V_1 = NULL;
	CanvasU5BU5D_t682926938* V_2 = NULL;
	Renderer_t2627027031 * V_3 = NULL;
	RendererU5BU5D_t3210418286* V_4 = NULL;
	int32_t V_5 = 0;
	Collider_t1773347010 * V_6 = NULL;
	ColliderU5BU5D_t4234922487* V_7 = NULL;
	int32_t V_8 = 0;
	Canvas_t3310196443 * V_9 = NULL;
	CanvasU5BU5D_t682926938* V_10 = NULL;
	int32_t V_11 = 0;
	{
		RendererU5BU5D_t3210418286* L_0 = Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var);
		V_0 = L_0;
		ColliderU5BU5D_t4234922487* L_1 = Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var);
		V_1 = L_1;
		CanvasU5BU5D_t682926938* L_2 = Component_GetComponentsInChildren_TisCanvas_t3310196443_m1479281147(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCanvas_t3310196443_m1479281147_RuntimeMethod_var);
		V_2 = L_2;
		RendererU5BU5D_t3210418286* L_3 = V_0;
		V_4 = L_3;
		V_5 = 0;
		goto IL_0036;
	}

IL_0023:
	{
		RendererU5BU5D_t3210418286* L_4 = V_4;
		int32_t L_5 = V_5;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Renderer_t2627027031 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		Renderer_t2627027031 * L_8 = V_3;
		NullCheck(L_8);
		Renderer_set_enabled_m1727253150(L_8, (bool)0, /*hidden argument*/NULL);
		int32_t L_9 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0036:
	{
		int32_t L_10 = V_5;
		RendererU5BU5D_t3210418286* L_11 = V_4;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_0023;
		}
	}
	{
		ColliderU5BU5D_t4234922487* L_12 = V_1;
		V_7 = L_12;
		V_8 = 0;
		goto IL_0061;
	}

IL_004c:
	{
		ColliderU5BU5D_t4234922487* L_13 = V_7;
		int32_t L_14 = V_8;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Collider_t1773347010 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		Collider_t1773347010 * L_17 = V_6;
		NullCheck(L_17);
		Collider_set_enabled_m1517463283(L_17, (bool)0, /*hidden argument*/NULL);
		int32_t L_18 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_19 = V_8;
		ColliderU5BU5D_t4234922487* L_20 = V_7;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_004c;
		}
	}
	{
		CanvasU5BU5D_t682926938* L_21 = V_2;
		V_10 = L_21;
		V_11 = 0;
		goto IL_008c;
	}

IL_0077:
	{
		CanvasU5BU5D_t682926938* L_22 = V_10;
		int32_t L_23 = V_11;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Canvas_t3310196443 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		Canvas_t3310196443 * L_26 = V_9;
		NullCheck(L_26);
		Behaviour_set_enabled_m20417929(L_26, (bool)0, /*hidden argument*/NULL);
		int32_t L_27 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_008c:
	{
		int32_t L_28 = V_11;
		CanvasU5BU5D_t682926938* L_29 = V_10;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
		{
			goto IL_0077;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2437766712, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
