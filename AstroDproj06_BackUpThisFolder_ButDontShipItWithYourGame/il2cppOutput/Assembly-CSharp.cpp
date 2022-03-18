#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F;
// AndroidUtils
struct AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9;
// UnityEngine.AssetBundle
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943;
// AssetBundleSample
struct AssetBundleSample_t66E2EBAD87DB85C20C17C511F65D7F36AAEC968B;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// AutoFocusMod
struct AutoFocusMod_t4A402E9441FD6BE78409265F32E856DC3CF852A3;
// CamRecFunction
struct CamRecFunction_t72CA675983FBAEA4C2B06B51C18602C266F9CF68;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// Vuforia.CameraDevice
struct CameraDevice_t34ADAC91596592865E992E89542B1B6F88EAAB27;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// UnityEngine.Networking.DownloadHandlerAssetBundle
struct DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Vuforia.ICameraController
struct ICameraController_t6576ED49C739594B6EDCA46C654048F5008B3BE4;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Vuforia.Internal.Core.IEngine
struct IEngine_t1840136F87C8826E605686CEB7FDA35D257A8C0C;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// LevelLoader
struct LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020;
// LoadFromFileExample
struct LoadFromFileExample_tE1FCCA292D122EB567D1D67C148C2B1EE967848D;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NativeGalleryScr
struct NativeGalleryScr_t1A847DBB5134BE8BF02B56A676C8ABC68AA64159;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// ReloadShader
struct ReloadShader_t3C4F13650CB79AF03022113C2260F573396988B2;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// VoxelBusters.Demos.ReplayKit.ReplayKitDemo
struct ReplayKitDemo_t7C7C4819EA46F9994CF6F6BACF78903E33A53CAD;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UIController
struct UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Vuforia.VuforiaARController
struct VuforiaARController_tE0E6A049C85B5F8C2AD8A8176DFCBDC71FB0D1E6;
// UnityEngine.WWW
struct WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// AndroidUtils/<>c
struct U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8;
// AndroidUtils/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_tEB109AAB926E939ED508C7E30B561215CC4CF590;
// AssetBundleSample/<load>d__5
struct U3CloadU3Ed__5_t43796C5C931C20EE8C07C8E042EF3AC4591AB3AD;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Vuforia.CameraDevice/AndroidDevice
struct AndroidDevice_t46CFCDADC9E4C1BB0381CB01CC937C56F22BE38C;
// Vuforia.CameraDevice/HoloLensDevice
struct HoloLensDevice_t64E77B11602EA8DEDFB6E49EF2F71D93ECFD3572;
// Vuforia.CameraDevice/WebCamDevice
struct WebCamDevice_tAD3DDAC0FD5EBE24AA0F9203641E8ED80342CB59;
// LoadFromFileExample/<DownloadBundles>d__6
struct U3CDownloadBundlesU3Ed__6_tF1EA225E0DCEA4F95CDF464D74B9BE2D4FB79394;
// LoadFromFileExample/<GetAssetBundle>d__7
struct U3CGetAssetBundleU3Ed__7_t4892D048A9DC5B5E07D8665C86E60F02881C1613;
// LoadFromFileExample/<InstantiateObject>d__1
struct U3CInstantiateObjectU3Ed__1_t75CDDE27FD588B6F9784E177FB52AA2DDB1CB49F;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// NativeGallery/MediaPickCallback
struct MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6;
// NativeGallery/MediaSaveCallback
struct MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D;
// NativeGalleryScr/<>c
struct U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154;
// NativeGalleryScr/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t9234C7D231E56F118B7E0BF06D686E6A4DCA4E0C;
// NativeGalleryScr/<TakeScreenshotAndSave>d__4
struct U3CTakeScreenshotAndSaveU3Ed__4_tB77CC1A003AFF0BBE31BB4D315CDB3CCCBA7AE17;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidPermission_t2E0256F9B80AACA29793E17A17D39181092E7DAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Permission_t3F3DCD2A60B865EED3451B39DB6A376E75C8F831_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDownloadBundlesU3Ed__6_tF1EA225E0DCEA4F95CDF464D74B9BE2D4FB79394_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetAssetBundleU3Ed__7_t4892D048A9DC5B5E07D8665C86E60F02881C1613_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInstantiateObjectU3Ed__1_t75CDDE27FD588B6F9784E177FB52AA2DDB1CB49F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTakeScreenshotAndSaveU3Ed__4_tB77CC1A003AFF0BBE31BB4D315CDB3CCCBA7AE17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass20_0_tEB109AAB926E939ED508C7E30B561215CC4CF590_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t9234C7D231E56F118B7E0BF06D686E6A4DCA4E0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CloadU3Ed__5_t43796C5C931C20EE8C07C8E042EF3AC4591AB3AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoEncoder_tD86B27A620DB6BC6A1ACEEE80DD539FDA0ACEA50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral12A5EDBB275DBAE4E3C69E5A33508523CAAEEA26;
IL2CPP_EXTERN_C String_t* _stringLiteral174ED8386002338D41311EA8103201765BC2ED20;
IL2CPP_EXTERN_C String_t* _stringLiteral1855101C324A3D9AC837C3EEF613C2018B11E97E;
IL2CPP_EXTERN_C String_t* _stringLiteral1E00A028765E36CFE9A1D3E1D31576348C84197D;
IL2CPP_EXTERN_C String_t* _stringLiteral1E46C13342407DC915EE592BB14E688C9292ECFD;
IL2CPP_EXTERN_C String_t* _stringLiteral2078CFCBC59B9CE0C60A601E88DEA14836D17C85;
IL2CPP_EXTERN_C String_t* _stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral283A00558AED3E72F0BDE4CF7034D3D38EF5565D;
IL2CPP_EXTERN_C String_t* _stringLiteral2B81FF3046B1031A034B86C61AA1329B3AC75C37;
IL2CPP_EXTERN_C String_t* _stringLiteral31B68548F13D962C00D5C29C78C8952D7FF3A486;
IL2CPP_EXTERN_C String_t* _stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9;
IL2CPP_EXTERN_C String_t* _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
IL2CPP_EXTERN_C String_t* _stringLiteral3D9B225611FDC1BB72AE7C50F6A75EA0AD954BAB;
IL2CPP_EXTERN_C String_t* _stringLiteral3DFC2D8E2B0854967C8EA0AC932952BDB07081DD;
IL2CPP_EXTERN_C String_t* _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192;
IL2CPP_EXTERN_C String_t* _stringLiteral45149F7F2FFF490CEE9E9CEE82E45CC9945E352C;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral52B520EF703343E949C619DBD6F7A5EE336969E1;
IL2CPP_EXTERN_C String_t* _stringLiteral54C29DDEA50046D9BEA9A368A87F45D55E22FF92;
IL2CPP_EXTERN_C String_t* _stringLiteral54E9884C2A8A9804F2757FB402718D03522F4946;
IL2CPP_EXTERN_C String_t* _stringLiteral567547707726EB70B8CFBEF25199C101F0E1F3F5;
IL2CPP_EXTERN_C String_t* _stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C;
IL2CPP_EXTERN_C String_t* _stringLiteral6409FBFA701A36CE1B89AF1C8C3AF7480A95DD01;
IL2CPP_EXTERN_C String_t* _stringLiteral649D06A9BDDEF28FF7D96D5BD4FB4BFC94266EC0;
IL2CPP_EXTERN_C String_t* _stringLiteral6689137C2490CEFBE1CCFB87833CA5032CFC3123;
IL2CPP_EXTERN_C String_t* _stringLiteral6759FA5F111D1DC4A539DCDCF4F4CFC6C5100E8E;
IL2CPP_EXTERN_C String_t* _stringLiteral6778B14CB1E1D67CB73B571758B55C5AAB3784E2;
IL2CPP_EXTERN_C String_t* _stringLiteral6BE47D77C95D88556AA68DA60ED4C1D49CB2E819;
IL2CPP_EXTERN_C String_t* _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710;
IL2CPP_EXTERN_C String_t* _stringLiteral6CB60CD0F517BE0AB5DBF3CCB647F6428F1FA6D1;
IL2CPP_EXTERN_C String_t* _stringLiteral75DD2D44571F44B6F1140AB52193761B47728B9B;
IL2CPP_EXTERN_C String_t* _stringLiteral76C41506C48C50491E7B491CC16239D496B8C6CA;
IL2CPP_EXTERN_C String_t* _stringLiteral78FF4FA942C1B42A8039C2BA8E962E337610543C;
IL2CPP_EXTERN_C String_t* _stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D;
IL2CPP_EXTERN_C String_t* _stringLiteral824FDE248F6040E9E332F7DFA41AABAF5760AD60;
IL2CPP_EXTERN_C String_t* _stringLiteral8497955340C56CE300A3FED92A97D7543C116A5E;
IL2CPP_EXTERN_C String_t* _stringLiteral84EE66A73B24F0E9CEE249A5A8879E93FCC66EB0;
IL2CPP_EXTERN_C String_t* _stringLiteral88D3AF1882A99EF42ED88963253B1967EFDCD6AE;
IL2CPP_EXTERN_C String_t* _stringLiteral8B88C42DBB7021873EC04A9CC6FE5247A22B8803;
IL2CPP_EXTERN_C String_t* _stringLiteral8BBE23706569B717AA65EB80DA08CA1A2BBC56F5;
IL2CPP_EXTERN_C String_t* _stringLiteral8EE1C5E4A717F93604C58401FE2748C71FAD90CB;
IL2CPP_EXTERN_C String_t* _stringLiteral915CBB86566445DCBCAA52E433D975E5DB090276;
IL2CPP_EXTERN_C String_t* _stringLiteral9315857A8C463DCE0092BE73104A9B8F26293AB2;
IL2CPP_EXTERN_C String_t* _stringLiteral99687916B1E6EF7CC358E7CD63DCB485D6ACFEEA;
IL2CPP_EXTERN_C String_t* _stringLiteral9FE1252E0C99589986A3FD06B642DC25085790D2;
IL2CPP_EXTERN_C String_t* _stringLiteral9FFC4A7A10002ED52B53C4BB0C43553F699DE5FB;
IL2CPP_EXTERN_C String_t* _stringLiteralAB714177D80F1D905470D41D3FBD215F6189BDE5;
IL2CPP_EXTERN_C String_t* _stringLiteralABE462B7AC958C600F5B1AE687FDC90C670DD1EC;
IL2CPP_EXTERN_C String_t* _stringLiteralAD62C9078812D11738F239271752751171A93938;
IL2CPP_EXTERN_C String_t* _stringLiteralB04DE2AD82139DB4409D7F20AD81B0C36B41FBEC;
IL2CPP_EXTERN_C String_t* _stringLiteralC2D71F772F8C967510DDFD86AA50F545C5C4D5C0;
IL2CPP_EXTERN_C String_t* _stringLiteralC4522F8F0AE3CEA578951FD7F5B4169673824A37;
IL2CPP_EXTERN_C String_t* _stringLiteralC4C350CD70FB6498609CB72A9B70820E21F1640F;
IL2CPP_EXTERN_C String_t* _stringLiteralC5E7F48ACAC428EC5EA35E9BBED10A0E23CBE728;
IL2CPP_EXTERN_C String_t* _stringLiteralC876B3232ECAA845423D59F1B9536B3325FEC9CE;
IL2CPP_EXTERN_C String_t* _stringLiteralC9ADF473A30BA80282FCBE6EF8685B62B5E4AF76;
IL2CPP_EXTERN_C String_t* _stringLiteralCDCD8F12FD6E37200B4031CE7FD36FDD903FF42F;
IL2CPP_EXTERN_C String_t* _stringLiteralD08387DC2F0400CAF5E896C48C4ABC4A6351B928;
IL2CPP_EXTERN_C String_t* _stringLiteralD89541427DA6A12497312F84211FB7C6331566AA;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE67D89BB61E8A81A2B0B7802F9E515D915AA51E7;
IL2CPP_EXTERN_C String_t* _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4;
IL2CPP_EXTERN_C String_t* _stringLiteralF2465BB6789DD1B3A37EEA353A2ADE8B9F4E9E37;
IL2CPP_EXTERN_C String_t* _stringLiteralF37E86612B08131A4171D70D9CCCAF41191D0B4F;
IL2CPP_EXTERN_C String_t* _stringLiteralF76ACD0E930DEA6BAE9F3D19211EA1A922D696FE;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFC663E7D2A840FB250507548CF8DBF31B33A1807;
IL2CPP_EXTERN_C String_t* _stringLiteralFE0809E851790D1356701164D304755E2A9B76EE;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidUtils_U3CStartRecordingU3Eb__10_0_m62F4114B6546D88286E46324986C527F0A3F2E7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssetBundle_LoadAsset_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m0216591F4BA27A483AA2C83EFDABCEA80B214063_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AutoFocusMod_OnPaused_m1F08113F1EF8A4196381E915302DB2099F04232B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AutoFocusMod_OnVuforiaStarted_m7A1CD8DE44A889A02ECAAEBC2F2CA803527930A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAssetBundleSample_t66E2EBAD87DB85C20C17C511F65D7F36AAEC968B_m13C53E7896221A3DAF68B64DF7E366DEE73B438B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisAndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_mC09278340B1F902F54998F0E58458EEF4582163D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m301E95E824CB214DD0BA6D04221CE97B30BE9ACD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDownloadBundlesU3Ed__6_System_Collections_IEnumerator_Reset_m634379BE7D901B5164612DE0A8E8CC67076B5B2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetAssetBundleU3Ed__7_System_Collections_IEnumerator_Reset_m2AF43D903986F73EA93ADCC421B35838E0F34C3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInstantiateObjectU3Ed__1_System_Collections_IEnumerator_Reset_m283185012BE3354C710A03F386F0763869838E6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTakeScreenshotAndSaveU3Ed__4_System_Collections_IEnumerator_Reset_mE4EA522F36C9174DF84CB3D40991D54AF395053D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CPickImageOrVideoU3Eb__7_0_m5164DC37B6E5CBE300278D91B1CD3EA4961B6CFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CPickVideoU3Eb__6_0_m8B6B4D15BF4F0E8AA967137F4B97A0CA34D9127A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartRecordingU3Eb__10_1_m41D3E2C7CEEFD74583981696F83C9546CD97DA22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartRecordingU3Eb__10_2_mE4482F9D5226EE28FF07E753EAE910654873E089_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CTakeScreenshotAndSaveU3Eb__4_0_m5B43A2F5FFDFD8C5D169704084125CA850955C56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass20_0_U3CShowToastU3Eb__0_mC513531E31901C85B12ABD74DA360693864B934C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CPickImageU3Eb__0_m5F5A549A673DDEF0F619317F14BA1FD611CAB307_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CloadU3Ed__5_MoveNext_m73418DA3CDB7BEB2A50A2E00F8E56E0F456609D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CloadU3Ed__5_System_Collections_IEnumerator_Reset_mEFCFECD9272CA85461FEB54D2CDA002EA4981F95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIController_OnStartRecord_m10451972A4295318AF44D00404368D05AEDAB5F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIController_OnStopRecord_mDD955FF32D875F2E263CD8D9897B042E0722E73D_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

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

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// Vuforia.CameraDevice
struct CameraDevice_t34ADAC91596592865E992E89542B1B6F88EAAB27  : public RuntimeObject
{
	// Vuforia.Internal.Core.IEngine Vuforia.CameraDevice::mEngine
	RuntimeObject* ___mEngine_2;
	// Vuforia.ICameraController Vuforia.CameraDevice::mCameraController
	RuntimeObject* ___mCameraController_3;
	// Vuforia.CameraMode Vuforia.CameraDevice::mCameraDeviceMode
	int32_t ___mCameraDeviceMode_4;
	// System.Boolean Vuforia.CameraDevice::mHasCameraDeviceModeBeenSet
	bool ___mHasCameraDeviceModeBeenSet_5;
	// Vuforia.CameraDevice/HoloLensDevice Vuforia.CameraDevice::<HoloLens>k__BackingField
	HoloLensDevice_t64E77B11602EA8DEDFB6E49EF2F71D93ECFD3572* ___U3CHoloLensU3Ek__BackingField_6;
	// Vuforia.CameraDevice/AndroidDevice Vuforia.CameraDevice::<Android>k__BackingField
	AndroidDevice_t46CFCDADC9E4C1BB0381CB01CC937C56F22BE38C* ___U3CAndroidU3Ek__BackingField_7;
	// Vuforia.CameraDevice/WebCamDevice Vuforia.CameraDevice::<WebCam>k__BackingField
	WebCamDevice_tAD3DDAC0FD5EBE24AA0F9203641E8ED80342CB59* ___U3CWebCamU3Ek__BackingField_8;
};

struct CameraDevice_t34ADAC91596592865E992E89542B1B6F88EAAB27_StaticFields
{
	// Vuforia.CameraDevice Vuforia.CameraDevice::sLocalCameraDevice
	CameraDevice_t34ADAC91596592865E992E89542B1B6F88EAAB27* ___sLocalCameraDevice_0;
	// Vuforia.CameraDevice Vuforia.CameraDevice::sInstance
	CameraDevice_t34ADAC91596592865E992E89542B1B6F88EAAB27* ___sInstance_1;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// Vuforia.VuforiaARController
struct VuforiaARController_tE0E6A049C85B5F8C2AD8A8176DFCBDC71FB0D1E6  : public RuntimeObject
{
	// System.Action Vuforia.VuforiaARController::mOnVuforiaInitialized
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___mOnVuforiaInitialized_0;
	// System.Boolean Vuforia.VuforiaARController::mSubscribedToInitCallback
	bool ___mSubscribedToInitCallback_2;
};

struct VuforiaARController_tE0E6A049C85B5F8C2AD8A8176DFCBDC71FB0D1E6_StaticFields
{
	// Vuforia.VuforiaARController Vuforia.VuforiaARController::sInstance
	VuforiaARController_tE0E6A049C85B5F8C2AD8A8176DFCBDC71FB0D1E6* ___sInstance_1;
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// AndroidUtils/<>c
struct U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8  : public RuntimeObject
{
};

struct U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8_StaticFields
{
	// AndroidUtils/<>c AndroidUtils/<>c::<>9
	U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8* ___U3CU3E9_0;
	// UnityEngine.Events.UnityAction AndroidUtils/<>c::<>9__10_1
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___U3CU3E9__10_1_1;
	// UnityEngine.Events.UnityAction AndroidUtils/<>c::<>9__10_2
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___U3CU3E9__10_2_2;
};

// AndroidUtils/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_tEB109AAB926E939ED508C7E30B561215CC4CF590  : public RuntimeObject
{
	// UnityEngine.AndroidJavaObject AndroidUtils/<>c__DisplayClass20_0::currentActivity
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___currentActivity_0;
	// System.String AndroidUtils/<>c__DisplayClass20_0::message
	String_t* ___message_1;
};

// AssetBundleSample/<load>d__5
struct U3CloadU3Ed__5_t43796C5C931C20EE8C07C8E042EF3AC4591AB3AD  : public RuntimeObject
{
	// System.Int32 AssetBundleSample/<load>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AssetBundleSample/<load>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// AssetBundleSample AssetBundleSample/<load>d__5::<>4__this
	AssetBundleSample_t66E2EBAD87DB85C20C17C511F65D7F36AAEC968B* ___U3CU3E4__this_2;
	// System.String AssetBundleSample/<load>d__5::url
	String_t* ___url_3;
	// System.Int32 AssetBundleSample/<load>d__5::version
	int32_t ___version_4;
};

// LoadFromFileExample/<DownloadBundles>d__6
struct U3CDownloadBundlesU3Ed__6_tF1EA225E0DCEA4F95CDF464D74B9BE2D4FB79394  : public RuntimeObject
{
	// System.Int32 LoadFromFileExample/<DownloadBundles>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LoadFromFileExample/<DownloadBundles>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// LoadFromFileExample LoadFromFileExample/<DownloadBundles>d__6::<>4__this
	LoadFromFileExample_tE1FCCA292D122EB567D1D67C148C2B1EE967848D* ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest LoadFromFileExample/<DownloadBundles>d__6::<uwr>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CuwrU3E5__2_3;
};

// LoadFromFileExample/<GetAssetBundle>d__7
struct U3CGetAssetBundleU3Ed__7_t4892D048A9DC5B5E07D8665C86E60F02881C1613  : public RuntimeObject
{
	// System.Int32 LoadFromFileExample/<GetAssetBundle>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LoadFromFileExample/<GetAssetBundle>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.Networking.UnityWebRequest LoadFromFileExample/<GetAssetBundle>d__7::<www>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwwwU3E5__2_2;
};

// LoadFromFileExample/<InstantiateObject>d__1
struct U3CInstantiateObjectU3Ed__1_t75CDDE27FD588B6F9784E177FB52AA2DDB1CB49F  : public RuntimeObject
{
	// System.Int32 LoadFromFileExample/<InstantiateObject>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LoadFromFileExample/<InstantiateObject>d__1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.Networking.UnityWebRequest LoadFromFileExample/<InstantiateObject>d__1::<request>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CrequestU3E5__2_2;
};

// NativeGalleryScr/<>c
struct U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154  : public RuntimeObject
{
};

struct U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_StaticFields
{
	// NativeGalleryScr/<>c NativeGalleryScr/<>c::<>9
	U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154* ___U3CU3E9_0;
	// NativeGallery/MediaSaveCallback NativeGalleryScr/<>c::<>9__4_0
	MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___U3CU3E9__4_0_1;
	// NativeGallery/MediaPickCallback NativeGalleryScr/<>c::<>9__6_0
	MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___U3CU3E9__6_0_2;
	// NativeGallery/MediaPickCallback NativeGalleryScr/<>c::<>9__7_0
	MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___U3CU3E9__7_0_3;
};

// NativeGalleryScr/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t9234C7D231E56F118B7E0BF06D686E6A4DCA4E0C  : public RuntimeObject
{
	// System.Int32 NativeGalleryScr/<>c__DisplayClass5_0::maxSize
	int32_t ___maxSize_0;
};

// NativeGalleryScr/<TakeScreenshotAndSave>d__4
struct U3CTakeScreenshotAndSaveU3Ed__4_tB77CC1A003AFF0BBE31BB4D315CDB3CCCBA7AE17  : public RuntimeObject
{
	// System.Int32 NativeGalleryScr/<TakeScreenshotAndSave>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object NativeGalleryScr/<TakeScreenshotAndSave>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
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

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.WWW
struct WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// UnityEngine.ThreadPriority UnityEngine.WWW::<threadPriority>k__BackingField
	int32_t ___U3CthreadPriorityU3Ek__BackingField_0;
	// UnityEngine.Networking.UnityWebRequest UnityEngine.WWW::_uwr
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ____uwr_1;
	// UnityEngine.AssetBundle UnityEngine.WWW::_assetBundle
	AssetBundle_tB38418819A49060CD738CB21541649340F082943* ____assetBundle_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::_responseHeaders
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____responseHeaders_3;
};

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.AssetBundle
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Networking.DownloadHandlerAssetBundle
struct DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C  : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB
{
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerAssetBundle
struct DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C_marshaled_pinvoke : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerAssetBundle
struct DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C_marshaled_com : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// NativeGallery/MediaPickCallback
struct MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6  : public MulticastDelegate_t
{
};

// NativeGallery/MediaSaveCallback
struct MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AndroidUtils
struct AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityAction AndroidUtils::onStartRecord
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___onStartRecord_7;
	// UnityEngine.Events.UnityAction AndroidUtils::onStopRecord
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___onStopRecord_8;
	// UnityEngine.AndroidJavaObject AndroidUtils::androidRecorder
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___androidRecorder_12;
};

struct AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_StaticFields
{
	// UnityEngine.Events.UnityAction AndroidUtils::onAllowCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___onAllowCallback_9;
	// UnityEngine.Events.UnityAction AndroidUtils::onDenyCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___onDenyCallback_10;
	// UnityEngine.Events.UnityAction AndroidUtils::onDenyAndNeverAskAgainCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___onDenyAndNeverAskAgainCallback_11;
};

// AssetBundleSample
struct AssetBundleSample_t66E2EBAD87DB85C20C17C511F65D7F36AAEC968B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text AssetBundleSample::guitext
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___guitext_4;
	// System.String AssetBundleSample::loadUrl
	String_t* ___loadUrl_5;
	// UnityEngine.WWW AssetBundleSample::www
	WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* ___www_6;
};

// AutoFocusMod
struct AutoFocusMod_t4A402E9441FD6BE78409265F32E856DC3CF852A3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// CamRecFunction
struct CamRecFunction_t72CA675983FBAEA4C2B06B51C18602C266F9CF68  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// VoxelBusters.Demos.ReplayKit.ReplayKitDemo CamRecFunction::rkd
	ReplayKitDemo_t7C7C4819EA46F9994CF6F6BACF78903E33A53CAD* ___rkd_4;
	// UIController CamRecFunction::uIController
	UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* ___uIController_5;
	// System.Boolean CamRecFunction::IsActive
	bool ___IsActive_6;
	// UnityEngine.GameObject CamRecFunction::recordIco
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___recordIco_7;
	// UnityEngine.GameObject CamRecFunction::stopIco
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___stopIco_8;
};

