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

// System.Collections.Generic.List`1<BlendedBehavior>
struct List_1_tE14D0C6C55782752906F8175A6571F39953F299B;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<Impact>
struct List_1_t7059AC9A2D33D3DB433E18D5A6E36E07E45F717E;
// System.Collections.Generic.List`1<Impactable>
struct List_1_t5077A09B97AEA8F3F00983A9B3A5FDEF8A5B66A6;
// System.Collections.Generic.List`1<Kinematic>
struct List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<SteeringBehavior>
struct List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<Trajectory>
struct List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720;
// BlendedBehavior[]
struct BlendedBehaviorU5BU5D_t0E4094776BBBB0DF08B164A62352282EF50974E5;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B;
// Flocker[]
struct FlockerU5BU5D_t087D0D7BC275921E3575228D53DB5C1EFA1B71AA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// Impact[]
struct ImpactU5BU5D_tBA665D342517860865FC0D289BEFD71DFDE6BF1F;
// Impactable[]
struct ImpactableU5BU5D_t4AA9B220095F99A6D26081AEED0E755D250B478C;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Kinematic[]
struct KinematicU5BU5D_t5F1130A77D7DE4A980704C2CC248D65AEA0A51E5;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// SteeringBehavior[]
struct SteeringBehaviorU5BU5D_t7CF6540472D85D49457A8031C9A073230CE7E5B8;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Trajectory[]
struct TrajectoryU5BU5D_t4CE7225A9AC6E1D6E6EC5B0174B3CC51E879F7B7;
// AggressiveCollisionAvoidance
struct AggressiveCollisionAvoidance_tD56365F9F9CCD2F4CF4250DB32CB0BB6F4BBFDB2;
// Align
struct Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23;
// Arrive
struct Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E;
// Arriver
struct Arriver_tD9C5BC79D17B57BD781B40E53972959B0A947CF3;
// BallisticBehavior
struct BallisticBehavior_tF29BFEC2F520F886D86593A8AB1D7D7F9DB46CDE;
// BlendedBehavior
struct BlendedBehavior_t2AF211BE7DEE0EF54A7A3F64CB4976DFD8B7F330;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// CameraBuffer
struct CameraBuffer_t6E0E6A560C6CB9DB3210A3848DE4467020D6E266;
// CameraController
struct CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0;
// CollisionAvoidance
struct CollisionAvoidance_tD20AF542B6DBE815D6F87F28324FD1EE7909CF38;
// CollisionAvoider
struct CollisionAvoider_t94ED6119C58880EC319FC563E8B5DCAD2E889951;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Face
struct Face_tAB806D390A7B7F99E145FAF9420C74E544D5AE50;
// Firing
struct Firing_t8D2D227424CC1247D6EA7389C9D9D1FC14556E31;
// FlockCOM
struct FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9;
// Flocker
struct Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8;
// Flocking
struct Flocking_t43CEE98336DA04A3F685A25FC909ACB560366EFE;
// FollowPath
struct FollowPath_t9F2D06DD7295A8D1D97B5B6593FD432730E16A58;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GeneralAvoidance
struct GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Impact
struct Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8;
// Impactable
struct Impactable_t1F12A6C6A7493775F0DDC619DF5B67725572C4FA;
// Kinematic
struct Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36;
// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967;
// LookWhereGoing
struct LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// Menu
struct Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// ObstacleAvoidance
struct ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C;
// ObstacleAvoider
struct ObstacleAvoider_t07D61DBCD670B954F50D9CD0390C5BA9A77F7B05;
// Path
struct Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862;
// PathCreator
struct PathCreator_tD42C7FF37EE2D32A5D6AF33B2D4753F0A80D7AEB;
// PathFollower
struct PathFollower_tD0C5615DEA60D647390E2ABD7E6D52CEF043AE40;
// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F;
// Prioritization
struct Prioritization_t95C41DC54D60DBB2449E0BE4B1C36FD155E5D363;
// PrioritizedFlocking
struct PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411;
// Projectile
struct Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F;
// Pursue
struct Pursue_tD122B2A570231794548505BE2B891BCBCCF88F8E;
// Pursuer
struct Pursuer_tD9402FCF5E19DA14928D90FC8794D181F6B0A14D;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Seek
struct Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF;
// Seeker
struct Seeker_t246DDE7D5A9EA1244787FAA74722A2F079C9CF4D;
// Separation
struct Separation_tB627F4D516766D919037B2256412BE43C0539007;
// Separator
struct Separator_t11F00E3211A0E086332FF3C1396EF51C5268C3CC;
// SpeedMatch
struct SpeedMatch_tBE04550772E96FFF0DB8C832949CEC09A9346294;
// SteeringBehavior
struct SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1;
// SteeringOutput
struct SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D;
// System.String
struct String_t;
// Tank
struct Tank_tCBDDA0BA03D5014BEAFC111D578FFBD3BE1B9FC4;
// Trajectory
struct Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UserControlled
struct UserControlled_tBFDF8B501E956DB77DCFE541D286ACC17815E95E;
// VelocityAlign
struct VelocityAlign_tDDB9C6C2E3164B7761196EF435164BFF365B9509;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Wander
struct Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E;
// Wanderer
struct Wanderer_t62F7852567755EF90A5BAB82EE13473D66A94769;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;

IL2CPP_EXTERN_C RuntimeClass* AggressiveCollisionAvoidance_tD56365F9F9CCD2F4CF4250DB32CB0BB6F4BBFDB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BlendedBehavior_t2AF211BE7DEE0EF54A7A3F64CB4976DFD8B7F330_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraBuffer_t6E0E6A560C6CB9DB3210A3848DE4467020D6E266_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CollisionAvoidance_tD20AF542B6DBE815D6F87F28324FD1EE7909CF38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Face_tAB806D390A7B7F99E145FAF9420C74E544D5AE50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Firing_t8D2D227424CC1247D6EA7389C9D9D1FC14556E31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Flocking_t43CEE98336DA04A3F685A25FC909ACB560366EFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FollowPath_t9F2D06DD7295A8D1D97B5B6593FD432730E16A58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5077A09B97AEA8F3F00983A9B3A5FDEF8A5B66A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7059AC9A2D33D3DB433E18D5A6E36E07E45F717E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE14D0C6C55782752906F8175A6571F39953F299B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pursue_tD122B2A570231794548505BE2B891BCBCCF88F8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Separation_tB627F4D516766D919037B2256412BE43C0539007_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeedMatch_tBE04550772E96FFF0DB8C832949CEC09A9346294_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserControlled_tBFDF8B501E956DB77DCFE541D286ACC17815E95E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VelocityAlign_tDDB9C6C2E3164B7761196EF435164BFF365B9509_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral070D400BBE60E35A65D631FB441026419652D4D2;
IL2CPP_EXTERN_C String_t* _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78;
IL2CPP_EXTERN_C String_t* _stringLiteral2221041CF91A32FCAC6B2353A4B41A510770DD19;
IL2CPP_EXTERN_C String_t* _stringLiteral37ECA87AC91B1D204FE4A5290256D511F42C29A0;
IL2CPP_EXTERN_C String_t* _stringLiteral3F812CE0DFB90703ABD3B7050E6633BAB3989453;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral7BCE2F857E849104ED56E54AC72CE86521A31077;
IL2CPP_EXTERN_C String_t* _stringLiteral8E34B6D1A15C712D6743BB63178D85EBE9EE182D;
IL2CPP_EXTERN_C String_t* _stringLiteral92AE871A634233DD769D6292661BF03E74B47BB9;
IL2CPP_EXTERN_C String_t* _stringLiteral9FBF691364465D2956438339BB777C712F391763;
IL2CPP_EXTERN_C String_t* _stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03;
IL2CPP_EXTERN_C String_t* _stringLiteralA2D6946C56585B8BCCDBD82C5D7D41BD6D34A7FD;
IL2CPP_EXTERN_C String_t* _stringLiteralA5DE64A47C21FD44438A24400D35610A2D08798B;
IL2CPP_EXTERN_C String_t* _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907;
IL2CPP_EXTERN_C String_t* _stringLiteralABA4CBC4C7C6D1684B9A097E391ADADC3D5BCC1C;
IL2CPP_EXTERN_C String_t* _stringLiteralB842E9AFAF28E511E90B235D913472217D5DA741;
IL2CPP_EXTERN_C String_t* _stringLiteralD014289E1A595F86C38BE358856EF13678F46D0A;
IL2CPP_EXTERN_C String_t* _stringLiteralD492B6A32B1A95EDB7062A5E4106617448FC1CFF;
IL2CPP_EXTERN_C String_t* _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465;
IL2CPP_EXTERN_C String_t* _stringLiteralE2B67FCBC70A06406A61FCBD83C30D70AFC8D801;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m2AA5EF636B8BEBBA403078BE8197E693C9903A5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m383EF8008DED4B2D672627F30C5D8F5F7932083E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC0D1B48DED731BB4F7742316A38A713371E224B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE29A1F5AE3674BFE88E3053DDC38C047D5F3C986_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m01CADAD371D4EBFB094855F8AF63C98AF24B2AE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m880BE98E6A94A4D0D21E8AED285415B4746B1D3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCE9E6E1B120A477E99BD05C9FA4B5439939C7FE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD86040F68C5C73B4736290FC07AE3A27C49034C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2E7EEE149888540555AD68CF4F36F466ABC52BFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m535316519D356FB25DCAFEE93370A193AEF42FA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9A2DF2335C72E549844B32DD8FF027567B76EE73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF952351088F6B8B523EBBD6A5163FD9583EBE878_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisKinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36_m261E08D5C7A867FDD4AC90E54A81E323E284C45E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3DA0E2C0D5F7659D65FD2AFE1A870FBF111604C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m510A17ABFE245EDBEA8AD0743F574A5392F460D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5554CF65EE89B4C164DAC401ED0F282BB5B08E2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE7C35E8597C85E4CB84DAAC613333CD4DD149384_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF1EA730C9F95499D7CB4C1EA6D4F627056DD1391_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m1C68671E032F7E52E76DD2867A2A78DA45FA673A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m1FEDC50F978A2982E4B7F0F8B881490D99C5843A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m2217EBA5E7D405491F517266C31F8AC323B7B093_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB002953C1CFA8F48726D91BC4ED4304932F99B01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1FDEFA58DE0ADEF431741F5D3CA92BFFBF72EA29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m310ACA95AC35DB0ABD08DA9D070473FDEEDA0339_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m55D6A69A092192BB5EC43D356A6DA4DE55B3A880_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8EBD2B88387E6D883B93A48D53F4D9AED94D5B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB46962C3860A5E5BF5B9B2DB6694B803148D6C80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0275E4209C9D7D871B1830BA10E535E973C740A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisFlocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8_m82ECE1488CFA901E86ECC70B838C92BB5656882D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisKinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36_mF0A40EAF77D81C72D6066890A5C9BFA7C4174143_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Trajectory_calculateFiringSolutions_m39DAD3638EE2E623D2CF88182DFFB49734A53345_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Trajectory_calculate_mF8C8B6D51F4D5EA859A6818BE56DA265D9733229_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Trajectory_findFirstIntersection_m0BADA34A27A95AFD08ACAC434D97AEE430441169_RuntimeMethod_var;
struct ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 ;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct FlockerU5BU5D_t087D0D7BC275921E3575228D53DB5C1EFA1B71AA;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

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


// System.Collections.Generic.List`1<BlendedBehavior>
struct List_1_tE14D0C6C55782752906F8175A6571F39953F299B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BlendedBehaviorU5BU5D_t0E4094776BBBB0DF08B164A62352282EF50974E5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE14D0C6C55782752906F8175A6571F39953F299B, ____items_1)); }
	inline BlendedBehaviorU5BU5D_t0E4094776BBBB0DF08B164A62352282EF50974E5* get__items_1() const { return ____items_1; }
	inline BlendedBehaviorU5BU5D_t0E4094776BBBB0DF08B164A62352282EF50974E5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BlendedBehaviorU5BU5D_t0E4094776BBBB0DF08B164A62352282EF50974E5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE14D0C6C55782752906F8175A6571F39953F299B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE14D0C6C55782752906F8175A6571F39953F299B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE14D0C6C55782752906F8175A6571F39953F299B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE14D0C6C55782752906F8175A6571F39953F299B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BlendedBehaviorU5BU5D_t0E4094776BBBB0DF08B164A62352282EF50974E5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE14D0C6C55782752906F8175A6571F39953F299B_StaticFields, ____emptyArray_5)); }
	inline BlendedBehaviorU5BU5D_t0E4094776BBBB0DF08B164A62352282EF50974E5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BlendedBehaviorU5BU5D_t0E4094776BBBB0DF08B164A62352282EF50974E5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BlendedBehaviorU5BU5D_t0E4094776BBBB0DF08B164A62352282EF50974E5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Impact>
struct List_1_t7059AC9A2D33D3DB433E18D5A6E36E07E45F717E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ImpactU5BU5D_tBA665D342517860865FC0D289BEFD71DFDE6BF1F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7059AC9A2D33D3DB433E18D5A6E36E07E45F717E, ____items_1)); }
	inline ImpactU5BU5D_tBA665D342517860865FC0D289BEFD71DFDE6BF1F* get__items_1() const { return ____items_1; }
	inline ImpactU5BU5D_tBA665D342517860865FC0D289BEFD71DFDE6BF1F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ImpactU5BU5D_tBA665D342517860865FC0D289BEFD71DFDE6BF1F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7059AC9A2D33D3DB433E18D5A6E36E07E45F717E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7059AC9A2D33D3DB433E18D5A6E36E07E45F717E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7059AC9A2D33D3DB433E18D5A6E36E07E45F717E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7059AC9A2D33D3DB433E18D5A6E36E07E45F717E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ImpactU5BU5D_tBA665D342517860865FC0D289BEFD71DFDE6BF1F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7059AC9A2D33D3DB433E18D5A6E36E07E45F717E_StaticFields, ____emptyArray_5)); }
	inline ImpactU5BU5D_tBA665D342517860865FC0D289BEFD71DFDE6BF1F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ImpactU5BU5D_tBA665D342517860865FC0D289BEFD71DFDE6BF1F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ImpactU5BU5D_tBA665D342517860865FC0D289BEFD71DFDE6BF1F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Impactable>
struct List_1_t5077A09B97AEA8F3F00983A9B3A5FDEF8A5B66A6  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ImpactableU5BU5D_t4AA9B220095F99A6D26081AEED0E755D250B478C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t5077A09B97AEA8F3F00983A9B3A5FDEF8A5B66A6, ____items_1)); }
	inline ImpactableU5BU5D_t4AA9B220095F99A6D26081AEED0E755D250B478C* get__items_1() const { return ____items_1; }
	inline ImpactableU5BU5D_t4AA9B220095F99A6D26081AEED0E755D250B478C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ImpactableU5BU5D_t4AA9B220095F99A6D26081AEED0E755D250B478C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t5077A09B97AEA8F3F00983A9B3A5FDEF8A5B66A6, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t5077A09B97AEA8F3F00983A9B3A5FDEF8A5B66A6, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t5077A09B97AEA8F3F00983A9B3A5FDEF8A5B66A6, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t5077A09B97AEA8F3F00983A9B3A5FDEF8A5B66A6_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ImpactableU5BU5D_t4AA9B220095F99A6D26081AEED0E755D250B478C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t5077A09B97AEA8F3F00983A9B3A5FDEF8A5B66A6_StaticFields, ____emptyArray_5)); }
	inline ImpactableU5BU5D_t4AA9B220095F99A6D26081AEED0E755D250B478C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ImpactableU5BU5D_t4AA9B220095F99A6D26081AEED0E755D250B478C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ImpactableU5BU5D_t4AA9B220095F99A6D26081AEED0E755D250B478C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Kinematic>
struct List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KinematicU5BU5D_t5F1130A77D7DE4A980704C2CC248D65AEA0A51E5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9, ____items_1)); }
	inline KinematicU5BU5D_t5F1130A77D7DE4A980704C2CC248D65AEA0A51E5* get__items_1() const { return ____items_1; }
	inline KinematicU5BU5D_t5F1130A77D7DE4A980704C2CC248D65AEA0A51E5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KinematicU5BU5D_t5F1130A77D7DE4A980704C2CC248D65AEA0A51E5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KinematicU5BU5D_t5F1130A77D7DE4A980704C2CC248D65AEA0A51E5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9_StaticFields, ____emptyArray_5)); }
	inline KinematicU5BU5D_t5F1130A77D7DE4A980704C2CC248D65AEA0A51E5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KinematicU5BU5D_t5F1130A77D7DE4A980704C2CC248D65AEA0A51E5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KinematicU5BU5D_t5F1130A77D7DE4A980704C2CC248D65AEA0A51E5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<SteeringBehavior>
struct List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SteeringBehaviorU5BU5D_t7CF6540472D85D49457A8031C9A073230CE7E5B8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8, ____items_1)); }
	inline SteeringBehaviorU5BU5D_t7CF6540472D85D49457A8031C9A073230CE7E5B8* get__items_1() const { return ____items_1; }
	inline SteeringBehaviorU5BU5D_t7CF6540472D85D49457A8031C9A073230CE7E5B8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SteeringBehaviorU5BU5D_t7CF6540472D85D49457A8031C9A073230CE7E5B8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SteeringBehaviorU5BU5D_t7CF6540472D85D49457A8031C9A073230CE7E5B8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8_StaticFields, ____emptyArray_5)); }
	inline SteeringBehaviorU5BU5D_t7CF6540472D85D49457A8031C9A073230CE7E5B8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SteeringBehaviorU5BU5D_t7CF6540472D85D49457A8031C9A073230CE7E5B8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SteeringBehaviorU5BU5D_t7CF6540472D85D49457A8031C9A073230CE7E5B8* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Trajectory>
struct List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TrajectoryU5BU5D_t4CE7225A9AC6E1D6E6EC5B0174B3CC51E879F7B7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720, ____items_1)); }
	inline TrajectoryU5BU5D_t4CE7225A9AC6E1D6E6EC5B0174B3CC51E879F7B7* get__items_1() const { return ____items_1; }
	inline TrajectoryU5BU5D_t4CE7225A9AC6E1D6E6EC5B0174B3CC51E879F7B7** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TrajectoryU5BU5D_t4CE7225A9AC6E1D6E6EC5B0174B3CC51E879F7B7* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TrajectoryU5BU5D_t4CE7225A9AC6E1D6E6EC5B0174B3CC51E879F7B7* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720_StaticFields, ____emptyArray_5)); }
	inline TrajectoryU5BU5D_t4CE7225A9AC6E1D6E6EC5B0174B3CC51E879F7B7* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TrajectoryU5BU5D_t4CE7225A9AC6E1D6E6EC5B0174B3CC51E879F7B7** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TrajectoryU5BU5D_t4CE7225A9AC6E1D6E6EC5B0174B3CC51E879F7B7* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// BallisticBehavior
struct BallisticBehavior_tF29BFEC2F520F886D86593A8AB1D7D7F9DB46CDE  : public RuntimeObject
{
public:
	// System.Single BallisticBehavior::weight
	float ___weight_0;

public:
	inline static int32_t get_offset_of_weight_0() { return static_cast<int32_t>(offsetof(BallisticBehavior_tF29BFEC2F520F886D86593A8AB1D7D7F9DB46CDE, ___weight_0)); }
	inline float get_weight_0() const { return ___weight_0; }
	inline float* get_address_of_weight_0() { return &___weight_0; }
	inline void set_weight_0(float value)
	{
		___weight_0 = value;
	}
};


// Impactable
struct Impactable_t1F12A6C6A7493775F0DDC619DF5B67725572C4FA  : public RuntimeObject
{
public:
	// UnityEngine.GameObject Impactable::gameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject_0;
	// System.Boolean Impactable::bounceable
	bool ___bounceable_1;

public:
	inline static int32_t get_offset_of_gameObject_0() { return static_cast<int32_t>(offsetof(Impactable_t1F12A6C6A7493775F0DDC619DF5B67725572C4FA, ___gameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameObject_0() const { return ___gameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameObject_0() { return &___gameObject_0; }
	inline void set_gameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_bounceable_1() { return static_cast<int32_t>(offsetof(Impactable_t1F12A6C6A7493775F0DDC619DF5B67725572C4FA, ___bounceable_1)); }
	inline bool get_bounceable_1() const { return ___bounceable_1; }
	inline bool* get_address_of_bounceable_1() { return &___bounceable_1; }
	inline void set_bounceable_1(bool value)
	{
		___bounceable_1 = value;
	}
};


// SteeringBehavior
struct SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1  : public RuntimeObject
{
public:
	// System.Single SteeringBehavior::weight
	float ___weight_0;

public:
	inline static int32_t get_offset_of_weight_0() { return static_cast<int32_t>(offsetof(SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1, ___weight_0)); }
	inline float get_weight_0() const { return ___weight_0; }
	inline float* get_address_of_weight_0() { return &___weight_0; }
	inline void set_weight_0(float value)
	{
		___weight_0 = value;
	}
};


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

// System.Collections.Generic.List`1/Enumerator<BlendedBehavior>
struct Enumerator_tBD4F8B6B56090FDF0A69CA70F90FC5E73D9DA3C4 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tE14D0C6C55782752906F8175A6571F39953F299B * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	BlendedBehavior_t2AF211BE7DEE0EF54A7A3F64CB4976DFD8B7F330 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tBD4F8B6B56090FDF0A69CA70F90FC5E73D9DA3C4, ___list_0)); }
	inline List_1_tE14D0C6C55782752906F8175A6571F39953F299B * get_list_0() const { return ___list_0; }
	inline List_1_tE14D0C6C55782752906F8175A6571F39953F299B ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tE14D0C6C55782752906F8175A6571F39953F299B * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tBD4F8B6B56090FDF0A69CA70F90FC5E73D9DA3C4, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tBD4F8B6B56090FDF0A69CA70F90FC5E73D9DA3C4, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tBD4F8B6B56090FDF0A69CA70F90FC5E73D9DA3C4, ___current_3)); }
	inline BlendedBehavior_t2AF211BE7DEE0EF54A7A3F64CB4976DFD8B7F330 * get_current_3() const { return ___current_3; }
	inline BlendedBehavior_t2AF211BE7DEE0EF54A7A3F64CB4976DFD8B7F330 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(BlendedBehavior_t2AF211BE7DEE0EF54A7A3F64CB4976DFD8B7F330 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Kinematic>
struct Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A, ___list_0)); }
	inline List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * get_list_0() const { return ___list_0; }
	inline List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A, ___current_3)); }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * get_current_3() const { return ___current_3; }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<SteeringBehavior>
struct Enumerator_tB9EB586E3DE9D08DFA77834F31084D2BF7C0D39F 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB9EB586E3DE9D08DFA77834F31084D2BF7C0D39F, ___list_0)); }
	inline List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8 * get_list_0() const { return ___list_0; }
	inline List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB9EB586E3DE9D08DFA77834F31084D2BF7C0D39F, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB9EB586E3DE9D08DFA77834F31084D2BF7C0D39F, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB9EB586E3DE9D08DFA77834F31084D2BF7C0D39F, ___current_3)); }
	inline SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1 * get_current_3() const { return ___current_3; }
	inline SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Trajectory>
struct Enumerator_t7EFFE3BB0F091E033881873D4DDB73CD7CCBDF06 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t7EFFE3BB0F091E033881873D4DDB73CD7CCBDF06, ___list_0)); }
	inline List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720 * get_list_0() const { return ___list_0; }
	inline List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7EFFE3BB0F091E033881873D4DDB73CD7CCBDF06, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7EFFE3BB0F091E033881873D4DDB73CD7CCBDF06, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7EFFE3BB0F091E033881873D4DDB73CD7CCBDF06, ___current_3)); }
	inline Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * get_current_3() const { return ___current_3; }
	inline Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// AggressiveCollisionAvoidance
struct AggressiveCollisionAvoidance_tD56365F9F9CCD2F4CF4250DB32CB0BB6F4BBFDB2  : public SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1
{
public:
	// Kinematic AggressiveCollisionAvoidance::character
	Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * ___character_1;
	// System.Single AggressiveCollisionAvoidance::maxAcceleration
	float ___maxAcceleration_2;
	// System.Collections.Generic.List`1<Kinematic> AggressiveCollisionAvoidance::targets
	List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * ___targets_3;
	// System.Single AggressiveCollisionAvoidance::radius
	float ___radius_4;
	// System.Boolean AggressiveCollisionAvoidance::debug
	bool ___debug_5;
	// UnityEngine.LineRenderer AggressiveCollisionAvoidance::lr1
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___lr1_6;
	// UnityEngine.LineRenderer AggressiveCollisionAvoidance::lr2
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___lr2_7;
	// UnityEngine.Material AggressiveCollisionAvoidance::relPosMat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___relPosMat_8;
	// UnityEngine.Material AggressiveCollisionAvoidance::relVelMat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___relVelMat_9;

public:
	inline static int32_t get_offset_of_character_1() { return static_cast<int32_t>(offsetof(AggressiveCollisionAvoidance_tD56365F9F9CCD2F4CF4250DB32CB0BB6F4BBFDB2, ___character_1)); }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * get_character_1() const { return ___character_1; }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 ** get_address_of_character_1() { return &___character_1; }
	inline void set_character_1(Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * value)
	{
		___character_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_1), (void*)value);
	}

	inline static int32_t get_offset_of_maxAcceleration_2() { return static_cast<int32_t>(offsetof(AggressiveCollisionAvoidance_tD56365F9F9CCD2F4CF4250DB32CB0BB6F4BBFDB2, ___maxAcceleration_2)); }
	inline float get_maxAcceleration_2() const { return ___maxAcceleration_2; }
	inline float* get_address_of_maxAcceleration_2() { return &___maxAcceleration_2; }
	inline void set_maxAcceleration_2(float value)
	{
		___maxAcceleration_2 = value;
	}

	inline static int32_t get_offset_of_targets_3() { return static_cast<int32_t>(offsetof(AggressiveCollisionAvoidance_tD56365F9F9CCD2F4CF4250DB32CB0BB6F4BBFDB2, ___targets_3)); }
	inline List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * get_targets_3() const { return ___targets_3; }
	inline List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 ** get_address_of_targets_3() { return &___targets_3; }
	inline void set_targets_3(List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * value)
	{
		___targets_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targets_3), (void*)value);
	}

	inline static int32_t get_offset_of_radius_4() { return static_cast<int32_t>(offsetof(AggressiveCollisionAvoidance_tD56365F9F9CCD2F4CF4250DB32CB0BB6F4BBFDB2, ___radius_4)); }
	inline float get_radius_4() const { return ___radius_4; }
	inline float* get_address_of_radius_4() { return &___radius_4; }
	inline void set_radius_4(float value)
	{
		___radius_4 = value;
	}

	inline static int32_t get_offset_of_debug_5() { return static_cast<int32_t>(offsetof(AggressiveCollisionAvoidance_tD56365F9F9CCD2F4CF4250DB32CB0BB6F4BBFDB2, ___debug_5)); }
	inline bool get_debug_5() const { return ___debug_5; }
	inline bool* get_address_of_debug_5() { return &___debug_5; }
	inline void set_debug_5(bool value)
	{
		___debug_5 = value;
	}

	inline static int32_t get_offset_of_lr1_6() { return static_cast<int32_t>(offsetof(AggressiveCollisionAvoidance_tD56365F9F9CCD2F4CF4250DB32CB0BB6F4BBFDB2, ___lr1_6)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_lr1_6() const { return ___lr1_6; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_lr1_6() { return &___lr1_6; }
	inline void set_lr1_6(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___lr1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lr1_6), (void*)value);
	}

	inline static int32_t get_offset_of_lr2_7() { return static_cast<int32_t>(offsetof(AggressiveCollisionAvoidance_tD56365F9F9CCD2F4CF4250DB32CB0BB6F4BBFDB2, ___lr2_7)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_lr2_7() const { return ___lr2_7; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_lr2_7() { return &___lr2_7; }
	inline void set_lr2_7(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___lr2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lr2_7), (void*)value);
	}

	inline static int32_t get_offset_of_relPosMat_8() { return static_cast<int32_t>(offsetof(AggressiveCollisionAvoidance_tD56365F9F9CCD2F4CF4250DB32CB0BB6F4BBFDB2, ___relPosMat_8)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_relPosMat_8() const { return ___relPosMat_8; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_relPosMat_8() { return &___relPosMat_8; }
	inline void set_relPosMat_8(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___relPosMat_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___relPosMat_8), (void*)value);
	}

	inline static int32_t get_offset_of_relVelMat_9() { return static_cast<int32_t>(offsetof(AggressiveCollisionAvoidance_tD56365F9F9CCD2F4CF4250DB32CB0BB6F4BBFDB2, ___relVelMat_9)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_relVelMat_9() const { return ___relVelMat_9; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_relVelMat_9() { return &___relVelMat_9; }
	inline void set_relVelMat_9(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___relVelMat_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___relVelMat_9), (void*)value);
	}
};


// Align
struct Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23  : public SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1
{
public:
	// Kinematic Align::character
	Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * ___character_1;
	// UnityEngine.GameObject Align::target
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target_2;
	// System.Single Align::maxAngularAcceleration
	float ___maxAngularAcceleration_3;
	// System.Single Align::maxRotation
	float ___maxRotation_4;
	// System.Single Align::slowRadius
	float ___slowRadius_5;
	// System.Single Align::timeToTarget
	float ___timeToTarget_6;

public:
	inline static int32_t get_offset_of_character_1() { return static_cast<int32_t>(offsetof(Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23, ___character_1)); }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * get_character_1() const { return ___character_1; }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 ** get_address_of_character_1() { return &___character_1; }
	inline void set_character_1(Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * value)
	{
		___character_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_1), (void*)value);
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23, ___target_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_target_2() const { return ___target_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_2), (void*)value);
	}

	inline static int32_t get_offset_of_maxAngularAcceleration_3() { return static_cast<int32_t>(offsetof(Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23, ___maxAngularAcceleration_3)); }
	inline float get_maxAngularAcceleration_3() const { return ___maxAngularAcceleration_3; }
	inline float* get_address_of_maxAngularAcceleration_3() { return &___maxAngularAcceleration_3; }
	inline void set_maxAngularAcceleration_3(float value)
	{
		___maxAngularAcceleration_3 = value;
	}

	inline static int32_t get_offset_of_maxRotation_4() { return static_cast<int32_t>(offsetof(Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23, ___maxRotation_4)); }
	inline float get_maxRotation_4() const { return ___maxRotation_4; }
	inline float* get_address_of_maxRotation_4() { return &___maxRotation_4; }
	inline void set_maxRotation_4(float value)
	{
		___maxRotation_4 = value;
	}

	inline static int32_t get_offset_of_slowRadius_5() { return static_cast<int32_t>(offsetof(Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23, ___slowRadius_5)); }
	inline float get_slowRadius_5() const { return ___slowRadius_5; }
	inline float* get_address_of_slowRadius_5() { return &___slowRadius_5; }
	inline void set_slowRadius_5(float value)
	{
		___slowRadius_5 = value;
	}

	inline static int32_t get_offset_of_timeToTarget_6() { return static_cast<int32_t>(offsetof(Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23, ___timeToTarget_6)); }
	inline float get_timeToTarget_6() const { return ___timeToTarget_6; }
	inline float* get_address_of_timeToTarget_6() { return &___timeToTarget_6; }
	inline void set_timeToTarget_6(float value)
	{
		___timeToTarget_6 = value;
	}
};


// Arrive
struct Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E  : public SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1
{
public:
	// Kinematic Arrive::character
	Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * ___character_1;
	// UnityEngine.GameObject Arrive::target
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target_2;
	// System.Single Arrive::maxAcceleration
	float ___maxAcceleration_3;
	// System.Single Arrive::maxSpeed
	float ___maxSpeed_4;
	// System.Single Arrive::targetRadius
	float ___targetRadius_5;
	// System.Single Arrive::slowRadius
	float ___slowRadius_6;
	// System.Single Arrive::timeToTarget
	float ___timeToTarget_7;

public:
	inline static int32_t get_offset_of_character_1() { return static_cast<int32_t>(offsetof(Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E, ___character_1)); }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * get_character_1() const { return ___character_1; }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 ** get_address_of_character_1() { return &___character_1; }
	inline void set_character_1(Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * value)
	{
		___character_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_1), (void*)value);
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E, ___target_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_target_2() const { return ___target_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_2), (void*)value);
	}

	inline static int32_t get_offset_of_maxAcceleration_3() { return static_cast<int32_t>(offsetof(Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E, ___maxAcceleration_3)); }
	inline float get_maxAcceleration_3() const { return ___maxAcceleration_3; }
	inline float* get_address_of_maxAcceleration_3() { return &___maxAcceleration_3; }
	inline void set_maxAcceleration_3(float value)
	{
		___maxAcceleration_3 = value;
	}

	inline static int32_t get_offset_of_maxSpeed_4() { return static_cast<int32_t>(offsetof(Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E, ___maxSpeed_4)); }
	inline float get_maxSpeed_4() const { return ___maxSpeed_4; }
	inline float* get_address_of_maxSpeed_4() { return &___maxSpeed_4; }
	inline void set_maxSpeed_4(float value)
	{
		___maxSpeed_4 = value;
	}

	inline static int32_t get_offset_of_targetRadius_5() { return static_cast<int32_t>(offsetof(Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E, ___targetRadius_5)); }
	inline float get_targetRadius_5() const { return ___targetRadius_5; }
	inline float* get_address_of_targetRadius_5() { return &___targetRadius_5; }
	inline void set_targetRadius_5(float value)
	{
		___targetRadius_5 = value;
	}

	inline static int32_t get_offset_of_slowRadius_6() { return static_cast<int32_t>(offsetof(Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E, ___slowRadius_6)); }
	inline float get_slowRadius_6() const { return ___slowRadius_6; }
	inline float* get_address_of_slowRadius_6() { return &___slowRadius_6; }
	inline void set_slowRadius_6(float value)
	{
		___slowRadius_6 = value;
	}

	inline static int32_t get_offset_of_timeToTarget_7() { return static_cast<int32_t>(offsetof(Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E, ___timeToTarget_7)); }
	inline float get_timeToTarget_7() const { return ___timeToTarget_7; }
	inline float* get_address_of_timeToTarget_7() { return &___timeToTarget_7; }
	inline void set_timeToTarget_7(float value)
	{
		___timeToTarget_7 = value;
	}
};


// BlendedBehavior
struct BlendedBehavior_t2AF211BE7DEE0EF54A7A3F64CB4976DFD8B7F330  : public SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1
{
public:
	// System.Single BlendedBehavior::maxAcceleration
	float ___maxAcceleration_1;
	// System.Single BlendedBehavior::maxRotation
	float ___maxRotation_2;
	// SteeringBehavior BlendedBehavior::defaultBehavior
	SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1 * ___defaultBehavior_3;

public:
	inline static int32_t get_offset_of_maxAcceleration_1() { return static_cast<int32_t>(offsetof(BlendedBehavior_t2AF211BE7DEE0EF54A7A3F64CB4976DFD8B7F330, ___maxAcceleration_1)); }
	inline float get_maxAcceleration_1() const { return ___maxAcceleration_1; }
	inline float* get_address_of_maxAcceleration_1() { return &___maxAcceleration_1; }
	inline void set_maxAcceleration_1(float value)
	{
		___maxAcceleration_1 = value;
	}

	inline static int32_t get_offset_of_maxRotation_2() { return static_cast<int32_t>(offsetof(BlendedBehavior_t2AF211BE7DEE0EF54A7A3F64CB4976DFD8B7F330, ___maxRotation_2)); }
	inline float get_maxRotation_2() const { return ___maxRotation_2; }
	inline float* get_address_of_maxRotation_2() { return &___maxRotation_2; }
	inline void set_maxRotation_2(float value)
	{
		___maxRotation_2 = value;
	}

	inline static int32_t get_offset_of_defaultBehavior_3() { return static_cast<int32_t>(offsetof(BlendedBehavior_t2AF211BE7DEE0EF54A7A3F64CB4976DFD8B7F330, ___defaultBehavior_3)); }
	inline SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1 * get_defaultBehavior_3() const { return ___defaultBehavior_3; }
	inline SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1 ** get_address_of_defaultBehavior_3() { return &___defaultBehavior_3; }
	inline void set_defaultBehavior_3(SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1 * value)
	{
		___defaultBehavior_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBehavior_3), (void*)value);
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


// CameraBuffer
struct CameraBuffer_t6E0E6A560C6CB9DB3210A3848DE4467020D6E266  : public SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1
{
public:
	// Kinematic CameraBuffer::camera
	Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * ___camera_1;
	// System.Single CameraBuffer::maxAcceleration
	float ___maxAcceleration_2;
	// UnityEngine.GameObject CameraBuffer::target
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target_3;
	// System.Single CameraBuffer::widthPercent
	float ___widthPercent_4;
	// System.Single CameraBuffer::heightPercent
	float ___heightPercent_5;
	// System.Single CameraBuffer::decayCoefficient
	float ___decayCoefficient_6;

public:
	inline static int32_t get_offset_of_camera_1() { return static_cast<int32_t>(offsetof(CameraBuffer_t6E0E6A560C6CB9DB3210A3848DE4467020D6E266, ___camera_1)); }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * get_camera_1() const { return ___camera_1; }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 ** get_address_of_camera_1() { return &___camera_1; }
	inline void set_camera_1(Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * value)
	{
		___camera_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___camera_1), (void*)value);
	}

	inline static int32_t get_offset_of_maxAcceleration_2() { return static_cast<int32_t>(offsetof(CameraBuffer_t6E0E6A560C6CB9DB3210A3848DE4467020D6E266, ___maxAcceleration_2)); }
	inline float get_maxAcceleration_2() const { return ___maxAcceleration_2; }
	inline float* get_address_of_maxAcceleration_2() { return &___maxAcceleration_2; }
	inline void set_maxAcceleration_2(float value)
	{
		___maxAcceleration_2 = value;
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(CameraBuffer_t6E0E6A560C6CB9DB3210A3848DE4467020D6E266, ___target_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_target_3() const { return ___target_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_3), (void*)value);
	}

	inline static int32_t get_offset_of_widthPercent_4() { return static_cast<int32_t>(offsetof(CameraBuffer_t6E0E6A560C6CB9DB3210A3848DE4467020D6E266, ___widthPercent_4)); }
	inline float get_widthPercent_4() const { return ___widthPercent_4; }
	inline float* get_address_of_widthPercent_4() { return &___widthPercent_4; }
	inline void set_widthPercent_4(float value)
	{
		___widthPercent_4 = value;
	}

	inline static int32_t get_offset_of_heightPercent_5() { return static_cast<int32_t>(offsetof(CameraBuffer_t6E0E6A560C6CB9DB3210A3848DE4467020D6E266, ___heightPercent_5)); }
	inline float get_heightPercent_5() const { return ___heightPercent_5; }
	inline float* get_address_of_heightPercent_5() { return &___heightPercent_5; }
	inline void set_heightPercent_5(float value)
	{
		___heightPercent_5 = value;
	}

	inline static int32_t get_offset_of_decayCoefficient_6() { return static_cast<int32_t>(offsetof(CameraBuffer_t6E0E6A560C6CB9DB3210A3848DE4467020D6E266, ___decayCoefficient_6)); }
	inline float get_decayCoefficient_6() const { return ___decayCoefficient_6; }
	inline float* get_address_of_decayCoefficient_6() { return &___decayCoefficient_6; }
	inline void set_decayCoefficient_6(float value)
	{
		___decayCoefficient_6 = value;
	}
};


// CollisionAvoidance
struct CollisionAvoidance_tD20AF542B6DBE815D6F87F28324FD1EE7909CF38  : public SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1
{
public:
	// Kinematic CollisionAvoidance::character
	Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * ___character_1;
	// System.Single CollisionAvoidance::maxAcceleration
	float ___maxAcceleration_2;
	// System.Collections.Generic.List`1<Kinematic> CollisionAvoidance::targets
	List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * ___targets_3;
	// System.Single CollisionAvoidance::radius
	float ___radius_4;

public:
	inline static int32_t get_offset_of_character_1() { return static_cast<int32_t>(offsetof(CollisionAvoidance_tD20AF542B6DBE815D6F87F28324FD1EE7909CF38, ___character_1)); }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * get_character_1() const { return ___character_1; }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 ** get_address_of_character_1() { return &___character_1; }
	inline void set_character_1(Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * value)
	{
		___character_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_1), (void*)value);
	}

	inline static int32_t get_offset_of_maxAcceleration_2() { return static_cast<int32_t>(offsetof(CollisionAvoidance_tD20AF542B6DBE815D6F87F28324FD1EE7909CF38, ___maxAcceleration_2)); }
	inline float get_maxAcceleration_2() const { return ___maxAcceleration_2; }
	inline float* get_address_of_maxAcceleration_2() { return &___maxAcceleration_2; }
	inline void set_maxAcceleration_2(float value)
	{
		___maxAcceleration_2 = value;
	}

	inline static int32_t get_offset_of_targets_3() { return static_cast<int32_t>(offsetof(CollisionAvoidance_tD20AF542B6DBE815D6F87F28324FD1EE7909CF38, ___targets_3)); }
	inline List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * get_targets_3() const { return ___targets_3; }
	inline List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 ** get_address_of_targets_3() { return &___targets_3; }
	inline void set_targets_3(List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * value)
	{
		___targets_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targets_3), (void*)value);
	}

	inline static int32_t get_offset_of_radius_4() { return static_cast<int32_t>(offsetof(CollisionAvoidance_tD20AF542B6DBE815D6F87F28324FD1EE7909CF38, ___radius_4)); }
	inline float get_radius_4() const { return ___radius_4; }
	inline float* get_address_of_radius_4() { return &___radius_4; }
	inline void set_radius_4(float value)
	{
		___radius_4 = value;
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


// Firing
struct Firing_t8D2D227424CC1247D6EA7389C9D9D1FC14556E31  : public BallisticBehavior_tF29BFEC2F520F886D86593A8AB1D7D7F9DB46CDE
{
public:
	// Kinematic Firing::character
	Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * ___character_1;
	// UnityEngine.GameObject Firing::target
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target_2;
	// System.Single Firing::firingSpeed
	float ___firingSpeed_3;
	// System.Boolean Firing::selectSoonest
	bool ___selectSoonest_4;

public:
	inline static int32_t get_offset_of_character_1() { return static_cast<int32_t>(offsetof(Firing_t8D2D227424CC1247D6EA7389C9D9D1FC14556E31, ___character_1)); }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * get_character_1() const { return ___character_1; }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 ** get_address_of_character_1() { return &___character_1; }
	inline void set_character_1(Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * value)
	{
		___character_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_1), (void*)value);
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(Firing_t8D2D227424CC1247D6EA7389C9D9D1FC14556E31, ___target_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_target_2() const { return ___target_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_2), (void*)value);
	}

	inline static int32_t get_offset_of_firingSpeed_3() { return static_cast<int32_t>(offsetof(Firing_t8D2D227424CC1247D6EA7389C9D9D1FC14556E31, ___firingSpeed_3)); }
	inline float get_firingSpeed_3() const { return ___firingSpeed_3; }
	inline float* get_address_of_firingSpeed_3() { return &___firingSpeed_3; }
	inline void set_firingSpeed_3(float value)
	{
		___firingSpeed_3 = value;
	}

	inline static int32_t get_offset_of_selectSoonest_4() { return static_cast<int32_t>(offsetof(Firing_t8D2D227424CC1247D6EA7389C9D9D1FC14556E31, ___selectSoonest_4)); }
	inline bool get_selectSoonest_4() const { return ___selectSoonest_4; }
	inline bool* get_address_of_selectSoonest_4() { return &___selectSoonest_4; }
	inline void set_selectSoonest_4(bool value)
	{
		___selectSoonest_4 = value;
	}
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


// Prioritization
struct Prioritization_t95C41DC54D60DBB2449E0BE4B1C36FD155E5D363  : public SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1
{
public:
	// System.Single Prioritization::linearEpsilon
	float ___linearEpsilon_1;
	// System.Single Prioritization::angularEpsilon
	float ___angularEpsilon_2;
	// System.Boolean Prioritization::splitPriority
	bool ___splitPriority_3;
	// System.Boolean Prioritization::ignoreAngular
	bool ___ignoreAngular_4;
	// System.Boolean Prioritization::ignoreLinear
	bool ___ignoreLinear_5;

public:
	inline static int32_t get_offset_of_linearEpsilon_1() { return static_cast<int32_t>(offsetof(Prioritization_t95C41DC54D60DBB2449E0BE4B1C36FD155E5D363, ___linearEpsilon_1)); }
	inline float get_linearEpsilon_1() const { return ___linearEpsilon_1; }
	inline float* get_address_of_linearEpsilon_1() { return &___linearEpsilon_1; }
	inline void set_linearEpsilon_1(float value)
	{
		___linearEpsilon_1 = value;
	}

	inline static int32_t get_offset_of_angularEpsilon_2() { return static_cast<int32_t>(offsetof(Prioritization_t95C41DC54D60DBB2449E0BE4B1C36FD155E5D363, ___angularEpsilon_2)); }
	inline float get_angularEpsilon_2() const { return ___angularEpsilon_2; }
	inline float* get_address_of_angularEpsilon_2() { return &___angularEpsilon_2; }
	inline void set_angularEpsilon_2(float value)
	{
		___angularEpsilon_2 = value;
	}

	inline static int32_t get_offset_of_splitPriority_3() { return static_cast<int32_t>(offsetof(Prioritization_t95C41DC54D60DBB2449E0BE4B1C36FD155E5D363, ___splitPriority_3)); }
	inline bool get_splitPriority_3() const { return ___splitPriority_3; }
	inline bool* get_address_of_splitPriority_3() { return &___splitPriority_3; }
	inline void set_splitPriority_3(bool value)
	{
		___splitPriority_3 = value;
	}

	inline static int32_t get_offset_of_ignoreAngular_4() { return static_cast<int32_t>(offsetof(Prioritization_t95C41DC54D60DBB2449E0BE4B1C36FD155E5D363, ___ignoreAngular_4)); }
	inline bool get_ignoreAngular_4() const { return ___ignoreAngular_4; }
	inline bool* get_address_of_ignoreAngular_4() { return &___ignoreAngular_4; }
	inline void set_ignoreAngular_4(bool value)
	{
		___ignoreAngular_4 = value;
	}

	inline static int32_t get_offset_of_ignoreLinear_5() { return static_cast<int32_t>(offsetof(Prioritization_t95C41DC54D60DBB2449E0BE4B1C36FD155E5D363, ___ignoreLinear_5)); }
	inline bool get_ignoreLinear_5() const { return ___ignoreLinear_5; }
	inline bool* get_address_of_ignoreLinear_5() { return &___ignoreLinear_5; }
	inline void set_ignoreLinear_5(bool value)
	{
		___ignoreLinear_5 = value;
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


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// Seek
struct Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF  : public SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1
{
public:
	// Kinematic Seek::character
	Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * ___character_1;
	// UnityEngine.GameObject Seek::target
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target_2;
	// System.Single Seek::maxAcceleration
	float ___maxAcceleration_3;
	// System.Boolean Seek::flee
	bool ___flee_4;

public:
	inline static int32_t get_offset_of_character_1() { return static_cast<int32_t>(offsetof(Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF, ___character_1)); }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * get_character_1() const { return ___character_1; }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 ** get_address_of_character_1() { return &___character_1; }
	inline void set_character_1(Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * value)
	{
		___character_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_1), (void*)value);
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF, ___target_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_target_2() const { return ___target_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_2), (void*)value);
	}

	inline static int32_t get_offset_of_maxAcceleration_3() { return static_cast<int32_t>(offsetof(Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF, ___maxAcceleration_3)); }
	inline float get_maxAcceleration_3() const { return ___maxAcceleration_3; }
	inline float* get_address_of_maxAcceleration_3() { return &___maxAcceleration_3; }
	inline void set_maxAcceleration_3(float value)
	{
		___maxAcceleration_3 = value;
	}

	inline static int32_t get_offset_of_flee_4() { return static_cast<int32_t>(offsetof(Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF, ___flee_4)); }
	inline bool get_flee_4() const { return ___flee_4; }
	inline bool* get_address_of_flee_4() { return &___flee_4; }
	inline void set_flee_4(bool value)
	{
		___flee_4 = value;
	}
};


// Separation
struct Separation_tB627F4D516766D919037B2256412BE43C0539007  : public SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1
{
public:
	// Kinematic Separation::character
	Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * ___character_1;
	// System.Single Separation::maxAcceleration
	float ___maxAcceleration_2;
	// System.Collections.Generic.List`1<Kinematic> Separation::targets
	List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * ___targets_3;
	// System.Boolean Separation::debug
	bool ___debug_4;
	// UnityEngine.LineRenderer Separation::lr
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___lr_5;
	// UnityEngine.Material Separation::lrMat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___lrMat_6;
	// System.Single Separation::threshold
	float ___threshold_7;
	// System.Single Separation::decayCoefficient
	float ___decayCoefficient_8;
	// System.Boolean Separation::expDecay
	bool ___expDecay_9;
	// System.Single Separation::expMax
	float ___expMax_10;
	// System.Single Separation::expScale
	float ___expScale_11;

public:
	inline static int32_t get_offset_of_character_1() { return static_cast<int32_t>(offsetof(Separation_tB627F4D516766D919037B2256412BE43C0539007, ___character_1)); }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * get_character_1() const { return ___character_1; }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 ** get_address_of_character_1() { return &___character_1; }
	inline void set_character_1(Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * value)
	{
		___character_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_1), (void*)value);
	}

	inline static int32_t get_offset_of_maxAcceleration_2() { return static_cast<int32_t>(offsetof(Separation_tB627F4D516766D919037B2256412BE43C0539007, ___maxAcceleration_2)); }
	inline float get_maxAcceleration_2() const { return ___maxAcceleration_2; }
	inline float* get_address_of_maxAcceleration_2() { return &___maxAcceleration_2; }
	inline void set_maxAcceleration_2(float value)
	{
		___maxAcceleration_2 = value;
	}

	inline static int32_t get_offset_of_targets_3() { return static_cast<int32_t>(offsetof(Separation_tB627F4D516766D919037B2256412BE43C0539007, ___targets_3)); }
	inline List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * get_targets_3() const { return ___targets_3; }
	inline List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 ** get_address_of_targets_3() { return &___targets_3; }
	inline void set_targets_3(List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * value)
	{
		___targets_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targets_3), (void*)value);
	}

	inline static int32_t get_offset_of_debug_4() { return static_cast<int32_t>(offsetof(Separation_tB627F4D516766D919037B2256412BE43C0539007, ___debug_4)); }
	inline bool get_debug_4() const { return ___debug_4; }
	inline bool* get_address_of_debug_4() { return &___debug_4; }
	inline void set_debug_4(bool value)
	{
		___debug_4 = value;
	}

	inline static int32_t get_offset_of_lr_5() { return static_cast<int32_t>(offsetof(Separation_tB627F4D516766D919037B2256412BE43C0539007, ___lr_5)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_lr_5() const { return ___lr_5; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_lr_5() { return &___lr_5; }
	inline void set_lr_5(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___lr_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lr_5), (void*)value);
	}

	inline static int32_t get_offset_of_lrMat_6() { return static_cast<int32_t>(offsetof(Separation_tB627F4D516766D919037B2256412BE43C0539007, ___lrMat_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_lrMat_6() const { return ___lrMat_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_lrMat_6() { return &___lrMat_6; }
	inline void set_lrMat_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___lrMat_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lrMat_6), (void*)value);
	}

	inline static int32_t get_offset_of_threshold_7() { return static_cast<int32_t>(offsetof(Separation_tB627F4D516766D919037B2256412BE43C0539007, ___threshold_7)); }
	inline float get_threshold_7() const { return ___threshold_7; }
	inline float* get_address_of_threshold_7() { return &___threshold_7; }
	inline void set_threshold_7(float value)
	{
		___threshold_7 = value;
	}

	inline static int32_t get_offset_of_decayCoefficient_8() { return static_cast<int32_t>(offsetof(Separation_tB627F4D516766D919037B2256412BE43C0539007, ___decayCoefficient_8)); }
	inline float get_decayCoefficient_8() const { return ___decayCoefficient_8; }
	inline float* get_address_of_decayCoefficient_8() { return &___decayCoefficient_8; }
	inline void set_decayCoefficient_8(float value)
	{
		___decayCoefficient_8 = value;
	}

	inline static int32_t get_offset_of_expDecay_9() { return static_cast<int32_t>(offsetof(Separation_tB627F4D516766D919037B2256412BE43C0539007, ___expDecay_9)); }
	inline bool get_expDecay_9() const { return ___expDecay_9; }
	inline bool* get_address_of_expDecay_9() { return &___expDecay_9; }
	inline void set_expDecay_9(bool value)
	{
		___expDecay_9 = value;
	}

	inline static int32_t get_offset_of_expMax_10() { return static_cast<int32_t>(offsetof(Separation_tB627F4D516766D919037B2256412BE43C0539007, ___expMax_10)); }
	inline float get_expMax_10() const { return ___expMax_10; }
	inline float* get_address_of_expMax_10() { return &___expMax_10; }
	inline void set_expMax_10(float value)
	{
		___expMax_10 = value;
	}

	inline static int32_t get_offset_of_expScale_11() { return static_cast<int32_t>(offsetof(Separation_tB627F4D516766D919037B2256412BE43C0539007, ___expScale_11)); }
	inline float get_expScale_11() const { return ___expScale_11; }
	inline float* get_address_of_expScale_11() { return &___expScale_11; }
	inline void set_expScale_11(float value)
	{
		___expScale_11 = value;
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


// SpeedMatch
struct SpeedMatch_tBE04550772E96FFF0DB8C832949CEC09A9346294  : public SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1
{
public:
	// Kinematic SpeedMatch::character
	Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * ___character_1;
	// System.Single SpeedMatch::targetSpeed
	float ___targetSpeed_2;
	// System.Single SpeedMatch::maxDiff
	float ___maxDiff_3;
	// System.Single SpeedMatch::maxAccel
	float ___maxAccel_4;

public:
	inline static int32_t get_offset_of_character_1() { return static_cast<int32_t>(offsetof(SpeedMatch_tBE04550772E96FFF0DB8C832949CEC09A9346294, ___character_1)); }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * get_character_1() const { return ___character_1; }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 ** get_address_of_character_1() { return &___character_1; }
	inline void set_character_1(Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * value)
	{
		___character_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_1), (void*)value);
	}

	inline static int32_t get_offset_of_targetSpeed_2() { return static_cast<int32_t>(offsetof(SpeedMatch_tBE04550772E96FFF0DB8C832949CEC09A9346294, ___targetSpeed_2)); }
	inline float get_targetSpeed_2() const { return ___targetSpeed_2; }
	inline float* get_address_of_targetSpeed_2() { return &___targetSpeed_2; }
	inline void set_targetSpeed_2(float value)
	{
		___targetSpeed_2 = value;
	}

	inline static int32_t get_offset_of_maxDiff_3() { return static_cast<int32_t>(offsetof(SpeedMatch_tBE04550772E96FFF0DB8C832949CEC09A9346294, ___maxDiff_3)); }
	inline float get_maxDiff_3() const { return ___maxDiff_3; }
	inline float* get_address_of_maxDiff_3() { return &___maxDiff_3; }
	inline void set_maxDiff_3(float value)
	{
		___maxDiff_3 = value;
	}

	inline static int32_t get_offset_of_maxAccel_4() { return static_cast<int32_t>(offsetof(SpeedMatch_tBE04550772E96FFF0DB8C832949CEC09A9346294, ___maxAccel_4)); }
	inline float get_maxAccel_4() const { return ___maxAccel_4; }
	inline float* get_address_of_maxAccel_4() { return &___maxAccel_4; }
	inline void set_maxAccel_4(float value)
	{
		___maxAccel_4 = value;
	}
};


// UserControlled
struct UserControlled_tBFDF8B501E956DB77DCFE541D286ACC17815E95E  : public SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1
{
public:
	// Kinematic UserControlled::character
	Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * ___character_1;
	// System.Single UserControlled::maxAcceleration
	float ___maxAcceleration_2;
	// System.Single UserControlled::frictionPercent
	float ___frictionPercent_3;

public:
	inline static int32_t get_offset_of_character_1() { return static_cast<int32_t>(offsetof(UserControlled_tBFDF8B501E956DB77DCFE541D286ACC17815E95E, ___character_1)); }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * get_character_1() const { return ___character_1; }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 ** get_address_of_character_1() { return &___character_1; }
	inline void set_character_1(Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * value)
	{
		___character_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_1), (void*)value);
	}

	inline static int32_t get_offset_of_maxAcceleration_2() { return static_cast<int32_t>(offsetof(UserControlled_tBFDF8B501E956DB77DCFE541D286ACC17815E95E, ___maxAcceleration_2)); }
	inline float get_maxAcceleration_2() const { return ___maxAcceleration_2; }
	inline float* get_address_of_maxAcceleration_2() { return &___maxAcceleration_2; }
	inline void set_maxAcceleration_2(float value)
	{
		___maxAcceleration_2 = value;
	}

	inline static int32_t get_offset_of_frictionPercent_3() { return static_cast<int32_t>(offsetof(UserControlled_tBFDF8B501E956DB77DCFE541D286ACC17815E95E, ___frictionPercent_3)); }
	inline float get_frictionPercent_3() const { return ___frictionPercent_3; }
	inline float* get_address_of_frictionPercent_3() { return &___frictionPercent_3; }
	inline void set_frictionPercent_3(float value)
	{
		___frictionPercent_3 = value;
	}
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


// VelocityAlign
struct VelocityAlign_tDDB9C6C2E3164B7761196EF435164BFF365B9509  : public SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1
{
public:
	// Kinematic VelocityAlign::character
	Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * ___character_1;
	// Kinematic VelocityAlign::target
	Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * ___target_2;
	// System.Single VelocityAlign::maxVelDiff
	float ___maxVelDiff_3;
	// System.Single VelocityAlign::maxAccel
	float ___maxAccel_4;

public:
	inline static int32_t get_offset_of_character_1() { return static_cast<int32_t>(offsetof(VelocityAlign_tDDB9C6C2E3164B7761196EF435164BFF365B9509, ___character_1)); }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * get_character_1() const { return ___character_1; }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 ** get_address_of_character_1() { return &___character_1; }
	inline void set_character_1(Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * value)
	{
		___character_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_1), (void*)value);
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(VelocityAlign_tDDB9C6C2E3164B7761196EF435164BFF365B9509, ___target_2)); }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * get_target_2() const { return ___target_2; }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_2), (void*)value);
	}

	inline static int32_t get_offset_of_maxVelDiff_3() { return static_cast<int32_t>(offsetof(VelocityAlign_tDDB9C6C2E3164B7761196EF435164BFF365B9509, ___maxVelDiff_3)); }
	inline float get_maxVelDiff_3() const { return ___maxVelDiff_3; }
	inline float* get_address_of_maxVelDiff_3() { return &___maxVelDiff_3; }
	inline void set_maxVelDiff_3(float value)
	{
		___maxVelDiff_3 = value;
	}

	inline static int32_t get_offset_of_maxAccel_4() { return static_cast<int32_t>(offsetof(VelocityAlign_tDDB9C6C2E3164B7761196EF435164BFF365B9509, ___maxAccel_4)); }
	inline float get_maxAccel_4() const { return ___maxAccel_4; }
	inline float* get_address_of_maxAccel_4() { return &___maxAccel_4; }
	inline void set_maxAccel_4(float value)
	{
		___maxAccel_4 = value;
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


// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_LegacyContacts_6;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Impulse_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_RelativeVelocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Body_2() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Body_2)); }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * get_m_Body_2() const { return ___m_Body_2; }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 ** get_address_of_m_Body_2() { return &___m_Body_2; }
	inline void set_m_Body_2(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * value)
	{
		___m_Body_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Body_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Collider_3)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContactCount_4() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ContactCount_4)); }
	inline int32_t get_m_ContactCount_4() const { return ___m_ContactCount_4; }
	inline int32_t* get_address_of_m_ContactCount_4() { return &___m_ContactCount_4; }
	inline void set_m_ContactCount_4(int32_t value)
	{
		___m_ContactCount_4 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_5() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ReusedContacts_5)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_ReusedContacts_5() const { return ___m_ReusedContacts_5; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_ReusedContacts_5() { return &___m_ReusedContacts_5; }
	inline void set_m_ReusedContacts_5(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_ReusedContacts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_6() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_LegacyContacts_6)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_LegacyContacts_6() const { return ___m_LegacyContacts_6; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_LegacyContacts_6() { return &___m_LegacyContacts_6; }
	inline void set_m_LegacyContacts_6(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_LegacyContacts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
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

// Face
struct Face_tAB806D390A7B7F99E145FAF9420C74E544D5AE50  : public Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23
{
public:

public:
};


// Flocking
struct Flocking_t43CEE98336DA04A3F685A25FC909ACB560366EFE  : public BlendedBehavior_t2AF211BE7DEE0EF54A7A3F64CB4976DFD8B7F330
{
public:
	// Kinematic Flocking::character
	Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * ___character_4;
	// System.Collections.Generic.List`1<Kinematic> Flocking::flock
	List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * ___flock_5;
	// FlockCOM Flocking::centerOfMass
	FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 * ___centerOfMass_6;
	// System.Single Flocking::targetSpeed
	float ___targetSpeed_7;
	// System.Single Flocking::sepThreshold
	float ___sepThreshold_8;
	// System.Single Flocking::sepWeight
	float ___sepWeight_9;
	// System.Single Flocking::alignWeight
	float ___alignWeight_10;
	// System.Single Flocking::matchWeight
	float ___matchWeight_11;
	// System.Single Flocking::cohesionWeight
	float ___cohesionWeight_12;

public:
	inline static int32_t get_offset_of_character_4() { return static_cast<int32_t>(offsetof(Flocking_t43CEE98336DA04A3F685A25FC909ACB560366EFE, ___character_4)); }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * get_character_4() const { return ___character_4; }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 ** get_address_of_character_4() { return &___character_4; }
	inline void set_character_4(Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * value)
	{
		___character_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_4), (void*)value);
	}

	inline static int32_t get_offset_of_flock_5() { return static_cast<int32_t>(offsetof(Flocking_t43CEE98336DA04A3F685A25FC909ACB560366EFE, ___flock_5)); }
	inline List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * get_flock_5() const { return ___flock_5; }
	inline List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 ** get_address_of_flock_5() { return &___flock_5; }
	inline void set_flock_5(List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * value)
	{
		___flock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___flock_5), (void*)value);
	}

	inline static int32_t get_offset_of_centerOfMass_6() { return static_cast<int32_t>(offsetof(Flocking_t43CEE98336DA04A3F685A25FC909ACB560366EFE, ___centerOfMass_6)); }
	inline FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 * get_centerOfMass_6() const { return ___centerOfMass_6; }
	inline FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 ** get_address_of_centerOfMass_6() { return &___centerOfMass_6; }
	inline void set_centerOfMass_6(FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 * value)
	{
		___centerOfMass_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___centerOfMass_6), (void*)value);
	}

	inline static int32_t get_offset_of_targetSpeed_7() { return static_cast<int32_t>(offsetof(Flocking_t43CEE98336DA04A3F685A25FC909ACB560366EFE, ___targetSpeed_7)); }
	inline float get_targetSpeed_7() const { return ___targetSpeed_7; }
	inline float* get_address_of_targetSpeed_7() { return &___targetSpeed_7; }
	inline void set_targetSpeed_7(float value)
	{
		___targetSpeed_7 = value;
	}

	inline static int32_t get_offset_of_sepThreshold_8() { return static_cast<int32_t>(offsetof(Flocking_t43CEE98336DA04A3F685A25FC909ACB560366EFE, ___sepThreshold_8)); }
	inline float get_sepThreshold_8() const { return ___sepThreshold_8; }
	inline float* get_address_of_sepThreshold_8() { return &___sepThreshold_8; }
	inline void set_sepThreshold_8(float value)
	{
		___sepThreshold_8 = value;
	}

	inline static int32_t get_offset_of_sepWeight_9() { return static_cast<int32_t>(offsetof(Flocking_t43CEE98336DA04A3F685A25FC909ACB560366EFE, ___sepWeight_9)); }
	inline float get_sepWeight_9() const { return ___sepWeight_9; }
	inline float* get_address_of_sepWeight_9() { return &___sepWeight_9; }
	inline void set_sepWeight_9(float value)
	{
		___sepWeight_9 = value;
	}

	inline static int32_t get_offset_of_alignWeight_10() { return static_cast<int32_t>(offsetof(Flocking_t43CEE98336DA04A3F685A25FC909ACB560366EFE, ___alignWeight_10)); }
	inline float get_alignWeight_10() const { return ___alignWeight_10; }
	inline float* get_address_of_alignWeight_10() { return &___alignWeight_10; }
	inline void set_alignWeight_10(float value)
	{
		___alignWeight_10 = value;
	}

	inline static int32_t get_offset_of_matchWeight_11() { return static_cast<int32_t>(offsetof(Flocking_t43CEE98336DA04A3F685A25FC909ACB560366EFE, ___matchWeight_11)); }
	inline float get_matchWeight_11() const { return ___matchWeight_11; }
	inline float* get_address_of_matchWeight_11() { return &___matchWeight_11; }
	inline void set_matchWeight_11(float value)
	{
		___matchWeight_11 = value;
	}

	inline static int32_t get_offset_of_cohesionWeight_12() { return static_cast<int32_t>(offsetof(Flocking_t43CEE98336DA04A3F685A25FC909ACB560366EFE, ___cohesionWeight_12)); }
	inline float get_cohesionWeight_12() const { return ___cohesionWeight_12; }
	inline float* get_address_of_cohesionWeight_12() { return &___cohesionWeight_12; }
	inline void set_cohesionWeight_12(float value)
	{
		___cohesionWeight_12 = value;
	}
};


// FollowPath
struct FollowPath_t9F2D06DD7295A8D1D97B5B6593FD432730E16A58  : public Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF
{
public:
	// System.Single FollowPath::pathOffset
	float ___pathOffset_5;
	// System.Boolean FollowPath::predictive
	bool ___predictive_6;
	// Path FollowPath::path
	Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862 * ___path_7;
	// System.Single FollowPath::predictionTime
	float ___predictionTime_8;
	// System.Single FollowPath::currentParam
	float ___currentParam_9;

public:
	inline static int32_t get_offset_of_pathOffset_5() { return static_cast<int32_t>(offsetof(FollowPath_t9F2D06DD7295A8D1D97B5B6593FD432730E16A58, ___pathOffset_5)); }
	inline float get_pathOffset_5() const { return ___pathOffset_5; }
	inline float* get_address_of_pathOffset_5() { return &___pathOffset_5; }
	inline void set_pathOffset_5(float value)
	{
		___pathOffset_5 = value;
	}

	inline static int32_t get_offset_of_predictive_6() { return static_cast<int32_t>(offsetof(FollowPath_t9F2D06DD7295A8D1D97B5B6593FD432730E16A58, ___predictive_6)); }
	inline bool get_predictive_6() const { return ___predictive_6; }
	inline bool* get_address_of_predictive_6() { return &___predictive_6; }
	inline void set_predictive_6(bool value)
	{
		___predictive_6 = value;
	}

	inline static int32_t get_offset_of_path_7() { return static_cast<int32_t>(offsetof(FollowPath_t9F2D06DD7295A8D1D97B5B6593FD432730E16A58, ___path_7)); }
	inline Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862 * get_path_7() const { return ___path_7; }
	inline Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862 ** get_address_of_path_7() { return &___path_7; }
	inline void set_path_7(Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862 * value)
	{
		___path_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_7), (void*)value);
	}

	inline static int32_t get_offset_of_predictionTime_8() { return static_cast<int32_t>(offsetof(FollowPath_t9F2D06DD7295A8D1D97B5B6593FD432730E16A58, ___predictionTime_8)); }
	inline float get_predictionTime_8() const { return ___predictionTime_8; }
	inline float* get_address_of_predictionTime_8() { return &___predictionTime_8; }
	inline void set_predictionTime_8(float value)
	{
		___predictionTime_8 = value;
	}

	inline static int32_t get_offset_of_currentParam_9() { return static_cast<int32_t>(offsetof(FollowPath_t9F2D06DD7295A8D1D97B5B6593FD432730E16A58, ___currentParam_9)); }
	inline float get_currentParam_9() const { return ___currentParam_9; }
	inline float* get_address_of_currentParam_9() { return &___currentParam_9; }
	inline void set_currentParam_9(float value)
	{
		___currentParam_9 = value;
	}
};


// GeneralAvoidance
struct GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54  : public BlendedBehavior_t2AF211BE7DEE0EF54A7A3F64CB4976DFD8B7F330
{
public:
	// Kinematic GeneralAvoidance::character
	Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * ___character_4;
	// System.Collections.Generic.List`1<Kinematic> GeneralAvoidance::flock
	List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * ___flock_5;
	// System.Single GeneralAvoidance::radius
	float ___radius_6;
	// System.Single GeneralAvoidance::avoidDist
	float ___avoidDist_7;
	// System.Single GeneralAvoidance::lookAhead
	float ___lookAhead_8;
	// System.Collections.Generic.List`1<System.String> GeneralAvoidance::ignoredTags
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___ignoredTags_9;
	// System.Boolean GeneralAvoidance::debug
	bool ___debug_10;
	// UnityEngine.LineRenderer GeneralAvoidance::lr
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___lr_11;
	// UnityEngine.Material GeneralAvoidance::hitMat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___hitMat_12;
	// UnityEngine.Material GeneralAvoidance::missMat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___missMat_13;
	// System.Int32 GeneralAvoidance::numRays
	int32_t ___numRays_14;
	// System.Single GeneralAvoidance::rayAngle
	float ___rayAngle_15;
	// System.Int32 GeneralAvoidance::iterationCount
	int32_t ___iterationCount_16;
	// System.Single GeneralAvoidance::avoidWeight
	float ___avoidWeight_17;
	// System.Single GeneralAvoidance::dodgeWeight
	float ___dodgeWeight_18;

public:
	inline static int32_t get_offset_of_character_4() { return static_cast<int32_t>(offsetof(GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54, ___character_4)); }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * get_character_4() const { return ___character_4; }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 ** get_address_of_character_4() { return &___character_4; }
	inline void set_character_4(Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * value)
	{
		___character_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_4), (void*)value);
	}

	inline static int32_t get_offset_of_flock_5() { return static_cast<int32_t>(offsetof(GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54, ___flock_5)); }
	inline List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * get_flock_5() const { return ___flock_5; }
	inline List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 ** get_address_of_flock_5() { return &___flock_5; }
	inline void set_flock_5(List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * value)
	{
		___flock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___flock_5), (void*)value);
	}

	inline static int32_t get_offset_of_radius_6() { return static_cast<int32_t>(offsetof(GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54, ___radius_6)); }
	inline float get_radius_6() const { return ___radius_6; }
	inline float* get_address_of_radius_6() { return &___radius_6; }
	inline void set_radius_6(float value)
	{
		___radius_6 = value;
	}

	inline static int32_t get_offset_of_avoidDist_7() { return static_cast<int32_t>(offsetof(GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54, ___avoidDist_7)); }
	inline float get_avoidDist_7() const { return ___avoidDist_7; }
	inline float* get_address_of_avoidDist_7() { return &___avoidDist_7; }
	inline void set_avoidDist_7(float value)
	{
		___avoidDist_7 = value;
	}

	inline static int32_t get_offset_of_lookAhead_8() { return static_cast<int32_t>(offsetof(GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54, ___lookAhead_8)); }
	inline float get_lookAhead_8() const { return ___lookAhead_8; }
	inline float* get_address_of_lookAhead_8() { return &___lookAhead_8; }
	inline void set_lookAhead_8(float value)
	{
		___lookAhead_8 = value;
	}

	inline static int32_t get_offset_of_ignoredTags_9() { return static_cast<int32_t>(offsetof(GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54, ___ignoredTags_9)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_ignoredTags_9() const { return ___ignoredTags_9; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_ignoredTags_9() { return &___ignoredTags_9; }
	inline void set_ignoredTags_9(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___ignoredTags_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ignoredTags_9), (void*)value);
	}

	inline static int32_t get_offset_of_debug_10() { return static_cast<int32_t>(offsetof(GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54, ___debug_10)); }
	inline bool get_debug_10() const { return ___debug_10; }
	inline bool* get_address_of_debug_10() { return &___debug_10; }
	inline void set_debug_10(bool value)
	{
		___debug_10 = value;
	}

	inline static int32_t get_offset_of_lr_11() { return static_cast<int32_t>(offsetof(GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54, ___lr_11)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_lr_11() const { return ___lr_11; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_lr_11() { return &___lr_11; }
	inline void set_lr_11(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___lr_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lr_11), (void*)value);
	}

	inline static int32_t get_offset_of_hitMat_12() { return static_cast<int32_t>(offsetof(GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54, ___hitMat_12)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_hitMat_12() const { return ___hitMat_12; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_hitMat_12() { return &___hitMat_12; }
	inline void set_hitMat_12(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___hitMat_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hitMat_12), (void*)value);
	}

	inline static int32_t get_offset_of_missMat_13() { return static_cast<int32_t>(offsetof(GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54, ___missMat_13)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_missMat_13() const { return ___missMat_13; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_missMat_13() { return &___missMat_13; }
	inline void set_missMat_13(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___missMat_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___missMat_13), (void*)value);
	}

	inline static int32_t get_offset_of_numRays_14() { return static_cast<int32_t>(offsetof(GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54, ___numRays_14)); }
	inline int32_t get_numRays_14() const { return ___numRays_14; }
	inline int32_t* get_address_of_numRays_14() { return &___numRays_14; }
	inline void set_numRays_14(int32_t value)
	{
		___numRays_14 = value;
	}

	inline static int32_t get_offset_of_rayAngle_15() { return static_cast<int32_t>(offsetof(GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54, ___rayAngle_15)); }
	inline float get_rayAngle_15() const { return ___rayAngle_15; }
	inline float* get_address_of_rayAngle_15() { return &___rayAngle_15; }
	inline void set_rayAngle_15(float value)
	{
		___rayAngle_15 = value;
	}

	inline static int32_t get_offset_of_iterationCount_16() { return static_cast<int32_t>(offsetof(GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54, ___iterationCount_16)); }
	inline int32_t get_iterationCount_16() const { return ___iterationCount_16; }
	inline int32_t* get_address_of_iterationCount_16() { return &___iterationCount_16; }
	inline void set_iterationCount_16(int32_t value)
	{
		___iterationCount_16 = value;
	}

	inline static int32_t get_offset_of_avoidWeight_17() { return static_cast<int32_t>(offsetof(GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54, ___avoidWeight_17)); }
	inline float get_avoidWeight_17() const { return ___avoidWeight_17; }
	inline float* get_address_of_avoidWeight_17() { return &___avoidWeight_17; }
	inline void set_avoidWeight_17(float value)
	{
		___avoidWeight_17 = value;
	}

	inline static int32_t get_offset_of_dodgeWeight_18() { return static_cast<int32_t>(offsetof(GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54, ___dodgeWeight_18)); }
	inline float get_dodgeWeight_18() const { return ___dodgeWeight_18; }
	inline float* get_address_of_dodgeWeight_18() { return &___dodgeWeight_18; }
	inline void set_dodgeWeight_18(float value)
	{
		___dodgeWeight_18 = value;
	}
};


// Impact
struct Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8  : public RuntimeObject
{
public:
	// UnityEngine.GameObject Impact::gameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject_0;
	// UnityEngine.Vector3 Impact::impactPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___impactPoint_1;
	// UnityEngine.Vector3 Impact::impactNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___impactNormal_2;
	// System.Boolean Impact::bounce
	bool ___bounce_3;
	// UnityEngine.Vector3 Impact::bounceVec
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bounceVec_4;

public:
	inline static int32_t get_offset_of_gameObject_0() { return static_cast<int32_t>(offsetof(Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8, ___gameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameObject_0() const { return ___gameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameObject_0() { return &___gameObject_0; }
	inline void set_gameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_impactPoint_1() { return static_cast<int32_t>(offsetof(Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8, ___impactPoint_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_impactPoint_1() const { return ___impactPoint_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_impactPoint_1() { return &___impactPoint_1; }
	inline void set_impactPoint_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___impactPoint_1 = value;
	}

	inline static int32_t get_offset_of_impactNormal_2() { return static_cast<int32_t>(offsetof(Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8, ___impactNormal_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_impactNormal_2() const { return ___impactNormal_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_impactNormal_2() { return &___impactNormal_2; }
	inline void set_impactNormal_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___impactNormal_2 = value;
	}

	inline static int32_t get_offset_of_bounce_3() { return static_cast<int32_t>(offsetof(Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8, ___bounce_3)); }
	inline bool get_bounce_3() const { return ___bounce_3; }
	inline bool* get_address_of_bounce_3() { return &___bounce_3; }
	inline void set_bounce_3(bool value)
	{
		___bounce_3 = value;
	}

	inline static int32_t get_offset_of_bounceVec_4() { return static_cast<int32_t>(offsetof(Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8, ___bounceVec_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_bounceVec_4() const { return ___bounceVec_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_bounceVec_4() { return &___bounceVec_4; }
	inline void set_bounceVec_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___bounceVec_4 = value;
	}
};


// LookWhereGoing
struct LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0  : public Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23
{
public:

public:
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

// ObstacleAvoidance
struct ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C  : public Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF
{
public:
	// System.Single ObstacleAvoidance::avoidDist
	float ___avoidDist_5;
	// System.Single ObstacleAvoidance::lookAhead
	float ___lookAhead_6;
	// System.Boolean ObstacleAvoidance::debug
	bool ___debug_7;
	// UnityEngine.LineRenderer ObstacleAvoidance::lr
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___lr_8;
	// UnityEngine.Material ObstacleAvoidance::hitMat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___hitMat_9;
	// UnityEngine.Material ObstacleAvoidance::missMat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___missMat_10;
	// System.Collections.Generic.List`1<System.String> ObstacleAvoidance::ignoredTags
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___ignoredTags_11;
	// System.Int32 ObstacleAvoidance::numRays
	int32_t ___numRays_12;
	// System.Single ObstacleAvoidance::rayAngle
	float ___rayAngle_13;
	// System.Int32 ObstacleAvoidance::currentRay
	int32_t ___currentRay_14;

public:
	inline static int32_t get_offset_of_avoidDist_5() { return static_cast<int32_t>(offsetof(ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C, ___avoidDist_5)); }
	inline float get_avoidDist_5() const { return ___avoidDist_5; }
	inline float* get_address_of_avoidDist_5() { return &___avoidDist_5; }
	inline void set_avoidDist_5(float value)
	{
		___avoidDist_5 = value;
	}

	inline static int32_t get_offset_of_lookAhead_6() { return static_cast<int32_t>(offsetof(ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C, ___lookAhead_6)); }
	inline float get_lookAhead_6() const { return ___lookAhead_6; }
	inline float* get_address_of_lookAhead_6() { return &___lookAhead_6; }
	inline void set_lookAhead_6(float value)
	{
		___lookAhead_6 = value;
	}

	inline static int32_t get_offset_of_debug_7() { return static_cast<int32_t>(offsetof(ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C, ___debug_7)); }
	inline bool get_debug_7() const { return ___debug_7; }
	inline bool* get_address_of_debug_7() { return &___debug_7; }
	inline void set_debug_7(bool value)
	{
		___debug_7 = value;
	}

	inline static int32_t get_offset_of_lr_8() { return static_cast<int32_t>(offsetof(ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C, ___lr_8)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_lr_8() const { return ___lr_8; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_lr_8() { return &___lr_8; }
	inline void set_lr_8(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___lr_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lr_8), (void*)value);
	}

	inline static int32_t get_offset_of_hitMat_9() { return static_cast<int32_t>(offsetof(ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C, ___hitMat_9)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_hitMat_9() const { return ___hitMat_9; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_hitMat_9() { return &___hitMat_9; }
	inline void set_hitMat_9(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___hitMat_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hitMat_9), (void*)value);
	}

	inline static int32_t get_offset_of_missMat_10() { return static_cast<int32_t>(offsetof(ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C, ___missMat_10)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_missMat_10() const { return ___missMat_10; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_missMat_10() { return &___missMat_10; }
	inline void set_missMat_10(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___missMat_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___missMat_10), (void*)value);
	}

	inline static int32_t get_offset_of_ignoredTags_11() { return static_cast<int32_t>(offsetof(ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C, ___ignoredTags_11)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_ignoredTags_11() const { return ___ignoredTags_11; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_ignoredTags_11() { return &___ignoredTags_11; }
	inline void set_ignoredTags_11(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___ignoredTags_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ignoredTags_11), (void*)value);
	}

	inline static int32_t get_offset_of_numRays_12() { return static_cast<int32_t>(offsetof(ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C, ___numRays_12)); }
	inline int32_t get_numRays_12() const { return ___numRays_12; }
	inline int32_t* get_address_of_numRays_12() { return &___numRays_12; }
	inline void set_numRays_12(int32_t value)
	{
		___numRays_12 = value;
	}

	inline static int32_t get_offset_of_rayAngle_13() { return static_cast<int32_t>(offsetof(ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C, ___rayAngle_13)); }
	inline float get_rayAngle_13() const { return ___rayAngle_13; }
	inline float* get_address_of_rayAngle_13() { return &___rayAngle_13; }
	inline void set_rayAngle_13(float value)
	{
		___rayAngle_13 = value;
	}

	inline static int32_t get_offset_of_currentRay_14() { return static_cast<int32_t>(offsetof(ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C, ___currentRay_14)); }
	inline int32_t get_currentRay_14() const { return ___currentRay_14; }
	inline int32_t* get_address_of_currentRay_14() { return &___currentRay_14; }
	inline void set_currentRay_14(int32_t value)
	{
		___currentRay_14 = value;
	}
};


// PrioritizedFlocking
struct PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411  : public Prioritization_t95C41DC54D60DBB2449E0BE4B1C36FD155E5D363
{
public:
	// Kinematic PrioritizedFlocking::character
	Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * ___character_6;
	// System.Collections.Generic.List`1<Kinematic> PrioritizedFlocking::flock
	List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * ___flock_7;
	// FlockCOM PrioritizedFlocking::centerOfMass
	FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 * ___centerOfMass_8;
	// System.Single PrioritizedFlocking::targetSpeed
	float ___targetSpeed_9;
	// System.Single PrioritizedFlocking::radius
	float ___radius_10;
	// System.Single PrioritizedFlocking::sepThreshold
	float ___sepThreshold_11;
	// System.Single PrioritizedFlocking::avoidDist
	float ___avoidDist_12;
	// System.Single PrioritizedFlocking::lookAhead
	float ___lookAhead_13;
	// System.Collections.Generic.List`1<System.String> PrioritizedFlocking::ignoredTags
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___ignoredTags_14;
	// System.Boolean PrioritizedFlocking::debug
	bool ___debug_15;
	// UnityEngine.LineRenderer PrioritizedFlocking::lr
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___lr_16;
	// UnityEngine.Material PrioritizedFlocking::hitMat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___hitMat_17;
	// UnityEngine.Material PrioritizedFlocking::missMat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___missMat_18;
	// System.Int32 PrioritizedFlocking::numRays
	int32_t ___numRays_19;
	// System.Single PrioritizedFlocking::rayAngle
	float ___rayAngle_20;
	// System.Int32 PrioritizedFlocking::iterationCount
	int32_t ___iterationCount_21;
	// System.Single PrioritizedFlocking::sepWeight
	float ___sepWeight_22;
	// System.Single PrioritizedFlocking::alignWeight
	float ___alignWeight_23;
	// System.Single PrioritizedFlocking::matchWeight
	float ___matchWeight_24;
	// System.Single PrioritizedFlocking::cohesionWeight
	float ___cohesionWeight_25;
	// System.Single PrioritizedFlocking::avoidWeight
	float ___avoidWeight_26;
	// System.Single PrioritizedFlocking::dodgeWeight
	float ___dodgeWeight_27;

public:
	inline static int32_t get_offset_of_character_6() { return static_cast<int32_t>(offsetof(PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411, ___character_6)); }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * get_character_6() const { return ___character_6; }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 ** get_address_of_character_6() { return &___character_6; }
	inline void set_character_6(Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * value)
	{
		___character_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_6), (void*)value);
	}

	inline static int32_t get_offset_of_flock_7() { return static_cast<int32_t>(offsetof(PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411, ___flock_7)); }
	inline List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * get_flock_7() const { return ___flock_7; }
	inline List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 ** get_address_of_flock_7() { return &___flock_7; }
	inline void set_flock_7(List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * value)
	{
		___flock_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___flock_7), (void*)value);
	}

	inline static int32_t get_offset_of_centerOfMass_8() { return static_cast<int32_t>(offsetof(PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411, ___centerOfMass_8)); }
	inline FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 * get_centerOfMass_8() const { return ___centerOfMass_8; }
	inline FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 ** get_address_of_centerOfMass_8() { return &___centerOfMass_8; }
	inline void set_centerOfMass_8(FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 * value)
	{
		___centerOfMass_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___centerOfMass_8), (void*)value);
	}

	inline static int32_t get_offset_of_targetSpeed_9() { return static_cast<int32_t>(offsetof(PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411, ___targetSpeed_9)); }
	inline float get_targetSpeed_9() const { return ___targetSpeed_9; }
	inline float* get_address_of_targetSpeed_9() { return &___targetSpeed_9; }
	inline void set_targetSpeed_9(float value)
	{
		___targetSpeed_9 = value;
	}

	inline static int32_t get_offset_of_radius_10() { return static_cast<int32_t>(offsetof(PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411, ___radius_10)); }
	inline float get_radius_10() const { return ___radius_10; }
	inline float* get_address_of_radius_10() { return &___radius_10; }
	inline void set_radius_10(float value)
	{
		___radius_10 = value;
	}

	inline static int32_t get_offset_of_sepThreshold_11() { return static_cast<int32_t>(offsetof(PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411, ___sepThreshold_11)); }
	inline float get_sepThreshold_11() const { return ___sepThreshold_11; }
	inline float* get_address_of_sepThreshold_11() { return &___sepThreshold_11; }
	inline void set_sepThreshold_11(float value)
	{
		___sepThreshold_11 = value;
	}

	inline static int32_t get_offset_of_avoidDist_12() { return static_cast<int32_t>(offsetof(PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411, ___avoidDist_12)); }
	inline float get_avoidDist_12() const { return ___avoidDist_12; }
	inline float* get_address_of_avoidDist_12() { return &___avoidDist_12; }
	inline void set_avoidDist_12(float value)
	{
		___avoidDist_12 = value;
	}

	inline static int32_t get_offset_of_lookAhead_13() { return static_cast<int32_t>(offsetof(PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411, ___lookAhead_13)); }
	inline float get_lookAhead_13() const { return ___lookAhead_13; }
	inline float* get_address_of_lookAhead_13() { return &___lookAhead_13; }
	inline void set_lookAhead_13(float value)
	{
		___lookAhead_13 = value;
	}

	inline static int32_t get_offset_of_ignoredTags_14() { return static_cast<int32_t>(offsetof(PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411, ___ignoredTags_14)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_ignoredTags_14() const { return ___ignoredTags_14; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_ignoredTags_14() { return &___ignoredTags_14; }
	inline void set_ignoredTags_14(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___ignoredTags_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ignoredTags_14), (void*)value);
	}

	inline static int32_t get_offset_of_debug_15() { return static_cast<int32_t>(offsetof(PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411, ___debug_15)); }
	inline bool get_debug_15() const { return ___debug_15; }
	inline bool* get_address_of_debug_15() { return &___debug_15; }
	inline void set_debug_15(bool value)
	{
		___debug_15 = value;
	}

	inline static int32_t get_offset_of_lr_16() { return static_cast<int32_t>(offsetof(PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411, ___lr_16)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_lr_16() const { return ___lr_16; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_lr_16() { return &___lr_16; }
	inline void set_lr_16(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___lr_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lr_16), (void*)value);
	}

	inline static int32_t get_offset_of_hitMat_17() { return static_cast<int32_t>(offsetof(PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411, ___hitMat_17)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_hitMat_17() const { return ___hitMat_17; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_hitMat_17() { return &___hitMat_17; }
	inline void set_hitMat_17(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___hitMat_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hitMat_17), (void*)value);
	}

	inline static int32_t get_offset_of_missMat_18() { return static_cast<int32_t>(offsetof(PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411, ___missMat_18)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_missMat_18() const { return ___missMat_18; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_missMat_18() { return &___missMat_18; }
	inline void set_missMat_18(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___missMat_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___missMat_18), (void*)value);
	}

	inline static int32_t get_offset_of_numRays_19() { return static_cast<int32_t>(offsetof(PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411, ___numRays_19)); }
	inline int32_t get_numRays_19() const { return ___numRays_19; }
	inline int32_t* get_address_of_numRays_19() { return &___numRays_19; }
	inline void set_numRays_19(int32_t value)
	{
		___numRays_19 = value;
	}

	inline static int32_t get_offset_of_rayAngle_20() { return static_cast<int32_t>(offsetof(PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411, ___rayAngle_20)); }
	inline float get_rayAngle_20() const { return ___rayAngle_20; }
	inline float* get_address_of_rayAngle_20() { return &___rayAngle_20; }
	inline void set_rayAngle_20(float value)
	{
		___rayAngle_20 = value;
	}

	inline static int32_t get_offset_of_iterationCount_21() { return static_cast<int32_t>(offsetof(PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411, ___iterationCount_21)); }
	inline int32_t get_iterationCount_21() const { return ___iterationCount_21; }
	inline int32_t* get_address_of_iterationCount_21() { return &___iterationCount_21; }
	inline void set_iterationCount_21(int32_t value)
	{
		___iterationCount_21 = value;
	}

	inline static int32_t get_offset_of_sepWeight_22() { return static_cast<int32_t>(offsetof(PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411, ___sepWeight_22)); }
	inline float get_sepWeight_22() const { return ___sepWeight_22; }
	inline float* get_address_of_sepWeight_22() { return &___sepWeight_22; }
	inline void set_sepWeight_22(float value)
	{
		___sepWeight_22 = value;
	}

	inline static int32_t get_offset_of_alignWeight_23() { return static_cast<int32_t>(offsetof(PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411, ___alignWeight_23)); }
	inline float get_alignWeight_23() const { return ___alignWeight_23; }
	inline float* get_address_of_alignWeight_23() { return &___alignWeight_23; }
	inline void set_alignWeight_23(float value)
	{
		___alignWeight_23 = value;
	}

	inline static int32_t get_offset_of_matchWeight_24() { return static_cast<int32_t>(offsetof(PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411, ___matchWeight_24)); }
	inline float get_matchWeight_24() const { return ___matchWeight_24; }
	inline float* get_address_of_matchWeight_24() { return &___matchWeight_24; }
	inline void set_matchWeight_24(float value)
	{
		___matchWeight_24 = value;
	}

	inline static int32_t get_offset_of_cohesionWeight_25() { return static_cast<int32_t>(offsetof(PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411, ___cohesionWeight_25)); }
	inline float get_cohesionWeight_25() const { return ___cohesionWeight_25; }
	inline float* get_address_of_cohesionWeight_25() { return &___cohesionWeight_25; }
	inline void set_cohesionWeight_25(float value)
	{
		___cohesionWeight_25 = value;
	}

	inline static int32_t get_offset_of_avoidWeight_26() { return static_cast<int32_t>(offsetof(PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411, ___avoidWeight_26)); }
	inline float get_avoidWeight_26() const { return ___avoidWeight_26; }
	inline float* get_address_of_avoidWeight_26() { return &___avoidWeight_26; }
	inline void set_avoidWeight_26(float value)
	{
		___avoidWeight_26 = value;
	}

	inline static int32_t get_offset_of_dodgeWeight_27() { return static_cast<int32_t>(offsetof(PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411, ___dodgeWeight_27)); }
	inline float get_dodgeWeight_27() const { return ___dodgeWeight_27; }
	inline float* get_address_of_dodgeWeight_27() { return &___dodgeWeight_27; }
	inline void set_dodgeWeight_27(float value)
	{
		___dodgeWeight_27 = value;
	}
};


// Pursue
struct Pursue_tD122B2A570231794548505BE2B891BCBCCF88F8E  : public Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF
{
public:
	// System.Single Pursue::maxPredictionTime
	float ___maxPredictionTime_5;
	// System.Boolean Pursue::evade
	bool ___evade_6;

public:
	inline static int32_t get_offset_of_maxPredictionTime_5() { return static_cast<int32_t>(offsetof(Pursue_tD122B2A570231794548505BE2B891BCBCCF88F8E, ___maxPredictionTime_5)); }
	inline float get_maxPredictionTime_5() const { return ___maxPredictionTime_5; }
	inline float* get_address_of_maxPredictionTime_5() { return &___maxPredictionTime_5; }
	inline void set_maxPredictionTime_5(float value)
	{
		___maxPredictionTime_5 = value;
	}

	inline static int32_t get_offset_of_evade_6() { return static_cast<int32_t>(offsetof(Pursue_tD122B2A570231794548505BE2B891BCBCCF88F8E, ___evade_6)); }
	inline bool get_evade_6() const { return ___evade_6; }
	inline bool* get_address_of_evade_6() { return &___evade_6; }
	inline void set_evade_6(bool value)
	{
		___evade_6 = value;
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
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


// SteeringOutput
struct SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 SteeringOutput::linear
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___linear_0;
	// System.Single SteeringOutput::angular
	float ___angular_1;

public:
	inline static int32_t get_offset_of_linear_0() { return static_cast<int32_t>(offsetof(SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D, ___linear_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_linear_0() const { return ___linear_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_linear_0() { return &___linear_0; }
	inline void set_linear_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___linear_0 = value;
	}

	inline static int32_t get_offset_of_angular_1() { return static_cast<int32_t>(offsetof(SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D, ___angular_1)); }
	inline float get_angular_1() const { return ___angular_1; }
	inline float* get_address_of_angular_1() { return &___angular_1; }
	inline void set_angular_1(float value)
	{
		___angular_1 = value;
	}
};


// Trajectory
struct Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Trajectory::startPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPoint_0;
	// UnityEngine.Vector3 Trajectory::launchVec
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___launchVec_1;
	// System.Collections.Generic.List`1<Impactable> Trajectory::obstacles
	List_1_t5077A09B97AEA8F3F00983A9B3A5FDEF8A5B66A6 * ___obstacles_2;
	// System.Collections.Generic.List`1<Impact> Trajectory::impacts
	List_1_t7059AC9A2D33D3DB433E18D5A6E36E07E45F717E * ___impacts_3;
	// System.Single Trajectory::impactTime
	float ___impactTime_4;

public:
	inline static int32_t get_offset_of_startPoint_0() { return static_cast<int32_t>(offsetof(Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C, ___startPoint_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startPoint_0() const { return ___startPoint_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startPoint_0() { return &___startPoint_0; }
	inline void set_startPoint_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startPoint_0 = value;
	}

	inline static int32_t get_offset_of_launchVec_1() { return static_cast<int32_t>(offsetof(Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C, ___launchVec_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_launchVec_1() const { return ___launchVec_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_launchVec_1() { return &___launchVec_1; }
	inline void set_launchVec_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___launchVec_1 = value;
	}

	inline static int32_t get_offset_of_obstacles_2() { return static_cast<int32_t>(offsetof(Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C, ___obstacles_2)); }
	inline List_1_t5077A09B97AEA8F3F00983A9B3A5FDEF8A5B66A6 * get_obstacles_2() const { return ___obstacles_2; }
	inline List_1_t5077A09B97AEA8F3F00983A9B3A5FDEF8A5B66A6 ** get_address_of_obstacles_2() { return &___obstacles_2; }
	inline void set_obstacles_2(List_1_t5077A09B97AEA8F3F00983A9B3A5FDEF8A5B66A6 * value)
	{
		___obstacles_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___obstacles_2), (void*)value);
	}

	inline static int32_t get_offset_of_impacts_3() { return static_cast<int32_t>(offsetof(Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C, ___impacts_3)); }
	inline List_1_t7059AC9A2D33D3DB433E18D5A6E36E07E45F717E * get_impacts_3() const { return ___impacts_3; }
	inline List_1_t7059AC9A2D33D3DB433E18D5A6E36E07E45F717E ** get_address_of_impacts_3() { return &___impacts_3; }
	inline void set_impacts_3(List_1_t7059AC9A2D33D3DB433E18D5A6E36E07E45F717E * value)
	{
		___impacts_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___impacts_3), (void*)value);
	}

	inline static int32_t get_offset_of_impactTime_4() { return static_cast<int32_t>(offsetof(Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C, ___impactTime_4)); }
	inline float get_impactTime_4() const { return ___impactTime_4; }
	inline float* get_address_of_impactTime_4() { return &___impactTime_4; }
	inline void set_impactTime_4(float value)
	{
		___impactTime_4 = value;
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


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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


// Wander
struct Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E  : public Face_tAB806D390A7B7F99E145FAF9420C74E544D5AE50
{
public:
	// System.Single Wander::wanderOffset
	float ___wanderOffset_7;
	// System.Single Wander::wanderRadius
	float ___wanderRadius_8;
	// System.Single Wander::wanderRate
	float ___wanderRate_9;
	// System.Single Wander::wanderOrientation
	float ___wanderOrientation_10;
	// System.Single Wander::maxAcceleration
	float ___maxAcceleration_11;

public:
	inline static int32_t get_offset_of_wanderOffset_7() { return static_cast<int32_t>(offsetof(Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E, ___wanderOffset_7)); }
	inline float get_wanderOffset_7() const { return ___wanderOffset_7; }
	inline float* get_address_of_wanderOffset_7() { return &___wanderOffset_7; }
	inline void set_wanderOffset_7(float value)
	{
		___wanderOffset_7 = value;
	}

	inline static int32_t get_offset_of_wanderRadius_8() { return static_cast<int32_t>(offsetof(Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E, ___wanderRadius_8)); }
	inline float get_wanderRadius_8() const { return ___wanderRadius_8; }
	inline float* get_address_of_wanderRadius_8() { return &___wanderRadius_8; }
	inline void set_wanderRadius_8(float value)
	{
		___wanderRadius_8 = value;
	}

	inline static int32_t get_offset_of_wanderRate_9() { return static_cast<int32_t>(offsetof(Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E, ___wanderRate_9)); }
	inline float get_wanderRate_9() const { return ___wanderRate_9; }
	inline float* get_address_of_wanderRate_9() { return &___wanderRate_9; }
	inline void set_wanderRate_9(float value)
	{
		___wanderRate_9 = value;
	}

	inline static int32_t get_offset_of_wanderOrientation_10() { return static_cast<int32_t>(offsetof(Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E, ___wanderOrientation_10)); }
	inline float get_wanderOrientation_10() const { return ___wanderOrientation_10; }
	inline float* get_address_of_wanderOrientation_10() { return &___wanderOrientation_10; }
	inline void set_wanderOrientation_10(float value)
	{
		___wanderOrientation_10 = value;
	}

	inline static int32_t get_offset_of_maxAcceleration_11() { return static_cast<int32_t>(offsetof(Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E, ___maxAcceleration_11)); }
	inline float get_maxAcceleration_11() const { return ___maxAcceleration_11; }
	inline float* get_address_of_maxAcceleration_11() { return &___maxAcceleration_11; }
	inline void set_maxAcceleration_11(float value)
	{
		___maxAcceleration_11 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
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


// Kinematic
struct Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 Kinematic::linearVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___linearVelocity_4;
	// System.Single Kinematic::angularVelocity
	float ___angularVelocity_5;
	// System.Single Kinematic::maxSpeed
	float ___maxSpeed_6;
	// System.Single Kinematic::maxAngularVelocity
	float ___maxAngularVelocity_7;
	// UnityEngine.GameObject Kinematic::myTarget
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___myTarget_8;
	// SteeringOutput Kinematic::steeringUpdate
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * ___steeringUpdate_9;

public:
	inline static int32_t get_offset_of_linearVelocity_4() { return static_cast<int32_t>(offsetof(Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36, ___linearVelocity_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_linearVelocity_4() const { return ___linearVelocity_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_linearVelocity_4() { return &___linearVelocity_4; }
	inline void set_linearVelocity_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___linearVelocity_4 = value;
	}

	inline static int32_t get_offset_of_angularVelocity_5() { return static_cast<int32_t>(offsetof(Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36, ___angularVelocity_5)); }
	inline float get_angularVelocity_5() const { return ___angularVelocity_5; }
	inline float* get_address_of_angularVelocity_5() { return &___angularVelocity_5; }
	inline void set_angularVelocity_5(float value)
	{
		___angularVelocity_5 = value;
	}

	inline static int32_t get_offset_of_maxSpeed_6() { return static_cast<int32_t>(offsetof(Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36, ___maxSpeed_6)); }
	inline float get_maxSpeed_6() const { return ___maxSpeed_6; }
	inline float* get_address_of_maxSpeed_6() { return &___maxSpeed_6; }
	inline void set_maxSpeed_6(float value)
	{
		___maxSpeed_6 = value;
	}

	inline static int32_t get_offset_of_maxAngularVelocity_7() { return static_cast<int32_t>(offsetof(Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36, ___maxAngularVelocity_7)); }
	inline float get_maxAngularVelocity_7() const { return ___maxAngularVelocity_7; }
	inline float* get_address_of_maxAngularVelocity_7() { return &___maxAngularVelocity_7; }
	inline void set_maxAngularVelocity_7(float value)
	{
		___maxAngularVelocity_7 = value;
	}

	inline static int32_t get_offset_of_myTarget_8() { return static_cast<int32_t>(offsetof(Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36, ___myTarget_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_myTarget_8() const { return ___myTarget_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_myTarget_8() { return &___myTarget_8; }
	inline void set_myTarget_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___myTarget_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myTarget_8), (void*)value);
	}

	inline static int32_t get_offset_of_steeringUpdate_9() { return static_cast<int32_t>(offsetof(Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36, ___steeringUpdate_9)); }
	inline SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * get_steeringUpdate_9() const { return ___steeringUpdate_9; }
	inline SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D ** get_address_of_steeringUpdate_9() { return &___steeringUpdate_9; }
	inline void set_steeringUpdate_9(SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * value)
	{
		___steeringUpdate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___steeringUpdate_9), (void*)value);
	}
};


// Menu
struct Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Path
struct Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Path::pathTargets
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___pathTargets_4;
	// UnityEngine.GameObject Path::pathTarget
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pathTarget_5;
	// System.Int32 Path::idxOffset
	int32_t ___idxOffset_6;

public:
	inline static int32_t get_offset_of_pathTargets_4() { return static_cast<int32_t>(offsetof(Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862, ___pathTargets_4)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_pathTargets_4() const { return ___pathTargets_4; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_pathTargets_4() { return &___pathTargets_4; }
	inline void set_pathTargets_4(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___pathTargets_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pathTargets_4), (void*)value);
	}

	inline static int32_t get_offset_of_pathTarget_5() { return static_cast<int32_t>(offsetof(Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862, ___pathTarget_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_pathTarget_5() const { return ___pathTarget_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_pathTarget_5() { return &___pathTarget_5; }
	inline void set_pathTarget_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___pathTarget_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pathTarget_5), (void*)value);
	}

	inline static int32_t get_offset_of_idxOffset_6() { return static_cast<int32_t>(offsetof(Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862, ___idxOffset_6)); }
	inline int32_t get_idxOffset_6() const { return ___idxOffset_6; }
	inline int32_t* get_address_of_idxOffset_6() { return &___idxOffset_6; }
	inline void set_idxOffset_6(int32_t value)
	{
		___idxOffset_6 = value;
	}
};


// PathCreator
struct PathCreator_tD42C7FF37EE2D32A5D6AF33B2D4753F0A80D7AEB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single PathCreator::difference
	float ___difference_4;
	// Path PathCreator::pathController
	Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862 * ___pathController_5;
	// UnityEngine.Vector3 PathCreator::prevPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___prevPosition_6;

public:
	inline static int32_t get_offset_of_difference_4() { return static_cast<int32_t>(offsetof(PathCreator_tD42C7FF37EE2D32A5D6AF33B2D4753F0A80D7AEB, ___difference_4)); }
	inline float get_difference_4() const { return ___difference_4; }
	inline float* get_address_of_difference_4() { return &___difference_4; }
	inline void set_difference_4(float value)
	{
		___difference_4 = value;
	}

	inline static int32_t get_offset_of_pathController_5() { return static_cast<int32_t>(offsetof(PathCreator_tD42C7FF37EE2D32A5D6AF33B2D4753F0A80D7AEB, ___pathController_5)); }
	inline Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862 * get_pathController_5() const { return ___pathController_5; }
	inline Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862 ** get_address_of_pathController_5() { return &___pathController_5; }
	inline void set_pathController_5(Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862 * value)
	{
		___pathController_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pathController_5), (void*)value);
	}

	inline static int32_t get_offset_of_prevPosition_6() { return static_cast<int32_t>(offsetof(PathCreator_tD42C7FF37EE2D32A5D6AF33B2D4753F0A80D7AEB, ___prevPosition_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_prevPosition_6() const { return ___prevPosition_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_prevPosition_6() { return &___prevPosition_6; }
	inline void set_prevPosition_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___prevPosition_6 = value;
	}
};


// Arriver
struct Arriver_tD9C5BC79D17B57BD781B40E53972959B0A947CF3  : public Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36
{
public:
	// Arrive Arriver::myMoveType
	Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E * ___myMoveType_10;
	// Align Arriver::myRotateType
	Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 * ___myRotateType_11;

public:
	inline static int32_t get_offset_of_myMoveType_10() { return static_cast<int32_t>(offsetof(Arriver_tD9C5BC79D17B57BD781B40E53972959B0A947CF3, ___myMoveType_10)); }
	inline Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E * get_myMoveType_10() const { return ___myMoveType_10; }
	inline Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E ** get_address_of_myMoveType_10() { return &___myMoveType_10; }
	inline void set_myMoveType_10(Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E * value)
	{
		___myMoveType_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myMoveType_10), (void*)value);
	}

	inline static int32_t get_offset_of_myRotateType_11() { return static_cast<int32_t>(offsetof(Arriver_tD9C5BC79D17B57BD781B40E53972959B0A947CF3, ___myRotateType_11)); }
	inline Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 * get_myRotateType_11() const { return ___myRotateType_11; }
	inline Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 ** get_address_of_myRotateType_11() { return &___myRotateType_11; }
	inline void set_myRotateType_11(Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 * value)
	{
		___myRotateType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myRotateType_11), (void*)value);
	}
};


// CameraController
struct CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0  : public Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36
{
public:
	// CameraBuffer CameraController::myMoveType
	CameraBuffer_t6E0E6A560C6CB9DB3210A3848DE4467020D6E266 * ___myMoveType_10;

public:
	inline static int32_t get_offset_of_myMoveType_10() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___myMoveType_10)); }
	inline CameraBuffer_t6E0E6A560C6CB9DB3210A3848DE4467020D6E266 * get_myMoveType_10() const { return ___myMoveType_10; }
	inline CameraBuffer_t6E0E6A560C6CB9DB3210A3848DE4467020D6E266 ** get_address_of_myMoveType_10() { return &___myMoveType_10; }
	inline void set_myMoveType_10(CameraBuffer_t6E0E6A560C6CB9DB3210A3848DE4467020D6E266 * value)
	{
		___myMoveType_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myMoveType_10), (void*)value);
	}
};


// CollisionAvoider
struct CollisionAvoider_t94ED6119C58880EC319FC563E8B5DCAD2E889951  : public Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36
{
public:
	// CollisionAvoidance CollisionAvoider::myMoveType
	CollisionAvoidance_tD20AF542B6DBE815D6F87F28324FD1EE7909CF38 * ___myMoveType_10;
	// LookWhereGoing CollisionAvoider::myRotateType
	LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * ___myRotateType_11;
	// System.Collections.Generic.List`1<Kinematic> CollisionAvoider::targets
	List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * ___targets_12;
	// System.Single CollisionAvoider::radius
	float ___radius_13;
	// UnityEngine.LineRenderer CollisionAvoider::lr
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___lr_14;

public:
	inline static int32_t get_offset_of_myMoveType_10() { return static_cast<int32_t>(offsetof(CollisionAvoider_t94ED6119C58880EC319FC563E8B5DCAD2E889951, ___myMoveType_10)); }
	inline CollisionAvoidance_tD20AF542B6DBE815D6F87F28324FD1EE7909CF38 * get_myMoveType_10() const { return ___myMoveType_10; }
	inline CollisionAvoidance_tD20AF542B6DBE815D6F87F28324FD1EE7909CF38 ** get_address_of_myMoveType_10() { return &___myMoveType_10; }
	inline void set_myMoveType_10(CollisionAvoidance_tD20AF542B6DBE815D6F87F28324FD1EE7909CF38 * value)
	{
		___myMoveType_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myMoveType_10), (void*)value);
	}

	inline static int32_t get_offset_of_myRotateType_11() { return static_cast<int32_t>(offsetof(CollisionAvoider_t94ED6119C58880EC319FC563E8B5DCAD2E889951, ___myRotateType_11)); }
	inline LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * get_myRotateType_11() const { return ___myRotateType_11; }
	inline LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 ** get_address_of_myRotateType_11() { return &___myRotateType_11; }
	inline void set_myRotateType_11(LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * value)
	{
		___myRotateType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myRotateType_11), (void*)value);
	}

	inline static int32_t get_offset_of_targets_12() { return static_cast<int32_t>(offsetof(CollisionAvoider_t94ED6119C58880EC319FC563E8B5DCAD2E889951, ___targets_12)); }
	inline List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * get_targets_12() const { return ___targets_12; }
	inline List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 ** get_address_of_targets_12() { return &___targets_12; }
	inline void set_targets_12(List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * value)
	{
		___targets_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targets_12), (void*)value);
	}

	inline static int32_t get_offset_of_radius_13() { return static_cast<int32_t>(offsetof(CollisionAvoider_t94ED6119C58880EC319FC563E8B5DCAD2E889951, ___radius_13)); }
	inline float get_radius_13() const { return ___radius_13; }
	inline float* get_address_of_radius_13() { return &___radius_13; }
	inline void set_radius_13(float value)
	{
		___radius_13 = value;
	}

	inline static int32_t get_offset_of_lr_14() { return static_cast<int32_t>(offsetof(CollisionAvoider_t94ED6119C58880EC319FC563E8B5DCAD2E889951, ___lr_14)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_lr_14() const { return ___lr_14; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_lr_14() { return &___lr_14; }
	inline void set_lr_14(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___lr_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lr_14), (void*)value);
	}
};


// FlockCOM
struct FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9  : public Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36
{
public:
	// System.Collections.Generic.List`1<Kinematic> FlockCOM::flock
	List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * ___flock_10;
	// System.Single FlockCOM::sepWeight
	float ___sepWeight_11;
	// System.Single FlockCOM::alignWeight
	float ___alignWeight_12;
	// System.Single FlockCOM::matchWeight
	float ___matchWeight_13;
	// System.Single FlockCOM::cohesionWeight
	float ___cohesionWeight_14;
	// System.Single FlockCOM::avoidWeight
	float ___avoidWeight_15;
	// System.Single FlockCOM::dodgeWeight
	float ___dodgeWeight_16;

public:
	inline static int32_t get_offset_of_flock_10() { return static_cast<int32_t>(offsetof(FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9, ___flock_10)); }
	inline List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * get_flock_10() const { return ___flock_10; }
	inline List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 ** get_address_of_flock_10() { return &___flock_10; }
	inline void set_flock_10(List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * value)
	{
		___flock_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___flock_10), (void*)value);
	}

	inline static int32_t get_offset_of_sepWeight_11() { return static_cast<int32_t>(offsetof(FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9, ___sepWeight_11)); }
	inline float get_sepWeight_11() const { return ___sepWeight_11; }
	inline float* get_address_of_sepWeight_11() { return &___sepWeight_11; }
	inline void set_sepWeight_11(float value)
	{
		___sepWeight_11 = value;
	}

	inline static int32_t get_offset_of_alignWeight_12() { return static_cast<int32_t>(offsetof(FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9, ___alignWeight_12)); }
	inline float get_alignWeight_12() const { return ___alignWeight_12; }
	inline float* get_address_of_alignWeight_12() { return &___alignWeight_12; }
	inline void set_alignWeight_12(float value)
	{
		___alignWeight_12 = value;
	}

	inline static int32_t get_offset_of_matchWeight_13() { return static_cast<int32_t>(offsetof(FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9, ___matchWeight_13)); }
	inline float get_matchWeight_13() const { return ___matchWeight_13; }
	inline float* get_address_of_matchWeight_13() { return &___matchWeight_13; }
	inline void set_matchWeight_13(float value)
	{
		___matchWeight_13 = value;
	}

	inline static int32_t get_offset_of_cohesionWeight_14() { return static_cast<int32_t>(offsetof(FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9, ___cohesionWeight_14)); }
	inline float get_cohesionWeight_14() const { return ___cohesionWeight_14; }
	inline float* get_address_of_cohesionWeight_14() { return &___cohesionWeight_14; }
	inline void set_cohesionWeight_14(float value)
	{
		___cohesionWeight_14 = value;
	}

	inline static int32_t get_offset_of_avoidWeight_15() { return static_cast<int32_t>(offsetof(FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9, ___avoidWeight_15)); }
	inline float get_avoidWeight_15() const { return ___avoidWeight_15; }
	inline float* get_address_of_avoidWeight_15() { return &___avoidWeight_15; }
	inline void set_avoidWeight_15(float value)
	{
		___avoidWeight_15 = value;
	}

	inline static int32_t get_offset_of_dodgeWeight_16() { return static_cast<int32_t>(offsetof(FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9, ___dodgeWeight_16)); }
	inline float get_dodgeWeight_16() const { return ___dodgeWeight_16; }
	inline float* get_address_of_dodgeWeight_16() { return &___dodgeWeight_16; }
	inline void set_dodgeWeight_16(float value)
	{
		___dodgeWeight_16 = value;
	}
};


// Flocker
struct Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8  : public Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36
{
public:
	// PrioritizedFlocking Flocker::myMoveType
	PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * ___myMoveType_10;
	// LookWhereGoing Flocker::myRotateType
	LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * ___myRotateType_11;
	// FlockCOM Flocker::centerOfMass
	FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 * ___centerOfMass_12;
	// System.Single Flocker::targetSpeed
	float ___targetSpeed_13;
	// System.Single Flocker::radius
	float ___radius_14;
	// System.Single Flocker::sepThreshold
	float ___sepThreshold_15;
	// System.Single Flocker::avoidDist
	float ___avoidDist_16;
	// System.Single Flocker::lookAhead
	float ___lookAhead_17;
	// System.Collections.Generic.List`1<System.String> Flocker::ignoredTags
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___ignoredTags_18;
	// System.Boolean Flocker::debug
	bool ___debug_19;
	// UnityEngine.LineRenderer Flocker::lr
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___lr_20;
	// UnityEngine.Material Flocker::hitMat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___hitMat_21;
	// UnityEngine.Material Flocker::missMat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___missMat_22;
	// System.Int32 Flocker::numRays
	int32_t ___numRays_23;
	// System.Single Flocker::rayAngle
	float ___rayAngle_24;
	// System.Single Flocker::maxAngularAcceleration
	float ___maxAngularAcceleration_25;
	// System.Single Flocker::epsilon
	float ___epsilon_26;
	// System.Int32 Flocker::iterationCount
	int32_t ___iterationCount_27;

public:
	inline static int32_t get_offset_of_myMoveType_10() { return static_cast<int32_t>(offsetof(Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8, ___myMoveType_10)); }
	inline PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * get_myMoveType_10() const { return ___myMoveType_10; }
	inline PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 ** get_address_of_myMoveType_10() { return &___myMoveType_10; }
	inline void set_myMoveType_10(PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * value)
	{
		___myMoveType_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myMoveType_10), (void*)value);
	}

	inline static int32_t get_offset_of_myRotateType_11() { return static_cast<int32_t>(offsetof(Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8, ___myRotateType_11)); }
	inline LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * get_myRotateType_11() const { return ___myRotateType_11; }
	inline LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 ** get_address_of_myRotateType_11() { return &___myRotateType_11; }
	inline void set_myRotateType_11(LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * value)
	{
		___myRotateType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myRotateType_11), (void*)value);
	}

	inline static int32_t get_offset_of_centerOfMass_12() { return static_cast<int32_t>(offsetof(Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8, ___centerOfMass_12)); }
	inline FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 * get_centerOfMass_12() const { return ___centerOfMass_12; }
	inline FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 ** get_address_of_centerOfMass_12() { return &___centerOfMass_12; }
	inline void set_centerOfMass_12(FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 * value)
	{
		___centerOfMass_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___centerOfMass_12), (void*)value);
	}

	inline static int32_t get_offset_of_targetSpeed_13() { return static_cast<int32_t>(offsetof(Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8, ___targetSpeed_13)); }
	inline float get_targetSpeed_13() const { return ___targetSpeed_13; }
	inline float* get_address_of_targetSpeed_13() { return &___targetSpeed_13; }
	inline void set_targetSpeed_13(float value)
	{
		___targetSpeed_13 = value;
	}

	inline static int32_t get_offset_of_radius_14() { return static_cast<int32_t>(offsetof(Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8, ___radius_14)); }
	inline float get_radius_14() const { return ___radius_14; }
	inline float* get_address_of_radius_14() { return &___radius_14; }
	inline void set_radius_14(float value)
	{
		___radius_14 = value;
	}

	inline static int32_t get_offset_of_sepThreshold_15() { return static_cast<int32_t>(offsetof(Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8, ___sepThreshold_15)); }
	inline float get_sepThreshold_15() const { return ___sepThreshold_15; }
	inline float* get_address_of_sepThreshold_15() { return &___sepThreshold_15; }
	inline void set_sepThreshold_15(float value)
	{
		___sepThreshold_15 = value;
	}

	inline static int32_t get_offset_of_avoidDist_16() { return static_cast<int32_t>(offsetof(Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8, ___avoidDist_16)); }
	inline float get_avoidDist_16() const { return ___avoidDist_16; }
	inline float* get_address_of_avoidDist_16() { return &___avoidDist_16; }
	inline void set_avoidDist_16(float value)
	{
		___avoidDist_16 = value;
	}

	inline static int32_t get_offset_of_lookAhead_17() { return static_cast<int32_t>(offsetof(Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8, ___lookAhead_17)); }
	inline float get_lookAhead_17() const { return ___lookAhead_17; }
	inline float* get_address_of_lookAhead_17() { return &___lookAhead_17; }
	inline void set_lookAhead_17(float value)
	{
		___lookAhead_17 = value;
	}

	inline static int32_t get_offset_of_ignoredTags_18() { return static_cast<int32_t>(offsetof(Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8, ___ignoredTags_18)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_ignoredTags_18() const { return ___ignoredTags_18; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_ignoredTags_18() { return &___ignoredTags_18; }
	inline void set_ignoredTags_18(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___ignoredTags_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ignoredTags_18), (void*)value);
	}

	inline static int32_t get_offset_of_debug_19() { return static_cast<int32_t>(offsetof(Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8, ___debug_19)); }
	inline bool get_debug_19() const { return ___debug_19; }
	inline bool* get_address_of_debug_19() { return &___debug_19; }
	inline void set_debug_19(bool value)
	{
		___debug_19 = value;
	}

	inline static int32_t get_offset_of_lr_20() { return static_cast<int32_t>(offsetof(Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8, ___lr_20)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_lr_20() const { return ___lr_20; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_lr_20() { return &___lr_20; }
	inline void set_lr_20(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___lr_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lr_20), (void*)value);
	}

	inline static int32_t get_offset_of_hitMat_21() { return static_cast<int32_t>(offsetof(Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8, ___hitMat_21)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_hitMat_21() const { return ___hitMat_21; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_hitMat_21() { return &___hitMat_21; }
	inline void set_hitMat_21(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___hitMat_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hitMat_21), (void*)value);
	}

	inline static int32_t get_offset_of_missMat_22() { return static_cast<int32_t>(offsetof(Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8, ___missMat_22)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_missMat_22() const { return ___missMat_22; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_missMat_22() { return &___missMat_22; }
	inline void set_missMat_22(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___missMat_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___missMat_22), (void*)value);
	}

	inline static int32_t get_offset_of_numRays_23() { return static_cast<int32_t>(offsetof(Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8, ___numRays_23)); }
	inline int32_t get_numRays_23() const { return ___numRays_23; }
	inline int32_t* get_address_of_numRays_23() { return &___numRays_23; }
	inline void set_numRays_23(int32_t value)
	{
		___numRays_23 = value;
	}

	inline static int32_t get_offset_of_rayAngle_24() { return static_cast<int32_t>(offsetof(Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8, ___rayAngle_24)); }
	inline float get_rayAngle_24() const { return ___rayAngle_24; }
	inline float* get_address_of_rayAngle_24() { return &___rayAngle_24; }
	inline void set_rayAngle_24(float value)
	{
		___rayAngle_24 = value;
	}

	inline static int32_t get_offset_of_maxAngularAcceleration_25() { return static_cast<int32_t>(offsetof(Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8, ___maxAngularAcceleration_25)); }
	inline float get_maxAngularAcceleration_25() const { return ___maxAngularAcceleration_25; }
	inline float* get_address_of_maxAngularAcceleration_25() { return &___maxAngularAcceleration_25; }
	inline void set_maxAngularAcceleration_25(float value)
	{
		___maxAngularAcceleration_25 = value;
	}

	inline static int32_t get_offset_of_epsilon_26() { return static_cast<int32_t>(offsetof(Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8, ___epsilon_26)); }
	inline float get_epsilon_26() const { return ___epsilon_26; }
	inline float* get_address_of_epsilon_26() { return &___epsilon_26; }
	inline void set_epsilon_26(float value)
	{
		___epsilon_26 = value;
	}

	inline static int32_t get_offset_of_iterationCount_27() { return static_cast<int32_t>(offsetof(Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8, ___iterationCount_27)); }
	inline int32_t get_iterationCount_27() const { return ___iterationCount_27; }
	inline int32_t* get_address_of_iterationCount_27() { return &___iterationCount_27; }
	inline void set_iterationCount_27(int32_t value)
	{
		___iterationCount_27 = value;
	}
};


// ObstacleAvoider
struct ObstacleAvoider_t07D61DBCD670B954F50D9CD0390C5BA9A77F7B05  : public Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36
{
public:
	// ObstacleAvoidance ObstacleAvoider::myMoveType
	ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * ___myMoveType_10;
	// LookWhereGoing ObstacleAvoider::myRotateType
	LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * ___myRotateType_11;
	// System.Single ObstacleAvoider::avoidDist
	float ___avoidDist_12;
	// System.Single ObstacleAvoider::lookAhead
	float ___lookAhead_13;
	// UnityEngine.LineRenderer ObstacleAvoider::lr
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___lr_14;
	// UnityEngine.Material ObstacleAvoider::hitMat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___hitMat_15;
	// UnityEngine.Material ObstacleAvoider::missMat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___missMat_16;

public:
	inline static int32_t get_offset_of_myMoveType_10() { return static_cast<int32_t>(offsetof(ObstacleAvoider_t07D61DBCD670B954F50D9CD0390C5BA9A77F7B05, ___myMoveType_10)); }
	inline ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * get_myMoveType_10() const { return ___myMoveType_10; }
	inline ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C ** get_address_of_myMoveType_10() { return &___myMoveType_10; }
	inline void set_myMoveType_10(ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * value)
	{
		___myMoveType_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myMoveType_10), (void*)value);
	}

	inline static int32_t get_offset_of_myRotateType_11() { return static_cast<int32_t>(offsetof(ObstacleAvoider_t07D61DBCD670B954F50D9CD0390C5BA9A77F7B05, ___myRotateType_11)); }
	inline LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * get_myRotateType_11() const { return ___myRotateType_11; }
	inline LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 ** get_address_of_myRotateType_11() { return &___myRotateType_11; }
	inline void set_myRotateType_11(LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * value)
	{
		___myRotateType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myRotateType_11), (void*)value);
	}

	inline static int32_t get_offset_of_avoidDist_12() { return static_cast<int32_t>(offsetof(ObstacleAvoider_t07D61DBCD670B954F50D9CD0390C5BA9A77F7B05, ___avoidDist_12)); }
	inline float get_avoidDist_12() const { return ___avoidDist_12; }
	inline float* get_address_of_avoidDist_12() { return &___avoidDist_12; }
	inline void set_avoidDist_12(float value)
	{
		___avoidDist_12 = value;
	}

	inline static int32_t get_offset_of_lookAhead_13() { return static_cast<int32_t>(offsetof(ObstacleAvoider_t07D61DBCD670B954F50D9CD0390C5BA9A77F7B05, ___lookAhead_13)); }
	inline float get_lookAhead_13() const { return ___lookAhead_13; }
	inline float* get_address_of_lookAhead_13() { return &___lookAhead_13; }
	inline void set_lookAhead_13(float value)
	{
		___lookAhead_13 = value;
	}

	inline static int32_t get_offset_of_lr_14() { return static_cast<int32_t>(offsetof(ObstacleAvoider_t07D61DBCD670B954F50D9CD0390C5BA9A77F7B05, ___lr_14)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_lr_14() const { return ___lr_14; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_lr_14() { return &___lr_14; }
	inline void set_lr_14(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___lr_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lr_14), (void*)value);
	}

	inline static int32_t get_offset_of_hitMat_15() { return static_cast<int32_t>(offsetof(ObstacleAvoider_t07D61DBCD670B954F50D9CD0390C5BA9A77F7B05, ___hitMat_15)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_hitMat_15() const { return ___hitMat_15; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_hitMat_15() { return &___hitMat_15; }
	inline void set_hitMat_15(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___hitMat_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hitMat_15), (void*)value);
	}

	inline static int32_t get_offset_of_missMat_16() { return static_cast<int32_t>(offsetof(ObstacleAvoider_t07D61DBCD670B954F50D9CD0390C5BA9A77F7B05, ___missMat_16)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_missMat_16() const { return ___missMat_16; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_missMat_16() { return &___missMat_16; }
	inline void set_missMat_16(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___missMat_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___missMat_16), (void*)value);
	}
};


// PathFollower
struct PathFollower_tD0C5615DEA60D647390E2ABD7E6D52CEF043AE40  : public Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36
{
public:
	// FollowPath PathFollower::myMoveType
	FollowPath_t9F2D06DD7295A8D1D97B5B6593FD432730E16A58 * ___myMoveType_10;
	// LookWhereGoing PathFollower::myRotateType
	LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * ___myRotateType_11;
	// Path PathFollower::path
	Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862 * ___path_12;
	// System.Single PathFollower::pathOffset
	float ___pathOffset_13;
	// System.Boolean PathFollower::predictive
	bool ___predictive_14;

public:
	inline static int32_t get_offset_of_myMoveType_10() { return static_cast<int32_t>(offsetof(PathFollower_tD0C5615DEA60D647390E2ABD7E6D52CEF043AE40, ___myMoveType_10)); }
	inline FollowPath_t9F2D06DD7295A8D1D97B5B6593FD432730E16A58 * get_myMoveType_10() const { return ___myMoveType_10; }
	inline FollowPath_t9F2D06DD7295A8D1D97B5B6593FD432730E16A58 ** get_address_of_myMoveType_10() { return &___myMoveType_10; }
	inline void set_myMoveType_10(FollowPath_t9F2D06DD7295A8D1D97B5B6593FD432730E16A58 * value)
	{
		___myMoveType_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myMoveType_10), (void*)value);
	}

	inline static int32_t get_offset_of_myRotateType_11() { return static_cast<int32_t>(offsetof(PathFollower_tD0C5615DEA60D647390E2ABD7E6D52CEF043AE40, ___myRotateType_11)); }
	inline LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * get_myRotateType_11() const { return ___myRotateType_11; }
	inline LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 ** get_address_of_myRotateType_11() { return &___myRotateType_11; }
	inline void set_myRotateType_11(LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * value)
	{
		___myRotateType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myRotateType_11), (void*)value);
	}

	inline static int32_t get_offset_of_path_12() { return static_cast<int32_t>(offsetof(PathFollower_tD0C5615DEA60D647390E2ABD7E6D52CEF043AE40, ___path_12)); }
	inline Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862 * get_path_12() const { return ___path_12; }
	inline Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862 ** get_address_of_path_12() { return &___path_12; }
	inline void set_path_12(Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862 * value)
	{
		___path_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_12), (void*)value);
	}

	inline static int32_t get_offset_of_pathOffset_13() { return static_cast<int32_t>(offsetof(PathFollower_tD0C5615DEA60D647390E2ABD7E6D52CEF043AE40, ___pathOffset_13)); }
	inline float get_pathOffset_13() const { return ___pathOffset_13; }
	inline float* get_address_of_pathOffset_13() { return &___pathOffset_13; }
	inline void set_pathOffset_13(float value)
	{
		___pathOffset_13 = value;
	}

	inline static int32_t get_offset_of_predictive_14() { return static_cast<int32_t>(offsetof(PathFollower_tD0C5615DEA60D647390E2ABD7E6D52CEF043AE40, ___predictive_14)); }
	inline bool get_predictive_14() const { return ___predictive_14; }
	inline bool* get_address_of_predictive_14() { return &___predictive_14; }
	inline void set_predictive_14(bool value)
	{
		___predictive_14 = value;
	}
};


// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F  : public Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36
{
public:
	// UserControlled Player::myMoveType
	UserControlled_tBFDF8B501E956DB77DCFE541D286ACC17815E95E * ___myMoveType_10;
	// Firing Player::myBallisticType
	Firing_t8D2D227424CC1247D6EA7389C9D9D1FC14556E31 * ___myBallisticType_11;
	// System.Single Player::maxAcceleration
	float ___maxAcceleration_12;
	// System.Single Player::frictionPercent
	float ___frictionPercent_13;

public:
	inline static int32_t get_offset_of_myMoveType_10() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___myMoveType_10)); }
	inline UserControlled_tBFDF8B501E956DB77DCFE541D286ACC17815E95E * get_myMoveType_10() const { return ___myMoveType_10; }
	inline UserControlled_tBFDF8B501E956DB77DCFE541D286ACC17815E95E ** get_address_of_myMoveType_10() { return &___myMoveType_10; }
	inline void set_myMoveType_10(UserControlled_tBFDF8B501E956DB77DCFE541D286ACC17815E95E * value)
	{
		___myMoveType_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myMoveType_10), (void*)value);
	}

	inline static int32_t get_offset_of_myBallisticType_11() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___myBallisticType_11)); }
	inline Firing_t8D2D227424CC1247D6EA7389C9D9D1FC14556E31 * get_myBallisticType_11() const { return ___myBallisticType_11; }
	inline Firing_t8D2D227424CC1247D6EA7389C9D9D1FC14556E31 ** get_address_of_myBallisticType_11() { return &___myBallisticType_11; }
	inline void set_myBallisticType_11(Firing_t8D2D227424CC1247D6EA7389C9D9D1FC14556E31 * value)
	{
		___myBallisticType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myBallisticType_11), (void*)value);
	}

	inline static int32_t get_offset_of_maxAcceleration_12() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___maxAcceleration_12)); }
	inline float get_maxAcceleration_12() const { return ___maxAcceleration_12; }
	inline float* get_address_of_maxAcceleration_12() { return &___maxAcceleration_12; }
	inline void set_maxAcceleration_12(float value)
	{
		___maxAcceleration_12 = value;
	}

	inline static int32_t get_offset_of_frictionPercent_13() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___frictionPercent_13)); }
	inline float get_frictionPercent_13() const { return ___frictionPercent_13; }
	inline float* get_address_of_frictionPercent_13() { return &___frictionPercent_13; }
	inline void set_frictionPercent_13(float value)
	{
		___frictionPercent_13 = value;
	}
};


// Projectile
struct Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F  : public Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36
{
public:
	// System.Single Projectile::maxLifetime
	float ___maxLifetime_10;
	// System.Single Projectile::elapsedTime
	float ___elapsedTime_11;

public:
	inline static int32_t get_offset_of_maxLifetime_10() { return static_cast<int32_t>(offsetof(Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F, ___maxLifetime_10)); }
	inline float get_maxLifetime_10() const { return ___maxLifetime_10; }
	inline float* get_address_of_maxLifetime_10() { return &___maxLifetime_10; }
	inline void set_maxLifetime_10(float value)
	{
		___maxLifetime_10 = value;
	}

	inline static int32_t get_offset_of_elapsedTime_11() { return static_cast<int32_t>(offsetof(Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F, ___elapsedTime_11)); }
	inline float get_elapsedTime_11() const { return ___elapsedTime_11; }
	inline float* get_address_of_elapsedTime_11() { return &___elapsedTime_11; }
	inline void set_elapsedTime_11(float value)
	{
		___elapsedTime_11 = value;
	}
};


// Pursuer
struct Pursuer_tD9402FCF5E19DA14928D90FC8794D181F6B0A14D  : public Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36
{
public:
	// Pursue Pursuer::myMoveType
	Pursue_tD122B2A570231794548505BE2B891BCBCCF88F8E * ___myMoveType_10;
	// Face Pursuer::myPursueRotateType
	Face_tAB806D390A7B7F99E145FAF9420C74E544D5AE50 * ___myPursueRotateType_11;
	// LookWhereGoing Pursuer::myEvadeRotateType
	LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * ___myEvadeRotateType_12;
	// System.Boolean Pursuer::evade
	bool ___evade_13;

public:
	inline static int32_t get_offset_of_myMoveType_10() { return static_cast<int32_t>(offsetof(Pursuer_tD9402FCF5E19DA14928D90FC8794D181F6B0A14D, ___myMoveType_10)); }
	inline Pursue_tD122B2A570231794548505BE2B891BCBCCF88F8E * get_myMoveType_10() const { return ___myMoveType_10; }
	inline Pursue_tD122B2A570231794548505BE2B891BCBCCF88F8E ** get_address_of_myMoveType_10() { return &___myMoveType_10; }
	inline void set_myMoveType_10(Pursue_tD122B2A570231794548505BE2B891BCBCCF88F8E * value)
	{
		___myMoveType_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myMoveType_10), (void*)value);
	}

	inline static int32_t get_offset_of_myPursueRotateType_11() { return static_cast<int32_t>(offsetof(Pursuer_tD9402FCF5E19DA14928D90FC8794D181F6B0A14D, ___myPursueRotateType_11)); }
	inline Face_tAB806D390A7B7F99E145FAF9420C74E544D5AE50 * get_myPursueRotateType_11() const { return ___myPursueRotateType_11; }
	inline Face_tAB806D390A7B7F99E145FAF9420C74E544D5AE50 ** get_address_of_myPursueRotateType_11() { return &___myPursueRotateType_11; }
	inline void set_myPursueRotateType_11(Face_tAB806D390A7B7F99E145FAF9420C74E544D5AE50 * value)
	{
		___myPursueRotateType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myPursueRotateType_11), (void*)value);
	}

	inline static int32_t get_offset_of_myEvadeRotateType_12() { return static_cast<int32_t>(offsetof(Pursuer_tD9402FCF5E19DA14928D90FC8794D181F6B0A14D, ___myEvadeRotateType_12)); }
	inline LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * get_myEvadeRotateType_12() const { return ___myEvadeRotateType_12; }
	inline LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 ** get_address_of_myEvadeRotateType_12() { return &___myEvadeRotateType_12; }
	inline void set_myEvadeRotateType_12(LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * value)
	{
		___myEvadeRotateType_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myEvadeRotateType_12), (void*)value);
	}

	inline static int32_t get_offset_of_evade_13() { return static_cast<int32_t>(offsetof(Pursuer_tD9402FCF5E19DA14928D90FC8794D181F6B0A14D, ___evade_13)); }
	inline bool get_evade_13() const { return ___evade_13; }
	inline bool* get_address_of_evade_13() { return &___evade_13; }
	inline void set_evade_13(bool value)
	{
		___evade_13 = value;
	}
};


// Seeker
struct Seeker_t246DDE7D5A9EA1244787FAA74722A2F079C9CF4D  : public Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36
{
public:
	// Seek Seeker::myMoveType
	Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF * ___myMoveType_10;
	// Face Seeker::mySeekRotateType
	Face_tAB806D390A7B7F99E145FAF9420C74E544D5AE50 * ___mySeekRotateType_11;
	// LookWhereGoing Seeker::myFleeRotateType
	LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * ___myFleeRotateType_12;
	// System.Single Seeker::maxAcceleration
	float ___maxAcceleration_13;
	// System.Boolean Seeker::flee
	bool ___flee_14;

public:
	inline static int32_t get_offset_of_myMoveType_10() { return static_cast<int32_t>(offsetof(Seeker_t246DDE7D5A9EA1244787FAA74722A2F079C9CF4D, ___myMoveType_10)); }
	inline Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF * get_myMoveType_10() const { return ___myMoveType_10; }
	inline Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF ** get_address_of_myMoveType_10() { return &___myMoveType_10; }
	inline void set_myMoveType_10(Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF * value)
	{
		___myMoveType_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myMoveType_10), (void*)value);
	}

	inline static int32_t get_offset_of_mySeekRotateType_11() { return static_cast<int32_t>(offsetof(Seeker_t246DDE7D5A9EA1244787FAA74722A2F079C9CF4D, ___mySeekRotateType_11)); }
	inline Face_tAB806D390A7B7F99E145FAF9420C74E544D5AE50 * get_mySeekRotateType_11() const { return ___mySeekRotateType_11; }
	inline Face_tAB806D390A7B7F99E145FAF9420C74E544D5AE50 ** get_address_of_mySeekRotateType_11() { return &___mySeekRotateType_11; }
	inline void set_mySeekRotateType_11(Face_tAB806D390A7B7F99E145FAF9420C74E544D5AE50 * value)
	{
		___mySeekRotateType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mySeekRotateType_11), (void*)value);
	}

	inline static int32_t get_offset_of_myFleeRotateType_12() { return static_cast<int32_t>(offsetof(Seeker_t246DDE7D5A9EA1244787FAA74722A2F079C9CF4D, ___myFleeRotateType_12)); }
	inline LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * get_myFleeRotateType_12() const { return ___myFleeRotateType_12; }
	inline LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 ** get_address_of_myFleeRotateType_12() { return &___myFleeRotateType_12; }
	inline void set_myFleeRotateType_12(LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * value)
	{
		___myFleeRotateType_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myFleeRotateType_12), (void*)value);
	}

	inline static int32_t get_offset_of_maxAcceleration_13() { return static_cast<int32_t>(offsetof(Seeker_t246DDE7D5A9EA1244787FAA74722A2F079C9CF4D, ___maxAcceleration_13)); }
	inline float get_maxAcceleration_13() const { return ___maxAcceleration_13; }
	inline float* get_address_of_maxAcceleration_13() { return &___maxAcceleration_13; }
	inline void set_maxAcceleration_13(float value)
	{
		___maxAcceleration_13 = value;
	}

	inline static int32_t get_offset_of_flee_14() { return static_cast<int32_t>(offsetof(Seeker_t246DDE7D5A9EA1244787FAA74722A2F079C9CF4D, ___flee_14)); }
	inline bool get_flee_14() const { return ___flee_14; }
	inline bool* get_address_of_flee_14() { return &___flee_14; }
	inline void set_flee_14(bool value)
	{
		___flee_14 = value;
	}
};


// Separator
struct Separator_t11F00E3211A0E086332FF3C1396EF51C5268C3CC  : public Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36
{
public:
	// Separation Separator::myMoveType
	Separation_tB627F4D516766D919037B2256412BE43C0539007 * ___myMoveType_10;
	// LookWhereGoing Separator::myRotateType
	LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * ___myRotateType_11;
	// System.Collections.Generic.List`1<Kinematic> Separator::targets
	List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * ___targets_12;

public:
	inline static int32_t get_offset_of_myMoveType_10() { return static_cast<int32_t>(offsetof(Separator_t11F00E3211A0E086332FF3C1396EF51C5268C3CC, ___myMoveType_10)); }
	inline Separation_tB627F4D516766D919037B2256412BE43C0539007 * get_myMoveType_10() const { return ___myMoveType_10; }
	inline Separation_tB627F4D516766D919037B2256412BE43C0539007 ** get_address_of_myMoveType_10() { return &___myMoveType_10; }
	inline void set_myMoveType_10(Separation_tB627F4D516766D919037B2256412BE43C0539007 * value)
	{
		___myMoveType_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myMoveType_10), (void*)value);
	}

	inline static int32_t get_offset_of_myRotateType_11() { return static_cast<int32_t>(offsetof(Separator_t11F00E3211A0E086332FF3C1396EF51C5268C3CC, ___myRotateType_11)); }
	inline LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * get_myRotateType_11() const { return ___myRotateType_11; }
	inline LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 ** get_address_of_myRotateType_11() { return &___myRotateType_11; }
	inline void set_myRotateType_11(LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * value)
	{
		___myRotateType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myRotateType_11), (void*)value);
	}

	inline static int32_t get_offset_of_targets_12() { return static_cast<int32_t>(offsetof(Separator_t11F00E3211A0E086332FF3C1396EF51C5268C3CC, ___targets_12)); }
	inline List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * get_targets_12() const { return ___targets_12; }
	inline List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 ** get_address_of_targets_12() { return &___targets_12; }
	inline void set_targets_12(List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * value)
	{
		___targets_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targets_12), (void*)value);
	}
};


// Tank
struct Tank_tCBDDA0BA03D5014BEAFC111D578FFBD3BE1B9FC4  : public Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36
{
public:
	// Arrive Tank::myMoveType
	Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E * ___myMoveType_10;
	// Firing Tank::myBallisticType
	Firing_t8D2D227424CC1247D6EA7389C9D9D1FC14556E31 * ___myBallisticType_11;
	// System.Single Tank::firingSpeed
	float ___firingSpeed_12;
	// System.Single Tank::reloadTime
	float ___reloadTime_13;
	// Kinematic Tank::projectilePrefab
	Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * ___projectilePrefab_14;
	// UnityEngine.GameObject Tank::tankMoveTarget
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___tankMoveTarget_15;
	// System.Boolean Tank::selectSoonest
	bool ___selectSoonest_16;
	// UnityEngine.Material Tank::successMat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___successMat_17;
	// UnityEngine.Material Tank::failMat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___failMat_18;
	// System.Single Tank::fireTimer
	float ___fireTimer_19;

public:
	inline static int32_t get_offset_of_myMoveType_10() { return static_cast<int32_t>(offsetof(Tank_tCBDDA0BA03D5014BEAFC111D578FFBD3BE1B9FC4, ___myMoveType_10)); }
	inline Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E * get_myMoveType_10() const { return ___myMoveType_10; }
	inline Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E ** get_address_of_myMoveType_10() { return &___myMoveType_10; }
	inline void set_myMoveType_10(Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E * value)
	{
		___myMoveType_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myMoveType_10), (void*)value);
	}

	inline static int32_t get_offset_of_myBallisticType_11() { return static_cast<int32_t>(offsetof(Tank_tCBDDA0BA03D5014BEAFC111D578FFBD3BE1B9FC4, ___myBallisticType_11)); }
	inline Firing_t8D2D227424CC1247D6EA7389C9D9D1FC14556E31 * get_myBallisticType_11() const { return ___myBallisticType_11; }
	inline Firing_t8D2D227424CC1247D6EA7389C9D9D1FC14556E31 ** get_address_of_myBallisticType_11() { return &___myBallisticType_11; }
	inline void set_myBallisticType_11(Firing_t8D2D227424CC1247D6EA7389C9D9D1FC14556E31 * value)
	{
		___myBallisticType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myBallisticType_11), (void*)value);
	}

	inline static int32_t get_offset_of_firingSpeed_12() { return static_cast<int32_t>(offsetof(Tank_tCBDDA0BA03D5014BEAFC111D578FFBD3BE1B9FC4, ___firingSpeed_12)); }
	inline float get_firingSpeed_12() const { return ___firingSpeed_12; }
	inline float* get_address_of_firingSpeed_12() { return &___firingSpeed_12; }
	inline void set_firingSpeed_12(float value)
	{
		___firingSpeed_12 = value;
	}

	inline static int32_t get_offset_of_reloadTime_13() { return static_cast<int32_t>(offsetof(Tank_tCBDDA0BA03D5014BEAFC111D578FFBD3BE1B9FC4, ___reloadTime_13)); }
	inline float get_reloadTime_13() const { return ___reloadTime_13; }
	inline float* get_address_of_reloadTime_13() { return &___reloadTime_13; }
	inline void set_reloadTime_13(float value)
	{
		___reloadTime_13 = value;
	}

	inline static int32_t get_offset_of_projectilePrefab_14() { return static_cast<int32_t>(offsetof(Tank_tCBDDA0BA03D5014BEAFC111D578FFBD3BE1B9FC4, ___projectilePrefab_14)); }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * get_projectilePrefab_14() const { return ___projectilePrefab_14; }
	inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 ** get_address_of_projectilePrefab_14() { return &___projectilePrefab_14; }
	inline void set_projectilePrefab_14(Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * value)
	{
		___projectilePrefab_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectilePrefab_14), (void*)value);
	}

	inline static int32_t get_offset_of_tankMoveTarget_15() { return static_cast<int32_t>(offsetof(Tank_tCBDDA0BA03D5014BEAFC111D578FFBD3BE1B9FC4, ___tankMoveTarget_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_tankMoveTarget_15() const { return ___tankMoveTarget_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_tankMoveTarget_15() { return &___tankMoveTarget_15; }
	inline void set_tankMoveTarget_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___tankMoveTarget_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tankMoveTarget_15), (void*)value);
	}

	inline static int32_t get_offset_of_selectSoonest_16() { return static_cast<int32_t>(offsetof(Tank_tCBDDA0BA03D5014BEAFC111D578FFBD3BE1B9FC4, ___selectSoonest_16)); }
	inline bool get_selectSoonest_16() const { return ___selectSoonest_16; }
	inline bool* get_address_of_selectSoonest_16() { return &___selectSoonest_16; }
	inline void set_selectSoonest_16(bool value)
	{
		___selectSoonest_16 = value;
	}

	inline static int32_t get_offset_of_successMat_17() { return static_cast<int32_t>(offsetof(Tank_tCBDDA0BA03D5014BEAFC111D578FFBD3BE1B9FC4, ___successMat_17)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_successMat_17() const { return ___successMat_17; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_successMat_17() { return &___successMat_17; }
	inline void set_successMat_17(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___successMat_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___successMat_17), (void*)value);
	}

	inline static int32_t get_offset_of_failMat_18() { return static_cast<int32_t>(offsetof(Tank_tCBDDA0BA03D5014BEAFC111D578FFBD3BE1B9FC4, ___failMat_18)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_failMat_18() const { return ___failMat_18; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_failMat_18() { return &___failMat_18; }
	inline void set_failMat_18(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___failMat_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___failMat_18), (void*)value);
	}

	inline static int32_t get_offset_of_fireTimer_19() { return static_cast<int32_t>(offsetof(Tank_tCBDDA0BA03D5014BEAFC111D578FFBD3BE1B9FC4, ___fireTimer_19)); }
	inline float get_fireTimer_19() const { return ___fireTimer_19; }
	inline float* get_address_of_fireTimer_19() { return &___fireTimer_19; }
	inline void set_fireTimer_19(float value)
	{
		___fireTimer_19 = value;
	}
};


// Wanderer
struct Wanderer_t62F7852567755EF90A5BAB82EE13473D66A94769  : public Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36
{
public:
	// System.Single Wanderer::wanderOffset
	float ___wanderOffset_10;
	// System.Single Wanderer::wanderRadius
	float ___wanderRadius_11;
	// System.Single Wanderer::wanderRate
	float ___wanderRate_12;
	// Wander Wanderer::mySteeringType
	Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E * ___mySteeringType_13;

public:
	inline static int32_t get_offset_of_wanderOffset_10() { return static_cast<int32_t>(offsetof(Wanderer_t62F7852567755EF90A5BAB82EE13473D66A94769, ___wanderOffset_10)); }
	inline float get_wanderOffset_10() const { return ___wanderOffset_10; }
	inline float* get_address_of_wanderOffset_10() { return &___wanderOffset_10; }
	inline void set_wanderOffset_10(float value)
	{
		___wanderOffset_10 = value;
	}

	inline static int32_t get_offset_of_wanderRadius_11() { return static_cast<int32_t>(offsetof(Wanderer_t62F7852567755EF90A5BAB82EE13473D66A94769, ___wanderRadius_11)); }
	inline float get_wanderRadius_11() const { return ___wanderRadius_11; }
	inline float* get_address_of_wanderRadius_11() { return &___wanderRadius_11; }
	inline void set_wanderRadius_11(float value)
	{
		___wanderRadius_11 = value;
	}

	inline static int32_t get_offset_of_wanderRate_12() { return static_cast<int32_t>(offsetof(Wanderer_t62F7852567755EF90A5BAB82EE13473D66A94769, ___wanderRate_12)); }
	inline float get_wanderRate_12() const { return ___wanderRate_12; }
	inline float* get_address_of_wanderRate_12() { return &___wanderRate_12; }
	inline void set_wanderRate_12(float value)
	{
		___wanderRate_12 = value;
	}

	inline static int32_t get_offset_of_mySteeringType_13() { return static_cast<int32_t>(offsetof(Wanderer_t62F7852567755EF90A5BAB82EE13473D66A94769, ___mySteeringType_13)); }
	inline Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E * get_mySteeringType_13() const { return ___mySteeringType_13; }
	inline Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E ** get_address_of_mySteeringType_13() { return &___mySteeringType_13; }
	inline void set_mySteeringType_13(Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E * value)
	{
		___mySteeringType_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mySteeringType_13), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Flocker[]
struct FlockerU5BU5D_t087D0D7BC275921E3575228D53DB5C1EFA1B71AA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8 * m_Items[1];

public:
	inline Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared (const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);

// System.Void SteeringOutput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteeringOutput__ctor_m324DFBCCE92C73E1BEC5AB73096A0762BBFB7F73 (SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Kinematic>::GetEnumerator()
inline Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A  List_1_GetEnumerator_m1FEDC50F978A2982E4B7F0F8B881490D99C5843A (List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A  (*) (List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Kinematic>::get_Current()
inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * Enumerator_get_Current_m2E7EEE149888540555AD68CF4F36F466ABC52BFE_inline (Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A * __this, const RuntimeMethod* method)
{
	return ((  Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * (*) (Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Kinematic>::MoveNext()
inline bool Enumerator_MoveNext_mD86040F68C5C73B4736290FC07AE3A27C49034C9 (Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Kinematic>::Dispose()
inline void Enumerator_Dispose_m383EF8008DED4B2D672627F30C5D8F5F7932083E (Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB (float ___f0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, int32_t ___index0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// System.Void SteeringBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteeringBehavior__ctor_m36F8FE66341628CC66FCE103529662A0B3B4B423 (SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::DeltaAngle(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_mB1BD0E139ACCAE694968F7D9CB096C60F69CE9FE (float ___current0, float ___target1, const RuntimeMethod* method);
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599 (float ___f0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void Arrive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrive__ctor_mE2408E1F2AFCC6A41C2F3A3A4F7E7C017C85E3E1 (Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E * __this, const RuntimeMethod* method);
// System.Void Align::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Align__ctor_m10EF7B19EF95A4EE0945782AB512D3603AC3D468 (Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 * __this, const RuntimeMethod* method);
// System.Void Kinematic::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kinematic_Update_m90DEAE2534DEF1E85A2B0289FBAAB1A25D476093 (Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * __this, const RuntimeMethod* method);
// System.Void Kinematic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kinematic__ctor_m067A5346E3475380B0E1662CFA2AA3D9495AF89D (Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<SteeringBehavior>::.ctor()
inline void List_1__ctor_m310ACA95AC35DB0ABD08DA9D070473FDEEDA0339 (List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<SteeringBehavior>::Add(!0)
inline void List_1_Add_m3DA0E2C0D5F7659D65FD2AFE1A870FBF111604C8 (List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8 * __this, SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8 *, SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<SteeringBehavior>::GetEnumerator()
inline Enumerator_tB9EB586E3DE9D08DFA77834F31084D2BF7C0D39F  List_1_GetEnumerator_mB002953C1CFA8F48726D91BC4ED4304932F99B01 (List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB9EB586E3DE9D08DFA77834F31084D2BF7C0D39F  (*) (List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<SteeringBehavior>::get_Current()
inline SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1 * Enumerator_get_Current_m9A2DF2335C72E549844B32DD8FF027567B76EE73_inline (Enumerator_tB9EB586E3DE9D08DFA77834F31084D2BF7C0D39F * __this, const RuntimeMethod* method)
{
	return ((  SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1 * (*) (Enumerator_tB9EB586E3DE9D08DFA77834F31084D2BF7C0D39F *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<SteeringBehavior>::MoveNext()
inline bool Enumerator_MoveNext_m01CADAD371D4EBFB094855F8AF63C98AF24B2AE0 (Enumerator_tB9EB586E3DE9D08DFA77834F31084D2BF7C0D39F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB9EB586E3DE9D08DFA77834F31084D2BF7C0D39F *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<SteeringBehavior>::Dispose()
inline void Enumerator_Dispose_mC0D1B48DED731BB4F7742316A38A713371E224B3 (Enumerator_tB9EB586E3DE9D08DFA77834F31084D2BF7C0D39F * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB9EB586E3DE9D08DFA77834F31084D2BF7C0D39F *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void CameraBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBuffer__ctor_mEA3FFA9438FC7325A5B705A2389CB9F6449A96F4 (CameraBuffer_t6E0E6A560C6CB9DB3210A3848DE4467020D6E266 * __this, const RuntimeMethod* method);
// System.Void CollisionAvoidance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionAvoidance__ctor_m5E2164D32001C11FE43BC749D29D4CE8697EE26F (CollisionAvoidance_tD20AF542B6DBE815D6F87F28324FD1EE7909CF38 * __this, const RuntimeMethod* method);
// System.Void LookWhereGoing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookWhereGoing__ctor_m225781ABC6447E4CC44715861AF5635DA2DA5115 (LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Trajectory> Trajectory::calculateFiringSolutions(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720 * Trajectory_calculateFiringSolutions_mD82A56FD483B05C46DBCD8E91D7BDD6F83A68EBC (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, float ___exitSpd2, List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___obstacles3, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Trajectory>::GetEnumerator()
inline Enumerator_t7EFFE3BB0F091E033881873D4DDB73CD7CCBDF06  List_1_GetEnumerator_m2217EBA5E7D405491F517266C31F8AC323B7B093 (List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7EFFE3BB0F091E033881873D4DDB73CD7CCBDF06  (*) (List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Trajectory>::get_Current()
inline Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * Enumerator_get_Current_mF952351088F6B8B523EBBD6A5163FD9583EBE878_inline (Enumerator_t7EFFE3BB0F091E033881873D4DDB73CD7CCBDF06 * __this, const RuntimeMethod* method)
{
	return ((  Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * (*) (Enumerator_t7EFFE3BB0F091E033881873D4DDB73CD7CCBDF06 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Trajectory>::MoveNext()
inline bool Enumerator_MoveNext_mCE9E6E1B120A477E99BD05C9FA4B5439939C7FE6 (Enumerator_t7EFFE3BB0F091E033881873D4DDB73CD7CCBDF06 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7EFFE3BB0F091E033881873D4DDB73CD7CCBDF06 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Trajectory>::Dispose()
inline void Enumerator_Dispose_m2AA5EF636B8BEBBA403078BE8197E693C9903A5C (Enumerator_t7EFFE3BB0F091E033881873D4DDB73CD7CCBDF06 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7EFFE3BB0F091E033881873D4DDB73CD7CCBDF06 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void BallisticBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallisticBehavior__ctor_m4F65A485EDC3DD6A75ED581FA46F1A83B6995F7F (BallisticBehavior_tF29BFEC2F520F886D86593A8AB1D7D7F9DB46CDE * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<Flocker>()
inline FlockerU5BU5D_t087D0D7BC275921E3575228D53DB5C1EFA1B71AA* Object_FindObjectsOfType_TisFlocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8_m82ECE1488CFA901E86ECC70B838C92BB5656882D (const RuntimeMethod* method)
{
	return ((  FlockerU5BU5D_t087D0D7BC275921E3575228D53DB5C1EFA1B71AA* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// System.Void System.Collections.Generic.List`1<Kinematic>::Add(!0)
inline void List_1_Add_m5554CF65EE89B4C164DAC401ED0F282BB5B08E2A (List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * __this, Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 *, Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<Kinematic>::get_Count()
inline int32_t List_1_get_Count_m0275E4209C9D7D871B1830BA10E535E973C740A8_inline (List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void PrioritizedFlocking::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrioritizedFlocking__ctor_m81DD31767A1E6788D8F39DB20CA8C2A619902B95 (PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * __this, const RuntimeMethod* method);
// System.Void Separation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Separation__ctor_m508F8F5DF365AE9C624B42D836ED93028714778A (Separation_tB627F4D516766D919037B2256412BE43C0539007 * __this, const RuntimeMethod* method);
// System.Void VelocityAlign::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelocityAlign__ctor_m8739EF8AAE993566E6633ED0C462D56A163646E3 (VelocityAlign_tDDB9C6C2E3164B7761196EF435164BFF365B9509 * __this, const RuntimeMethod* method);
// System.Void SpeedMatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeedMatch__ctor_m63038E9952B92E684011CB84BBA8E0FE07CD1489 (SpeedMatch_tBE04550772E96FFF0DB8C832949CEC09A9346294 * __this, const RuntimeMethod* method);
// System.Void Pursue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pursue__ctor_m7D74EE1F0914B6CF22C6B5D1E5A65D1ABFE7B4CB (Pursue_tD122B2A570231794548505BE2B891BCBCCF88F8E * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void BlendedBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlendedBehavior__ctor_m2025EE90A9BD59DE2FBE81EF15468E50A82071B8 (BlendedBehavior_t2AF211BE7DEE0EF54A7A3F64CB4976DFD8B7F330 * __this, const RuntimeMethod* method);
// System.Single Path::GetParam(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Path_GetParam_m4934DC3D26ACB495CFE5699B46147AD18324AF7D (Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___lastParam1, const RuntimeMethod* method);
// UnityEngine.Vector3 Path::GetPosition(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Path_GetPosition_m572102100146EC5DD6D28680AE86363FF66B210C (Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862 * __this, float ___param0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___defaultPosition1, const RuntimeMethod* method);
// System.Void Seek::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Seek__ctor_mA0F97EBD068DB6090AEAEE4E5F1A87640F4EB33A (Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF * __this, const RuntimeMethod* method);
// System.Void ObstacleAvoidance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleAvoidance__ctor_m753DA6E64DD7A2DFC2E8E5785B14A347575A6689 (ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * __this, const RuntimeMethod* method);
// System.Void AggressiveCollisionAvoidance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AggressiveCollisionAvoidance__ctor_mB76A315A524F34796E2D75636342445C524FFC22 (AggressiveCollisionAvoidance_tD56365F9F9CCD2F4CF4250DB32CB0BB6F4BBFDB2 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Single ObstacleAvoidance::vectorToAngle(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ObstacleAvoidance_vectorToAngle_m159BAEE23D5E086B7A32BDE620CBB8F840F2C456 (ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// UnityEngine.Vector3 ObstacleAvoidance::angleToVector(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ObstacleAvoidance_angleToVector_mAB5C33B27C098D5EB2825712FFC340696B22A5D7 (ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * __this, float ___angle0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m18E12C65F127D1AA50D196623F04F81CB138FD12 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(!0)
inline bool List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674 (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_positiveInfinity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_positiveInfinity_mFBABFE23E517E2C66E78AC60C79B8B9A73CF5229 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E (float ___f0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single Path::DistanceToTarget(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Path_DistanceToTarget_mB39AC0173855B8D75192870F343CDC062FF16940 (Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862 * __this, int32_t ___idx0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Single Path::ClosestParamAlongLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Path_ClosestParamAlongLine_m566E04061CD671835EC47A932647BD5F93DCAA8D (Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void Path::createPathTarget(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path_createPathTarget_m3918A8ACE75B8E4A31599995A23A91333FBA51E8 (Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void FollowPath::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPath__ctor_mD8E1D7FA1071C424321B90F54CA2E26F43117CA1 (FollowPath_t9F2D06DD7295A8D1D97B5B6593FD432730E16A58 * __this, const RuntimeMethod* method);
// System.Void UserControlled::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserControlled__ctor_mB3EC366AEC975B937DDA1D1E2DC83BA9CFF0092D (UserControlled_tBFDF8B501E956DB77DCFE541D286ACC17815E95E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<BlendedBehavior>::.ctor()
inline void List_1__ctor_m55D6A69A092192BB5EC43D356A6DA4DE55B3A880 (List_1_tE14D0C6C55782752906F8175A6571F39953F299B * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE14D0C6C55782752906F8175A6571F39953F299B *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<BlendedBehavior>::GetEnumerator()
inline Enumerator_tBD4F8B6B56090FDF0A69CA70F90FC5E73D9DA3C4  List_1_GetEnumerator_m1C68671E032F7E52E76DD2867A2A78DA45FA673A (List_1_tE14D0C6C55782752906F8175A6571F39953F299B * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tBD4F8B6B56090FDF0A69CA70F90FC5E73D9DA3C4  (*) (List_1_tE14D0C6C55782752906F8175A6571F39953F299B *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<BlendedBehavior>::get_Current()
inline BlendedBehavior_t2AF211BE7DEE0EF54A7A3F64CB4976DFD8B7F330 * Enumerator_get_Current_m535316519D356FB25DCAFEE93370A193AEF42FA1_inline (Enumerator_tBD4F8B6B56090FDF0A69CA70F90FC5E73D9DA3C4 * __this, const RuntimeMethod* method)
{
	return ((  BlendedBehavior_t2AF211BE7DEE0EF54A7A3F64CB4976DFD8B7F330 * (*) (Enumerator_tBD4F8B6B56090FDF0A69CA70F90FC5E73D9DA3C4 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<BlendedBehavior>::MoveNext()
inline bool Enumerator_MoveNext_m880BE98E6A94A4D0D21E8AED285415B4746B1D3A (Enumerator_tBD4F8B6B56090FDF0A69CA70F90FC5E73D9DA3C4 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tBD4F8B6B56090FDF0A69CA70F90FC5E73D9DA3C4 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<BlendedBehavior>::Dispose()
inline void Enumerator_Dispose_mE29A1F5AE3674BFE88E3053DDC38C047D5F3C986 (Enumerator_tBD4F8B6B56090FDF0A69CA70F90FC5E73D9DA3C4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBD4F8B6B56090FDF0A69CA70F90FC5E73D9DA3C4 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void GeneralAvoidance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneralAvoidance__ctor_m7F263F78C0987132A5764062E7F1AC5788EFB5CD (GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<BlendedBehavior>::Add(!0)
inline void List_1_Add_m510A17ABFE245EDBEA8AD0743F574A5392F460D3 (List_1_tE14D0C6C55782752906F8175A6571F39953F299B * __this, BlendedBehavior_t2AF211BE7DEE0EF54A7A3F64CB4976DFD8B7F330 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE14D0C6C55782752906F8175A6571F39953F299B *, BlendedBehavior_t2AF211BE7DEE0EF54A7A3F64CB4976DFD8B7F330 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void Flocking::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flocking__ctor_m9D7829F48420390AF758D9560C32B23BD672B9BD (Flocking_t43CEE98336DA04A3F685A25FC909ACB560366EFE * __this, const RuntimeMethod* method);
// System.Void Wander::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wander__ctor_mFD179FAF9046380E9CA1BD6655C090BE1F89B06D (Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E * __this, const RuntimeMethod* method);
// System.Void Prioritization::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Prioritization__ctor_mC52C990F02FF31CC990585012DE45762C88CD09E (Prioritization_t95C41DC54D60DBB2449E0BE4B1C36FD155E5D363 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Physics_get_gravity_m58D5D94276B1E7A04E9F7108EEAAB7AB786BA532 (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Kinematic>()
inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * GameObject_GetComponent_TisKinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36_m261E08D5C7A867FDD4AC90E54A81E323E284C45E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector3 Seek::getTargetPosition(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Seek_getTargetPosition_mB7D564DF63E6AFE13B962CC545DB7A8DF8FDB661 (Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF * __this, bool* ___valid0, const RuntimeMethod* method);
// System.Void Face::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Face__ctor_mC49672386D6E203C238682EEAEC5FA96C265C4C1 (Face_tAB806D390A7B7F99E145FAF9420C74E544D5AE50 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Log(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Log_mF7F3624FA030AB57AD8C1F4CAF084B2DCC99897A (float ___f0, float ___p1, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Material_get_color_m7926F7BE68B4D000306738C1EAABEB7ADFB97821 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void Firing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Firing__ctor_m5A699EE640BF729C756D69FB69FFD2D706B4474F (Firing_t8D2D227424CC1247D6EA7389C9D9D1FC14556E31 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___euler0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<Kinematic>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * Object_Instantiate_TisKinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36_mF0A40EAF77D81C72D6066890A5C9BFA7C4174143 (Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * (*) (Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void System.Collections.Generic.List`1<Impactable>::.ctor()
inline void List_1__ctor_mB46962C3860A5E5BF5B9B2DB6694B803148D6C80 (List_1_t5077A09B97AEA8F3F00983A9B3A5FDEF8A5B66A6 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5077A09B97AEA8F3F00983A9B3A5FDEF8A5B66A6 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Impact>::.ctor()
inline void List_1__ctor_m1FDEFA58DE0ADEF431741F5D3CA92BFFBF72EA29 (List_1_t7059AC9A2D33D3DB433E18D5A6E36E07E45F717E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7059AC9A2D33D3DB433E18D5A6E36E07E45F717E *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Impact::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Impact__ctor_mBFE61EC188002BAA1A9D0A58A653FB1B735CBA03 (Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___impactPoint0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Impact>::Add(!0)
inline void List_1_Add_mF1EA730C9F95499D7CB4C1EA6D4F627056DD1391 (List_1_t7059AC9A2D33D3DB433E18D5A6E36E07E45F717E * __this, Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7059AC9A2D33D3DB433E18D5A6E36E07E45F717E *, Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83 (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Trajectory>::.ctor()
inline void List_1__ctor_m8EBD2B88387E6D883B93A48D53F4D9AED94D5B0F (List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void Trajectory::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trajectory__ctor_mCD37A202D60D3DC47A0EBD6EB135309EFD20DDDC (Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___launch1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___impact2, float ___impactTime3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Trajectory>::Add(!0)
inline void List_1_Add_mE7C35E8597C85E4CB84DAAC613333CD4DD149384 (List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720 * __this, Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720 *, Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// Impact Trajectory::findFirstIntersection(Trajectory,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8 * Trajectory_findFirstIntersection_m0BADA34A27A95AFD08ACAC434D97AEE430441169 (Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * __this, Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * ___traj0, int32_t ___rayCount1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m77E2F3719EC63690632731872A691FF6A27C589C (String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// UnityEngine.Vector3 Wander::angleToVector(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Wander_angleToVector_m16ED3E89156D2770317249A948A78EE34524A501 (Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E * __this, float ___angle0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// SteeringOutput AggressiveCollisionAvoidance::getSteering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * AggressiveCollisionAvoidance_getSteering_m52B8783EFAAEA165E2D5EBC70C43F06B6853B4BE (AggressiveCollisionAvoidance_tD56365F9F9CCD2F4CF4250DB32CB0BB6F4BBFDB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m383EF8008DED4B2D672627F30C5D8F5F7932083E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD86040F68C5C73B4736290FC07AE3A27C49034C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2E7EEE149888540555AD68CF4F36F466ABC52BFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1FEDC50F978A2982E4B7F0F8B881490D99C5843A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * V_0 = NULL;
	float V_1 = 0.0f;
	Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * V_2 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * V_7 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_9;
	memset((&V_9), 0, sizeof(V_9));
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// SteeringOutput result = new SteeringOutput();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_0 = (SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D *)il2cpp_codegen_object_new(SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		SteeringOutput__ctor_m324DFBCCE92C73E1BEC5AB73096A0762BBFB7F73(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// result.linear = Vector3.zero;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_1 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		L_1->set_linear_0(L_2);
		// result.angular = 0;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_3 = V_0;
		L_3->set_angular_1((0.0f));
		// if (character.linearVelocity.magnitude <= 0) return result;
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_4 = __this->get_character_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = L_4->get_address_of_linearVelocity_4();
		float L_6;
		L_6 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_5, /*hidden argument*/NULL);
		if ((!(((float)L_6) <= ((float)(0.0f)))))
		{
			goto IL_0035;
		}
	}
	{
		// if (character.linearVelocity.magnitude <= 0) return result;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_7 = V_0;
		return L_7;
	}

IL_0035:
	{
		// float minTime = float.MaxValue;
		V_1 = ((std::numeric_limits<float>::max)());
		// Kinematic minTarget = null;
		V_2 = (Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)NULL;
		// Vector3 minRelPos = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_3 = L_8;
		// Vector3 minRelVel = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_4 = L_9;
		// foreach (Kinematic target in targets)
		List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * L_10 = __this->get_targets_3();
		Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A  L_11;
		L_11 = List_1_GetEnumerator_m1FEDC50F978A2982E4B7F0F8B881490D99C5843A(L_10, /*hidden argument*/List_1_GetEnumerator_m1FEDC50F978A2982E4B7F0F8B881490D99C5843A_RuntimeMethod_var);
		V_6 = L_11;
	}

IL_0057:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f1;
		}

IL_005c:
		{
			// foreach (Kinematic target in targets)
			Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_12;
			L_12 = Enumerator_get_Current_m2E7EEE149888540555AD68CF4F36F466ABC52BFE_inline((Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A *)(&V_6), /*hidden argument*/Enumerator_get_Current_m2E7EEE149888540555AD68CF4F36F466ABC52BFE_RuntimeMethod_var);
			V_7 = L_12;
			// Vector3 relPos = target.transform.position - character.transform.position;
			Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_13 = V_7;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
			L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_13, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
			L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
			Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_16 = __this->get_character_1();
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
			L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_16, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
			L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
			L_19 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_15, L_18, /*hidden argument*/NULL);
			V_8 = L_19;
			// Vector3 relVel = character.linearVelocity - target.linearVelocity;
			Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_20 = __this->get_character_1();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = L_20->get_linearVelocity_4();
			Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_22 = V_7;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = L_22->get_linearVelocity_4();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
			L_24 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_21, L_23, /*hidden argument*/NULL);
			V_9 = L_24;
			// float relSpd = relVel.magnitude;
			float L_25;
			L_25 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_9), /*hidden argument*/NULL);
			V_10 = L_25;
			// float timeToColl = Vector3.Dot(relPos, relVel) / (relSpd * relSpd);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = V_8;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_9;
			float L_28;
			L_28 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_26, L_27, /*hidden argument*/NULL);
			float L_29 = V_10;
			float L_30 = V_10;
			V_11 = ((float)((float)L_28/(float)((float)il2cpp_codegen_multiply((float)L_29, (float)L_30))));
			// float dist = relPos.magnitude;
			float L_31;
			L_31 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_8), /*hidden argument*/NULL);
			// float sep = dist - relSpd * timeToColl;
			float L_32 = V_10;
			float L_33 = V_11;
			// if (sep > 2 * radius) continue;
			float L_34 = __this->get_radius_4();
			if ((((float)((float)il2cpp_codegen_subtract((float)L_31, (float)((float)il2cpp_codegen_multiply((float)L_32, (float)L_33))))) > ((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_34)))))
			{
				goto IL_00f1;
			}
		}

IL_00d6:
		{
			// if (timeToColl > 0 && timeToColl < minTime)
			float L_35 = V_11;
			if ((!(((float)L_35) > ((float)(0.0f)))))
			{
				goto IL_00f1;
			}
		}

IL_00df:
		{
			float L_36 = V_11;
			float L_37 = V_1;
			if ((!(((float)L_36) < ((float)L_37))))
			{
				goto IL_00f1;
			}
		}

IL_00e4:
		{
			// minTime = timeToColl;
			float L_38 = V_11;
			V_1 = L_38;
			// minTarget = target;
			Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_39 = V_7;
			V_2 = L_39;
			// minRelPos = relPos;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = V_8;
			V_3 = L_40;
			// minRelVel = relVel;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = V_9;
			V_4 = L_41;
		}

IL_00f1:
		{
			// foreach (Kinematic target in targets)
			bool L_42;
			L_42 = Enumerator_MoveNext_mD86040F68C5C73B4736290FC07AE3A27C49034C9((Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A *)(&V_6), /*hidden argument*/Enumerator_MoveNext_mD86040F68C5C73B4736290FC07AE3A27C49034C9_RuntimeMethod_var);
			if (L_42)
			{
				goto IL_005c;
			}
		}

IL_00fd:
		{
			IL2CPP_LEAVE(0x10D, FINALLY_00ff);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ff;
	}

FINALLY_00ff:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m383EF8008DED4B2D672627F30C5D8F5F7932083E((Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A *)(&V_6), /*hidden argument*/Enumerator_Dispose_m383EF8008DED4B2D672627F30C5D8F5F7932083E_RuntimeMethod_var);
		IL2CPP_END_FINALLY(255)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(255)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x10D, IL_010d)
	}

IL_010d:
	{
		// if (minTarget == null) return result;
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_43 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_43, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_0118;
		}
	}
	{
		// if (minTarget == null) return result;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_45 = V_0;
		return L_45;
	}

IL_0118:
	{
		// Vector3 checkPlane = Vector3.Cross(minRelPos, Vector3.up).normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4(L_46, L_47, /*hidden argument*/NULL);
		V_12 = L_48;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		L_49 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_12), /*hidden argument*/NULL);
		// float direction = Mathf.Sign(Vector3.Dot(checkPlane, minRelVel));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50 = V_4;
		float L_51;
		L_51 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_49, L_50, /*hidden argument*/NULL);
		float L_52;
		L_52 = Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB(L_51, /*hidden argument*/NULL);
		V_5 = L_52;
		// result.linear = direction * Vector3.Cross(character.linearVelocity, Vector3.up).normalized;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_53 = V_0;
		float L_54 = V_5;
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_55 = __this->get_character_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56 = L_55->get_linearVelocity_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
		L_58 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4(L_56, L_57, /*hidden argument*/NULL);
		V_12 = L_58;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
		L_59 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_12), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		L_60 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(L_54, L_59, /*hidden argument*/NULL);
		L_53->set_linear_0(L_60);
		// if (minTarget.linearVelocity.magnitude > 0 && Vector3.Dot(minTarget.linearVelocity, character.linearVelocity) > -0.4)
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_61 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_62 = L_61->get_address_of_linearVelocity_4();
		float L_63;
		L_63 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_62, /*hidden argument*/NULL);
		if ((!(((float)L_63) > ((float)(0.0f)))))
		{
			goto IL_01b0;
		}
	}
	{
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_64 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65 = L_64->get_linearVelocity_4();
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_66 = __this->get_character_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67 = L_66->get_linearVelocity_4();
		float L_68;
		L_68 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_65, L_67, /*hidden argument*/NULL);
		if ((!(((double)((double)((double)L_68))) > ((double)(-0.40000000000000002)))))
		{
			goto IL_01b0;
		}
	}
	{
		// result.linear += -minRelPos;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_69 = V_0;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_70 = L_69;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71 = L_70->get_linear_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_73;
		L_73 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_72, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74;
		L_74 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_71, L_73, /*hidden argument*/NULL);
		L_70->set_linear_0(L_74);
	}

IL_01b0:
	{
		// result.linear.Normalize();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_75 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_76 = L_75->get_address_of_linear_0();
		Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_76, /*hidden argument*/NULL);
		// result.linear *= maxAcceleration;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_77 = V_0;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_78 = L_77;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_79 = L_78->get_linear_0();
		float L_80 = __this->get_maxAcceleration_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_81;
		L_81 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_79, L_80, /*hidden argument*/NULL);
		L_78->set_linear_0(L_81);
		// if (debug)
		bool L_82 = __this->get_debug_5();
		if (!L_82)
		{
			goto IL_0280;
		}
	}
	{
		// lr1.SetPosition(0, character.transform.position);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_83 = __this->get_lr1_6();
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_84 = __this->get_character_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_85;
		L_85 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_84, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_86;
		L_86 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_85, /*hidden argument*/NULL);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_83, 0, L_86, /*hidden argument*/NULL);
		// lr2.SetPosition(0, character.transform.position);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_87 = __this->get_lr2_7();
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_88 = __this->get_character_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_89;
		L_89 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_88, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_89, /*hidden argument*/NULL);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_87, 0, L_90, /*hidden argument*/NULL);
		// lr1.SetPosition(1, minTarget.transform.position);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_91 = __this->get_lr1_6();
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_92 = V_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_93;
		L_93 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_92, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_94;
		L_94 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_93, /*hidden argument*/NULL);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_91, 1, L_94, /*hidden argument*/NULL);
		// lr2.SetPosition(1, character.transform.position + minRelVel.normalized * 2);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_95 = __this->get_lr2_7();
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_96 = __this->get_character_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_97;
		L_97 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_96, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_98;
		L_98 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_97, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_99;
		L_99 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_100;
		L_100 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_99, (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_101;
		L_101 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_98, L_100, /*hidden argument*/NULL);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_95, 1, L_101, /*hidden argument*/NULL);
		// lr1.material = relPosMat;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_102 = __this->get_lr1_6();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_103 = __this->get_relPosMat_8();
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_102, L_103, /*hidden argument*/NULL);
		// lr2.material = relVelMat;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_104 = __this->get_lr2_7();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_105 = __this->get_relVelMat_9();
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_104, L_105, /*hidden argument*/NULL);
	}

IL_0280:
	{
		// return result;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_106 = V_0;
		return L_106;
	}
}
// System.Void AggressiveCollisionAvoidance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AggressiveCollisionAvoidance__ctor_mB76A315A524F34796E2D75636342445C524FFC22 (AggressiveCollisionAvoidance_tD56365F9F9CCD2F4CF4250DB32CB0BB6F4BBFDB2 * __this, const RuntimeMethod* method)
{
	{
		// float maxAcceleration = 1f;
		__this->set_maxAcceleration_2((1.0f));
		// public float radius = 1f;
		__this->set_radius_4((1.0f));
		SteeringBehavior__ctor_m36F8FE66341628CC66FCE103529662A0B3B4B423(__this, /*hidden argument*/NULL);
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
// System.Single Align::getTargetAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Align_getTargetAngle_mEDE46EC0AF59CF2A0D3948341F5D2AEE76B83539 (Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 * __this, const RuntimeMethod* method)
{
	{
		// return target.transform.eulerAngles.y;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_target_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_y_3();
		return L_3;
	}
}
// UnityEngine.Vector3 Align::getDesiredLinear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Align_getDesiredLinear_mCF4C373DEA3354B093E4976C3DD041DB98B8309E (Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 * __this, const RuntimeMethod* method)
{
	{
		// return Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		return L_0;
	}
}
// SteeringOutput Align::getSteering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * Align_getSteering_m4C8327943D2EE69EC6A5B27FBBA9410A3B0F3392 (Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float G_B6_0 = 0.0f;
	{
		// SteeringOutput result = new SteeringOutput();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_0 = (SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D *)il2cpp_codegen_object_new(SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		SteeringOutput__ctor_m324DFBCCE92C73E1BEC5AB73096A0762BBFB7F73(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// float rotation = Mathf.DeltaAngle(character.transform.eulerAngles.y, getTargetAngle());
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_1 = __this->get_character_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_y_3();
		float L_5;
		L_5 = VirtFuncInvoker0< float >::Invoke(5 /* System.Single Align::getTargetAngle() */, __this);
		float L_6;
		L_6 = Mathf_DeltaAngle_mB1BD0E139ACCAE694968F7D9CB096C60F69CE9FE(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// float rotationSize = Mathf.Abs(rotation);
		float L_7 = V_1;
		float L_8;
		L_8 = fabsf(L_7);
		V_2 = L_8;
		// float targetRotation = 0.0f;
		V_3 = (0.0f);
		// if (rotationSize > slowRadius)
		float L_9 = V_2;
		float L_10 = __this->get_slowRadius_5();
		if ((!(((float)L_9) > ((float)L_10))))
		{
			goto IL_0046;
		}
	}
	{
		// targetRotation = maxRotation;
		float L_11 = __this->get_maxRotation_4();
		V_3 = L_11;
		// }
		goto IL_0056;
	}

IL_0046:
	{
		// targetRotation = maxRotation * rotationSize / slowRadius;
		float L_12 = __this->get_maxRotation_4();
		float L_13 = V_2;
		float L_14 = __this->get_slowRadius_5();
		V_3 = ((float)((float)((float)il2cpp_codegen_multiply((float)L_12, (float)L_13))/(float)L_14));
	}

IL_0056:
	{
		// targetRotation *= rotation / rotationSize;
		float L_15 = V_3;
		float L_16 = V_1;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_multiply((float)L_15, (float)((float)((float)L_16/(float)L_17))));
		// float currentAngularVelocity = float.IsNaN(character.angularVelocity) ? 0f : character.angularVelocity;
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_18 = __this->get_character_1();
		float L_19 = L_18->get_angularVelocity_5();
		bool L_20;
		L_20 = Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599(L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_007b;
		}
	}
	{
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_21 = __this->get_character_1();
		float L_22 = L_21->get_angularVelocity_5();
		G_B6_0 = L_22;
		goto IL_0080;
	}

IL_007b:
	{
		G_B6_0 = (0.0f);
	}

IL_0080:
	{
		V_4 = G_B6_0;
		// result.angular = targetRotation - currentAngularVelocity;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_23 = V_0;
		float L_24 = V_3;
		float L_25 = V_4;
		L_23->set_angular_1(((float)il2cpp_codegen_subtract((float)L_24, (float)L_25)));
		// result.angular /= timeToTarget;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_26 = V_0;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_27 = L_26;
		float L_28 = L_27->get_angular_1();
		float L_29 = __this->get_timeToTarget_6();
		L_27->set_angular_1(((float)((float)L_28/(float)L_29)));
		// float angularAcceleration = Mathf.Abs(result.angular);
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_30 = V_0;
		float L_31 = L_30->get_angular_1();
		float L_32;
		L_32 = fabsf(L_31);
		V_5 = L_32;
		// if (angularAcceleration > maxAngularAcceleration)
		float L_33 = V_5;
		float L_34 = __this->get_maxAngularAcceleration_3();
		if ((!(((float)L_33) > ((float)L_34))))
		{
			goto IL_00d8;
		}
	}
	{
		// result.angular /= angularAcceleration;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_35 = V_0;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_36 = L_35;
		float L_37 = L_36->get_angular_1();
		float L_38 = V_5;
		L_36->set_angular_1(((float)((float)L_37/(float)L_38)));
		// result.angular *= maxAngularAcceleration;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_39 = V_0;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_40 = L_39;
		float L_41 = L_40->get_angular_1();
		float L_42 = __this->get_maxAngularAcceleration_3();
		L_40->set_angular_1(((float)il2cpp_codegen_multiply((float)L_41, (float)L_42)));
	}

IL_00d8:
	{
		// result.linear = getDesiredLinear();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_43 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = VirtFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(6 /* UnityEngine.Vector3 Align::getDesiredLinear() */, __this);
		L_43->set_linear_0(L_44);
		// return result;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_45 = V_0;
		return L_45;
	}
}
// System.Void Align::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Align__ctor_m10EF7B19EF95A4EE0945782AB512D3603AC3D468 (Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 * __this, const RuntimeMethod* method)
{
	{
		// public float maxAngularAcceleration = 100f; // 5
		__this->set_maxAngularAcceleration_3((100.0f));
		// public float maxRotation = 45f; // maxAngularVelocity
		__this->set_maxRotation_4((45.0f));
		// float slowRadius = 10f;
		__this->set_slowRadius_5((10.0f));
		// float timeToTarget = 0.1f;
		__this->set_timeToTarget_6((0.100000001f));
		SteeringBehavior__ctor_m36F8FE66341628CC66FCE103529662A0B3B4B423(__this, /*hidden argument*/NULL);
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
// SteeringOutput Arrive::getSteering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * Arrive_getSteering_m260DDB895A10088452CF9AC1BC4EB803C7AD7774 (Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * V_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// SteeringOutput result = new SteeringOutput();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_0 = (SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D *)il2cpp_codegen_object_new(SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		SteeringOutput__ctor_m324DFBCCE92C73E1BEC5AB73096A0762BBFB7F73(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// Vector3 direction = target.transform.position - character.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_target_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_4 = __this->get_character_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_3, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// float distance = direction.magnitude;
		float L_8;
		L_8 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_8;
		// float targetSpeed = 0f;
		V_3 = (0.0f);
		// if (distance > slowRadius)
		float L_9 = V_2;
		float L_10 = __this->get_slowRadius_6();
		if ((!(((float)L_9) > ((float)L_10))))
		{
			goto IL_004c;
		}
	}
	{
		// targetSpeed = maxSpeed;
		float L_11 = __this->get_maxSpeed_4();
		V_3 = L_11;
		// }
		goto IL_0063;
	}

IL_004c:
	{
		// targetSpeed = maxSpeed * (distance - targetRadius) / targetRadius;
		float L_12 = __this->get_maxSpeed_4();
		float L_13 = V_2;
		float L_14 = __this->get_targetRadius_5();
		float L_15 = __this->get_targetRadius_5();
		V_3 = ((float)((float)((float)il2cpp_codegen_multiply((float)L_12, (float)((float)il2cpp_codegen_subtract((float)L_13, (float)L_14))))/(float)L_15));
	}

IL_0063:
	{
		// Vector3 targetVelocity = direction;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_1;
		V_4 = L_16;
		// targetVelocity.Normalize();
		Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		// targetVelocity *= targetSpeed;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_4;
		float L_18 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_17, L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		// result.linear = targetVelocity - character.linearVelocity;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_20 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_4;
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_22 = __this->get_character_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = L_22->get_linearVelocity_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_21, L_23, /*hidden argument*/NULL);
		L_20->set_linear_0(L_24);
		// result.linear /= timeToTarget;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_25 = V_0;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_26 = L_25;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = L_26->get_linear_0();
		float L_28 = __this->get_timeToTarget_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_27, L_28, /*hidden argument*/NULL);
		L_26->set_linear_0(L_29);
		// if (result.linear.magnitude > maxAcceleration)
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_30 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_31 = L_30->get_address_of_linear_0();
		float L_32;
		L_32 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_31, /*hidden argument*/NULL);
		float L_33 = __this->get_maxAcceleration_3();
		if ((!(((float)L_32) > ((float)L_33))))
		{
			goto IL_00db;
		}
	}
	{
		// result.linear.Normalize();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_34 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_35 = L_34->get_address_of_linear_0();
		Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_35, /*hidden argument*/NULL);
		// result.linear *= maxAcceleration;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_36 = V_0;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_37 = L_36;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = L_37->get_linear_0();
		float L_39 = __this->get_maxAcceleration_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_38, L_39, /*hidden argument*/NULL);
		L_37->set_linear_0(L_40);
	}

IL_00db:
	{
		// return result;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_41 = V_0;
		return L_41;
	}
}
// System.Void Arrive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrive__ctor_mE2408E1F2AFCC6A41C2F3A3A4F7E7C017C85E3E1 (Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E * __this, const RuntimeMethod* method)
{
	{
		// float maxAcceleration = 100f;
		__this->set_maxAcceleration_3((100.0f));
		// float maxSpeed = 10f;
		__this->set_maxSpeed_4((10.0f));
		// float targetRadius = 1.5f;
		__this->set_targetRadius_5((1.5f));
		// float slowRadius = 3f;
		__this->set_slowRadius_6((3.0f));
		// float timeToTarget = 0.1f;
		__this->set_timeToTarget_7((0.100000001f));
		SteeringBehavior__ctor_m36F8FE66341628CC66FCE103529662A0B3B4B423(__this, /*hidden argument*/NULL);
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
// System.Void Arriver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arriver_Start_m85B154E0E25AF3E2E1DC70A1F05D4FD53AC234C3 (Arriver_tD9C5BC79D17B57BD781B40E53972959B0A947CF3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myMoveType = new Arrive();
		Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E * L_0 = (Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E *)il2cpp_codegen_object_new(Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E_il2cpp_TypeInfo_var);
		Arrive__ctor_mE2408E1F2AFCC6A41C2F3A3A4F7E7C017C85E3E1(L_0, /*hidden argument*/NULL);
		__this->set_myMoveType_10(L_0);
		// myMoveType.character = this;
		Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E * L_1 = __this->get_myMoveType_10();
		L_1->set_character_1(__this);
		// myMoveType.target = myTarget;
		Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E * L_2 = __this->get_myMoveType_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_myTarget_8();
		L_2->set_target_2(L_3);
		// myRotateType = new Align();
		Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 * L_4 = (Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)il2cpp_codegen_object_new(Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23_il2cpp_TypeInfo_var);
		Align__ctor_m10EF7B19EF95A4EE0945782AB512D3603AC3D468(L_4, /*hidden argument*/NULL);
		__this->set_myRotateType_11(L_4);
		// myRotateType.character = this;
		Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 * L_5 = __this->get_myRotateType_11();
		L_5->set_character_1(__this);
		// myRotateType.target = myTarget;
		Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 * L_6 = __this->get_myRotateType_11();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_myTarget_8();
		L_6->set_target_2(L_7);
		// }
		return;
	}
}
// System.Void Arriver::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arriver_Update_mE85F6E475A8F603611C569987839A929CD40B67D (Arriver_tD9C5BC79D17B57BD781B40E53972959B0A947CF3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// steeringUpdate = new SteeringOutput();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_0 = (SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D *)il2cpp_codegen_object_new(SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		SteeringOutput__ctor_m324DFBCCE92C73E1BEC5AB73096A0762BBFB7F73(L_0, /*hidden argument*/NULL);
		((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->set_steeringUpdate_9(L_0);
		// steeringUpdate.linear = myMoveType.getSteering().linear;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_1 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_steeringUpdate_9();
		Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E * L_2 = __this->get_myMoveType_10();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_3;
		L_3 = VirtFuncInvoker0< SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * >::Invoke(4 /* SteeringOutput SteeringBehavior::getSteering() */, L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = L_3->get_linear_0();
		L_1->set_linear_0(L_4);
		// steeringUpdate.angular = myRotateType.getSteering().angular;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_5 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_steeringUpdate_9();
		Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 * L_6 = __this->get_myRotateType_11();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_7;
		L_7 = VirtFuncInvoker0< SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * >::Invoke(4 /* SteeringOutput SteeringBehavior::getSteering() */, L_6);
		float L_8 = L_7->get_angular_1();
		L_5->set_angular_1(L_8);
		// base.Update();
		Kinematic_Update_m90DEAE2534DEF1E85A2B0289FBAAB1A25D476093(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Arriver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arriver__ctor_mA8B0D50B2C7D69F1CD2DEF9EBA2CCB942E83244C (Arriver_tD9C5BC79D17B57BD781B40E53972959B0A947CF3 * __this, const RuntimeMethod* method)
{
	{
		Kinematic__ctor_m067A5346E3475380B0E1662CFA2AA3D9495AF89D(__this, /*hidden argument*/NULL);
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
// System.Void BallisticBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallisticBehavior__ctor_m4F65A485EDC3DD6A75ED581FA46F1A83B6995F7F (BallisticBehavior_tF29BFEC2F520F886D86593A8AB1D7D7F9DB46CDE * __this, const RuntimeMethod* method)
{
	{
		// public float weight = 1f;
		__this->set_weight_0((1.0f));
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
// System.Collections.Generic.List`1<SteeringBehavior> BlendedBehavior::getBehaviors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8 * BlendedBehavior_getBehaviors_m68E0D18B252A601BAE95714EE0DA44DC3F89F900 (BlendedBehavior_t2AF211BE7DEE0EF54A7A3F64CB4976DFD8B7F330 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DA0E2C0D5F7659D65FD2AFE1A870FBF111604C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m310ACA95AC35DB0ABD08DA9D070473FDEEDA0339_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8 * V_0 = NULL;
	{
		// List<SteeringBehavior> behaviors = new List<SteeringBehavior>();
		List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8 * L_0 = (List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8 *)il2cpp_codegen_object_new(List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8_il2cpp_TypeInfo_var);
		List_1__ctor_m310ACA95AC35DB0ABD08DA9D070473FDEEDA0339(L_0, /*hidden argument*/List_1__ctor_m310ACA95AC35DB0ABD08DA9D070473FDEEDA0339_RuntimeMethod_var);
		V_0 = L_0;
		// if (defaultBehavior != null)
		SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1 * L_1 = __this->get_defaultBehavior_3();
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// behaviors.Add(defaultBehavior);
		List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8 * L_2 = V_0;
		SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1 * L_3 = __this->get_defaultBehavior_3();
		List_1_Add_m3DA0E2C0D5F7659D65FD2AFE1A870FBF111604C8(L_2, L_3, /*hidden argument*/List_1_Add_m3DA0E2C0D5F7659D65FD2AFE1A870FBF111604C8_RuntimeMethod_var);
	}

IL_001a:
	{
		// return new List<SteeringBehavior>();
		List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8 * L_4 = (List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8 *)il2cpp_codegen_object_new(List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8_il2cpp_TypeInfo_var);
		List_1__ctor_m310ACA95AC35DB0ABD08DA9D070473FDEEDA0339(L_4, /*hidden argument*/List_1__ctor_m310ACA95AC35DB0ABD08DA9D070473FDEEDA0339_RuntimeMethod_var);
		return L_4;
	}
}
// SteeringOutput BlendedBehavior::getSteering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * BlendedBehavior_getSteering_m84F9CA1E56FD89BCEF4D3AAB708671B8C27E9706 (BlendedBehavior_t2AF211BE7DEE0EF54A7A3F64CB4976DFD8B7F330 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC0D1B48DED731BB4F7742316A38A713371E224B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m01CADAD371D4EBFB094855F8AF63C98AF24B2AE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9A2DF2335C72E549844B32DD8FF027567B76EE73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB002953C1CFA8F48726D91BC4ED4304932F99B01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * V_0 = NULL;
	Enumerator_tB9EB586E3DE9D08DFA77834F31084D2BF7C0D39F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1 * V_2 = NULL;
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// SteeringOutput result = new SteeringOutput();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_0 = (SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D *)il2cpp_codegen_object_new(SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		SteeringOutput__ctor_m324DFBCCE92C73E1BEC5AB73096A0762BBFB7F73(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// foreach (SteeringBehavior behavior in getBehaviors())
		List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8 * L_1;
		L_1 = VirtFuncInvoker0< List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8 * >::Invoke(5 /* System.Collections.Generic.List`1<SteeringBehavior> BlendedBehavior::getBehaviors() */, __this);
		Enumerator_tB9EB586E3DE9D08DFA77834F31084D2BF7C0D39F  L_2;
		L_2 = List_1_GetEnumerator_mB002953C1CFA8F48726D91BC4ED4304932F99B01(L_1, /*hidden argument*/List_1_GetEnumerator_mB002953C1CFA8F48726D91BC4ED4304932F99B01_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005f;
		}

IL_0014:
		{
			// foreach (SteeringBehavior behavior in getBehaviors())
			SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1 * L_3;
			L_3 = Enumerator_get_Current_m9A2DF2335C72E549844B32DD8FF027567B76EE73_inline((Enumerator_tB9EB586E3DE9D08DFA77834F31084D2BF7C0D39F *)(&V_1), /*hidden argument*/Enumerator_get_Current_m9A2DF2335C72E549844B32DD8FF027567B76EE73_RuntimeMethod_var);
			V_2 = L_3;
			// SteeringOutput partialResult = behavior.getSteering();
			SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1 * L_4 = V_2;
			SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_5;
			L_5 = VirtFuncInvoker0< SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * >::Invoke(4 /* SteeringOutput SteeringBehavior::getSteering() */, L_4);
			V_3 = L_5;
			// result.linear += partialResult.linear * behavior.weight;
			SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_6 = V_0;
			SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_7 = L_6;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = L_7->get_linear_0();
			SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_9 = V_3;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = L_9->get_linear_0();
			SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1 * L_11 = V_2;
			float L_12 = L_11->get_weight_0();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
			L_13 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_10, L_12, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
			L_14 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_8, L_13, /*hidden argument*/NULL);
			L_7->set_linear_0(L_14);
			// result.angular += partialResult.angular * behavior.weight;
			SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_15 = V_0;
			SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_16 = L_15;
			float L_17 = L_16->get_angular_1();
			SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_18 = V_3;
			float L_19 = L_18->get_angular_1();
			SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1 * L_20 = V_2;
			float L_21 = L_20->get_weight_0();
			L_16->set_angular_1(((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)L_19, (float)L_21)))));
		}

IL_005f:
		{
			// foreach (SteeringBehavior behavior in getBehaviors())
			bool L_22;
			L_22 = Enumerator_MoveNext_m01CADAD371D4EBFB094855F8AF63C98AF24B2AE0((Enumerator_tB9EB586E3DE9D08DFA77834F31084D2BF7C0D39F *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m01CADAD371D4EBFB094855F8AF63C98AF24B2AE0_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_0014;
			}
		}

IL_0068:
		{
			IL2CPP_LEAVE(0x78, FINALLY_006a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006a;
	}

FINALLY_006a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC0D1B48DED731BB4F7742316A38A713371E224B3((Enumerator_tB9EB586E3DE9D08DFA77834F31084D2BF7C0D39F *)(&V_1), /*hidden argument*/Enumerator_Dispose_mC0D1B48DED731BB4F7742316A38A713371E224B3_RuntimeMethod_var);
		IL2CPP_END_FINALLY(106)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(106)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x78, IL_0078)
	}

IL_0078:
	{
		// if (result.linear.magnitude > maxAcceleration)
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_23 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_24 = L_23->get_address_of_linear_0();
		float L_25;
		L_25 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_24, /*hidden argument*/NULL);
		float L_26 = __this->get_maxAcceleration_1();
		if ((!(((float)L_25) > ((float)L_26))))
		{
			goto IL_00a7;
		}
	}
	{
		// result.linear = result.linear.normalized * maxAcceleration;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_27 = V_0;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_28 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_29 = L_28->get_address_of_linear_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_29, /*hidden argument*/NULL);
		float L_31 = __this->get_maxAcceleration_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_30, L_31, /*hidden argument*/NULL);
		L_27->set_linear_0(L_32);
	}

IL_00a7:
	{
		// if (Mathf.Abs(result.angular) > maxRotation)
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_33 = V_0;
		float L_34 = L_33->get_angular_1();
		float L_35;
		L_35 = fabsf(L_34);
		float L_36 = __this->get_maxRotation_2();
		if ((!(((float)L_35) > ((float)L_36))))
		{
			goto IL_00d2;
		}
	}
	{
		// result.angular = Mathf.Sign(result.angular) * maxRotation;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_37 = V_0;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_38 = V_0;
		float L_39 = L_38->get_angular_1();
		float L_40;
		L_40 = Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB(L_39, /*hidden argument*/NULL);
		float L_41 = __this->get_maxRotation_2();
		L_37->set_angular_1(((float)il2cpp_codegen_multiply((float)L_40, (float)L_41)));
	}

IL_00d2:
	{
		// return result;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_42 = V_0;
		return L_42;
	}
}
// System.Void BlendedBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlendedBehavior__ctor_m2025EE90A9BD59DE2FBE81EF15468E50A82071B8 (BlendedBehavior_t2AF211BE7DEE0EF54A7A3F64CB4976DFD8B7F330 * __this, const RuntimeMethod* method)
{
	{
		// public float maxAcceleration = 10f;
		__this->set_maxAcceleration_1((10.0f));
		// public float maxRotation = 45f;
		__this->set_maxRotation_2((45.0f));
		SteeringBehavior__ctor_m36F8FE66341628CC66FCE103529662A0B3B4B423(__this, /*hidden argument*/NULL);
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
// SteeringOutput CameraBuffer::getSteering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * CameraBuffer_getSteering_m1BF24B88C81CFE8DB9CA89B66F2FE09C19AF35FB (CameraBuffer_t6E0E6A560C6CB9DB3210A3848DE4467020D6E266 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * V_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	{
		// SteeringOutput result = new SteeringOutput();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_0 = (SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D *)il2cpp_codegen_object_new(SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		SteeringOutput__ctor_m324DFBCCE92C73E1BEC5AB73096A0762BBFB7F73(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// Vector3 screenCenter = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width, Screen.height, camera.transform.position.y - target.transform.position.y) / 2);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1;
		L_1 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_3;
		L_3 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_4 = __this->get_camera_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_target_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)((float)L_2)), ((float)((float)L_3)), ((float)il2cpp_codegen_subtract((float)L_7, (float)L_11)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_12, (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_1, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		// Vector3 topLeft = Camera.main.ScreenToWorldPoint(new Vector3(0, Screen.height, camera.transform.position.y - target.transform.position.y));
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_15;
		L_15 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		int32_t L_16;
		L_16 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_17 = __this->get_camera_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_y_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_target_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		float L_24 = L_23.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_25), (0.0f), ((float)((float)L_16)), ((float)il2cpp_codegen_subtract((float)L_20, (float)L_24)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_15, L_25, /*hidden argument*/NULL);
		V_2 = L_26;
		// Vector3 bottomRight = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width, 0, camera.transform.position.y - target.transform.position.y));
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_27;
		L_27 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		int32_t L_28;
		L_28 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_29 = __this->get_camera_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_29, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_y_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = __this->get_target_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_33, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_34, /*hidden argument*/NULL);
		float L_36 = L_35.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_37), ((float)((float)L_28)), (0.0f), ((float)il2cpp_codegen_subtract((float)L_32, (float)L_36)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_27, L_37, /*hidden argument*/NULL);
		V_3 = L_38;
		// float screenWidth = bottomRight.x - topLeft.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39 = V_3;
		float L_40 = L_39.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = V_2;
		float L_42 = L_41.get_x_2();
		V_4 = ((float)il2cpp_codegen_subtract((float)L_40, (float)L_42));
		// float screenHeight = topLeft.z - bottomRight.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = V_2;
		float L_44 = L_43.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = V_3;
		float L_46 = L_45.get_z_4();
		V_5 = ((float)il2cpp_codegen_subtract((float)L_44, (float)L_46));
		// Vector3 difference = target.transform.position - screenCenter;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47 = __this->get_target_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_48;
		L_48 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_47, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		L_49 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_48, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_49, L_50, /*hidden argument*/NULL);
		V_6 = L_51;
		// if (Mathf.Abs(difference.x) > widthPercent * screenWidth / 2)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52 = V_6;
		float L_53 = L_52.get_x_2();
		float L_54;
		L_54 = fabsf(L_53);
		float L_55 = __this->get_widthPercent_4();
		float L_56 = V_4;
		if ((!(((float)L_54) > ((float)((float)((float)((float)il2cpp_codegen_multiply((float)L_55, (float)L_56))/(float)(2.0f)))))))
		{
			goto IL_01c2;
		}
	}
	{
		// float distance = Mathf.Min(target.transform.position.x - topLeft.x, bottomRight.x - target.transform.position.x);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_57 = __this->get_target_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_58;
		L_58 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_57, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
		L_59 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_58, /*hidden argument*/NULL);
		float L_60 = L_59.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61 = V_2;
		float L_62 = L_61.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63 = V_3;
		float L_64 = L_63.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_65 = __this->get_target_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_66;
		L_66 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_65, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67;
		L_67 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_66, /*hidden argument*/NULL);
		float L_68 = L_67.get_x_2();
		float L_69;
		L_69 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(((float)il2cpp_codegen_subtract((float)L_60, (float)L_62)), ((float)il2cpp_codegen_subtract((float)L_64, (float)L_68)), /*hidden argument*/NULL);
		V_7 = L_69;
		// float strength = Mathf.Min(decayCoefficient / (distance * distance), maxAcceleration);
		float L_70 = __this->get_decayCoefficient_6();
		float L_71 = V_7;
		float L_72 = V_7;
		float L_73 = __this->get_maxAcceleration_2();
		float L_74;
		L_74 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(((float)((float)L_70/(float)((float)il2cpp_codegen_multiply((float)L_71, (float)L_72)))), L_73, /*hidden argument*/NULL);
		V_8 = L_74;
		// result.linear += new Vector3(strength * Mathf.Sign(difference.x), 0, 0);
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_75 = V_0;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_76 = L_75;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_77 = L_76->get_linear_0();
		float L_78 = V_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_79 = V_6;
		float L_80 = L_79.get_x_2();
		float L_81;
		L_81 = Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB(L_80, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82;
		memset((&L_82), 0, sizeof(L_82));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_82), ((float)il2cpp_codegen_multiply((float)L_78, (float)L_81)), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83;
		L_83 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_77, L_82, /*hidden argument*/NULL);
		L_76->set_linear_0(L_83);
		// }
		goto IL_0222;
	}

IL_01c2:
	{
		// float distance = Mathf.Abs(difference.x);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_84 = V_6;
		float L_85 = L_84.get_x_2();
		float L_86;
		L_86 = fabsf(L_85);
		V_9 = L_86;
		// float strength = Mathf.Min(decayCoefficient / (distance * distance), maxAcceleration);
		float L_87 = __this->get_decayCoefficient_6();
		float L_88 = V_9;
		float L_89 = V_9;
		float L_90 = __this->get_maxAcceleration_2();
		float L_91;
		L_91 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(((float)((float)L_87/(float)((float)il2cpp_codegen_multiply((float)L_88, (float)L_89)))), L_90, /*hidden argument*/NULL);
		V_10 = L_91;
		// result.linear += new Vector3(strength * -Mathf.Sign(camera.linearVelocity.x), 0, 0);
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_92 = V_0;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_93 = L_92;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_94 = L_93->get_linear_0();
		float L_95 = V_10;
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_96 = __this->get_camera_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_97 = L_96->get_address_of_linearVelocity_4();
		float L_98 = L_97->get_x_2();
		float L_99;
		L_99 = Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB(L_98, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_100;
		memset((&L_100), 0, sizeof(L_100));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_100), ((float)il2cpp_codegen_multiply((float)L_95, (float)((-L_99)))), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_101;
		L_101 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_94, L_100, /*hidden argument*/NULL);
		L_93->set_linear_0(L_101);
	}

IL_0222:
	{
		// if (Mathf.Abs(difference.z) > heightPercent * screenHeight / 2)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_102 = V_6;
		float L_103 = L_102.get_z_4();
		float L_104;
		L_104 = fabsf(L_103);
		float L_105 = __this->get_heightPercent_5();
		float L_106 = V_5;
		if ((!(((float)L_104) > ((float)((float)((float)((float)il2cpp_codegen_multiply((float)L_105, (float)L_106))/(float)(2.0f)))))))
		{
			goto IL_02cb;
		}
	}
	{
		// float distance = Mathf.Min(target.transform.position.z - bottomRight.z, topLeft.z - target.transform.position.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_107 = __this->get_target_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_108;
		L_108 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_107, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_109;
		L_109 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_108, /*hidden argument*/NULL);
		float L_110 = L_109.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_111 = V_3;
		float L_112 = L_111.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_113 = V_2;
		float L_114 = L_113.get_z_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_115 = __this->get_target_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_116;
		L_116 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_115, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_117;
		L_117 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_116, /*hidden argument*/NULL);
		float L_118 = L_117.get_z_4();
		float L_119;
		L_119 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(((float)il2cpp_codegen_subtract((float)L_110, (float)L_112)), ((float)il2cpp_codegen_subtract((float)L_114, (float)L_118)), /*hidden argument*/NULL);
		V_11 = L_119;
		// float strength = Mathf.Min(decayCoefficient / (distance * distance), maxAcceleration);
		float L_120 = __this->get_decayCoefficient_6();
		float L_121 = V_11;
		float L_122 = V_11;
		float L_123 = __this->get_maxAcceleration_2();
		float L_124;
		L_124 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(((float)((float)L_120/(float)((float)il2cpp_codegen_multiply((float)L_121, (float)L_122)))), L_123, /*hidden argument*/NULL);
		V_12 = L_124;
		// result.linear += new Vector3(0, 0, strength * Mathf.Sign(difference.z));
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_125 = V_0;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_126 = L_125;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_127 = L_126->get_linear_0();
		float L_128 = V_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_129 = V_6;
		float L_130 = L_129.get_z_4();
		float L_131;
		L_131 = Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB(L_130, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_132;
		memset((&L_132), 0, sizeof(L_132));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_132), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)L_128, (float)L_131)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_133;
		L_133 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_127, L_132, /*hidden argument*/NULL);
		L_126->set_linear_0(L_133);
		// }
		goto IL_032b;
	}

IL_02cb:
	{
		// float distance = Mathf.Abs(difference.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_134 = V_6;
		float L_135 = L_134.get_z_4();
		float L_136;
		L_136 = fabsf(L_135);
		V_13 = L_136;
		// float strength = Mathf.Min(decayCoefficient / (distance * distance), maxAcceleration);
		float L_137 = __this->get_decayCoefficient_6();
		float L_138 = V_13;
		float L_139 = V_13;
		float L_140 = __this->get_maxAcceleration_2();
		float L_141;
		L_141 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(((float)((float)L_137/(float)((float)il2cpp_codegen_multiply((float)L_138, (float)L_139)))), L_140, /*hidden argument*/NULL);
		V_14 = L_141;
		// result.linear += new Vector3(0, 0, strength * -Mathf.Sign(camera.linearVelocity.z));
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_142 = V_0;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_143 = L_142;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_144 = L_143->get_linear_0();
		float L_145 = V_14;
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_146 = __this->get_camera_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_147 = L_146->get_address_of_linearVelocity_4();
		float L_148 = L_147->get_z_4();
		float L_149;
		L_149 = Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB(L_148, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_150;
		memset((&L_150), 0, sizeof(L_150));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_150), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)L_145, (float)((-L_149)))), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_151;
		L_151 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_144, L_150, /*hidden argument*/NULL);
		L_143->set_linear_0(L_151);
	}

IL_032b:
	{
		// return result;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_152 = V_0;
		return L_152;
	}
}
// System.Void CameraBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBuffer__ctor_mEA3FFA9438FC7325A5B705A2389CB9F6449A96F4 (CameraBuffer_t6E0E6A560C6CB9DB3210A3848DE4467020D6E266 * __this, const RuntimeMethod* method)
{
	{
		// float maxAcceleration = 100f;
		__this->set_maxAcceleration_2((100.0f));
		// float widthPercent = 0.7f;
		__this->set_widthPercent_4((0.699999988f));
		// float heightPercent = 0.7f;
		__this->set_heightPercent_5((0.699999988f));
		// float decayCoefficient = 200f;
		__this->set_decayCoefficient_6((200.0f));
		SteeringBehavior__ctor_m36F8FE66341628CC66FCE103529662A0B3B4B423(__this, /*hidden argument*/NULL);
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
// System.Void CameraController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Start_mBDE87C2FCF352957C2B86B67610667663422FBE6 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraBuffer_t6E0E6A560C6CB9DB3210A3848DE4467020D6E266_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myMoveType = new CameraBuffer();
		CameraBuffer_t6E0E6A560C6CB9DB3210A3848DE4467020D6E266 * L_0 = (CameraBuffer_t6E0E6A560C6CB9DB3210A3848DE4467020D6E266 *)il2cpp_codegen_object_new(CameraBuffer_t6E0E6A560C6CB9DB3210A3848DE4467020D6E266_il2cpp_TypeInfo_var);
		CameraBuffer__ctor_mEA3FFA9438FC7325A5B705A2389CB9F6449A96F4(L_0, /*hidden argument*/NULL);
		__this->set_myMoveType_10(L_0);
		// myMoveType.camera = this;
		CameraBuffer_t6E0E6A560C6CB9DB3210A3848DE4467020D6E266 * L_1 = __this->get_myMoveType_10();
		L_1->set_camera_1(__this);
		// myMoveType.target = myTarget;
		CameraBuffer_t6E0E6A560C6CB9DB3210A3848DE4467020D6E266 * L_2 = __this->get_myMoveType_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_myTarget_8();
		L_2->set_target_3(L_3);
		// }
		return;
	}
}
// System.Void CameraController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Update_m3C257AC762117CFDDAD03C9C4FBBFDE51C61D534 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// steeringUpdate = new SteeringOutput();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_0 = (SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D *)il2cpp_codegen_object_new(SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		SteeringOutput__ctor_m324DFBCCE92C73E1BEC5AB73096A0762BBFB7F73(L_0, /*hidden argument*/NULL);
		((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->set_steeringUpdate_9(L_0);
		// steeringUpdate.linear = myMoveType.getSteering().linear;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_1 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_steeringUpdate_9();
		CameraBuffer_t6E0E6A560C6CB9DB3210A3848DE4467020D6E266 * L_2 = __this->get_myMoveType_10();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_3;
		L_3 = VirtFuncInvoker0< SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * >::Invoke(4 /* SteeringOutput SteeringBehavior::getSteering() */, L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = L_3->get_linear_0();
		L_1->set_linear_0(L_4);
		// steeringUpdate.angular = 0;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_5 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_steeringUpdate_9();
		L_5->set_angular_1((0.0f));
		// base.Update();
		Kinematic_Update_m90DEAE2534DEF1E85A2B0289FBAAB1A25D476093(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController__ctor_m07EC5A8C82742876097619BE7DD9043F47327DAE (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	{
		Kinematic__ctor_m067A5346E3475380B0E1662CFA2AA3D9495AF89D(__this, /*hidden argument*/NULL);
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
// SteeringOutput CollisionAvoidance::getSteering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * CollisionAvoidance_getSteering_m4F054FD03A1E036A0A0489D4B72257F185350377 (CollisionAvoidance_tD20AF542B6DBE815D6F87F28324FD1EE7909CF38 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m383EF8008DED4B2D672627F30C5D8F5F7932083E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD86040F68C5C73B4736290FC07AE3A27C49034C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2E7EEE149888540555AD68CF4F36F466ABC52BFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1FEDC50F978A2982E4B7F0F8B881490D99C5843A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * V_0 = NULL;
	float V_1 = 0.0f;
	Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * V_2 = NULL;
	Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * V_4 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// SteeringOutput result = new SteeringOutput();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_0 = (SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D *)il2cpp_codegen_object_new(SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		SteeringOutput__ctor_m324DFBCCE92C73E1BEC5AB73096A0762BBFB7F73(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// result.linear = Vector3.zero;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_1 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		L_1->set_linear_0(L_2);
		// result.angular = 0;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_3 = V_0;
		L_3->set_angular_1((0.0f));
		// if (character.linearVelocity.magnitude <= 0) return result;
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_4 = __this->get_character_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = L_4->get_address_of_linearVelocity_4();
		float L_6;
		L_6 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_5, /*hidden argument*/NULL);
		if ((!(((float)L_6) <= ((float)(0.0f)))))
		{
			goto IL_0035;
		}
	}
	{
		// if (character.linearVelocity.magnitude <= 0) return result;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_7 = V_0;
		return L_7;
	}

IL_0035:
	{
		// float minTime = float.MaxValue;
		V_1 = ((std::numeric_limits<float>::max)());
		// Kinematic minTarget = null;
		V_2 = (Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)NULL;
		// foreach (Kinematic target in targets)
		List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * L_8 = __this->get_targets_3();
		Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A  L_9;
		L_9 = List_1_GetEnumerator_m1FEDC50F978A2982E4B7F0F8B881490D99C5843A(L_8, /*hidden argument*/List_1_GetEnumerator_m1FEDC50F978A2982E4B7F0F8B881490D99C5843A_RuntimeMethod_var);
		V_3 = L_9;
	}

IL_0049:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00dc;
		}

IL_004e:
		{
			// foreach (Kinematic target in targets)
			Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_10;
			L_10 = Enumerator_get_Current_m2E7EEE149888540555AD68CF4F36F466ABC52BFE_inline((Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A *)(&V_3), /*hidden argument*/Enumerator_get_Current_m2E7EEE149888540555AD68CF4F36F466ABC52BFE_RuntimeMethod_var);
			V_4 = L_10;
			// Vector3 relPos = target.transform.position - character.transform.position;
			Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_11 = V_4;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
			L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_11, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
			L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
			Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_14 = __this->get_character_1();
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
			L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_14, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
			L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
			L_17 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_13, L_16, /*hidden argument*/NULL);
			V_5 = L_17;
			// Vector3 relVel = character.linearVelocity - target.linearVelocity;
			Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_18 = __this->get_character_1();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = L_18->get_linearVelocity_4();
			Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_20 = V_4;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = L_20->get_linearVelocity_4();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
			L_22 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_19, L_21, /*hidden argument*/NULL);
			V_6 = L_22;
			// float relSpd = relVel.magnitude;
			float L_23;
			L_23 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_6), /*hidden argument*/NULL);
			V_7 = L_23;
			// float timeToColl = Vector3.Dot(relPos, relVel) / (relSpd*relSpd);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_5;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = V_6;
			float L_26;
			L_26 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_24, L_25, /*hidden argument*/NULL);
			float L_27 = V_7;
			float L_28 = V_7;
			V_8 = ((float)((float)L_26/(float)((float)il2cpp_codegen_multiply((float)L_27, (float)L_28))));
			// float dist = relPos.magnitude;
			float L_29;
			L_29 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_5), /*hidden argument*/NULL);
			// float sep = dist - relSpd * timeToColl;
			float L_30 = V_7;
			float L_31 = V_8;
			// if (sep > 2 * radius) continue;
			float L_32 = __this->get_radius_4();
			if ((((float)((float)il2cpp_codegen_subtract((float)L_29, (float)((float)il2cpp_codegen_multiply((float)L_30, (float)L_31))))) > ((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_32)))))
			{
				goto IL_00dc;
			}
		}

IL_00c8:
		{
			// if (timeToColl > 0 && timeToColl < minTime)
			float L_33 = V_8;
			if ((!(((float)L_33) > ((float)(0.0f)))))
			{
				goto IL_00dc;
			}
		}

IL_00d1:
		{
			float L_34 = V_8;
			float L_35 = V_1;
			if ((!(((float)L_34) < ((float)L_35))))
			{
				goto IL_00dc;
			}
		}

IL_00d6:
		{
			// minTime = timeToColl;
			float L_36 = V_8;
			V_1 = L_36;
			// minTarget = target;
			Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_37 = V_4;
			V_2 = L_37;
		}

IL_00dc:
		{
			// foreach (Kinematic target in targets)
			bool L_38;
			L_38 = Enumerator_MoveNext_mD86040F68C5C73B4736290FC07AE3A27C49034C9((Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A *)(&V_3), /*hidden argument*/Enumerator_MoveNext_mD86040F68C5C73B4736290FC07AE3A27C49034C9_RuntimeMethod_var);
			if (L_38)
			{
				goto IL_004e;
			}
		}

IL_00e8:
		{
			IL2CPP_LEAVE(0xF8, FINALLY_00ea);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ea;
	}

FINALLY_00ea:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m383EF8008DED4B2D672627F30C5D8F5F7932083E((Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A *)(&V_3), /*hidden argument*/Enumerator_Dispose_m383EF8008DED4B2D672627F30C5D8F5F7932083E_RuntimeMethod_var);
		IL2CPP_END_FINALLY(234)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(234)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xF8, IL_00f8)
	}

IL_00f8:
	{
		// if (minTarget == null) return result;
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_39 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_39, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0103;
		}
	}
	{
		// if (minTarget == null) return result;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_41 = V_0;
		return L_41;
	}

IL_0103:
	{
		// result.linear = Vector3.Cross(character.linearVelocity, Vector3.up).normalized * maxAcceleration;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_42 = V_0;
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_43 = __this->get_character_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44 = L_43->get_linearVelocity_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4(L_44, L_45, /*hidden argument*/NULL);
		V_9 = L_46;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_9), /*hidden argument*/NULL);
		float L_48 = __this->get_maxAcceleration_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		L_49 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_47, L_48, /*hidden argument*/NULL);
		L_42->set_linear_0(L_49);
		// if (minTarget.linearVelocity.magnitude > 0 && Vector3.Dot(minTarget.linearVelocity, character.linearVelocity) > 0)
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_50 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_51 = L_50->get_address_of_linearVelocity_4();
		float L_52;
		L_52 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_51, /*hidden argument*/NULL);
		if ((!(((float)L_52) > ((float)(0.0f)))))
		{
			goto IL_01c0;
		}
	}
	{
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_53 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54 = L_53->get_linearVelocity_4();
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_55 = __this->get_character_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56 = L_55->get_linearVelocity_4();
		float L_57;
		L_57 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_54, L_56, /*hidden argument*/NULL);
		if ((!(((float)L_57) > ((float)(0.0f)))))
		{
			goto IL_01c0;
		}
	}
	{
		// result.linear += Mathf.Sign(Vector3.Dot(Vector3.Cross(minTarget.linearVelocity, Vector3.up).normalized, character.linearVelocity)) * character.linearVelocity.normalized * maxAcceleration;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_58 = V_0;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_59 = L_58;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60 = L_59->get_linear_0();
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_61 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62 = L_61->get_linearVelocity_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		L_63 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64;
		L_64 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4(L_62, L_63, /*hidden argument*/NULL);
		V_9 = L_64;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65;
		L_65 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_9), /*hidden argument*/NULL);
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_66 = __this->get_character_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67 = L_66->get_linearVelocity_4();
		float L_68;
		L_68 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_65, L_67, /*hidden argument*/NULL);
		float L_69;
		L_69 = Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB(L_68, /*hidden argument*/NULL);
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_70 = __this->get_character_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_71 = L_70->get_address_of_linearVelocity_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72;
		L_72 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_71, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_73;
		L_73 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(L_69, L_72, /*hidden argument*/NULL);
		float L_74 = __this->get_maxAcceleration_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75;
		L_75 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_73, L_74, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76;
		L_76 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_60, L_75, /*hidden argument*/NULL);
		L_59->set_linear_0(L_76);
	}

IL_01c0:
	{
		// return result;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_77 = V_0;
		return L_77;
	}
}
// System.Void CollisionAvoidance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionAvoidance__ctor_m5E2164D32001C11FE43BC749D29D4CE8697EE26F (CollisionAvoidance_tD20AF542B6DBE815D6F87F28324FD1EE7909CF38 * __this, const RuntimeMethod* method)
{
	{
		// float maxAcceleration = 1f;
		__this->set_maxAcceleration_2((1.0f));
		// public float radius = 1f;
		__this->set_radius_4((1.0f));
		SteeringBehavior__ctor_m36F8FE66341628CC66FCE103529662A0B3B4B423(__this, /*hidden argument*/NULL);
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
// System.Void CollisionAvoider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionAvoider_Start_mBDB0080FB95E4967FE8CE4B0E1D873FA416A4005 (CollisionAvoider_t94ED6119C58880EC319FC563E8B5DCAD2E889951 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionAvoidance_tD20AF542B6DBE815D6F87F28324FD1EE7909CF38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myMoveType = new CollisionAvoidance();
		CollisionAvoidance_tD20AF542B6DBE815D6F87F28324FD1EE7909CF38 * L_0 = (CollisionAvoidance_tD20AF542B6DBE815D6F87F28324FD1EE7909CF38 *)il2cpp_codegen_object_new(CollisionAvoidance_tD20AF542B6DBE815D6F87F28324FD1EE7909CF38_il2cpp_TypeInfo_var);
		CollisionAvoidance__ctor_m5E2164D32001C11FE43BC749D29D4CE8697EE26F(L_0, /*hidden argument*/NULL);
		__this->set_myMoveType_10(L_0);
		// myMoveType.character = this;
		CollisionAvoidance_tD20AF542B6DBE815D6F87F28324FD1EE7909CF38 * L_1 = __this->get_myMoveType_10();
		L_1->set_character_1(__this);
		// myMoveType.targets = targets;
		CollisionAvoidance_tD20AF542B6DBE815D6F87F28324FD1EE7909CF38 * L_2 = __this->get_myMoveType_10();
		List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * L_3 = __this->get_targets_12();
		L_2->set_targets_3(L_3);
		// myMoveType.radius = radius;
		CollisionAvoidance_tD20AF542B6DBE815D6F87F28324FD1EE7909CF38 * L_4 = __this->get_myMoveType_10();
		float L_5 = __this->get_radius_13();
		L_4->set_radius_4(L_5);
		// myRotateType = new LookWhereGoing();
		LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * L_6 = (LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 *)il2cpp_codegen_object_new(LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0_il2cpp_TypeInfo_var);
		LookWhereGoing__ctor_m225781ABC6447E4CC44715861AF5635DA2DA5115(L_6, /*hidden argument*/NULL);
		__this->set_myRotateType_11(L_6);
		// myRotateType.character = this;
		LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * L_7 = __this->get_myRotateType_11();
		((Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)L_7)->set_character_1(__this);
		// myRotateType.target = myTarget;
		LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * L_8 = __this->get_myRotateType_11();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_myTarget_8();
		((Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)L_8)->set_target_2(L_9);
		// }
		return;
	}
}
// System.Void CollisionAvoider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionAvoider_Update_mA3760E7403E894D2AE20B3AFAA3ECFAE7FDBF82D (CollisionAvoider_t94ED6119C58880EC319FC563E8B5DCAD2E889951 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// steeringUpdate = new SteeringOutput();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_0 = (SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D *)il2cpp_codegen_object_new(SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		SteeringOutput__ctor_m324DFBCCE92C73E1BEC5AB73096A0762BBFB7F73(L_0, /*hidden argument*/NULL);
		((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->set_steeringUpdate_9(L_0);
		// steeringUpdate.linear = myMoveType.getSteering().linear;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_1 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_steeringUpdate_9();
		CollisionAvoidance_tD20AF542B6DBE815D6F87F28324FD1EE7909CF38 * L_2 = __this->get_myMoveType_10();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_3;
		L_3 = VirtFuncInvoker0< SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * >::Invoke(4 /* SteeringOutput SteeringBehavior::getSteering() */, L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = L_3->get_linear_0();
		L_1->set_linear_0(L_4);
		// steeringUpdate.angular = myRotateType.getSteering().angular;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_5 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_steeringUpdate_9();
		LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * L_6 = __this->get_myRotateType_11();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_7;
		L_7 = VirtFuncInvoker0< SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * >::Invoke(4 /* SteeringOutput SteeringBehavior::getSteering() */, L_6);
		float L_8 = L_7->get_angular_1();
		L_5->set_angular_1(L_8);
		// base.Update();
		Kinematic_Update_m90DEAE2534DEF1E85A2B0289FBAAB1A25D476093(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CollisionAvoider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionAvoider__ctor_m318EF873543C57596507DCEF9E90FD16B4D8FA43 (CollisionAvoider_t94ED6119C58880EC319FC563E8B5DCAD2E889951 * __this, const RuntimeMethod* method)
{
	{
		// public float radius = 1f;
		__this->set_radius_13((1.0f));
		Kinematic__ctor_m067A5346E3475380B0E1662CFA2AA3D9495AF89D(__this, /*hidden argument*/NULL);
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
// UnityEngine.Vector3 Face::getTargetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Face_getTargetPosition_m41CB964841AE881357980F92A31C576175C31DF7 (Face_tAB806D390A7B7F99E145FAF9420C74E544D5AE50 * __this, const RuntimeMethod* method)
{
	{
		// return target.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ((Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)__this)->get_target_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single Face::getTargetAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Face_getTargetAngle_m657A1DAAFB6BF20C839192CBFE0041F237DAE9CF (Face_tAB806D390A7B7F99E145FAF9420C74E544D5AE50 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 difference = getTargetPosition() - character.transform.position;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = VirtFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(7 /* UnityEngine.Vector3 Face::getTargetPosition() */, __this);
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_1 = ((Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)__this)->get_character_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// if (difference.magnitude == 0)
		float L_5;
		L_5 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			goto IL_0040;
		}
	}
	{
		// return character.transform.eulerAngles.y;
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_6 = ((Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)__this)->get_character_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		return L_9;
	}

IL_0040:
	{
		// float targetAngle = Mathf.Atan2(difference.x, difference.z) * Mathf.Rad2Deg;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		float L_11 = L_10.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_0;
		float L_13 = L_12.get_z_4();
		float L_14;
		L_14 = atan2f(L_11, L_13);
		// return targetAngle;
		return ((float)il2cpp_codegen_multiply((float)L_14, (float)(57.2957802f)));
	}
}
// System.Void Face::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Face__ctor_mC49672386D6E203C238682EEAEC5FA96C265C4C1 (Face_tAB806D390A7B7F99E145FAF9420C74E544D5AE50 * __this, const RuntimeMethod* method)
{
	{
		Align__ctor_m10EF7B19EF95A4EE0945782AB512D3603AC3D468(__this, /*hidden argument*/NULL);
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
// UnityEngine.Vector3 Firing::getTargetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Firing_getTargetPosition_mE49BFCE9358D2CA5B1670D9E849FEF57D67218E5 (Firing_t8D2D227424CC1247D6EA7389C9D9D1FC14556E31 * __this, const RuntimeMethod* method)
{
	{
		// return target.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_target_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Trajectory Firing::getTrajectory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * Firing_getTrajectory_m8C3C92B237E6377473DA95B2C19E8E00CF4EDDB1 (Firing_t8D2D227424CC1247D6EA7389C9D9D1FC14556E31 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2AA5EF636B8BEBBA403078BE8197E693C9903A5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE9E6E1B120A477E99BD05C9FA4B5439939C7FE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF952351088F6B8B523EBBD6A5163FD9583EBE878_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2217EBA5E7D405491F517266C31F8AC323B7B093_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * V_0 = NULL;
	float V_1 = 0.0f;
	Enumerator_t7EFFE3BB0F091E033881873D4DDB73CD7CCBDF06  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// Trajectory output = null;
		V_0 = (Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C *)NULL;
		// float impactTime = 0;
		V_1 = (0.0f);
		// List<Trajectory> trajectories = Trajectory.calculateFiringSolutions(character.transform.position, getTargetPosition(), firingSpeed);
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_0 = __this->get_character_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = VirtFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(5 /* UnityEngine.Vector3 Firing::getTargetPosition() */, __this);
		float L_4 = __this->get_firingSpeed_3();
		List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720 * L_5;
		L_5 = Trajectory_calculateFiringSolutions_mD82A56FD483B05C46DBCD8E91D7BDD6F83A68EBC(L_2, L_3, L_4, (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)NULL, /*hidden argument*/NULL);
		// foreach (Trajectory traj in trajectories)
		Enumerator_t7EFFE3BB0F091E033881873D4DDB73CD7CCBDF06  L_6;
		L_6 = List_1_GetEnumerator_m2217EBA5E7D405491F517266C31F8AC323B7B093(L_5, /*hidden argument*/List_1_GetEnumerator_m2217EBA5E7D405491F517266C31F8AC323B7B093_RuntimeMethod_var);
		V_2 = L_6;
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0075;
		}

IL_0032:
		{
			// foreach (Trajectory traj in trajectories)
			Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * L_7;
			L_7 = Enumerator_get_Current_mF952351088F6B8B523EBBD6A5163FD9583EBE878_inline((Enumerator_t7EFFE3BB0F091E033881873D4DDB73CD7CCBDF06 *)(&V_2), /*hidden argument*/Enumerator_get_Current_mF952351088F6B8B523EBBD6A5163FD9583EBE878_RuntimeMethod_var);
			V_3 = L_7;
			// if ((output == null || ((traj.impactTime > impactTime && !selectSoonest) || (traj.impactTime < impactTime && selectSoonest))) && traj.impactTime >= 0)
			Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * L_8 = V_0;
			if (!L_8)
			{
				goto IL_005f;
			}
		}

IL_003d:
		{
			Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * L_9 = V_3;
			float L_10 = L_9->get_impactTime_4();
			float L_11 = V_1;
			if ((!(((float)L_10) > ((float)L_11))))
			{
				goto IL_004e;
			}
		}

IL_0046:
		{
			bool L_12 = __this->get_selectSoonest_4();
			if (!L_12)
			{
				goto IL_005f;
			}
		}

IL_004e:
		{
			Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * L_13 = V_3;
			float L_14 = L_13->get_impactTime_4();
			float L_15 = V_1;
			if ((!(((float)L_14) < ((float)L_15))))
			{
				goto IL_0075;
			}
		}

IL_0057:
		{
			bool L_16 = __this->get_selectSoonest_4();
			if (!L_16)
			{
				goto IL_0075;
			}
		}

IL_005f:
		{
			Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * L_17 = V_3;
			float L_18 = L_17->get_impactTime_4();
			if ((!(((float)L_18) >= ((float)(0.0f)))))
			{
				goto IL_0075;
			}
		}

IL_006c:
		{
			// impactTime = traj.impactTime;
			Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * L_19 = V_3;
			float L_20 = L_19->get_impactTime_4();
			V_1 = L_20;
			// output = traj;
			Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * L_21 = V_3;
			V_0 = L_21;
		}

IL_0075:
		{
			// foreach (Trajectory traj in trajectories)
			bool L_22;
			L_22 = Enumerator_MoveNext_mCE9E6E1B120A477E99BD05C9FA4B5439939C7FE6((Enumerator_t7EFFE3BB0F091E033881873D4DDB73CD7CCBDF06 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mCE9E6E1B120A477E99BD05C9FA4B5439939C7FE6_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_0032;
			}
		}

IL_007e:
		{
			IL2CPP_LEAVE(0x8E, FINALLY_0080);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0080;
	}

FINALLY_0080:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2AA5EF636B8BEBBA403078BE8197E693C9903A5C((Enumerator_t7EFFE3BB0F091E033881873D4DDB73CD7CCBDF06 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m2AA5EF636B8BEBBA403078BE8197E693C9903A5C_RuntimeMethod_var);
		IL2CPP_END_FINALLY(128)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(128)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8E, IL_008e)
	}

IL_008e:
	{
		// return output;
		Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * L_23 = V_0;
		return L_23;
	}
}
// System.Void Firing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Firing__ctor_m5A699EE640BF729C756D69FB69FFD2D706B4474F (Firing_t8D2D227424CC1247D6EA7389C9D9D1FC14556E31 * __this, const RuntimeMethod* method)
{
	{
		// public float firingSpeed = 1f;
		__this->set_firingSpeed_3((1.0f));
		// public bool selectSoonest = true;
		__this->set_selectSoonest_4((bool)1);
		BallisticBehavior__ctor_m4F65A485EDC3DD6A75ED581FA46F1A83B6995F7F(__this, /*hidden argument*/NULL);
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
// System.Void FlockCOM::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlockCOM_Start_mACCDAD6613F1A68013420BFA17CB37FC0485D31D (FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5554CF65EE89B4C164DAC401ED0F282BB5B08E2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0275E4209C9D7D871B1830BA10E535E973C740A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisFlocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8_m82ECE1488CFA901E86ECC70B838C92BB5656882D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2221041CF91A32FCAC6B2353A4B41A510770DD19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FBF691364465D2956438339BB777C712F391763);
		s_Il2CppMethodInitialized = true;
	}
	FlockerU5BU5D_t087D0D7BC275921E3575228D53DB5C1EFA1B71AA* V_0 = NULL;
	int32_t V_1 = 0;
	Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8 * V_2 = NULL;
	{
		// Flocker[] flockArray = FindObjectsOfType<Flocker>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		FlockerU5BU5D_t087D0D7BC275921E3575228D53DB5C1EFA1B71AA* L_0;
		L_0 = Object_FindObjectsOfType_TisFlocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8_m82ECE1488CFA901E86ECC70B838C92BB5656882D(/*hidden argument*/Object_FindObjectsOfType_TisFlocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8_m82ECE1488CFA901E86ECC70B838C92BB5656882D_RuntimeMethod_var);
		// foreach (Flocker member in flockArray)
		V_0 = L_0;
		V_1 = 0;
		goto IL_001e;
	}

IL_000a:
	{
		// foreach (Flocker member in flockArray)
		FlockerU5BU5D_t087D0D7BC275921E3575228D53DB5C1EFA1B71AA* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// flock.Add(member);
		List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * L_5 = __this->get_flock_10();
		Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8 * L_6 = V_2;
		List_1_Add_m5554CF65EE89B4C164DAC401ED0F282BB5B08E2A(L_5, L_6, /*hidden argument*/List_1_Add_m5554CF65EE89B4C164DAC401ED0F282BB5B08E2A_RuntimeMethod_var);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_001e:
	{
		// foreach (Flocker member in flockArray)
		int32_t L_8 = V_1;
		FlockerU5BU5D_t087D0D7BC275921E3575228D53DB5C1EFA1B71AA* L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		// Debug.Log("Found " + flock.Count + " members of the flock");
		List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * L_10 = __this->get_flock_10();
		int32_t L_11;
		L_11 = List_1_get_Count_m0275E4209C9D7D871B1830BA10E535E973C740A8_inline(L_10, /*hidden argument*/List_1_get_Count_m0275E4209C9D7D871B1830BA10E535E973C740A8_RuntimeMethod_var);
		V_1 = L_11;
		String_t* L_12;
		L_12 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_13;
		L_13 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral2221041CF91A32FCAC6B2353A4B41A510770DD19, L_12, _stringLiteral9FBF691364465D2956438339BB777C712F391763, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FlockCOM::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlockCOM_Update_m540A4BC023C2D5ACC3D09420713E9DB95405574D (FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m383EF8008DED4B2D672627F30C5D8F5F7932083E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD86040F68C5C73B4736290FC07AE3A27C49034C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2E7EEE149888540555AD68CF4F36F466ABC52BFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1FEDC50F978A2982E4B7F0F8B881490D99C5843A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0275E4209C9D7D871B1830BA10E535E973C740A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8 * V_5 = NULL;
	Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8 * V_6 = NULL;
	Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8 * V_7 = NULL;
	Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8 * V_8 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		// Vector3 position = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_0 = L_0;
		// foreach (Flocker member in flock)
		List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * L_1 = __this->get_flock_10();
		Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A  L_2;
		L_2 = List_1_GetEnumerator_m1FEDC50F978A2982E4B7F0F8B881490D99C5843A(L_1, /*hidden argument*/List_1_GetEnumerator_m1FEDC50F978A2982E4B7F0F8B881490D99C5843A_RuntimeMethod_var);
		V_4 = L_2;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0036;
		}

IL_0015:
		{
			// foreach (Flocker member in flock)
			Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_3;
			L_3 = Enumerator_get_Current_m2E7EEE149888540555AD68CF4F36F466ABC52BFE_inline((Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A *)(&V_4), /*hidden argument*/Enumerator_get_Current_m2E7EEE149888540555AD68CF4F36F466ABC52BFE_RuntimeMethod_var);
			V_5 = ((Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8 *)CastclassClass((RuntimeObject*)L_3, Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8_il2cpp_TypeInfo_var));
			// position += member.transform.position;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = V_0;
			Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8 * L_5 = V_5;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
			L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
			L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
			L_8 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_4, L_7, /*hidden argument*/NULL);
			V_0 = L_8;
		}

IL_0036:
		{
			// foreach (Flocker member in flock)
			bool L_9;
			L_9 = Enumerator_MoveNext_mD86040F68C5C73B4736290FC07AE3A27C49034C9((Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A *)(&V_4), /*hidden argument*/Enumerator_MoveNext_mD86040F68C5C73B4736290FC07AE3A27C49034C9_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0015;
			}
		}

IL_003f:
		{
			IL2CPP_LEAVE(0x4F, FINALLY_0041);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m383EF8008DED4B2D672627F30C5D8F5F7932083E((Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A *)(&V_4), /*hidden argument*/Enumerator_Dispose_m383EF8008DED4B2D672627F30C5D8F5F7932083E_RuntimeMethod_var);
		IL2CPP_END_FINALLY(65)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
	}

IL_004f:
	{
		// position /= flock.Count;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * L_11 = __this->get_flock_10();
		int32_t L_12;
		L_12 = List_1_get_Count_m0275E4209C9D7D871B1830BA10E535E973C740A8_inline(L_11, /*hidden argument*/List_1_get_Count_m0275E4209C9D7D871B1830BA10E535E973C740A8_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_10, ((float)((float)L_12)), /*hidden argument*/NULL);
		V_0 = L_13;
		// transform.position = position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_0;
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_14, L_15, /*hidden argument*/NULL);
		// Vector3 velocity = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_1 = L_16;
		// foreach (Flocker member in flock)
		List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * L_17 = __this->get_flock_10();
		Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A  L_18;
		L_18 = List_1_GetEnumerator_m1FEDC50F978A2982E4B7F0F8B881490D99C5843A(L_17, /*hidden argument*/List_1_GetEnumerator_m1FEDC50F978A2982E4B7F0F8B881490D99C5843A_RuntimeMethod_var);
		V_4 = L_18;
	}

IL_0081:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009f;
		}

IL_0083:
		{
			// foreach (Flocker member in flock)
			Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_19;
			L_19 = Enumerator_get_Current_m2E7EEE149888540555AD68CF4F36F466ABC52BFE_inline((Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A *)(&V_4), /*hidden argument*/Enumerator_get_Current_m2E7EEE149888540555AD68CF4F36F466ABC52BFE_RuntimeMethod_var);
			V_6 = ((Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8 *)CastclassClass((RuntimeObject*)L_19, Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8_il2cpp_TypeInfo_var));
			// velocity += member.linearVelocity;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_1;
			Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8 * L_21 = V_6;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)L_21)->get_linearVelocity_4();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
			L_23 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_20, L_22, /*hidden argument*/NULL);
			V_1 = L_23;
		}

IL_009f:
		{
			// foreach (Flocker member in flock)
			bool L_24;
			L_24 = Enumerator_MoveNext_mD86040F68C5C73B4736290FC07AE3A27C49034C9((Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A *)(&V_4), /*hidden argument*/Enumerator_MoveNext_mD86040F68C5C73B4736290FC07AE3A27C49034C9_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_0083;
			}
		}

IL_00a8:
		{
			IL2CPP_LEAVE(0xB8, FINALLY_00aa);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00aa;
	}

FINALLY_00aa:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m383EF8008DED4B2D672627F30C5D8F5F7932083E((Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A *)(&V_4), /*hidden argument*/Enumerator_Dispose_m383EF8008DED4B2D672627F30C5D8F5F7932083E_RuntimeMethod_var);
		IL2CPP_END_FINALLY(170)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(170)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB8, IL_00b8)
	}

IL_00b8:
	{
		// velocity /= flock.Count;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = V_1;
		List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * L_26 = __this->get_flock_10();
		int32_t L_27;
		L_27 = List_1_get_Count_m0275E4209C9D7D871B1830BA10E535E973C740A8_inline(L_26, /*hidden argument*/List_1_get_Count_m0275E4209C9D7D871B1830BA10E535E973C740A8_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_25, ((float)((float)L_27)), /*hidden argument*/NULL);
		V_1 = L_28;
		// linearVelocity = velocity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = V_1;
		((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->set_linearVelocity_4(L_29);
		// Vector3 orientation = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_2 = L_30;
		// foreach (Flocker member in flock)
		List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * L_31 = __this->get_flock_10();
		Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A  L_32;
		L_32 = List_1_GetEnumerator_m1FEDC50F978A2982E4B7F0F8B881490D99C5843A(L_31, /*hidden argument*/List_1_GetEnumerator_m1FEDC50F978A2982E4B7F0F8B881490D99C5843A_RuntimeMethod_var);
		V_4 = L_32;
	}

IL_00e5:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0108;
		}

IL_00e7:
		{
			// foreach (Flocker member in flock)
			Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_33;
			L_33 = Enumerator_get_Current_m2E7EEE149888540555AD68CF4F36F466ABC52BFE_inline((Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A *)(&V_4), /*hidden argument*/Enumerator_get_Current_m2E7EEE149888540555AD68CF4F36F466ABC52BFE_RuntimeMethod_var);
			V_7 = ((Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8 *)CastclassClass((RuntimeObject*)L_33, Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8_il2cpp_TypeInfo_var));
			// orientation += member.transform.eulerAngles;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = V_2;
			Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8 * L_35 = V_7;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
			L_36 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_35, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
			L_37 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_36, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
			L_38 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_34, L_37, /*hidden argument*/NULL);
			V_2 = L_38;
		}

IL_0108:
		{
			// foreach (Flocker member in flock)
			bool L_39;
			L_39 = Enumerator_MoveNext_mD86040F68C5C73B4736290FC07AE3A27C49034C9((Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A *)(&V_4), /*hidden argument*/Enumerator_MoveNext_mD86040F68C5C73B4736290FC07AE3A27C49034C9_RuntimeMethod_var);
			if (L_39)
			{
				goto IL_00e7;
			}
		}

IL_0111:
		{
			IL2CPP_LEAVE(0x121, FINALLY_0113);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0113;
	}

FINALLY_0113:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m383EF8008DED4B2D672627F30C5D8F5F7932083E((Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A *)(&V_4), /*hidden argument*/Enumerator_Dispose_m383EF8008DED4B2D672627F30C5D8F5F7932083E_RuntimeMethod_var);
		IL2CPP_END_FINALLY(275)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(275)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x121, IL_0121)
	}

IL_0121:
	{
		// orientation /= flock.Count;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = V_2;
		List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * L_41 = __this->get_flock_10();
		int32_t L_42;
		L_42 = List_1_get_Count_m0275E4209C9D7D871B1830BA10E535E973C740A8_inline(L_41, /*hidden argument*/List_1_get_Count_m0275E4209C9D7D871B1830BA10E535E973C740A8_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_40, ((float)((float)L_42)), /*hidden argument*/NULL);
		V_2 = L_43;
		// transform.eulerAngles = orientation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = V_2;
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_44, L_45, /*hidden argument*/NULL);
		// float rotation = 0;
		V_3 = (0.0f);
		// foreach (Flocker member in flock)
		List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * L_46 = __this->get_flock_10();
		Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A  L_47;
		L_47 = List_1_GetEnumerator_m1FEDC50F978A2982E4B7F0F8B881490D99C5843A(L_46, /*hidden argument*/List_1_GetEnumerator_m1FEDC50F978A2982E4B7F0F8B881490D99C5843A_RuntimeMethod_var);
		V_4 = L_47;
	}

IL_0153:
	try
	{ // begin try (depth: 1)
		{
			goto IL_016d;
		}

IL_0155:
		{
			// foreach (Flocker member in flock)
			Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_48;
			L_48 = Enumerator_get_Current_m2E7EEE149888540555AD68CF4F36F466ABC52BFE_inline((Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A *)(&V_4), /*hidden argument*/Enumerator_get_Current_m2E7EEE149888540555AD68CF4F36F466ABC52BFE_RuntimeMethod_var);
			V_8 = ((Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8 *)CastclassClass((RuntimeObject*)L_48, Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8_il2cpp_TypeInfo_var));
			// rotation += member.angularVelocity;
			float L_49 = V_3;
			Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8 * L_50 = V_8;
			float L_51 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)L_50)->get_angularVelocity_5();
			V_3 = ((float)il2cpp_codegen_add((float)L_49, (float)L_51));
		}

IL_016d:
		{
			// foreach (Flocker member in flock)
			bool L_52;
			L_52 = Enumerator_MoveNext_mD86040F68C5C73B4736290FC07AE3A27C49034C9((Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A *)(&V_4), /*hidden argument*/Enumerator_MoveNext_mD86040F68C5C73B4736290FC07AE3A27C49034C9_RuntimeMethod_var);
			if (L_52)
			{
				goto IL_0155;
			}
		}

IL_0176:
		{
			IL2CPP_LEAVE(0x186, FINALLY_0178);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0178;
	}

FINALLY_0178:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m383EF8008DED4B2D672627F30C5D8F5F7932083E((Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A *)(&V_4), /*hidden argument*/Enumerator_Dispose_m383EF8008DED4B2D672627F30C5D8F5F7932083E_RuntimeMethod_var);
		IL2CPP_END_FINALLY(376)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(376)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x186, IL_0186)
	}

IL_0186:
	{
		// rotation /= flock.Count;
		float L_53 = V_3;
		List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * L_54 = __this->get_flock_10();
		int32_t L_55;
		L_55 = List_1_get_Count_m0275E4209C9D7D871B1830BA10E535E973C740A8_inline(L_54, /*hidden argument*/List_1_get_Count_m0275E4209C9D7D871B1830BA10E535E973C740A8_RuntimeMethod_var);
		V_3 = ((float)((float)L_53/(float)((float)((float)L_55))));
		// angularVelocity = rotation;
		float L_56 = V_3;
		((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->set_angularVelocity_5(L_56);
		// }
		return;
	}
}
// System.Void FlockCOM::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlockCOM__ctor_mAC6FD9CD9D340818F6AB2F338D812B814A37B1FD (FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 * __this, const RuntimeMethod* method)
{
	{
		// public float sepWeight = 1f;
		__this->set_sepWeight_11((1.0f));
		// public float alignWeight = 1f;
		__this->set_alignWeight_12((1.0f));
		// public float matchWeight = 1f;
		__this->set_matchWeight_13((1.0f));
		// public float cohesionWeight = 1f;
		__this->set_cohesionWeight_14((1.0f));
		// public float avoidWeight = 1f;
		__this->set_avoidWeight_15((1.0f));
		// public float dodgeWeight = 1f;
		__this->set_dodgeWeight_16((1.0f));
		Kinematic__ctor_m067A5346E3475380B0E1662CFA2AA3D9495AF89D(__this, /*hidden argument*/NULL);
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
// System.Void Flocker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flocker_Start_m1D37B9EB567AC00741534794E45ED20BBA384244 (Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myMoveType = new PrioritizedFlocking();
		PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * L_0 = (PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 *)il2cpp_codegen_object_new(PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411_il2cpp_TypeInfo_var);
		PrioritizedFlocking__ctor_m81DD31767A1E6788D8F39DB20CA8C2A619902B95(L_0, /*hidden argument*/NULL);
		__this->set_myMoveType_10(L_0);
		// myMoveType.ignoreAngular = true;
		PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * L_1 = __this->get_myMoveType_10();
		((Prioritization_t95C41DC54D60DBB2449E0BE4B1C36FD155E5D363 *)L_1)->set_ignoreAngular_4((bool)1);
		// myMoveType.linearEpsilon = epsilon;
		PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * L_2 = __this->get_myMoveType_10();
		float L_3 = __this->get_epsilon_26();
		((Prioritization_t95C41DC54D60DBB2449E0BE4B1C36FD155E5D363 *)L_2)->set_linearEpsilon_1(L_3);
		// myMoveType.character = this;
		PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * L_4 = __this->get_myMoveType_10();
		L_4->set_character_6(__this);
		// myMoveType.flock = centerOfMass.flock;
		PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * L_5 = __this->get_myMoveType_10();
		FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 * L_6 = __this->get_centerOfMass_12();
		List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * L_7 = L_6->get_flock_10();
		L_5->set_flock_7(L_7);
		// myMoveType.centerOfMass = centerOfMass;
		PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * L_8 = __this->get_myMoveType_10();
		FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 * L_9 = __this->get_centerOfMass_12();
		L_8->set_centerOfMass_8(L_9);
		// myMoveType.targetSpeed = targetSpeed;
		PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * L_10 = __this->get_myMoveType_10();
		float L_11 = __this->get_targetSpeed_13();
		L_10->set_targetSpeed_9(L_11);
		// myMoveType.sepWeight = centerOfMass.sepWeight;
		PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * L_12 = __this->get_myMoveType_10();
		FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 * L_13 = __this->get_centerOfMass_12();
		float L_14 = L_13->get_sepWeight_11();
		L_12->set_sepWeight_22(L_14);
		// myMoveType.alignWeight = centerOfMass.alignWeight;
		PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * L_15 = __this->get_myMoveType_10();
		FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 * L_16 = __this->get_centerOfMass_12();
		float L_17 = L_16->get_alignWeight_12();
		L_15->set_alignWeight_23(L_17);
		// myMoveType.matchWeight = centerOfMass.matchWeight;
		PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * L_18 = __this->get_myMoveType_10();
		FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 * L_19 = __this->get_centerOfMass_12();
		float L_20 = L_19->get_matchWeight_13();
		L_18->set_matchWeight_24(L_20);
		// myMoveType.cohesionWeight = centerOfMass.cohesionWeight;
		PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * L_21 = __this->get_myMoveType_10();
		FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 * L_22 = __this->get_centerOfMass_12();
		float L_23 = L_22->get_cohesionWeight_14();
		L_21->set_cohesionWeight_25(L_23);
		// myMoveType.avoidWeight = centerOfMass.avoidWeight;
		PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * L_24 = __this->get_myMoveType_10();
		FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 * L_25 = __this->get_centerOfMass_12();
		float L_26 = L_25->get_avoidWeight_15();
		L_24->set_avoidWeight_26(L_26);
		// myMoveType.dodgeWeight = centerOfMass.dodgeWeight;
		PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * L_27 = __this->get_myMoveType_10();
		FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 * L_28 = __this->get_centerOfMass_12();
		float L_29 = L_28->get_dodgeWeight_16();
		L_27->set_dodgeWeight_27(L_29);
		// myMoveType.avoidDist = avoidDist;
		PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * L_30 = __this->get_myMoveType_10();
		float L_31 = __this->get_avoidDist_16();
		L_30->set_avoidDist_12(L_31);
		// myMoveType.lookAhead = lookAhead;
		PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * L_32 = __this->get_myMoveType_10();
		float L_33 = __this->get_lookAhead_17();
		L_32->set_lookAhead_13(L_33);
		// myMoveType.lr = lr;
		PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * L_34 = __this->get_myMoveType_10();
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_35 = __this->get_lr_20();
		L_34->set_lr_16(L_35);
		// myMoveType.hitMat = hitMat;
		PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * L_36 = __this->get_myMoveType_10();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_37 = __this->get_hitMat_21();
		L_36->set_hitMat_17(L_37);
		// myMoveType.missMat = missMat;
		PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * L_38 = __this->get_myMoveType_10();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_39 = __this->get_missMat_22();
		L_38->set_missMat_18(L_39);
		// myMoveType.debug = debug;
		PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * L_40 = __this->get_myMoveType_10();
		bool L_41 = __this->get_debug_19();
		L_40->set_debug_15(L_41);
		// myMoveType.ignoredTags = ignoredTags;
		PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * L_42 = __this->get_myMoveType_10();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_43 = __this->get_ignoredTags_18();
		L_42->set_ignoredTags_14(L_43);
		// myMoveType.numRays = numRays;
		PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * L_44 = __this->get_myMoveType_10();
		int32_t L_45 = __this->get_numRays_23();
		L_44->set_numRays_19(L_45);
		// myMoveType.rayAngle = rayAngle;
		PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * L_46 = __this->get_myMoveType_10();
		float L_47 = __this->get_rayAngle_24();
		L_46->set_rayAngle_20(L_47);
		// myMoveType.radius = radius;
		PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * L_48 = __this->get_myMoveType_10();
		float L_49 = __this->get_radius_14();
		L_48->set_radius_10(L_49);
		// myMoveType.sepThreshold = sepThreshold;
		PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * L_50 = __this->get_myMoveType_10();
		float L_51 = __this->get_sepThreshold_15();
		L_50->set_sepThreshold_11(L_51);
		// myRotateType = new LookWhereGoing();
		LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * L_52 = (LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 *)il2cpp_codegen_object_new(LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0_il2cpp_TypeInfo_var);
		LookWhereGoing__ctor_m225781ABC6447E4CC44715861AF5635DA2DA5115(L_52, /*hidden argument*/NULL);
		__this->set_myRotateType_11(L_52);
		// myRotateType.character = this;
		LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * L_53 = __this->get_myRotateType_11();
		((Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)L_53)->set_character_1(__this);
		// myRotateType.target = myTarget;
		LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * L_54 = __this->get_myRotateType_11();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_55 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_myTarget_8();
		((Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)L_54)->set_target_2(L_55);
		// myRotateType.maxAngularAcceleration = maxAngularAcceleration;
		LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * L_56 = __this->get_myRotateType_11();
		float L_57 = __this->get_maxAngularAcceleration_25();
		((Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)L_56)->set_maxAngularAcceleration_3(L_57);
		// myRotateType.maxRotation = maxAngularVelocity;
		LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * L_58 = __this->get_myRotateType_11();
		float L_59 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_maxAngularVelocity_7();
		((Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)L_58)->set_maxRotation_4(L_59);
		// }
		return;
	}
}
// System.Void Flocker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flocker_Update_m4CD16D0E543B3E41E118E85C5E7D8471AF1FAD4D (Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// steeringUpdate = new SteeringOutput();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_0 = (SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D *)il2cpp_codegen_object_new(SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		SteeringOutput__ctor_m324DFBCCE92C73E1BEC5AB73096A0762BBFB7F73(L_0, /*hidden argument*/NULL);
		((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->set_steeringUpdate_9(L_0);
		// steeringUpdate.linear = myMoveType.getSteering().linear;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_1 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_steeringUpdate_9();
		PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * L_2 = __this->get_myMoveType_10();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_3;
		L_3 = VirtFuncInvoker0< SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * >::Invoke(4 /* SteeringOutput SteeringBehavior::getSteering() */, L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = L_3->get_linear_0();
		L_1->set_linear_0(L_4);
		// myMoveType.iterationCount = iterationCount++ % numRays;
		PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * L_5 = __this->get_myMoveType_10();
		int32_t L_6 = __this->get_iterationCount_27();
		V_0 = L_6;
		int32_t L_7 = V_0;
		__this->set_iterationCount_27(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		int32_t L_8 = V_0;
		int32_t L_9 = __this->get_numRays_23();
		L_5->set_iterationCount_21(((int32_t)((int32_t)L_8%(int32_t)L_9)));
		// steeringUpdate.angular = myRotateType.getSteering().angular;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_10 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_steeringUpdate_9();
		LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * L_11 = __this->get_myRotateType_11();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_12;
		L_12 = VirtFuncInvoker0< SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * >::Invoke(4 /* SteeringOutput SteeringBehavior::getSteering() */, L_11);
		float L_13 = L_12->get_angular_1();
		L_10->set_angular_1(L_13);
		// base.Update();
		Kinematic_Update_m90DEAE2534DEF1E85A2B0289FBAAB1A25D476093(__this, /*hidden argument*/NULL);
		// transform.position = new Vector3(transform.position.x, 0, transform.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_21), L_17, (0.0f), L_20, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_14, L_21, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Flocker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flocker__ctor_mF7D6BEAEC173D9C0CD0671168D07A970242682A0 (Flocker_t6F0CEFBF8B46B5FBF39ED0D5DBC3EE00DFC063A8 * __this, const RuntimeMethod* method)
{
	{
		// public float targetSpeed = 3f;
		__this->set_targetSpeed_13((3.0f));
		// public float radius = 1f;
		__this->set_radius_14((1.0f));
		// public float sepThreshold = 10f;
		__this->set_sepThreshold_15((10.0f));
		// public float avoidDist = 30f;
		__this->set_avoidDist_16((30.0f));
		// public float lookAhead = 10f;
		__this->set_lookAhead_17((10.0f));
		// public int numRays = 1;
		__this->set_numRays_23(1);
		// public float rayAngle = 10f;
		__this->set_rayAngle_24((10.0f));
		// public float maxAngularAcceleration = 10f;
		__this->set_maxAngularAcceleration_25((10.0f));
		// public float epsilon = 0.1f;
		__this->set_epsilon_26((0.100000001f));
		Kinematic__ctor_m067A5346E3475380B0E1662CFA2AA3D9495AF89D(__this, /*hidden argument*/NULL);
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
// System.Collections.Generic.List`1<SteeringBehavior> Flocking::getBehaviors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8 * Flocking_getBehaviors_mC0A253F551783804EC48B09075667083CB7FBAD9 (Flocking_t43CEE98336DA04A3F685A25FC909ACB560366EFE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DA0E2C0D5F7659D65FD2AFE1A870FBF111604C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m310ACA95AC35DB0ABD08DA9D070473FDEEDA0339_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pursue_tD122B2A570231794548505BE2B891BCBCCF88F8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Separation_tB627F4D516766D919037B2256412BE43C0539007_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeedMatch_tBE04550772E96FFF0DB8C832949CEC09A9346294_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VelocityAlign_tDDB9C6C2E3164B7761196EF435164BFF365B9509_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Separation_tB627F4D516766D919037B2256412BE43C0539007 * V_0 = NULL;
	VelocityAlign_tDDB9C6C2E3164B7761196EF435164BFF365B9509 * V_1 = NULL;
	SpeedMatch_tBE04550772E96FFF0DB8C832949CEC09A9346294 * V_2 = NULL;
	Pursue_tD122B2A570231794548505BE2B891BCBCCF88F8E * V_3 = NULL;
	{
		// List<SteeringBehavior> behaviors = new List<SteeringBehavior>();
		List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8 * L_0 = (List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8 *)il2cpp_codegen_object_new(List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8_il2cpp_TypeInfo_var);
		List_1__ctor_m310ACA95AC35DB0ABD08DA9D070473FDEEDA0339(L_0, /*hidden argument*/List_1__ctor_m310ACA95AC35DB0ABD08DA9D070473FDEEDA0339_RuntimeMethod_var);
		// Separation sep = new Separation();
		Separation_tB627F4D516766D919037B2256412BE43C0539007 * L_1 = (Separation_tB627F4D516766D919037B2256412BE43C0539007 *)il2cpp_codegen_object_new(Separation_tB627F4D516766D919037B2256412BE43C0539007_il2cpp_TypeInfo_var);
		Separation__ctor_m508F8F5DF365AE9C624B42D836ED93028714778A(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		// sep.character = character;
		Separation_tB627F4D516766D919037B2256412BE43C0539007 * L_2 = V_0;
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_3 = __this->get_character_4();
		L_2->set_character_1(L_3);
		// sep.targets = flock;
		Separation_tB627F4D516766D919037B2256412BE43C0539007 * L_4 = V_0;
		List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * L_5 = __this->get_flock_5();
		L_4->set_targets_3(L_5);
		// sep.weight = sepWeight;
		Separation_tB627F4D516766D919037B2256412BE43C0539007 * L_6 = V_0;
		float L_7 = __this->get_sepWeight_9();
		((SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1 *)L_6)->set_weight_0(L_7);
		// sep.threshold = sepThreshold;
		Separation_tB627F4D516766D919037B2256412BE43C0539007 * L_8 = V_0;
		float L_9 = __this->get_sepThreshold_8();
		L_8->set_threshold_7(L_9);
		// sep.maxAcceleration = 3f;
		Separation_tB627F4D516766D919037B2256412BE43C0539007 * L_10 = V_0;
		L_10->set_maxAcceleration_2((3.0f));
		// behaviors.Add(sep);
		List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8 * L_11 = L_0;
		Separation_tB627F4D516766D919037B2256412BE43C0539007 * L_12 = V_0;
		List_1_Add_m3DA0E2C0D5F7659D65FD2AFE1A870FBF111604C8(L_11, L_12, /*hidden argument*/List_1_Add_m3DA0E2C0D5F7659D65FD2AFE1A870FBF111604C8_RuntimeMethod_var);
		// VelocityAlign align = new VelocityAlign();
		VelocityAlign_tDDB9C6C2E3164B7761196EF435164BFF365B9509 * L_13 = (VelocityAlign_tDDB9C6C2E3164B7761196EF435164BFF365B9509 *)il2cpp_codegen_object_new(VelocityAlign_tDDB9C6C2E3164B7761196EF435164BFF365B9509_il2cpp_TypeInfo_var);
		VelocityAlign__ctor_m8739EF8AAE993566E6633ED0C462D56A163646E3(L_13, /*hidden argument*/NULL);
		V_1 = L_13;
		// align.character = character;
		VelocityAlign_tDDB9C6C2E3164B7761196EF435164BFF365B9509 * L_14 = V_1;
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_15 = __this->get_character_4();
		L_14->set_character_1(L_15);
		// align.target = centerOfMass;
		VelocityAlign_tDDB9C6C2E3164B7761196EF435164BFF365B9509 * L_16 = V_1;
		FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 * L_17 = __this->get_centerOfMass_6();
		L_16->set_target_2(L_17);
		// align.weight = alignWeight;
		VelocityAlign_tDDB9C6C2E3164B7761196EF435164BFF365B9509 * L_18 = V_1;
		float L_19 = __this->get_alignWeight_10();
		((SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1 *)L_18)->set_weight_0(L_19);
		// behaviors.Add(align);
		List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8 * L_20 = L_11;
		VelocityAlign_tDDB9C6C2E3164B7761196EF435164BFF365B9509 * L_21 = V_1;
		List_1_Add_m3DA0E2C0D5F7659D65FD2AFE1A870FBF111604C8(L_20, L_21, /*hidden argument*/List_1_Add_m3DA0E2C0D5F7659D65FD2AFE1A870FBF111604C8_RuntimeMethod_var);
		// SpeedMatch match = new SpeedMatch();
		SpeedMatch_tBE04550772E96FFF0DB8C832949CEC09A9346294 * L_22 = (SpeedMatch_tBE04550772E96FFF0DB8C832949CEC09A9346294 *)il2cpp_codegen_object_new(SpeedMatch_tBE04550772E96FFF0DB8C832949CEC09A9346294_il2cpp_TypeInfo_var);
		SpeedMatch__ctor_m63038E9952B92E684011CB84BBA8E0FE07CD1489(L_22, /*hidden argument*/NULL);
		V_2 = L_22;
		// match.character = character;
		SpeedMatch_tBE04550772E96FFF0DB8C832949CEC09A9346294 * L_23 = V_2;
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_24 = __this->get_character_4();
		L_23->set_character_1(L_24);
		// match.targetSpeed = targetSpeed;
		SpeedMatch_tBE04550772E96FFF0DB8C832949CEC09A9346294 * L_25 = V_2;
		float L_26 = __this->get_targetSpeed_7();
		L_25->set_targetSpeed_2(L_26);
		// match.weight = matchWeight;
		SpeedMatch_tBE04550772E96FFF0DB8C832949CEC09A9346294 * L_27 = V_2;
		float L_28 = __this->get_matchWeight_11();
		((SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1 *)L_27)->set_weight_0(L_28);
		// behaviors.Add(match);
		List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8 * L_29 = L_20;
		SpeedMatch_tBE04550772E96FFF0DB8C832949CEC09A9346294 * L_30 = V_2;
		List_1_Add_m3DA0E2C0D5F7659D65FD2AFE1A870FBF111604C8(L_29, L_30, /*hidden argument*/List_1_Add_m3DA0E2C0D5F7659D65FD2AFE1A870FBF111604C8_RuntimeMethod_var);
		// Pursue cohesion = new Pursue();
		Pursue_tD122B2A570231794548505BE2B891BCBCCF88F8E * L_31 = (Pursue_tD122B2A570231794548505BE2B891BCBCCF88F8E *)il2cpp_codegen_object_new(Pursue_tD122B2A570231794548505BE2B891BCBCCF88F8E_il2cpp_TypeInfo_var);
		Pursue__ctor_m7D74EE1F0914B6CF22C6B5D1E5A65D1ABFE7B4CB(L_31, /*hidden argument*/NULL);
		V_3 = L_31;
		// cohesion.character = character;
		Pursue_tD122B2A570231794548505BE2B891BCBCCF88F8E * L_32 = V_3;
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_33 = __this->get_character_4();
		((Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF *)L_32)->set_character_1(L_33);
		// cohesion.target = centerOfMass.gameObject;
		Pursue_tD122B2A570231794548505BE2B891BCBCCF88F8E * L_34 = V_3;
		FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 * L_35 = __this->get_centerOfMass_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36;
		L_36 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_35, /*hidden argument*/NULL);
		((Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF *)L_34)->set_target_2(L_36);
		// cohesion.weight = cohesionWeight;
		Pursue_tD122B2A570231794548505BE2B891BCBCCF88F8E * L_37 = V_3;
		float L_38 = __this->get_cohesionWeight_12();
		((SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1 *)L_37)->set_weight_0(L_38);
		// behaviors.Add(cohesion);
		List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8 * L_39 = L_29;
		Pursue_tD122B2A570231794548505BE2B891BCBCCF88F8E * L_40 = V_3;
		List_1_Add_m3DA0E2C0D5F7659D65FD2AFE1A870FBF111604C8(L_39, L_40, /*hidden argument*/List_1_Add_m3DA0E2C0D5F7659D65FD2AFE1A870FBF111604C8_RuntimeMethod_var);
		// return behaviors;
		return L_39;
	}
}
// System.Void Flocking::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flocking__ctor_m9D7829F48420390AF758D9560C32B23BD672B9BD (Flocking_t43CEE98336DA04A3F685A25FC909ACB560366EFE * __this, const RuntimeMethod* method)
{
	{
		// public float sepThreshold = 10f;
		__this->set_sepThreshold_8((10.0f));
		// public float sepWeight = 1f;
		__this->set_sepWeight_9((1.0f));
		// public float alignWeight = 1f;
		__this->set_alignWeight_10((1.0f));
		// public float matchWeight = 1f;
		__this->set_matchWeight_11((1.0f));
		// public float cohesionWeight = 1f;
		__this->set_cohesionWeight_12((1.0f));
		BlendedBehavior__ctor_m2025EE90A9BD59DE2FBE81EF15468E50A82071B8(__this, /*hidden argument*/NULL);
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
// UnityEngine.Vector3 FollowPath::getTargetPosition(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FollowPath_getTargetPosition_m71296BE04CAE9939727DBA5C789CBCC9F2531B55 (FollowPath_t9F2D06DD7295A8D1D97B5B6593FD432730E16A58 * __this, bool* ___valid0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// valid = true;
		bool* L_0 = ___valid0;
		*((int8_t*)L_0) = (int8_t)1;
		// Vector3 pos = predictive ? character.transform.position + character.linearVelocity * predictionTime : character.transform.position;
		bool L_1 = __this->get_predictive_6();
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_2 = ((Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF *)__this)->get_character_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		goto IL_0048;
	}

IL_001d:
	{
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_5 = ((Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF *)__this)->get_character_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_8 = ((Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF *)__this)->get_character_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = L_8->get_linearVelocity_4();
		float L_10 = __this->get_predictionTime_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_7, L_11, /*hidden argument*/NULL);
		G_B3_0 = L_12;
	}

IL_0048:
	{
		V_0 = G_B3_0;
		// currentParam = path.GetParam(pos, currentParam);
		Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862 * L_13 = __this->get_path_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_0;
		float L_15 = __this->get_currentParam_9();
		float L_16;
		L_16 = Path_GetParam_m4934DC3D26ACB495CFE5699B46147AD18324AF7D(L_13, L_14, L_15, /*hidden argument*/NULL);
		__this->set_currentParam_9(L_16);
		// float targetParam = currentParam + pathOffset;
		float L_17 = __this->get_currentParam_9();
		float L_18 = __this->get_pathOffset_5();
		V_1 = ((float)il2cpp_codegen_add((float)L_17, (float)L_18));
		// Vector3 targetPosition = path.GetPosition(targetParam, pos);
		Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862 * L_19 = __this->get_path_7();
		float L_20 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Path_GetPosition_m572102100146EC5DD6D28680AE86363FF66B210C(L_19, L_20, L_21, /*hidden argument*/NULL);
		// return targetPosition;
		return L_22;
	}
}
// System.Void FollowPath::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPath__ctor_mD8E1D7FA1071C424321B90F54CA2E26F43117CA1 (FollowPath_t9F2D06DD7295A8D1D97B5B6593FD432730E16A58 * __this, const RuntimeMethod* method)
{
	{
		// public float pathOffset = 1f;
		__this->set_pathOffset_5((1.0f));
		// float predictionTime = 0.1f;
		__this->set_predictionTime_8((0.100000001f));
		Seek__ctor_mA0F97EBD068DB6090AEAEE4E5F1A87640F4EB33A(__this, /*hidden argument*/NULL);
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
// System.Collections.Generic.List`1<SteeringBehavior> GeneralAvoidance::getBehaviors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8 * GeneralAvoidance_getBehaviors_mB2CBAC4F97A091DA5F29E5E56AAA83C03326DA11 (GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AggressiveCollisionAvoidance_tD56365F9F9CCD2F4CF4250DB32CB0BB6F4BBFDB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DA0E2C0D5F7659D65FD2AFE1A870FBF111604C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m310ACA95AC35DB0ABD08DA9D070473FDEEDA0339_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * V_0 = NULL;
	AggressiveCollisionAvoidance_tD56365F9F9CCD2F4CF4250DB32CB0BB6F4BBFDB2 * V_1 = NULL;
	{
		// List<SteeringBehavior> behaviors = new List<SteeringBehavior>();
		List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8 * L_0 = (List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8 *)il2cpp_codegen_object_new(List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8_il2cpp_TypeInfo_var);
		List_1__ctor_m310ACA95AC35DB0ABD08DA9D070473FDEEDA0339(L_0, /*hidden argument*/List_1__ctor_m310ACA95AC35DB0ABD08DA9D070473FDEEDA0339_RuntimeMethod_var);
		// ObstacleAvoidance avoid = new ObstacleAvoidance();
		ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * L_1 = (ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C *)il2cpp_codegen_object_new(ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C_il2cpp_TypeInfo_var);
		ObstacleAvoidance__ctor_m753DA6E64DD7A2DFC2E8E5785B14A347575A6689(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		// avoid.character = character;
		ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * L_2 = V_0;
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_3 = __this->get_character_4();
		((Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF *)L_2)->set_character_1(L_3);
		// avoid.avoidDist = avoidDist;
		ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * L_4 = V_0;
		float L_5 = __this->get_avoidDist_7();
		L_4->set_avoidDist_5(L_5);
		// avoid.lookAhead = lookAhead;
		ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * L_6 = V_0;
		float L_7 = __this->get_lookAhead_8();
		L_6->set_lookAhead_6(L_7);
		// avoid.lr = lr;
		ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * L_8 = V_0;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_9 = __this->get_lr_11();
		L_8->set_lr_8(L_9);
		// avoid.hitMat = hitMat;
		ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * L_10 = V_0;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = __this->get_hitMat_12();
		L_10->set_hitMat_9(L_11);
		// avoid.missMat = missMat;
		ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * L_12 = V_0;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = __this->get_missMat_13();
		L_12->set_missMat_10(L_13);
		// avoid.debug = debug;
		ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * L_14 = V_0;
		bool L_15 = __this->get_debug_10();
		L_14->set_debug_7(L_15);
		// avoid.ignoredTags = ignoredTags;
		ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * L_16 = V_0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_17 = __this->get_ignoredTags_9();
		L_16->set_ignoredTags_11(L_17);
		// avoid.numRays = numRays;
		ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * L_18 = V_0;
		int32_t L_19 = __this->get_numRays_14();
		L_18->set_numRays_12(L_19);
		// avoid.rayAngle = rayAngle;
		ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * L_20 = V_0;
		float L_21 = __this->get_rayAngle_15();
		L_20->set_rayAngle_13(L_21);
		// avoid.currentRay = iterationCount;
		ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * L_22 = V_0;
		int32_t L_23 = __this->get_iterationCount_16();
		L_22->set_currentRay_14(L_23);
		// behaviors.Add(avoid);
		List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8 * L_24 = L_0;
		ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * L_25 = V_0;
		List_1_Add_m3DA0E2C0D5F7659D65FD2AFE1A870FBF111604C8(L_24, L_25, /*hidden argument*/List_1_Add_m3DA0E2C0D5F7659D65FD2AFE1A870FBF111604C8_RuntimeMethod_var);
		// AggressiveCollisionAvoidance dodge = new AggressiveCollisionAvoidance();
		AggressiveCollisionAvoidance_tD56365F9F9CCD2F4CF4250DB32CB0BB6F4BBFDB2 * L_26 = (AggressiveCollisionAvoidance_tD56365F9F9CCD2F4CF4250DB32CB0BB6F4BBFDB2 *)il2cpp_codegen_object_new(AggressiveCollisionAvoidance_tD56365F9F9CCD2F4CF4250DB32CB0BB6F4BBFDB2_il2cpp_TypeInfo_var);
		AggressiveCollisionAvoidance__ctor_mB76A315A524F34796E2D75636342445C524FFC22(L_26, /*hidden argument*/NULL);
		V_1 = L_26;
		// dodge.character = character;
		AggressiveCollisionAvoidance_tD56365F9F9CCD2F4CF4250DB32CB0BB6F4BBFDB2 * L_27 = V_1;
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_28 = __this->get_character_4();
		L_27->set_character_1(L_28);
		// dodge.targets = flock;
		AggressiveCollisionAvoidance_tD56365F9F9CCD2F4CF4250DB32CB0BB6F4BBFDB2 * L_29 = V_1;
		List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * L_30 = __this->get_flock_5();
		L_29->set_targets_3(L_30);
		// dodge.radius = radius;
		AggressiveCollisionAvoidance_tD56365F9F9CCD2F4CF4250DB32CB0BB6F4BBFDB2 * L_31 = V_1;
		float L_32 = __this->get_radius_6();
		L_31->set_radius_4(L_32);
		// behaviors.Add(dodge);
		List_1_t4DBAAA7CFC5147C865D49EC559F9784B2576B3C8 * L_33 = L_24;
		AggressiveCollisionAvoidance_tD56365F9F9CCD2F4CF4250DB32CB0BB6F4BBFDB2 * L_34 = V_1;
		List_1_Add_m3DA0E2C0D5F7659D65FD2AFE1A870FBF111604C8(L_33, L_34, /*hidden argument*/List_1_Add_m3DA0E2C0D5F7659D65FD2AFE1A870FBF111604C8_RuntimeMethod_var);
		// return behaviors;
		return L_33;
	}
}
// System.Void GeneralAvoidance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneralAvoidance__ctor_m7F263F78C0987132A5764062E7F1AC5788EFB5CD (GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54 * __this, const RuntimeMethod* method)
{
	{
		// public float radius = 1f;
		__this->set_radius_6((1.0f));
		// public float avoidDist = 30f;
		__this->set_avoidDist_7((30.0f));
		// public float lookAhead = 10f;
		__this->set_lookAhead_8((10.0f));
		// public int numRays = 1;
		__this->set_numRays_14(1);
		// public float rayAngle = 10f;
		__this->set_rayAngle_15((10.0f));
		// public float avoidWeight = 1f;
		__this->set_avoidWeight_17((1.0f));
		// public float dodgeWeight = 1f;
		__this->set_dodgeWeight_18((1.0f));
		BlendedBehavior__ctor_m2025EE90A9BD59DE2FBE81EF15468E50A82071B8(__this, /*hidden argument*/NULL);
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
// System.Void Impact::.ctor(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Impact__ctor_m4D82F11832E213FB20136AC0860AC9BC21FCB81A (Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___impactPoint1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___impactNormal2, bool ___bounce3, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bounceVec4, const RuntimeMethod* method)
{
	{
		// public Impact(GameObject gameObject, Vector3 impactPoint, Vector3 impactNormal, bool bounce, Vector3 bounceVec)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.gameObject = gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___gameObject0;
		__this->set_gameObject_0(L_0);
		// this.impactPoint = impactPoint;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___impactPoint1;
		__this->set_impactPoint_1(L_1);
		// this.impactNormal = impactNormal;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___impactNormal2;
		__this->set_impactNormal_2(L_2);
		// this.bounce = bounce;
		bool L_3 = ___bounce3;
		__this->set_bounce_3(L_3);
		// this.bounceVec = bounceVec;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___bounceVec4;
		__this->set_bounceVec_4(L_4);
		// }
		return;
	}
}
// System.Void Impact::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Impact__ctor_mBFE61EC188002BAA1A9D0A58A653FB1B735CBA03 (Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___impactPoint0, const RuntimeMethod* method)
{
	{
		// public Impact(Vector3 impactPoint)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.gameObject = null;
		__this->set_gameObject_0((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// this.impactPoint = impactPoint;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___impactPoint0;
		__this->set_impactPoint_1(L_0);
		// this.impactNormal = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_impactNormal_2(L_1);
		// this.bounce = false;
		__this->set_bounce_3((bool)0);
		// this.bounceVec = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_bounceVec_4(L_2);
		// }
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
// System.Void Impactable::.ctor(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Impactable__ctor_m6E8D704A3E5323A2F3FD6BB602CAC33C127CBBC1 (Impactable_t1F12A6C6A7493775F0DDC619DF5B67725572C4FA * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, bool ___bounceable1, const RuntimeMethod* method)
{
	{
		// public Impactable(GameObject gameObject, bool bounceable)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.gameObject = gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___gameObject0;
		__this->set_gameObject_0(L_0);
		// this.bounceable = bounceable;
		bool L_1 = ___bounceable1;
		__this->set_bounceable_1(L_1);
		// }
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
// System.Void Kinematic::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kinematic_Start_m03E7E8925AD2C8F3C3032E12C4E0A47CD6331C4B (Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// steeringUpdate = new SteeringOutput(); // default to nothing. should be overriden by children
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_0 = (SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D *)il2cpp_codegen_object_new(SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		SteeringOutput__ctor_m324DFBCCE92C73E1BEC5AB73096A0762BBFB7F73(L_0, /*hidden argument*/NULL);
		__this->set_steeringUpdate_9(L_0);
		// }
		return;
	}
}
// System.Void Kinematic::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kinematic_Update_m90DEAE2534DEF1E85A2B0289FBAAB1A25D476093 (Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (float.IsNaN(angularVelocity))
		float L_0 = __this->get_angularVelocity_5();
		bool L_1;
		L_1 = Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// angularVelocity = 0.0f;
		__this->set_angularVelocity_5((0.0f));
	}

IL_0018:
	{
		// this.transform.position += linearVelocity * Time.deltaTime;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = __this->get_linearVelocity_4();
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_5, L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_4, L_7, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_8, /*hidden argument*/NULL);
		// if (Mathf.Abs(angularVelocity) > 0.01f)
		float L_9 = __this->get_angularVelocity_5();
		float L_10;
		L_10 = fabsf(L_9);
		if ((!(((float)L_10) > ((float)(0.00999999978f)))))
		{
			goto IL_0088;
		}
	}
	{
		// Vector3 v = new Vector3(0, angularVelocity, 0);
		float L_11 = __this->get_angularVelocity_5();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), (0.0f), L_11, (0.0f), /*hidden argument*/NULL);
		// this.transform.eulerAngles += v * Time.deltaTime;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = L_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_0;
		float L_16;
		L_16 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_15, L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_14, L_17, /*hidden argument*/NULL);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_13, L_18, /*hidden argument*/NULL);
	}

IL_0088:
	{
		// if (steeringUpdate != null)
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_19 = __this->get_steeringUpdate_9();
		if (!L_19)
		{
			goto IL_00d4;
		}
	}
	{
		// linearVelocity += steeringUpdate.linear * Time.deltaTime;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = __this->get_linearVelocity_4();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_21 = __this->get_steeringUpdate_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = L_21->get_linear_0();
		float L_23;
		L_23 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_22, L_23, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_20, L_24, /*hidden argument*/NULL);
		__this->set_linearVelocity_4(L_25);
		// angularVelocity += steeringUpdate.angular * Time.deltaTime;
		float L_26 = __this->get_angularVelocity_5();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_27 = __this->get_steeringUpdate_9();
		float L_28 = L_27->get_angular_1();
		float L_29;
		L_29 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_angularVelocity_5(((float)il2cpp_codegen_add((float)L_26, (float)((float)il2cpp_codegen_multiply((float)L_28, (float)L_29)))));
	}

IL_00d4:
	{
		// if (linearVelocity.magnitude > maxSpeed)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_30 = __this->get_address_of_linearVelocity_4();
		float L_31;
		L_31 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_30, /*hidden argument*/NULL);
		float L_32 = __this->get_maxSpeed_6();
		if ((!(((float)L_31) > ((float)L_32))))
		{
			goto IL_0109;
		}
	}
	{
		// linearVelocity.Normalize();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_33 = __this->get_address_of_linearVelocity_4();
		Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_33, /*hidden argument*/NULL);
		// linearVelocity *= maxSpeed;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = __this->get_linearVelocity_4();
		float L_35 = __this->get_maxSpeed_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_34, L_35, /*hidden argument*/NULL);
		__this->set_linearVelocity_4(L_36);
	}

IL_0109:
	{
		// if (Mathf.Abs(angularVelocity) > maxAngularVelocity)
		float L_37 = __this->get_angularVelocity_5();
		float L_38;
		L_38 = fabsf(L_37);
		float L_39 = __this->get_maxAngularVelocity_7();
		if ((!(((float)L_38) > ((float)L_39))))
		{
			goto IL_013b;
		}
	}
	{
		// angularVelocity = maxAngularVelocity * (angularVelocity / Mathf.Abs(angularVelocity));
		float L_40 = __this->get_maxAngularVelocity_7();
		float L_41 = __this->get_angularVelocity_5();
		float L_42 = __this->get_angularVelocity_5();
		float L_43;
		L_43 = fabsf(L_42);
		__this->set_angularVelocity_5(((float)il2cpp_codegen_multiply((float)L_40, (float)((float)((float)L_41/(float)L_43)))));
	}

IL_013b:
	{
		// }
		return;
	}
}
// System.Void Kinematic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kinematic__ctor_m067A5346E3475380B0E1662CFA2AA3D9495AF89D (Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * __this, const RuntimeMethod* method)
{
	{
		// public float maxSpeed = 10.0f;
		__this->set_maxSpeed_6((10.0f));
		// public float maxAngularVelocity = 45.0f; // degrees
		__this->set_maxAngularVelocity_7((45.0f));
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
// System.Single LookWhereGoing::getTargetAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LookWhereGoing_getTargetAngle_mDAAFE46697B3029203209EBF36E6C09815E6180C (LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 velocity = character.linearVelocity;
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_0 = ((Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)__this)->get_character_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = L_0->get_linearVelocity_4();
		V_0 = L_1;
		// if (velocity.magnitude == 0)
		float L_2;
		L_2 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			goto IL_0030;
		}
	}
	{
		// return character.transform.eulerAngles.y;
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_3 = ((Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)__this)->get_character_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_3();
		return L_6;
	}

IL_0030:
	{
		// float targetAngle = Mathf.Atan2(velocity.x, velocity.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		float L_8 = L_7.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		float L_10 = L_9.get_z_4();
		float L_11;
		L_11 = atan2f(L_8, L_10);
		// targetAngle *= Mathf.Rad2Deg;
		// return targetAngle;
		return ((float)il2cpp_codegen_multiply((float)L_11, (float)(57.2957802f)));
	}
}
// System.Void LookWhereGoing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookWhereGoing__ctor_m225781ABC6447E4CC44715861AF5635DA2DA5115 (LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * __this, const RuntimeMethod* method)
{
	{
		Align__ctor_m10EF7B19EF95A4EE0945782AB512D3603AC3D468(__this, /*hidden argument*/NULL);
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
// System.Void Menu::StartDV5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_StartDV5_m55DE6C9005B549DE734C6A2A1C82E95B7EAF94DC (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Menu::StartPR5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_StartPR5_mCB090350E8A6AF37A1AC8A4DD2606727F36FE8A0 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 2);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)2)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Menu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu__ctor_m7EE9043A2E9DD126B6F69DD8AE3BC9CBDF6E2134 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
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
// UnityEngine.Vector3 ObstacleAvoidance::angleToVector(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ObstacleAvoidance_angleToVector_mAB5C33B27C098D5EB2825712FFC340696B22A5D7 (ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * __this, float ___angle0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 result = new Vector3(-Mathf.Sin(angle * Mathf.Deg2Rad), 0, Mathf.Cos(angle * Mathf.Deg2Rad));
		float L_0 = ___angle0;
		float L_1;
		L_1 = sinf(((float)il2cpp_codegen_multiply((float)L_0, (float)(0.0174532924f))));
		float L_2 = ___angle0;
		float L_3;
		L_3 = cosf(((float)il2cpp_codegen_multiply((float)L_2, (float)(0.0174532924f))));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), ((-L_1)), (0.0f), L_3, /*hidden argument*/NULL);
		// return result.normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Single ObstacleAvoidance::vectorToAngle(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ObstacleAvoidance_vectorToAngle_m159BAEE23D5E086B7A32BDE620CBB8F840F2C456 (ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method)
{
	{
		// float result = Mathf.Atan2(-vector.normalized.x, vector.normalized.z) * Mathf.Rad2Deg;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___vector0), /*hidden argument*/NULL);
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___vector0), /*hidden argument*/NULL);
		float L_3 = L_2.get_z_4();
		float L_4;
		L_4 = atan2f(((-L_1)), L_3);
		// return result;
		return ((float)il2cpp_codegen_multiply((float)L_4, (float)(57.2957802f)));
	}
}
// UnityEngine.Vector3 ObstacleAvoidance::getTargetPosition(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ObstacleAvoidance_getTargetPosition_m78C83F4C473BD27955E2AC45858C82AA07B667B7 (ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * __this, bool* ___valid0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// Vector3 raycastDir = character.linearVelocity.normalized;
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_0 = ((Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF *)__this)->get_character_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = L_0->get_address_of_linearVelocity_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (numRays > 1)
		int32_t L_3 = __this->get_numRays_12();
		if ((((int32_t)L_3) <= ((int32_t)1)))
		{
			goto IL_005d;
		}
	}
	{
		// float raySpread = rayAngle / (numRays - 1);
		float L_4 = __this->get_rayAngle_13();
		int32_t L_5 = __this->get_numRays_12();
		V_3 = ((float)((float)L_4/(float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1))))));
		// float rayOffset = (-rayAngle / 2) + raySpread * currentRay;
		float L_6 = __this->get_rayAngle_13();
		float L_7 = V_3;
		int32_t L_8 = __this->get_currentRay_14();
		V_4 = ((float)il2cpp_codegen_add((float)((float)((float)((-L_6))/(float)(2.0f))), (float)((float)il2cpp_codegen_multiply((float)L_7, (float)((float)((float)L_8))))));
		// float currentAngle = vectorToAngle(raycastDir);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		float L_10;
		L_10 = ObstacleAvoidance_vectorToAngle_m159BAEE23D5E086B7A32BDE620CBB8F840F2C456(__this, L_9, /*hidden argument*/NULL);
		V_5 = L_10;
		// currentAngle += rayOffset;
		float L_11 = V_5;
		float L_12 = V_4;
		V_5 = ((float)il2cpp_codegen_add((float)L_11, (float)L_12));
		// raycastDir = angleToVector(currentAngle);
		float L_13 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = ObstacleAvoidance_angleToVector_mAB5C33B27C098D5EB2825712FFC340696B22A5D7(__this, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
	}

IL_005d:
	{
		// if (debug)
		bool L_15 = __this->get_debug_7();
		if (!L_15)
		{
			goto IL_00ae;
		}
	}
	{
		// lr.SetPosition(0, character.transform.position);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_16 = __this->get_lr_8();
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_17 = ((Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF *)__this)->get_character_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_16, 0, L_19, /*hidden argument*/NULL);
		// lr.SetPosition(1, raycastDir * lookAhead + character.transform.position);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_20 = __this->get_lr_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_0;
		float L_22 = __this->get_lookAhead_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_21, L_22, /*hidden argument*/NULL);
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_24 = ((Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF *)__this)->get_character_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_23, L_26, /*hidden argument*/NULL);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_20, 1, L_27, /*hidden argument*/NULL);
	}

IL_00ae:
	{
		// Vector3 targetPoint = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_2 = L_28;
		// if (Physics.Raycast(character.transform.position, raycastDir, out hitInfo, lookAhead) && !ignoredTags.Contains(hitInfo.collider.tag))
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_29 = ((Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF *)__this)->get_character_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_29, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = V_0;
		float L_33 = __this->get_lookAhead_6();
		bool L_34;
		L_34 = Physics_Raycast_m18E12C65F127D1AA50D196623F04F81CB138FD12(L_31, L_32, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0136;
		}
	}
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_35 = __this->get_ignoredTags_11();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_36;
		L_36 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), /*hidden argument*/NULL);
		String_t* L_37;
		L_37 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_36, /*hidden argument*/NULL);
		bool L_38;
		L_38 = List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F(L_35, L_37, /*hidden argument*/List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var);
		if (L_38)
		{
			goto IL_0136;
		}
	}
	{
		// if (debug)
		bool L_39 = __this->get_debug_7();
		if (!L_39)
		{
			goto IL_0106;
		}
	}
	{
		// lr.material = hitMat;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_40 = __this->get_lr_8();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_41 = __this->get_hitMat_9();
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_40, L_41, /*hidden argument*/NULL);
	}

IL_0106:
	{
		// valid = true;
		bool* L_42 = ___valid0;
		*((int8_t*)L_42) = (int8_t)1;
		// targetPoint = hitInfo.point + hitInfo.normal * avoidDist;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), /*hidden argument*/NULL);
		float L_45 = __this->get_avoidDist_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_44, L_45, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_43, L_46, /*hidden argument*/NULL);
		V_2 = L_47;
		// targetPoint.y = 0;
		(&V_2)->set_y_3((0.0f));
		// }
		goto IL_0158;
	}

IL_0136:
	{
		// if (debug)
		bool L_48 = __this->get_debug_7();
		if (!L_48)
		{
			goto IL_014f;
		}
	}
	{
		// lr.material = missMat;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_49 = __this->get_lr_8();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_50 = __this->get_missMat_10();
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_49, L_50, /*hidden argument*/NULL);
	}

IL_014f:
	{
		// valid = false;
		bool* L_51 = ___valid0;
		*((int8_t*)L_51) = (int8_t)0;
		// targetPoint = Vector3.positiveInfinity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Vector3_get_positiveInfinity_mFBABFE23E517E2C66E78AC60C79B8B9A73CF5229(/*hidden argument*/NULL);
		V_2 = L_52;
	}

IL_0158:
	{
		// return targetPoint;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53 = V_2;
		return L_53;
	}
}
// System.Void ObstacleAvoidance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleAvoidance__ctor_m753DA6E64DD7A2DFC2E8E5785B14A347575A6689 (ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * __this, const RuntimeMethod* method)
{
	{
		// public float avoidDist = 30f;
		__this->set_avoidDist_5((30.0f));
		// public float lookAhead = 10f;
		__this->set_lookAhead_6((10.0f));
		// public int numRays = 1;
		__this->set_numRays_12(1);
		// public float rayAngle = 10f;
		__this->set_rayAngle_13((10.0f));
		Seek__ctor_mA0F97EBD068DB6090AEAEE4E5F1A87640F4EB33A(__this, /*hidden argument*/NULL);
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
// System.Void ObstacleAvoider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleAvoider_Start_m3DF5C80B753AF1DB1C2C7B5E22E3317B30B7712D (ObstacleAvoider_t07D61DBCD670B954F50D9CD0390C5BA9A77F7B05 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myMoveType = new ObstacleAvoidance();
		ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * L_0 = (ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C *)il2cpp_codegen_object_new(ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C_il2cpp_TypeInfo_var);
		ObstacleAvoidance__ctor_m753DA6E64DD7A2DFC2E8E5785B14A347575A6689(L_0, /*hidden argument*/NULL);
		__this->set_myMoveType_10(L_0);
		// myMoveType.character = this;
		ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * L_1 = __this->get_myMoveType_10();
		((Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF *)L_1)->set_character_1(__this);
		// myMoveType.avoidDist = avoidDist;
		ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * L_2 = __this->get_myMoveType_10();
		float L_3 = __this->get_avoidDist_12();
		L_2->set_avoidDist_5(L_3);
		// myMoveType.lookAhead = lookAhead;
		ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * L_4 = __this->get_myMoveType_10();
		float L_5 = __this->get_lookAhead_13();
		L_4->set_lookAhead_6(L_5);
		// myMoveType.lr = lr;
		ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * L_6 = __this->get_myMoveType_10();
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_7 = __this->get_lr_14();
		L_6->set_lr_8(L_7);
		// myMoveType.hitMat = hitMat;
		ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * L_8 = __this->get_myMoveType_10();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = __this->get_hitMat_15();
		L_8->set_hitMat_9(L_9);
		// myMoveType.missMat = missMat;
		ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * L_10 = __this->get_myMoveType_10();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = __this->get_missMat_16();
		L_10->set_missMat_10(L_11);
		// myMoveType.debug = true;
		ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * L_12 = __this->get_myMoveType_10();
		L_12->set_debug_7((bool)1);
		// myMoveType.ignoredTags = new List<string>();
		ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * L_13 = __this->get_myMoveType_10();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_14 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_14, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		L_13->set_ignoredTags_11(L_14);
		// myRotateType = new LookWhereGoing();
		LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * L_15 = (LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 *)il2cpp_codegen_object_new(LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0_il2cpp_TypeInfo_var);
		LookWhereGoing__ctor_m225781ABC6447E4CC44715861AF5635DA2DA5115(L_15, /*hidden argument*/NULL);
		__this->set_myRotateType_11(L_15);
		// myRotateType.character = this;
		LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * L_16 = __this->get_myRotateType_11();
		((Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)L_16)->set_character_1(__this);
		// myRotateType.target = myTarget;
		LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * L_17 = __this->get_myRotateType_11();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_myTarget_8();
		((Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)L_17)->set_target_2(L_18);
		// }
		return;
	}
}
// System.Void ObstacleAvoider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleAvoider_Update_mAF72DD620A4519028D2FE2E474FB06A479B3C62F (ObstacleAvoider_t07D61DBCD670B954F50D9CD0390C5BA9A77F7B05 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// steeringUpdate = new SteeringOutput();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_0 = (SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D *)il2cpp_codegen_object_new(SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		SteeringOutput__ctor_m324DFBCCE92C73E1BEC5AB73096A0762BBFB7F73(L_0, /*hidden argument*/NULL);
		((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->set_steeringUpdate_9(L_0);
		// steeringUpdate.linear = myMoveType.getSteering().linear;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_1 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_steeringUpdate_9();
		ObstacleAvoidance_t531CF7E4767C37A4EA2EFFEF26D88D5C9D9CBB8C * L_2 = __this->get_myMoveType_10();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_3;
		L_3 = VirtFuncInvoker0< SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * >::Invoke(4 /* SteeringOutput SteeringBehavior::getSteering() */, L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = L_3->get_linear_0();
		L_1->set_linear_0(L_4);
		// steeringUpdate.angular = myRotateType.getSteering().angular;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_5 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_steeringUpdate_9();
		LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * L_6 = __this->get_myRotateType_11();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_7;
		L_7 = VirtFuncInvoker0< SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * >::Invoke(4 /* SteeringOutput SteeringBehavior::getSteering() */, L_6);
		float L_8 = L_7->get_angular_1();
		L_5->set_angular_1(L_8);
		// base.Update();
		Kinematic_Update_m90DEAE2534DEF1E85A2B0289FBAAB1A25D476093(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ObstacleAvoider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleAvoider__ctor_m352D3DE04E29DAB226A85597DAE8F47678982075 (ObstacleAvoider_t07D61DBCD670B954F50D9CD0390C5BA9A77F7B05 * __this, const RuntimeMethod* method)
{
	{
		// public float avoidDist = 30f;
		__this->set_avoidDist_12((30.0f));
		// public float lookAhead = 10f;
		__this->set_lookAhead_13((10.0f));
		Kinematic__ctor_m067A5346E3475380B0E1662CFA2AA3D9495AF89D(__this, /*hidden argument*/NULL);
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
// System.Void Path::createPathTarget(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path_createPathTarget_m3918A8ACE75B8E4A31599995A23A91333FBA51E8 (Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pathTargets.Add(Instantiate(pathTarget, position, Quaternion.identity));
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_pathTargets_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_pathTarget_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___position0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_1, L_2, L_3, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_0, L_4, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Single Path::ClosestParamAlongLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Path_ClosestParamAlongLine_m566E04061CD671835EC47A932647BD5F93DCAA8D (Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end2, const RuntimeMethod* method)
{
	{
		// return -Vector3.Dot(end - start, start - point) / Vector3.Dot(end - start, end - start);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___end2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___start1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_0, L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___start1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___point0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_3, L_4, /*hidden argument*/NULL);
		float L_6;
		L_6 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_2, L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___end2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___start1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_7, L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___end2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___start1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_10, L_11, /*hidden argument*/NULL);
		float L_13;
		L_13 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_9, L_12, /*hidden argument*/NULL);
		return ((float)((float)((-L_6))/(float)L_13));
	}
}
// System.Single Path::DistanceToTarget(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Path_DistanceToTarget_mB39AC0173855B8D75192870F343CDC062FF16940 (Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862 * __this, int32_t ___idx0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (idx - idxOffset < pathTargets.Count && idx - idxOffset >= 0)
		int32_t L_0 = ___idx0;
		int32_t L_1 = __this->get_idxOffset_6();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_2 = __this->get_pathTargets_4();
		int32_t L_3;
		L_3 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_2, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1))) >= ((int32_t)L_3)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_4 = ___idx0;
		int32_t L_5 = __this->get_idxOffset_6();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5))) < ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		// return (pathTargets[idx - idxOffset].transform.position - position).magnitude;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_6 = __this->get_pathTargets_4();
		int32_t L_7 = ___idx0;
		int32_t L_8 = __this->get_idxOffset_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_6, ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8)), /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = ___position1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_11, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		float L_14;
		L_14 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		return L_14;
	}

IL_004c:
	{
		// return float.MaxValue;
		return ((std::numeric_limits<float>::max)());
	}
}
// System.Single Path::GetParam(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Path_GetParam_m4934DC3D26ACB495CFE5699B46147AD18324AF7D (Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___lastParam1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral070D400BBE60E35A65D631FB441026419652D4D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BCE2F857E849104ED56E54AC72CE86521A31077);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92AE871A634233DD769D6292661BF03E74B47BB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2D6946C56585B8BCCDBD82C5D7D41BD6D34A7FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5DE64A47C21FD44438A24400D35610A2D08798B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD492B6A32B1A95EDB7062A5E4106617448FC1CFF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2B67FCBC70A06406A61FCBD83C30D70AFC8D801);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	{
		goto IL_0032;
	}

IL_0002:
	{
		// ++idxOffset;
		int32_t L_0 = __this->get_idxOffset_6();
		__this->set_idxOffset_6(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// Object.Destroy(pathTargets[0].gameObject);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_1 = __this->get_pathTargets_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_1, 0, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
		// pathTargets.RemoveAt(0);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_4 = __this->get_pathTargets_4();
		List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0(L_4, 0, /*hidden argument*/List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0_RuntimeMethod_var);
	}

IL_0032:
	{
		// while (Mathf.FloorToInt(lastParam) > idxOffset + 1)
		float L_5 = ___lastParam1;
		int32_t L_6;
		L_6 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_5, /*hidden argument*/NULL);
		int32_t L_7 = __this->get_idxOffset_6();
		if ((((int32_t)L_6) > ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)))))
		{
			goto IL_0002;
		}
	}
	{
		// if (pathTargets.Count < 2) return 0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_8 = __this->get_pathTargets_4();
		int32_t L_9;
		L_9 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_8, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_9) >= ((int32_t)2)))
		{
			goto IL_0056;
		}
	}
	{
		// if (pathTargets.Count < 2) return 0;
		return (0.0f);
	}

IL_0056:
	{
		// lastParam = Mathf.Max(0, lastParam);
		float L_10 = ___lastParam1;
		float L_11;
		L_11 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775((0.0f), L_10, /*hidden argument*/NULL);
		___lastParam1 = L_11;
		// int searchIdx = Mathf.FloorToInt(lastParam);
		float L_12 = ___lastParam1;
		int32_t L_13;
		L_13 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		// float prevDist = float.MaxValue;
		V_1 = ((std::numeric_limits<float>::max)());
		// float nextDist = DistanceToTarget(searchIdx, position);
		int32_t L_14 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = ___position0;
		float L_16;
		L_16 = Path_DistanceToTarget_mB39AC0173855B8D75192870F343CDC062FF16940(__this, L_14, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
	}

IL_0079:
	{
		// ++searchIdx;
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		// prevDist = nextDist;
		float L_18 = V_2;
		V_1 = L_18;
		// nextDist = DistanceToTarget(searchIdx, position);
		int32_t L_19 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___position0;
		float L_21;
		L_21 = Path_DistanceToTarget_mB39AC0173855B8D75192870F343CDC062FF16940(__this, L_19, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
		// } while (nextDist < prevDist);
		float L_22 = V_2;
		float L_23 = V_1;
		if ((((float)L_22) < ((float)L_23)))
		{
			goto IL_0079;
		}
	}
	{
		// --searchIdx;
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1));
		// if (DistanceToTarget(searchIdx - 1, position) < DistanceToTarget(searchIdx + 1, position)) --searchIdx;
		int32_t L_25 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = ___position0;
		float L_27;
		L_27 = Path_DistanceToTarget_mB39AC0173855B8D75192870F343CDC062FF16940(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1)), L_26, /*hidden argument*/NULL);
		int32_t L_28 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = ___position0;
		float L_30;
		L_30 = Path_DistanceToTarget_mB39AC0173855B8D75192870F343CDC062FF16940(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)), L_29, /*hidden argument*/NULL);
		if ((!(((float)L_27) < ((float)L_30))))
		{
			goto IL_00aa;
		}
	}
	{
		// if (DistanceToTarget(searchIdx - 1, position) < DistanceToTarget(searchIdx + 1, position)) --searchIdx;
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1));
	}

IL_00aa:
	{
		// Debug.Log("lastParam = " + lastParam + " prevDist = " + prevDist + " nextDist = " + nextDist +
		//           "\nsearchIdx = " + searchIdx + " idxOffset = " + idxOffset + " Count = " + pathTargets.Count +
		//           " used indices = " + (searchIdx - idxOffset) + ", " + (searchIdx - idxOffset + 1));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_33 = L_32;
		ArrayElementTypeCheck (L_33, _stringLiteralE2B67FCBC70A06406A61FCBD83C30D70AFC8D801);
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralE2B67FCBC70A06406A61FCBD83C30D70AFC8D801);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = L_33;
		String_t* L_35;
		L_35 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&___lastParam1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_34, L_35);
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_35);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = L_34;
		ArrayElementTypeCheck (L_36, _stringLiteralA5DE64A47C21FD44438A24400D35610A2D08798B);
		(L_36)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralA5DE64A47C21FD44438A24400D35610A2D08798B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37 = L_36;
		String_t* L_38;
		L_38 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_38);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_39 = L_37;
		ArrayElementTypeCheck (L_39, _stringLiteral7BCE2F857E849104ED56E54AC72CE86521A31077);
		(L_39)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral7BCE2F857E849104ED56E54AC72CE86521A31077);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_40 = L_39;
		String_t* L_41;
		L_41 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_2), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_40, L_41);
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_41);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_42 = L_40;
		ArrayElementTypeCheck (L_42, _stringLiteralD492B6A32B1A95EDB7062A5E4106617448FC1CFF);
		(L_42)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralD492B6A32B1A95EDB7062A5E4106617448FC1CFF);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_43 = L_42;
		String_t* L_44;
		L_44 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)L_44);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_45 = L_43;
		ArrayElementTypeCheck (L_45, _stringLiteral070D400BBE60E35A65D631FB441026419652D4D2);
		(L_45)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral070D400BBE60E35A65D631FB441026419652D4D2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_46 = L_45;
		int32_t* L_47 = __this->get_address_of_idxOffset_6();
		String_t* L_48;
		L_48 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_47, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_46, L_48);
		(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_48);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_49 = L_46;
		ArrayElementTypeCheck (L_49, _stringLiteral92AE871A634233DD769D6292661BF03E74B47BB9);
		(L_49)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral92AE871A634233DD769D6292661BF03E74B47BB9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_50 = L_49;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_51 = __this->get_pathTargets_4();
		int32_t L_52;
		L_52 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_51, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		V_3 = L_52;
		String_t* L_53;
		L_53 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_3), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_50, L_53);
		(L_50)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)L_53);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_54 = L_50;
		ArrayElementTypeCheck (L_54, _stringLiteralA2D6946C56585B8BCCDBD82C5D7D41BD6D34A7FD);
		(L_54)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteralA2D6946C56585B8BCCDBD82C5D7D41BD6D34A7FD);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_55 = L_54;
		int32_t L_56 = V_0;
		int32_t L_57 = __this->get_idxOffset_6();
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_56, (int32_t)L_57));
		String_t* L_58;
		L_58 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_3), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_55, L_58);
		(L_55)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)L_58);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_59 = L_55;
		ArrayElementTypeCheck (L_59, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_59)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_60 = L_59;
		int32_t L_61 = V_0;
		int32_t L_62 = __this->get_idxOffset_6();
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_61, (int32_t)L_62)), (int32_t)1));
		String_t* L_63;
		L_63 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_3), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_60, L_63);
		(L_60)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)L_63);
		String_t* L_64;
		L_64 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_60, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_64, /*hidden argument*/NULL);
		// return searchIdx + ClosestParamAlongLine(position, pathTargets[searchIdx - idxOffset].transform.position, pathTargets[searchIdx - idxOffset + 1].transform.position);
		int32_t L_65 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66 = ___position0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_67 = __this->get_pathTargets_4();
		int32_t L_68 = V_0;
		int32_t L_69 = __this->get_idxOffset_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_70;
		L_70 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_67, ((int32_t)il2cpp_codegen_subtract((int32_t)L_68, (int32_t)L_69)), /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_71;
		L_71 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_70, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72;
		L_72 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_71, /*hidden argument*/NULL);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_73 = __this->get_pathTargets_4();
		int32_t L_74 = V_0;
		int32_t L_75 = __this->get_idxOffset_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_76;
		L_76 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_73, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_74, (int32_t)L_75)), (int32_t)1)), /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_77;
		L_77 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_76, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78;
		L_78 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_77, /*hidden argument*/NULL);
		float L_79;
		L_79 = Path_ClosestParamAlongLine_m566E04061CD671835EC47A932647BD5F93DCAA8D(__this, L_66, L_72, L_78, /*hidden argument*/NULL);
		return ((float)il2cpp_codegen_add((float)((float)((float)L_65)), (float)L_79));
	}
}
// UnityEngine.Vector3 Path::GetPosition(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Path_GetPosition_m572102100146EC5DD6D28680AE86363FF66B210C (Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862 * __this, float ___param0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___defaultPosition1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F812CE0DFB90703ABD3B7050E6633BAB3989453);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABA4CBC4C7C6D1684B9A097E391ADADC3D5BCC1C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (pathTargets.Count == 0) return defaultPosition;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_pathTargets_4();
		int32_t L_1;
		L_1 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_0, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (pathTargets.Count == 0) return defaultPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___defaultPosition1;
		return L_2;
	}

IL_000f:
	{
		// if (pathTargets.Count == 1) return pathTargets[0].transform.position;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_3 = __this->get_pathTargets_4();
		int32_t L_4;
		L_4 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_3, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0034;
		}
	}
	{
		// if (pathTargets.Count == 1) return pathTargets[0].transform.position;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_5 = __this->get_pathTargets_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_5, 0, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0034:
	{
		// param -= Mathf.Max(0, Mathf.FloorToInt(param - idxOffset) - pathTargets.Count + 2);
		float L_9 = ___param0;
		float L_10 = ___param0;
		int32_t L_11 = __this->get_idxOffset_6();
		int32_t L_12;
		L_12 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(((float)il2cpp_codegen_subtract((float)L_10, (float)((float)((float)L_11)))), /*hidden argument*/NULL);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_13 = __this->get_pathTargets_4();
		int32_t L_14;
		L_14 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_13, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		int32_t L_15;
		L_15 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(0, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)L_14)), (int32_t)2)), /*hidden argument*/NULL);
		___param0 = ((float)il2cpp_codegen_subtract((float)L_9, (float)((float)((float)L_15))));
		// param = Mathf.Max(0, param);
		float L_16 = ___param0;
		float L_17;
		L_17 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775((0.0f), L_16, /*hidden argument*/NULL);
		___param0 = L_17;
		// int startIdx = Mathf.FloorToInt(param);
		float L_18 = ___param0;
		int32_t L_19;
		L_19 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		// Debug.Log("param = " + param + " startIdx = " + startIdx);
		String_t* L_20;
		L_20 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&___param0), /*hidden argument*/NULL);
		String_t* L_21;
		L_21 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_22;
		L_22 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteralABA4CBC4C7C6D1684B9A097E391ADADC3D5BCC1C, L_20, _stringLiteral3F812CE0DFB90703ABD3B7050E6633BAB3989453, L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_22, /*hidden argument*/NULL);
		// Vector3 start = pathTargets[startIdx - idxOffset].transform.position;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_23 = __this->get_pathTargets_4();
		int32_t L_24 = V_0;
		int32_t L_25 = __this->get_idxOffset_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_23, ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)L_25)), /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		V_1 = L_28;
		// Vector3 end = pathTargets[startIdx - idxOffset + 1].transform.position;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_29 = __this->get_pathTargets_4();
		int32_t L_30 = V_0;
		int32_t L_31 = __this->get_idxOffset_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32;
		L_32 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_29, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)L_31)), (int32_t)1)), /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_32, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_33, /*hidden argument*/NULL);
		V_2 = L_34;
		// return start + (param - startIdx) * (end - start);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = V_1;
		float L_36 = ___param0;
		int32_t L_37 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_38, L_39, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(((float)il2cpp_codegen_subtract((float)L_36, (float)((float)((float)L_37)))), L_40, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_35, L_41, /*hidden argument*/NULL);
		return L_42;
	}
}
// System.Void Path::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path__ctor_m6141ABDC6A79F98136F54A663E1BB238CFC9CA25 (Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862 * __this, const RuntimeMethod* method)
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
// System.Void PathCreator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathCreator_Start_mA3A18E37E3F5DFDC5BA85D7A8D76A4B46DA24CB3 (PathCreator_tD42C7FF37EE2D32A5D6AF33B2D4753F0A80D7AEB * __this, const RuntimeMethod* method)
{
	{
		// prevPosition = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		__this->set_prevPosition_6(L_1);
		// }
		return;
	}
}
// System.Void PathCreator::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathCreator_FixedUpdate_m1AFE8E6F1DFFD32068CDD6FC52C03F5EBFC947D8 (PathCreator_tD42C7FF37EE2D32A5D6AF33B2D4753F0A80D7AEB * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if ((transform.position - prevPosition).magnitude > difference)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_prevPosition_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4;
		L_4 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		float L_5 = __this->get_difference_4();
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_0048;
		}
	}
	{
		// prevPosition = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		__this->set_prevPosition_6(L_7);
		// pathController.createPathTarget(prevPosition);
		Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862 * L_8 = __this->get_pathController_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = __this->get_prevPosition_6();
		Path_createPathTarget_m3918A8ACE75B8E4A31599995A23A91333FBA51E8(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void PathCreator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathCreator__ctor_m92B8B2C1D2E4A5CA38B40B0AC9E6C0ADAAE1D860 (PathCreator_tD42C7FF37EE2D32A5D6AF33B2D4753F0A80D7AEB * __this, const RuntimeMethod* method)
{
	{
		// public float difference = 0.2f;
		__this->set_difference_4((0.200000003f));
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
// System.Void PathFollower::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathFollower_Start_m9F40130677E165EE4EECC7B346BDC4B4C248A2B5 (PathFollower_tD0C5615DEA60D647390E2ABD7E6D52CEF043AE40 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FollowPath_t9F2D06DD7295A8D1D97B5B6593FD432730E16A58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myMoveType = new FollowPath();
		FollowPath_t9F2D06DD7295A8D1D97B5B6593FD432730E16A58 * L_0 = (FollowPath_t9F2D06DD7295A8D1D97B5B6593FD432730E16A58 *)il2cpp_codegen_object_new(FollowPath_t9F2D06DD7295A8D1D97B5B6593FD432730E16A58_il2cpp_TypeInfo_var);
		FollowPath__ctor_mD8E1D7FA1071C424321B90F54CA2E26F43117CA1(L_0, /*hidden argument*/NULL);
		__this->set_myMoveType_10(L_0);
		// myMoveType.character = this;
		FollowPath_t9F2D06DD7295A8D1D97B5B6593FD432730E16A58 * L_1 = __this->get_myMoveType_10();
		((Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF *)L_1)->set_character_1(__this);
		// myMoveType.path = path;
		FollowPath_t9F2D06DD7295A8D1D97B5B6593FD432730E16A58 * L_2 = __this->get_myMoveType_10();
		Path_t4D03D5A22201D9CFFE80030AF4FCE56304DE7862 * L_3 = __this->get_path_12();
		L_2->set_path_7(L_3);
		// myMoveType.pathOffset = pathOffset;
		FollowPath_t9F2D06DD7295A8D1D97B5B6593FD432730E16A58 * L_4 = __this->get_myMoveType_10();
		float L_5 = __this->get_pathOffset_13();
		L_4->set_pathOffset_5(L_5);
		// myMoveType.predictive = predictive;
		FollowPath_t9F2D06DD7295A8D1D97B5B6593FD432730E16A58 * L_6 = __this->get_myMoveType_10();
		bool L_7 = __this->get_predictive_14();
		L_6->set_predictive_6(L_7);
		// myRotateType = new LookWhereGoing();
		LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * L_8 = (LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 *)il2cpp_codegen_object_new(LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0_il2cpp_TypeInfo_var);
		LookWhereGoing__ctor_m225781ABC6447E4CC44715861AF5635DA2DA5115(L_8, /*hidden argument*/NULL);
		__this->set_myRotateType_11(L_8);
		// myRotateType.character = this;
		LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * L_9 = __this->get_myRotateType_11();
		((Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)L_9)->set_character_1(__this);
		// myRotateType.target = myTarget;
		LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * L_10 = __this->get_myRotateType_11();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_myTarget_8();
		((Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)L_10)->set_target_2(L_11);
		// }
		return;
	}
}
// System.Void PathFollower::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathFollower_Update_m95CE5C1C214D396145A853C5C44B9BF5CB46C311 (PathFollower_tD0C5615DEA60D647390E2ABD7E6D52CEF043AE40 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// steeringUpdate = new SteeringOutput();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_0 = (SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D *)il2cpp_codegen_object_new(SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		SteeringOutput__ctor_m324DFBCCE92C73E1BEC5AB73096A0762BBFB7F73(L_0, /*hidden argument*/NULL);
		((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->set_steeringUpdate_9(L_0);
		// steeringUpdate.linear = myMoveType.getSteering().linear;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_1 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_steeringUpdate_9();
		FollowPath_t9F2D06DD7295A8D1D97B5B6593FD432730E16A58 * L_2 = __this->get_myMoveType_10();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_3;
		L_3 = VirtFuncInvoker0< SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * >::Invoke(4 /* SteeringOutput SteeringBehavior::getSteering() */, L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = L_3->get_linear_0();
		L_1->set_linear_0(L_4);
		// steeringUpdate.angular = myRotateType.getSteering().angular;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_5 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_steeringUpdate_9();
		LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * L_6 = __this->get_myRotateType_11();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_7;
		L_7 = VirtFuncInvoker0< SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * >::Invoke(4 /* SteeringOutput SteeringBehavior::getSteering() */, L_6);
		float L_8 = L_7->get_angular_1();
		L_5->set_angular_1(L_8);
		// base.Update();
		Kinematic_Update_m90DEAE2534DEF1E85A2B0289FBAAB1A25D476093(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PathFollower::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathFollower__ctor_m595E7462BB252CC5DFA5DC06E4B49BC0F86501B9 (PathFollower_tD0C5615DEA60D647390E2ABD7E6D52CEF043AE40 * __this, const RuntimeMethod* method)
{
	{
		// public float pathOffset = 1f;
		__this->set_pathOffset_13((1.0f));
		Kinematic__ctor_m067A5346E3475380B0E1662CFA2AA3D9495AF89D(__this, /*hidden argument*/NULL);
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserControlled_tBFDF8B501E956DB77DCFE541D286ACC17815E95E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myMoveType = new UserControlled();
		UserControlled_tBFDF8B501E956DB77DCFE541D286ACC17815E95E * L_0 = (UserControlled_tBFDF8B501E956DB77DCFE541D286ACC17815E95E *)il2cpp_codegen_object_new(UserControlled_tBFDF8B501E956DB77DCFE541D286ACC17815E95E_il2cpp_TypeInfo_var);
		UserControlled__ctor_mB3EC366AEC975B937DDA1D1E2DC83BA9CFF0092D(L_0, /*hidden argument*/NULL);
		__this->set_myMoveType_10(L_0);
		// myMoveType.character = this;
		UserControlled_tBFDF8B501E956DB77DCFE541D286ACC17815E95E * L_1 = __this->get_myMoveType_10();
		L_1->set_character_1(__this);
		// myMoveType.maxAcceleration = maxAcceleration;
		UserControlled_tBFDF8B501E956DB77DCFE541D286ACC17815E95E * L_2 = __this->get_myMoveType_10();
		float L_3 = __this->get_maxAcceleration_12();
		L_2->set_maxAcceleration_2(L_3);
		// myMoveType.frictionPercent = frictionPercent;
		UserControlled_tBFDF8B501E956DB77DCFE541D286ACC17815E95E * L_4 = __this->get_myMoveType_10();
		float L_5 = __this->get_frictionPercent_13();
		L_4->set_frictionPercent_3(L_5);
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_mBA04F1D6FE3C18037EA95DFAEEAA9977BFD49CD3 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// steeringUpdate = new SteeringOutput();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_0 = (SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D *)il2cpp_codegen_object_new(SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		SteeringOutput__ctor_m324DFBCCE92C73E1BEC5AB73096A0762BBFB7F73(L_0, /*hidden argument*/NULL);
		((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->set_steeringUpdate_9(L_0);
		// steeringUpdate.linear = myMoveType.getSteering().linear;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_1 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_steeringUpdate_9();
		UserControlled_tBFDF8B501E956DB77DCFE541D286ACC17815E95E * L_2 = __this->get_myMoveType_10();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_3;
		L_3 = VirtFuncInvoker0< SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * >::Invoke(4 /* SteeringOutput SteeringBehavior::getSteering() */, L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = L_3->get_linear_0();
		L_1->set_linear_0(L_4);
		// base.Update();
		Kinematic_Update_m90DEAE2534DEF1E85A2B0289FBAAB1A25D476093(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_mDE8EB5B351975D4E7E24DE341B8B49B8A29CC2B7 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// public float maxAcceleration = 1f;
		__this->set_maxAcceleration_12((1.0f));
		// public float frictionPercent = 1f;
		__this->set_frictionPercent_13((1.0f));
		Kinematic__ctor_m067A5346E3475380B0E1662CFA2AA3D9495AF89D(__this, /*hidden argument*/NULL);
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
// System.Collections.Generic.List`1<BlendedBehavior> Prioritization::getBehaviors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE14D0C6C55782752906F8175A6571F39953F299B * Prioritization_getBehaviors_m0F88F394E3DBE46919F07AC6D8243CD57CB7DA42 (Prioritization_t95C41DC54D60DBB2449E0BE4B1C36FD155E5D363 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m55D6A69A092192BB5EC43D356A6DA4DE55B3A880_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE14D0C6C55782752906F8175A6571F39953F299B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new List<BlendedBehavior>();
		List_1_tE14D0C6C55782752906F8175A6571F39953F299B * L_0 = (List_1_tE14D0C6C55782752906F8175A6571F39953F299B *)il2cpp_codegen_object_new(List_1_tE14D0C6C55782752906F8175A6571F39953F299B_il2cpp_TypeInfo_var);
		List_1__ctor_m55D6A69A092192BB5EC43D356A6DA4DE55B3A880(L_0, /*hidden argument*/List_1__ctor_m55D6A69A092192BB5EC43D356A6DA4DE55B3A880_RuntimeMethod_var);
		return L_0;
	}
}
// SteeringOutput Prioritization::getSteering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * Prioritization_getSteering_mF7DAC5639566BC9E716E80735F329AAF52630470 (Prioritization_t95C41DC54D60DBB2449E0BE4B1C36FD155E5D363 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE29A1F5AE3674BFE88E3053DDC38C047D5F3C986_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m880BE98E6A94A4D0D21E8AED285415B4746B1D3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m535316519D356FB25DCAFEE93370A193AEF42FA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1C68671E032F7E52E76DD2867A2A78DA45FA673A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * V_0 = NULL;
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	Enumerator_tBD4F8B6B56090FDF0A69CA70F90FC5E73D9DA3C4  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// SteeringOutput result = new SteeringOutput();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_0 = (SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D *)il2cpp_codegen_object_new(SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		SteeringOutput__ctor_m324DFBCCE92C73E1BEC5AB73096A0762BBFB7F73(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// SteeringOutput current = new SteeringOutput();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_1 = (SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D *)il2cpp_codegen_object_new(SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		SteeringOutput__ctor_m324DFBCCE92C73E1BEC5AB73096A0762BBFB7F73(L_1, /*hidden argument*/NULL);
		V_1 = L_1;
		// bool linearSet = false;
		V_2 = (bool)0;
		// bool angularSet = false;
		V_3 = (bool)0;
		// foreach (BlendedBehavior behaviorGroup in getBehaviors())
		List_1_tE14D0C6C55782752906F8175A6571F39953F299B * L_2;
		L_2 = VirtFuncInvoker0< List_1_tE14D0C6C55782752906F8175A6571F39953F299B * >::Invoke(5 /* System.Collections.Generic.List`1<BlendedBehavior> Prioritization::getBehaviors() */, __this);
		Enumerator_tBD4F8B6B56090FDF0A69CA70F90FC5E73D9DA3C4  L_3;
		L_3 = List_1_GetEnumerator_m1C68671E032F7E52E76DD2867A2A78DA45FA673A(L_2, /*hidden argument*/List_1_GetEnumerator_m1C68671E032F7E52E76DD2867A2A78DA45FA673A_RuntimeMethod_var);
		V_4 = L_3;
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00bc;
		}

IL_0022:
		{
			// foreach (BlendedBehavior behaviorGroup in getBehaviors())
			BlendedBehavior_t2AF211BE7DEE0EF54A7A3F64CB4976DFD8B7F330 * L_4;
			L_4 = Enumerator_get_Current_m535316519D356FB25DCAFEE93370A193AEF42FA1_inline((Enumerator_tBD4F8B6B56090FDF0A69CA70F90FC5E73D9DA3C4 *)(&V_4), /*hidden argument*/Enumerator_get_Current_m535316519D356FB25DCAFEE93370A193AEF42FA1_RuntimeMethod_var);
			// current = behaviorGroup.getSteering();
			SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_5;
			L_5 = VirtFuncInvoker0< SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * >::Invoke(4 /* SteeringOutput SteeringBehavior::getSteering() */, L_4);
			V_1 = L_5;
			// bool linearThreshold = current.linear.magnitude > linearEpsilon;
			SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_6 = V_1;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_7 = L_6->get_address_of_linear_0();
			float L_8;
			L_8 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_7, /*hidden argument*/NULL);
			float L_9 = __this->get_linearEpsilon_1();
			V_5 = (bool)((((float)L_8) > ((float)L_9))? 1 : 0);
			// bool angularThreshold = Mathf.Abs(current.angular) > angularEpsilon;
			SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_10 = V_1;
			float L_11 = L_10->get_angular_1();
			float L_12;
			L_12 = fabsf(L_11);
			float L_13 = __this->get_angularEpsilon_2();
			V_6 = (bool)((((float)L_12) > ((float)L_13))? 1 : 0);
			// if (splitPriority && linearThreshold)
			bool L_14 = __this->get_splitPriority_3();
			bool L_15 = V_5;
			if (!((int32_t)((int32_t)L_14&(int32_t)L_15)))
			{
				goto IL_0074;
			}
		}

IL_0064:
		{
			// result.linear = current.linear;
			SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_16 = V_0;
			SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_17 = V_1;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = L_17->get_linear_0();
			L_16->set_linear_0(L_18);
			// linearSet = true;
			V_2 = (bool)1;
			// }
			goto IL_009c;
		}

IL_0074:
		{
			// else if (splitPriority && angularThreshold)
			bool L_19 = __this->get_splitPriority_3();
			bool L_20 = V_6;
			if (!((int32_t)((int32_t)L_19&(int32_t)L_20)))
			{
				goto IL_008f;
			}
		}

IL_007f:
		{
			// result.angular = current.angular;
			SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_21 = V_0;
			SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_22 = V_1;
			float L_23 = L_22->get_angular_1();
			L_21->set_angular_1(L_23);
			// angularSet = true;
			V_3 = (bool)1;
			// }
			goto IL_009c;
		}

IL_008f:
		{
			// else if (linearThreshold || angularThreshold)
			bool L_24 = V_5;
			bool L_25 = V_6;
			if (!((int32_t)((int32_t)L_24|(int32_t)L_25)))
			{
				goto IL_009c;
			}
		}

IL_0096:
		{
			// result = current;
			SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_26 = V_1;
			V_0 = L_26;
			// linearSet = true;
			V_2 = (bool)1;
			// angularSet = true;
			V_3 = (bool)1;
		}

IL_009c:
		{
			// if (linearSet && angularSet || linearSet && ignoreAngular || angularSet && ignoreLinear)
			bool L_27 = V_2;
			bool L_28 = V_3;
			if (((int32_t)((int32_t)L_27&(int32_t)L_28)))
			{
				goto IL_00b7;
			}
		}

IL_00a1:
		{
			bool L_29 = V_2;
			if (!L_29)
			{
				goto IL_00ac;
			}
		}

IL_00a4:
		{
			bool L_30 = __this->get_ignoreAngular_4();
			if (L_30)
			{
				goto IL_00b7;
			}
		}

IL_00ac:
		{
			bool L_31 = V_3;
			if (!L_31)
			{
				goto IL_00bc;
			}
		}

IL_00af:
		{
			bool L_32 = __this->get_ignoreLinear_5();
			if (!L_32)
			{
				goto IL_00bc;
			}
		}

IL_00b7:
		{
			// return result;
			SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_33 = V_0;
			V_7 = L_33;
			IL2CPP_LEAVE(0xF8, FINALLY_00ca);
		}

IL_00bc:
		{
			// foreach (BlendedBehavior behaviorGroup in getBehaviors())
			bool L_34;
			L_34 = Enumerator_MoveNext_m880BE98E6A94A4D0D21E8AED285415B4746B1D3A((Enumerator_tBD4F8B6B56090FDF0A69CA70F90FC5E73D9DA3C4 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m880BE98E6A94A4D0D21E8AED285415B4746B1D3A_RuntimeMethod_var);
			if (L_34)
			{
				goto IL_0022;
			}
		}

IL_00c8:
		{
			IL2CPP_LEAVE(0xD8, FINALLY_00ca);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ca;
	}

FINALLY_00ca:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mE29A1F5AE3674BFE88E3053DDC38C047D5F3C986((Enumerator_tBD4F8B6B56090FDF0A69CA70F90FC5E73D9DA3C4 *)(&V_4), /*hidden argument*/Enumerator_Dispose_mE29A1F5AE3674BFE88E3053DDC38C047D5F3C986_RuntimeMethod_var);
		IL2CPP_END_FINALLY(202)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(202)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xF8, IL_00f8)
		IL2CPP_JUMP_TBL(0xD8, IL_00d8)
	}

IL_00d8:
	{
		// if (!linearSet)
		bool L_35 = V_2;
		if (L_35)
		{
			goto IL_00e7;
		}
	}
	{
		// result.linear = current.linear;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_36 = V_0;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_37 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = L_37->get_linear_0();
		L_36->set_linear_0(L_38);
	}

IL_00e7:
	{
		// if (!angularSet)
		bool L_39 = V_3;
		if (L_39)
		{
			goto IL_00f6;
		}
	}
	{
		// result.angular = current.angular;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_40 = V_0;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_41 = V_1;
		float L_42 = L_41->get_angular_1();
		L_40->set_angular_1(L_42);
	}

IL_00f6:
	{
		// return result;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_43 = V_0;
		return L_43;
	}

IL_00f8:
	{
		// }
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_44 = V_7;
		return L_44;
	}
}
// System.Void Prioritization::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Prioritization__ctor_mC52C990F02FF31CC990585012DE45762C88CD09E (Prioritization_t95C41DC54D60DBB2449E0BE4B1C36FD155E5D363 * __this, const RuntimeMethod* method)
{
	{
		// public float linearEpsilon = 0.1f;
		__this->set_linearEpsilon_1((0.100000001f));
		// public float angularEpsilon = 0.1f;
		__this->set_angularEpsilon_2((0.100000001f));
		SteeringBehavior__ctor_m36F8FE66341628CC66FCE103529662A0B3B4B423(__this, /*hidden argument*/NULL);
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
// System.Collections.Generic.List`1<BlendedBehavior> PrioritizedFlocking::getBehaviors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE14D0C6C55782752906F8175A6571F39953F299B * PrioritizedFlocking_getBehaviors_m2099707AD511AD1C38306147080665C196FBE445 (PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlendedBehavior_t2AF211BE7DEE0EF54A7A3F64CB4976DFD8B7F330_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flocking_t43CEE98336DA04A3F685A25FC909ACB560366EFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m510A17ABFE245EDBEA8AD0743F574A5392F460D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m55D6A69A092192BB5EC43D356A6DA4DE55B3A880_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE14D0C6C55782752906F8175A6571F39953F299B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54 * V_0 = NULL;
	Flocking_t43CEE98336DA04A3F685A25FC909ACB560366EFE * V_1 = NULL;
	Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E * V_2 = NULL;
	BlendedBehavior_t2AF211BE7DEE0EF54A7A3F64CB4976DFD8B7F330 * V_3 = NULL;
	{
		// List<BlendedBehavior> groups = new List<BlendedBehavior>();
		List_1_tE14D0C6C55782752906F8175A6571F39953F299B * L_0 = (List_1_tE14D0C6C55782752906F8175A6571F39953F299B *)il2cpp_codegen_object_new(List_1_tE14D0C6C55782752906F8175A6571F39953F299B_il2cpp_TypeInfo_var);
		List_1__ctor_m55D6A69A092192BB5EC43D356A6DA4DE55B3A880(L_0, /*hidden argument*/List_1__ctor_m55D6A69A092192BB5EC43D356A6DA4DE55B3A880_RuntimeMethod_var);
		// GeneralAvoidance avoid = new GeneralAvoidance();
		GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54 * L_1 = (GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54 *)il2cpp_codegen_object_new(GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54_il2cpp_TypeInfo_var);
		GeneralAvoidance__ctor_m7F263F78C0987132A5764062E7F1AC5788EFB5CD(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		// avoid.character = character;
		GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54 * L_2 = V_0;
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_3 = __this->get_character_6();
		L_2->set_character_4(L_3);
		// avoid.flock = centerOfMass.flock;
		GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54 * L_4 = V_0;
		FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 * L_5 = __this->get_centerOfMass_8();
		List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * L_6 = L_5->get_flock_10();
		L_4->set_flock_5(L_6);
		// avoid.avoidWeight = centerOfMass.avoidWeight;
		GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54 * L_7 = V_0;
		FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 * L_8 = __this->get_centerOfMass_8();
		float L_9 = L_8->get_avoidWeight_15();
		L_7->set_avoidWeight_17(L_9);
		// avoid.dodgeWeight = centerOfMass.dodgeWeight;
		GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54 * L_10 = V_0;
		FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 * L_11 = __this->get_centerOfMass_8();
		float L_12 = L_11->get_dodgeWeight_16();
		L_10->set_dodgeWeight_18(L_12);
		// avoid.avoidDist = avoidDist;
		GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54 * L_13 = V_0;
		float L_14 = __this->get_avoidDist_12();
		L_13->set_avoidDist_7(L_14);
		// avoid.lookAhead = lookAhead;
		GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54 * L_15 = V_0;
		float L_16 = __this->get_lookAhead_13();
		L_15->set_lookAhead_8(L_16);
		// avoid.lr = lr;
		GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54 * L_17 = V_0;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_18 = __this->get_lr_16();
		L_17->set_lr_11(L_18);
		// avoid.hitMat = hitMat;
		GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54 * L_19 = V_0;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_20 = __this->get_hitMat_17();
		L_19->set_hitMat_12(L_20);
		// avoid.missMat = missMat;
		GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54 * L_21 = V_0;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_22 = __this->get_missMat_18();
		L_21->set_missMat_13(L_22);
		// avoid.debug = debug;
		GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54 * L_23 = V_0;
		bool L_24 = __this->get_debug_15();
		L_23->set_debug_10(L_24);
		// avoid.ignoredTags = ignoredTags;
		GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54 * L_25 = V_0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_26 = __this->get_ignoredTags_14();
		L_25->set_ignoredTags_9(L_26);
		// avoid.numRays = numRays;
		GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54 * L_27 = V_0;
		int32_t L_28 = __this->get_numRays_19();
		L_27->set_numRays_14(L_28);
		// avoid.rayAngle = rayAngle;
		GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54 * L_29 = V_0;
		float L_30 = __this->get_rayAngle_20();
		L_29->set_rayAngle_15(L_30);
		// avoid.radius = radius;
		GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54 * L_31 = V_0;
		float L_32 = __this->get_radius_10();
		L_31->set_radius_6(L_32);
		// avoid.iterationCount = iterationCount;
		GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54 * L_33 = V_0;
		int32_t L_34 = __this->get_iterationCount_21();
		L_33->set_iterationCount_16(L_34);
		// groups.Add(avoid);
		List_1_tE14D0C6C55782752906F8175A6571F39953F299B * L_35 = L_0;
		GeneralAvoidance_tFC9D80DD42F66FDD13242CE6BC437B328EBB6A54 * L_36 = V_0;
		List_1_Add_m510A17ABFE245EDBEA8AD0743F574A5392F460D3(L_35, L_36, /*hidden argument*/List_1_Add_m510A17ABFE245EDBEA8AD0743F574A5392F460D3_RuntimeMethod_var);
		// Flocking flocking = new Flocking();
		Flocking_t43CEE98336DA04A3F685A25FC909ACB560366EFE * L_37 = (Flocking_t43CEE98336DA04A3F685A25FC909ACB560366EFE *)il2cpp_codegen_object_new(Flocking_t43CEE98336DA04A3F685A25FC909ACB560366EFE_il2cpp_TypeInfo_var);
		Flocking__ctor_m9D7829F48420390AF758D9560C32B23BD672B9BD(L_37, /*hidden argument*/NULL);
		V_1 = L_37;
		// flocking.character = character;
		Flocking_t43CEE98336DA04A3F685A25FC909ACB560366EFE * L_38 = V_1;
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_39 = __this->get_character_6();
		L_38->set_character_4(L_39);
		// flocking.flock = centerOfMass.flock;
		Flocking_t43CEE98336DA04A3F685A25FC909ACB560366EFE * L_40 = V_1;
		FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 * L_41 = __this->get_centerOfMass_8();
		List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * L_42 = L_41->get_flock_10();
		L_40->set_flock_5(L_42);
		// flocking.centerOfMass = centerOfMass;
		Flocking_t43CEE98336DA04A3F685A25FC909ACB560366EFE * L_43 = V_1;
		FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 * L_44 = __this->get_centerOfMass_8();
		L_43->set_centerOfMass_6(L_44);
		// flocking.targetSpeed = targetSpeed;
		Flocking_t43CEE98336DA04A3F685A25FC909ACB560366EFE * L_45 = V_1;
		float L_46 = __this->get_targetSpeed_9();
		L_45->set_targetSpeed_7(L_46);
		// flocking.sepWeight = centerOfMass.sepWeight;
		Flocking_t43CEE98336DA04A3F685A25FC909ACB560366EFE * L_47 = V_1;
		FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 * L_48 = __this->get_centerOfMass_8();
		float L_49 = L_48->get_sepWeight_11();
		L_47->set_sepWeight_9(L_49);
		// flocking.alignWeight = centerOfMass.alignWeight;
		Flocking_t43CEE98336DA04A3F685A25FC909ACB560366EFE * L_50 = V_1;
		FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 * L_51 = __this->get_centerOfMass_8();
		float L_52 = L_51->get_alignWeight_12();
		L_50->set_alignWeight_10(L_52);
		// flocking.matchWeight = centerOfMass.matchWeight;
		Flocking_t43CEE98336DA04A3F685A25FC909ACB560366EFE * L_53 = V_1;
		FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 * L_54 = __this->get_centerOfMass_8();
		float L_55 = L_54->get_matchWeight_13();
		L_53->set_matchWeight_11(L_55);
		// flocking.cohesionWeight = centerOfMass.cohesionWeight;
		Flocking_t43CEE98336DA04A3F685A25FC909ACB560366EFE * L_56 = V_1;
		FlockCOM_t129EBE95AF10CC1B16B833120A15514EEC7CA6A9 * L_57 = __this->get_centerOfMass_8();
		float L_58 = L_57->get_cohesionWeight_14();
		L_56->set_cohesionWeight_12(L_58);
		// flocking.sepThreshold = sepThreshold;
		Flocking_t43CEE98336DA04A3F685A25FC909ACB560366EFE * L_59 = V_1;
		float L_60 = __this->get_sepThreshold_11();
		L_59->set_sepThreshold_8(L_60);
		// groups.Add(flocking);
		List_1_tE14D0C6C55782752906F8175A6571F39953F299B * L_61 = L_35;
		Flocking_t43CEE98336DA04A3F685A25FC909ACB560366EFE * L_62 = V_1;
		List_1_Add_m510A17ABFE245EDBEA8AD0743F574A5392F460D3(L_61, L_62, /*hidden argument*/List_1_Add_m510A17ABFE245EDBEA8AD0743F574A5392F460D3_RuntimeMethod_var);
		// Wander wander = new Wander();
		Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E * L_63 = (Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E *)il2cpp_codegen_object_new(Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E_il2cpp_TypeInfo_var);
		Wander__ctor_mFD179FAF9046380E9CA1BD6655C090BE1F89B06D(L_63, /*hidden argument*/NULL);
		V_2 = L_63;
		// BlendedBehavior wanderBlend = new BlendedBehavior();
		BlendedBehavior_t2AF211BE7DEE0EF54A7A3F64CB4976DFD8B7F330 * L_64 = (BlendedBehavior_t2AF211BE7DEE0EF54A7A3F64CB4976DFD8B7F330 *)il2cpp_codegen_object_new(BlendedBehavior_t2AF211BE7DEE0EF54A7A3F64CB4976DFD8B7F330_il2cpp_TypeInfo_var);
		BlendedBehavior__ctor_m2025EE90A9BD59DE2FBE81EF15468E50A82071B8(L_64, /*hidden argument*/NULL);
		V_3 = L_64;
		// wander.character = character;
		Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E * L_65 = V_2;
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_66 = __this->get_character_6();
		((Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)L_65)->set_character_1(L_66);
		// wanderBlend.defaultBehavior = wander;
		BlendedBehavior_t2AF211BE7DEE0EF54A7A3F64CB4976DFD8B7F330 * L_67 = V_3;
		Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E * L_68 = V_2;
		L_67->set_defaultBehavior_3(L_68);
		// groups.Add(wanderBlend);
		List_1_tE14D0C6C55782752906F8175A6571F39953F299B * L_69 = L_61;
		BlendedBehavior_t2AF211BE7DEE0EF54A7A3F64CB4976DFD8B7F330 * L_70 = V_3;
		List_1_Add_m510A17ABFE245EDBEA8AD0743F574A5392F460D3(L_69, L_70, /*hidden argument*/List_1_Add_m510A17ABFE245EDBEA8AD0743F574A5392F460D3_RuntimeMethod_var);
		// return groups;
		return L_69;
	}
}
// System.Void PrioritizedFlocking::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrioritizedFlocking__ctor_m81DD31767A1E6788D8F39DB20CA8C2A619902B95 (PrioritizedFlocking_tBAF27F3BCF5C924B6B99C6A07779C9973B940411 * __this, const RuntimeMethod* method)
{
	{
		// public float radius = 1f;
		__this->set_radius_10((1.0f));
		// public float sepThreshold = 10f;
		__this->set_sepThreshold_11((10.0f));
		// public float avoidDist = 30f;
		__this->set_avoidDist_12((30.0f));
		// public float lookAhead = 10f;
		__this->set_lookAhead_13((10.0f));
		// public int numRays = 1;
		__this->set_numRays_19(1);
		// public float rayAngle = 10f;
		__this->set_rayAngle_20((10.0f));
		// public float sepWeight = 1f;
		__this->set_sepWeight_22((1.0f));
		// public float alignWeight = 1f;
		__this->set_alignWeight_23((1.0f));
		// public float matchWeight = 1f;
		__this->set_matchWeight_24((1.0f));
		// public float cohesionWeight = 1f;
		__this->set_cohesionWeight_25((1.0f));
		// public float avoidWeight = 1f;
		__this->set_avoidWeight_26((1.0f));
		// public float dodgeWeight = 1f;
		__this->set_dodgeWeight_27((1.0f));
		Prioritization__ctor_mC52C990F02FF31CC990585012DE45762C88CD09E(__this, /*hidden argument*/NULL);
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
// System.Void Projectile::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Update_m382C5B499BD4599FE34A04DA3DA0701077C710B2 (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// steeringUpdate.linear = Physics.gravity;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_0 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_steeringUpdate_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Physics_get_gravity_m58D5D94276B1E7A04E9F7108EEAAB7AB786BA532(/*hidden argument*/NULL);
		L_0->set_linear_0(L_1);
		// transform.eulerAngles = new Vector3(Mathf.Asin(-linearVelocity.normalized.y) * Mathf.Rad2Deg, Mathf.Atan2(linearVelocity.x, linearVelocity.z) * Mathf.Rad2Deg, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_address_of_linearVelocity_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		float L_6;
		L_6 = asinf(((-L_5)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_7 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_address_of_linearVelocity_4();
		float L_8 = L_7->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_address_of_linearVelocity_4();
		float L_10 = L_9->get_z_4();
		float L_11;
		L_11 = atan2f(L_8, L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_multiply((float)L_6, (float)(57.2957802f))), ((float)il2cpp_codegen_multiply((float)L_11, (float)(57.2957802f))), (0.0f), /*hidden argument*/NULL);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_2, L_12, /*hidden argument*/NULL);
		// elapsedTime += Time.deltaTime;
		float L_13 = __this->get_elapsedTime_11();
		float L_14;
		L_14 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_elapsedTime_11(((float)il2cpp_codegen_add((float)L_13, (float)L_14)));
		// if (elapsedTime >= maxLifetime)
		float L_15 = __this->get_elapsedTime_11();
		float L_16 = __this->get_maxLifetime_10();
		if ((!(((float)L_15) >= ((float)L_16))))
		{
			goto IL_0088;
		}
	}
	{
		// Destroy(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(__this, /*hidden argument*/NULL);
	}

IL_0088:
	{
		// base.Update();
		Kinematic_Update_m90DEAE2534DEF1E85A2B0289FBAAB1A25D476093(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Projectile::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_OnCollisionEnter_m5AB21AA6E830A25704EA420269852141E18759F7 (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37ECA87AC91B1D204FE4A5290256D511F42C29A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E34B6D1A15C712D6743BB63178D85EBE9EE182D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Collided!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral37ECA87AC91B1D204FE4A5290256D511F42C29A0, /*hidden argument*/NULL);
		// if (collision.gameObject.name != "Tank")
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_2, _stringLiteral8E34B6D1A15C712D6743BB63178D85EBE9EE182D, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void Projectile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile__ctor_m22DAC83BA9B394316027755FD2ADFCA806EE39BB (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method)
{
	{
		// public float maxLifetime = 30f; // Default to 30 seconds
		__this->set_maxLifetime_10((30.0f));
		Kinematic__ctor_m067A5346E3475380B0E1662CFA2AA3D9495AF89D(__this, /*hidden argument*/NULL);
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
// UnityEngine.Vector3 Pursue::getTargetPosition(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Pursue_getTargetPosition_m8FD36AEBAFF731242E05B70541F0F40444F4824A (Pursue_tD122B2A570231794548505BE2B891BCBCCF88F8E * __this, bool* ___valid0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisKinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36_m261E08D5C7A867FDD4AC90E54A81E323E284C45E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * V_4 = NULL;
	{
		// if (target == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ((Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF *)__this)->get_target_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// valid = false;
		bool* L_2 = ___valid0;
		*((int8_t*)L_2) = (int8_t)0;
		// return Vector3.positiveInfinity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_positiveInfinity_mFBABFE23E517E2C66E78AC60C79B8B9A73CF5229(/*hidden argument*/NULL);
		return L_3;
	}

IL_0017:
	{
		// valid = true;
		bool* L_4 = ___valid0;
		*((int8_t*)L_4) = (int8_t)1;
		// Vector3 directionToTarget = target.transform.position - character.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = ((Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF *)__this)->get_target_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_8 = ((Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF *)__this)->get_character_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_7, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// float distanceToTarget = directionToTarget.magnitude;
		float L_12;
		L_12 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_12;
		// float mySpeed = character.linearVelocity.magnitude;
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_13 = ((Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF *)__this)->get_character_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_14 = L_13->get_address_of_linearVelocity_4();
		float L_15;
		L_15 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		// if (mySpeed <= distanceToTarget / maxPredictionTime)
		float L_16 = V_2;
		float L_17 = V_1;
		float L_18 = __this->get_maxPredictionTime_5();
		if ((!(((float)L_16) <= ((float)((float)((float)L_17/(float)L_18))))))
		{
			goto IL_006d;
		}
	}
	{
		// predictionTime = maxPredictionTime;
		float L_19 = __this->get_maxPredictionTime_5();
		V_3 = L_19;
		// }
		goto IL_0071;
	}

IL_006d:
	{
		// predictionTime = distanceToTarget / mySpeed;
		float L_20 = V_1;
		float L_21 = V_2;
		V_3 = ((float)((float)L_20/(float)L_21));
	}

IL_0071:
	{
		// Kinematic myMovingTarget = target.GetComponent<Kinematic>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = ((Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF *)__this)->get_target_2();
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_23;
		L_23 = GameObject_GetComponent_TisKinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36_m261E08D5C7A867FDD4AC90E54A81E323E284C45E(L_22, /*hidden argument*/GameObject_GetComponent_TisKinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36_m261E08D5C7A867FDD4AC90E54A81E323E284C45E_RuntimeMethod_var);
		V_4 = L_23;
		// if (myMovingTarget == null)
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_24 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_24, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_0090;
		}
	}
	{
		// return base.getTargetPosition(out valid);
		bool* L_26 = ___valid0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Seek_getTargetPosition_mB7D564DF63E6AFE13B962CC545DB7A8DF8FDB661(__this, (bool*)L_26, /*hidden argument*/NULL);
		return L_27;
	}

IL_0090:
	{
		// flee = evade;
		bool L_28 = __this->get_evade_6();
		((Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF *)__this)->set_flee_4(L_28);
		// return target.transform.position + myMovingTarget.linearVelocity * predictionTime;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = ((Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF *)__this)->get_target_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_29, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_32 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = L_32->get_linearVelocity_4();
		float L_34 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_33, L_34, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_31, L_35, /*hidden argument*/NULL);
		return L_36;
	}
}
// System.Void Pursue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pursue__ctor_m7D74EE1F0914B6CF22C6B5D1E5A65D1ABFE7B4CB (Pursue_tD122B2A570231794548505BE2B891BCBCCF88F8E * __this, const RuntimeMethod* method)
{
	{
		// float maxPredictionTime = 1f;
		__this->set_maxPredictionTime_5((1.0f));
		Seek__ctor_mA0F97EBD068DB6090AEAEE4E5F1A87640F4EB33A(__this, /*hidden argument*/NULL);
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
// System.Void Pursuer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pursuer_Start_mAAE878B85A8229D7DC1636E042B7F55C06291794 (Pursuer_tD9402FCF5E19DA14928D90FC8794D181F6B0A14D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Face_tAB806D390A7B7F99E145FAF9420C74E544D5AE50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pursue_tD122B2A570231794548505BE2B891BCBCCF88F8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myMoveType = new Pursue();
		Pursue_tD122B2A570231794548505BE2B891BCBCCF88F8E * L_0 = (Pursue_tD122B2A570231794548505BE2B891BCBCCF88F8E *)il2cpp_codegen_object_new(Pursue_tD122B2A570231794548505BE2B891BCBCCF88F8E_il2cpp_TypeInfo_var);
		Pursue__ctor_m7D74EE1F0914B6CF22C6B5D1E5A65D1ABFE7B4CB(L_0, /*hidden argument*/NULL);
		__this->set_myMoveType_10(L_0);
		// myMoveType.character = this;
		Pursue_tD122B2A570231794548505BE2B891BCBCCF88F8E * L_1 = __this->get_myMoveType_10();
		((Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF *)L_1)->set_character_1(__this);
		// myMoveType.target = myTarget;
		Pursue_tD122B2A570231794548505BE2B891BCBCCF88F8E * L_2 = __this->get_myMoveType_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_myTarget_8();
		((Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF *)L_2)->set_target_2(L_3);
		// myMoveType.evade = evade;
		Pursue_tD122B2A570231794548505BE2B891BCBCCF88F8E * L_4 = __this->get_myMoveType_10();
		bool L_5 = __this->get_evade_13();
		L_4->set_evade_6(L_5);
		// myPursueRotateType = new Face();
		Face_tAB806D390A7B7F99E145FAF9420C74E544D5AE50 * L_6 = (Face_tAB806D390A7B7F99E145FAF9420C74E544D5AE50 *)il2cpp_codegen_object_new(Face_tAB806D390A7B7F99E145FAF9420C74E544D5AE50_il2cpp_TypeInfo_var);
		Face__ctor_mC49672386D6E203C238682EEAEC5FA96C265C4C1(L_6, /*hidden argument*/NULL);
		__this->set_myPursueRotateType_11(L_6);
		// myPursueRotateType.character = this;
		Face_tAB806D390A7B7F99E145FAF9420C74E544D5AE50 * L_7 = __this->get_myPursueRotateType_11();
		((Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)L_7)->set_character_1(__this);
		// myPursueRotateType.target = myTarget;
		Face_tAB806D390A7B7F99E145FAF9420C74E544D5AE50 * L_8 = __this->get_myPursueRotateType_11();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_myTarget_8();
		((Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)L_8)->set_target_2(L_9);
		// myEvadeRotateType = new LookWhereGoing();
		LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * L_10 = (LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 *)il2cpp_codegen_object_new(LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0_il2cpp_TypeInfo_var);
		LookWhereGoing__ctor_m225781ABC6447E4CC44715861AF5635DA2DA5115(L_10, /*hidden argument*/NULL);
		__this->set_myEvadeRotateType_12(L_10);
		// myEvadeRotateType.character = this;
		LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * L_11 = __this->get_myEvadeRotateType_12();
		((Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)L_11)->set_character_1(__this);
		// myEvadeRotateType.target = myTarget;
		LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * L_12 = __this->get_myEvadeRotateType_12();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_myTarget_8();
		((Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)L_12)->set_target_2(L_13);
		// }
		return;
	}
}
// System.Void Pursuer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pursuer_Update_m080B287B2F83B8721E26ABE8F2B706D5DAEAE1A6 (Pursuer_tD9402FCF5E19DA14928D90FC8794D181F6B0A14D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * G_B2_0 = NULL;
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * G_B3_1 = NULL;
	{
		// steeringUpdate = new SteeringOutput();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_0 = (SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D *)il2cpp_codegen_object_new(SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		SteeringOutput__ctor_m324DFBCCE92C73E1BEC5AB73096A0762BBFB7F73(L_0, /*hidden argument*/NULL);
		((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->set_steeringUpdate_9(L_0);
		// steeringUpdate.linear = myMoveType.getSteering().linear;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_1 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_steeringUpdate_9();
		Pursue_tD122B2A570231794548505BE2B891BCBCCF88F8E * L_2 = __this->get_myMoveType_10();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_3;
		L_3 = VirtFuncInvoker0< SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * >::Invoke(4 /* SteeringOutput SteeringBehavior::getSteering() */, L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = L_3->get_linear_0();
		L_1->set_linear_0(L_4);
		// steeringUpdate.angular = evade ? myEvadeRotateType.getSteering().angular : myPursueRotateType.getSteering().angular;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_5 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_steeringUpdate_9();
		bool L_6 = __this->get_evade_13();
		G_B1_0 = L_5;
		if (L_6)
		{
			G_B2_0 = L_5;
			goto IL_0046;
		}
	}
	{
		Face_tAB806D390A7B7F99E145FAF9420C74E544D5AE50 * L_7 = __this->get_myPursueRotateType_11();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_8;
		L_8 = VirtFuncInvoker0< SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * >::Invoke(4 /* SteeringOutput SteeringBehavior::getSteering() */, L_7);
		float L_9 = L_8->get_angular_1();
		G_B3_0 = L_9;
		G_B3_1 = G_B1_0;
		goto IL_0056;
	}

IL_0046:
	{
		LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * L_10 = __this->get_myEvadeRotateType_12();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_11;
		L_11 = VirtFuncInvoker0< SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * >::Invoke(4 /* SteeringOutput SteeringBehavior::getSteering() */, L_10);
		float L_12 = L_11->get_angular_1();
		G_B3_0 = L_12;
		G_B3_1 = G_B2_0;
	}

IL_0056:
	{
		G_B3_1->set_angular_1(G_B3_0);
		// base.Update();
		Kinematic_Update_m90DEAE2534DEF1E85A2B0289FBAAB1A25D476093(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Pursuer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pursuer__ctor_m3441558785189C5A975C7A0170189749CE5266DD (Pursuer_tD9402FCF5E19DA14928D90FC8794D181F6B0A14D * __this, const RuntimeMethod* method)
{
	{
		Kinematic__ctor_m067A5346E3475380B0E1662CFA2AA3D9495AF89D(__this, /*hidden argument*/NULL);
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
// UnityEngine.Vector3 Seek::getTargetPosition(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Seek_getTargetPosition_mB7D564DF63E6AFE13B962CC545DB7A8DF8FDB661 (Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF * __this, bool* ___valid0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (target != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_target_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// valid = true;
		bool* L_2 = ___valid0;
		*((int8_t*)L_2) = (int8_t)1;
		// return target.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_target_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0022:
	{
		// valid = false;
		bool* L_6 = ___valid0;
		*((int8_t*)L_6) = (int8_t)0;
		// return Vector3.positiveInfinity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_get_positiveInfinity_mFBABFE23E517E2C66E78AC60C79B8B9A73CF5229(/*hidden argument*/NULL);
		return L_7;
	}
}
// SteeringOutput Seek::getSteering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * Seek_getSteering_m237467E9441A4257AAE20826C2884D623F388B81 (Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * V_0 = NULL;
	bool V_1 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// SteeringOutput result = new SteeringOutput();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_0 = (SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D *)il2cpp_codegen_object_new(SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		SteeringOutput__ctor_m324DFBCCE92C73E1BEC5AB73096A0762BBFB7F73(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// bool valid = true;
		V_1 = (bool)1;
		// Vector3 targetPosition = getTargetPosition(out valid);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = VirtFuncInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , bool* >::Invoke(5 /* UnityEngine.Vector3 Seek::getTargetPosition(System.Boolean&) */, __this, (bool*)(&V_1));
		V_2 = L_1;
		// if (targetPosition == Vector3.positiveInfinity)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_positiveInfinity_mFBABFE23E517E2C66E78AC60C79B8B9A73CF5229(/*hidden argument*/NULL);
		bool L_4;
		L_4 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		// return null;
		return (SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D *)NULL;
	}

IL_0020:
	{
		// else if (!valid)
		bool L_5 = V_1;
		if (L_5)
		{
			goto IL_003b;
		}
	}
	{
		// result.linear = Vector3.zero;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_6 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		L_6->set_linear_0(L_7);
		// result.angular = 0;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_8 = V_0;
		L_8->set_angular_1((0.0f));
		// return result;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_9 = V_0;
		return L_9;
	}

IL_003b:
	{
		// if (flee)
		bool L_10 = __this->get_flee_4();
		if (!L_10)
		{
			goto IL_0061;
		}
	}
	{
		// result.linear = character.transform.position - targetPosition;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_11 = V_0;
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_12 = __this->get_character_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_14, L_15, /*hidden argument*/NULL);
		L_11->set_linear_0(L_16);
		// }
		goto IL_007d;
	}

IL_0061:
	{
		// result.linear = targetPosition - character.transform.position;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_17 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_2;
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_19 = __this->get_character_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_18, L_21, /*hidden argument*/NULL);
		L_17->set_linear_0(L_22);
	}

IL_007d:
	{
		// result.linear.Normalize();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_23 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_24 = L_23->get_address_of_linear_0();
		Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_24, /*hidden argument*/NULL);
		// result.linear *= maxAcceleration;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_25 = V_0;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_26 = L_25;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = L_26->get_linear_0();
		float L_28 = __this->get_maxAcceleration_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_27, L_28, /*hidden argument*/NULL);
		L_26->set_linear_0(L_29);
		// result.angular = 0;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_30 = V_0;
		L_30->set_angular_1((0.0f));
		// return result;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_31 = V_0;
		return L_31;
	}
}
// System.Void Seek::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Seek__ctor_mA0F97EBD068DB6090AEAEE4E5F1A87640F4EB33A (Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF * __this, const RuntimeMethod* method)
{
	{
		// public float maxAcceleration = 100f;
		__this->set_maxAcceleration_3((100.0f));
		SteeringBehavior__ctor_m36F8FE66341628CC66FCE103529662A0B3B4B423(__this, /*hidden argument*/NULL);
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
// System.Void Seeker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Seeker_Start_m533A03FEB28FD37DCA389176B5F360C2B8F0E2D5 (Seeker_t246DDE7D5A9EA1244787FAA74722A2F079C9CF4D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Face_tAB806D390A7B7F99E145FAF9420C74E544D5AE50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myMoveType = new Seek();
		Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF * L_0 = (Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF *)il2cpp_codegen_object_new(Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF_il2cpp_TypeInfo_var);
		Seek__ctor_mA0F97EBD068DB6090AEAEE4E5F1A87640F4EB33A(L_0, /*hidden argument*/NULL);
		__this->set_myMoveType_10(L_0);
		// myMoveType.character = this;
		Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF * L_1 = __this->get_myMoveType_10();
		L_1->set_character_1(__this);
		// myMoveType.target = myTarget;
		Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF * L_2 = __this->get_myMoveType_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_myTarget_8();
		L_2->set_target_2(L_3);
		// myMoveType.flee = flee;
		Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF * L_4 = __this->get_myMoveType_10();
		bool L_5 = __this->get_flee_14();
		L_4->set_flee_4(L_5);
		// myMoveType.maxAcceleration = maxAcceleration;
		Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF * L_6 = __this->get_myMoveType_10();
		float L_7 = __this->get_maxAcceleration_13();
		L_6->set_maxAcceleration_3(L_7);
		// mySeekRotateType = new Face();
		Face_tAB806D390A7B7F99E145FAF9420C74E544D5AE50 * L_8 = (Face_tAB806D390A7B7F99E145FAF9420C74E544D5AE50 *)il2cpp_codegen_object_new(Face_tAB806D390A7B7F99E145FAF9420C74E544D5AE50_il2cpp_TypeInfo_var);
		Face__ctor_mC49672386D6E203C238682EEAEC5FA96C265C4C1(L_8, /*hidden argument*/NULL);
		__this->set_mySeekRotateType_11(L_8);
		// mySeekRotateType.character = this;
		Face_tAB806D390A7B7F99E145FAF9420C74E544D5AE50 * L_9 = __this->get_mySeekRotateType_11();
		((Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)L_9)->set_character_1(__this);
		// mySeekRotateType.target = myTarget;
		Face_tAB806D390A7B7F99E145FAF9420C74E544D5AE50 * L_10 = __this->get_mySeekRotateType_11();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_myTarget_8();
		((Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)L_10)->set_target_2(L_11);
		// myFleeRotateType = new LookWhereGoing();
		LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * L_12 = (LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 *)il2cpp_codegen_object_new(LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0_il2cpp_TypeInfo_var);
		LookWhereGoing__ctor_m225781ABC6447E4CC44715861AF5635DA2DA5115(L_12, /*hidden argument*/NULL);
		__this->set_myFleeRotateType_12(L_12);
		// myFleeRotateType.character = this;
		LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * L_13 = __this->get_myFleeRotateType_12();
		((Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)L_13)->set_character_1(__this);
		// myFleeRotateType.target = myTarget;
		LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * L_14 = __this->get_myFleeRotateType_12();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_myTarget_8();
		((Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)L_14)->set_target_2(L_15);
		// }
		return;
	}
}
// System.Void Seeker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Seeker_Update_m5594164F291F1210BFDD034D004A0A900F835E22 (Seeker_t246DDE7D5A9EA1244787FAA74722A2F079C9CF4D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * G_B2_0 = NULL;
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * G_B3_1 = NULL;
	{
		// steeringUpdate = new SteeringOutput();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_0 = (SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D *)il2cpp_codegen_object_new(SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		SteeringOutput__ctor_m324DFBCCE92C73E1BEC5AB73096A0762BBFB7F73(L_0, /*hidden argument*/NULL);
		((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->set_steeringUpdate_9(L_0);
		// steeringUpdate.linear = myMoveType.getSteering().linear;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_1 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_steeringUpdate_9();
		Seek_tCCC98DAC22F3ADF24F35CCF5E62DB5D4A9A660AF * L_2 = __this->get_myMoveType_10();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_3;
		L_3 = VirtFuncInvoker0< SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * >::Invoke(4 /* SteeringOutput SteeringBehavior::getSteering() */, L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = L_3->get_linear_0();
		L_1->set_linear_0(L_4);
		// steeringUpdate.angular = flee ? myFleeRotateType.getSteering().angular : mySeekRotateType.getSteering().angular;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_5 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_steeringUpdate_9();
		bool L_6 = __this->get_flee_14();
		G_B1_0 = L_5;
		if (L_6)
		{
			G_B2_0 = L_5;
			goto IL_0046;
		}
	}
	{
		Face_tAB806D390A7B7F99E145FAF9420C74E544D5AE50 * L_7 = __this->get_mySeekRotateType_11();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_8;
		L_8 = VirtFuncInvoker0< SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * >::Invoke(4 /* SteeringOutput SteeringBehavior::getSteering() */, L_7);
		float L_9 = L_8->get_angular_1();
		G_B3_0 = L_9;
		G_B3_1 = G_B1_0;
		goto IL_0056;
	}

IL_0046:
	{
		LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * L_10 = __this->get_myFleeRotateType_12();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_11;
		L_11 = VirtFuncInvoker0< SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * >::Invoke(4 /* SteeringOutput SteeringBehavior::getSteering() */, L_10);
		float L_12 = L_11->get_angular_1();
		G_B3_0 = L_12;
		G_B3_1 = G_B2_0;
	}

IL_0056:
	{
		G_B3_1->set_angular_1(G_B3_0);
		// base.Update();
		Kinematic_Update_m90DEAE2534DEF1E85A2B0289FBAAB1A25D476093(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Seeker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Seeker__ctor_m4B0126B29D6C103BFF02EC708BDE855B930C3110 (Seeker_t246DDE7D5A9EA1244787FAA74722A2F079C9CF4D * __this, const RuntimeMethod* method)
{
	{
		// public float maxAcceleration = 100f;
		__this->set_maxAcceleration_13((100.0f));
		Kinematic__ctor_m067A5346E3475380B0E1662CFA2AA3D9495AF89D(__this, /*hidden argument*/NULL);
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
// SteeringOutput Separation::getSteering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * Separation_getSteering_mF49EE54BE8E74D81D1E52C4383A6D0E5557AF463 (Separation_tB627F4D516766D919037B2256412BE43C0539007 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m383EF8008DED4B2D672627F30C5D8F5F7932083E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD86040F68C5C73B4736290FC07AE3A27C49034C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2E7EEE149888540555AD68CF4F36F466ABC52BFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1FEDC50F978A2982E4B7F0F8B881490D99C5843A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * V_0 = NULL;
	Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * V_2 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// SteeringOutput result = new SteeringOutput();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_0 = (SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D *)il2cpp_codegen_object_new(SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		SteeringOutput__ctor_m324DFBCCE92C73E1BEC5AB73096A0762BBFB7F73(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (debug)
		bool L_1 = __this->get_debug_4();
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// lr.material = lrMat;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_2 = __this->get_lr_5();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = __this->get_lrMat_6();
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// foreach (Kinematic target in targets)
		List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * L_4 = __this->get_targets_3();
		Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A  L_5;
		L_5 = List_1_GetEnumerator_m1FEDC50F978A2982E4B7F0F8B881490D99C5843A(L_4, /*hidden argument*/List_1_GetEnumerator_m1FEDC50F978A2982E4B7F0F8B881490D99C5843A_RuntimeMethod_var);
		V_1 = L_5;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0235;
		}

IL_0030:
		{
			// foreach (Kinematic target in targets)
			Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_6;
			L_6 = Enumerator_get_Current_m2E7EEE149888540555AD68CF4F36F466ABC52BFE_inline((Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A *)(&V_1), /*hidden argument*/Enumerator_get_Current_m2E7EEE149888540555AD68CF4F36F466ABC52BFE_RuntimeMethod_var);
			V_2 = L_6;
			// Vector3 direction = character.transform.position - target.transform.position;
			Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_7 = __this->get_character_1();
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
			L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
			L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
			Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_10 = V_2;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
			L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_10, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
			L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
			L_13 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_9, L_12, /*hidden argument*/NULL);
			V_3 = L_13;
			// float distance = direction.magnitude;
			float L_14;
			L_14 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), /*hidden argument*/NULL);
			V_4 = L_14;
			// if (distance < threshold)
			float L_15 = V_4;
			float L_16 = __this->get_threshold_7();
			if ((!(((float)L_15) < ((float)L_16))))
			{
				goto IL_0235;
			}
		}

IL_006f:
		{
			// if (expDecay)
			bool L_17 = __this->get_expDecay_9();
			if (!L_17)
			{
				goto IL_015b;
			}
		}

IL_007a:
		{
			// float strength = Mathf.Exp(Mathf.Log(expMax, (float)System.Math.E) - distance / expScale);
			float L_18 = __this->get_expMax_10();
			float L_19;
			L_19 = Mathf_Log_mF7F3624FA030AB57AD8C1F4CAF084B2DCC99897A(L_18, (2.71828175f), /*hidden argument*/NULL);
			float L_20 = V_4;
			float L_21 = __this->get_expScale_11();
			float L_22;
			L_22 = expf(((float)il2cpp_codegen_subtract((float)L_19, (float)((float)((float)L_20/(float)L_21)))));
			V_5 = L_22;
			// direction.Normalize();
			Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), /*hidden argument*/NULL);
			// result.linear += strength * direction;
			SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_23 = V_0;
			SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_24 = L_23;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = L_24->get_linear_0();
			float L_26 = V_5;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_3;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
			L_28 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(L_26, L_27, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
			L_29 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_25, L_28, /*hidden argument*/NULL);
			L_24->set_linear_0(L_29);
			// if (debug)
			bool L_30 = __this->get_debug_4();
			if (!L_30)
			{
				goto IL_0235;
			}
		}

IL_00c6:
		{
			// lr.SetPosition(0, character.transform.position);
			LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_31 = __this->get_lr_5();
			Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_32 = __this->get_character_1();
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
			L_33 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_32, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
			L_34 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_33, /*hidden argument*/NULL);
			LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_31, 0, L_34, /*hidden argument*/NULL);
			// lr.SetPosition(1, target.transform.position);
			LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_35 = __this->get_lr_5();
			Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_36 = V_2;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
			L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_36, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
			L_38 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_37, /*hidden argument*/NULL);
			LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_35, 1, L_38, /*hidden argument*/NULL);
			// lr.material.color = new Color(lr.material.color.r, lr.material.color.g, lr.material.color.b, strength / expMax);
			LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_39 = __this->get_lr_5();
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_40;
			L_40 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_39, /*hidden argument*/NULL);
			LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_41 = __this->get_lr_5();
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_42;
			L_42 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_41, /*hidden argument*/NULL);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_43;
			L_43 = Material_get_color_m7926F7BE68B4D000306738C1EAABEB7ADFB97821(L_42, /*hidden argument*/NULL);
			float L_44 = L_43.get_r_0();
			LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_45 = __this->get_lr_5();
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_46;
			L_46 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_45, /*hidden argument*/NULL);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_47;
			L_47 = Material_get_color_m7926F7BE68B4D000306738C1EAABEB7ADFB97821(L_46, /*hidden argument*/NULL);
			float L_48 = L_47.get_g_1();
			LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_49 = __this->get_lr_5();
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_50;
			L_50 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_49, /*hidden argument*/NULL);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_51;
			L_51 = Material_get_color_m7926F7BE68B4D000306738C1EAABEB7ADFB97821(L_50, /*hidden argument*/NULL);
			float L_52 = L_51.get_b_2();
			float L_53 = V_5;
			float L_54 = __this->get_expMax_10();
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_55;
			memset((&L_55), 0, sizeof(L_55));
			Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_55), L_44, L_48, L_52, ((float)((float)L_53/(float)L_54)), /*hidden argument*/NULL);
			Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_40, L_55, /*hidden argument*/NULL);
			// }
			goto IL_0235;
		}

IL_015b:
		{
			// float strength = Mathf.Min(decayCoefficient / (distance * distance), maxAcceleration);
			float L_56 = __this->get_decayCoefficient_8();
			float L_57 = V_4;
			float L_58 = V_4;
			float L_59 = __this->get_maxAcceleration_2();
			float L_60;
			L_60 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(((float)((float)L_56/(float)((float)il2cpp_codegen_multiply((float)L_57, (float)L_58)))), L_59, /*hidden argument*/NULL);
			V_6 = L_60;
			// direction.Normalize();
			Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), /*hidden argument*/NULL);
			// result.linear += strength * direction;
			SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_61 = V_0;
			SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_62 = L_61;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63 = L_62->get_linear_0();
			float L_64 = V_6;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65 = V_3;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66;
			L_66 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(L_64, L_65, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67;
			L_67 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_63, L_66, /*hidden argument*/NULL);
			L_62->set_linear_0(L_67);
			// if (debug)
			bool L_68 = __this->get_debug_4();
			if (!L_68)
			{
				goto IL_0235;
			}
		}

IL_019f:
		{
			// lr.SetPosition(0, character.transform.position);
			LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_69 = __this->get_lr_5();
			Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_70 = __this->get_character_1();
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_71;
			L_71 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_70, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72;
			L_72 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_71, /*hidden argument*/NULL);
			LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_69, 0, L_72, /*hidden argument*/NULL);
			// lr.SetPosition(1, target.transform.position);
			LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_73 = __this->get_lr_5();
			Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_74 = V_2;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_75;
			L_75 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_74, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76;
			L_76 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_75, /*hidden argument*/NULL);
			LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_73, 1, L_76, /*hidden argument*/NULL);
			// lr.material.color = new Color(lr.material.color.r, lr.material.color.g, lr.material.color.b, 1 - distance / threshold);
			LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_77 = __this->get_lr_5();
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_78;
			L_78 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_77, /*hidden argument*/NULL);
			LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_79 = __this->get_lr_5();
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_80;
			L_80 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_79, /*hidden argument*/NULL);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_81;
			L_81 = Material_get_color_m7926F7BE68B4D000306738C1EAABEB7ADFB97821(L_80, /*hidden argument*/NULL);
			float L_82 = L_81.get_r_0();
			LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_83 = __this->get_lr_5();
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_84;
			L_84 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_83, /*hidden argument*/NULL);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_85;
			L_85 = Material_get_color_m7926F7BE68B4D000306738C1EAABEB7ADFB97821(L_84, /*hidden argument*/NULL);
			float L_86 = L_85.get_g_1();
			LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_87 = __this->get_lr_5();
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_88;
			L_88 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_87, /*hidden argument*/NULL);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_89;
			L_89 = Material_get_color_m7926F7BE68B4D000306738C1EAABEB7ADFB97821(L_88, /*hidden argument*/NULL);
			float L_90 = L_89.get_b_2();
			float L_91 = V_4;
			float L_92 = __this->get_threshold_7();
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_93;
			memset((&L_93), 0, sizeof(L_93));
			Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_93), L_82, L_86, L_90, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)((float)L_91/(float)L_92)))), /*hidden argument*/NULL);
			Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_78, L_93, /*hidden argument*/NULL);
		}

IL_0235:
		{
			// foreach (Kinematic target in targets)
			bool L_94;
			L_94 = Enumerator_MoveNext_mD86040F68C5C73B4736290FC07AE3A27C49034C9((Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mD86040F68C5C73B4736290FC07AE3A27C49034C9_RuntimeMethod_var);
			if (L_94)
			{
				goto IL_0030;
			}
		}

IL_0241:
		{
			IL2CPP_LEAVE(0x251, FINALLY_0243);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0243;
	}

FINALLY_0243:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m383EF8008DED4B2D672627F30C5D8F5F7932083E((Enumerator_t6D56D63D53F829D38DE81DD57A1CD91715FEF45A *)(&V_1), /*hidden argument*/Enumerator_Dispose_m383EF8008DED4B2D672627F30C5D8F5F7932083E_RuntimeMethod_var);
		IL2CPP_END_FINALLY(579)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(579)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x251, IL_0251)
	}

IL_0251:
	{
		// return result;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_95 = V_0;
		return L_95;
	}
}
// System.Void Separation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Separation__ctor_m508F8F5DF365AE9C624B42D836ED93028714778A (Separation_tB627F4D516766D919037B2256412BE43C0539007 * __this, const RuntimeMethod* method)
{
	{
		// public float maxAcceleration = 1f;
		__this->set_maxAcceleration_2((1.0f));
		// public float threshold = 5f; // 5
		__this->set_threshold_7((5.0f));
		// public float decayCoefficient = 100f;
		__this->set_decayCoefficient_8((100.0f));
		// public float expMax = 100f;
		__this->set_expMax_10((100.0f));
		// public float expScale = 2f;
		__this->set_expScale_11((2.0f));
		SteeringBehavior__ctor_m36F8FE66341628CC66FCE103529662A0B3B4B423(__this, /*hidden argument*/NULL);
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
// System.Void Separator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Separator_Start_m68BDA2290110239F9F3DFBC5AAA28FFE91081C8C (Separator_t11F00E3211A0E086332FF3C1396EF51C5268C3CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Separation_tB627F4D516766D919037B2256412BE43C0539007_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myMoveType = new Separation();
		Separation_tB627F4D516766D919037B2256412BE43C0539007 * L_0 = (Separation_tB627F4D516766D919037B2256412BE43C0539007 *)il2cpp_codegen_object_new(Separation_tB627F4D516766D919037B2256412BE43C0539007_il2cpp_TypeInfo_var);
		Separation__ctor_m508F8F5DF365AE9C624B42D836ED93028714778A(L_0, /*hidden argument*/NULL);
		__this->set_myMoveType_10(L_0);
		// myMoveType.character = this;
		Separation_tB627F4D516766D919037B2256412BE43C0539007 * L_1 = __this->get_myMoveType_10();
		L_1->set_character_1(__this);
		// myMoveType.targets = targets;
		Separation_tB627F4D516766D919037B2256412BE43C0539007 * L_2 = __this->get_myMoveType_10();
		List_1_t9AB83D40B076F08D0427CF43147F06027916CCD9 * L_3 = __this->get_targets_12();
		L_2->set_targets_3(L_3);
		// myRotateType = new LookWhereGoing();
		LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * L_4 = (LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 *)il2cpp_codegen_object_new(LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0_il2cpp_TypeInfo_var);
		LookWhereGoing__ctor_m225781ABC6447E4CC44715861AF5635DA2DA5115(L_4, /*hidden argument*/NULL);
		__this->set_myRotateType_11(L_4);
		// myRotateType.character = this;
		LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * L_5 = __this->get_myRotateType_11();
		((Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)L_5)->set_character_1(__this);
		// myRotateType.target = myTarget;
		LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * L_6 = __this->get_myRotateType_11();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_myTarget_8();
		((Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)L_6)->set_target_2(L_7);
		// }
		return;
	}
}
// System.Void Separator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Separator_Update_m4461E15F2F719F23952C0F03079613FDCD687777 (Separator_t11F00E3211A0E086332FF3C1396EF51C5268C3CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// steeringUpdate = new SteeringOutput();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_0 = (SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D *)il2cpp_codegen_object_new(SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		SteeringOutput__ctor_m324DFBCCE92C73E1BEC5AB73096A0762BBFB7F73(L_0, /*hidden argument*/NULL);
		((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->set_steeringUpdate_9(L_0);
		// steeringUpdate.linear = myMoveType.getSteering().linear;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_1 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_steeringUpdate_9();
		Separation_tB627F4D516766D919037B2256412BE43C0539007 * L_2 = __this->get_myMoveType_10();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_3;
		L_3 = VirtFuncInvoker0< SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * >::Invoke(4 /* SteeringOutput SteeringBehavior::getSteering() */, L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = L_3->get_linear_0();
		L_1->set_linear_0(L_4);
		// steeringUpdate.angular = myRotateType.getSteering().angular;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_5 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_steeringUpdate_9();
		LookWhereGoing_t78E147AD6B4A38210B0566241BDC8C423F53E8D0 * L_6 = __this->get_myRotateType_11();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_7;
		L_7 = VirtFuncInvoker0< SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * >::Invoke(4 /* SteeringOutput SteeringBehavior::getSteering() */, L_6);
		float L_8 = L_7->get_angular_1();
		L_5->set_angular_1(L_8);
		// base.Update();
		Kinematic_Update_m90DEAE2534DEF1E85A2B0289FBAAB1A25D476093(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Separator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Separator__ctor_mDCDA0DA654FBA9EB56DB01ADF9FFA257ECF4D18A (Separator_t11F00E3211A0E086332FF3C1396EF51C5268C3CC * __this, const RuntimeMethod* method)
{
	{
		Kinematic__ctor_m067A5346E3475380B0E1662CFA2AA3D9495AF89D(__this, /*hidden argument*/NULL);
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
// SteeringOutput SpeedMatch::getSteering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * SpeedMatch_getSteering_m13CAD2FFEE7069358AF9B2F5C7917E5F75CBD7E3 (SpeedMatch_tBE04550772E96FFF0DB8C832949CEC09A9346294 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * V_0 = NULL;
	float V_1 = 0.0f;
	{
		// SteeringOutput result = new SteeringOutput();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_0 = (SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D *)il2cpp_codegen_object_new(SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		SteeringOutput__ctor_m324DFBCCE92C73E1BEC5AB73096A0762BBFB7F73(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// float speedDiff = targetSpeed - character.linearVelocity.magnitude;
		float L_1 = __this->get_targetSpeed_2();
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_2 = __this->get_character_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = L_2->get_address_of_linearVelocity_4();
		float L_4;
		L_4 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_3, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_4));
		// if (speedDiff > maxDiff)
		float L_5 = V_1;
		float L_6 = __this->get_maxDiff_3();
		if ((!(((float)L_5) > ((float)L_6))))
		{
			goto IL_004a;
		}
	}
	{
		// result.linear = character.linearVelocity.normalized * maxAccel;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_7 = V_0;
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_8 = __this->get_character_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = L_8->get_address_of_linearVelocity_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_9, /*hidden argument*/NULL);
		float L_11 = __this->get_maxAccel_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_10, L_11, /*hidden argument*/NULL);
		L_7->set_linear_0(L_12);
		// }
		goto IL_0083;
	}

IL_004a:
	{
		// result.linear = character.linearVelocity.normalized * maxAccel * (speedDiff - maxDiff) / maxDiff;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_13 = V_0;
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_14 = __this->get_character_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_15 = L_14->get_address_of_linearVelocity_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_15, /*hidden argument*/NULL);
		float L_17 = __this->get_maxAccel_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_16, L_17, /*hidden argument*/NULL);
		float L_19 = V_1;
		float L_20 = __this->get_maxDiff_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_18, ((float)il2cpp_codegen_subtract((float)L_19, (float)L_20)), /*hidden argument*/NULL);
		float L_22 = __this->get_maxDiff_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_21, L_22, /*hidden argument*/NULL);
		L_13->set_linear_0(L_23);
	}

IL_0083:
	{
		// return result;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_24 = V_0;
		return L_24;
	}
}
// System.Void SpeedMatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeedMatch__ctor_m63038E9952B92E684011CB84BBA8E0FE07CD1489 (SpeedMatch_tBE04550772E96FFF0DB8C832949CEC09A9346294 * __this, const RuntimeMethod* method)
{
	{
		// public float maxDiff = 1f;
		__this->set_maxDiff_3((1.0f));
		// public float maxAccel = 1f;
		__this->set_maxAccel_4((1.0f));
		SteeringBehavior__ctor_m36F8FE66341628CC66FCE103529662A0B3B4B423(__this, /*hidden argument*/NULL);
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
// System.Void SteeringBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteeringBehavior__ctor_m36F8FE66341628CC66FCE103529662A0B3B4B423 (SteeringBehavior_tD11B2BE60A03E854DD8723E18A26FA4E15DD68C1 * __this, const RuntimeMethod* method)
{
	{
		// public float weight = 1f;
		__this->set_weight_0((1.0f));
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
// System.Void SteeringOutput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteeringOutput__ctor_m324DFBCCE92C73E1BEC5AB73096A0762BBFB7F73 (SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * __this, const RuntimeMethod* method)
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
// System.Void Tank::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank_Start_m02C932F00AB94C7B9D308756E2B547815D869188 (Tank_tCBDDA0BA03D5014BEAFC111D578FFBD3BE1B9FC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Firing_t8D2D227424CC1247D6EA7389C9D9D1FC14556E31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myMoveType = new Arrive();
		Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E * L_0 = (Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E *)il2cpp_codegen_object_new(Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E_il2cpp_TypeInfo_var);
		Arrive__ctor_mE2408E1F2AFCC6A41C2F3A3A4F7E7C017C85E3E1(L_0, /*hidden argument*/NULL);
		__this->set_myMoveType_10(L_0);
		// myMoveType.character = this;
		Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E * L_1 = __this->get_myMoveType_10();
		L_1->set_character_1(__this);
		// myMoveType.target = tankMoveTarget;
		Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E * L_2 = __this->get_myMoveType_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_tankMoveTarget_15();
		L_2->set_target_2(L_3);
		// myBallisticType = new Firing();
		Firing_t8D2D227424CC1247D6EA7389C9D9D1FC14556E31 * L_4 = (Firing_t8D2D227424CC1247D6EA7389C9D9D1FC14556E31 *)il2cpp_codegen_object_new(Firing_t8D2D227424CC1247D6EA7389C9D9D1FC14556E31_il2cpp_TypeInfo_var);
		Firing__ctor_m5A699EE640BF729C756D69FB69FFD2D706B4474F(L_4, /*hidden argument*/NULL);
		__this->set_myBallisticType_11(L_4);
		// myBallisticType.character = this;
		Firing_t8D2D227424CC1247D6EA7389C9D9D1FC14556E31 * L_5 = __this->get_myBallisticType_11();
		L_5->set_character_1(__this);
		// myBallisticType.target = myTarget;
		Firing_t8D2D227424CC1247D6EA7389C9D9D1FC14556E31 * L_6 = __this->get_myBallisticType_11();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_myTarget_8();
		L_6->set_target_2(L_7);
		// myBallisticType.firingSpeed = firingSpeed;
		Firing_t8D2D227424CC1247D6EA7389C9D9D1FC14556E31 * L_8 = __this->get_myBallisticType_11();
		float L_9 = __this->get_firingSpeed_12();
		L_8->set_firingSpeed_3(L_9);
		// myBallisticType.selectSoonest = selectSoonest;
		Firing_t8D2D227424CC1247D6EA7389C9D9D1FC14556E31 * L_10 = __this->get_myBallisticType_11();
		bool L_11 = __this->get_selectSoonest_16();
		L_10->set_selectSoonest_4(L_11);
		// }
		return;
	}
}
// System.Void Tank::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank_Update_m53C42FE9662E1ED973F480F2070DD344C953CA3C (Tank_tCBDDA0BA03D5014BEAFC111D578FFBD3BE1B9FC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisKinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36_mF0A40EAF77D81C72D6066890A5C9BFA7C4174143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB842E9AFAF28E511E90B235D913472217D5DA741);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD014289E1A595F86C38BE358856EF13678F46D0A);
		s_Il2CppMethodInitialized = true;
	}
	Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * V_0 = NULL;
	{
		// fireTimer -= Time.deltaTime;
		float L_0 = __this->get_fireTimer_19();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_fireTimer_19(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// steeringUpdate = new SteeringOutput();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_2 = (SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D *)il2cpp_codegen_object_new(SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		SteeringOutput__ctor_m324DFBCCE92C73E1BEC5AB73096A0762BBFB7F73(L_2, /*hidden argument*/NULL);
		((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->set_steeringUpdate_9(L_2);
		// steeringUpdate.linear = myMoveType.getSteering().linear;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_3 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_steeringUpdate_9();
		Arrive_t1B885A9AA9DC128B49D8763948828FD06C15DA5E * L_4 = __this->get_myMoveType_10();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_5;
		L_5 = VirtFuncInvoker0< SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * >::Invoke(4 /* SteeringOutput SteeringBehavior::getSteering() */, L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = L_5->get_linear_0();
		L_3->set_linear_0(L_6);
		// if (fireTimer <= 0)
		float L_7 = __this->get_fireTimer_19();
		if ((!(((float)L_7) <= ((float)(0.0f)))))
		{
			goto IL_0121;
		}
	}
	{
		// Debug.Log("Attempting to fire!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralB842E9AFAF28E511E90B235D913472217D5DA741, /*hidden argument*/NULL);
		// Trajectory firingTrajectory = myBallisticType.getTrajectory();
		Firing_t8D2D227424CC1247D6EA7389C9D9D1FC14556E31 * L_8 = __this->get_myBallisticType_11();
		Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * L_9;
		L_9 = VirtFuncInvoker0< Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * >::Invoke(4 /* Trajectory BallisticBehavior::getTrajectory() */, L_8);
		V_0 = L_9;
		// if (firingTrajectory != null)
		Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * L_10 = V_0;
		if (!L_10)
		{
			goto IL_0106;
		}
	}
	{
		// GetComponent<Renderer>().material = successMat;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_11;
		L_11 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = __this->get_successMat_17();
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_11, L_12, /*hidden argument*/NULL);
		// transform.eulerAngles = new Vector3(Mathf.Asin(-firingTrajectory.launchVec.normalized.y) * Mathf.Rad2Deg, Mathf.Atan2(firingTrajectory.launchVec.x, firingTrajectory.launchVec.z) * Mathf.Rad2Deg, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * L_14 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_15 = L_14->get_address_of_launchVec_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_y_3();
		float L_18;
		L_18 = asinf(((-L_17)));
		Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * L_19 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_20 = L_19->get_address_of_launchVec_1();
		float L_21 = L_20->get_x_2();
		Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * L_22 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_23 = L_22->get_address_of_launchVec_1();
		float L_24 = L_23->get_z_4();
		float L_25;
		L_25 = atan2f(L_21, L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_26), ((float)il2cpp_codegen_multiply((float)L_18, (float)(57.2957802f))), ((float)il2cpp_codegen_multiply((float)L_25, (float)(57.2957802f))), (0.0f), /*hidden argument*/NULL);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_13, L_26, /*hidden argument*/NULL);
		// Kinematic projectile = Instantiate(projectilePrefab, transform.position, Quaternion.Euler(transform.eulerAngles));
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_27 = __this->get_projectilePrefab_14();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_28, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_30, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_32;
		L_32 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_33;
		L_33 = Object_Instantiate_TisKinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36_mF0A40EAF77D81C72D6066890A5C9BFA7C4174143(L_27, L_29, L_32, /*hidden argument*/Object_Instantiate_TisKinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36_mF0A40EAF77D81C72D6066890A5C9BFA7C4174143_RuntimeMethod_var);
		// projectile.linearVelocity = firingTrajectory.launchVec;
		Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * L_34 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = L_34->get_launchVec_1();
		L_33->set_linearVelocity_4(L_35);
		// fireTimer = reloadTime;
		float L_36 = __this->get_reloadTime_13();
		__this->set_fireTimer_19(L_36);
		// }
		goto IL_0121;
	}

IL_0106:
	{
		// GetComponent<Renderer>().material = failMat;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_37;
		L_37 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_38 = __this->get_failMat_18();
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_37, L_38, /*hidden argument*/NULL);
		// Debug.Log("Null trajectory");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralD014289E1A595F86C38BE358856EF13678F46D0A, /*hidden argument*/NULL);
	}

IL_0121:
	{
		// base.Update();
		Kinematic_Update_m90DEAE2534DEF1E85A2B0289FBAAB1A25D476093(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tank::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank__ctor_m89F58B25F56F07B1121287DECA54BA6D90011FB7 (Tank_tCBDDA0BA03D5014BEAFC111D578FFBD3BE1B9FC4 * __this, const RuntimeMethod* method)
{
	{
		// public float firingSpeed = 1f;
		__this->set_firingSpeed_12((1.0f));
		// public float reloadTime = 3f;
		__this->set_reloadTime_13((3.0f));
		// public bool selectSoonest = true;
		__this->set_selectSoonest_16((bool)1);
		Kinematic__ctor_m067A5346E3475380B0E1662CFA2AA3D9495AF89D(__this, /*hidden argument*/NULL);
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
// System.Void Trajectory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trajectory__ctor_m01512EB91E0EFB2609A8141B73EB05BEC0453DE9 (Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1FDEFA58DE0ADEF431741F5D3CA92BFFBF72EA29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB46962C3860A5E5BF5B9B2DB6694B803148D6C80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5077A09B97AEA8F3F00983A9B3A5FDEF8A5B66A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7059AC9A2D33D3DB433E18D5A6E36E07E45F717E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Trajectory()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// startPoint = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_startPoint_0(L_0);
		// launchVec = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_launchVec_1(L_1);
		// obstacles = new List<Impactable>();
		List_1_t5077A09B97AEA8F3F00983A9B3A5FDEF8A5B66A6 * L_2 = (List_1_t5077A09B97AEA8F3F00983A9B3A5FDEF8A5B66A6 *)il2cpp_codegen_object_new(List_1_t5077A09B97AEA8F3F00983A9B3A5FDEF8A5B66A6_il2cpp_TypeInfo_var);
		List_1__ctor_mB46962C3860A5E5BF5B9B2DB6694B803148D6C80(L_2, /*hidden argument*/List_1__ctor_mB46962C3860A5E5BF5B9B2DB6694B803148D6C80_RuntimeMethod_var);
		__this->set_obstacles_2(L_2);
		// impacts = new List<Impact>();
		List_1_t7059AC9A2D33D3DB433E18D5A6E36E07E45F717E * L_3 = (List_1_t7059AC9A2D33D3DB433E18D5A6E36E07E45F717E *)il2cpp_codegen_object_new(List_1_t7059AC9A2D33D3DB433E18D5A6E36E07E45F717E_il2cpp_TypeInfo_var);
		List_1__ctor_m1FDEFA58DE0ADEF431741F5D3CA92BFFBF72EA29(L_3, /*hidden argument*/List_1__ctor_m1FDEFA58DE0ADEF431741F5D3CA92BFFBF72EA29_RuntimeMethod_var);
		__this->set_impacts_3(L_3);
		// impactTime = -1f;
		__this->set_impactTime_4((-1.0f));
		// }
		return;
	}
}
// System.Void Trajectory::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trajectory__ctor_mCD37A202D60D3DC47A0EBD6EB135309EFD20DDDC (Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___launch1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___impact2, float ___impactTime3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF1EA730C9F95499D7CB4C1EA6D4F627056DD1391_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1FDEFA58DE0ADEF431741F5D3CA92BFFBF72EA29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB46962C3860A5E5BF5B9B2DB6694B803148D6C80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5077A09B97AEA8F3F00983A9B3A5FDEF8A5B66A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7059AC9A2D33D3DB433E18D5A6E36E07E45F717E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Trajectory(Vector3 start, Vector3 launch, Vector3 impact, float impactTime)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// startPoint = start;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___start0;
		__this->set_startPoint_0(L_0);
		// launchVec = launch;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___launch1;
		__this->set_launchVec_1(L_1);
		// obstacles = new List<Impactable>();
		List_1_t5077A09B97AEA8F3F00983A9B3A5FDEF8A5B66A6 * L_2 = (List_1_t5077A09B97AEA8F3F00983A9B3A5FDEF8A5B66A6 *)il2cpp_codegen_object_new(List_1_t5077A09B97AEA8F3F00983A9B3A5FDEF8A5B66A6_il2cpp_TypeInfo_var);
		List_1__ctor_mB46962C3860A5E5BF5B9B2DB6694B803148D6C80(L_2, /*hidden argument*/List_1__ctor_mB46962C3860A5E5BF5B9B2DB6694B803148D6C80_RuntimeMethod_var);
		__this->set_obstacles_2(L_2);
		// impacts = new List<Impact>();
		List_1_t7059AC9A2D33D3DB433E18D5A6E36E07E45F717E * L_3 = (List_1_t7059AC9A2D33D3DB433E18D5A6E36E07E45F717E *)il2cpp_codegen_object_new(List_1_t7059AC9A2D33D3DB433E18D5A6E36E07E45F717E_il2cpp_TypeInfo_var);
		List_1__ctor_m1FDEFA58DE0ADEF431741F5D3CA92BFFBF72EA29(L_3, /*hidden argument*/List_1__ctor_m1FDEFA58DE0ADEF431741F5D3CA92BFFBF72EA29_RuntimeMethod_var);
		__this->set_impacts_3(L_3);
		// impacts.Add(new Impact(impact));
		List_1_t7059AC9A2D33D3DB433E18D5A6E36E07E45F717E * L_4 = __this->get_impacts_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___impact2;
		Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8 * L_6 = (Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8 *)il2cpp_codegen_object_new(Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8_il2cpp_TypeInfo_var);
		Impact__ctor_mBFE61EC188002BAA1A9D0A58A653FB1B735CBA03(L_6, L_5, /*hidden argument*/NULL);
		List_1_Add_mF1EA730C9F95499D7CB4C1EA6D4F627056DD1391(L_4, L_6, /*hidden argument*/List_1_Add_mF1EA730C9F95499D7CB4C1EA6D4F627056DD1391_RuntimeMethod_var);
		// this.impactTime = impactTime;
		float L_7 = ___impactTime3;
		__this->set_impactTime_4(L_7);
		// }
		return;
	}
}
// System.Void Trajectory::calculate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trajectory_calculate_mF8C8B6D51F4D5EA859A6818BE56DA265D9733229 (Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * __this, const RuntimeMethod* method)
{
	{
		// throw new NotImplementedException();
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Trajectory_calculate_mF8C8B6D51F4D5EA859A6818BE56DA265D9733229_RuntimeMethod_var)));
	}
}
// System.Collections.Generic.List`1<Trajectory> Trajectory::calculateFiringSolutions(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720 * Trajectory_calculateFiringSolutions_mD82A56FD483B05C46DBCD8E91D7BDD6F83A68EBC (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, float ___exitSpd2, List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___obstacles3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE7C35E8597C85E4CB84DAAC613333CD4DD149384_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8EBD2B88387E6D883B93A48D53F4D9AED94D5B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720 * V_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * V_10 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * V_12 = NULL;
	{
		// List<Trajectory> results = new List<Trajectory>();
		List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720 * L_0 = (List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720 *)il2cpp_codegen_object_new(List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720_il2cpp_TypeInfo_var);
		List_1__ctor_m8EBD2B88387E6D883B93A48D53F4D9AED94D5B0F(L_0, /*hidden argument*/List_1__ctor_m8EBD2B88387E6D883B93A48D53F4D9AED94D5B0F_RuntimeMethod_var);
		V_0 = L_0;
		// Vector3 delta = target - start;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___target1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___start0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// float a = Physics.gravity.sqrMagnitude;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Physics_get_gravity_m58D5D94276B1E7A04E9F7108EEAAB7AB786BA532(/*hidden argument*/NULL);
		V_8 = L_4;
		float L_5;
		L_5 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_8), /*hidden argument*/NULL);
		V_2 = L_5;
		// float b = -4 * (Vector3.Dot(Physics.gravity, delta) + exitSpd * exitSpd);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Physics_get_gravity_m58D5D94276B1E7A04E9F7108EEAAB7AB786BA532(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_1;
		float L_8;
		L_8 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_6, L_7, /*hidden argument*/NULL);
		float L_9 = ___exitSpd2;
		float L_10 = ___exitSpd2;
		V_3 = ((float)il2cpp_codegen_multiply((float)(-4.0f), (float)((float)il2cpp_codegen_add((float)L_8, (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_10))))));
		// float c = 4 * delta.sqrMagnitude;
		float L_11;
		L_11 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		V_4 = ((float)il2cpp_codegen_multiply((float)(4.0f), (float)L_11));
		// float b2minus4ac = b * b - 4 * a * c;
		float L_12 = V_3;
		float L_13 = V_3;
		float L_14 = V_2;
		float L_15 = V_4;
		V_5 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_12, (float)L_13)), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(4.0f), (float)L_14)), (float)L_15))));
		// if (b2minus4ac < 0)
		float L_16 = V_5;
		if ((!(((float)L_16) < ((float)(0.0f)))))
		{
			goto IL_005d;
		}
	}
	{
		// return results;
		List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720 * L_17 = V_0;
		return L_17;
	}

IL_005d:
	{
		// float time0 = Mathf.Sqrt((-b + Mathf.Sqrt(b2minus4ac)) / (2 * a));
		float L_18 = V_3;
		float L_19 = V_5;
		float L_20;
		L_20 = sqrtf(L_19);
		float L_21 = V_2;
		float L_22;
		L_22 = sqrtf(((float)((float)((float)il2cpp_codegen_add((float)((-L_18)), (float)L_20))/(float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_21)))));
		V_6 = L_22;
		// float time1 = Mathf.Sqrt((-b - Mathf.Sqrt(b2minus4ac)) / (2 * a));
		float L_23 = V_3;
		float L_24 = V_5;
		float L_25;
		L_25 = sqrtf(L_24);
		float L_26 = V_2;
		float L_27;
		L_27 = sqrtf(((float)((float)((float)il2cpp_codegen_subtract((float)((-L_23)), (float)L_25))/(float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_26)))));
		V_7 = L_27;
		// if (time0 >= 0)
		float L_28 = V_6;
		if ((!(((float)L_28) >= ((float)(0.0f)))))
		{
			goto IL_00f0;
		}
	}
	{
		// Vector3 launch = (2 * delta - Physics.gravity * time0 * time0) / (2 * exitSpd * time0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline((2.0f), L_29, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Physics_get_gravity_m58D5D94276B1E7A04E9F7108EEAAB7AB786BA532(/*hidden argument*/NULL);
		float L_32 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_31, L_32, /*hidden argument*/NULL);
		float L_34 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_33, L_34, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_30, L_35, /*hidden argument*/NULL);
		float L_37 = ___exitSpd2;
		float L_38 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_36, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_37)), (float)L_38)), /*hidden argument*/NULL);
		V_9 = L_39;
		// launch = launch.normalized * exitSpd;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_9), /*hidden argument*/NULL);
		float L_41 = ___exitSpd2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_40, L_41, /*hidden argument*/NULL);
		V_9 = L_42;
		// Trajectory traj0 = new Trajectory(start, launch, target, time0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = ___start0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44 = V_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = ___target1;
		float L_46 = V_6;
		Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * L_47 = (Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C *)il2cpp_codegen_object_new(Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C_il2cpp_TypeInfo_var);
		Trajectory__ctor_mCD37A202D60D3DC47A0EBD6EB135309EFD20DDDC(L_47, L_43, L_44, L_45, L_46, /*hidden argument*/NULL);
		V_10 = L_47;
		// results.Add(traj0);
		List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720 * L_48 = V_0;
		Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * L_49 = V_10;
		List_1_Add_mE7C35E8597C85E4CB84DAAC613333CD4DD149384(L_48, L_49, /*hidden argument*/List_1_Add_mE7C35E8597C85E4CB84DAAC613333CD4DD149384_RuntimeMethod_var);
	}

IL_00f0:
	{
		// if (time1 >= 0)
		float L_50 = V_7;
		if ((!(((float)L_50) >= ((float)(0.0f)))))
		{
			goto IL_0151;
		}
	}
	{
		// Vector3 launch = (2 * delta - Physics.gravity * time1 * time1) / (2 * exitSpd * time1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline((2.0f), L_51, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Physics_get_gravity_m58D5D94276B1E7A04E9F7108EEAAB7AB786BA532(/*hidden argument*/NULL);
		float L_54 = V_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_53, L_54, /*hidden argument*/NULL);
		float L_56 = V_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_55, L_56, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
		L_58 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_52, L_57, /*hidden argument*/NULL);
		float L_59 = ___exitSpd2;
		float L_60 = V_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_58, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_59)), (float)L_60)), /*hidden argument*/NULL);
		V_11 = L_61;
		// launch = launch.normalized * exitSpd;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
		L_62 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_11), /*hidden argument*/NULL);
		float L_63 = ___exitSpd2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64;
		L_64 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_62, L_63, /*hidden argument*/NULL);
		V_11 = L_64;
		// Trajectory traj1 = new Trajectory(start, launch, target, time1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65 = ___start0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66 = V_11;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67 = ___target1;
		float L_68 = V_7;
		Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * L_69 = (Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C *)il2cpp_codegen_object_new(Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C_il2cpp_TypeInfo_var);
		Trajectory__ctor_mCD37A202D60D3DC47A0EBD6EB135309EFD20DDDC(L_69, L_65, L_66, L_67, L_68, /*hidden argument*/NULL);
		V_12 = L_69;
		// results.Add(traj1);
		List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720 * L_70 = V_0;
		Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * L_71 = V_12;
		List_1_Add_mE7C35E8597C85E4CB84DAAC613333CD4DD149384(L_70, L_71, /*hidden argument*/List_1_Add_mE7C35E8597C85E4CB84DAAC613333CD4DD149384_RuntimeMethod_var);
	}

IL_0151:
	{
		// return results;
		List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720 * L_72 = V_0;
		return L_72;
	}
}
// System.Collections.Generic.List`1<Trajectory> Trajectory::calculateFiringSolutions(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Collections.Generic.List`1<UnityEngine.GameObject>,System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCC24286D5C16C92DBD3AED991D54A434EFE48720 * Trajectory_calculateFiringSolutions_m39DAD3638EE2E623D2CF88182DFFB49734A53345 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, float ___exitSpd2, List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___noBounceObstacles3, List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___bounceObstacles4, const RuntimeMethod* method)
{
	{
		// throw new NotImplementedException();
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Trajectory_calculateFiringSolutions_m39DAD3638EE2E623D2CF88182DFFB49734A53345_RuntimeMethod_var)));
	}
}
// Impact Trajectory::findFinalImpact(Trajectory,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8 * Trajectory_findFinalImpact_m6C481DCFCBFAEC8BFF48EDD7828EADD6D93AE149 (Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * __this, Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * ___trajectory0, int32_t ___maxIterations1, int32_t ___rayCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF1EA730C9F95499D7CB4C1EA6D4F627056DD1391_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8 * V_0 = NULL;
	Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * V_1 = NULL;
	int32_t V_2 = 0;
	Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8 * V_3 = NULL;
	{
		// Impact lastImpact = null;
		V_0 = (Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8 *)NULL;
		// Trajectory lastTrajectory = trajectory;
		Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * L_0 = ___trajectory0;
		V_1 = L_0;
		// for (int idx = 0; idx < maxIterations; idx++)
		V_2 = 0;
		goto IL_004a;
	}

IL_0008:
	{
		// Impact impact = findFirstIntersection(lastTrajectory, rayCount);
		Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * L_1 = V_1;
		int32_t L_2 = ___rayCount2;
		Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8 * L_3;
		L_3 = Trajectory_findFirstIntersection_m0BADA34A27A95AFD08ACAC434D97AEE430441169(__this, L_1, L_2, /*hidden argument*/NULL);
		V_3 = L_3;
		// if (impact == null)
		Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8 * L_4 = V_3;
		if (L_4)
		{
			goto IL_0016;
		}
	}
	{
		// return lastImpact;
		Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8 * L_5 = V_0;
		return L_5;
	}

IL_0016:
	{
		// if (!impact.bounce)
		Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8 * L_6 = V_3;
		bool L_7 = L_6->get_bounce_3();
		if (L_7)
		{
			goto IL_0020;
		}
	}
	{
		// return impact;
		Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8 * L_8 = V_3;
		return L_8;
	}

IL_0020:
	{
		// lastImpact = impact;
		Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8 * L_9 = V_3;
		V_0 = L_9;
		// lastTrajectory.launchVec = lastImpact.bounceVec;
		Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * L_10 = V_1;
		Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8 * L_11 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = L_11->get_bounceVec_4();
		L_10->set_launchVec_1(L_12);
		// lastTrajectory.startPoint = lastImpact.impactPoint;
		Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * L_13 = V_1;
		Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8 * L_14 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = L_14->get_impactPoint_1();
		L_13->set_startPoint_0(L_15);
		// lastTrajectory.impacts.Add(lastImpact);
		Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * L_16 = V_1;
		List_1_t7059AC9A2D33D3DB433E18D5A6E36E07E45F717E * L_17 = L_16->get_impacts_3();
		Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8 * L_18 = V_0;
		List_1_Add_mF1EA730C9F95499D7CB4C1EA6D4F627056DD1391(L_17, L_18, /*hidden argument*/List_1_Add_mF1EA730C9F95499D7CB4C1EA6D4F627056DD1391_RuntimeMethod_var);
		// for (int idx = 0; idx < maxIterations; idx++)
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_004a:
	{
		// for (int idx = 0; idx < maxIterations; idx++)
		int32_t L_20 = V_2;
		int32_t L_21 = ___maxIterations1;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0008;
		}
	}
	{
		// return lastImpact;
		Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8 * L_22 = V_0;
		return L_22;
	}
}
// Impact Trajectory::findFirstIntersection(Trajectory,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Impact_tF67191B6A221D9D9FC92B9904729B085B23DB1E8 * Trajectory_findFirstIntersection_m0BADA34A27A95AFD08ACAC434D97AEE430441169 (Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * __this, Trajectory_t0E7E8EA158D04F8A889EA94A11230740880CDB6C * ___traj0, int32_t ___rayCount1, const RuntimeMethod* method)
{
	{
		// throw new NotImplementedException();
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Trajectory_findFirstIntersection_m0BADA34A27A95AFD08ACAC434D97AEE430441169_RuntimeMethod_var)));
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
// SteeringOutput UserControlled::getSteering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * UserControlled_getSteering_m6DFD7B5B7F81D23159A4C8976A456247D5E047BA (UserControlled_tBFDF8B501E956DB77DCFE541D286ACC17815E95E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * G_B2_0 = NULL;
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * G_B1_0 = NULL;
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * G_B4_0 = NULL;
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * G_B3_0 = NULL;
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * G_B6_0 = NULL;
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * G_B5_0 = NULL;
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * G_B8_0 = NULL;
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * G_B7_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B10_0 = NULL;
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * G_B10_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B9_0 = NULL;
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * G_B9_1 = NULL;
	float G_B11_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B11_1 = NULL;
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * G_B11_2 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B13_0 = NULL;
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * G_B13_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B12_0 = NULL;
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * G_B12_1 = NULL;
	float G_B14_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B14_1 = NULL;
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * G_B14_2 = NULL;
	{
		// SteeringOutput output = new SteeringOutput();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_0 = (SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D *)il2cpp_codegen_object_new(SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		SteeringOutput__ctor_m324DFBCCE92C73E1BEC5AB73096A0762BBFB7F73(L_0, /*hidden argument*/NULL);
		// Vector3 requestedMotion = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_0 = L_1;
		// int xReq = 0;
		V_1 = 0;
		// int zReq = 0;
		V_2 = 0;
		// if (Input.GetKey("w")) zReq += 1;
		bool L_2;
		L_2 = Input_GetKey_m77E2F3719EC63690632731872A691FF6A27C589C(_stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907, /*hidden argument*/NULL);
		G_B1_0 = L_0;
		if (!L_2)
		{
			G_B2_0 = L_0;
			goto IL_001f;
		}
	}
	{
		// if (Input.GetKey("w")) zReq += 1;
		int32_t L_3 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		G_B2_0 = G_B1_0;
	}

IL_001f:
	{
		// if (Input.GetKey("a")) xReq -= 1;
		bool L_4;
		L_4 = Input_GetKey_m77E2F3719EC63690632731872A691FF6A27C589C(_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78, /*hidden argument*/NULL);
		G_B3_0 = G_B2_0;
		if (!L_4)
		{
			G_B4_0 = G_B2_0;
			goto IL_002f;
		}
	}
	{
		// if (Input.GetKey("a")) xReq -= 1;
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
		G_B4_0 = G_B3_0;
	}

IL_002f:
	{
		// if (Input.GetKey("s")) zReq -= 1;
		bool L_6;
		L_6 = Input_GetKey_m77E2F3719EC63690632731872A691FF6A27C589C(_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465, /*hidden argument*/NULL);
		G_B5_0 = G_B4_0;
		if (!L_6)
		{
			G_B6_0 = G_B4_0;
			goto IL_003f;
		}
	}
	{
		// if (Input.GetKey("s")) zReq -= 1;
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1));
		G_B6_0 = G_B5_0;
	}

IL_003f:
	{
		// if (Input.GetKey("d")) xReq += 1;
		bool L_8;
		L_8 = Input_GetKey_m77E2F3719EC63690632731872A691FF6A27C589C(_stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03, /*hidden argument*/NULL);
		G_B7_0 = G_B6_0;
		if (!L_8)
		{
			G_B8_0 = G_B6_0;
			goto IL_004f;
		}
	}
	{
		// if (Input.GetKey("d")) xReq += 1;
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		G_B8_0 = G_B7_0;
	}

IL_004f:
	{
		// requestedMotion.z -= Vector3.Dot(character.linearVelocity, character.transform.forward);
		float* L_10 = (&V_0)->get_address_of_z_4();
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_13 = __this->get_character_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = L_13->get_linearVelocity_4();
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_15 = __this->get_character_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_16, /*hidden argument*/NULL);
		float L_18;
		L_18 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_14, L_17, /*hidden argument*/NULL);
		*((float*)L_11) = (float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_18));
		// requestedMotion.x -= Vector3.Dot(character.linearVelocity, character.transform.right);
		float* L_19 = (&V_0)->get_address_of_x_2();
		float* L_20 = L_19;
		float L_21 = *((float*)L_20);
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_22 = __this->get_character_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = L_22->get_linearVelocity_4();
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_24 = __this->get_character_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_25, /*hidden argument*/NULL);
		float L_27;
		L_27 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_23, L_26, /*hidden argument*/NULL);
		*((float*)L_20) = (float)((float)il2cpp_codegen_subtract((float)L_21, (float)L_27));
		// requestedMotion.Normalize();
		Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		// requestedMotion *= frictionPercent;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = V_0;
		float L_29 = __this->get_frictionPercent_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_28, L_29, /*hidden argument*/NULL);
		V_0 = L_30;
		// requestedMotion.x = xReq == 0 ? requestedMotion.x : xReq;
		int32_t L_31 = V_1;
		G_B9_0 = (&V_0);
		G_B9_1 = G_B8_0;
		if (!L_31)
		{
			G_B10_0 = (&V_0);
			G_B10_1 = G_B8_0;
			goto IL_00c2;
		}
	}
	{
		int32_t L_32 = V_1;
		G_B11_0 = ((float)((float)L_32));
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		goto IL_00c8;
	}

IL_00c2:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = V_0;
		float L_34 = L_33.get_x_2();
		G_B11_0 = L_34;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
	}

IL_00c8:
	{
		G_B11_1->set_x_2(G_B11_0);
		// requestedMotion.z = zReq == 0 ? requestedMotion.z : zReq;
		int32_t L_35 = V_2;
		G_B12_0 = (&V_0);
		G_B12_1 = G_B11_2;
		if (!L_35)
		{
			G_B13_0 = (&V_0);
			G_B13_1 = G_B11_2;
			goto IL_00d6;
		}
	}
	{
		int32_t L_36 = V_2;
		G_B14_0 = ((float)((float)L_36));
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		goto IL_00dc;
	}

IL_00d6:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = V_0;
		float L_38 = L_37.get_z_4();
		G_B14_0 = L_38;
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
	}

IL_00dc:
	{
		G_B14_1->set_z_4(G_B14_0);
		// output.linear += character.transform.forward * requestedMotion.z;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_39 = G_B14_2;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_40 = L_39;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = L_40->get_linear_0();
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_42 = __this->get_character_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_42, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_43, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = V_0;
		float L_46 = L_45.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_44, L_46, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_41, L_47, /*hidden argument*/NULL);
		L_40->set_linear_0(L_48);
		// output.linear += character.transform.right * requestedMotion.x;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_49 = L_39;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_50 = L_49;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51 = L_50->get_linear_0();
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_52 = __this->get_character_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53;
		L_53 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_52, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		L_54 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_53, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55 = V_0;
		float L_56 = L_55.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_54, L_56, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
		L_58 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_51, L_57, /*hidden argument*/NULL);
		L_50->set_linear_0(L_58);
		// output.linear *= maxAcceleration;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_59 = L_49;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_60 = L_59;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61 = L_60->get_linear_0();
		float L_62 = __this->get_maxAcceleration_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		L_63 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_61, L_62, /*hidden argument*/NULL);
		L_60->set_linear_0(L_63);
		// return output;
		return L_59;
	}
}
// System.Void UserControlled::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserControlled__ctor_mB3EC366AEC975B937DDA1D1E2DC83BA9CFF0092D (UserControlled_tBFDF8B501E956DB77DCFE541D286ACC17815E95E * __this, const RuntimeMethod* method)
{
	{
		// public float maxAcceleration = 1f;
		__this->set_maxAcceleration_2((1.0f));
		// public float frictionPercent = 1f;
		__this->set_frictionPercent_3((1.0f));
		SteeringBehavior__ctor_m36F8FE66341628CC66FCE103529662A0B3B4B423(__this, /*hidden argument*/NULL);
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
// SteeringOutput VelocityAlign::getSteering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * VelocityAlign_getSteering_m81AA8305E0C04C8F89E300C5D575FC143BCBC804 (VelocityAlign_tDDB9C6C2E3164B7761196EF435164BFF365B9509 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * V_0 = NULL;
	float V_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// SteeringOutput result = new SteeringOutput();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_0 = (SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D *)il2cpp_codegen_object_new(SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		SteeringOutput__ctor_m324DFBCCE92C73E1BEC5AB73096A0762BBFB7F73(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// Vector3 checkPlane = Vector3.Cross(target.linearVelocity, Vector3.up).normalized;
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_1 = __this->get_target_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = L_1->get_linearVelocity_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		// float direction = Mathf.Sign(Vector3.Dot(checkPlane, character.linearVelocity));
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_6 = __this->get_character_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = L_6->get_linearVelocity_4();
		float L_8;
		L_8 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_5, L_7, /*hidden argument*/NULL);
		float L_9;
		L_9 = Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// result.linear = -direction * Vector3.Cross(character.linearVelocity, Vector3.up).normalized;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_10 = V_0;
		float L_11 = V_1;
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_12 = __this->get_character_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = L_12->get_linearVelocity_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4(L_13, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(((-L_11)), L_16, /*hidden argument*/NULL);
		L_10->set_linear_0(L_17);
		// if ((target.linearVelocity - character.linearVelocity).magnitude > maxVelDiff)
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_18 = __this->get_target_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = L_18->get_linearVelocity_4();
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_20 = __this->get_character_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = L_20->get_linearVelocity_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_19, L_21, /*hidden argument*/NULL);
		V_2 = L_22;
		float L_23;
		L_23 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		float L_24 = __this->get_maxVelDiff_3();
		if ((!(((float)L_23) > ((float)L_24))))
		{
			goto IL_00a7;
		}
	}
	{
		// result.linear *= maxAccel;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_25 = V_0;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_26 = L_25;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = L_26->get_linear_0();
		float L_28 = __this->get_maxAccel_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_27, L_28, /*hidden argument*/NULL);
		L_26->set_linear_0(L_29);
		// }
		goto IL_00f0;
	}

IL_00a7:
	{
		// result.linear *= maxAccel * ((target.linearVelocity - character.linearVelocity).magnitude - maxVelDiff) / maxVelDiff;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_30 = V_0;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_31 = L_30;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = L_31->get_linear_0();
		float L_33 = __this->get_maxAccel_4();
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_34 = __this->get_target_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = L_34->get_linearVelocity_4();
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_36 = __this->get_character_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = L_36->get_linearVelocity_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_35, L_37, /*hidden argument*/NULL);
		V_2 = L_38;
		float L_39;
		L_39 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		float L_40 = __this->get_maxVelDiff_3();
		float L_41 = __this->get_maxVelDiff_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_32, ((float)((float)((float)il2cpp_codegen_multiply((float)L_33, (float)((float)il2cpp_codegen_subtract((float)L_39, (float)L_40))))/(float)L_41)), /*hidden argument*/NULL);
		L_31->set_linear_0(L_42);
	}

IL_00f0:
	{
		// return result;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_43 = V_0;
		return L_43;
	}
}
// System.Void VelocityAlign::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelocityAlign__ctor_m8739EF8AAE993566E6633ED0C462D56A163646E3 (VelocityAlign_tDDB9C6C2E3164B7761196EF435164BFF365B9509 * __this, const RuntimeMethod* method)
{
	{
		// public float maxVelDiff = 1f;
		__this->set_maxVelDiff_3((1.0f));
		// public float maxAccel = 1f;
		__this->set_maxAccel_4((1.0f));
		SteeringBehavior__ctor_m36F8FE66341628CC66FCE103529662A0B3B4B423(__this, /*hidden argument*/NULL);
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
// UnityEngine.Vector3 Wander::angleToVector(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Wander_angleToVector_m16ED3E89156D2770317249A948A78EE34524A501 (Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E * __this, float ___angle0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 result = new Vector3(Mathf.Tan(angle * Mathf.Deg2Rad), 0, 1);
		float L_0 = ___angle0;
		float L_1;
		L_1 = tanf(((float)il2cpp_codegen_multiply((float)L_0, (float)(0.0174532924f))));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), L_1, (0.0f), (1.0f), /*hidden argument*/NULL);
		// return result.normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 Wander::getTargetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Wander_getTargetPosition_mBB9EF6B4B2882982C99B71B77935C9134961D16E (Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// wanderOrientation += Random.Range(-1f, 1f) * wanderRate;
		float L_0 = __this->get_wanderOrientation_10();
		float L_1;
		L_1 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-1.0f), (1.0f), /*hidden argument*/NULL);
		float L_2 = __this->get_wanderRate_9();
		__this->set_wanderOrientation_10(((float)il2cpp_codegen_add((float)L_0, (float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)))));
		// float targetOrientation = wanderOrientation + character.transform.eulerAngles.y;
		float L_3 = __this->get_wanderOrientation_10();
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_4 = ((Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)__this)->get_character_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		V_0 = ((float)il2cpp_codegen_add((float)L_3, (float)L_7));
		// Vector3 targetPoint = character.transform.position + wanderOffset * angleToVector(character.transform.eulerAngles.y);
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_8 = ((Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)__this)->get_character_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		float L_11 = __this->get_wanderOffset_7();
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_12 = ((Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)__this)->get_character_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Wander_angleToVector_m16ED3E89156D2770317249A948A78EE34524A501(__this, L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(L_11, L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_10, L_17, /*hidden argument*/NULL);
		// targetPoint += wanderRadius * angleToVector(targetOrientation);
		float L_19 = __this->get_wanderRadius_8();
		float L_20 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Wander_angleToVector_m16ED3E89156D2770317249A948A78EE34524A501(__this, L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(L_19, L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_18, L_22, /*hidden argument*/NULL);
		// return targetPoint;
		return L_23;
	}
}
// UnityEngine.Vector3 Wander::getDesiredLinear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Wander_getDesiredLinear_m7320FE2255D9249EEEE4D102EF03B6C957C156AD (Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E * __this, const RuntimeMethod* method)
{
	{
		// return maxAcceleration * angleToVector(character.transform.eulerAngles.y);
		float L_0 = __this->get_maxAcceleration_11();
		Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 * L_1 = ((Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)__this)->get_character_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Wander_angleToVector_m16ED3E89156D2770317249A948A78EE34524A501(__this, L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(L_0, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void Wander::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wander__ctor_mFD179FAF9046380E9CA1BD6655C090BE1F89B06D (Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E * __this, const RuntimeMethod* method)
{
	{
		// public float wanderOffset = 5f;
		__this->set_wanderOffset_7((5.0f));
		// public float wanderRadius = 3f;
		__this->set_wanderRadius_8((3.0f));
		// public float wanderRate = 3f;
		__this->set_wanderRate_9((3.0f));
		// float maxAcceleration = 100f;
		__this->set_maxAcceleration_11((100.0f));
		Face__ctor_mC49672386D6E203C238682EEAEC5FA96C265C4C1(__this, /*hidden argument*/NULL);
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
// System.Void Wanderer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wanderer_Start_m4910168AB1C9021F68A03CB7E625A531D32CD3D6 (Wanderer_t62F7852567755EF90A5BAB82EE13473D66A94769 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mySteeringType = new Wander();
		Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E * L_0 = (Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E *)il2cpp_codegen_object_new(Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E_il2cpp_TypeInfo_var);
		Wander__ctor_mFD179FAF9046380E9CA1BD6655C090BE1F89B06D(L_0, /*hidden argument*/NULL);
		__this->set_mySteeringType_13(L_0);
		// mySteeringType.character = this;
		Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E * L_1 = __this->get_mySteeringType_13();
		((Align_tB53507C8AA11AC82EBE2A13F2096EC3246F5DB23 *)L_1)->set_character_1(__this);
		// if (wanderOffset != 0)
		float L_2 = __this->get_wanderOffset_10();
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_0035;
		}
	}
	{
		// mySteeringType.wanderOffset = wanderOffset;
		Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E * L_3 = __this->get_mySteeringType_13();
		float L_4 = __this->get_wanderOffset_10();
		L_3->set_wanderOffset_7(L_4);
	}

IL_0035:
	{
		// if (wanderRadius != 0)
		float L_5 = __this->get_wanderRadius_11();
		if ((((float)L_5) == ((float)(0.0f))))
		{
			goto IL_0053;
		}
	}
	{
		// mySteeringType.wanderRadius = wanderRadius;
		Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E * L_6 = __this->get_mySteeringType_13();
		float L_7 = __this->get_wanderRadius_11();
		L_6->set_wanderRadius_8(L_7);
	}

IL_0053:
	{
		// if (wanderRate != 0)
		float L_8 = __this->get_wanderRate_12();
		if ((((float)L_8) == ((float)(0.0f))))
		{
			goto IL_0071;
		}
	}
	{
		// mySteeringType.wanderRate = wanderRate;
		Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E * L_9 = __this->get_mySteeringType_13();
		float L_10 = __this->get_wanderRate_12();
		L_9->set_wanderRate_9(L_10);
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void Wanderer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wanderer_Update_m33DA4A41082184E2E4DE3C6C9D8BC3F63F042FF6 (Wanderer_t62F7852567755EF90A5BAB82EE13473D66A94769 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// steeringUpdate = new SteeringOutput();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_0 = (SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D *)il2cpp_codegen_object_new(SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D_il2cpp_TypeInfo_var);
		SteeringOutput__ctor_m324DFBCCE92C73E1BEC5AB73096A0762BBFB7F73(L_0, /*hidden argument*/NULL);
		((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->set_steeringUpdate_9(L_0);
		// steeringUpdate.linear = mySteeringType.getSteering().linear;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_1 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_steeringUpdate_9();
		Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E * L_2 = __this->get_mySteeringType_13();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_3;
		L_3 = VirtFuncInvoker0< SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * >::Invoke(4 /* SteeringOutput SteeringBehavior::getSteering() */, L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = L_3->get_linear_0();
		L_1->set_linear_0(L_4);
		// steeringUpdate.angular = mySteeringType.getSteering().angular;
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_5 = ((Kinematic_tEAB2C9B5A849897BA6795B25F095F90CF1A96F36 *)__this)->get_steeringUpdate_9();
		Wander_t9967CCB21B36E0E19C60BC5A374AF6682ECCC17E * L_6 = __this->get_mySteeringType_13();
		SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * L_7;
		L_7 = VirtFuncInvoker0< SteeringOutput_tB44FC0F6826F156C9B1D1D110D919ABBE235AF3D * >::Invoke(4 /* SteeringOutput SteeringBehavior::getSteering() */, L_6);
		float L_8 = L_7->get_angular_1();
		L_5->set_angular_1(L_8);
		// base.Update();
		Kinematic_Update_m90DEAE2534DEF1E85A2B0289FBAAB1A25D476093(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Wanderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wanderer__ctor_mB447BDD38367BB8736B29E069BEB4624EC3BB979 (Wanderer_t62F7852567755EF90A5BAB82EE13473D66A94769 * __this, const RuntimeMethod* method)
{
	{
		Kinematic__ctor_m067A5346E3475380B0E1662CFA2AA3D9495AF89D(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rhs1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___lhs0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___rhs1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___lhs0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___rhs1;
		float L_11 = L_10.get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a1;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a1;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a1;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
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
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