// LevelLoader
struct LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String LevelLoader::SceneN
	String_t* ___SceneN_4;
	// UnityEngine.GameObject LevelLoader::LoadingText
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LoadingText_5;
	// UnityEngine.GameObject LevelLoader::loa1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___loa1_6;
	// UnityEngine.GameObject LevelLoader::loa2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___loa2_7;
	// UnityEngine.GameObject LevelLoader::loa3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___loa3_8;
	// UnityEngine.GameObject LevelLoader::loaF1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___loaF1_9;
	// UnityEngine.GameObject LevelLoader::loaFHidge
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___loaFHidge_10;
	// System.Boolean LevelLoader::IsActive
	bool ___IsActive_11;
	// UnityEngine.GameObject LevelLoader::MenyItems
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___MenyItems_12;
	// UnityEngine.GameObject[] LevelLoader::ObjsArr
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___ObjsArr_13;
};

// LoadFromFileExample
struct LoadFromFileExample_tE1FCCA292D122EB567D1D67C148C2B1EE967848D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.UInt32 LoadFromFileExample::crc
	uint32_t ___crc_4;
	// System.String LoadFromFileExample::url
	String_t* ___url_5;
	// System.String LoadFromFileExample::AssetName
	String_t* ___AssetName_6;
	// System.UInt32 LoadFromFileExample::version
	uint32_t ___version_7;
};

// NativeGalleryScr
struct NativeGalleryScr_t1A847DBB5134BE8BF02B56A676C8ABC68AA64159  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ReloadShader
struct ReloadShader_t3C4F13650CB79AF03022113C2260F573396988B2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String ReloadShader::ShaderName
	String_t* ___ShaderName_4;
	// System.String ReloadShader::TexName
	String_t* ___TexName_5;
	// System.String ReloadShader::TexPath
	String_t* ___TexPath_6;
	// System.String ReloadShader::ColorN
	String_t* ___ColorN_7;
	// UnityEngine.Color ReloadShader::ColorV
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___ColorV_8;
	// System.String[] ReloadShader::ShadNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___ShadNames_9;
	// UnityEngine.Texture ReloadShader::texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_10;
};

// VoxelBusters.Demos.ReplayKit.ReplayKitDemo
struct ReplayKitDemo_t7C7C4819EA46F9994CF6F6BACF78903E33A53CAD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text VoxelBusters.Demos.ReplayKit.ReplayKitDemo::m_statusText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_statusText_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIController
struct UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// AndroidUtils UIController::androidUtils
	AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9* ___androidUtils_4;
	// UnityEngine.GameObject UIController::startRecordbtn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___startRecordbtn_5;
	// UnityEngine.GameObject UIController::stopRecordBtn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___stopRecordBtn_6;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// T UnityEngine.AssetBundle::LoadAsset<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AssetBundle_LoadAsset_TisRuntimeObject_m7F36E1C08FC32ADB47C34513522D958FA6E09C47_gshared (AssetBundle_tB38418819A49060CD738CB21541649340F082943* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Caching::ClearCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Caching_ClearCache_mDDE85684FE00661765C6EC49D2DC2254C26973D6 (const RuntimeMethod* method) ;
// System.Collections.IEnumerator AssetBundleSample::load(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AssetBundleSample_load_mD3251F877590FFDD33F0DEA9FC4E069E47FB5DD6 (AssetBundleSample_t66E2EBAD87DB85C20C17C511F65D7F36AAEC968B* __this, String_t* ___url0, int32_t ___version1, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Single UnityEngine.WWW::get_progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WWW_get_progress_m8BE51921011B9C737C690F8776F93109E5481B47 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void AssetBundleSample/<load>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CloadU3Ed__5__ctor_m8D56E86EEA1C350E2FC89A6236EFD9B648264D54 (U3CloadU3Ed__5_t43796C5C931C20EE8C07C8E042EF3AC4591AB3AD* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Caching::get_ready()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Caching_get_ready_mD35419F411EBA15AF02F527D9A46AAF4E26C8205 (const RuntimeMethod* method) ;
// UnityEngine.WWW UnityEngine.WWW::LoadFromCacheOrDownload(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* WWW_LoadFromCacheOrDownload_mC37569163190837FDBE243E9E156069BB8101605 (String_t* ___url0, int32_t ___version1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String UnityEngine.WWW::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWW_get_error_m6B2E4F6DB8ECC8217A112EC62AAA1D5E71AA1C93 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// UnityEngine.AssetBundle UnityEngine.WWW::get_assetBundle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetBundle_tB38418819A49060CD738CB21541649340F082943* WWW_get_assetBundle_mB4DC5AFC3732922D2AE792A02699058DABF5B38E (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.AssetBundle::get_mainAsset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* AssetBundle_get_mainAsset_mBB663F2D2D3593437EF1A90F464CBEBF9F3D1F5C (AssetBundle_tB38418819A49060CD738CB21541649340F082943* __this, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_Instantiate_m24741FECC461F230DBD3E76CD6AEE2E395CB340D (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___original0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<AssetBundleSample>()
inline AssetBundleSample_t66E2EBAD87DB85C20C17C511F65D7F36AAEC968B* Component_GetComponent_TisAssetBundleSample_t66E2EBAD87DB85C20C17C511F65D7F36AAEC968B_m13C53E7896221A3DAF68B64DF7E366DEE73B438B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AssetBundleSample_t66E2EBAD87DB85C20C17C511F65D7F36AAEC968B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.AssetBundle::Unload(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetBundle_Unload_m0A189871E61A0D6735A2B41B3360A1F0677B636B (AssetBundle_tB38418819A49060CD738CB21541649340F082943* __this, bool ___unloadAllLoadedObjects0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator LoadFromFileExample::InstantiateObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadFromFileExample_InstantiateObject_m36C757667C27A4DB882BE54D2924C437E8734106 (LoadFromFileExample_tE1FCCA292D122EB567D1D67C148C2B1EE967848D* __this, const RuntimeMethod* method) ;
// System.Void LoadFromFileExample/<InstantiateObject>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInstantiateObjectU3Ed__1__ctor_m16B5082ED29E046BA642FF1EC5F8D41CD974CCCB (U3CInstantiateObjectU3Ed__1_t75CDDE27FD588B6F9784E177FB52AA2DDB1CB49F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void LoadFromFileExample/<DownloadBundles>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadBundlesU3Ed__6__ctor_mE70CCEBC0B7E03F4576F4D3B6F0CC1ED52DCE000 (U3CDownloadBundlesU3Ed__6_tF1EA225E0DCEA4F95CDF464D74B9BE2D4FB79394* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void LoadFromFileExample/<GetAssetBundle>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAssetBundleU3Ed__7__ctor_m844245A8A555EE5503E31D5F347F3F0B7A36EC0F (U3CGetAssetBundleU3Ed__7_t4892D048A9DC5B5E07D8665C86E60F02881C1613* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAssetBundle::GetAssetBundle(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestAssetBundle_GetAssetBundle_mF32B250DBF7AFD52905996B106A25400E6B6CB7F (String_t* ___uri0, uint32_t ___crc1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Networking.UnityWebRequest::get_downloadProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityWebRequest_get_downloadProgress_m28B3DB759530A61929D8AB02A4482AB21D3348B1 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.AssetBundle UnityEngine.Networking.DownloadHandlerAssetBundle::GetContent(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetBundle_tB38418819A49060CD738CB21541649340F082943* DownloadHandlerAssetBundle_GetContent_m0DC43ADFD18D8C0D80C1B2DC15D132A5D3C641A9 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___www0, const RuntimeMethod* method) ;
// T UnityEngine.AssetBundle::LoadAsset<UnityEngine.GameObject>(System.String)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AssetBundle_LoadAsset_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m0216591F4BA27A483AA2C83EFDABCEA80B214063 (AssetBundle_tB38418819A49060CD738CB21541649340F082943* __this, String_t* ___name0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (AssetBundle_tB38418819A49060CD738CB21541649340F082943*, String_t*, const RuntimeMethod*))AssetBundle_LoadAsset_TisRuntimeObject_m7F36E1C08FC32ADB47C34513522D958FA6E09C47_gshared)(__this, ___name0, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// System.Void LoadFromFileExample/<DownloadBundles>d__6::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadBundlesU3Ed__6_U3CU3Em__Finally1_m53813D1F6FC3DCDD4202EF89B608AD4E7AD5B062 (U3CDownloadBundlesU3Ed__6_tF1EA225E0DCEA4F95CDF464D74B9BE2D4FB79394* __this, const RuntimeMethod* method) ;
// System.Void LoadFromFileExample/<DownloadBundles>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadBundlesU3Ed__6_System_IDisposable_Dispose_m570D32A26A17340BFF5403A12648FEF41DB4BADE (U3CDownloadBundlesU3Ed__6_tF1EA225E0DCEA4F95CDF464D74B9BE2D4FB79394* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___url0, String_t* ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::.ctor(System.String,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerAssetBundle__ctor_m9D18EBB1DB97C2F86AB3D09B3F0E2DE2F2934D95 (DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C* __this, String_t* ___url0, uint32_t ___version1, uint32_t ___crc2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* AssetBundle_LoadAsset_m25926A405F3AB79A4DF2447F23A09957EC7F063E (AssetBundle_tB38418819A49060CD738CB21541649340F082943* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAssetBundle::GetAssetBundle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestAssetBundle_GetAssetBundle_m01AF7AA269AB187FAA31F37AFB03B1C46B9A9409 (String_t* ___uri0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.Texture2D>(System.String)
inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Resources_Load_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m301E95E824CB214DD0BA6D04221CE97B30BE9ACD (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared)(___path0, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// Vuforia.VuforiaARController Vuforia.VuforiaARController::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuforiaARController_tE0E6A049C85B5F8C2AD8A8176DFCBDC71FB0D1E6* VuforiaARController_get_Instance_mA036017DFEABBCA2D93FFB7BDC5F38D6EC50D798 (const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Vuforia.VuforiaARController::RegisterVuforiaStartedCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuforiaARController_RegisterVuforiaStartedCallback_m039532B11899E523AD8D3EFC5A1290CAB867A428 (VuforiaARController_tE0E6A049C85B5F8C2AD8A8176DFCBDC71FB0D1E6* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Vuforia.VuforiaARController::RegisterOnPauseCallback(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuforiaARController_RegisterOnPauseCallback_m546CE764DD7899DD60735CA86E9BFDD26673FEDA (VuforiaARController_tE0E6A049C85B5F8C2AD8A8176DFCBDC71FB0D1E6* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___callback0, const RuntimeMethod* method) ;
// Vuforia.CameraDevice Vuforia.CameraDevice::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraDevice_t34ADAC91596592865E992E89542B1B6F88EAAB27* CameraDevice_get_Instance_mD3AF67583DE4D3C7A8AE5673A7797011274CC00A (const RuntimeMethod* method) ;
// System.Boolean Vuforia.CameraDevice::SetFocusMode(Vuforia.FocusMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraDevice_SetFocusMode_m17EA4A830F8731D3E032832205D6AF26437979C0 (CameraDevice_t34ADAC91596592865E992E89542B1B6F88EAAB27* __this, int32_t ___focusMode0, const RuntimeMethod* method) ;
// System.Void VoxelBusters.Demos.ReplayKit.ReplayKitDemo::Initialise()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReplayKitDemo_Initialise_mBDF311852EAA9F25A405D37AB2B9D29C7E2448BF (ReplayKitDemo_t7C7C4819EA46F9994CF6F6BACF78903E33A53CAD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_orientation(UnityEngine.ScreenOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_orientation_m6BA37EE8CEBFFFCEFFF38FB9EC22757072C93D7F (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void VoxelBusters.Demos.ReplayKit.ReplayKitDemo::PrepareRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReplayKitDemo_PrepareRecording_m2CBB8E84B972EB43D809E50147E779FA06617056 (ReplayKitDemo_t7C7C4819EA46F9994CF6F6BACF78903E33A53CAD* __this, const RuntimeMethod* method) ;
// System.Void VoxelBusters.ReplayKit.ReplayKitManager::SetMicrophoneStatus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReplayKitManager_SetMicrophoneStatus_m878CABF34FE4050647B0435E75DCAFBD1E2A1355 (bool ___enable0, const RuntimeMethod* method) ;
// System.Void VoxelBusters.Demos.ReplayKit.ReplayKitDemo::StartRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReplayKitDemo_StartRecording_mAC9BF71F9A3800F7D8737CF4DDE633B28F1ADC50 (ReplayKitDemo_t7C7C4819EA46F9994CF6F6BACF78903E33A53CAD* __this, const RuntimeMethod* method) ;
// System.Void VoxelBusters.Demos.ReplayKit.ReplayKitDemo::StopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReplayKitDemo_StopRecording_mB06A9410309F7A154DDF918BA7D31DEDCA6A0406 (ReplayKitDemo_t7C7C4819EA46F9994CF6F6BACF78903E33A53CAD* __this, const RuntimeMethod* method) ;
// System.Void VoxelBusters.Demos.ReplayKit.ReplayKitDemo::SavePreview()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReplayKitDemo_SavePreview_m4DD39D315780FD0F144C9874EE873FB313DF0471 (ReplayKitDemo_t7C7C4819EA46F9994CF6F6BACF78903E33A53CAD* __this, const RuntimeMethod* method) ;
// System.Void VoxelBusters.Demos.ReplayKit.ReplayKitDemo::Preview()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReplayKitDemo_Preview_m4FFA3D4E7E58A0D3574F220B7F41F091C3BA3998 (ReplayKitDemo_t7C7C4819EA46F9994CF6F6BACF78903E33A53CAD* __this, const RuntimeMethod* method) ;
// System.String VoxelBusters.ReplayKit.ReplayKitManager::GetPreviewFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReplayKitManager_GetPreviewFilePath_mD8E30D395FF2DD806609465FC1A37569383B790C (const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4 (String_t* ___sceneName0, int32_t ___mode1, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.Resources::UnloadUnusedAssets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* Resources_UnloadUnusedAssets_mCF3262B8C797DF9B71C60BDAC9D492E211C47E46 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator NativeGalleryScr::TakeScreenshotAndSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeGalleryScr_TakeScreenshotAndSave_mBBCF3AC213A8641A2A262B44369C1948DF1EDBAC (NativeGalleryScr_t1A847DBB5134BE8BF02B56A676C8ABC68AA64159* __this, const RuntimeMethod* method) ;
// System.Void NativeGalleryScr::PickImage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGalleryScr_PickImage_mC9DD91A31B125A2405AD6239F45E9A3FC98D3161 (NativeGalleryScr_t1A847DBB5134BE8BF02B56A676C8ABC68AA64159* __this, int32_t ___maxSize0, const RuntimeMethod* method) ;
// System.Void NativeGalleryScr::PickVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGalleryScr_PickVideo_m35D481BC3483DC087CBE8F5F3D2CE2B68EB77152 (NativeGalleryScr_t1A847DBB5134BE8BF02B56A676C8ABC68AA64159* __this, const RuntimeMethod* method) ;
// System.Void NativeGalleryScr/<TakeScreenshotAndSave>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTakeScreenshotAndSaveU3Ed__4__ctor_m55B21B1031C79696F4ECE766E8CF555C94FCEA44 (U3CTakeScreenshotAndSaveU3Ed__4_tB77CC1A003AFF0BBE31BB4D315CDB3CCCBA7AE17* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void NativeGalleryScr/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mF0B9249ECB1C85530A75542F8F4597BF0AC3C212 (U3CU3Ec__DisplayClass5_0_t9234C7D231E56F118B7E0BF06D686E6A4DCA4E0C* __this, const RuntimeMethod* method) ;
// System.Void NativeGallery/MediaPickCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickCallback__ctor_m6772B2B8FB0ED8FC367118012A390E247874EA4D (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// NativeGallery/Permission NativeGallery::GetImageFromGallery(NativeGallery/MediaPickCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetImageFromGallery_m82D0088A30E6C21058FC976035A79A3FB69092D0 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// NativeGallery/Permission NativeGallery::GetVideoFromGallery(NativeGallery/MediaPickCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetVideoFromGallery_m4EA9B0D238EA7C0871AC09BB79411CCB728522A7 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method) ;
// System.Boolean NativeGallery::CanSelectMultipleMediaTypesFromGallery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanSelectMultipleMediaTypesFromGallery_m7933FD3387F1B5FA453E6C0058066B66C2940D85 (const RuntimeMethod* method) ;
// NativeGallery/Permission NativeGallery::GetMixedMediaFromGallery(NativeGallery/MediaPickCallback,NativeGallery/MediaType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMixedMediaFromGallery_m1E455DC6D7C21B13A0349F1EE8D887CD2B9FBD6D (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___callback0, int32_t ___mediaTypes1, String_t* ___title2, const RuntimeMethod* method) ;
// System.Void NativeGalleryScr/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD565AD3C77CCF3ABF76682F3865CD5D5BBCC21C4 (U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154* __this, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Handheld::PlayFullScreenMovie(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Handheld_PlayFullScreenMovie_m7E119FB926E50A9AD367656C637E9264BBE3F653 (String_t* ___path0, const RuntimeMethod* method) ;
// NativeGallery/MediaType NativeGallery::GetMediaTypeOfFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMediaTypeOfFile_mA96959253AD3780CB52FBD2514AB73D94CB292CD (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___source0, int32_t ___destX1, int32_t ___destY2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void NativeGallery/MediaSaveCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaveCallback__ctor_mC807D0DC716FCEACAB7FC85AD2916F702D92E5EF (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// NativeGallery/Permission NativeGallery::SaveImageToGallery(UnityEngine.Texture2D,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveImageToGallery_m12E159B7316F9B3CB016F656848006BD1570C2E5 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___image0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___callback3, const RuntimeMethod* method) ;
// UnityEngine.Texture2D NativeGallery::LoadImageAtPath(System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* NativeGallery_LoadImageAtPath_m50C948E704D493F8AB568B498FE660175639E318 (String_t* ___imagePath0, int32_t ___maxSize1, bool ___markTextureNonReadable2, bool ___generateMipmaps3, bool ___linearColorSpace4, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_CreatePrimitive_mE2F848626FE928B6E3810ABFB81867E619BB2507 (int32_t ___type0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_forward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Shader UnityEngine.Material::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Shader::get_isSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5 (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_shader(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Boolean AndroidUtils::IsPermitted(AndroidPermission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidUtils_IsPermitted_m240A73B629E0C6AD4B19ECDE6B5BF1B82AEBED3F (int32_t ___permission0, const RuntimeMethod* method) ;
// System.Void AndroidUtils::RequestPermission(AndroidPermission,UnityEngine.Events.UnityAction,UnityEngine.Events.UnityAction,UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUtils_RequestPermission_mDAC3CD4BC03A29FA6C798F8A34C8204E16D3D701 (int32_t ___permission0, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___onAllow1, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___onDeny2, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___onDenyAndNeverAskAgain3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Void UnityEngine.Events.UnityAction::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method) ;
// System.Void AndroidUtils::ResetAllCallBacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUtils_ResetAllCallBacks_m91B810DD5A58CAFD3F9837A9F390E8938857AB36 (AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9* __this, const RuntimeMethod* method) ;
// System.String AndroidUtils::GetPermissionStrr(AndroidPermission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidUtils_GetPermissionStrr_m7A2507120F7BDF597B6BE1DA983A06AF325B9FD8 (int32_t ___permission0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void AndroidUtils/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_mE806CCE485A6D8E689B628ED3561A51FA7093A08 (U3CU3Ec__DisplayClass20_0_tEB109AAB926E939ED508C7E30B561215CC4CF590* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaRunnable::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaRunnable__ctor_m000E4FEB2DE8031A1CD733610D76E2BF60490334 (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___className0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.String>(System.String)
inline String_t* AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void AndroidUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m29713C20E9EB687A6DF3F06B084CF04C96DF3E06 (U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8* __this, const RuntimeMethod* method) ;
// System.Void AndroidUtils::ShowToast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUtils_ShowToast_m3AC0A880F2CE28E53F30BE4BD36347419FBE27C4 (String_t* ___message0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<AndroidUtils>()
inline AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9* Object_FindObjectOfType_TisAndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_mC09278340B1F902F54998F0E58458EEF4582163D (const RuntimeMethod* method)
{
	return ((  AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Void UIController::OnStartRecord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_OnStartRecord_m10451972A4295318AF44D00404368D05AEDAB5F6 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) ;
// System.Void AndroidUtils::StartRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUtils_StartRecording_mCD77609C01F03D5547594CC570D58DEB3E07619C (AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9* __this, const RuntimeMethod* method) ;
// System.Void UIController::OnStopRecord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_OnStopRecord_mDD955FF32D875F2E263CD8D9897B042E0722E73D (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) ;
// System.Void AndroidUtils::StopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUtils_StopRecording_mA92F12792A7296B7EDC3D41328AD5040D37463C7 (AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9* __this, const RuntimeMethod* method) ;
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
// System.Void AssetBundleSample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetBundleSample_Start_m36AEC685409794AC89060122DD1C22C030D58E95 (AssetBundleSample_t66E2EBAD87DB85C20C17C511F65D7F36AAEC968B* __this, const RuntimeMethod* method) 
{
	{
		// Caching.ClearCache();
		bool L_0;
		L_0 = Caching_ClearCache_mDDE85684FE00661765C6EC49D2DC2254C26973D6(NULL);
		// StartCoroutine(load(loadUrl, 1));
		String_t* L_1 = __this->___loadUrl_5;
		RuntimeObject* L_2;
		L_2 = AssetBundleSample_load_mD3251F877590FFDD33F0DEA9FC4E069E47FB5DD6(__this, L_1, 1, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void AssetBundleSample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetBundleSample_Update_m60A2D96E0CE009CAE592864A62DA0CB52E565D55 (AssetBundleSample_t66E2EBAD87DB85C20C17C511F65D7F36AAEC968B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int percent = (int)(www.progress * 100);
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_0 = __this->___www_6;
		NullCheck(L_0);
		float L_1;
		L_1 = WWW_get_progress_m8BE51921011B9C737C690F8776F93109E5481B47(L_0, NULL);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_1, (100.0f))));
		// guitext.text = percent.ToString() + "%";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___guitext_4;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_3, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		// }
		return;
	}
}
// System.Collections.IEnumerator AssetBundleSample::load(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AssetBundleSample_load_mD3251F877590FFDD33F0DEA9FC4E069E47FB5DD6 (AssetBundleSample_t66E2EBAD87DB85C20C17C511F65D7F36AAEC968B* __this, String_t* ___url0, int32_t ___version1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CloadU3Ed__5_t43796C5C931C20EE8C07C8E042EF3AC4591AB3AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CloadU3Ed__5_t43796C5C931C20EE8C07C8E042EF3AC4591AB3AD* L_0 = (U3CloadU3Ed__5_t43796C5C931C20EE8C07C8E042EF3AC4591AB3AD*)il2cpp_codegen_object_new(U3CloadU3Ed__5_t43796C5C931C20EE8C07C8E042EF3AC4591AB3AD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CloadU3Ed__5__ctor_m8D56E86EEA1C350E2FC89A6236EFD9B648264D54(L_0, 0, NULL);
		U3CloadU3Ed__5_t43796C5C931C20EE8C07C8E042EF3AC4591AB3AD* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CloadU3Ed__5_t43796C5C931C20EE8C07C8E042EF3AC4591AB3AD* L_2 = L_1;
		String_t* L_3 = ___url0;
		NullCheck(L_2);
		L_2->___url_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___url_3), (void*)L_3);
		U3CloadU3Ed__5_t43796C5C931C20EE8C07C8E042EF3AC4591AB3AD* L_4 = L_2;
		int32_t L_5 = ___version1;
		NullCheck(L_4);
		L_4->___version_4 = L_5;
		return L_4;
	}
}
// System.Void AssetBundleSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetBundleSample__ctor_m9204A3CB615BCC7C589E1227FB4A0E0C23027DD9 (AssetBundleSample_t66E2EBAD87DB85C20C17C511F65D7F36AAEC968B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EE1C5E4A717F93604C58401FE2748C71FAD90CB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string loadUrl = "http://kirikd.ru/EpsonServer/Arctic/Model06.android.unity3d";
		__this->___loadUrl_5 = _stringLiteral8EE1C5E4A717F93604C58401FE2748C71FAD90CB;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___loadUrl_5), (void*)_stringLiteral8EE1C5E4A717F93604C58401FE2748C71FAD90CB);
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
// System.Void AssetBundleSample/<load>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CloadU3Ed__5__ctor_m8D56E86EEA1C350E2FC89A6236EFD9B648264D54 (U3CloadU3Ed__5_t43796C5C931C20EE8C07C8E042EF3AC4591AB3AD* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void AssetBundleSample/<load>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CloadU3Ed__5_System_IDisposable_Dispose_m226F1791D4F3D1D74372EB9230196B7DDE32CBAF (U3CloadU3Ed__5_t43796C5C931C20EE8C07C8E042EF3AC4591AB3AD* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean AssetBundleSample/<load>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CloadU3Ed__5_MoveNext_m73418DA3CDB7BEB2A50A2E00F8E56E0F456609D6 (U3CloadU3Ed__5_t43796C5C931C20EE8C07C8E042EF3AC4591AB3AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAssetBundleSample_t66E2EBAD87DB85C20C17C511F65D7F36AAEC968B_m13C53E7896221A3DAF68B64DF7E366DEE73B438B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF76ACD0E930DEA6BAE9F3D19211EA1A922D696FE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AssetBundleSample_t66E2EBAD87DB85C20C17C511F65D7F36AAEC968B* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AssetBundleSample_t66E2EBAD87DB85C20C17C511F65D7F36AAEC968B* L_1 = __this->___U3CU3E4__this_2;
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
				goto IL_003b;
			}
			case 2:
			{
				goto IL_0075;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0042;
	}

IL_002b:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003b:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0042:
	{
		// while (!Caching.ready)
		bool L_3;
		L_3 = Caching_get_ready_mD35419F411EBA15AF02F527D9A46AAF4E26C8205(NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// www = WWW.LoadFromCacheOrDownload(url, version);
		AssetBundleSample_t66E2EBAD87DB85C20C17C511F65D7F36AAEC968B* L_4 = V_1;
		String_t* L_5 = __this->___url_3;
		int32_t L_6 = __this->___version_4;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_7;
		L_7 = WWW_LoadFromCacheOrDownload_mC37569163190837FDBE243E9E156069BB8101605(L_5, L_6, NULL);
		NullCheck(L_4);
		L_4->___www_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___www_6), (void*)L_7);
		// yield return www;
		AssetBundleSample_t66E2EBAD87DB85C20C17C511F65D7F36AAEC968B* L_8 = V_1;
		NullCheck(L_8);
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_9 = L_8->___www_6;
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0075:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log("Loaded ");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralF76ACD0E930DEA6BAE9F3D19211EA1A922D696FE, NULL);
		// if (www.error != null)
		AssetBundleSample_t66E2EBAD87DB85C20C17C511F65D7F36AAEC968B* L_10 = V_1;
		NullCheck(L_10);
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_11 = L_10->___www_6;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = WWW_get_error_m6B2E4F6DB8ECC8217A112EC62AAA1D5E71AA1C93(L_11, NULL);
		if (!L_12)
		{
			goto IL_00ae;
		}
	}
	{
		// throw new Exception("WWW download had an error: " + www.error);
		AssetBundleSample_t66E2EBAD87DB85C20C17C511F65D7F36AAEC968B* L_13 = V_1;
		NullCheck(L_13);
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_14 = L_13->___www_6;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = WWW_get_error_m6B2E4F6DB8ECC8217A112EC62AAA1D5E71AA1C93(L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45149F7F2FFF490CEE9E9CEE82E45CC9945E352C)), L_15, NULL);
		Exception_t* L_17 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CloadU3Ed__5_MoveNext_m73418DA3CDB7BEB2A50A2E00F8E56E0F456609D6_RuntimeMethod_var)));
	}

IL_00ae:
	{
		// AssetBundle assetBundle = www.assetBundle;
		AssetBundleSample_t66E2EBAD87DB85C20C17C511F65D7F36AAEC968B* L_18 = V_1;
		NullCheck(L_18);
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_19 = L_18->___www_6;
		NullCheck(L_19);
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_20;
		L_20 = WWW_get_assetBundle_mB4DC5AFC3732922D2AE792A02699058DABF5B38E(L_19, NULL);
		// GameObject Chaildd = Instantiate(assetBundle.mainAsset) as GameObject; // Instantiate(assetBundle.Load("AssetName"));
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_21 = L_20;
		NullCheck(L_21);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22;
		L_22 = AssetBundle_get_mainAsset_mBB663F2D2D3593437EF1A90F464CBEBF9F3D1F5C(L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_23;
		L_23 = Object_Instantiate_m24741FECC461F230DBD3E76CD6AEE2E395CB340D(L_22, NULL);
		// Chaildd.transform.SetParent(this.transform, false);
		NullCheck(((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_23, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_23, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)), NULL);
		AssetBundleSample_t66E2EBAD87DB85C20C17C511F65D7F36AAEC968B* L_25 = V_1;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_25, NULL);
		NullCheck(L_24);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_24, L_26, (bool)0, NULL);
		// this.gameObject.SetActive(false);
		AssetBundleSample_t66E2EBAD87DB85C20C17C511F65D7F36AAEC968B* L_27 = V_1;
		NullCheck(L_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_27, NULL);
		NullCheck(L_28);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)0, NULL);
		// Destroy(guitext);
		AssetBundleSample_t66E2EBAD87DB85C20C17C511F65D7F36AAEC968B* L_29 = V_1;
		NullCheck(L_29);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30 = L_29->___guitext_4;
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_30, NULL);
		// Destroy(this.GetComponent<AssetBundleSample>());
		AssetBundleSample_t66E2EBAD87DB85C20C17C511F65D7F36AAEC968B* L_31 = V_1;
		NullCheck(L_31);
		AssetBundleSample_t66E2EBAD87DB85C20C17C511F65D7F36AAEC968B* L_32;
		L_32 = Component_GetComponent_TisAssetBundleSample_t66E2EBAD87DB85C20C17C511F65D7F36AAEC968B_m13C53E7896221A3DAF68B64DF7E366DEE73B438B(L_31, Component_GetComponent_TisAssetBundleSample_t66E2EBAD87DB85C20C17C511F65D7F36AAEC968B_m13C53E7896221A3DAF68B64DF7E366DEE73B438B_RuntimeMethod_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_32, NULL);
		// assetBundle.Unload(false);
		NullCheck(L_21);
		AssetBundle_Unload_m0A189871E61A0D6735A2B41B3360A1F0677B636B(L_21, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object AssetBundleSample/<load>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CloadU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m35C88149C4472982F1307C2BF6027898EEB43AC2 (U3CloadU3Ed__5_t43796C5C931C20EE8C07C8E042EF3AC4591AB3AD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void AssetBundleSample/<load>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CloadU3Ed__5_System_Collections_IEnumerator_Reset_mEFCFECD9272CA85461FEB54D2CDA002EA4981F95 (U3CloadU3Ed__5_t43796C5C931C20EE8C07C8E042EF3AC4591AB3AD* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CloadU3Ed__5_System_Collections_IEnumerator_Reset_mEFCFECD9272CA85461FEB54D2CDA002EA4981F95_RuntimeMethod_var)));
	}
}
// System.Object AssetBundleSample/<load>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CloadU3Ed__5_System_Collections_IEnumerator_get_Current_mCEE3C6F874F25D7C709FE12A30C101C62EAFE294 (U3CloadU3Ed__5_t43796C5C931C20EE8C07C8E042EF3AC4591AB3AD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void LoadFromFileExample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadFromFileExample_Start_m511136EA1539500A585E1AB059F1B34852CE275B (LoadFromFileExample_tE1FCCA292D122EB567D1D67C148C2B1EE967848D* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(InstantiateObject());
		RuntimeObject* L_0;
		L_0 = LoadFromFileExample_InstantiateObject_m36C757667C27A4DB882BE54D2924C437E8734106(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator LoadFromFileExample::InstantiateObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadFromFileExample_InstantiateObject_m36C757667C27A4DB882BE54D2924C437E8734106 (LoadFromFileExample_tE1FCCA292D122EB567D1D67C148C2B1EE967848D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInstantiateObjectU3Ed__1_t75CDDE27FD588B6F9784E177FB52AA2DDB1CB49F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CInstantiateObjectU3Ed__1_t75CDDE27FD588B6F9784E177FB52AA2DDB1CB49F* L_0 = (U3CInstantiateObjectU3Ed__1_t75CDDE27FD588B6F9784E177FB52AA2DDB1CB49F*)il2cpp_codegen_object_new(U3CInstantiateObjectU3Ed__1_t75CDDE27FD588B6F9784E177FB52AA2DDB1CB49F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CInstantiateObjectU3Ed__1__ctor_m16B5082ED29E046BA642FF1EC5F8D41CD974CCCB(L_0, 0, NULL);
		return L_0;
	}
}
// System.Collections.IEnumerator LoadFromFileExample::DownloadBundles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadFromFileExample_DownloadBundles_mC346153C9574FD0AFA8087A50E7E83A1D0F35BE3 (LoadFromFileExample_tE1FCCA292D122EB567D1D67C148C2B1EE967848D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDownloadBundlesU3Ed__6_tF1EA225E0DCEA4F95CDF464D74B9BE2D4FB79394_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDownloadBundlesU3Ed__6_tF1EA225E0DCEA4F95CDF464D74B9BE2D4FB79394* L_0 = (U3CDownloadBundlesU3Ed__6_tF1EA225E0DCEA4F95CDF464D74B9BE2D4FB79394*)il2cpp_codegen_object_new(U3CDownloadBundlesU3Ed__6_tF1EA225E0DCEA4F95CDF464D74B9BE2D4FB79394_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDownloadBundlesU3Ed__6__ctor_mE70CCEBC0B7E03F4576F4D3B6F0CC1ED52DCE000(L_0, 0, NULL);
		U3CDownloadBundlesU3Ed__6_tF1EA225E0DCEA4F95CDF464D74B9BE2D4FB79394* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator LoadFromFileExample::GetAssetBundle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadFromFileExample_GetAssetBundle_m288615B51B228D8708676808D9B8515A2D3DCCAD (LoadFromFileExample_tE1FCCA292D122EB567D1D67C148C2B1EE967848D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetAssetBundleU3Ed__7_t4892D048A9DC5B5E07D8665C86E60F02881C1613_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetAssetBundleU3Ed__7_t4892D048A9DC5B5E07D8665C86E60F02881C1613* L_0 = (U3CGetAssetBundleU3Ed__7_t4892D048A9DC5B5E07D8665C86E60F02881C1613*)il2cpp_codegen_object_new(U3CGetAssetBundleU3Ed__7_t4892D048A9DC5B5E07D8665C86E60F02881C1613_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetAssetBundleU3Ed__7__ctor_m844245A8A555EE5503E31D5F347F3F0B7A36EC0F(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void LoadFromFileExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadFromFileExample__ctor_m6894A11CEE3ADA515FEE768E2652089B63EA512A (LoadFromFileExample_tE1FCCA292D122EB567D1D67C148C2B1EE967848D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6689137C2490CEFBE1CCFB87833CA5032CFC3123);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public uint crc = 3720593779;//copied from http://safebuild.net/hari/bundle/kitchen.manifest
		__this->___crc_4 = ((int32_t)-574373517);
		// public string url = "http://kirikd.ru/EpsonServer/Arctic/Model08.android.unity3d";
		__this->___url_5 = _stringLiteral6689137C2490CEFBE1CCFB87833CA5032CFC3123;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___url_5), (void*)_stringLiteral6689137C2490CEFBE1CCFB87833CA5032CFC3123);
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
// System.Void LoadFromFileExample/<InstantiateObject>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInstantiateObjectU3Ed__1__ctor_m16B5082ED29E046BA642FF1EC5F8D41CD974CCCB (U3CInstantiateObjectU3Ed__1_t75CDDE27FD588B6F9784E177FB52AA2DDB1CB49F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LoadFromFileExample/<InstantiateObject>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInstantiateObjectU3Ed__1_System_IDisposable_Dispose_m9889B349E27F707279E306D91473991251BE203C (U3CInstantiateObjectU3Ed__1_t75CDDE27FD588B6F9784E177FB52AA2DDB1CB49F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean LoadFromFileExample/<InstantiateObject>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CInstantiateObjectU3Ed__1_MoveNext_m9640F245E5C9CCFBC185820C1EA469E352849C06 (U3CInstantiateObjectU3Ed__1_t75CDDE27FD588B6F9784E177FB52AA2DDB1CB49F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetBundle_LoadAsset_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m0216591F4BA27A483AA2C83EFDABCEA80B214063_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31B68548F13D962C00D5C29C78C8952D7FF3A486);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6689137C2490CEFBE1CCFB87833CA5032CFC3123);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75DD2D44571F44B6F1140AB52193761B47728B9B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD08387DC2F0400CAF5E896C48C4ABC4A6351B928);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	float V_2 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0066;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// string url = "http://kirikd.ru/EpsonServer/Arctic/Model08.android.unity3d";
		V_1 = _stringLiteral6689137C2490CEFBE1CCFB87833CA5032CFC3123;
		// var request
		//     = UnityEngine.Networking.UnityWebRequestAssetBundle.GetAssetBundle(url, 0);
		String_t* L_3 = V_1;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4;
		L_4 = UnityWebRequestAssetBundle_GetAssetBundle_mF32B250DBF7AFD52905996B106A25400E6B6CB7F(L_3, 0, NULL);
		__this->___U3CrequestU3E5__2_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__2_2), (void*)L_4);
		// float pro = request.downloadProgress;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = __this->___U3CrequestU3E5__2_2;
		NullCheck(L_5);
		float L_6;
		L_6 = UnityWebRequest_get_downloadProgress_m28B3DB759530A61929D8AB02A4482AB21D3348B1(L_5, NULL);
		V_2 = L_6;
		// Debug.Log("Loaded^ " + pro);
		String_t* L_7;
		L_7 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_2), NULL);
		String_t* L_8;
		L_8 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral31B68548F13D962C00D5C29C78C8952D7FF3A486, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_8, NULL);
		// yield return request.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_9 = __this->___U3CrequestU3E5__2_2;
		NullCheck(L_9);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_10;
		L_10 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_9, NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0066:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// AssetBundle bundle = UnityEngine.Networking.DownloadHandlerAssetBundle.GetContent(request);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_11 = __this->___U3CrequestU3E5__2_2;
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_12;
		L_12 = DownloadHandlerAssetBundle_GetContent_m0DC43ADFD18D8C0D80C1B2DC15D132A5D3C641A9(L_11, NULL);
		// GameObject cube = bundle.LoadAsset<GameObject>("Cube");
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_13 = L_12;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = AssetBundle_LoadAsset_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m0216591F4BA27A483AA2C83EFDABCEA80B214063(L_13, _stringLiteralD08387DC2F0400CAF5E896C48C4ABC4A6351B928, AssetBundle_LoadAsset_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m0216591F4BA27A483AA2C83EFDABCEA80B214063_RuntimeMethod_var);
		V_3 = L_14;
		// GameObject sprite = bundle.LoadAsset<GameObject>("Sprite");
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = AssetBundle_LoadAsset_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m0216591F4BA27A483AA2C83EFDABCEA80B214063(L_13, _stringLiteral75DD2D44571F44B6F1140AB52193761B47728B9B, AssetBundle_LoadAsset_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m0216591F4BA27A483AA2C83EFDABCEA80B214063_RuntimeMethod_var);
		// Instantiate(cube);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		// Instantiate(sprite);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_15, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		// }
		return (bool)0;
	}
}
// System.Object LoadFromFileExample/<InstantiateObject>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInstantiateObjectU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m34A10CB9EA615CE957C6AF88F9FA2B13EA6DC7F7 (U3CInstantiateObjectU3Ed__1_t75CDDE27FD588B6F9784E177FB52AA2DDB1CB49F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LoadFromFileExample/<InstantiateObject>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInstantiateObjectU3Ed__1_System_Collections_IEnumerator_Reset_m283185012BE3354C710A03F386F0763869838E6B (U3CInstantiateObjectU3Ed__1_t75CDDE27FD588B6F9784E177FB52AA2DDB1CB49F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInstantiateObjectU3Ed__1_System_Collections_IEnumerator_Reset_m283185012BE3354C710A03F386F0763869838E6B_RuntimeMethod_var)));
	}
}
// System.Object LoadFromFileExample/<InstantiateObject>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInstantiateObjectU3Ed__1_System_Collections_IEnumerator_get_Current_m61DFDBFA1D0556BFBAA154421802A744DE39559F (U3CInstantiateObjectU3Ed__1_t75CDDE27FD588B6F9784E177FB52AA2DDB1CB49F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void LoadFromFileExample/<DownloadBundles>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadBundlesU3Ed__6__ctor_mE70CCEBC0B7E03F4576F4D3B6F0CC1ED52DCE000 (U3CDownloadBundlesU3Ed__6_tF1EA225E0DCEA4F95CDF464D74B9BE2D4FB79394* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LoadFromFileExample/<DownloadBundles>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadBundlesU3Ed__6_System_IDisposable_Dispose_m570D32A26A17340BFF5403A12648FEF41DB4BADE (U3CDownloadBundlesU3Ed__6_tF1EA225E0DCEA4F95CDF464D74B9BE2D4FB79394* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CDownloadBundlesU3Ed__6_U3CU3Em__Finally1_m53813D1F6FC3DCDD4202EF89B608AD4E7AD5B062(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean LoadFromFileExample/<DownloadBundles>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDownloadBundlesU3Ed__6_MoveNext_m7E2FBDF27A3DF213DF5F5752B6AAB5797A9D85F4 (U3CDownloadBundlesU3Ed__6_tF1EA225E0DCEA4F95CDF464D74B9BE2D4FB79394* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31B68548F13D962C00D5C29C78C8952D7FF3A486);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	LoadFromFileExample_tE1FCCA292D122EB567D1D67C148C2B1EE967848D* V_2 = NULL;
	float V_3 = 0.0f;
	AssetBundle_tB38418819A49060CD738CB21541649340F082943* V_4 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0106:
			{// begin fault (depth: 1)
				U3CDownloadBundlesU3Ed__6_System_IDisposable_Dispose_m570D32A26A17340BFF5403A12648FEF41DB4BADE(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				LoadFromFileExample_tE1FCCA292D122EB567D1D67C148C2B1EE967848D* L_1 = __this->___U3CU3E4__this_2;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_001f_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_009f_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_010d;
			}

IL_001f_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// using (var uwr = new UnityWebRequest(url, UnityWebRequest.kHttpVerbGET))
				LoadFromFileExample_tE1FCCA292D122EB567D1D67C148C2B1EE967848D* L_4 = V_2;
				NullCheck(L_4);
				String_t* L_5 = L_4->___url_5;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E(L_6, L_5, _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6, NULL);
				__this->___U3CuwrU3E5__2_3 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CuwrU3E5__2_3), (void*)L_6);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// uwr.downloadHandler = new DownloadHandlerAssetBundle(url, version, 0);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_7 = __this->___U3CuwrU3E5__2_3;
				LoadFromFileExample_tE1FCCA292D122EB567D1D67C148C2B1EE967848D* L_8 = V_2;
				NullCheck(L_8);
				String_t* L_9 = L_8->___url_5;
				LoadFromFileExample_tE1FCCA292D122EB567D1D67C148C2B1EE967848D* L_10 = V_2;
				NullCheck(L_10);
				uint32_t L_11 = L_10->___version_7;
				DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C* L_12 = (DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C*)il2cpp_codegen_object_new(DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C_il2cpp_TypeInfo_var);
				NullCheck(L_12);
				DownloadHandlerAssetBundle__ctor_m9D18EBB1DB97C2F86AB3D09B3F0E2DE2F2934D95(L_12, L_9, L_11, 0, NULL);
				NullCheck(L_7);
				UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F(L_7, L_12, NULL);
				// float pro = uwr.downloadProgress;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_13 = __this->___U3CuwrU3E5__2_3;
				NullCheck(L_13);
				float L_14;
				L_14 = UnityWebRequest_get_downloadProgress_m28B3DB759530A61929D8AB02A4482AB21D3348B1(L_13, NULL);
				V_3 = L_14;
				// Debug.Log("Loaded^ " + pro);
				String_t* L_15;
				L_15 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_3), NULL);
				String_t* L_16;
				L_16 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral31B68548F13D962C00D5C29C78C8952D7FF3A486, L_15, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_16, NULL);
				// yield return uwr.SendWebRequest();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_17 = __this->___U3CuwrU3E5__2_3;
				NullCheck(L_17);
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_18;
				L_18 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_17, NULL);
				__this->___U3CU3E2__current_1 = L_18;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_18);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_010d;
			}

IL_009f_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// AssetBundle bundle = DownloadHandlerAssetBundle.GetContent(uwr);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_19 = __this->___U3CuwrU3E5__2_3;
				AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_20;
				L_20 = DownloadHandlerAssetBundle_GetContent_m0DC43ADFD18D8C0D80C1B2DC15D132A5D3C641A9(L_19, NULL);
				V_4 = L_20;
				// if (AssetName == " ")
				LoadFromFileExample_tE1FCCA292D122EB567D1D67C148C2B1EE967848D* L_21 = V_2;
				NullCheck(L_21);
				String_t* L_22 = L_21->___AssetName_6;
				bool L_23;
				L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
				if (!L_23)
				{
					goto IL_00d5_1;
				}
			}
			{
				// Instantiate(bundle.mainAsset);
				AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_24 = V_4;
				NullCheck(L_24);
				Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_25;
				L_25 = AssetBundle_get_mainAsset_mBB663F2D2D3593437EF1A90F464CBEBF9F3D1F5C(L_24, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26;
				L_26 = Object_Instantiate_m24741FECC461F230DBD3E76CD6AEE2E395CB340D(L_25, NULL);
				goto IL_00ed_1;
			}

IL_00d5_1:
			{
				// GameObject go = bundle.LoadAsset(AssetName) as GameObject;
				AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_27 = V_4;
				LoadFromFileExample_tE1FCCA292D122EB567D1D67C148C2B1EE967848D* L_28 = V_2;
				NullCheck(L_28);
				String_t* L_29 = L_28->___AssetName_6;
				NullCheck(L_27);
				Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_30;
				L_30 = AssetBundle_LoadAsset_m25926A405F3AB79A4DF2447F23A09957EC7F063E(L_27, L_29, NULL);
				// Instantiate(go);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
				L_31 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_30, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)), Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
			}

IL_00ed_1:
			{
				// bundle.Unload(false);
				AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_32 = V_4;
				NullCheck(L_32);
				AssetBundle_Unload_m0A189871E61A0D6735A2B41B3360A1F0677B636B(L_32, (bool)0, NULL);
				// }
				U3CDownloadBundlesU3Ed__6_U3CU3Em__Finally1_m53813D1F6FC3DCDD4202EF89B608AD4E7AD5B062(__this, NULL);
				__this->___U3CuwrU3E5__2_3 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CuwrU3E5__2_3), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_010d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_010d:
	{
		bool L_33 = V_0;
		return L_33;
	}
}
// System.Void LoadFromFileExample/<DownloadBundles>d__6::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadBundlesU3Ed__6_U3CU3Em__Finally1_m53813D1F6FC3DCDD4202EF89B608AD4E7AD5B062 (U3CDownloadBundlesU3Ed__6_tF1EA225E0DCEA4F95CDF464D74B9BE2D4FB79394* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CuwrU3E5__2_3;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___U3CuwrU3E5__2_3;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object LoadFromFileExample/<DownloadBundles>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDownloadBundlesU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1A9A805CD12AED5493C60E2DE4AEAC5F689A0F4C (U3CDownloadBundlesU3Ed__6_tF1EA225E0DCEA4F95CDF464D74B9BE2D4FB79394* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LoadFromFileExample/<DownloadBundles>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadBundlesU3Ed__6_System_Collections_IEnumerator_Reset_m634379BE7D901B5164612DE0A8E8CC67076B5B2F (U3CDownloadBundlesU3Ed__6_tF1EA225E0DCEA4F95CDF464D74B9BE2D4FB79394* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDownloadBundlesU3Ed__6_System_Collections_IEnumerator_Reset_m634379BE7D901B5164612DE0A8E8CC67076B5B2F_RuntimeMethod_var)));
	}
}
// System.Object LoadFromFileExample/<DownloadBundles>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDownloadBundlesU3Ed__6_System_Collections_IEnumerator_get_Current_m25B6F0A4383174E82710DCEDB18F2DD3812276BC (U3CDownloadBundlesU3Ed__6_tF1EA225E0DCEA4F95CDF464D74B9BE2D4FB79394* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void LoadFromFileExample/<GetAssetBundle>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAssetBundleU3Ed__7__ctor_m844245A8A555EE5503E31D5F347F3F0B7A36EC0F (U3CGetAssetBundleU3Ed__7_t4892D048A9DC5B5E07D8665C86E60F02881C1613* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LoadFromFileExample/<GetAssetBundle>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAssetBundleU3Ed__7_System_IDisposable_Dispose_m016A3EAEC8DDCA85F8F8847521A9B0B9A238C501 (U3CGetAssetBundleU3Ed__7_t4892D048A9DC5B5E07D8665C86E60F02881C1613* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean LoadFromFileExample/<GetAssetBundle>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetAssetBundleU3Ed__7_MoveNext_mA1AC969B1D0DAF975591009600166A2F2E893B71 (U3CGetAssetBundleU3Ed__7_t4892D048A9DC5B5E07D8665C86E60F02881C1613* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31B68548F13D962C00D5C29C78C8952D7FF3A486);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6689137C2490CEFBE1CCFB87833CA5032CFC3123);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0063;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// UnityWebRequest www = UnityWebRequestAssetBundle.GetAssetBundle("http://kirikd.ru/EpsonServer/Arctic/Model08.android.unity3d");
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_3;
		L_3 = UnityWebRequestAssetBundle_GetAssetBundle_m01AF7AA269AB187FAA31F37AFB03B1C46B9A9409(_stringLiteral6689137C2490CEFBE1CCFB87833CA5032CFC3123, NULL);
		__this->___U3CwwwU3E5__2_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwwwU3E5__2_2), (void*)L_3);
		// float pro = www.downloadProgress;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = __this->___U3CwwwU3E5__2_2;
		NullCheck(L_4);
		float L_5;
		L_5 = UnityWebRequest_get_downloadProgress_m28B3DB759530A61929D8AB02A4482AB21D3348B1(L_4, NULL);
		V_1 = L_5;
		// Debug.Log("Loaded^ " + pro);
		String_t* L_6;
		L_6 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_1), NULL);
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral31B68548F13D962C00D5C29C78C8952D7FF3A486, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_7, NULL);
		// yield return www.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8 = __this->___U3CwwwU3E5__2_2;
		NullCheck(L_8);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_9;
		L_9 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_8, NULL);
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0063:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (www.result != UnityWebRequest.Result.Success)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_10 = __this->___U3CwwwU3E5__2_2;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_10, NULL);
		if ((((int32_t)L_11) == ((int32_t)1)))
		{
			goto IL_008a;
		}
	}
	{
		// Debug.Log(www.error);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_12 = __this->___U3CwwwU3E5__2_2;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_13, NULL);
		goto IL_0096;
	}

IL_008a:
	{
		// AssetBundle bundle = DownloadHandlerAssetBundle.GetContent(www);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_14 = __this->___U3CwwwU3E5__2_2;
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_15;
		L_15 = DownloadHandlerAssetBundle_GetContent_m0DC43ADFD18D8C0D80C1B2DC15D132A5D3C641A9(L_14, NULL);
	}

IL_0096:
	{
		// }
		return (bool)0;
	}
}
// System.Object LoadFromFileExample/<GetAssetBundle>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAssetBundleU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBAD4365F10BF4F5FA5FB9C1F9666B849E88F0B8E (U3CGetAssetBundleU3Ed__7_t4892D048A9DC5B5E07D8665C86E60F02881C1613* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LoadFromFileExample/<GetAssetBundle>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAssetBundleU3Ed__7_System_Collections_IEnumerator_Reset_m2AF43D903986F73EA93ADCC421B35838E0F34C3E (U3CGetAssetBundleU3Ed__7_t4892D048A9DC5B5E07D8665C86E60F02881C1613* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetAssetBundleU3Ed__7_System_Collections_IEnumerator_Reset_m2AF43D903986F73EA93ADCC421B35838E0F34C3E_RuntimeMethod_var)));
	}
}
// System.Object LoadFromFileExample/<GetAssetBundle>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAssetBundleU3Ed__7_System_Collections_IEnumerator_get_Current_m91907EE7AA97DE18AC4DAB57CFF02D5CB0884305 (U3CGetAssetBundleU3Ed__7_t4892D048A9DC5B5E07D8665C86E60F02881C1613* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void ReloadShader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReloadShader_Start_mF6369A85BA23D5F77E0B7C8B817A02F77D8DCDDA (ReloadShader_t3C4F13650CB79AF03022113C2260F573396988B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m301E95E824CB214DD0BA6D04221CE97B30BE9ACD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Material material = new Material(Shader.Find(ShaderName));
		String_t* L_0 = __this->___ShaderName_4;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1;
		L_1 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_0, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_2, L_1, NULL);
		V_0 = L_2;
		// texture = Resources.Load<Texture2D>(TexPath);
		String_t* L_3 = __this->___TexPath_6;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4;
		L_4 = Resources_Load_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m301E95E824CB214DD0BA6D04221CE97B30BE9ACD(L_3, Resources_Load_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m301E95E824CB214DD0BA6D04221CE97B30BE9ACD_RuntimeMethod_var);
		__this->___texture_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___texture_10), (void*)L_4);
		// GetComponent<Renderer>().material = material;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5;
		L_5 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = V_0;
		NullCheck(L_5);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_5, L_6, NULL);
		// for (int i = 0; i < ShadNames.Length; i++)
		V_1 = 0;
		goto IL_006f;
	}

IL_0032:
	{
		// GetComponent<Renderer>().material.SetFloat(ShadNames[i].Split('@')[0], float.Parse(ShadNames[i].Split('@')[1]) );
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7;
		L_7 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_7);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8;
		L_8 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_7, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = __this->___ShadNames_9;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13;
		L_13 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_12, ((int32_t)64), 0, NULL);
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = __this->___ShadNames_9;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		String_t* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20;
		L_20 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_19, ((int32_t)64), 0, NULL);
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		float L_23;
		L_23 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_22, NULL);
		NullCheck(L_8);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_8, L_15, L_23, NULL);
		// for (int i = 0; i < ShadNames.Length; i++)
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_006f:
	{
		// for (int i = 0; i < ShadNames.Length; i++)
		int32_t L_25 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = __this->___ShadNames_9;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_0032;
		}
	}
	{
		// material.SetTexture(TexName, texture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = V_0;
		String_t* L_28 = __this->___TexName_5;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_29 = __this->___texture_10;
		NullCheck(L_27);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_27, L_28, L_29, NULL);
		// GetComponent<Renderer>().material.SetTexture(TexName, texture);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_30;
		L_30 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_30);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31;
		L_31 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_30, NULL);
		String_t* L_32 = __this->___TexName_5;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_33 = __this->___texture_10;
		NullCheck(L_31);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_31, L_32, L_33, NULL);
		// GetComponent<Renderer>().material.SetColor(ColorN, ColorV);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_34;
		L_34 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_34);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35;
		L_35 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_34, NULL);
		String_t* L_36 = __this->___ColorN_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37 = __this->___ColorV_8;
		NullCheck(L_35);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_35, L_36, L_37, NULL);
		// }
		return;
	}
}
// System.Void ReloadShader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReloadShader__ctor_m62C85F742984BAE00259769976F45F8CE99EA48B (ReloadShader_t3C4F13650CB79AF03022113C2260F573396988B2* __this, const RuntimeMethod* method) 
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
// System.Void AutoFocusMod::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoFocusMod_Start_mD253E31E2191AE96E1C01E2F552A20C3F4A164FA (AutoFocusMod_t4A402E9441FD6BE78409265F32E856DC3CF852A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoFocusMod_OnPaused_m1F08113F1EF8A4196381E915302DB2099F04232B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoFocusMod_OnVuforiaStarted_m7A1CD8DE44A889A02ECAAEBC2F2CA803527930A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D9B225611FDC1BB72AE7C50F6A75EA0AD954BAB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke("Poststart", 8);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral3D9B225611FDC1BB72AE7C50F6A75EA0AD954BAB, (8.0f), NULL);
		// var vuforia = VuforiaARController.Instance;
		VuforiaARController_tE0E6A049C85B5F8C2AD8A8176DFCBDC71FB0D1E6* L_0;
		L_0 = VuforiaARController_get_Instance_mA036017DFEABBCA2D93FFB7BDC5F38D6EC50D798(NULL);
		// vuforia.RegisterVuforiaStartedCallback(OnVuforiaStarted);
		VuforiaARController_tE0E6A049C85B5F8C2AD8A8176DFCBDC71FB0D1E6* L_1 = L_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, __this, (intptr_t)((void*)AutoFocusMod_OnVuforiaStarted_m7A1CD8DE44A889A02ECAAEBC2F2CA803527930A9_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		VuforiaARController_RegisterVuforiaStartedCallback_m039532B11899E523AD8D3EFC5A1290CAB867A428(L_1, L_2, NULL);
		// vuforia.RegisterOnPauseCallback(OnPaused);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_3, __this, (intptr_t)((void*)AutoFocusMod_OnPaused_m1F08113F1EF8A4196381E915302DB2099F04232B_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		VuforiaARController_RegisterOnPauseCallback_m546CE764DD7899DD60735CA86E9BFDD26673FEDA(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void AutoFocusMod::Poststart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoFocusMod_Poststart_mC3ACD8BF79172B16CFA14CE6DB5A8136D4B709E5 (AutoFocusMod_t4A402E9441FD6BE78409265F32E856DC3CF852A3* __this, const RuntimeMethod* method) 
{
	{
		// CameraDevice.Instance.SetFocusMode(FocusMode.FOCUS_MODE_CONTINUOUSAUTO);
		CameraDevice_t34ADAC91596592865E992E89542B1B6F88EAAB27* L_0;
		L_0 = CameraDevice_get_Instance_mD3AF67583DE4D3C7A8AE5673A7797011274CC00A(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = CameraDevice_SetFocusMode_m17EA4A830F8731D3E032832205D6AF26437979C0(L_0, 2, NULL);
		// }
		return;
	}
}
// System.Void AutoFocusMod::OnVuforiaStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoFocusMod_OnVuforiaStarted_m7A1CD8DE44A889A02ECAAEBC2F2CA803527930A9 (AutoFocusMod_t4A402E9441FD6BE78409265F32E856DC3CF852A3* __this, const RuntimeMethod* method) 
{
	{
		// CameraDevice.Instance.SetFocusMode(FocusMode.FOCUS_MODE_CONTINUOUSAUTO);
		CameraDevice_t34ADAC91596592865E992E89542B1B6F88EAAB27* L_0;
		L_0 = CameraDevice_get_Instance_mD3AF67583DE4D3C7A8AE5673A7797011274CC00A(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = CameraDevice_SetFocusMode_m17EA4A830F8731D3E032832205D6AF26437979C0(L_0, 2, NULL);
		// }
		return;
	}
}
// System.Void AutoFocusMod::OnPaused(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoFocusMod_OnPaused_m1F08113F1EF8A4196381E915302DB2099F04232B (AutoFocusMod_t4A402E9441FD6BE78409265F32E856DC3CF852A3* __this, bool ___paused0, const RuntimeMethod* method) 
{
	{
		// if (!paused) // resumed
		bool L_0 = ___paused0;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// CameraDevice.Instance.SetFocusMode(FocusMode.FOCUS_MODE_CONTINUOUSAUTO);
		CameraDevice_t34ADAC91596592865E992E89542B1B6F88EAAB27* L_1;
		L_1 = CameraDevice_get_Instance_mD3AF67583DE4D3C7A8AE5673A7797011274CC00A(NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = CameraDevice_SetFocusMode_m17EA4A830F8731D3E032832205D6AF26437979C0(L_1, 2, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void AutoFocusMod::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoFocusMod__ctor_mD48C1852CEF8483BDA3FB92C2C33EFB29AC60A7B (AutoFocusMod_t4A402E9441FD6BE78409265F32E856DC3CF852A3* __this, const RuntimeMethod* method) 
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
// System.Void CamRecFunction::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamRecFunction_Start_m9CCCEB8DBA77F3090BBF363C8C3450D59B5BB095 (CamRecFunction_t72CA675983FBAEA4C2B06B51C18602C266F9CF68* __this, const RuntimeMethod* method) 
{
	{
		// rkd.Initialise();
		ReplayKitDemo_t7C7C4819EA46F9994CF6F6BACF78903E33A53CAD* L_0 = __this->___rkd_4;
		NullCheck(L_0);
		ReplayKitDemo_Initialise_mBDF311852EAA9F25A405D37AB2B9D29C7E2448BF(L_0, NULL);
		// Screen.orientation = ScreenOrientation.Portrait;
		Screen_set_orientation_m6BA37EE8CEBFFFCEFFF38FB9EC22757072C93D7F(1, NULL);
		// }
		return;
	}
}
// System.Void CamRecFunction::RecordBtt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamRecFunction_RecordBtt_mFEE00228DB4D959EF12D1A43571AA1D81707DE0B (CamRecFunction_t72CA675983FBAEA4C2B06B51C18602C266F9CF68* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral283A00558AED3E72F0BDE4CF7034D3D38EF5565D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9315857A8C463DCE0092BE73104A9B8F26293AB2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IsActive = !IsActive;               //if inventory is already True it will set it to false And the other way around.
		bool L_0 = __this->___IsActive_6;
		__this->___IsActive_6 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// if (IsActive == true)
		bool L_1 = __this->___IsActive_6;
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		// recordIco.SetActive(false);    //if the boolean is true
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___recordIco_7;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// stopIco.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___stopIco_8;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// rkd.PrepareRecording();
		ReplayKitDemo_t7C7C4819EA46F9994CF6F6BACF78903E33A53CAD* L_4 = __this->___rkd_4;
		NullCheck(L_4);
		ReplayKitDemo_PrepareRecording_m2CBB8E84B972EB43D809E50147E779FA06617056(L_4, NULL);
		// ReplayKitManager.SetMicrophoneStatus(true);
		ReplayKitManager_SetMicrophoneStatus_m878CABF34FE4050647B0435E75DCAFBD1E2A1355((bool)1, NULL);
		// rkd.StartRecording();
		ReplayKitDemo_t7C7C4819EA46F9994CF6F6BACF78903E33A53CAD* L_5 = __this->___rkd_4;
		NullCheck(L_5);
		ReplayKitDemo_StartRecording_mAC9BF71F9A3800F7D8737CF4DDE633B28F1ADC50(L_5, NULL);
		return;
	}

IL_004c:
	{
		// recordIco.SetActive(true);    //if the boolean is true
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___recordIco_7;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// stopIco.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___stopIco_8;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// rkd.StopRecording();
		ReplayKitDemo_t7C7C4819EA46F9994CF6F6BACF78903E33A53CAD* L_8 = __this->___rkd_4;
		NullCheck(L_8);
		ReplayKitDemo_StopRecording_mB06A9410309F7A154DDF918BA7D31DEDCA6A0406(L_8, NULL);
		// Invoke("SaveFileVideo", 1);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral283A00558AED3E72F0BDE4CF7034D3D38EF5565D, (1.0f), NULL);
		// Invoke("PrevRec", 2);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral9315857A8C463DCE0092BE73104A9B8F26293AB2, (2.0f), NULL);
		// }
		return;
	}
}
// System.Void CamRecFunction::SaveFileVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamRecFunction_SaveFileVideo_m75B49B6450DE03E96194AEF8F20CB56F4D78A1DD (CamRecFunction_t72CA675983FBAEA4C2B06B51C18602C266F9CF68* __this, const RuntimeMethod* method) 
{
	{
		// void SaveFileVideo() { rkd.SavePreview(); }
		ReplayKitDemo_t7C7C4819EA46F9994CF6F6BACF78903E33A53CAD* L_0 = __this->___rkd_4;
		NullCheck(L_0);
		ReplayKitDemo_SavePreview_m4DD39D315780FD0F144C9874EE873FB313DF0471(L_0, NULL);
		// void SaveFileVideo() { rkd.SavePreview(); }
		return;
	}
}
// System.Void CamRecFunction::PrevRec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamRecFunction_PrevRec_mFE7D57243570AC9C89DD40B010D4742CEA1FF6A7 (CamRecFunction_t72CA675983FBAEA4C2B06B51C18602C266F9CF68* __this, const RuntimeMethod* method) 
{
	{
		// void PrevRec() { rkd.Preview(); string filePath = ReplayKitManager.GetPreviewFilePath(); }
		ReplayKitDemo_t7C7C4819EA46F9994CF6F6BACF78903E33A53CAD* L_0 = __this->___rkd_4;
		NullCheck(L_0);
		ReplayKitDemo_Preview_m4FFA3D4E7E58A0D3574F220B7F41F091C3BA3998(L_0, NULL);
		// void PrevRec() { rkd.Preview(); string filePath = ReplayKitManager.GetPreviewFilePath(); }
		String_t* L_1;
		L_1 = ReplayKitManager_GetPreviewFilePath_mD8E30D395FF2DD806609465FC1A37569383B790C(NULL);
		// void PrevRec() { rkd.Preview(); string filePath = ReplayKitManager.GetPreviewFilePath(); }
		return;
	}
}
// System.Void CamRecFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamRecFunction__ctor_m6FF32938D35470DB7B2EBAA6D846A8F083A27404 (CamRecFunction_t72CA675983FBAEA4C2B06B51C18602C266F9CF68* __this, const RuntimeMethod* method) 
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
// System.Void LevelLoader::MainMenyShowBtt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoader_MainMenyShowBtt_m10DFE76C8F565CEB1B101C66808415156BFC7A6A (LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* __this, const RuntimeMethod* method) 
{
	{
		// IsActive = !IsActive;               //if inventory is already True it will set it to false And the other way around.                                              //all with the same key press that can be changed in the inspecto
		bool L_0 = __this->___IsActive_11;
		__this->___IsActive_11 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// if (IsActive == true)
		bool L_1 = __this->___IsActive_11;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// MenyItems.SetActive(true);    //if the boolean is true
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___MenyItems_12;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		return;
	}

IL_0024:
	{
		// MenyItems.SetActive(false);    //if the boolean is true
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___MenyItems_12;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void LevelLoader::BttLoadLevel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoader_BttLoadLevel_m20F70569D5C9FDD628EAC602949EF44BA046C886 (LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* __this, String_t* ___scenName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BE47D77C95D88556AA68DA60ED4C1D49CB2E819);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BBE23706569B717AA65EB80DA08CA1A2BBC56F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2D71F772F8C967510DDFD86AA50F545C5C4D5C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4522F8F0AE3CEA578951FD7F5B4169673824A37);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneN = scenName;
		String_t* L_0 = ___scenName0;
		__this->___SceneN_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SceneN_4), (void*)L_0);
		// Invoke("LoadShowA", 0.2f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral8BBE23706569B717AA65EB80DA08CA1A2BBC56F5, (0.200000003f), NULL);
		// Invoke("LoadShowB", 0.35f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralC4522F8F0AE3CEA578951FD7F5B4169673824A37, (0.349999994f), NULL);
		// Invoke("LoadShowC", 0.45f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralC2D71F772F8C967510DDFD86AA50F545C5C4D5C0, (0.449999988f), NULL);
		// Invoke("LoadSceneWait", 0.5f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral6BE47D77C95D88556AA68DA60ED4C1D49CB2E819, (0.5f), NULL);
		// LoadingText.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___LoadingText_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void LevelLoader::LoadSceneWait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoader_LoadSceneWait_m9A9B7EC101A54A1979C3666A12B1BC3A6BB561A4 (LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(SceneN, LoadSceneMode.Single);
		String_t* L_0 = __this->___SceneN_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m92684F7A44947924E5EB26D9D534C0ABEC8686E4(L_0, 0, NULL);
		// }
		return;
	}
}
// System.Void LevelLoader::LoadShowA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoader_LoadShowA_mAAF9C2FF94C16AFF1C4B535FE637C76F77F0973A (LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* __this, const RuntimeMethod* method) 
{
	{
		// {     loa1.SetActive(true);  }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___loa1_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// {     loa1.SetActive(true);  }
		return;
	}
}
// System.Void LevelLoader::LoadShowB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoader_LoadShowB_m88DE31D6917C1D1AC6158257435E2C5826EBDC5A (LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* __this, const RuntimeMethod* method) 
{
	{
		// {     loa2.SetActive(true);  }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___loa2_7;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// {     loa2.SetActive(true);  }
		return;
	}
}
// System.Void LevelLoader::LoadShowC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoader_LoadShowC_mAB042A49D2DE0DCC33D6DAC73757AE49D3EF2069 (LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* __this, const RuntimeMethod* method) 
{
	{
		// {     loa3.SetActive(true); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___loa3_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// {     loa3.SetActive(true); }
		return;
	}
}
// System.Void LevelLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoader_Start_m4D5447BE58C257C9C192270CD7ABC78570BCCEE2 (LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABE462B7AC958C600F5B1AE687FDC90C670DD1EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC876B3232ECAA845423D59F1B9536B3325FEC9CE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Resources.UnloadUnusedAssets();
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_0;
		L_0 = Resources_UnloadUnusedAssets_mCF3262B8C797DF9B71C60BDAC9D492E211C47E46(NULL);
		// Invoke("LoadShowFinishA", 0.01f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralABE462B7AC958C600F5B1AE687FDC90C670DD1EC, (0.00999999978f), NULL);
		// Invoke("LoadShowFinishB", 0.99f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralC876B3232ECAA845423D59F1B9536B3325FEC9CE, (0.99000001f), NULL);
		// }
		return;
	}
}
// System.Void LevelLoader::LoadShowFinishA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoader_LoadShowFinishA_m4C10BD7B057C3306B589FB28A38EE5889E13DD44 (LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* __this, const RuntimeMethod* method) 
{
	{
		// { loaF1.SetActive(true); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___loaF1_9;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// { loaF1.SetActive(true); }
		return;
	}
}
// System.Void LevelLoader::LoadShowFinishB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoader_LoadShowFinishB_m7AEB9B22C174078B56E3BD04592B6F6618219E40 (LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* __this, const RuntimeMethod* method) 
{
	{
		// { loaFHidge.SetActive(false); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___loaFHidge_10;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// { loaFHidge.SetActive(false); }
		return;
	}
}
// System.Void LevelLoader::ZoomIn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoader_ZoomIn_m2C1F8FF85E0C456558AAE3E3FF24C7B618DDB612 (LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* __this, int32_t ___Val0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (Val == 1)
		int32_t L_0 = ___Val0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0048;
		}
	}
	{
		// for (int i = 0; i < ObjsArr.Length; i++)
		V_0 = 0;
		goto IL_003d;
	}

IL_0008:
	{
		// ObjsArr[i].transform.localScale += new Vector3(0.15f, 0.15f, 0.15f);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___ObjsArr_13;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = L_5;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (0.150000006f), (0.150000006f), (0.150000006f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_7, L_8, NULL);
		NullCheck(L_6);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_6, L_9, NULL);
		// for (int i = 0; i < ObjsArr.Length; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003d:
	{
		// for (int i = 0; i < ObjsArr.Length; i++)
		int32_t L_11 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_12 = __this->___ObjsArr_13;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0008;
		}
	}

IL_0048:
	{
		// if (Val == -1)
		int32_t L_13 = ___Val0;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0090;
		}
	}
	{
		// for (int i = 0; i < ObjsArr.Length; i++)
		V_1 = 0;
		goto IL_0085;
	}

IL_0050:
	{
		// ObjsArr[i].transform.localScale += new Vector3(-0.15f, -0.15f, -0.15f);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = __this->___ObjsArr_13;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = L_18;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_21), (-0.150000006f), (-0.150000006f), (-0.150000006f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_20, L_21, NULL);
		NullCheck(L_19);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_19, L_22, NULL);
		// for (int i = 0; i < ObjsArr.Length; i++)
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0085:
	{
		// for (int i = 0; i < ObjsArr.Length; i++)
		int32_t L_24 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_25 = __this->___ObjsArr_13;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0050;
		}
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void LevelLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoader__ctor_mB1812BC658449839C948710AC302F1483F380107 (LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* __this, const RuntimeMethod* method) 
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
// System.Void NativeGalleryScr::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGalleryScr_Update_mC1AB38C5B578587A3A3C682713B3AA00F70E4258 (NativeGalleryScr_t1A847DBB5134BE8BF02B56A676C8ABC68AA64159* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void NativeGalleryScr::ScreenNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGalleryScr_ScreenNative_mDE2A124388C6342285B73840B0A0784F0AF4397B (NativeGalleryScr_t1A847DBB5134BE8BF02B56A676C8ABC68AA64159* __this, const RuntimeMethod* method) 
{
	{
		// { StartCoroutine(TakeScreenshotAndSave());  }
		RuntimeObject* L_0;
		L_0 = NativeGalleryScr_TakeScreenshotAndSave_mBBCF3AC213A8641A2A262B44369C1948DF1EDBAC(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// { StartCoroutine(TakeScreenshotAndSave());  }
		return;
	}
}
// System.Void NativeGalleryScr::PickImageNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGalleryScr_PickImageNative_mEEC230207D0B13C04D09156B157312FA4C142F33 (NativeGalleryScr_t1A847DBB5134BE8BF02B56A676C8ABC68AA64159* __this, const RuntimeMethod* method) 
{
	{
		// { PickImage(512); }
		NativeGalleryScr_PickImage_mC9DD91A31B125A2405AD6239F45E9A3FC98D3161(__this, ((int32_t)512), NULL);
		// { PickImage(512); }
		return;
	}
}
// System.Void NativeGalleryScr::PickVideoNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGalleryScr_PickVideoNative_m794308BF7681CA9120C8BC8DF9A7D13577BBB9FA (NativeGalleryScr_t1A847DBB5134BE8BF02B56A676C8ABC68AA64159* __this, const RuntimeMethod* method) 
{
	{
		// { PickVideo(); }
		NativeGalleryScr_PickVideo_m35D481BC3483DC087CBE8F5F3D2CE2B68EB77152(__this, NULL);
		// { PickVideo(); }
		return;
	}
}
// System.Collections.IEnumerator NativeGalleryScr::TakeScreenshotAndSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeGalleryScr_TakeScreenshotAndSave_mBBCF3AC213A8641A2A262B44369C1948DF1EDBAC (NativeGalleryScr_t1A847DBB5134BE8BF02B56A676C8ABC68AA64159* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTakeScreenshotAndSaveU3Ed__4_tB77CC1A003AFF0BBE31BB4D315CDB3CCCBA7AE17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTakeScreenshotAndSaveU3Ed__4_tB77CC1A003AFF0BBE31BB4D315CDB3CCCBA7AE17* L_0 = (U3CTakeScreenshotAndSaveU3Ed__4_tB77CC1A003AFF0BBE31BB4D315CDB3CCCBA7AE17*)il2cpp_codegen_object_new(U3CTakeScreenshotAndSaveU3Ed__4_tB77CC1A003AFF0BBE31BB4D315CDB3CCCBA7AE17_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTakeScreenshotAndSaveU3Ed__4__ctor_m55B21B1031C79696F4ECE766E8CF555C94FCEA44(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void NativeGalleryScr::PickImage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGalleryScr_PickImage_mC9DD91A31B125A2405AD6239F45E9A3FC98D3161 (NativeGalleryScr_t1A847DBB5134BE8BF02B56A676C8ABC68AA64159* __this, int32_t ___maxSize0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Permission_t3F3DCD2A60B865EED3451B39DB6A376E75C8F831_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CPickImageU3Eb__0_m5F5A549A673DDEF0F619317F14BA1FD611CAB307_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t9234C7D231E56F118B7E0BF06D686E6A4DCA4E0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B81FF3046B1031A034B86C61AA1329B3AC75C37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6759FA5F111D1DC4A539DCDCF4F4CFC6C5100E8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		U3CU3Ec__DisplayClass5_0_t9234C7D231E56F118B7E0BF06D686E6A4DCA4E0C* L_0 = (U3CU3Ec__DisplayClass5_0_t9234C7D231E56F118B7E0BF06D686E6A4DCA4E0C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t9234C7D231E56F118B7E0BF06D686E6A4DCA4E0C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_mF0B9249ECB1C85530A75542F8F4597BF0AC3C212(L_0, NULL);
		U3CU3Ec__DisplayClass5_0_t9234C7D231E56F118B7E0BF06D686E6A4DCA4E0C* L_1 = L_0;
		int32_t L_2 = ___maxSize0;
		NullCheck(L_1);
		L_1->___maxSize_0 = L_2;
		// NativeGallery.Permission permission = NativeGallery.GetImageFromGallery((path) =>
		// {
		//     Debug.Log("Image path: " + path);
		//     if (path != null)
		//     {
		//         // Create Texture from selected image
		//         Texture2D texture = NativeGallery.LoadImageAtPath(path, maxSize);
		//         if (texture == null)
		//         {
		//             Debug.Log("Couldn't load texture from " + path);
		//             return;
		//         }
		// 
		//         // Assign texture to a temporary quad and destroy it after 5 seconds
		//         GameObject quad = GameObject.CreatePrimitive(PrimitiveType.Quad);
		//         quad.transform.position = Camera.main.transform.position + Camera.main.transform.forward * 2.5f;
		//         quad.transform.forward = Camera.main.transform.forward;
		//         quad.transform.localScale = new Vector3(1f, texture.height / (float)texture.width, 1f);
		// 
		//         Material material = quad.GetComponent<Renderer>().material;
		//         if (!material.shader.isSupported) // happens when Standard shader is not included in the build
		//             material.shader = Shader.Find("Legacy Shaders/Diffuse");
		// 
		//         material.mainTexture = texture;
		// 
		//         Destroy(quad, 5f);
		// 
		//         // If a procedural texture is not destroyed manually,
		//         // it will only be freed after a scene change
		//         Destroy(texture, 5f);
		//     }
		// });
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_3 = (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6*)il2cpp_codegen_object_new(MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		MediaPickCallback__ctor_m6772B2B8FB0ED8FC367118012A390E247874EA4D(L_3, L_1, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CPickImageU3Eb__0_m5F5A549A673DDEF0F619317F14BA1FD611CAB307_RuntimeMethod_var), NULL);
		int32_t L_4;
		L_4 = NativeGallery_GetImageFromGallery_m82D0088A30E6C21058FC976035A79A3FB69092D0(L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteral6759FA5F111D1DC4A539DCDCF4F4CFC6C5100E8E, NULL);
		V_0 = L_4;
		// Debug.Log("Permission result: " + permission);
		Il2CppFakeBox<int32_t> L_5(Permission_t3F3DCD2A60B865EED3451B39DB6A376E75C8F831_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_6;
		L_6 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_5), NULL);
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral2B81FF3046B1031A034B86C61AA1329B3AC75C37, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_7, NULL);
		// }
		return;
	}
}
// System.Void NativeGalleryScr::PickVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGalleryScr_PickVideo_m35D481BC3483DC087CBE8F5F3D2CE2B68EB77152 (NativeGalleryScr_t1A847DBB5134BE8BF02B56A676C8ABC68AA64159* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Permission_t3F3DCD2A60B865EED3451B39DB6A376E75C8F831_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CPickVideoU3Eb__6_0_m8B6B4D15BF4F0E8AA967137F4B97A0CA34D9127A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12A5EDBB275DBAE4E3C69E5A33508523CAAEEA26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B81FF3046B1031A034B86C61AA1329B3AC75C37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88D3AF1882A99EF42ED88963253B1967EFDCD6AE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* G_B2_0 = NULL;
	MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* G_B1_0 = NULL;
	{
		// NativeGallery.Permission permission = NativeGallery.GetVideoFromGallery((path) =>
		// {
		//     Debug.Log("Video path: " + path);
		//     if (path != null)
		//     {
		//         // Play the selected video
		//         Handheld.PlayFullScreenMovie("file://" + path);
		//     }
		// }, "Select a video");
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_il2cpp_TypeInfo_var);
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_0 = ((U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_2;
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_il2cpp_TypeInfo_var);
		U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154* L_2 = ((U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_3 = (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6*)il2cpp_codegen_object_new(MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		MediaPickCallback__ctor_m6772B2B8FB0ED8FC367118012A390E247874EA4D(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CPickVideoU3Eb__6_0_m8B6B4D15BF4F0E8AA967137F4B97A0CA34D9127A_RuntimeMethod_var), NULL);
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_4 = L_3;
		((U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_2), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_001f:
	{
		int32_t L_5;
		L_5 = NativeGallery_GetVideoFromGallery_m4EA9B0D238EA7C0871AC09BB79411CCB728522A7(G_B2_0, _stringLiteral12A5EDBB275DBAE4E3C69E5A33508523CAAEEA26, _stringLiteral88D3AF1882A99EF42ED88963253B1967EFDCD6AE, NULL);
		V_0 = L_5;
		// Debug.Log("Permission result: " + permission);
		Il2CppFakeBox<int32_t> L_6(Permission_t3F3DCD2A60B865EED3451B39DB6A376E75C8F831_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_7;
		L_7 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_6), NULL);
		String_t* L_8;
		L_8 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral2B81FF3046B1031A034B86C61AA1329B3AC75C37, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_8, NULL);
		// }
		return;
	}
}
// System.Void NativeGalleryScr::PickImageOrVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGalleryScr_PickImageOrVideo_m39BC4946C9D323B975AB73BEDDF93E1F091D5238 (NativeGalleryScr_t1A847DBB5134BE8BF02B56A676C8ABC68AA64159* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Permission_t3F3DCD2A60B865EED3451B39DB6A376E75C8F831_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CPickImageOrVideoU3Eb__7_0_m5164DC37B6E5CBE300278D91B1CD3EA4961B6CFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B81FF3046B1031A034B86C61AA1329B3AC75C37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC663E7D2A840FB250507548CF8DBF31B33A1807);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* G_B3_0 = NULL;
	MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* G_B2_0 = NULL;
	{
		// if (NativeGallery.CanSelectMultipleMediaTypesFromGallery())
		bool L_0;
		L_0 = NativeGallery_CanSelectMultipleMediaTypesFromGallery_m7933FD3387F1B5FA453E6C0058066B66C2940D85(NULL);
		if (!L_0)
		{
			goto IL_004e;
		}
	}
	{
		// NativeGallery.Permission permission = NativeGallery.GetMixedMediaFromGallery((path) =>
		// {
		//     Debug.Log("Media path: " + path);
		//     if (path != null)
		//     {
		//         // Determine if user has picked an image, video or neither of these
		//         switch (NativeGallery.GetMediaTypeOfFile(path))
		//         {
		//             case NativeGallery.MediaType.Image: Debug.Log("Picked image"); break;
		//             case NativeGallery.MediaType.Video: Debug.Log("Picked video"); break;
		//             default: Debug.Log("Probably picked something else"); break;
		//         }
		//     }
		// }, NativeGallery.MediaType.Image | NativeGallery.MediaType.Video, "Select an image or video");
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_il2cpp_TypeInfo_var);
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_1 = ((U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_3;
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_il2cpp_TypeInfo_var);
		U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154* L_3 = ((U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_4 = (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6*)il2cpp_codegen_object_new(MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		MediaPickCallback__ctor_m6772B2B8FB0ED8FC367118012A390E247874EA4D(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CPickImageOrVideoU3Eb__7_0_m5164DC37B6E5CBE300278D91B1CD3EA4961B6CFA_RuntimeMethod_var), NULL);
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_5 = L_4;
		((U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_3), (void*)L_5);
		G_B3_0 = L_5;
	}

IL_0026:
	{
		int32_t L_6;
		L_6 = NativeGallery_GetMixedMediaFromGallery_m1E455DC6D7C21B13A0349F1EE8D887CD2B9FBD6D(G_B3_0, 3, _stringLiteralFC663E7D2A840FB250507548CF8DBF31B33A1807, NULL);
		V_0 = L_6;
		// Debug.Log("Permission result: " + permission);
		Il2CppFakeBox<int32_t> L_7(Permission_t3F3DCD2A60B865EED3451B39DB6A376E75C8F831_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_8;
		L_8 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_7), NULL);
		String_t* L_9;
		L_9 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral2B81FF3046B1031A034B86C61AA1329B3AC75C37, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_9, NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void NativeGalleryScr::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGalleryScr__ctor_mBF974E10C2BC7C91D2C559DA6BA320C3CC4EBA91 (NativeGalleryScr_t1A847DBB5134BE8BF02B56A676C8ABC68AA64159* __this, const RuntimeMethod* method) 
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
// System.Void NativeGalleryScr/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m19B69333AF13E6572E90E1BD1F283DF4D655AE98 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154* L_0 = (U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154*)il2cpp_codegen_object_new(U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mD565AD3C77CCF3ABF76682F3865CD5D5BBCC21C4(L_0, NULL);
		((U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void NativeGalleryScr/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD565AD3C77CCF3ABF76682F3865CD5D5BBCC21C4 (U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NativeGalleryScr/<>c::<TakeScreenshotAndSave>b__4_0(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CTakeScreenshotAndSaveU3Eb__4_0_m5B43A2F5FFDFD8C5D169704084125CA850955C56 (U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154* __this, bool ___success0, String_t* ___path1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8497955340C56CE300A3FED92A97D7543C116A5E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NativeGallery.Permission permission = NativeGallery.SaveImageToGallery(ss, "GalleryTest", "Image.png", (success, path) => Debug.Log("Media save result: " + success + " " + path));
		String_t* L_0;
		L_0 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&___success0), NULL);
		String_t* L_1 = ___path1;
		String_t* L_2;
		L_2 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteral8497955340C56CE300A3FED92A97D7543C116A5E, L_0, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		return;
	}
}
// System.Void NativeGalleryScr/<>c::<PickVideo>b__6_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CPickVideoU3Eb__6_0_m8B6B4D15BF4F0E8AA967137F4B97A0CA34D9127A (U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD89541427DA6A12497312F84211FB7C6331566AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Video path: " + path);
		String_t* L_0 = ___path0;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralD89541427DA6A12497312F84211FB7C6331566AA, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		// if (path != null)
		String_t* L_2 = ___path0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// Handheld.PlayFullScreenMovie("file://" + path);
		String_t* L_3 = ___path0;
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_3, NULL);
		bool L_5;
		L_5 = Handheld_PlayFullScreenMovie_m7E119FB926E50A9AD367656C637E9264BBE3F653(L_4, NULL);
	}

IL_0024:
	{
		// }, "Select a video");
		return;
	}
}
// System.Void NativeGalleryScr/<>c::<PickImageOrVideo>b__7_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CPickImageOrVideoU3Eb__7_0_m5164DC37B6E5CBE300278D91B1CD3EA4961B6CFA (U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1855101C324A3D9AC837C3EEF613C2018B11E97E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E46C13342407DC915EE592BB14E688C9292ECFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52B520EF703343E949C619DBD6F7A5EE336969E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6778B14CB1E1D67CB73B571758B55C5AAB3784E2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Debug.Log("Media path: " + path);
		String_t* L_0 = ___path0;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral6778B14CB1E1D67CB73B571758B55C5AAB3784E2, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		// if (path != null)
		String_t* L_2 = ___path0;
		if (!L_2)
		{
			goto IL_0044;
		}
	}
	{
		// switch (NativeGallery.GetMediaTypeOfFile(path))
		String_t* L_3 = ___path0;
		int32_t L_4;
		L_4 = NativeGallery_GetMediaTypeOfFile_mA96959253AD3780CB52FBD2514AB73D94CB292CD(L_3, NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_002f;
		}
	}
	{
		goto IL_003a;
	}

IL_0024:
	{
		// case NativeGallery.MediaType.Image: Debug.Log("Picked image"); break;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral1E46C13342407DC915EE592BB14E688C9292ECFD, NULL);
		// case NativeGallery.MediaType.Image: Debug.Log("Picked image"); break;
		return;
	}

IL_002f:
	{
		// case NativeGallery.MediaType.Video: Debug.Log("Picked video"); break;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral1855101C324A3D9AC837C3EEF613C2018B11E97E, NULL);
		// case NativeGallery.MediaType.Video: Debug.Log("Picked video"); break;
		return;
	}

IL_003a:
	{
		// default: Debug.Log("Probably picked something else"); break;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral52B520EF703343E949C619DBD6F7A5EE336969E1, NULL);
	}

IL_0044:
	{
		// }, NativeGallery.MediaType.Image | NativeGallery.MediaType.Video, "Select an image or video");
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
// System.Void NativeGalleryScr/<TakeScreenshotAndSave>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTakeScreenshotAndSaveU3Ed__4__ctor_m55B21B1031C79696F4ECE766E8CF555C94FCEA44 (U3CTakeScreenshotAndSaveU3Ed__4_tB77CC1A003AFF0BBE31BB4D315CDB3CCCBA7AE17* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void NativeGalleryScr/<TakeScreenshotAndSave>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTakeScreenshotAndSaveU3Ed__4_System_IDisposable_Dispose_m2C38238A793902063A801108FCEC5959EF5A5567 (U3CTakeScreenshotAndSaveU3Ed__4_tB77CC1A003AFF0BBE31BB4D315CDB3CCCBA7AE17* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean NativeGalleryScr/<TakeScreenshotAndSave>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTakeScreenshotAndSaveU3Ed__4_MoveNext_m6428DCD5BBADAB89B01BBC9134AB770F5AD09999 (U3CTakeScreenshotAndSaveU3Ed__4_tB77CC1A003AFF0BBE31BB4D315CDB3CCCBA7AE17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Permission_t3F3DCD2A60B865EED3451B39DB6A376E75C8F831_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CTakeScreenshotAndSaveU3Eb__4_0_m5B43A2F5FFDFD8C5D169704084125CA850955C56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2078CFCBC59B9CE0C60A601E88DEA14836D17C85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B81FF3046B1031A034B86C61AA1329B3AC75C37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF37E86612B08131A4171D70D9CCCAF41191D0B4F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	String_t* G_B6_2 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B6_3 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B6_4 = NULL;
	MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B5_2 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B5_3 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B5_4 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_3 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_3, NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_002b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Texture2D ss = new Texture2D(Screen.width, Screen.height, TextureFormat.RGB24, false);
		int32_t L_4;
		L_4 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_5;
		L_5 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_6, L_4, L_5, 3, (bool)0, NULL);
		// ss.ReadPixels(new Rect(0, 0, Screen.width, Screen.height), 0, 0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = L_6;
		int32_t L_8;
		L_8 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_9;
		L_9 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_10;
		memset((&L_10), 0, sizeof(L_10));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_10), (0.0f), (0.0f), ((float)L_8), ((float)L_9), /*hidden argument*/NULL);
		NullCheck(L_7);
		Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9(L_7, L_10, 0, 0, NULL);
		// ss.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = L_7;
		NullCheck(L_11);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_11, NULL);
		// NativeGallery.Permission permission = NativeGallery.SaveImageToGallery(ss, "GalleryTest", "Image.png", (success, path) => Debug.Log("Media save result: " + success + " " + path));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12 = L_11;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_il2cpp_TypeInfo_var);
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_13 = ((U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_1;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_14 = L_13;
		G_B5_0 = L_14;
		G_B5_1 = _stringLiteralF37E86612B08131A4171D70D9CCCAF41191D0B4F;
		G_B5_2 = _stringLiteral2078CFCBC59B9CE0C60A601E88DEA14836D17C85;
		G_B5_3 = L_12;
		G_B5_4 = L_12;
		if (L_14)
		{
			G_B6_0 = L_14;
			G_B6_1 = _stringLiteralF37E86612B08131A4171D70D9CCCAF41191D0B4F;
			G_B6_2 = _stringLiteral2078CFCBC59B9CE0C60A601E88DEA14836D17C85;
			G_B6_3 = L_12;
			G_B6_4 = L_12;
			goto IL_0096;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_il2cpp_TypeInfo_var);
		U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154* L_15 = ((U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_16 = (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D*)il2cpp_codegen_object_new(MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		MediaSaveCallback__ctor_mC807D0DC716FCEACAB7FC85AD2916F702D92E5EF(L_16, L_15, (intptr_t)((void*)U3CU3Ec_U3CTakeScreenshotAndSaveU3Eb__4_0_m5B43A2F5FFDFD8C5D169704084125CA850955C56_RuntimeMethod_var), NULL);
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_17 = L_16;
		((U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t12B736F40FBAB1B1D55E9AA2DC0C646520926154_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_1), (void*)L_17);
		G_B6_0 = L_17;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
		G_B6_4 = G_B5_4;
	}

IL_0096:
	{
		int32_t L_18;
		L_18 = NativeGallery_SaveImageToGallery_m12E159B7316F9B3CB016F656848006BD1570C2E5(G_B6_3, G_B6_2, G_B6_1, G_B6_0, NULL);
		V_1 = L_18;
		// Debug.Log("Permission result: " + permission);
		Il2CppFakeBox<int32_t> L_19(Permission_t3F3DCD2A60B865EED3451B39DB6A376E75C8F831_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_20;
		L_20 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_19), NULL);
		String_t* L_21;
		L_21 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral2B81FF3046B1031A034B86C61AA1329B3AC75C37, L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_21, NULL);
		// Destroy(ss);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(G_B6_4, NULL);
		// }
		return (bool)0;
	}
}
// System.Object NativeGalleryScr/<TakeScreenshotAndSave>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTakeScreenshotAndSaveU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF41A6B237B153CE0831661ABFBDE1E10A262A757 (U3CTakeScreenshotAndSaveU3Ed__4_tB77CC1A003AFF0BBE31BB4D315CDB3CCCBA7AE17* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void NativeGalleryScr/<TakeScreenshotAndSave>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTakeScreenshotAndSaveU3Ed__4_System_Collections_IEnumerator_Reset_mE4EA522F36C9174DF84CB3D40991D54AF395053D (U3CTakeScreenshotAndSaveU3Ed__4_tB77CC1A003AFF0BBE31BB4D315CDB3CCCBA7AE17* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTakeScreenshotAndSaveU3Ed__4_System_Collections_IEnumerator_Reset_mE4EA522F36C9174DF84CB3D40991D54AF395053D_RuntimeMethod_var)));
	}
}
// System.Object NativeGalleryScr/<TakeScreenshotAndSave>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTakeScreenshotAndSaveU3Ed__4_System_Collections_IEnumerator_get_Current_mDB28581A08B72C2C72CF5A1C833A44C9538EA623 (U3CTakeScreenshotAndSaveU3Ed__4_tB77CC1A003AFF0BBE31BB4D315CDB3CCCBA7AE17* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void NativeGalleryScr/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mF0B9249ECB1C85530A75542F8F4597BF0AC3C212 (U3CU3Ec__DisplayClass5_0_t9234C7D231E56F118B7E0BF06D686E6A4DCA4E0C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NativeGalleryScr/<>c__DisplayClass5_0::<PickImage>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CPickImageU3Eb__0_m5F5A549A673DDEF0F619317F14BA1FD611CAB307 (U3CU3Ec__DisplayClass5_0_t9234C7D231E56F118B7E0BF06D686E6A4DCA4E0C* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral174ED8386002338D41311EA8103201765BC2ED20);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6409FBFA701A36CE1B89AF1C8C3AF7480A95DD01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4C350CD70FB6498609CB72A9B70820E21F1640F);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B5_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	{
		// Debug.Log("Image path: " + path);
		String_t* L_0 = ___path0;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral174ED8386002338D41311EA8103201765BC2ED20, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		// if (path != null)
		String_t* L_2 = ___path0;
		if (!L_2)
		{
			goto IL_0106;
		}
	}
	{
		// Texture2D texture = NativeGallery.LoadImageAtPath(path, maxSize);
		String_t* L_3 = ___path0;
		int32_t L_4 = __this->___maxSize_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5;
		L_5 = NativeGallery_LoadImageAtPath_m50C948E704D493F8AB568B498FE660175639E318(L_3, L_4, (bool)1, (bool)1, (bool)0, NULL);
		V_0 = L_5;
		// if (texture == null)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		// Debug.Log("Couldn't load texture from " + path);
		String_t* L_8 = ___path0;
		String_t* L_9;
		L_9 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral6409FBFA701A36CE1B89AF1C8C3AF7480A95DD01, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_9, NULL);
		// return;
		return;
	}

IL_0040:
	{
		// GameObject quad = GameObject.CreatePrimitive(PrimitiveType.Quad);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_CreatePrimitive_mE2F848626FE928B6E3810ABFB81867E619BB2507(5, NULL);
		// quad.transform.position = Camera.main.transform.position + Camera.main.transform.forward * 2.5f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_10;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13;
		L_13 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16;
		L_16 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_18, (2.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_15, L_19, NULL);
		NullCheck(L_12);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_20, NULL);
		// quad.transform.forward = Camera.main.transform.forward;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = L_11;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_23;
		L_23 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_24, NULL);
		NullCheck(L_22);
		Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26(L_22, L_25, NULL);
		// quad.transform.localScale = new Vector3(1f, texture.height / (float)texture.width, 1f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = L_21;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_28);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_30 = V_0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_32), (1.0f), ((float)(((float)L_29)/((float)L_31))), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_27, L_32, NULL);
		// Material material = quad.GetComponent<Renderer>().material;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = L_26;
		NullCheck(L_33);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_34;
		L_34 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_33, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_34);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35;
		L_35 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_34, NULL);
		V_1 = L_35;
		// if (!material.shader.isSupported) // happens when Standard shader is not included in the build
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_36 = V_1;
		NullCheck(L_36);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_37;
		L_37 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_36, NULL);
		NullCheck(L_37);
		bool L_38;
		L_38 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_37, NULL);
		G_B4_0 = L_33;
		if (L_38)
		{
			G_B5_0 = L_33;
			goto IL_00ea;
		}
	}
	{
		// material.shader = Shader.Find("Legacy Shaders/Diffuse");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_39 = V_1;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_40;
		L_40 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteralC4C350CD70FB6498609CB72A9B70820E21F1640F, NULL);
		NullCheck(L_39);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_39, L_40, NULL);
		G_B5_0 = G_B4_0;
	}

IL_00ea:
	{
		// material.mainTexture = texture;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = V_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_42 = V_0;
		NullCheck(L_41);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_41, L_42, NULL);
		// Destroy(quad, 5f);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(G_B5_0, (5.0f), NULL);
		// Destroy(texture, 5f);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_43 = V_0;
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_43, (5.0f), NULL);
	}

IL_0106:
	{
		// });
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
// System.Void AndroidUtils::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUtils_Start_m6EEEBEC722A404D21A7DDD4C0F9429121EACDFB4 (AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoEncoder_tD86B27A620DB6BC6A1ACEEE80DD539FDA0ACEA50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B88C42DBB7021873EC04A9CC6FE5247A22B8803);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral915CBB86566445DCBCAA52E433D975E5DB090276);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB714177D80F1D905470D41D3FBD215F6189BDE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	float G_B4_0 = 0.0f;
	int32_t G_B7_0 = 0;
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_0, NULL);
		// using (AndroidJavaClass unityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_010a:
			{// begin finally (depth: 1)
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0113;
					}
				}
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0113:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// androidRecorder = unityClass.GetStatic<AndroidJavaObject>("currentActivity");
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = V_0;
				NullCheck(L_4);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
				L_5 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_4, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
				__this->___androidRecorder_12 = L_5;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___androidRecorder_12), (void*)L_5);
				// androidRecorder.Call("setUpSaveFolder","Tee");//custom your save folder to Movies/Tee, by defaut it will use Movies/AndroidUtils
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = __this->___androidRecorder_12;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
				NullCheck(L_8);
				ArrayElementTypeCheck (L_8, _stringLiteral915CBB86566445DCBCAA52E433D975E5DB090276);
				(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral915CBB86566445DCBCAA52E433D975E5DB090276);
				NullCheck(L_6);
				AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_6, _stringLiteralAB714177D80F1D905470D41D3FBD215F6189BDE5, L_8, NULL);
				// int width = (int)(Screen.width > SCREEN_WIDTH ? SCREEN_WIDTH : Screen.width);
				int32_t L_9;
				L_9 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
				if ((((float)((float)L_9)) > ((float)(720.0f))))
				{
					goto IL_005a_1;
				}
			}
			{
				int32_t L_10;
				L_10 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
				G_B4_0 = ((float)L_10);
				goto IL_005f_1;
			}

IL_005a_1:
			{
				G_B4_0 = (720.0f);
			}

IL_005f_1:
			{
				V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(G_B4_0);
				// int height = Screen.width > SCREEN_WIDTH ? (int)(Screen.height * SCREEN_WIDTH / Screen.width) : Screen.height;
				int32_t L_11;
				L_11 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
				if ((((float)((float)L_11)) > ((float)(720.0f))))
				{
					goto IL_0075_1;
				}
			}
			{
				int32_t L_12;
				L_12 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
				G_B7_0 = L_12;
				goto IL_0089_1;
			}

IL_0075_1:
			{
				int32_t L_13;
				L_13 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
				int32_t L_14;
				L_14 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
				G_B7_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(((float)il2cpp_codegen_multiply(((float)L_13), (720.0f)))/((float)L_14))));
			}

IL_0089_1:
			{
				V_2 = G_B7_0;
				// int bitrate = (int)(1f * width * height / 100 * 240 * 7);
				int32_t L_15 = V_1;
				int32_t L_16 = V_2;
				V_3 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((1.0f), ((float)L_15))), ((float)L_16)))/(100.0f))), (240.0f))), (7.0f))));
				// int fps = 30;
				V_4 = ((int32_t)30);
				// bool audioEnable=true;
				V_5 = (bool)1;
				// androidRecorder.Call("setupVideo", width, height,bitrate, fps,audioEnable,VideoEncoder.H264.ToString());//this line manual sets the video record setting. You can use the defaut setting by comment this code block
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_17 = __this->___androidRecorder_12;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_18;
				int32_t L_20 = V_1;
				int32_t L_21 = L_20;
				RuntimeObject* L_22 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_21);
				NullCheck(L_19);
				ArrayElementTypeCheck (L_19, L_22);
				(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_22);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_19;
				int32_t L_24 = V_2;
				int32_t L_25 = L_24;
				RuntimeObject* L_26 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_25);
				NullCheck(L_23);
				ArrayElementTypeCheck (L_23, L_26);
				(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_26);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_23;
				int32_t L_28 = V_3;
				int32_t L_29 = L_28;
				RuntimeObject* L_30 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_29);
				NullCheck(L_27);
				ArrayElementTypeCheck (L_27, L_30);
				(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_30);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = L_27;
				int32_t L_32 = V_4;
				int32_t L_33 = L_32;
				RuntimeObject* L_34 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_33);
				NullCheck(L_31);
				ArrayElementTypeCheck (L_31, L_34);
				(L_31)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_34);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_31;
				bool L_36 = V_5;
				bool L_37 = L_36;
				RuntimeObject* L_38 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_37);
				NullCheck(L_35);
				ArrayElementTypeCheck (L_35, L_38);
				(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_38);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_39 = L_35;
				V_6 = 2;
				Il2CppFakeBox<int32_t> L_40(VideoEncoder_tD86B27A620DB6BC6A1ACEEE80DD539FDA0ACEA50_il2cpp_TypeInfo_var, (&V_6));
				String_t* L_41;
				L_41 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_40), NULL);
				NullCheck(L_39);
				ArrayElementTypeCheck (L_39, L_41);
				(L_39)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_41);
				NullCheck(L_17);
				AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_17, _stringLiteral8B88C42DBB7021873EC04A9CC6FE5247A22B8803, L_39, NULL);
				// }
				goto IL_0114;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0114:
	{
		// }
		return;
	}
}
// System.Void AndroidUtils::StartRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUtils_StartRecording_mCD77609C01F03D5547594CC570D58DEB3E07619C (AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidUtils_U3CStartRecordingU3Eb__10_0_m62F4114B6546D88286E46324986C527F0A3F2E7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartRecordingU3Eb__10_1_m41D3E2C7CEEFD74583981696F83C9546CD97DA22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartRecordingU3Eb__10_2_mE4482F9D5226EE28FF07E753EAE910654873E089_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54C29DDEA50046D9BEA9A368A87F45D55E22FF92);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B3_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B2_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B5_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B4_0 = NULL;
	{
		// if (!AndroidUtils.IsPermitted(AndroidPermission.RECORD_AUDIO))//RECORD_AUDIO is declared inside plugin manifest but we need to request it manualy
		bool L_0;
		L_0 = AndroidUtils_IsPermitted_m240A73B629E0C6AD4B19ECDE6B5BF1B82AEBED3F(((int32_t)17), NULL);
		if (L_0)
		{
			goto IL_006d;
		}
	}
	{
		// AndroidUtils.RequestPermission(AndroidPermission.RECORD_AUDIO);
		AndroidUtils_RequestPermission_mDAC3CD4BC03A29FA6C798F8A34C8204E16D3D701(((int32_t)17), (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)NULL, (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)NULL, (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)NULL, NULL);
		// onAllowCallback = () =>
		// {
		//     androidRecorder.Call("startRecording");
		// };
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_1 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_1, __this, (intptr_t)((void*)AndroidUtils_U3CStartRecordingU3Eb__10_0_m62F4114B6546D88286E46324986C527F0A3F2E7E_RuntimeMethod_var), NULL);
		((AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_StaticFields*)il2cpp_codegen_static_fields_for(AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_il2cpp_TypeInfo_var))->___onAllowCallback_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_StaticFields*)il2cpp_codegen_static_fields_for(AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_il2cpp_TypeInfo_var))->___onAllowCallback_9), (void*)L_1);
		// onDenyCallback = () => { ShowToast("Need RECORD_AUDIO permission to record voice");};
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8_il2cpp_TypeInfo_var);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = ((U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8_il2cpp_TypeInfo_var))->___U3CU3E9__10_1_1;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0043;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8_il2cpp_TypeInfo_var);
		U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8* L_4 = ((U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CStartRecordingU3Eb__10_1_m41D3E2C7CEEFD74583981696F83C9546CD97DA22_RuntimeMethod_var), NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = L_5;
		((U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8_il2cpp_TypeInfo_var))->___U3CU3E9__10_1_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8_il2cpp_TypeInfo_var))->___U3CU3E9__10_1_1), (void*)L_6);
		G_B3_0 = L_6;
	}

IL_0043:
	{
		((AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_StaticFields*)il2cpp_codegen_static_fields_for(AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_il2cpp_TypeInfo_var))->___onDenyCallback_10 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_StaticFields*)il2cpp_codegen_static_fields_for(AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_il2cpp_TypeInfo_var))->___onDenyCallback_10), (void*)G_B3_0);
		// onDenyAndNeverAskAgainCallback = () => { ShowToast("Need RECORD_AUDIO permission to record voice");};
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8_il2cpp_TypeInfo_var);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_7 = ((U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8_il2cpp_TypeInfo_var))->___U3CU3E9__10_2_2;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_8 = L_7;
		G_B4_0 = L_8;
		if (L_8)
		{
			G_B5_0 = L_8;
			goto IL_0067;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8_il2cpp_TypeInfo_var);
		U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8* L_9 = ((U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_10 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_10, L_9, (intptr_t)((void*)U3CU3Ec_U3CStartRecordingU3Eb__10_2_mE4482F9D5226EE28FF07E753EAE910654873E089_RuntimeMethod_var), NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_11 = L_10;
		((U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8_il2cpp_TypeInfo_var))->___U3CU3E9__10_2_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8_il2cpp_TypeInfo_var))->___U3CU3E9__10_2_2), (void*)L_11);
		G_B5_0 = L_11;
	}

IL_0067:
	{
		((AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_StaticFields*)il2cpp_codegen_static_fields_for(AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_il2cpp_TypeInfo_var))->___onDenyAndNeverAskAgainCallback_11 = G_B5_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_StaticFields*)il2cpp_codegen_static_fields_for(AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_il2cpp_TypeInfo_var))->___onDenyAndNeverAskAgainCallback_11), (void*)G_B5_0);
		return;
	}

IL_006d:
	{
		// androidRecorder.Call("startRecording");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = __this->___androidRecorder_12;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13;
		L_13 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_12);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_12, _stringLiteral54C29DDEA50046D9BEA9A368A87F45D55E22FF92, L_13, NULL);
		// }
		return;
	}
}
// System.Void AndroidUtils::StopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUtils_StopRecording_mA92F12792A7296B7EDC3D41328AD5040D37463C7 (AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FFC4A7A10002ED52B53C4BB0C43553F699DE5FB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// androidRecorder.Call("stopRecording");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___androidRecorder_12;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral9FFC4A7A10002ED52B53C4BB0C43553F699DE5FB, L_1, NULL);
		// }
		return;
	}
}
// System.Void AndroidUtils::VideoRecorderCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUtils_VideoRecorderCallback_mDB5F0E8086C7D4579421098C995DD8D035C3DECE (AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral567547707726EB70B8CFBEF25199C101F0E1F3F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD62C9078812D11738F239271752751171A93938);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE0809E851790D1356701164D304755E2A9B76EE);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		bool L_1;
		L_1 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, _stringLiteralFE0809E851790D1356701164D304755E2A9B76EE, NULL);
		if (L_1)
		{
			goto IL_004f;
		}
	}
	{
		String_t* L_2 = ___message0;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral567547707726EB70B8CFBEF25199C101F0E1F3F5, NULL);
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_4 = ___message0;
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, _stringLiteralAD62C9078812D11738F239271752751171A93938, NULL);
		if (L_5)
		{
			goto IL_003c;
		}
	}
	{
		return;
	}

IL_0028:
	{
		// if (onStartRecord != null) onStartRecord.Invoke();
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = __this->___onStartRecord_7;
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		// if (onStartRecord != null) onStartRecord.Invoke();
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_7 = __this->___onStartRecord_7;
		NullCheck(L_7);
		UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline(L_7, NULL);
		// break;
		return;
	}

IL_003c:
	{
		// if (onStopRecord != null) onStopRecord.Invoke();
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_8 = __this->___onStopRecord_8;
		if (!L_8)
		{
			goto IL_004f;
		}
	}
	{
		// if (onStopRecord != null) onStopRecord.Invoke();
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = __this->___onStopRecord_8;
		NullCheck(L_9);
		UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline(L_9, NULL);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void AndroidUtils::OnAllow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUtils_OnAllow_m648444D277C34B057FAABFAE7370B73ED13F8BAC (AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (onAllowCallback != null)
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = ((AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_StaticFields*)il2cpp_codegen_static_fields_for(AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_il2cpp_TypeInfo_var))->___onAllowCallback_9;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// onAllowCallback();
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_1 = ((AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_StaticFields*)il2cpp_codegen_static_fields_for(AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_il2cpp_TypeInfo_var))->___onAllowCallback_9;
		NullCheck(L_1);
		UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline(L_1, NULL);
	}

IL_0011:
	{
		// ResetAllCallBacks();
		AndroidUtils_ResetAllCallBacks_m91B810DD5A58CAFD3F9837A9F390E8938857AB36(__this, NULL);
		// }
		return;
	}
}
// System.Void AndroidUtils::OnDeny()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUtils_OnDeny_m5997B810F6227CED064581B0152CEF9FDF9823C8 (AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (onDenyCallback != null)
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = ((AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_StaticFields*)il2cpp_codegen_static_fields_for(AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_il2cpp_TypeInfo_var))->___onDenyCallback_10;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// onDenyCallback();
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_1 = ((AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_StaticFields*)il2cpp_codegen_static_fields_for(AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_il2cpp_TypeInfo_var))->___onDenyCallback_10;
		NullCheck(L_1);
		UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline(L_1, NULL);
	}

IL_0011:
	{
		// ResetAllCallBacks();
		AndroidUtils_ResetAllCallBacks_m91B810DD5A58CAFD3F9837A9F390E8938857AB36(__this, NULL);
		// }
		return;
	}
}
// System.Void AndroidUtils::OnDenyAndNeverAskAgain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUtils_OnDenyAndNeverAskAgain_m3574C76AE0CF2DF839397ADB2C15138D85F87D75 (AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (onDenyAndNeverAskAgainCallback != null)
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = ((AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_StaticFields*)il2cpp_codegen_static_fields_for(AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_il2cpp_TypeInfo_var))->___onDenyAndNeverAskAgainCallback_11;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// onDenyAndNeverAskAgainCallback();
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_1 = ((AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_StaticFields*)il2cpp_codegen_static_fields_for(AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_il2cpp_TypeInfo_var))->___onDenyAndNeverAskAgainCallback_11;
		NullCheck(L_1);
		UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline(L_1, NULL);
	}

IL_0011:
	{
		// ResetAllCallBacks();
		AndroidUtils_ResetAllCallBacks_m91B810DD5A58CAFD3F9837A9F390E8938857AB36(__this, NULL);
		// }
		return;
	}
}
// System.Void AndroidUtils::ResetAllCallBacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUtils_ResetAllCallBacks_m91B810DD5A58CAFD3F9837A9F390E8938857AB36 (AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onAllowCallback = null;
		((AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_StaticFields*)il2cpp_codegen_static_fields_for(AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_il2cpp_TypeInfo_var))->___onAllowCallback_9 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_StaticFields*)il2cpp_codegen_static_fields_for(AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_il2cpp_TypeInfo_var))->___onAllowCallback_9), (void*)(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)NULL);
		// onDenyCallback = null;
		((AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_StaticFields*)il2cpp_codegen_static_fields_for(AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_il2cpp_TypeInfo_var))->___onDenyCallback_10 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_StaticFields*)il2cpp_codegen_static_fields_for(AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_il2cpp_TypeInfo_var))->___onDenyCallback_10), (void*)(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)NULL);
		// onDenyAndNeverAskAgainCallback = null;
		((AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_StaticFields*)il2cpp_codegen_static_fields_for(AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_il2cpp_TypeInfo_var))->___onDenyAndNeverAskAgainCallback_11 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_StaticFields*)il2cpp_codegen_static_fields_for(AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_il2cpp_TypeInfo_var))->___onDenyAndNeverAskAgainCallback_11), (void*)(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)NULL);
		// }
		return;
	}
}
// System.Boolean AndroidUtils::IsPermitted(AndroidPermission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidUtils_IsPermitted_m240A73B629E0C6AD4B19ECDE6B5BF1B82AEBED3F (int32_t ___permission0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral649D06A9BDDEF28FF7D96D5BD4FB4BFC94266EC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	bool V_1 = false;
	{
		// using (var androidUtils = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0032:
			{// begin finally (depth: 1)
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = V_0;
					if (!L_1)
					{
						goto IL_003b;
					}
				}
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_003b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// return androidUtils.GetStatic<AndroidJavaObject>("currentActivity").Call<bool>("hasPermission", GetPermissionStrr(permission));
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
			NullCheck(L_3);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
			L_4 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_3, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
			int32_t L_7 = ___permission0;
			String_t* L_8;
			L_8 = AndroidUtils_GetPermissionStrr_m7A2507120F7BDF597B6BE1DA983A06AF325B9FD8(L_7, NULL);
			NullCheck(L_6);
			ArrayElementTypeCheck (L_6, L_8);
			(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
			NullCheck(L_4);
			bool L_9;
			L_9 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_4, _stringLiteral649D06A9BDDEF28FF7D96D5BD4FB4BFC94266EC0, L_6, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
			V_1 = L_9;
			goto IL_003c;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		// }
		bool L_10 = V_1;
		return L_10;
	}
}
// System.Void AndroidUtils::RequestPermission(AndroidPermission,UnityEngine.Events.UnityAction,UnityEngine.Events.UnityAction,UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUtils_RequestPermission_mDAC3CD4BC03A29FA6C798F8A34C8204E16D3D701 (int32_t ___permission0, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___onAllow1, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___onDeny2, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___onDenyAndNeverAskAgain3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB04DE2AD82139DB4409D7F20AD81B0C36B41FBEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	{
		// onAllowCallback = onAllow;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = ___onAllow1;
		((AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_StaticFields*)il2cpp_codegen_static_fields_for(AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_il2cpp_TypeInfo_var))->___onAllowCallback_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_StaticFields*)il2cpp_codegen_static_fields_for(AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_il2cpp_TypeInfo_var))->___onAllowCallback_9), (void*)L_0);
		// onDenyCallback = onDeny;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_1 = ___onDeny2;
		((AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_StaticFields*)il2cpp_codegen_static_fields_for(AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_il2cpp_TypeInfo_var))->___onDenyCallback_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_StaticFields*)il2cpp_codegen_static_fields_for(AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_il2cpp_TypeInfo_var))->___onDenyCallback_10), (void*)L_1);
		// onDenyAndNeverAskAgainCallback = onDenyAndNeverAskAgain;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = ___onDenyAndNeverAskAgain3;
		((AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_StaticFields*)il2cpp_codegen_static_fields_for(AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_il2cpp_TypeInfo_var))->___onDenyAndNeverAskAgainCallback_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_StaticFields*)il2cpp_codegen_static_fields_for(AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_il2cpp_TypeInfo_var))->___onDenyAndNeverAskAgainCallback_11), (void*)L_2);
		// using (var androidUtils = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_3, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0043:
			{// begin finally (depth: 1)
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = V_0;
					if (!L_4)
					{
						goto IL_004c;
					}
				}
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_5 = V_0;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_004c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// androidUtils.GetStatic<AndroidJavaObject>("currentActivity").Call("requestPermission", GetPermissionStrr(permission));
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_6 = V_0;
			NullCheck(L_6);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7;
			L_7 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_6, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
			int32_t L_10 = ___permission0;
			String_t* L_11;
			L_11 = AndroidUtils_GetPermissionStrr_m7A2507120F7BDF597B6BE1DA983A06AF325B9FD8(L_10, NULL);
			NullCheck(L_9);
			ArrayElementTypeCheck (L_9, L_11);
			(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_11);
			NullCheck(L_7);
			AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_7, _stringLiteralB04DE2AD82139DB4409D7F20AD81B0C36B41FBEC, L_9, NULL);
			// }
			goto IL_004d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.String AndroidUtils::GetPermissionStrr(AndroidPermission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidUtils_GetPermissionStrr_m7A2507120F7BDF597B6BE1DA983A06AF325B9FD8 (int32_t ___permission0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidPermission_t2E0256F9B80AACA29793E17A17D39181092E7DAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDCD8F12FD6E37200B4031CE7FD36FDD903FF42F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "android.permission." + permission.ToString();
		Il2CppFakeBox<int32_t> L_0(AndroidPermission_t2E0256F9B80AACA29793E17A17D39181092E7DAB_il2cpp_TypeInfo_var, (&___permission0));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralCDCD8F12FD6E37200B4031CE7FD36FDD903FF42F, L_1, NULL);
		return L_2;
	}
}
// System.Void AndroidUtils::ShowToast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUtils_ShowToast_m3AC0A880F2CE28E53F30BE4BD36347419FBE27C4 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_0_U3CShowToastU3Eb__0_mC513531E31901C85B12ABD74DA360693864B934C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_0_tEB109AAB926E939ED508C7E30B561215CC4CF590_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass20_0_tEB109AAB926E939ED508C7E30B561215CC4CF590* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass20_0_tEB109AAB926E939ED508C7E30B561215CC4CF590* L_0 = (U3CU3Ec__DisplayClass20_0_tEB109AAB926E939ED508C7E30B561215CC4CF590*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass20_0_tEB109AAB926E939ED508C7E30B561215CC4CF590_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass20_0__ctor_mE806CCE485A6D8E689B628ED3561A51FA7093A08(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass20_0_tEB109AAB926E939ED508C7E30B561215CC4CF590* L_1 = V_0;
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		L_1->___message_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___message_1), (void*)L_2);
		// AndroidJavaObject currentActivity = new AndroidJavaClass("com.unity3d.player.UnityPlayer").GetStatic<AndroidJavaObject>("currentActivity");
		U3CU3Ec__DisplayClass20_0_tEB109AAB926E939ED508C7E30B561215CC4CF590* L_3 = V_0;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_4, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		NullCheck(L_4);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_4, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->___currentActivity_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___currentActivity_0), (void*)L_5);
		// currentActivity.Call("runOnUiThread", new AndroidJavaRunnable(() =>
		// {
		//     new AndroidJavaClass("android.widget.Toast").CallStatic<AndroidJavaObject>("makeText", currentActivity.Call<AndroidJavaObject>("getApplicationContext"), new AndroidJavaObject("java.lang.String", message), 0).Call("show");
		// }));
		U3CU3Ec__DisplayClass20_0_tEB109AAB926E939ED508C7E30B561215CC4CF590* L_6 = V_0;
		NullCheck(L_6);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = L_6->___currentActivity_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		U3CU3Ec__DisplayClass20_0_tEB109AAB926E939ED508C7E30B561215CC4CF590* L_10 = V_0;
		AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* L_11 = (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F*)il2cpp_codegen_object_new(AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		AndroidJavaRunnable__ctor_m000E4FEB2DE8031A1CD733610D76E2BF60490334(L_11, L_10, (intptr_t)((void*)U3CU3Ec__DisplayClass20_0_U3CShowToastU3Eb__0_mC513531E31901C85B12ABD74DA360693864B934C_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_11);
		NullCheck(L_7);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_7, _stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D, L_9, NULL);
		// }
		return;
	}
}
// System.Void AndroidUtils::ShareAndroid(System.String,System.String,System.String,System.String,System.String,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUtils_ShareAndroid_mFE532EE5C9D3DFF9DC3C400A3D367C095F1874B3 (String_t* ___body0, String_t* ___subject1, String_t* ___url2, String_t* ___filePath3, String_t* ___mimeType4, bool ___chooser5, String_t* ___chooserText6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E00A028765E36CFE9A1D3E1D31576348C84197D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DFC2D8E2B0854967C8EA0AC932952BDB07081DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54E9884C2A8A9804F2757FB402718D03522F4946);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CB60CD0F517BE0AB5DBF3CCB647F6428F1FA6D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76C41506C48C50491E7B491CC16239D496B8C6CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99687916B1E6EF7CC358E7CD63DCB485D6ACFEEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FE1252E0C99589986A3FD06B642DC25085790D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5E7F48ACAC428EC5EA35E9BBED10A0E23CBE728);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9ADF473A30BA80282FCBE6EF8685B62B5E4AF76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE67D89BB61E8A81A2B0B7802F9E515D915AA51E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2465BB6789DD1B3A37EEA353A2ADE8B9F4E9E37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_2 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_3 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_4 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_5 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_6 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_7 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_8 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_9 = NULL;
	{
		// using (AndroidJavaClass intentClass = new AndroidJavaClass("android.content.Intent"))
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteralC5E7F48ACAC428EC5EA35E9BBED10A0E23CBE728, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0245:
			{// begin finally (depth: 1)
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = V_0;
					if (!L_1)
					{
						goto IL_024e;
					}
				}
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_024e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (AndroidJavaObject intentObject = new AndroidJavaObject("android.content.Intent"))
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
				L_3 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				NullCheck(L_4);
				AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_4, _stringLiteralC5E7F48ACAC428EC5EA35E9BBED10A0E23CBE728, L_3, NULL);
				V_1 = L_4;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_023b_1:
					{// begin finally (depth: 2)
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_1;
							if (!L_5)
							{
								goto IL_0244_1;
							}
						}
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_1;
							NullCheck(L_6);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
						}

IL_0244_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// using (intentObject.Call<AndroidJavaObject>("setAction", intentClass.GetStatic<string>("ACTION_SEND")))
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = V_1;
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
						AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_10 = V_0;
						NullCheck(L_10);
						String_t* L_11;
						L_11 = AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE(L_10, _stringLiteral1E00A028765E36CFE9A1D3E1D31576348C84197D, AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
						NullCheck(L_9);
						ArrayElementTypeCheck (L_9, L_11);
						(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_11);
						NullCheck(L_7);
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12;
						L_12 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_7, _stringLiteralF2465BB6789DD1B3A37EEA353A2ADE8B9F4E9E37, L_9, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
						V_2 = L_12;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_003d_2:
							{// begin finally (depth: 3)
								{
									AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13 = V_2;
									if (!L_13)
									{
										goto IL_0046_2;
									}
								}
								{
									AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14 = V_2;
									NullCheck(L_14);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
								}

IL_0046_2:
								{
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							// { }
							goto IL_0047_2;
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_0047_2:
					{
						// using (intentObject.Call<AndroidJavaObject>("setType", mimeType))
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15 = V_1;
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_16;
						String_t* L_18 = ___mimeType4;
						NullCheck(L_17);
						ArrayElementTypeCheck (L_17, L_18);
						(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_18);
						NullCheck(L_15);
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_19;
						L_19 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_15, _stringLiteral76C41506C48C50491E7B491CC16239D496B8C6CA, L_17, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
						V_2 = L_19;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0060_2:
							{// begin finally (depth: 3)
								{
									AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_20 = V_2;
									if (!L_20)
									{
										goto IL_0069_2;
									}
								}
								{
									AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_21 = V_2;
									NullCheck(L_21);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_21);
								}

IL_0069_2:
								{
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							// { }
							goto IL_006a_2;
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_006a_2:
					{
						// using (intentObject.Call<AndroidJavaObject>("putExtra", intentClass.GetStatic<string>("EXTRA_SUBJECT"), subject))
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_22 = V_1;
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_23;
						AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_25 = V_0;
						NullCheck(L_25);
						String_t* L_26;
						L_26 = AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE(L_25, _stringLiteral9FE1252E0C99589986A3FD06B642DC25085790D2, AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
						NullCheck(L_24);
						ArrayElementTypeCheck (L_24, L_26);
						(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_26);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_24;
						String_t* L_28 = ___subject1;
						NullCheck(L_27);
						ArrayElementTypeCheck (L_27, L_28);
						(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_28);
						NullCheck(L_22);
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_29;
						L_29 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_22, _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4, L_27, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
						V_2 = L_29;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0090_2:
							{// begin finally (depth: 3)
								{
									AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_30 = V_2;
									if (!L_30)
									{
										goto IL_0099_2;
									}
								}
								{
									AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_31 = V_2;
									NullCheck(L_31);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_31);
								}

IL_0099_2:
								{
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							// { }
							goto IL_009a_2;
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_009a_2:
					{
						// using (intentObject.Call<AndroidJavaObject>("putExtra", intentClass.GetStatic<string>("EXTRA_TEXT"), body))
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_32 = V_1;
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = L_33;
						AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_35 = V_0;
						NullCheck(L_35);
						String_t* L_36;
						L_36 = AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE(L_35, _stringLiteral3DFC2D8E2B0854967C8EA0AC932952BDB07081DD, AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
						NullCheck(L_34);
						ArrayElementTypeCheck (L_34, L_36);
						(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_36);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = L_34;
						String_t* L_38 = ___body0;
						NullCheck(L_37);
						ArrayElementTypeCheck (L_37, L_38);
						(L_37)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_38);
						NullCheck(L_32);
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_39;
						L_39 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_32, _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4, L_37, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
						V_2 = L_39;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_00c0_2:
							{// begin finally (depth: 3)
								{
									AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_40 = V_2;
									if (!L_40)
									{
										goto IL_00c9_2;
									}
								}
								{
									AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_41 = V_2;
									NullCheck(L_41);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_41);
								}

IL_00c9_2:
								{
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							// { }
							goto IL_00ca_2;
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_00ca_2:
					{
						// if (!string.IsNullOrEmpty(url))
						String_t* L_42 = ___url2;
						bool L_43;
						L_43 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_42, NULL);
						if (L_43)
						{
							goto IL_013e_2;
						}
					}
					{
						// using (AndroidJavaClass uriClass = new AndroidJavaClass("android.net.Uri"))
						AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_44 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
						NullCheck(L_44);
						AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_44, _stringLiteralE67D89BB61E8A81A2B0B7802F9E515D915AA51E7, NULL);
						V_3 = L_44;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0134_2:
							{// begin finally (depth: 3)
								{
									AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_45 = V_3;
									if (!L_45)
									{
										goto IL_013d_2;
									}
								}
								{
									AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_46 = V_3;
									NullCheck(L_46);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_46);
								}

IL_013d_2:
								{
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							{
								// using (AndroidJavaObject uriObject = uriClass.CallStatic<AndroidJavaObject>("parse", url))
								AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_47 = V_3;
								ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
								ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_49 = L_48;
								String_t* L_50 = ___url2;
								NullCheck(L_49);
								ArrayElementTypeCheck (L_49, L_50);
								(L_49)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_50);
								NullCheck(L_47);
								AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_51;
								L_51 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_47, _stringLiteral99687916B1E6EF7CC358E7CD63DCB485D6ACFEEA, L_49, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
								V_4 = L_51;
							}
							{
								auto __finallyBlock = il2cpp::utils::Finally([&]
								{

FINALLY_0128_3:
									{// begin finally (depth: 4)
										{
											AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_52 = V_4;
											if (!L_52)
											{
												goto IL_0133_3;
											}
										}
										{
											AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_53 = V_4;
											NullCheck(L_53);
											InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_53);
										}

IL_0133_3:
										{
											return;
										}
									}// end finally (depth: 4)
								});
								try
								{// begin try (depth: 4)
									{
										// using (intentObject.Call<AndroidJavaObject>("putExtra", intentClass.GetStatic<string>("EXTRA_STREAM"), uriObject))
										AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_54 = V_1;
										ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_55 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
										ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_56 = L_55;
										AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_57 = V_0;
										NullCheck(L_57);
										String_t* L_58;
										L_58 = AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE(L_57, _stringLiteralC9ADF473A30BA80282FCBE6EF8685B62B5E4AF76, AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
										NullCheck(L_56);
										ArrayElementTypeCheck (L_56, L_58);
										(L_56)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_58);
										ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_59 = L_56;
										AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_60 = V_4;
										NullCheck(L_59);
										ArrayElementTypeCheck (L_59, L_60);
										(L_59)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_60);
										NullCheck(L_54);
										AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_61;
										L_61 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_54, _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4, L_59, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
										V_2 = L_61;
									}
									{
										auto __finallyBlock = il2cpp::utils::Finally([&]
										{

FINALLY_011e_4:
											{// begin finally (depth: 5)
												{
													AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_62 = V_2;
													if (!L_62)
													{
														goto IL_0127_4;
													}
												}
												{
													AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_63 = V_2;
													NullCheck(L_63);
													InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_63);
												}

IL_0127_4:
												{
													return;
												}
											}// end finally (depth: 5)
										});
										try
										{// begin try (depth: 5)
											// { }
											goto IL_01b8_2;
										}// end try (depth: 5)
										catch(Il2CppExceptionWrapper& e)
										{
											__finallyBlock.StoreException(e.ex);
										}
									}
								}// end try (depth: 4)
								catch(Il2CppExceptionWrapper& e)
								{
									__finallyBlock.StoreException(e.ex);
								}
							}
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_013e_2:
					{
						// else if (filePath != null)
						String_t* L_64 = ___filePath3;
						if (!L_64)
						{
							goto IL_01b8_2;
						}
					}
					{
						// using (AndroidJavaClass uriClass = new AndroidJavaClass("android.net.Uri"))
						AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_65 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
						NullCheck(L_65);
						AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_65, _stringLiteralE67D89BB61E8A81A2B0B7802F9E515D915AA51E7, NULL);
						V_5 = L_65;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_01ac_2:
							{// begin finally (depth: 3)
								{
									AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_66 = V_5;
									if (!L_66)
									{
										goto IL_01b7_2;
									}
								}
								{
									AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_67 = V_5;
									NullCheck(L_67);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_67);
								}

IL_01b7_2:
								{
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							{
								// using (AndroidJavaObject uriObject = uriClass.CallStatic<AndroidJavaObject>("parse", "file://" + filePath))
								AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_68 = V_5;
								ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_69 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
								ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_70 = L_69;
								String_t* L_71 = ___filePath3;
								String_t* L_72;
								L_72 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_71, NULL);
								NullCheck(L_70);
								ArrayElementTypeCheck (L_70, L_72);
								(L_70)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_72);
								NullCheck(L_68);
								AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_73;
								L_73 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_68, _stringLiteral99687916B1E6EF7CC358E7CD63DCB485D6ACFEEA, L_70, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
								V_6 = L_73;
							}
							{
								auto __finallyBlock = il2cpp::utils::Finally([&]
								{

FINALLY_01a0_3:
									{// begin finally (depth: 4)
										{
											AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_74 = V_6;
											if (!L_74)
											{
												goto IL_01ab_3;
											}
										}
										{
											AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_75 = V_6;
											NullCheck(L_75);
											InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_75);
										}

IL_01ab_3:
										{
											return;
										}
									}// end finally (depth: 4)
								});
								try
								{// begin try (depth: 4)
									{
										// using (intentObject.Call<AndroidJavaObject>("putExtra", intentClass.GetStatic<string>("EXTRA_STREAM"), uriObject))
										AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_76 = V_1;
										ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_77 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
										ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_78 = L_77;
										AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_79 = V_0;
										NullCheck(L_79);
										String_t* L_80;
										L_80 = AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE(L_79, _stringLiteralC9ADF473A30BA80282FCBE6EF8685B62B5E4AF76, AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
										NullCheck(L_78);
										ArrayElementTypeCheck (L_78, L_80);
										(L_78)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_80);
										ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_81 = L_78;
										AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_82 = V_6;
										NullCheck(L_81);
										ArrayElementTypeCheck (L_81, L_82);
										(L_81)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_82);
										NullCheck(L_76);
										AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_83;
										L_83 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_76, _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4, L_81, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
										V_2 = L_83;
									}
									{
										auto __finallyBlock = il2cpp::utils::Finally([&]
										{

FINALLY_0196_4:
											{// begin finally (depth: 5)
												{
													AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_84 = V_2;
													if (!L_84)
													{
														goto IL_019f_4;
													}
												}
												{
													AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_85 = V_2;
													NullCheck(L_85);
													InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_85);
												}

IL_019f_4:
												{
													return;
												}
											}// end finally (depth: 5)
										});
										try
										{// begin try (depth: 5)
											// { }
											goto IL_01b8_2;
										}// end try (depth: 5)
										catch(Il2CppExceptionWrapper& e)
										{
											__finallyBlock.StoreException(e.ex);
										}
									}
								}// end try (depth: 4)
								catch(Il2CppExceptionWrapper& e)
								{
									__finallyBlock.StoreException(e.ex);
								}
							}
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_01b8_2:
					{
						// using (AndroidJavaClass unity = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
						AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_86 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
						NullCheck(L_86);
						AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_86, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
						V_7 = L_86;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_022f_2:
							{// begin finally (depth: 3)
								{
									AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_87 = V_7;
									if (!L_87)
									{
										goto IL_023a_2;
									}
								}
								{
									AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_88 = V_7;
									NullCheck(L_88);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_88);
								}

IL_023a_2:
								{
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							{
								// using (AndroidJavaObject currentActivity = unity.GetStatic<AndroidJavaObject>("currentActivity"))
								AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_89 = V_7;
								NullCheck(L_89);
								AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_90;
								L_90 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_89, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
								V_8 = L_90;
							}
							{
								auto __finallyBlock = il2cpp::utils::Finally([&]
								{

FINALLY_0223_3:
									{// begin finally (depth: 4)
										{
											AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_91 = V_8;
											if (!L_91)
											{
												goto IL_022e_3;
											}
										}
										{
											AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_92 = V_8;
											NullCheck(L_92);
											InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_92);
										}

IL_022e_3:
										{
											return;
										}
									}// end finally (depth: 4)
								});
								try
								{// begin try (depth: 4)
									{
										// if (chooser)
										bool L_93 = ___chooser5;
										if (!L_93)
										{
											goto IL_020b_4;
										}
									}
									{
										// AndroidJavaObject jChooser = intentClass.CallStatic<AndroidJavaObject>("createChooser", intentObject, chooserText);
										AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_94 = V_0;
										ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_95 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
										ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_96 = L_95;
										AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_97 = V_1;
										NullCheck(L_96);
										ArrayElementTypeCheck (L_96, L_97);
										(L_96)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_97);
										ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_98 = L_96;
										String_t* L_99 = ___chooserText6;
										NullCheck(L_98);
										ArrayElementTypeCheck (L_98, L_99);
										(L_98)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_99);
										NullCheck(L_94);
										AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_100;
										L_100 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_94, _stringLiteral54E9884C2A8A9804F2757FB402718D03522F4946, L_98, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
										V_9 = L_100;
										// currentActivity.Call("startActivity", jChooser);
										AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_101 = V_8;
										ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_102 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
										ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_103 = L_102;
										AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_104 = V_9;
										NullCheck(L_103);
										ArrayElementTypeCheck (L_103, L_104);
										(L_103)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_104);
										NullCheck(L_101);
										AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_101, _stringLiteral6CB60CD0F517BE0AB5DBF3CCB647F6428F1FA6D1, L_103, NULL);
										goto IL_024f;
									}

IL_020b_4:
									{
										// currentActivity.Call("startActivity", intentObject);
										AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_105 = V_8;
										ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_106 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
										ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_107 = L_106;
										AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_108 = V_1;
										NullCheck(L_107);
										ArrayElementTypeCheck (L_107, L_108);
										(L_107)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_108);
										NullCheck(L_105);
										AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_105, _stringLiteral6CB60CD0F517BE0AB5DBF3CCB647F6428F1FA6D1, L_107, NULL);
										// }
										goto IL_024f;
									}
								}// end try (depth: 4)
								catch(Il2CppExceptionWrapper& e)
								{
									__finallyBlock.StoreException(e.ex);
								}
							}
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_024f:
	{
		// }
		return;
	}
}
// System.Void AndroidUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUtils__ctor_m3CB7C245E9B0C841B9A2311D827751A8D670CEED (AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void AndroidUtils::<StartRecording>b__10_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUtils_U3CStartRecordingU3Eb__10_0_m62F4114B6546D88286E46324986C527F0A3F2E7E (AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54C29DDEA50046D9BEA9A368A87F45D55E22FF92);
		s_Il2CppMethodInitialized = true;
	}
	{
		// androidRecorder.Call("startRecording");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___androidRecorder_12;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral54C29DDEA50046D9BEA9A368A87F45D55E22FF92, L_1, NULL);
		// };
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
// System.Void AndroidUtils/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3D9EF56557320B374F2766623B4DBAF0BAA01FFA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8* L_0 = (U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8*)il2cpp_codegen_object_new(U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m29713C20E9EB687A6DF3F06B084CF04C96DF3E06(L_0, NULL);
		((U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void AndroidUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m29713C20E9EB687A6DF3F06B084CF04C96DF3E06 (U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void AndroidUtils/<>c::<StartRecording>b__10_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartRecordingU3Eb__10_1_m41D3E2C7CEEFD74583981696F83C9546CD97DA22 (U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral824FDE248F6040E9E332F7DFA41AABAF5760AD60);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onDenyCallback = () => { ShowToast("Need RECORD_AUDIO permission to record voice");};
		AndroidUtils_ShowToast_m3AC0A880F2CE28E53F30BE4BD36347419FBE27C4(_stringLiteral824FDE248F6040E9E332F7DFA41AABAF5760AD60, NULL);
		// onDenyCallback = () => { ShowToast("Need RECORD_AUDIO permission to record voice");};
		return;
	}
}
// System.Void AndroidUtils/<>c::<StartRecording>b__10_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartRecordingU3Eb__10_2_mE4482F9D5226EE28FF07E753EAE910654873E089 (U3CU3Ec_t279927939E87F57A7B4B9A32E4861A4E2651D9D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral824FDE248F6040E9E332F7DFA41AABAF5760AD60);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onDenyAndNeverAskAgainCallback = () => { ShowToast("Need RECORD_AUDIO permission to record voice");};
		AndroidUtils_ShowToast_m3AC0A880F2CE28E53F30BE4BD36347419FBE27C4(_stringLiteral824FDE248F6040E9E332F7DFA41AABAF5760AD60, NULL);
		// onDenyAndNeverAskAgainCallback = () => { ShowToast("Need RECORD_AUDIO permission to record voice");};
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
// System.Void AndroidUtils/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_mE806CCE485A6D8E689B628ED3561A51FA7093A08 (U3CU3Ec__DisplayClass20_0_tEB109AAB926E939ED508C7E30B561215CC4CF590* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void AndroidUtils/<>c__DisplayClass20_0::<ShowToast>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0_U3CShowToastU3Eb__0_mC513531E31901C85B12ABD74DA360693864B934C (U3CU3Ec__DisplayClass20_0_tEB109AAB926E939ED508C7E30B561215CC4CF590* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78FF4FA942C1B42A8039C2BA8E962E337610543C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84EE66A73B24F0E9CEE249A5A8879E93FCC66EB0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new AndroidJavaClass("android.widget.Toast").CallStatic<AndroidJavaObject>("makeText", currentActivity.Call<AndroidJavaObject>("getApplicationContext"), new AndroidJavaObject("java.lang.String", message), 0).Call("show");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral78FF4FA942C1B42A8039C2BA8E962E337610543C, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = __this->___currentActivity_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_3, _stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9, L_4, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		String_t* L_9 = __this->___message_1;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_10, _stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C, L_8, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_10);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_6;
		int32_t L_12 = 0;
		RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14;
		L_14 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_0, _stringLiteral84EE66A73B24F0E9CEE249A5A8879E93FCC66EB0, L_11, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15;
		L_15 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_14);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_14, _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192, L_15, NULL);
		// }));
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisAndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_mC09278340B1F902F54998F0E58458EEF4582163D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIController_OnStartRecord_m10451972A4295318AF44D00404368D05AEDAB5F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIController_OnStopRecord_mDD955FF32D875F2E263CD8D9897B042E0722E73D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// androidUtils = FindObjectOfType<AndroidUtils>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9* L_0;
		L_0 = Object_FindObjectOfType_TisAndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_mC09278340B1F902F54998F0E58458EEF4582163D(Object_FindObjectOfType_TisAndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9_mC09278340B1F902F54998F0E58458EEF4582163D_RuntimeMethod_var);
		__this->___androidUtils_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___androidUtils_4), (void*)L_0);
		// androidUtils.onStartRecord += OnStartRecord;//listen to start record event
		AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9* L_1 = __this->___androidUtils_4;
		AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9* L_2 = L_1;
		NullCheck(L_2);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = L_2->___onStartRecord_7;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)UIController_OnStartRecord_m10451972A4295318AF44D00404368D05AEDAB5F6_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		NullCheck(L_2);
		L_2->___onStartRecord_7 = ((UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)CastclassSealed((RuntimeObject*)L_5, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___onStartRecord_7), (void*)((UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)CastclassSealed((RuntimeObject*)L_5, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var)));
		// androidUtils.onStopRecord += OnStopRecord;//listen to stop record event
		AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9* L_6 = __this->___androidUtils_4;
		AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9* L_7 = L_6;
		NullCheck(L_7);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_8 = L_7->___onStopRecord_8;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_9, __this, (intptr_t)((void*)UIController_OnStopRecord_mDD955FF32D875F2E263CD8D9897B042E0722E73D_RuntimeMethod_var), NULL);
		Delegate_t* L_10;
		L_10 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_8, L_9, NULL);
		NullCheck(L_7);
		L_7->___onStopRecord_8 = ((UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)CastclassSealed((RuntimeObject*)L_10, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___onStopRecord_8), (void*)((UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)CastclassSealed((RuntimeObject*)L_10, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void UIController::OnClickStartRecord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_OnClickStartRecord_mBBF3D5D24E72B744ECB80F2C8D34336094569176 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// OnStartRecord();
		UIController_OnStartRecord_m10451972A4295318AF44D00404368D05AEDAB5F6(__this, NULL);
		// androidUtils.StartRecording();
		AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9* L_0 = __this->___androidUtils_4;
		NullCheck(L_0);
		AndroidUtils_StartRecording_mCD77609C01F03D5547594CC570D58DEB3E07619C(L_0, NULL);
		// }
		return;
	}
}
// System.Void UIController::OnClickStopRecord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_OnClickStopRecord_m8C023CB8A344883880A6D211B3D6152CDE66217B (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// OnStopRecord();
		UIController_OnStopRecord_mDD955FF32D875F2E263CD8D9897B042E0722E73D(__this, NULL);
		// androidUtils.StopRecording();
		AndroidUtils_tC8BEA242969E8ABE0494165FC9C777BE937DAAB9* L_0 = __this->___androidUtils_4;
		NullCheck(L_0);
		AndroidUtils_StopRecording_mA92F12792A7296B7EDC3D41328AD5040D37463C7(L_0, NULL);
		// }
		return;
	}
}
// System.Void UIController::OnStartRecord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_OnStartRecord_m10451972A4295318AF44D00404368D05AEDAB5F6 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// startRecordbtn.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___startRecordbtn_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// stopRecordBtn.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___stopRecordBtn_6;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UIController::OnStopRecord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_OnStopRecord_mDD955FF32D875F2E263CD8D9897B042E0722E73D (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// startRecordbtn.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___startRecordbtn_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// stopRecordBtn.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___stopRecordBtn_6;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
