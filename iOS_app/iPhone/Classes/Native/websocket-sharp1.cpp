#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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

// System.Action`1<System.Byte[]>
struct Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1;
// System.Action`1<System.Exception>
struct Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90;
// System.Action`1<System.Int64>
struct Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941;
// System.Action`1<WebSocketSharp.MessageEventArgs>
struct Action_1_t9FFF2C99547BF4BEEE6EA7FEE6CE4D9A4A9D18CA;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<WebSocketSharp.WebSocketFrame>
struct Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A;
// System.Action`2<WebSocketSharp.LogData,System.String>
struct Action_2_t0682CEF9255A52EA035ADA917C2AA2B61802AAA1;
// System.Action`4<System.Object,System.Object,System.Object,System.Object>
struct Action_4_tDB82015AB9EE6C7A4D051C5068F94F41BD15DE0D;
// System.Action`4<System.String,System.String,System.String,System.String>
struct Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// System.Collections.Generic.Dictionary`2<System.String,WebSocketSharp.Net.HttpHeaderInfo>
struct Dictionary_2_tC87522C9521797E5F22CC6DC4EF72962B0212DAB;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.EventHandler`1<WebSocketSharp.CloseEventArgs>
struct EventHandler_1_t1EAEE27B910BB728DDC5EF33FA0C074C1ACD529D;
// System.EventHandler`1<WebSocketSharp.ErrorEventArgs>
struct EventHandler_1_t12EFE365B70F31E5A6ECBBDAD96F3268D4756A0C;
// System.EventHandler`1<WebSocketSharp.MessageEventArgs>
struct EventHandler_1_t16A01CAC8C1A10B68548F9981B369B9D589AF319;
// System.Func`1<System.Action`4<System.String,System.String,System.String,System.String>>
struct Func_1_t14316C5A33A8948423D51DEFFBE784F219A6AFED;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274;
// System.Func`2<System.String,System.Boolean>
struct Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t9C161AD4E982EC01062A5E052662E7862A7874F4;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF;
// System.Collections.Generic.Queue`1<WebSocketSharp.MessageEventArgs>
struct Queue_1_tA450F0D43F900FB0A990F41DFEE3AB2B32A57726;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// WebSocketSharp.Net.AuthenticationChallenge
struct AuthenticationChallenge_t5FF9DBB25BC0999019BDF17BB5739CF77DEB09EE;
// WebSocketSharp.Net.ClientSslConfiguration
struct ClientSslConfiguration_tBCB6B850888E227EC57B1F43E44099AD1CFEE605;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_tF23DBB1EEBB59A50351284EDD83427036849ED4C;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.IO.EndOfStreamException
struct EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2A667D8777429024D8A3CB3D9AE29EA79FEA6176;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// WebSocketSharp.Logger
struct Logger_t7A4ECD749D0DFE4B32485415CDC994EC550D5E00;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MulticastDelegate
struct MulticastDelegate_t;
// WebSocketSharp.Net.NetworkCredential
struct NetworkCredential_tDE0DE626CD292A8D082923A238C030136F730E31;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// WebSocketSharp.PayloadData
struct PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6;
// System.Net.Sockets.TcpClient
struct TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// System.Type
struct Type_t;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// WebSocketSharp.Net.WebHeaderCollection
struct WebHeaderCollection_tF41E2CA053DC557D247EE73F96879A3C33120029;
// WebSocketSharp.WebSocket
struct WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307;
// WebSocketSharp.Net.WebSockets.WebSocketContext
struct WebSocketContext_t476CB6678AEFC9527A97C086FAE5F5DCE4912ED9;
// WebSocketSharp.WebSocketException
struct WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD;
// WebSocketSharp.WebSocketFrame
struct WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E;
// WebSocketSharp.Net.AuthenticationResponse/<>c
struct U3CU3Ec_tC81DDAE0EA2C737E510CBED988AA0E0A7EF615FA;
// WebSocketSharp.Ext/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t4130DD2D95DB1965A666132D6F3C94B3A451E720;
// WebSocketSharp.Ext/<>c__DisplayClass60_0
struct U3CU3Ec__DisplayClass60_0_tA8D9CEFFE6BB12069D7E66BB20448C65E3B4EA27;
// WebSocketSharp.Ext/<>c__DisplayClass61_0
struct U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0;
// WebSocketSharp.Ext/<>c__DisplayClass61_1
struct U3CU3Ec__DisplayClass61_1_t2E2BDA6F0A1C4DA3216DDB8C019054EC49793A6F;
// WebSocketSharp.Ext/<SplitHeaderValue>d__63
struct U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2;
// WebSocketSharp.HttpBase/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tDE35868D049FE26194335A467663112C5C9E7CF6;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22;
// WebSocketSharp.PayloadData/<GetEnumerator>d__25
struct U3CGetEnumeratorU3Ed__25_t0B69FC394A574EB944DEF07074233712072EE207;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// WebSocketSharp.Net.WebHeaderCollection/<>c__DisplayClass59_0
struct U3CU3Ec__DisplayClass59_0_tD1A29BA7CFFAD13D049EC46A64BF541638EDF902;
// WebSocketSharp.Net.WebHeaderCollection/<>c__DisplayClass70_0
struct U3CU3Ec__DisplayClass70_0_tEB5E1246CD18342EAD3FB5800AA33B4F583B8C2A;
// WebSocketSharp.WebSocket/<>c
struct U3CU3Ec_tB4B2EE9FCABB432F8B378A41C9FCE9D1B72118E4;
// WebSocketSharp.WebSocket/<>c__DisplayClass174_0
struct U3CU3Ec__DisplayClass174_0_tDA36AB493B9655C7CF24DDF7BC3831626019CAF4;
// WebSocketSharp.WebSocket/<>c__DisplayClass176_0
struct U3CU3Ec__DisplayClass176_0_tCE7478BC7F8B2D37B31BCB9ACF716C59380E8D05;
// WebSocketSharp.WebSocket/<>c__DisplayClass177_0
struct U3CU3Ec__DisplayClass177_0_tAD93D381510A325830B232EF9BA36BAFAFB98053;
// WebSocketSharp.WebSocket/<>c__DisplayClass201_0
struct U3CU3Ec__DisplayClass201_0_tB84E7B19BD4898704A571D9C457DB447890EF39D;
// WebSocketSharp.WebSocketFrame/<>c__DisplayClass67_0
struct U3CU3Ec__DisplayClass67_0_tDBF918B3DD900B583E012554C379933CDCFA4EA4;
// WebSocketSharp.WebSocketFrame/<>c__DisplayClass67_1
struct U3CU3Ec__DisplayClass67_1_tE33256331364734FD4FE28A9D9369FE6C5EB1665;
// WebSocketSharp.WebSocketFrame/<>c__DisplayClass71_0
struct U3CU3Ec__DisplayClass71_0_tDE27FBCA0A789AFD6E2B10E71A24F37864062306;
// WebSocketSharp.WebSocketFrame/<>c__DisplayClass73_0
struct U3CU3Ec__DisplayClass73_0_t1AA2F56924CE1580D7DDEE26E3B028E2200D7135;
// WebSocketSharp.WebSocketFrame/<>c__DisplayClass75_0
struct U3CU3Ec__DisplayClass75_0_t41FE8DC939EFCB7DF138812C55EBAA3BE1820A84;
// WebSocketSharp.WebSocketFrame/<>c__DisplayClass77_0
struct U3CU3Ec__DisplayClass77_0_tC80E02C07E3F3B1FA54221550F91A9441C063A9D;
// WebSocketSharp.WebSocketFrame/<>c__DisplayClass84_0
struct U3CU3Ec__DisplayClass84_0_tD733837EE92C060DC99B8407C379B65CA6886F53;
// WebSocketSharp.WebSocketFrame/<GetEnumerator>d__86
struct U3CGetEnumeratorU3Ed__86_t79B0B8C14D5261662A95C2C543C629419F30FA13;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Fin_tB63C3774106D399A2802141462FBCA7C2657157C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t14316C5A33A8948423D51DEFFBE784F219A6AFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mask_t11143EC89CC7AA99AD95ED61D44C938CFFBBF7F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Opcode_tDB68976A89F4FC63A2794ACEBBEAA6BDFD25EA01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rsv_tC7F1BD18C6301FBAA510C7755D1A45B8C950250D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumeratorU3Ed__86_t79B0B8C14D5261662A95C2C543C629419F30FA13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass61_1_t2E2BDA6F0A1C4DA3216DDB8C019054EC49793A6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass67_0_tDBF918B3DD900B583E012554C379933CDCFA4EA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass67_1_tE33256331364734FD4FE28A9D9369FE6C5EB1665_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass71_0_tDE27FBCA0A789AFD6E2B10E71A24F37864062306_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass73_0_t1AA2F56924CE1580D7DDEE26E3B028E2200D7135_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass75_0_t41FE8DC939EFCB7DF138812C55EBAA3BE1820A84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass77_0_tC80E02C07E3F3B1FA54221550F91A9441C063A9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass84_0_tD733837EE92C060DC99B8407C379B65CA6886F53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB4B2EE9FCABB432F8B378A41C9FCE9D1B72118E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC81DDAE0EA2C737E510CBED988AA0E0A7EF615FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05EE84C28CC3F94DE861A55800284B34115C4B7B;
IL2CPP_EXTERN_C String_t* _stringLiteral089CEAF9555BAF2295EDAC24268380608D558B60;
IL2CPP_EXTERN_C String_t* _stringLiteral111B078632ED414E9392C91DEE241B11C9EE8544;
IL2CPP_EXTERN_C String_t* _stringLiteral18DA0D513DFCDB70E04306E73D5557C9383A43C6;
IL2CPP_EXTERN_C String_t* _stringLiteral20EE8CAA934A2767F12EC9152C5C08F7305A69EC;
IL2CPP_EXTERN_C String_t* _stringLiteral3EA52E9C94B4B03D5535BC2F0558A4341C7C3AAD;
IL2CPP_EXTERN_C String_t* _stringLiteral44B2B5EE14208A9AC8F2D65D8D3FF9177FB04899;
IL2CPP_EXTERN_C String_t* _stringLiteral4A3B7207BD0FE0A9348B78B21B60F0C7FB4FB8D9;
IL2CPP_EXTERN_C String_t* _stringLiteral58C6CC9E50B09DC1CF08B0D07A6B288DF7DCCC9D;
IL2CPP_EXTERN_C String_t* _stringLiteral5C2ECDC0A2A9BA225C3FC6116423FBB91A59FB9B;
IL2CPP_EXTERN_C String_t* _stringLiteral62F57AD061852AB53745F2E49C914CC9E4340133;
IL2CPP_EXTERN_C String_t* _stringLiteral63488589AE4F4AB55FD0EB2F6715E45C4001A9E4;
IL2CPP_EXTERN_C String_t* _stringLiteral69ECBE0A20622E4AE8AA2D1B5E0CA9B07834AFF1;
IL2CPP_EXTERN_C String_t* _stringLiteral834606D724EFC1323366C1AF3A0A89F88DDC2719;
IL2CPP_EXTERN_C String_t* _stringLiteral872863942A17DEDCD0300265682277E23AC55930;
IL2CPP_EXTERN_C String_t* _stringLiteral95C5AE48F5DB42D8A787E2092C983C3F77EB5182;
IL2CPP_EXTERN_C String_t* _stringLiteralA545047F18B3FC58954677EB7F12A1370C59CE77;
IL2CPP_EXTERN_C String_t* _stringLiteralB7745A740C0A1346D860F22A7638EF5A029B56E5;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C2AD70263FE24D3526592776AEAD3BE74D4301;
IL2CPP_EXTERN_C String_t* _stringLiteralCABD34D7CF39245177859A0BC4C6FF68D6972CF6;
IL2CPP_EXTERN_C String_t* _stringLiteralD555DED7CEC14AAFD2389F4CA5DB31942645053F;
IL2CPP_EXTERN_C String_t* _stringLiteralD8A0DD08EB1B611313645CAC79DE1BA8FDDCDA7D;
IL2CPP_EXTERN_C String_t* _stringLiteralDB3DAB5A0D06D5129783FDA885A5E18016C1C1F1;
IL2CPP_EXTERN_C String_t* _stringLiteralE260AAE60E6C3A7EB3569B8302BE64F5713E45B4;
IL2CPP_EXTERN_C String_t* _stringLiteralFF31A798F77EB74F37FE8821EE17F12CDF6905B4;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m3FFF7B87CED68FC8794868F38BC431517ED024DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mFFDA4B6E4544D37A14A46ED010868613ED1F454C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m36C6688B253977218074ACFD83304E717384FDE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m5A5A47FA527D0CE5744363F201993BA8537A8B96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m7942990CFFB5E67155F4D9BB7E51F95194069243_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_4_Invoke_m0A313E142F4941B14FF053146BE0B71FA00D289B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_4__ctor_mE339CC347E4BB669DDFC6634B8A25A3DD9A4EA6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mD5F29E323D31B110F267B79CAF2E456F4C77ECE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ext_SubArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9D56E868860FD371A750EAA140BFE7EFAC275330_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_EndInvoke_m86A4760F9BEAFE6C019DD885A221AB48066F53D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_mD4E991296E96614D54847DA8E9C7F7C1C4525E6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_mFA7CE0231236E9D2D93B07782B199357061CE3FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_mE42F035B56D1C1B51E922AE8EA4261AA141DE6C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__25_System_Collections_IEnumerator_Reset_m77974595B20E743BDD08B4DAE0E7C7D564DB86FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__86_System_Collections_IEnumerator_Reset_mD6404B7FD3FAE9F43707F7006B86408A85BC51FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSplitHeaderValueU3Ed__63_System_Collections_IEnumerator_Reset_mF9AEBEF0F025C5B420C12ACA4B3E39AB5CD10EC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CreadHeadersU3Eb__0_m2115F63CE9CFBAE73F28A3840C1D0B3F345297F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass174_0_U3CstartReceivingU3Eb__1_mD9815C4B1C5A8385B22A01F14193DC70C8BA6E2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass174_0_U3CstartReceivingU3Eb__2_m6E38FD8C6E3371413962B6796C10CCDAF8B63A04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass61_1_U3CReadBytesAsyncU3Eb__1_m8E0A47C4934E49D92E77E9A60A3EAA2DC6985693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass67_0_U3CdumpU3Eb__0_mF8714BB660619726040812B172D2050E4C45B309_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass67_1_U3CdumpU3Eb__1_m76F366963EF638A306335B02682D8F8623DFFED5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass71_0_U3CreadExtendedPayloadLengthAsyncU3Eb__0_m5527184BF5560C7E9E784777959B25A6462F92A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass73_0_U3CreadHeaderAsyncU3Eb__0_mBD59C233292FE0B2A37D521A0656DF0947A6C7D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass75_0_U3CreadMaskingKeyAsyncU3Eb__0_m5DFD119815FD29BD7D02E2304069149282F6A117_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass77_0_U3CreadPayloadDataAsyncU3Eb__0_m266CBC02AC10F95BAF979FA4EB92D2DBA7D5F923_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass84_0_U3CReadFrameAsyncU3Eb__0_m8E53AC8E5C301D964A0EA74854A510E88444EE0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass84_0_U3CReadFrameAsyncU3Eb__1_m7478BBAB5967ABF7BA833D4A134BEC86E5264C06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass84_0_U3CReadFrameAsyncU3Eb__2_mF259A11B658C616E08DA5BB3C86476B2D02778E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass84_0_U3CReadFrameAsyncU3Eb__3_mFE3285A7F07F51C368159634D72C0183FE081D4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketFrame_dump_mF771B433EF815AFF4402FB313384AD25F80B9007_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketFrame_processHeader_m746B42813AAF5AE70A094B2C5F8BEA8146ACFABB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketFrame_readPayloadDataAsync_mE5DDE121C8B21564DBF883FC9D0556FE638DD74E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<System.Byte>
struct List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____items_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__items_1() const { return ____items_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_StaticFields, ____emptyArray_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// WebSocketSharp.Ext
struct Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9  : public RuntimeObject
{
public:

public:
};

struct Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_StaticFields
{
public:
	// System.Byte[] WebSocketSharp.Ext::_last
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____last_0;
	// System.Int32 WebSocketSharp.Ext::_retry
	int32_t ____retry_1;

public:
	inline static int32_t get_offset_of__last_0() { return static_cast<int32_t>(offsetof(Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_StaticFields, ____last_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__last_0() const { return ____last_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__last_0() { return &____last_0; }
	inline void set__last_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____last_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____last_0), (void*)value);
	}

	inline static int32_t get_offset_of__retry_1() { return static_cast<int32_t>(offsetof(Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_StaticFields, ____retry_1)); }
	inline int32_t get__retry_1() const { return ____retry_1; }
	inline int32_t* get_address_of__retry_1() { return &____retry_1; }
	inline void set__retry_1(int32_t value)
	{
		____retry_1 = value;
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29  : public RuntimeObject
{
public:
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::_readOnly
	bool ____readOnly_0;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::_entriesArray
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____entriesArray_1;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::_keyComparer
	RuntimeObject* ____keyComparer_2;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_entriesTable
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____entriesTable_3;
	// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_nullKeyEntry
	NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * ____nullKeyEntry_4;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::_serializationInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____serializationInfo_5;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::_version
	int32_t ____version_6;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase::_syncRoot
	RuntimeObject * ____syncRoot_7;

public:
	inline static int32_t get_offset_of__readOnly_0() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____readOnly_0)); }
	inline bool get__readOnly_0() const { return ____readOnly_0; }
	inline bool* get_address_of__readOnly_0() { return &____readOnly_0; }
	inline void set__readOnly_0(bool value)
	{
		____readOnly_0 = value;
	}

	inline static int32_t get_offset_of__entriesArray_1() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____entriesArray_1)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__entriesArray_1() const { return ____entriesArray_1; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__entriesArray_1() { return &____entriesArray_1; }
	inline void set__entriesArray_1(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____entriesArray_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entriesArray_1), (void*)value);
	}

	inline static int32_t get_offset_of__keyComparer_2() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____keyComparer_2)); }
	inline RuntimeObject* get__keyComparer_2() const { return ____keyComparer_2; }
	inline RuntimeObject** get_address_of__keyComparer_2() { return &____keyComparer_2; }
	inline void set__keyComparer_2(RuntimeObject* value)
	{
		____keyComparer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keyComparer_2), (void*)value);
	}

	inline static int32_t get_offset_of__entriesTable_3() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____entriesTable_3)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__entriesTable_3() const { return ____entriesTable_3; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__entriesTable_3() { return &____entriesTable_3; }
	inline void set__entriesTable_3(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____entriesTable_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entriesTable_3), (void*)value);
	}

	inline static int32_t get_offset_of__nullKeyEntry_4() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____nullKeyEntry_4)); }
	inline NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * get__nullKeyEntry_4() const { return ____nullKeyEntry_4; }
	inline NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 ** get_address_of__nullKeyEntry_4() { return &____nullKeyEntry_4; }
	inline void set__nullKeyEntry_4(NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * value)
	{
		____nullKeyEntry_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nullKeyEntry_4), (void*)value);
	}

	inline static int32_t get_offset_of__serializationInfo_5() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____serializationInfo_5)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__serializationInfo_5() const { return ____serializationInfo_5; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__serializationInfo_5() { return &____serializationInfo_5; }
	inline void set__serializationInfo_5(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____serializationInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____serializationInfo_5), (void*)value);
	}

	inline static int32_t get_offset_of__version_6() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____version_6)); }
	inline int32_t get__version_6() const { return ____version_6; }
	inline int32_t* get_address_of__version_6() { return &____version_6; }
	inline void set__version_6(int32_t value)
	{
		____version_6 = value;
	}

	inline static int32_t get_offset_of__syncRoot_7() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____syncRoot_7)); }
	inline RuntimeObject * get__syncRoot_7() const { return ____syncRoot_7; }
	inline RuntimeObject ** get_address_of__syncRoot_7() { return &____syncRoot_7; }
	inline void set__syncRoot_7(RuntimeObject * value)
	{
		____syncRoot_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_7), (void*)value);
	}
};

struct NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29_StaticFields
{
public:
	// System.StringComparer System.Collections.Specialized.NameObjectCollectionBase::defaultComparer
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ___defaultComparer_8;

public:
	inline static int32_t get_offset_of_defaultComparer_8() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29_StaticFields, ___defaultComparer_8)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get_defaultComparer_8() const { return ___defaultComparer_8; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of_defaultComparer_8() { return &___defaultComparer_8; }
	inline void set_defaultComparer_8(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		___defaultComparer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_8), (void*)value);
	}
};


// WebSocketSharp.PayloadData
struct PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E  : public RuntimeObject
{
public:
	// System.Byte[] WebSocketSharp.PayloadData::_data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____data_0;
	// System.Int64 WebSocketSharp.PayloadData::_extDataLength
	int64_t ____extDataLength_1;
	// System.Int64 WebSocketSharp.PayloadData::_length
	int64_t ____length_2;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E, ____data_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__data_0() const { return ____data_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_0), (void*)value);
	}

	inline static int32_t get_offset_of__extDataLength_1() { return static_cast<int32_t>(offsetof(PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E, ____extDataLength_1)); }
	inline int64_t get__extDataLength_1() const { return ____extDataLength_1; }
	inline int64_t* get_address_of__extDataLength_1() { return &____extDataLength_1; }
	inline void set__extDataLength_1(int64_t value)
	{
		____extDataLength_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E, ____length_2)); }
	inline int64_t get__length_2() const { return ____length_2; }
	inline int64_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int64_t value)
	{
		____length_2 = value;
	}
};

struct PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E_StaticFields
{
public:
	// WebSocketSharp.PayloadData WebSocketSharp.PayloadData::Empty
	PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * ___Empty_3;
	// System.UInt64 WebSocketSharp.PayloadData::MaxLength
	uint64_t ___MaxLength_4;

public:
	inline static int32_t get_offset_of_Empty_3() { return static_cast<int32_t>(offsetof(PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E_StaticFields, ___Empty_3)); }
	inline PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * get_Empty_3() const { return ___Empty_3; }
	inline PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E ** get_address_of_Empty_3() { return &___Empty_3; }
	inline void set_Empty_3(PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * value)
	{
		___Empty_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_3), (void*)value);
	}

	inline static int32_t get_offset_of_MaxLength_4() { return static_cast<int32_t>(offsetof(PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E_StaticFields, ___MaxLength_4)); }
	inline uint64_t get_MaxLength_4() const { return ___MaxLength_4; }
	inline uint64_t* get_address_of_MaxLength_4() { return &___MaxLength_4; }
	inline void set_MaxLength_4(uint64_t value)
	{
		___MaxLength_4 = value;
	}
};


// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50  : public RuntimeObject
{
public:

public:
};


// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;

public:
	inline static int32_t get_offset_of_m_members_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_members_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_members_3() const { return ___m_members_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_members_3() { return &___m_members_3; }
	inline void set_m_members_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_members_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_members_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_data_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_data_4)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_data_4() const { return ___m_data_4; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_data_4() { return &___m_data_4; }
	inline void set_m_data_4(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_data_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_types_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_types_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_m_types_5() const { return ___m_types_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_m_types_5() { return &___m_types_5; }
	inline void set_m_types_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___m_types_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_types_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_nameToIndex_6)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_m_nameToIndex_6() const { return ___m_nameToIndex_6; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_m_nameToIndex_6() { return &___m_nameToIndex_6; }
	inline void set_m_nameToIndex_6(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___m_nameToIndex_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_nameToIndex_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_currMember_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_currMember_7)); }
	inline int32_t get_m_currMember_7() const { return ___m_currMember_7; }
	inline int32_t* get_address_of_m_currMember_7() { return &___m_currMember_7; }
	inline void set_m_currMember_7(int32_t value)
	{
		___m_currMember_7 = value;
	}

	inline static int32_t get_offset_of_m_converter_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_converter_8)); }
	inline RuntimeObject* get_m_converter_8() const { return ___m_converter_8; }
	inline RuntimeObject** get_address_of_m_converter_8() { return &___m_converter_8; }
	inline void set_m_converter_8(RuntimeObject* value)
	{
		___m_converter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_converter_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_fullTypeName_9)); }
	inline String_t* get_m_fullTypeName_9() const { return ___m_fullTypeName_9; }
	inline String_t** get_address_of_m_fullTypeName_9() { return &___m_fullTypeName_9; }
	inline void set_m_fullTypeName_9(String_t* value)
	{
		___m_fullTypeName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTypeName_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_assemName_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_assemName_10)); }
	inline String_t* get_m_assemName_10() const { return ___m_assemName_10; }
	inline String_t** get_address_of_m_assemName_10() { return &___m_assemName_10; }
	inline void set_m_assemName_10(String_t* value)
	{
		___m_assemName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_assemName_10), (void*)value);
	}

	inline static int32_t get_offset_of_objectType_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___objectType_11)); }
	inline Type_t * get_objectType_11() const { return ___objectType_11; }
	inline Type_t ** get_address_of_objectType_11() { return &___objectType_11; }
	inline void set_objectType_11(Type_t * value)
	{
		___objectType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectType_11), (void*)value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_12() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isFullTypeNameSetExplicit_12)); }
	inline bool get_isFullTypeNameSetExplicit_12() const { return ___isFullTypeNameSetExplicit_12; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_12() { return &___isFullTypeNameSetExplicit_12; }
	inline void set_isFullTypeNameSetExplicit_12(bool value)
	{
		___isFullTypeNameSetExplicit_12 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_13() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isAssemblyNameSetExplicit_13)); }
	inline bool get_isAssemblyNameSetExplicit_13() const { return ___isAssemblyNameSetExplicit_13; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_13() { return &___isAssemblyNameSetExplicit_13; }
	inline void set_isAssemblyNameSetExplicit_13(bool value)
	{
		___isAssemblyNameSetExplicit_13 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_14() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___requireSameTokenInPartialTrust_14)); }
	inline bool get_requireSameTokenInPartialTrust_14() const { return ___requireSameTokenInPartialTrust_14; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_14() { return &___requireSameTokenInPartialTrust_14; }
	inline void set_requireSameTokenInPartialTrust_14(bool value)
	{
		___requireSameTokenInPartialTrust_14 = value;
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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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

// WebSocketSharp.Net.AuthenticationResponse/<>c
struct U3CU3Ec_tC81DDAE0EA2C737E510CBED988AA0E0A7EF615FA  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC81DDAE0EA2C737E510CBED988AA0E0A7EF615FA_StaticFields
{
public:
	// WebSocketSharp.Net.AuthenticationResponse/<>c WebSocketSharp.Net.AuthenticationResponse/<>c::<>9
	U3CU3Ec_tC81DDAE0EA2C737E510CBED988AA0E0A7EF615FA * ___U3CU3E9_0;
	// System.Func`2<System.String,System.Boolean> WebSocketSharp.Net.AuthenticationResponse/<>c::<>9__24_0
	Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * ___U3CU3E9__24_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC81DDAE0EA2C737E510CBED988AA0E0A7EF615FA_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC81DDAE0EA2C737E510CBED988AA0E0A7EF615FA * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC81DDAE0EA2C737E510CBED988AA0E0A7EF615FA ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC81DDAE0EA2C737E510CBED988AA0E0A7EF615FA * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC81DDAE0EA2C737E510CBED988AA0E0A7EF615FA_StaticFields, ___U3CU3E9__24_0_1)); }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * get_U3CU3E9__24_0_1() const { return ___U3CU3E9__24_0_1; }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D ** get_address_of_U3CU3E9__24_0_1() { return &___U3CU3E9__24_0_1; }
	inline void set_U3CU3E9__24_0_1(Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * value)
	{
		___U3CU3E9__24_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_0_1), (void*)value);
	}
};


// WebSocketSharp.Ext/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t4130DD2D95DB1965A666132D6F3C94B3A451E720  : public RuntimeObject
{
public:
	// System.Int32 WebSocketSharp.Ext/<>c__DisplayClass21_0::end
	int32_t ___end_0;
	// System.String[] WebSocketSharp.Ext/<>c__DisplayClass21_0::values
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values_1;
	// System.Int32 WebSocketSharp.Ext/<>c__DisplayClass21_0::len
	int32_t ___len_2;
	// System.Func`2<System.Int32,System.Boolean> WebSocketSharp.Ext/<>c__DisplayClass21_0::seek
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___seek_3;

public:
	inline static int32_t get_offset_of_end_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_t4130DD2D95DB1965A666132D6F3C94B3A451E720, ___end_0)); }
	inline int32_t get_end_0() const { return ___end_0; }
	inline int32_t* get_address_of_end_0() { return &___end_0; }
	inline void set_end_0(int32_t value)
	{
		___end_0 = value;
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_t4130DD2D95DB1965A666132D6F3C94B3A451E720, ___values_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_values_1() const { return ___values_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_1), (void*)value);
	}

	inline static int32_t get_offset_of_len_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_t4130DD2D95DB1965A666132D6F3C94B3A451E720, ___len_2)); }
	inline int32_t get_len_2() const { return ___len_2; }
	inline int32_t* get_address_of_len_2() { return &___len_2; }
	inline void set_len_2(int32_t value)
	{
		___len_2 = value;
	}

	inline static int32_t get_offset_of_seek_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_t4130DD2D95DB1965A666132D6F3C94B3A451E720, ___seek_3)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_seek_3() const { return ___seek_3; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_seek_3() { return &___seek_3; }
	inline void set_seek_3(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___seek_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seek_3), (void*)value);
	}
};


// WebSocketSharp.Ext/<>c__DisplayClass60_0
struct U3CU3Ec__DisplayClass60_0_tA8D9CEFFE6BB12069D7E66BB20448C65E3B4EA27  : public RuntimeObject
{
public:
	// System.IO.Stream WebSocketSharp.Ext/<>c__DisplayClass60_0::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_0;
	// System.Int32 WebSocketSharp.Ext/<>c__DisplayClass60_0::retry
	int32_t ___retry_1;
	// System.Byte[] WebSocketSharp.Ext/<>c__DisplayClass60_0::buff
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buff_2;
	// System.Int32 WebSocketSharp.Ext/<>c__DisplayClass60_0::offset
	int32_t ___offset_3;
	// System.Int32 WebSocketSharp.Ext/<>c__DisplayClass60_0::length
	int32_t ___length_4;
	// System.AsyncCallback WebSocketSharp.Ext/<>c__DisplayClass60_0::callback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback_5;
	// System.Action`1<System.Byte[]> WebSocketSharp.Ext/<>c__DisplayClass60_0::completed
	Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * ___completed_6;
	// System.Action`1<System.Exception> WebSocketSharp.Ext/<>c__DisplayClass60_0::error
	Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error_7;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass60_0_tA8D9CEFFE6BB12069D7E66BB20448C65E3B4EA27, ___stream_0)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_0() const { return ___stream_0; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_0), (void*)value);
	}

	inline static int32_t get_offset_of_retry_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass60_0_tA8D9CEFFE6BB12069D7E66BB20448C65E3B4EA27, ___retry_1)); }
	inline int32_t get_retry_1() const { return ___retry_1; }
	inline int32_t* get_address_of_retry_1() { return &___retry_1; }
	inline void set_retry_1(int32_t value)
	{
		___retry_1 = value;
	}

	inline static int32_t get_offset_of_buff_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass60_0_tA8D9CEFFE6BB12069D7E66BB20448C65E3B4EA27, ___buff_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buff_2() const { return ___buff_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buff_2() { return &___buff_2; }
	inline void set_buff_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buff_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buff_2), (void*)value);
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass60_0_tA8D9CEFFE6BB12069D7E66BB20448C65E3B4EA27, ___offset_3)); }
	inline int32_t get_offset_3() const { return ___offset_3; }
	inline int32_t* get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(int32_t value)
	{
		___offset_3 = value;
	}

	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass60_0_tA8D9CEFFE6BB12069D7E66BB20448C65E3B4EA27, ___length_4)); }
	inline int32_t get_length_4() const { return ___length_4; }
	inline int32_t* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(int32_t value)
	{
		___length_4 = value;
	}

	inline static int32_t get_offset_of_callback_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass60_0_tA8D9CEFFE6BB12069D7E66BB20448C65E3B4EA27, ___callback_5)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_callback_5() const { return ___callback_5; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_callback_5() { return &___callback_5; }
	inline void set_callback_5(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___callback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_5), (void*)value);
	}

	inline static int32_t get_offset_of_completed_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass60_0_tA8D9CEFFE6BB12069D7E66BB20448C65E3B4EA27, ___completed_6)); }
	inline Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * get_completed_6() const { return ___completed_6; }
	inline Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 ** get_address_of_completed_6() { return &___completed_6; }
	inline void set_completed_6(Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * value)
	{
		___completed_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completed_6), (void*)value);
	}

	inline static int32_t get_offset_of_error_7() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass60_0_tA8D9CEFFE6BB12069D7E66BB20448C65E3B4EA27, ___error_7)); }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * get_error_7() const { return ___error_7; }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 ** get_address_of_error_7() { return &___error_7; }
	inline void set_error_7(Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * value)
	{
		___error_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_7), (void*)value);
	}
};


// WebSocketSharp.Ext/<>c__DisplayClass61_0
struct U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0  : public RuntimeObject
{
public:
	// System.Int32 WebSocketSharp.Ext/<>c__DisplayClass61_0::bufferLength
	int32_t ___bufferLength_0;
	// System.IO.Stream WebSocketSharp.Ext/<>c__DisplayClass61_0::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_1;
	// System.Byte[] WebSocketSharp.Ext/<>c__DisplayClass61_0::buff
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buff_2;
	// System.Int32 WebSocketSharp.Ext/<>c__DisplayClass61_0::retry
	int32_t ___retry_3;
	// System.Action`1<System.Int64> WebSocketSharp.Ext/<>c__DisplayClass61_0::read
	Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * ___read_4;
	// System.Action`1<System.Byte[]> WebSocketSharp.Ext/<>c__DisplayClass61_0::completed
	Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * ___completed_5;
	// System.IO.MemoryStream WebSocketSharp.Ext/<>c__DisplayClass61_0::dest
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * ___dest_6;
	// System.Action`1<System.Exception> WebSocketSharp.Ext/<>c__DisplayClass61_0::error
	Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error_7;

public:
	inline static int32_t get_offset_of_bufferLength_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0, ___bufferLength_0)); }
	inline int32_t get_bufferLength_0() const { return ___bufferLength_0; }
	inline int32_t* get_address_of_bufferLength_0() { return &___bufferLength_0; }
	inline void set_bufferLength_0(int32_t value)
	{
		___bufferLength_0 = value;
	}

	inline static int32_t get_offset_of_stream_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0, ___stream_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_1() const { return ___stream_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_1() { return &___stream_1; }
	inline void set_stream_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_1), (void*)value);
	}

	inline static int32_t get_offset_of_buff_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0, ___buff_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buff_2() const { return ___buff_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buff_2() { return &___buff_2; }
	inline void set_buff_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buff_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buff_2), (void*)value);
	}

	inline static int32_t get_offset_of_retry_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0, ___retry_3)); }
	inline int32_t get_retry_3() const { return ___retry_3; }
	inline int32_t* get_address_of_retry_3() { return &___retry_3; }
	inline void set_retry_3(int32_t value)
	{
		___retry_3 = value;
	}

	inline static int32_t get_offset_of_read_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0, ___read_4)); }
	inline Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * get_read_4() const { return ___read_4; }
	inline Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 ** get_address_of_read_4() { return &___read_4; }
	inline void set_read_4(Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * value)
	{
		___read_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_4), (void*)value);
	}

	inline static int32_t get_offset_of_completed_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0, ___completed_5)); }
	inline Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * get_completed_5() const { return ___completed_5; }
	inline Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 ** get_address_of_completed_5() { return &___completed_5; }
	inline void set_completed_5(Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * value)
	{
		___completed_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completed_5), (void*)value);
	}

	inline static int32_t get_offset_of_dest_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0, ___dest_6)); }
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * get_dest_6() const { return ___dest_6; }
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** get_address_of_dest_6() { return &___dest_6; }
	inline void set_dest_6(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * value)
	{
		___dest_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dest_6), (void*)value);
	}

	inline static int32_t get_offset_of_error_7() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0, ___error_7)); }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * get_error_7() const { return ___error_7; }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 ** get_address_of_error_7() { return &___error_7; }
	inline void set_error_7(Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * value)
	{
		___error_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_7), (void*)value);
	}
};


// WebSocketSharp.Ext/<>c__DisplayClass61_1
struct U3CU3Ec__DisplayClass61_1_t2E2BDA6F0A1C4DA3216DDB8C019054EC49793A6F  : public RuntimeObject
{
public:
	// System.Int64 WebSocketSharp.Ext/<>c__DisplayClass61_1::len
	int64_t ___len_0;
	// WebSocketSharp.Ext/<>c__DisplayClass61_0 WebSocketSharp.Ext/<>c__DisplayClass61_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_len_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass61_1_t2E2BDA6F0A1C4DA3216DDB8C019054EC49793A6F, ___len_0)); }
	inline int64_t get_len_0() const { return ___len_0; }
	inline int64_t* get_address_of_len_0() { return &___len_0; }
	inline void set_len_0(int64_t value)
	{
		___len_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass61_1_t2E2BDA6F0A1C4DA3216DDB8C019054EC49793A6F, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// WebSocketSharp.Ext/<SplitHeaderValue>d__63
struct U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2  : public RuntimeObject
{
public:
	// System.Int32 WebSocketSharp.Ext/<SplitHeaderValue>d__63::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String WebSocketSharp.Ext/<SplitHeaderValue>d__63::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 WebSocketSharp.Ext/<SplitHeaderValue>d__63::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.String WebSocketSharp.Ext/<SplitHeaderValue>d__63::value
	String_t* ___value_3;
	// System.String WebSocketSharp.Ext/<SplitHeaderValue>d__63::<>3__value
	String_t* ___U3CU3E3__value_4;
	// System.Char[] WebSocketSharp.Ext/<SplitHeaderValue>d__63::separators
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separators_5;
	// System.Char[] WebSocketSharp.Ext/<SplitHeaderValue>d__63::<>3__separators
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___U3CU3E3__separators_6;
	// System.Int32 WebSocketSharp.Ext/<SplitHeaderValue>d__63::<len>5__1
	int32_t ___U3ClenU3E5__1_7;
	// System.Text.StringBuilder WebSocketSharp.Ext/<SplitHeaderValue>d__63::<buff>5__2
	StringBuilder_t * ___U3CbuffU3E5__2_8;
	// System.Int32 WebSocketSharp.Ext/<SplitHeaderValue>d__63::<end>5__3
	int32_t ___U3CendU3E5__3_9;
	// System.Boolean WebSocketSharp.Ext/<SplitHeaderValue>d__63::<escaped>5__4
	bool ___U3CescapedU3E5__4_10;
	// System.Boolean WebSocketSharp.Ext/<SplitHeaderValue>d__63::<quoted>5__5
	bool ___U3CquotedU3E5__5_11;
	// System.Int32 WebSocketSharp.Ext/<SplitHeaderValue>d__63::<i>5__6
	int32_t ___U3CiU3E5__6_12;
	// System.Char WebSocketSharp.Ext/<SplitHeaderValue>d__63::<c>5__7
	Il2CppChar ___U3CcU3E5__7_13;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2, ___U3CU3E2__current_1)); }
	inline String_t* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline String_t** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(String_t* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2, ___value_3)); }
	inline String_t* get_value_3() const { return ___value_3; }
	inline String_t** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(String_t* value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__value_4() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2, ___U3CU3E3__value_4)); }
	inline String_t* get_U3CU3E3__value_4() const { return ___U3CU3E3__value_4; }
	inline String_t** get_address_of_U3CU3E3__value_4() { return &___U3CU3E3__value_4; }
	inline void set_U3CU3E3__value_4(String_t* value)
	{
		___U3CU3E3__value_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__value_4), (void*)value);
	}

	inline static int32_t get_offset_of_separators_5() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2, ___separators_5)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_separators_5() const { return ___separators_5; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_separators_5() { return &___separators_5; }
	inline void set_separators_5(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___separators_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___separators_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__separators_6() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2, ___U3CU3E3__separators_6)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_U3CU3E3__separators_6() const { return ___U3CU3E3__separators_6; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_U3CU3E3__separators_6() { return &___U3CU3E3__separators_6; }
	inline void set_U3CU3E3__separators_6(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___U3CU3E3__separators_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__separators_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClenU3E5__1_7() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2, ___U3ClenU3E5__1_7)); }
	inline int32_t get_U3ClenU3E5__1_7() const { return ___U3ClenU3E5__1_7; }
	inline int32_t* get_address_of_U3ClenU3E5__1_7() { return &___U3ClenU3E5__1_7; }
	inline void set_U3ClenU3E5__1_7(int32_t value)
	{
		___U3ClenU3E5__1_7 = value;
	}

	inline static int32_t get_offset_of_U3CbuffU3E5__2_8() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2, ___U3CbuffU3E5__2_8)); }
	inline StringBuilder_t * get_U3CbuffU3E5__2_8() const { return ___U3CbuffU3E5__2_8; }
	inline StringBuilder_t ** get_address_of_U3CbuffU3E5__2_8() { return &___U3CbuffU3E5__2_8; }
	inline void set_U3CbuffU3E5__2_8(StringBuilder_t * value)
	{
		___U3CbuffU3E5__2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbuffU3E5__2_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CendU3E5__3_9() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2, ___U3CendU3E5__3_9)); }
	inline int32_t get_U3CendU3E5__3_9() const { return ___U3CendU3E5__3_9; }
	inline int32_t* get_address_of_U3CendU3E5__3_9() { return &___U3CendU3E5__3_9; }
	inline void set_U3CendU3E5__3_9(int32_t value)
	{
		___U3CendU3E5__3_9 = value;
	}

	inline static int32_t get_offset_of_U3CescapedU3E5__4_10() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2, ___U3CescapedU3E5__4_10)); }
	inline bool get_U3CescapedU3E5__4_10() const { return ___U3CescapedU3E5__4_10; }
	inline bool* get_address_of_U3CescapedU3E5__4_10() { return &___U3CescapedU3E5__4_10; }
	inline void set_U3CescapedU3E5__4_10(bool value)
	{
		___U3CescapedU3E5__4_10 = value;
	}

	inline static int32_t get_offset_of_U3CquotedU3E5__5_11() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2, ___U3CquotedU3E5__5_11)); }
	inline bool get_U3CquotedU3E5__5_11() const { return ___U3CquotedU3E5__5_11; }
	inline bool* get_address_of_U3CquotedU3E5__5_11() { return &___U3CquotedU3E5__5_11; }
	inline void set_U3CquotedU3E5__5_11(bool value)
	{
		___U3CquotedU3E5__5_11 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__6_12() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2, ___U3CiU3E5__6_12)); }
	inline int32_t get_U3CiU3E5__6_12() const { return ___U3CiU3E5__6_12; }
	inline int32_t* get_address_of_U3CiU3E5__6_12() { return &___U3CiU3E5__6_12; }
	inline void set_U3CiU3E5__6_12(int32_t value)
	{
		___U3CiU3E5__6_12 = value;
	}

	inline static int32_t get_offset_of_U3CcU3E5__7_13() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2, ___U3CcU3E5__7_13)); }
	inline Il2CppChar get_U3CcU3E5__7_13() const { return ___U3CcU3E5__7_13; }
	inline Il2CppChar* get_address_of_U3CcU3E5__7_13() { return &___U3CcU3E5__7_13; }
	inline void set_U3CcU3E5__7_13(Il2CppChar value)
	{
		___U3CcU3E5__7_13 = value;
	}
};


// WebSocketSharp.HttpBase/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tDE35868D049FE26194335A467663112C5C9E7CF6  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Byte> WebSocketSharp.HttpBase/<>c__DisplayClass13_0::buff
	List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * ___buff_0;
	// System.Int32 WebSocketSharp.HttpBase/<>c__DisplayClass13_0::cnt
	int32_t ___cnt_1;

public:
	inline static int32_t get_offset_of_buff_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_tDE35868D049FE26194335A467663112C5C9E7CF6, ___buff_0)); }
	inline List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * get_buff_0() const { return ___buff_0; }
	inline List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF ** get_address_of_buff_0() { return &___buff_0; }
	inline void set_buff_0(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * value)
	{
		___buff_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buff_0), (void*)value);
	}

	inline static int32_t get_offset_of_cnt_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_tDE35868D049FE26194335A467663112C5C9E7CF6, ___cnt_1)); }
	inline int32_t get_cnt_1() const { return ___cnt_1; }
	inline int32_t* get_address_of_cnt_1() { return &___cnt_1; }
	inline void set_cnt_1(int32_t value)
	{
		___cnt_1 = value;
	}
};


// WebSocketSharp.PayloadData/<GetEnumerator>d__25
struct U3CGetEnumeratorU3Ed__25_t0B69FC394A574EB944DEF07074233712072EE207  : public RuntimeObject
{
public:
	// System.Int32 WebSocketSharp.PayloadData/<GetEnumerator>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Byte WebSocketSharp.PayloadData/<GetEnumerator>d__25::<>2__current
	uint8_t ___U3CU3E2__current_1;
	// WebSocketSharp.PayloadData WebSocketSharp.PayloadData/<GetEnumerator>d__25::<>4__this
	PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * ___U3CU3E4__this_2;
	// System.Byte[] WebSocketSharp.PayloadData/<GetEnumerator>d__25::<>s__1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CU3Es__1_3;
	// System.Int32 WebSocketSharp.PayloadData/<GetEnumerator>d__25::<>s__2
	int32_t ___U3CU3Es__2_4;
	// System.Byte WebSocketSharp.PayloadData/<GetEnumerator>d__25::<b>5__3
	uint8_t ___U3CbU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__25_t0B69FC394A574EB944DEF07074233712072EE207, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__25_t0B69FC394A574EB944DEF07074233712072EE207, ___U3CU3E2__current_1)); }
	inline uint8_t get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline uint8_t* get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(uint8_t value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__25_t0B69FC394A574EB944DEF07074233712072EE207, ___U3CU3E4__this_2)); }
	inline PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__25_t0B69FC394A574EB944DEF07074233712072EE207, ___U3CU3Es__1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CU3Es__1_3() const { return ___U3CU3Es__1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CU3Es__1_3() { return &___U3CU3Es__1_3; }
	inline void set_U3CU3Es__1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CU3Es__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__2_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__25_t0B69FC394A574EB944DEF07074233712072EE207, ___U3CU3Es__2_4)); }
	inline int32_t get_U3CU3Es__2_4() const { return ___U3CU3Es__2_4; }
	inline int32_t* get_address_of_U3CU3Es__2_4() { return &___U3CU3Es__2_4; }
	inline void set_U3CU3Es__2_4(int32_t value)
	{
		___U3CU3Es__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CbU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__25_t0B69FC394A574EB944DEF07074233712072EE207, ___U3CbU3E5__3_5)); }
	inline uint8_t get_U3CbU3E5__3_5() const { return ___U3CbU3E5__3_5; }
	inline uint8_t* get_address_of_U3CbU3E5__3_5() { return &___U3CbU3E5__3_5; }
	inline void set_U3CbU3E5__3_5(uint8_t value)
	{
		___U3CbU3E5__3_5 = value;
	}
};


// WebSocketSharp.Net.WebHeaderCollection/<>c__DisplayClass59_0
struct U3CU3Ec__DisplayClass59_0_tD1A29BA7CFFAD13D049EC46A64BF541638EDF902  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.SerializationInfo WebSocketSharp.Net.WebHeaderCollection/<>c__DisplayClass59_0::serializationInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___serializationInfo_0;
	// WebSocketSharp.Net.WebHeaderCollection WebSocketSharp.Net.WebHeaderCollection/<>c__DisplayClass59_0::<>4__this
	WebHeaderCollection_tF41E2CA053DC557D247EE73F96879A3C33120029 * ___U3CU3E4__this_1;
	// System.Int32 WebSocketSharp.Net.WebHeaderCollection/<>c__DisplayClass59_0::cnt
	int32_t ___cnt_2;

public:
	inline static int32_t get_offset_of_serializationInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass59_0_tD1A29BA7CFFAD13D049EC46A64BF541638EDF902, ___serializationInfo_0)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get_serializationInfo_0() const { return ___serializationInfo_0; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of_serializationInfo_0() { return &___serializationInfo_0; }
	inline void set_serializationInfo_0(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		___serializationInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializationInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass59_0_tD1A29BA7CFFAD13D049EC46A64BF541638EDF902, ___U3CU3E4__this_1)); }
	inline WebHeaderCollection_tF41E2CA053DC557D247EE73F96879A3C33120029 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline WebHeaderCollection_tF41E2CA053DC557D247EE73F96879A3C33120029 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(WebHeaderCollection_tF41E2CA053DC557D247EE73F96879A3C33120029 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}

	inline static int32_t get_offset_of_cnt_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass59_0_tD1A29BA7CFFAD13D049EC46A64BF541638EDF902, ___cnt_2)); }
	inline int32_t get_cnt_2() const { return ___cnt_2; }
	inline int32_t* get_address_of_cnt_2() { return &___cnt_2; }
	inline void set_cnt_2(int32_t value)
	{
		___cnt_2 = value;
	}
};


// WebSocketSharp.Net.WebHeaderCollection/<>c__DisplayClass70_0
struct U3CU3Ec__DisplayClass70_0_tEB5E1246CD18342EAD3FB5800AA33B4F583B8C2A  : public RuntimeObject
{
public:
	// System.Text.StringBuilder WebSocketSharp.Net.WebHeaderCollection/<>c__DisplayClass70_0::buff
	StringBuilder_t * ___buff_0;
	// WebSocketSharp.Net.WebHeaderCollection WebSocketSharp.Net.WebHeaderCollection/<>c__DisplayClass70_0::<>4__this
	WebHeaderCollection_tF41E2CA053DC557D247EE73F96879A3C33120029 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_buff_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass70_0_tEB5E1246CD18342EAD3FB5800AA33B4F583B8C2A, ___buff_0)); }
	inline StringBuilder_t * get_buff_0() const { return ___buff_0; }
	inline StringBuilder_t ** get_address_of_buff_0() { return &___buff_0; }
	inline void set_buff_0(StringBuilder_t * value)
	{
		___buff_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buff_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass70_0_tEB5E1246CD18342EAD3FB5800AA33B4F583B8C2A, ___U3CU3E4__this_1)); }
	inline WebHeaderCollection_tF41E2CA053DC557D247EE73F96879A3C33120029 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline WebHeaderCollection_tF41E2CA053DC557D247EE73F96879A3C33120029 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(WebHeaderCollection_tF41E2CA053DC557D247EE73F96879A3C33120029 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// WebSocketSharp.WebSocket/<>c
struct U3CU3Ec_tB4B2EE9FCABB432F8B378A41C9FCE9D1B72118E4  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tB4B2EE9FCABB432F8B378A41C9FCE9D1B72118E4_StaticFields
{
public:
	// WebSocketSharp.WebSocket/<>c WebSocketSharp.WebSocket/<>c::<>9
	U3CU3Ec_tB4B2EE9FCABB432F8B378A41C9FCE9D1B72118E4 * ___U3CU3E9_0;
	// System.Func`2<System.String,System.Boolean> WebSocketSharp.WebSocket/<>c::<>9__120_0
	Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * ___U3CU3E9__120_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB4B2EE9FCABB432F8B378A41C9FCE9D1B72118E4_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB4B2EE9FCABB432F8B378A41C9FCE9D1B72118E4 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB4B2EE9FCABB432F8B378A41C9FCE9D1B72118E4 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB4B2EE9FCABB432F8B378A41C9FCE9D1B72118E4 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__120_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB4B2EE9FCABB432F8B378A41C9FCE9D1B72118E4_StaticFields, ___U3CU3E9__120_0_1)); }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * get_U3CU3E9__120_0_1() const { return ___U3CU3E9__120_0_1; }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D ** get_address_of_U3CU3E9__120_0_1() { return &___U3CU3E9__120_0_1; }
	inline void set_U3CU3E9__120_0_1(Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * value)
	{
		___U3CU3E9__120_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__120_0_1), (void*)value);
	}
};


// WebSocketSharp.WebSocket/<>c__DisplayClass174_0
struct U3CU3Ec__DisplayClass174_0_tDA36AB493B9655C7CF24DDF7BC3831626019CAF4  : public RuntimeObject
{
public:
	// WebSocketSharp.WebSocket WebSocketSharp.WebSocket/<>c__DisplayClass174_0::<>4__this
	WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307 * ___U3CU3E4__this_0;
	// System.Action WebSocketSharp.WebSocket/<>c__DisplayClass174_0::receive
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___receive_1;
	// System.Action`1<WebSocketSharp.WebSocketFrame> WebSocketSharp.WebSocket/<>c__DisplayClass174_0::<>9__1
	Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * ___U3CU3E9__1_2;
	// System.Action`1<System.Exception> WebSocketSharp.WebSocket/<>c__DisplayClass174_0::<>9__2
	Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___U3CU3E9__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass174_0_tDA36AB493B9655C7CF24DDF7BC3831626019CAF4, ___U3CU3E4__this_0)); }
	inline WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_receive_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass174_0_tDA36AB493B9655C7CF24DDF7BC3831626019CAF4, ___receive_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_receive_1() const { return ___receive_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_receive_1() { return &___receive_1; }
	inline void set_receive_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___receive_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receive_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass174_0_tDA36AB493B9655C7CF24DDF7BC3831626019CAF4, ___U3CU3E9__1_2)); }
	inline Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * get_U3CU3E9__1_2() const { return ___U3CU3E9__1_2; }
	inline Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A ** get_address_of_U3CU3E9__1_2() { return &___U3CU3E9__1_2; }
	inline void set_U3CU3E9__1_2(Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * value)
	{
		___U3CU3E9__1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass174_0_tDA36AB493B9655C7CF24DDF7BC3831626019CAF4, ___U3CU3E9__2_3)); }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * get_U3CU3E9__2_3() const { return ___U3CU3E9__2_3; }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 ** get_address_of_U3CU3E9__2_3() { return &___U3CU3E9__2_3; }
	inline void set_U3CU3E9__2_3(Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * value)
	{
		___U3CU3E9__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_3), (void*)value);
	}
};


// WebSocketSharp.WebSocket/<>c__DisplayClass176_0
struct U3CU3Ec__DisplayClass176_0_tCE7478BC7F8B2D37B31BCB9ACF716C59380E8D05  : public RuntimeObject
{
public:
	// System.String WebSocketSharp.WebSocket/<>c__DisplayClass176_0::method
	String_t* ___method_0;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass176_0_tCE7478BC7F8B2D37B31BCB9ACF716C59380E8D05, ___method_0)); }
	inline String_t* get_method_0() const { return ___method_0; }
	inline String_t** get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(String_t* value)
	{
		___method_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_0), (void*)value);
	}
};


// WebSocketSharp.WebSocket/<>c__DisplayClass177_0
struct U3CU3Ec__DisplayClass177_0_tAD93D381510A325830B232EF9BA36BAFAFB98053  : public RuntimeObject
{
public:
	// System.String WebSocketSharp.WebSocket/<>c__DisplayClass177_0::value
	String_t* ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass177_0_tAD93D381510A325830B232EF9BA36BAFAFB98053, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_0), (void*)value);
	}
};


// WebSocketSharp.WebSocket/<>c__DisplayClass201_0
struct U3CU3Ec__DisplayClass201_0_tB84E7B19BD4898704A571D9C457DB447890EF39D  : public RuntimeObject
{
public:
	// System.Func`1<System.Boolean> WebSocketSharp.WebSocket/<>c__DisplayClass201_0::connector
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___connector_0;
	// WebSocketSharp.WebSocket WebSocketSharp.WebSocket/<>c__DisplayClass201_0::<>4__this
	WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_connector_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass201_0_tB84E7B19BD4898704A571D9C457DB447890EF39D, ___connector_0)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_connector_0() const { return ___connector_0; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_connector_0() { return &___connector_0; }
	inline void set_connector_0(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___connector_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connector_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass201_0_tB84E7B19BD4898704A571D9C457DB447890EF39D, ___U3CU3E4__this_1)); }
	inline WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// WebSocketSharp.WebSocketFrame/<>c__DisplayClass67_0
struct U3CU3Ec__DisplayClass67_0_tDBF918B3DD900B583E012554C379933CDCFA4EA4  : public RuntimeObject
{
public:
	// System.Text.StringBuilder WebSocketSharp.WebSocketFrame/<>c__DisplayClass67_0::buff
	StringBuilder_t * ___buff_0;
	// System.String WebSocketSharp.WebSocketFrame/<>c__DisplayClass67_0::lineFmt
	String_t* ___lineFmt_1;

public:
	inline static int32_t get_offset_of_buff_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass67_0_tDBF918B3DD900B583E012554C379933CDCFA4EA4, ___buff_0)); }
	inline StringBuilder_t * get_buff_0() const { return ___buff_0; }
	inline StringBuilder_t ** get_address_of_buff_0() { return &___buff_0; }
	inline void set_buff_0(StringBuilder_t * value)
	{
		___buff_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buff_0), (void*)value);
	}

	inline static int32_t get_offset_of_lineFmt_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass67_0_tDBF918B3DD900B583E012554C379933CDCFA4EA4, ___lineFmt_1)); }
	inline String_t* get_lineFmt_1() const { return ___lineFmt_1; }
	inline String_t** get_address_of_lineFmt_1() { return &___lineFmt_1; }
	inline void set_lineFmt_1(String_t* value)
	{
		___lineFmt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineFmt_1), (void*)value);
	}
};


// WebSocketSharp.WebSocketFrame/<>c__DisplayClass67_1
struct U3CU3Ec__DisplayClass67_1_tE33256331364734FD4FE28A9D9369FE6C5EB1665  : public RuntimeObject
{
public:
	// System.Int64 WebSocketSharp.WebSocketFrame/<>c__DisplayClass67_1::lineCnt
	int64_t ___lineCnt_0;
	// WebSocketSharp.WebSocketFrame/<>c__DisplayClass67_0 WebSocketSharp.WebSocketFrame/<>c__DisplayClass67_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass67_0_tDBF918B3DD900B583E012554C379933CDCFA4EA4 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_lineCnt_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass67_1_tE33256331364734FD4FE28A9D9369FE6C5EB1665, ___lineCnt_0)); }
	inline int64_t get_lineCnt_0() const { return ___lineCnt_0; }
	inline int64_t* get_address_of_lineCnt_0() { return &___lineCnt_0; }
	inline void set_lineCnt_0(int64_t value)
	{
		___lineCnt_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass67_1_tE33256331364734FD4FE28A9D9369FE6C5EB1665, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass67_0_tDBF918B3DD900B583E012554C379933CDCFA4EA4 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass67_0_tDBF918B3DD900B583E012554C379933CDCFA4EA4 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass67_0_tDBF918B3DD900B583E012554C379933CDCFA4EA4 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// WebSocketSharp.WebSocketFrame/<>c__DisplayClass71_0
struct U3CU3Ec__DisplayClass71_0_tDE27FBCA0A789AFD6E2B10E71A24F37864062306  : public RuntimeObject
{
public:
	// System.Int32 WebSocketSharp.WebSocketFrame/<>c__DisplayClass71_0::len
	int32_t ___len_0;
	// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame/<>c__DisplayClass71_0::frame
	WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * ___frame_1;
	// System.Action`1<WebSocketSharp.WebSocketFrame> WebSocketSharp.WebSocketFrame/<>c__DisplayClass71_0::completed
	Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * ___completed_2;

public:
	inline static int32_t get_offset_of_len_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass71_0_tDE27FBCA0A789AFD6E2B10E71A24F37864062306, ___len_0)); }
	inline int32_t get_len_0() const { return ___len_0; }
	inline int32_t* get_address_of_len_0() { return &___len_0; }
	inline void set_len_0(int32_t value)
	{
		___len_0 = value;
	}

	inline static int32_t get_offset_of_frame_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass71_0_tDE27FBCA0A789AFD6E2B10E71A24F37864062306, ___frame_1)); }
	inline WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * get_frame_1() const { return ___frame_1; }
	inline WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E ** get_address_of_frame_1() { return &___frame_1; }
	inline void set_frame_1(WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * value)
	{
		___frame_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frame_1), (void*)value);
	}

	inline static int32_t get_offset_of_completed_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass71_0_tDE27FBCA0A789AFD6E2B10E71A24F37864062306, ___completed_2)); }
	inline Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * get_completed_2() const { return ___completed_2; }
	inline Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A ** get_address_of_completed_2() { return &___completed_2; }
	inline void set_completed_2(Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * value)
	{
		___completed_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completed_2), (void*)value);
	}
};


// WebSocketSharp.WebSocketFrame/<>c__DisplayClass73_0
struct U3CU3Ec__DisplayClass73_0_t1AA2F56924CE1580D7DDEE26E3B028E2200D7135  : public RuntimeObject
{
public:
	// System.Action`1<WebSocketSharp.WebSocketFrame> WebSocketSharp.WebSocketFrame/<>c__DisplayClass73_0::completed
	Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * ___completed_0;

public:
	inline static int32_t get_offset_of_completed_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass73_0_t1AA2F56924CE1580D7DDEE26E3B028E2200D7135, ___completed_0)); }
	inline Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * get_completed_0() const { return ___completed_0; }
	inline Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A ** get_address_of_completed_0() { return &___completed_0; }
	inline void set_completed_0(Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * value)
	{
		___completed_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completed_0), (void*)value);
	}
};


// WebSocketSharp.WebSocketFrame/<>c__DisplayClass75_0
struct U3CU3Ec__DisplayClass75_0_t41FE8DC939EFCB7DF138812C55EBAA3BE1820A84  : public RuntimeObject
{
public:
	// System.Int32 WebSocketSharp.WebSocketFrame/<>c__DisplayClass75_0::len
	int32_t ___len_0;
	// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame/<>c__DisplayClass75_0::frame
	WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * ___frame_1;
	// System.Action`1<WebSocketSharp.WebSocketFrame> WebSocketSharp.WebSocketFrame/<>c__DisplayClass75_0::completed
	Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * ___completed_2;

public:
	inline static int32_t get_offset_of_len_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass75_0_t41FE8DC939EFCB7DF138812C55EBAA3BE1820A84, ___len_0)); }
	inline int32_t get_len_0() const { return ___len_0; }
	inline int32_t* get_address_of_len_0() { return &___len_0; }
	inline void set_len_0(int32_t value)
	{
		___len_0 = value;
	}

	inline static int32_t get_offset_of_frame_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass75_0_t41FE8DC939EFCB7DF138812C55EBAA3BE1820A84, ___frame_1)); }
	inline WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * get_frame_1() const { return ___frame_1; }
	inline WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E ** get_address_of_frame_1() { return &___frame_1; }
	inline void set_frame_1(WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * value)
	{
		___frame_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frame_1), (void*)value);
	}

	inline static int32_t get_offset_of_completed_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass75_0_t41FE8DC939EFCB7DF138812C55EBAA3BE1820A84, ___completed_2)); }
	inline Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * get_completed_2() const { return ___completed_2; }
	inline Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A ** get_address_of_completed_2() { return &___completed_2; }
	inline void set_completed_2(Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * value)
	{
		___completed_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completed_2), (void*)value);
	}
};


// WebSocketSharp.WebSocketFrame/<>c__DisplayClass77_0
struct U3CU3Ec__DisplayClass77_0_tC80E02C07E3F3B1FA54221550F91A9441C063A9D  : public RuntimeObject
{
public:
	// System.Int64 WebSocketSharp.WebSocketFrame/<>c__DisplayClass77_0::len
	int64_t ___len_0;
	// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame/<>c__DisplayClass77_0::frame
	WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * ___frame_1;
	// System.Action`1<WebSocketSharp.WebSocketFrame> WebSocketSharp.WebSocketFrame/<>c__DisplayClass77_0::completed
	Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * ___completed_2;

public:
	inline static int32_t get_offset_of_len_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass77_0_tC80E02C07E3F3B1FA54221550F91A9441C063A9D, ___len_0)); }
	inline int64_t get_len_0() const { return ___len_0; }
	inline int64_t* get_address_of_len_0() { return &___len_0; }
	inline void set_len_0(int64_t value)
	{
		___len_0 = value;
	}

	inline static int32_t get_offset_of_frame_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass77_0_tC80E02C07E3F3B1FA54221550F91A9441C063A9D, ___frame_1)); }
	inline WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * get_frame_1() const { return ___frame_1; }
	inline WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E ** get_address_of_frame_1() { return &___frame_1; }
	inline void set_frame_1(WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * value)
	{
		___frame_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frame_1), (void*)value);
	}

	inline static int32_t get_offset_of_completed_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass77_0_tC80E02C07E3F3B1FA54221550F91A9441C063A9D, ___completed_2)); }
	inline Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * get_completed_2() const { return ___completed_2; }
	inline Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A ** get_address_of_completed_2() { return &___completed_2; }
	inline void set_completed_2(Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * value)
	{
		___completed_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completed_2), (void*)value);
	}
};


// WebSocketSharp.WebSocketFrame/<>c__DisplayClass84_0
struct U3CU3Ec__DisplayClass84_0_tD733837EE92C060DC99B8407C379B65CA6886F53  : public RuntimeObject
{
public:
	// System.IO.Stream WebSocketSharp.WebSocketFrame/<>c__DisplayClass84_0::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_0;
	// System.Boolean WebSocketSharp.WebSocketFrame/<>c__DisplayClass84_0::unmask
	bool ___unmask_1;
	// System.Action`1<WebSocketSharp.WebSocketFrame> WebSocketSharp.WebSocketFrame/<>c__DisplayClass84_0::completed
	Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * ___completed_2;
	// System.Action`1<System.Exception> WebSocketSharp.WebSocketFrame/<>c__DisplayClass84_0::error
	Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error_3;
	// System.Action`1<WebSocketSharp.WebSocketFrame> WebSocketSharp.WebSocketFrame/<>c__DisplayClass84_0::<>9__3
	Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * ___U3CU3E9__3_4;
	// System.Action`1<WebSocketSharp.WebSocketFrame> WebSocketSharp.WebSocketFrame/<>c__DisplayClass84_0::<>9__2
	Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * ___U3CU3E9__2_5;
	// System.Action`1<WebSocketSharp.WebSocketFrame> WebSocketSharp.WebSocketFrame/<>c__DisplayClass84_0::<>9__1
	Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * ___U3CU3E9__1_6;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass84_0_tD733837EE92C060DC99B8407C379B65CA6886F53, ___stream_0)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_0() const { return ___stream_0; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_0), (void*)value);
	}

	inline static int32_t get_offset_of_unmask_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass84_0_tD733837EE92C060DC99B8407C379B65CA6886F53, ___unmask_1)); }
	inline bool get_unmask_1() const { return ___unmask_1; }
	inline bool* get_address_of_unmask_1() { return &___unmask_1; }
	inline void set_unmask_1(bool value)
	{
		___unmask_1 = value;
	}

	inline static int32_t get_offset_of_completed_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass84_0_tD733837EE92C060DC99B8407C379B65CA6886F53, ___completed_2)); }
	inline Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * get_completed_2() const { return ___completed_2; }
	inline Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A ** get_address_of_completed_2() { return &___completed_2; }
	inline void set_completed_2(Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * value)
	{
		___completed_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completed_2), (void*)value);
	}

	inline static int32_t get_offset_of_error_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass84_0_tD733837EE92C060DC99B8407C379B65CA6886F53, ___error_3)); }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * get_error_3() const { return ___error_3; }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 ** get_address_of_error_3() { return &___error_3; }
	inline void set_error_3(Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * value)
	{
		___error_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass84_0_tD733837EE92C060DC99B8407C379B65CA6886F53, ___U3CU3E9__3_4)); }
	inline Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * get_U3CU3E9__3_4() const { return ___U3CU3E9__3_4; }
	inline Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A ** get_address_of_U3CU3E9__3_4() { return &___U3CU3E9__3_4; }
	inline void set_U3CU3E9__3_4(Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * value)
	{
		___U3CU3E9__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass84_0_tD733837EE92C060DC99B8407C379B65CA6886F53, ___U3CU3E9__2_5)); }
	inline Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * get_U3CU3E9__2_5() const { return ___U3CU3E9__2_5; }
	inline Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A ** get_address_of_U3CU3E9__2_5() { return &___U3CU3E9__2_5; }
	inline void set_U3CU3E9__2_5(Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * value)
	{
		___U3CU3E9__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass84_0_tD733837EE92C060DC99B8407C379B65CA6886F53, ___U3CU3E9__1_6)); }
	inline Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * get_U3CU3E9__1_6() const { return ___U3CU3E9__1_6; }
	inline Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A ** get_address_of_U3CU3E9__1_6() { return &___U3CU3E9__1_6; }
	inline void set_U3CU3E9__1_6(Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * value)
	{
		___U3CU3E9__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_6), (void*)value);
	}
};


// WebSocketSharp.WebSocketFrame/<GetEnumerator>d__86
struct U3CGetEnumeratorU3Ed__86_t79B0B8C14D5261662A95C2C543C629419F30FA13  : public RuntimeObject
{
public:
	// System.Int32 WebSocketSharp.WebSocketFrame/<GetEnumerator>d__86::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Byte WebSocketSharp.WebSocketFrame/<GetEnumerator>d__86::<>2__current
	uint8_t ___U3CU3E2__current_1;
	// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame/<GetEnumerator>d__86::<>4__this
	WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * ___U3CU3E4__this_2;
	// System.Byte[] WebSocketSharp.WebSocketFrame/<GetEnumerator>d__86::<>s__1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CU3Es__1_3;
	// System.Int32 WebSocketSharp.WebSocketFrame/<GetEnumerator>d__86::<>s__2
	int32_t ___U3CU3Es__2_4;
	// System.Byte WebSocketSharp.WebSocketFrame/<GetEnumerator>d__86::<b>5__3
	uint8_t ___U3CbU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__86_t79B0B8C14D5261662A95C2C543C629419F30FA13, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__86_t79B0B8C14D5261662A95C2C543C629419F30FA13, ___U3CU3E2__current_1)); }
	inline uint8_t get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline uint8_t* get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(uint8_t value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__86_t79B0B8C14D5261662A95C2C543C629419F30FA13, ___U3CU3E4__this_2)); }
	inline WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__86_t79B0B8C14D5261662A95C2C543C629419F30FA13, ___U3CU3Es__1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CU3Es__1_3() const { return ___U3CU3Es__1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CU3Es__1_3() { return &___U3CU3Es__1_3; }
	inline void set_U3CU3Es__1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CU3Es__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__2_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__86_t79B0B8C14D5261662A95C2C543C629419F30FA13, ___U3CU3Es__2_4)); }
	inline int32_t get_U3CU3Es__2_4() const { return ___U3CU3Es__2_4; }
	inline int32_t* get_address_of_U3CU3Es__2_4() { return &___U3CU3Es__2_4; }
	inline void set_U3CU3Es__2_4(int32_t value)
	{
		___U3CU3Es__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CbU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__86_t79B0B8C14D5261662A95C2C543C629419F30FA13, ___U3CbU3E5__3_5)); }
	inline uint8_t get_U3CbU3E5__3_5() const { return ___U3CbU3E5__3_5; }
	inline uint8_t* get_address_of_U3CbU3E5__3_5() { return &___U3CbU3E5__3_5; }
	inline void set_U3CbU3E5__3_5(uint8_t value)
	{
		___U3CbU3E5__3_5 = value;
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D  : public NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::_all
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____all_9;
	// System.String[] System.Collections.Specialized.NameValueCollection::_allKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____allKeys_10;

public:
	inline static int32_t get_offset_of__all_9() { return static_cast<int32_t>(offsetof(NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D, ____all_9)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__all_9() const { return ____all_9; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__all_9() { return &____all_9; }
	inline void set__all_9(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____all_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____all_9), (void*)value);
	}

	inline static int32_t get_offset_of__allKeys_10() { return static_cast<int32_t>(offsetof(NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D, ____allKeys_10)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__allKeys_10() const { return ____allKeys_10; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__allKeys_10() { return &____allKeys_10; }
	inline void set__allKeys_10(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____allKeys_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____allKeys_10), (void*)value);
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___internal_thread_6)); }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
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


// WebSocketSharp.ByteOrder
struct ByteOrder_t0E4441DD2101F5766FF6653DA92ED621E7BBFC70 
{
public:
	// System.Int32 WebSocketSharp.ByteOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ByteOrder_t0E4441DD2101F5766FF6653DA92ED621E7BBFC70, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// WebSocketSharp.CloseStatusCode
struct CloseStatusCode_tD61348C0C3ED7B9DF9ABC1D2EE3BCA507FB1556A 
{
public:
	// System.UInt16 WebSocketSharp.CloseStatusCode::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CloseStatusCode_tD61348C0C3ED7B9DF9ABC1D2EE3BCA507FB1556A, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// WebSocketSharp.CompressionMethod
struct CompressionMethod_t069A6E74EC4C35B971B014FDE970A8817275D61E 
{
public:
	// System.Byte WebSocketSharp.CompressionMethod::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionMethod_t069A6E74EC4C35B971B014FDE970A8817275D61E, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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

// WebSocketSharp.Fin
struct Fin_tB63C3774106D399A2802141462FBCA7C2657157C 
{
public:
	// System.Byte WebSocketSharp.Fin::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Fin_tB63C3774106D399A2802141462FBCA7C2657157C, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// WebSocketSharp.Net.HttpHeaderType
struct HttpHeaderType_t51C135C41B264563A079B37A0FB111A2D27AD218 
{
public:
	// System.Int32 WebSocketSharp.Net.HttpHeaderType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HttpHeaderType_t51C135C41B264563A079B37A0FB111A2D27AD218, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// WebSocketSharp.LogLevel
struct LogLevel_t0D5F6DC9A35725328994628FFE5E47338CEC6659 
{
public:
	// System.Int32 WebSocketSharp.LogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogLevel_t0D5F6DC9A35725328994628FFE5E47338CEC6659, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// WebSocketSharp.Mask
struct Mask_t11143EC89CC7AA99AD95ED61D44C938CFFBBF7F5 
{
public:
	// System.Byte WebSocketSharp.Mask::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mask_t11143EC89CC7AA99AD95ED61D44C938CFFBBF7F5, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_13;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____buffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__origin_5() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____origin_5)); }
	inline int32_t get__origin_5() const { return ____origin_5; }
	inline int32_t* get_address_of__origin_5() { return &____origin_5; }
	inline void set__origin_5(int32_t value)
	{
		____origin_5 = value;
	}

	inline static int32_t get_offset_of__position_6() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____position_6)); }
	inline int32_t get__position_6() const { return ____position_6; }
	inline int32_t* get_address_of__position_6() { return &____position_6; }
	inline void set__position_6(int32_t value)
	{
		____position_6 = value;
	}

	inline static int32_t get_offset_of__length_7() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____length_7)); }
	inline int32_t get__length_7() const { return ____length_7; }
	inline int32_t* get_address_of__length_7() { return &____length_7; }
	inline void set__length_7(int32_t value)
	{
		____length_7 = value;
	}

	inline static int32_t get_offset_of__capacity_8() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____capacity_8)); }
	inline int32_t get__capacity_8() const { return ____capacity_8; }
	inline int32_t* get_address_of__capacity_8() { return &____capacity_8; }
	inline void set__capacity_8(int32_t value)
	{
		____capacity_8 = value;
	}

	inline static int32_t get_offset_of__expandable_9() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____expandable_9)); }
	inline bool get__expandable_9() const { return ____expandable_9; }
	inline bool* get_address_of__expandable_9() { return &____expandable_9; }
	inline void set__expandable_9(bool value)
	{
		____expandable_9 = value;
	}

	inline static int32_t get_offset_of__writable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____writable_10)); }
	inline bool get__writable_10() const { return ____writable_10; }
	inline bool* get_address_of__writable_10() { return &____writable_10; }
	inline void set__writable_10(bool value)
	{
		____writable_10 = value;
	}

	inline static int32_t get_offset_of__exposable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____exposable_11)); }
	inline bool get__exposable_11() const { return ____exposable_11; }
	inline bool* get_address_of__exposable_11() { return &____exposable_11; }
	inline void set__exposable_11(bool value)
	{
		____exposable_11 = value;
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_13() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____lastReadTask_13)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_13() const { return ____lastReadTask_13; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_13() { return &____lastReadTask_13; }
	inline void set__lastReadTask_13(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_13), (void*)value);
	}
};


// WebSocketSharp.Opcode
struct Opcode_tDB68976A89F4FC63A2794ACEBBEAA6BDFD25EA01 
{
public:
	// System.Byte WebSocketSharp.Opcode::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Opcode_tDB68976A89F4FC63A2794ACEBBEAA6BDFD25EA01, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// WebSocketSharp.Rsv
struct Rsv_tC7F1BD18C6301FBAA510C7755D1A45B8C950250D 
{
public:
	// System.Byte WebSocketSharp.Rsv::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Rsv_tC7F1BD18C6301FBAA510C7755D1A45B8C950250D, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// WebSocketSharp.WebSocketState
struct WebSocketState_tBC34B24BBB904D1A65EFF39B90B992A7A02D15D6 
{
public:
	// System.UInt16 WebSocketSharp.WebSocketState::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebSocketState_tBC34B24BBB904D1A65EFF39B90B992A7A02D15D6, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};


// WebSocketSharp.Logger
struct Logger_t7A4ECD749D0DFE4B32485415CDC994EC550D5E00  : public RuntimeObject
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.Logger::_file
	String_t* ____file_0;
	// WebSocketSharp.LogLevel modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.Logger::_level
	int32_t ____level_1;
	// System.Action`2<WebSocketSharp.LogData,System.String> WebSocketSharp.Logger::_output
	Action_2_t0682CEF9255A52EA035ADA917C2AA2B61802AAA1 * ____output_2;
	// System.Object WebSocketSharp.Logger::_sync
	RuntimeObject * ____sync_3;

public:
	inline static int32_t get_offset_of__file_0() { return static_cast<int32_t>(offsetof(Logger_t7A4ECD749D0DFE4B32485415CDC994EC550D5E00, ____file_0)); }
	inline String_t* get__file_0() const { return ____file_0; }
	inline String_t** get_address_of__file_0() { return &____file_0; }
	inline void set__file_0(String_t* value)
	{
		____file_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____file_0), (void*)value);
	}

	inline static int32_t get_offset_of__level_1() { return static_cast<int32_t>(offsetof(Logger_t7A4ECD749D0DFE4B32485415CDC994EC550D5E00, ____level_1)); }
	inline int32_t get__level_1() const { return ____level_1; }
	inline int32_t* get_address_of__level_1() { return &____level_1; }
	inline void set__level_1(int32_t value)
	{
		____level_1 = value;
	}

	inline static int32_t get_offset_of__output_2() { return static_cast<int32_t>(offsetof(Logger_t7A4ECD749D0DFE4B32485415CDC994EC550D5E00, ____output_2)); }
	inline Action_2_t0682CEF9255A52EA035ADA917C2AA2B61802AAA1 * get__output_2() const { return ____output_2; }
	inline Action_2_t0682CEF9255A52EA035ADA917C2AA2B61802AAA1 ** get_address_of__output_2() { return &____output_2; }
	inline void set__output_2(Action_2_t0682CEF9255A52EA035ADA917C2AA2B61802AAA1 * value)
	{
		____output_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____output_2), (void*)value);
	}

	inline static int32_t get_offset_of__sync_3() { return static_cast<int32_t>(offsetof(Logger_t7A4ECD749D0DFE4B32485415CDC994EC550D5E00, ____sync_3)); }
	inline RuntimeObject * get__sync_3() const { return ____sync_3; }
	inline RuntimeObject ** get_address_of__sync_3() { return &____sync_3; }
	inline void set__sync_3(RuntimeObject * value)
	{
		____sync_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sync_3), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
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
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// WebSocketSharp.Net.WebHeaderCollection
struct WebHeaderCollection_tF41E2CA053DC557D247EE73F96879A3C33120029  : public NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D
{
public:
	// System.Boolean WebSocketSharp.Net.WebHeaderCollection::_internallyUsed
	bool ____internallyUsed_12;
	// WebSocketSharp.Net.HttpHeaderType WebSocketSharp.Net.WebHeaderCollection::_state
	int32_t ____state_13;

public:
	inline static int32_t get_offset_of__internallyUsed_12() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tF41E2CA053DC557D247EE73F96879A3C33120029, ____internallyUsed_12)); }
	inline bool get__internallyUsed_12() const { return ____internallyUsed_12; }
	inline bool* get_address_of__internallyUsed_12() { return &____internallyUsed_12; }
	inline void set__internallyUsed_12(bool value)
	{
		____internallyUsed_12 = value;
	}

	inline static int32_t get_offset_of__state_13() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tF41E2CA053DC557D247EE73F96879A3C33120029, ____state_13)); }
	inline int32_t get__state_13() const { return ____state_13; }
	inline int32_t* get_address_of__state_13() { return &____state_13; }
	inline void set__state_13(int32_t value)
	{
		____state_13 = value;
	}
};

struct WebHeaderCollection_tF41E2CA053DC557D247EE73F96879A3C33120029_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,WebSocketSharp.Net.HttpHeaderInfo> WebSocketSharp.Net.WebHeaderCollection::_headers
	Dictionary_2_tC87522C9521797E5F22CC6DC4EF72962B0212DAB * ____headers_11;

public:
	inline static int32_t get_offset_of__headers_11() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tF41E2CA053DC557D247EE73F96879A3C33120029_StaticFields, ____headers_11)); }
	inline Dictionary_2_tC87522C9521797E5F22CC6DC4EF72962B0212DAB * get__headers_11() const { return ____headers_11; }
	inline Dictionary_2_tC87522C9521797E5F22CC6DC4EF72962B0212DAB ** get_address_of__headers_11() { return &____headers_11; }
	inline void set__headers_11(Dictionary_2_tC87522C9521797E5F22CC6DC4EF72962B0212DAB * value)
	{
		____headers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____headers_11), (void*)value);
	}
};


// WebSocketSharp.WebSocket
struct WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307  : public RuntimeObject
{
public:
	// WebSocketSharp.Net.AuthenticationChallenge WebSocketSharp.WebSocket::_authChallenge
	AuthenticationChallenge_t5FF9DBB25BC0999019BDF17BB5739CF77DEB09EE * ____authChallenge_0;
	// System.String WebSocketSharp.WebSocket::_base64Key
	String_t* ____base64Key_1;
	// System.Boolean WebSocketSharp.WebSocket::_client
	bool ____client_2;
	// System.Action WebSocketSharp.WebSocket::_closeContext
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____closeContext_3;
	// WebSocketSharp.CompressionMethod WebSocketSharp.WebSocket::_compression
	uint8_t ____compression_4;
	// WebSocketSharp.Net.WebSockets.WebSocketContext WebSocketSharp.WebSocket::_context
	WebSocketContext_t476CB6678AEFC9527A97C086FAE5F5DCE4912ED9 * ____context_5;
	// WebSocketSharp.Net.CookieCollection WebSocketSharp.WebSocket::_cookies
	CookieCollection_tF23DBB1EEBB59A50351284EDD83427036849ED4C * ____cookies_6;
	// WebSocketSharp.Net.NetworkCredential WebSocketSharp.WebSocket::_credentials
	NetworkCredential_tDE0DE626CD292A8D082923A238C030136F730E31 * ____credentials_7;
	// System.Boolean WebSocketSharp.WebSocket::_emitOnPing
	bool ____emitOnPing_8;
	// System.Boolean WebSocketSharp.WebSocket::_enableRedirection
	bool ____enableRedirection_9;
	// System.String WebSocketSharp.WebSocket::_extensions
	String_t* ____extensions_10;
	// System.Boolean WebSocketSharp.WebSocket::_extensionsRequested
	bool ____extensionsRequested_11;
	// System.Object WebSocketSharp.WebSocket::_forMessageEventQueue
	RuntimeObject * ____forMessageEventQueue_12;
	// System.Object WebSocketSharp.WebSocket::_forPing
	RuntimeObject * ____forPing_13;
	// System.Object WebSocketSharp.WebSocket::_forSend
	RuntimeObject * ____forSend_14;
	// System.Object WebSocketSharp.WebSocket::_forState
	RuntimeObject * ____forState_15;
	// System.IO.MemoryStream WebSocketSharp.WebSocket::_fragmentsBuffer
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * ____fragmentsBuffer_16;
	// System.Boolean WebSocketSharp.WebSocket::_fragmentsCompressed
	bool ____fragmentsCompressed_17;
	// WebSocketSharp.Opcode WebSocketSharp.WebSocket::_fragmentsOpcode
	uint8_t ____fragmentsOpcode_18;
	// System.Boolean WebSocketSharp.WebSocket::_inContinuation
	bool ____inContinuation_19;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_inMessage
	bool ____inMessage_20;
	// WebSocketSharp.Logger modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_logger
	Logger_t7A4ECD749D0DFE4B32485415CDC994EC550D5E00 * ____logger_21;
	// System.Action`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::_message
	Action_1_t9FFF2C99547BF4BEEE6EA7FEE6CE4D9A4A9D18CA * ____message_23;
	// System.Collections.Generic.Queue`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::_messageEventQueue
	Queue_1_tA450F0D43F900FB0A990F41DFEE3AB2B32A57726 * ____messageEventQueue_24;
	// System.UInt32 WebSocketSharp.WebSocket::_nonceCount
	uint32_t ____nonceCount_25;
	// System.String WebSocketSharp.WebSocket::_origin
	String_t* ____origin_26;
	// System.Threading.ManualResetEvent WebSocketSharp.WebSocket::_pongReceived
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ____pongReceived_27;
	// System.Boolean WebSocketSharp.WebSocket::_preAuth
	bool ____preAuth_28;
	// System.String WebSocketSharp.WebSocket::_protocol
	String_t* ____protocol_29;
	// System.String[] WebSocketSharp.WebSocket::_protocols
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____protocols_30;
	// System.Boolean WebSocketSharp.WebSocket::_protocolsRequested
	bool ____protocolsRequested_31;
	// WebSocketSharp.Net.NetworkCredential WebSocketSharp.WebSocket::_proxyCredentials
	NetworkCredential_tDE0DE626CD292A8D082923A238C030136F730E31 * ____proxyCredentials_32;
	// System.Uri WebSocketSharp.WebSocket::_proxyUri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ____proxyUri_33;
	// WebSocketSharp.WebSocketState modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_readyState
	uint16_t ____readyState_34;
	// System.Threading.ManualResetEvent WebSocketSharp.WebSocket::_receivingExited
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ____receivingExited_35;
	// System.Int32 WebSocketSharp.WebSocket::_retryCountForConnect
	int32_t ____retryCountForConnect_36;
	// System.Boolean WebSocketSharp.WebSocket::_secure
	bool ____secure_37;
	// WebSocketSharp.Net.ClientSslConfiguration WebSocketSharp.WebSocket::_sslConfig
	ClientSslConfiguration_tBCB6B850888E227EC57B1F43E44099AD1CFEE605 * ____sslConfig_38;
	// System.IO.Stream WebSocketSharp.WebSocket::_stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____stream_39;
	// System.Net.Sockets.TcpClient WebSocketSharp.WebSocket::_tcpClient
	TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ____tcpClient_40;
	// System.Uri WebSocketSharp.WebSocket::_uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ____uri_41;
	// System.TimeSpan WebSocketSharp.WebSocket::_waitTime
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ____waitTime_42;
	// System.EventHandler`1<WebSocketSharp.CloseEventArgs> WebSocketSharp.WebSocket::OnClose
	EventHandler_1_t1EAEE27B910BB728DDC5EF33FA0C074C1ACD529D * ___OnClose_46;
	// System.EventHandler`1<WebSocketSharp.ErrorEventArgs> WebSocketSharp.WebSocket::OnError
	EventHandler_1_t12EFE365B70F31E5A6ECBBDAD96F3268D4756A0C * ___OnError_47;
	// System.EventHandler`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::OnMessage
	EventHandler_1_t16A01CAC8C1A10B68548F9981B369B9D589AF319 * ___OnMessage_48;
	// System.EventHandler WebSocketSharp.WebSocket::OnOpen
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___OnOpen_49;

public:
	inline static int32_t get_offset_of__authChallenge_0() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____authChallenge_0)); }
	inline AuthenticationChallenge_t5FF9DBB25BC0999019BDF17BB5739CF77DEB09EE * get__authChallenge_0() const { return ____authChallenge_0; }
	inline AuthenticationChallenge_t5FF9DBB25BC0999019BDF17BB5739CF77DEB09EE ** get_address_of__authChallenge_0() { return &____authChallenge_0; }
	inline void set__authChallenge_0(AuthenticationChallenge_t5FF9DBB25BC0999019BDF17BB5739CF77DEB09EE * value)
	{
		____authChallenge_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____authChallenge_0), (void*)value);
	}

	inline static int32_t get_offset_of__base64Key_1() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____base64Key_1)); }
	inline String_t* get__base64Key_1() const { return ____base64Key_1; }
	inline String_t** get_address_of__base64Key_1() { return &____base64Key_1; }
	inline void set__base64Key_1(String_t* value)
	{
		____base64Key_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____base64Key_1), (void*)value);
	}

	inline static int32_t get_offset_of__client_2() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____client_2)); }
	inline bool get__client_2() const { return ____client_2; }
	inline bool* get_address_of__client_2() { return &____client_2; }
	inline void set__client_2(bool value)
	{
		____client_2 = value;
	}

	inline static int32_t get_offset_of__closeContext_3() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____closeContext_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__closeContext_3() const { return ____closeContext_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__closeContext_3() { return &____closeContext_3; }
	inline void set__closeContext_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____closeContext_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____closeContext_3), (void*)value);
	}

	inline static int32_t get_offset_of__compression_4() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____compression_4)); }
	inline uint8_t get__compression_4() const { return ____compression_4; }
	inline uint8_t* get_address_of__compression_4() { return &____compression_4; }
	inline void set__compression_4(uint8_t value)
	{
		____compression_4 = value;
	}

	inline static int32_t get_offset_of__context_5() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____context_5)); }
	inline WebSocketContext_t476CB6678AEFC9527A97C086FAE5F5DCE4912ED9 * get__context_5() const { return ____context_5; }
	inline WebSocketContext_t476CB6678AEFC9527A97C086FAE5F5DCE4912ED9 ** get_address_of__context_5() { return &____context_5; }
	inline void set__context_5(WebSocketContext_t476CB6678AEFC9527A97C086FAE5F5DCE4912ED9 * value)
	{
		____context_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____context_5), (void*)value);
	}

	inline static int32_t get_offset_of__cookies_6() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____cookies_6)); }
	inline CookieCollection_tF23DBB1EEBB59A50351284EDD83427036849ED4C * get__cookies_6() const { return ____cookies_6; }
	inline CookieCollection_tF23DBB1EEBB59A50351284EDD83427036849ED4C ** get_address_of__cookies_6() { return &____cookies_6; }
	inline void set__cookies_6(CookieCollection_tF23DBB1EEBB59A50351284EDD83427036849ED4C * value)
	{
		____cookies_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cookies_6), (void*)value);
	}

	inline static int32_t get_offset_of__credentials_7() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____credentials_7)); }
	inline NetworkCredential_tDE0DE626CD292A8D082923A238C030136F730E31 * get__credentials_7() const { return ____credentials_7; }
	inline NetworkCredential_tDE0DE626CD292A8D082923A238C030136F730E31 ** get_address_of__credentials_7() { return &____credentials_7; }
	inline void set__credentials_7(NetworkCredential_tDE0DE626CD292A8D082923A238C030136F730E31 * value)
	{
		____credentials_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____credentials_7), (void*)value);
	}

	inline static int32_t get_offset_of__emitOnPing_8() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____emitOnPing_8)); }
	inline bool get__emitOnPing_8() const { return ____emitOnPing_8; }
	inline bool* get_address_of__emitOnPing_8() { return &____emitOnPing_8; }
	inline void set__emitOnPing_8(bool value)
	{
		____emitOnPing_8 = value;
	}

	inline static int32_t get_offset_of__enableRedirection_9() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____enableRedirection_9)); }
	inline bool get__enableRedirection_9() const { return ____enableRedirection_9; }
	inline bool* get_address_of__enableRedirection_9() { return &____enableRedirection_9; }
	inline void set__enableRedirection_9(bool value)
	{
		____enableRedirection_9 = value;
	}

	inline static int32_t get_offset_of__extensions_10() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____extensions_10)); }
	inline String_t* get__extensions_10() const { return ____extensions_10; }
	inline String_t** get_address_of__extensions_10() { return &____extensions_10; }
	inline void set__extensions_10(String_t* value)
	{
		____extensions_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____extensions_10), (void*)value);
	}

	inline static int32_t get_offset_of__extensionsRequested_11() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____extensionsRequested_11)); }
	inline bool get__extensionsRequested_11() const { return ____extensionsRequested_11; }
	inline bool* get_address_of__extensionsRequested_11() { return &____extensionsRequested_11; }
	inline void set__extensionsRequested_11(bool value)
	{
		____extensionsRequested_11 = value;
	}

	inline static int32_t get_offset_of__forMessageEventQueue_12() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____forMessageEventQueue_12)); }
	inline RuntimeObject * get__forMessageEventQueue_12() const { return ____forMessageEventQueue_12; }
	inline RuntimeObject ** get_address_of__forMessageEventQueue_12() { return &____forMessageEventQueue_12; }
	inline void set__forMessageEventQueue_12(RuntimeObject * value)
	{
		____forMessageEventQueue_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____forMessageEventQueue_12), (void*)value);
	}

	inline static int32_t get_offset_of__forPing_13() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____forPing_13)); }
	inline RuntimeObject * get__forPing_13() const { return ____forPing_13; }
	inline RuntimeObject ** get_address_of__forPing_13() { return &____forPing_13; }
	inline void set__forPing_13(RuntimeObject * value)
	{
		____forPing_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____forPing_13), (void*)value);
	}

	inline static int32_t get_offset_of__forSend_14() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____forSend_14)); }
	inline RuntimeObject * get__forSend_14() const { return ____forSend_14; }
	inline RuntimeObject ** get_address_of__forSend_14() { return &____forSend_14; }
	inline void set__forSend_14(RuntimeObject * value)
	{
		____forSend_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____forSend_14), (void*)value);
	}

	inline static int32_t get_offset_of__forState_15() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____forState_15)); }
	inline RuntimeObject * get__forState_15() const { return ____forState_15; }
	inline RuntimeObject ** get_address_of__forState_15() { return &____forState_15; }
	inline void set__forState_15(RuntimeObject * value)
	{
		____forState_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____forState_15), (void*)value);
	}

	inline static int32_t get_offset_of__fragmentsBuffer_16() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____fragmentsBuffer_16)); }
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * get__fragmentsBuffer_16() const { return ____fragmentsBuffer_16; }
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** get_address_of__fragmentsBuffer_16() { return &____fragmentsBuffer_16; }
	inline void set__fragmentsBuffer_16(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * value)
	{
		____fragmentsBuffer_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fragmentsBuffer_16), (void*)value);
	}

	inline static int32_t get_offset_of__fragmentsCompressed_17() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____fragmentsCompressed_17)); }
	inline bool get__fragmentsCompressed_17() const { return ____fragmentsCompressed_17; }
	inline bool* get_address_of__fragmentsCompressed_17() { return &____fragmentsCompressed_17; }
	inline void set__fragmentsCompressed_17(bool value)
	{
		____fragmentsCompressed_17 = value;
	}

	inline static int32_t get_offset_of__fragmentsOpcode_18() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____fragmentsOpcode_18)); }
	inline uint8_t get__fragmentsOpcode_18() const { return ____fragmentsOpcode_18; }
	inline uint8_t* get_address_of__fragmentsOpcode_18() { return &____fragmentsOpcode_18; }
	inline void set__fragmentsOpcode_18(uint8_t value)
	{
		____fragmentsOpcode_18 = value;
	}

	inline static int32_t get_offset_of__inContinuation_19() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____inContinuation_19)); }
	inline bool get__inContinuation_19() const { return ____inContinuation_19; }
	inline bool* get_address_of__inContinuation_19() { return &____inContinuation_19; }
	inline void set__inContinuation_19(bool value)
	{
		____inContinuation_19 = value;
	}

	inline static int32_t get_offset_of__inMessage_20() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____inMessage_20)); }
	inline bool get__inMessage_20() const { return ____inMessage_20; }
	inline bool* get_address_of__inMessage_20() { return &____inMessage_20; }
	inline void set__inMessage_20(bool value)
	{
		____inMessage_20 = value;
	}

	inline static int32_t get_offset_of__logger_21() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____logger_21)); }
	inline Logger_t7A4ECD749D0DFE4B32485415CDC994EC550D5E00 * get__logger_21() const { return ____logger_21; }
	inline Logger_t7A4ECD749D0DFE4B32485415CDC994EC550D5E00 ** get_address_of__logger_21() { return &____logger_21; }
	inline void set__logger_21(Logger_t7A4ECD749D0DFE4B32485415CDC994EC550D5E00 * value)
	{
		____logger_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____logger_21), (void*)value);
	}

	inline static int32_t get_offset_of__message_23() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____message_23)); }
	inline Action_1_t9FFF2C99547BF4BEEE6EA7FEE6CE4D9A4A9D18CA * get__message_23() const { return ____message_23; }
	inline Action_1_t9FFF2C99547BF4BEEE6EA7FEE6CE4D9A4A9D18CA ** get_address_of__message_23() { return &____message_23; }
	inline void set__message_23(Action_1_t9FFF2C99547BF4BEEE6EA7FEE6CE4D9A4A9D18CA * value)
	{
		____message_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_23), (void*)value);
	}

	inline static int32_t get_offset_of__messageEventQueue_24() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____messageEventQueue_24)); }
	inline Queue_1_tA450F0D43F900FB0A990F41DFEE3AB2B32A57726 * get__messageEventQueue_24() const { return ____messageEventQueue_24; }
	inline Queue_1_tA450F0D43F900FB0A990F41DFEE3AB2B32A57726 ** get_address_of__messageEventQueue_24() { return &____messageEventQueue_24; }
	inline void set__messageEventQueue_24(Queue_1_tA450F0D43F900FB0A990F41DFEE3AB2B32A57726 * value)
	{
		____messageEventQueue_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____messageEventQueue_24), (void*)value);
	}

	inline static int32_t get_offset_of__nonceCount_25() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____nonceCount_25)); }
	inline uint32_t get__nonceCount_25() const { return ____nonceCount_25; }
	inline uint32_t* get_address_of__nonceCount_25() { return &____nonceCount_25; }
	inline void set__nonceCount_25(uint32_t value)
	{
		____nonceCount_25 = value;
	}

	inline static int32_t get_offset_of__origin_26() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____origin_26)); }
	inline String_t* get__origin_26() const { return ____origin_26; }
	inline String_t** get_address_of__origin_26() { return &____origin_26; }
	inline void set__origin_26(String_t* value)
	{
		____origin_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____origin_26), (void*)value);
	}

	inline static int32_t get_offset_of__pongReceived_27() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____pongReceived_27)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get__pongReceived_27() const { return ____pongReceived_27; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of__pongReceived_27() { return &____pongReceived_27; }
	inline void set__pongReceived_27(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		____pongReceived_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pongReceived_27), (void*)value);
	}

	inline static int32_t get_offset_of__preAuth_28() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____preAuth_28)); }
	inline bool get__preAuth_28() const { return ____preAuth_28; }
	inline bool* get_address_of__preAuth_28() { return &____preAuth_28; }
	inline void set__preAuth_28(bool value)
	{
		____preAuth_28 = value;
	}

	inline static int32_t get_offset_of__protocol_29() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____protocol_29)); }
	inline String_t* get__protocol_29() const { return ____protocol_29; }
	inline String_t** get_address_of__protocol_29() { return &____protocol_29; }
	inline void set__protocol_29(String_t* value)
	{
		____protocol_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____protocol_29), (void*)value);
	}

	inline static int32_t get_offset_of__protocols_30() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____protocols_30)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__protocols_30() const { return ____protocols_30; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__protocols_30() { return &____protocols_30; }
	inline void set__protocols_30(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____protocols_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____protocols_30), (void*)value);
	}

	inline static int32_t get_offset_of__protocolsRequested_31() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____protocolsRequested_31)); }
	inline bool get__protocolsRequested_31() const { return ____protocolsRequested_31; }
	inline bool* get_address_of__protocolsRequested_31() { return &____protocolsRequested_31; }
	inline void set__protocolsRequested_31(bool value)
	{
		____protocolsRequested_31 = value;
	}

	inline static int32_t get_offset_of__proxyCredentials_32() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____proxyCredentials_32)); }
	inline NetworkCredential_tDE0DE626CD292A8D082923A238C030136F730E31 * get__proxyCredentials_32() const { return ____proxyCredentials_32; }
	inline NetworkCredential_tDE0DE626CD292A8D082923A238C030136F730E31 ** get_address_of__proxyCredentials_32() { return &____proxyCredentials_32; }
	inline void set__proxyCredentials_32(NetworkCredential_tDE0DE626CD292A8D082923A238C030136F730E31 * value)
	{
		____proxyCredentials_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____proxyCredentials_32), (void*)value);
	}

	inline static int32_t get_offset_of__proxyUri_33() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____proxyUri_33)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get__proxyUri_33() const { return ____proxyUri_33; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of__proxyUri_33() { return &____proxyUri_33; }
	inline void set__proxyUri_33(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		____proxyUri_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____proxyUri_33), (void*)value);
	}

	inline static int32_t get_offset_of__readyState_34() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____readyState_34)); }
	inline uint16_t get__readyState_34() const { return ____readyState_34; }
	inline uint16_t* get_address_of__readyState_34() { return &____readyState_34; }
	inline void set__readyState_34(uint16_t value)
	{
		____readyState_34 = value;
	}

	inline static int32_t get_offset_of__receivingExited_35() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____receivingExited_35)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get__receivingExited_35() const { return ____receivingExited_35; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of__receivingExited_35() { return &____receivingExited_35; }
	inline void set__receivingExited_35(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		____receivingExited_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____receivingExited_35), (void*)value);
	}

	inline static int32_t get_offset_of__retryCountForConnect_36() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____retryCountForConnect_36)); }
	inline int32_t get__retryCountForConnect_36() const { return ____retryCountForConnect_36; }
	inline int32_t* get_address_of__retryCountForConnect_36() { return &____retryCountForConnect_36; }
	inline void set__retryCountForConnect_36(int32_t value)
	{
		____retryCountForConnect_36 = value;
	}

	inline static int32_t get_offset_of__secure_37() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____secure_37)); }
	inline bool get__secure_37() const { return ____secure_37; }
	inline bool* get_address_of__secure_37() { return &____secure_37; }
	inline void set__secure_37(bool value)
	{
		____secure_37 = value;
	}

	inline static int32_t get_offset_of__sslConfig_38() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____sslConfig_38)); }
	inline ClientSslConfiguration_tBCB6B850888E227EC57B1F43E44099AD1CFEE605 * get__sslConfig_38() const { return ____sslConfig_38; }
	inline ClientSslConfiguration_tBCB6B850888E227EC57B1F43E44099AD1CFEE605 ** get_address_of__sslConfig_38() { return &____sslConfig_38; }
	inline void set__sslConfig_38(ClientSslConfiguration_tBCB6B850888E227EC57B1F43E44099AD1CFEE605 * value)
	{
		____sslConfig_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sslConfig_38), (void*)value);
	}

	inline static int32_t get_offset_of__stream_39() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____stream_39)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__stream_39() const { return ____stream_39; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__stream_39() { return &____stream_39; }
	inline void set__stream_39(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____stream_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stream_39), (void*)value);
	}

	inline static int32_t get_offset_of__tcpClient_40() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____tcpClient_40)); }
	inline TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * get__tcpClient_40() const { return ____tcpClient_40; }
	inline TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE ** get_address_of__tcpClient_40() { return &____tcpClient_40; }
	inline void set__tcpClient_40(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * value)
	{
		____tcpClient_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tcpClient_40), (void*)value);
	}

	inline static int32_t get_offset_of__uri_41() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____uri_41)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get__uri_41() const { return ____uri_41; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of__uri_41() { return &____uri_41; }
	inline void set__uri_41(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		____uri_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uri_41), (void*)value);
	}

	inline static int32_t get_offset_of__waitTime_42() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ____waitTime_42)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get__waitTime_42() const { return ____waitTime_42; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of__waitTime_42() { return &____waitTime_42; }
	inline void set__waitTime_42(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		____waitTime_42 = value;
	}

	inline static int32_t get_offset_of_OnClose_46() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ___OnClose_46)); }
	inline EventHandler_1_t1EAEE27B910BB728DDC5EF33FA0C074C1ACD529D * get_OnClose_46() const { return ___OnClose_46; }
	inline EventHandler_1_t1EAEE27B910BB728DDC5EF33FA0C074C1ACD529D ** get_address_of_OnClose_46() { return &___OnClose_46; }
	inline void set_OnClose_46(EventHandler_1_t1EAEE27B910BB728DDC5EF33FA0C074C1ACD529D * value)
	{
		___OnClose_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClose_46), (void*)value);
	}

	inline static int32_t get_offset_of_OnError_47() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ___OnError_47)); }
	inline EventHandler_1_t12EFE365B70F31E5A6ECBBDAD96F3268D4756A0C * get_OnError_47() const { return ___OnError_47; }
	inline EventHandler_1_t12EFE365B70F31E5A6ECBBDAD96F3268D4756A0C ** get_address_of_OnError_47() { return &___OnError_47; }
	inline void set_OnError_47(EventHandler_1_t12EFE365B70F31E5A6ECBBDAD96F3268D4756A0C * value)
	{
		___OnError_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnError_47), (void*)value);
	}

	inline static int32_t get_offset_of_OnMessage_48() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ___OnMessage_48)); }
	inline EventHandler_1_t16A01CAC8C1A10B68548F9981B369B9D589AF319 * get_OnMessage_48() const { return ___OnMessage_48; }
	inline EventHandler_1_t16A01CAC8C1A10B68548F9981B369B9D589AF319 ** get_address_of_OnMessage_48() { return &___OnMessage_48; }
	inline void set_OnMessage_48(EventHandler_1_t16A01CAC8C1A10B68548F9981B369B9D589AF319 * value)
	{
		___OnMessage_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMessage_48), (void*)value);
	}

	inline static int32_t get_offset_of_OnOpen_49() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307, ___OnOpen_49)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_OnOpen_49() const { return ___OnOpen_49; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_OnOpen_49() { return &___OnOpen_49; }
	inline void set_OnOpen_49(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___OnOpen_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOpen_49), (void*)value);
	}
};

struct WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307_StaticFields
{
public:
	// System.Int32 WebSocketSharp.WebSocket::_maxRetryCountForConnect
	int32_t ____maxRetryCountForConnect_22;
	// System.Byte[] WebSocketSharp.WebSocket::EmptyBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___EmptyBytes_43;
	// System.Int32 WebSocketSharp.WebSocket::FragmentLength
	int32_t ___FragmentLength_44;
	// System.Security.Cryptography.RandomNumberGenerator WebSocketSharp.WebSocket::RandomNumber
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ___RandomNumber_45;

public:
	inline static int32_t get_offset_of__maxRetryCountForConnect_22() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307_StaticFields, ____maxRetryCountForConnect_22)); }
	inline int32_t get__maxRetryCountForConnect_22() const { return ____maxRetryCountForConnect_22; }
	inline int32_t* get_address_of__maxRetryCountForConnect_22() { return &____maxRetryCountForConnect_22; }
	inline void set__maxRetryCountForConnect_22(int32_t value)
	{
		____maxRetryCountForConnect_22 = value;
	}

	inline static int32_t get_offset_of_EmptyBytes_43() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307_StaticFields, ___EmptyBytes_43)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_EmptyBytes_43() const { return ___EmptyBytes_43; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_EmptyBytes_43() { return &___EmptyBytes_43; }
	inline void set_EmptyBytes_43(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___EmptyBytes_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyBytes_43), (void*)value);
	}

	inline static int32_t get_offset_of_FragmentLength_44() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307_StaticFields, ___FragmentLength_44)); }
	inline int32_t get_FragmentLength_44() const { return ___FragmentLength_44; }
	inline int32_t* get_address_of_FragmentLength_44() { return &___FragmentLength_44; }
	inline void set_FragmentLength_44(int32_t value)
	{
		___FragmentLength_44 = value;
	}

	inline static int32_t get_offset_of_RandomNumber_45() { return static_cast<int32_t>(offsetof(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307_StaticFields, ___RandomNumber_45)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get_RandomNumber_45() const { return ___RandomNumber_45; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of_RandomNumber_45() { return &___RandomNumber_45; }
	inline void set_RandomNumber_45(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		___RandomNumber_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RandomNumber_45), (void*)value);
	}
};


// WebSocketSharp.WebSocketException
struct WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD  : public Exception_t
{
public:
	// WebSocketSharp.CloseStatusCode WebSocketSharp.WebSocketException::_code
	uint16_t ____code_17;

public:
	inline static int32_t get_offset_of__code_17() { return static_cast<int32_t>(offsetof(WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD, ____code_17)); }
	inline uint16_t get__code_17() const { return ____code_17; }
	inline uint16_t* get_address_of__code_17() { return &____code_17; }
	inline void set__code_17(uint16_t value)
	{
		____code_17 = value;
	}
};


// WebSocketSharp.WebSocketFrame
struct WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E  : public RuntimeObject
{
public:
	// System.Byte[] WebSocketSharp.WebSocketFrame::_extPayloadLength
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____extPayloadLength_0;
	// WebSocketSharp.Fin WebSocketSharp.WebSocketFrame::_fin
	uint8_t ____fin_1;
	// WebSocketSharp.Mask WebSocketSharp.WebSocketFrame::_mask
	uint8_t ____mask_2;
	// System.Byte[] WebSocketSharp.WebSocketFrame::_maskingKey
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____maskingKey_3;
	// WebSocketSharp.Opcode WebSocketSharp.WebSocketFrame::_opcode
	uint8_t ____opcode_4;
	// WebSocketSharp.PayloadData WebSocketSharp.WebSocketFrame::_payloadData
	PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * ____payloadData_5;
	// System.Byte WebSocketSharp.WebSocketFrame::_payloadLength
	uint8_t ____payloadLength_6;
	// WebSocketSharp.Rsv WebSocketSharp.WebSocketFrame::_rsv1
	uint8_t ____rsv1_7;
	// WebSocketSharp.Rsv WebSocketSharp.WebSocketFrame::_rsv2
	uint8_t ____rsv2_8;
	// WebSocketSharp.Rsv WebSocketSharp.WebSocketFrame::_rsv3
	uint8_t ____rsv3_9;

public:
	inline static int32_t get_offset_of__extPayloadLength_0() { return static_cast<int32_t>(offsetof(WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E, ____extPayloadLength_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__extPayloadLength_0() const { return ____extPayloadLength_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__extPayloadLength_0() { return &____extPayloadLength_0; }
	inline void set__extPayloadLength_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____extPayloadLength_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____extPayloadLength_0), (void*)value);
	}

	inline static int32_t get_offset_of__fin_1() { return static_cast<int32_t>(offsetof(WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E, ____fin_1)); }
	inline uint8_t get__fin_1() const { return ____fin_1; }
	inline uint8_t* get_address_of__fin_1() { return &____fin_1; }
	inline void set__fin_1(uint8_t value)
	{
		____fin_1 = value;
	}

	inline static int32_t get_offset_of__mask_2() { return static_cast<int32_t>(offsetof(WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E, ____mask_2)); }
	inline uint8_t get__mask_2() const { return ____mask_2; }
	inline uint8_t* get_address_of__mask_2() { return &____mask_2; }
	inline void set__mask_2(uint8_t value)
	{
		____mask_2 = value;
	}

	inline static int32_t get_offset_of__maskingKey_3() { return static_cast<int32_t>(offsetof(WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E, ____maskingKey_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__maskingKey_3() const { return ____maskingKey_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__maskingKey_3() { return &____maskingKey_3; }
	inline void set__maskingKey_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____maskingKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maskingKey_3), (void*)value);
	}

	inline static int32_t get_offset_of__opcode_4() { return static_cast<int32_t>(offsetof(WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E, ____opcode_4)); }
	inline uint8_t get__opcode_4() const { return ____opcode_4; }
	inline uint8_t* get_address_of__opcode_4() { return &____opcode_4; }
	inline void set__opcode_4(uint8_t value)
	{
		____opcode_4 = value;
	}

	inline static int32_t get_offset_of__payloadData_5() { return static_cast<int32_t>(offsetof(WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E, ____payloadData_5)); }
	inline PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * get__payloadData_5() const { return ____payloadData_5; }
	inline PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E ** get_address_of__payloadData_5() { return &____payloadData_5; }
	inline void set__payloadData_5(PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * value)
	{
		____payloadData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____payloadData_5), (void*)value);
	}

	inline static int32_t get_offset_of__payloadLength_6() { return static_cast<int32_t>(offsetof(WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E, ____payloadLength_6)); }
	inline uint8_t get__payloadLength_6() const { return ____payloadLength_6; }
	inline uint8_t* get_address_of__payloadLength_6() { return &____payloadLength_6; }
	inline void set__payloadLength_6(uint8_t value)
	{
		____payloadLength_6 = value;
	}

	inline static int32_t get_offset_of__rsv1_7() { return static_cast<int32_t>(offsetof(WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E, ____rsv1_7)); }
	inline uint8_t get__rsv1_7() const { return ____rsv1_7; }
	inline uint8_t* get_address_of__rsv1_7() { return &____rsv1_7; }
	inline void set__rsv1_7(uint8_t value)
	{
		____rsv1_7 = value;
	}

	inline static int32_t get_offset_of__rsv2_8() { return static_cast<int32_t>(offsetof(WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E, ____rsv2_8)); }
	inline uint8_t get__rsv2_8() const { return ____rsv2_8; }
	inline uint8_t* get_address_of__rsv2_8() { return &____rsv2_8; }
	inline void set__rsv2_8(uint8_t value)
	{
		____rsv2_8 = value;
	}

	inline static int32_t get_offset_of__rsv3_9() { return static_cast<int32_t>(offsetof(WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E, ____rsv3_9)); }
	inline uint8_t get__rsv3_9() const { return ____rsv3_9; }
	inline uint8_t* get_address_of__rsv3_9() { return &____rsv3_9; }
	inline void set__rsv3_9(uint8_t value)
	{
		____rsv3_9 = value;
	}
};

struct WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_StaticFields
{
public:
	// System.Byte[] WebSocketSharp.WebSocketFrame::EmptyPingBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___EmptyPingBytes_10;

public:
	inline static int32_t get_offset_of_EmptyPingBytes_10() { return static_cast<int32_t>(offsetof(WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_StaticFields, ___EmptyPingBytes_10)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_EmptyPingBytes_10() const { return ___EmptyPingBytes_10; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_EmptyPingBytes_10() { return &___EmptyPingBytes_10; }
	inline void set_EmptyPingBytes_10(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___EmptyPingBytes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyPingBytes_10), (void*)value);
	}
};


// System.Action`1<System.Byte[]>
struct Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Exception>
struct Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Int64>
struct Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<WebSocketSharp.WebSocketFrame>
struct Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`4<System.String,System.String,System.String,System.String>
struct Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Action`4<System.String,System.String,System.String,System.String>>
struct Func_1_t14316C5A33A8948423D51DEFFBE784F219A6AFED  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA  : public EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C
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


// System.IO.EndOfStreamException
struct EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059  : public IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
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
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method);
// System.Void System.Action`4<System.Object,System.Object,System.Object,System.Object>::Invoke(!0,!1,!2,!3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_4_Invoke_mB0B985148B85078BF90C75ECB176475EABF127D5_gshared (Action_4_tDB82015AB9EE6C7A4D051C5068F94F41BD15DE0D * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !1 System.Func`2<System.Int32,System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Func_2_Invoke_mE42F035B56D1C1B51E922AE8EA4261AA141DE6C7_gshared (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * __this, int32_t ___arg0, const RuntimeMethod* method);
// T[] WebSocketSharp.Ext::SubArray<System.Byte>(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Ext_SubArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9D56E868860FD371A750EAA140BFE7EFAC275330_gshared (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int64>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39_gshared (Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * __this, int64_t ___obj0, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Char>(!!0[],!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mD5F29E323D31B110F267B79CAF2E456F4C77ECE4_gshared (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___array0, Il2CppChar ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_gshared (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, uint8_t ___item0, const RuntimeMethod* method);
// !0 System.Func`1<System.Boolean>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Func_1_EndInvoke_m86A4760F9BEAFE6C019DD885A221AB48066F53D6_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject* ___result0, const RuntimeMethod* method);
// System.Void System.Action`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_4__ctor_m13BE596D4BB6EE74E7BABCD899B54676A90C51E5_gshared (Action_4_tDB82015AB9EE6C7A4D051C5068F94F41BD15DE0D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::CreatePingFrame(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * WebSocketFrame_CreatePingFrame_mA5EA2B915FBA1343958AA6824499ADBACFC4DEB5 (bool ___mask0, const RuntimeMethod* method);
// System.Byte[] WebSocketSharp.WebSocketFrame::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WebSocketFrame_ToArray_mA1FB44622CD8F356F869F4E5FB741E26A0A36E94 (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.PayloadData::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayloadData__ctor_mF195F9D472FD6D7A7913DCB1D321EA992EED7949 (PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame::.ctor(WebSocketSharp.Fin,WebSocketSharp.Opcode,WebSocketSharp.PayloadData,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame__ctor_mF92491BF286A024786049C17647CD1C3CB725F40 (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, uint8_t ___fin0, uint8_t ___opcode1, PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * ___payloadData2, bool ___compressed3, bool ___mask4, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.Ext::IsData(WebSocketSharp.Opcode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ext_IsData_mE9635550252EE296581FFABB5B547DE687C4F6FF (uint8_t ___opcode0, const RuntimeMethod* method);
// System.UInt64 WebSocketSharp.PayloadData::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t PayloadData_get_Length_mDC78804C235C880C3EF1448E8496944B4728649F (PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * __this, const RuntimeMethod* method);
// System.Byte[] WebSocketSharp.Ext::InternalToByteArray(System.UInt16,WebSocketSharp.ByteOrder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Ext_InternalToByteArray_m95D68E7361577B50D01325CDFD283CC9B2F50D52 (uint16_t ___value0, int32_t ___order1, const RuntimeMethod* method);
// System.Byte[] WebSocketSharp.Ext::InternalToByteArray(System.UInt64,WebSocketSharp.ByteOrder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Ext_InternalToByteArray_m1121E122A87FE8288C087D83E62FC1D7B449A732 (uint64_t ___value0, int32_t ___order1, const RuntimeMethod* method);
// System.Byte[] WebSocketSharp.WebSocketFrame::createMaskingKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WebSocketFrame_createMaskingKey_m814A4A2D3280399A2CAFF532BD5857246AFB298B (const RuntimeMethod* method);
// System.Void WebSocketSharp.PayloadData::Mask(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayloadData_Mask_mF740F0F886A5AD0E97D93AE0BDEC1D6F48549460 (PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___key0, const RuntimeMethod* method);
// System.UInt64 WebSocketSharp.Ext::ToUInt64(System.Byte[],WebSocketSharp.ByteOrder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Ext_ToUInt64_m7972E322BB046B1A789830E659694981BFAE0ADD (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___source0, int32_t ___sourceOrder1, const RuntimeMethod* method);
// System.UInt16 WebSocketSharp.Ext::ToUInt16(System.Byte[],WebSocketSharp.ByteOrder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Ext_ToUInt16_mA37BDEF1960D766E646EFEF6156F78FA5F733A04 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___source0, int32_t ___sourceOrder1, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass67_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass67_0__ctor_m25277E2EC105F3C5BC980178417339596D5A703A (U3CU3Ec__DisplayClass67_0_tDBF918B3DD900B583E012554C379933CDCFA4EA4 * __this, const RuntimeMethod* method);
// System.UInt64 WebSocketSharp.WebSocketFrame::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t WebSocketFrame_get_Length_mA9E74472B498346F874BE36A214B0DB00E16AAE2 (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E (StringBuilder_t * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Func`1<System.Action`4<System.String,System.String,System.String,System.String>>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mFA7CE0231236E9D2D93B07782B199357061CE3FA (Func_1_t14316C5A33A8948423D51DEFFBE784F219A6AFED * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t14316C5A33A8948423D51DEFFBE784F219A6AFED *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared)(__this, ___object0, ___method1, method);
}
// !0 System.Func`1<System.Action`4<System.String,System.String,System.String,System.String>>::Invoke()
inline Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * Func_1_Invoke_mD4E991296E96614D54847DA8E9C7F7C1C4525E6A (Func_1_t14316C5A33A8948423D51DEFFBE784F219A6AFED * __this, const RuntimeMethod* method)
{
	return ((  Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * (*) (Func_1_t14316C5A33A8948423D51DEFFBE784F219A6AFED *, const RuntimeMethod*))Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared)(__this, method);
}
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m338CB721AA43A1AD6DACE1EFA12F2CE18130DDB7 (uint8_t ___value0, int32_t ___toBase1, const RuntimeMethod* method);
// System.String System.String::PadLeft(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadLeft_m7666BD115C91CF7F69642532F4CA9B0726C0A328 (String_t* __this, int32_t ___totalWidth0, Il2CppChar ___paddingChar1, const RuntimeMethod* method);
// System.Void System.Action`4<System.String,System.String,System.String,System.String>::Invoke(!0,!1,!2,!3)
inline void Action_4_Invoke_m0A313E142F4941B14FF053146BE0B71FA00D289B (Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * __this, String_t* ___arg10, String_t* ___arg21, String_t* ___arg32, String_t* ___arg43, const RuntimeMethod* method)
{
	((  void (*) (Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E *, String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*))Action_4_Invoke_mB0B985148B85078BF90C75ECB176475EABF127D5_gshared)(__this, ___arg10, ___arg21, ___arg32, ___arg43, method);
}
// System.UInt64 WebSocketSharp.WebSocketFrame::get_ExactPayloadLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t WebSocketFrame_get_ExactPayloadLength_m2162839191FF62DBB2D1DAD69BC2FD526161F56B (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method);
// System.String System.UInt64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m3644686F0A0E32CB94D300CF891DBD7920396F37 (uint64_t* __this, const RuntimeMethod* method);
// System.String System.BitConverter::ToString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BitConverter_ToString_mD476DB63219FD7C7FFB472ABEB04A8BB2D171F30 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsText_m6F1610D6DBE3F6AF120CF3583108C756574B1A2C (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsFragment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsFragment_mC3E54F3ED67ADCE01B00D30D793C2FBAE66CB56A (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsMasked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsMasked_m16421A430B758792761BCFFA0D937EDC57FBBC47 (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsCompressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsCompressed_mB13266E84B60606C664B4FCCA6A4745688A5911E (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method);
// System.Byte[] WebSocketSharp.PayloadData::get_ApplicationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* PayloadData_get_ApplicationData_mC2AA23872DD4411DB4B14D7C55CB6781FB503333 (PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * __this, const RuntimeMethod* method);
// System.String WebSocketSharp.WebSocketFrame::utf8Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocketFrame_utf8Decode_mF5CFD8479ED5E3AC2BEC94ACA901D5B9FF1D48C6 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m38DB8AFA47A9CBAC2F5D1F5D3E19B9D65EEA348A (WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.Ext::IsSupported(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ext_IsSupported_m80971C6143B6F1C57D225A1C282ABCA26A6CB856 (uint8_t ___opcode0, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketException::.ctor(WebSocketSharp.CloseStatusCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m13A23D3EA1E3BF42C594EC411BA6E67F12C610D8 (WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD * __this, uint16_t ___code0, String_t* ___message1, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.Ext::IsData(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ext_IsData_m6AD468BCA8D9A44C16F02D577B441DA4CC008253 (uint8_t ___opcode0, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.Ext::IsControl(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ext_IsControl_m918A0FFED3B4B713EB7F2909DD6F3FB751FB88D0 (uint8_t ___opcode0, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame__ctor_m97DD3448BAAE1904281FDDE41F5837FC77274463 (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass71_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass71_0__ctor_mA5F8D524DDE8425A4743DFE837FC3AC867A6D1A9 (U3CU3Ec__DisplayClass71_0_tDE27FBCA0A789AFD6E2B10E71A24F37864062306 * __this, const RuntimeMethod* method);
// System.Int32 WebSocketSharp.WebSocketFrame::get_ExtendedPayloadLengthWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketFrame_get_ExtendedPayloadLengthWidth_m9974FBBA5642F22772E298F31DA5BA90B1BEBA8C (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method);
// System.Void System.Action`1<WebSocketSharp.WebSocketFrame>::Invoke(!0)
inline void Action_1_Invoke_m3FFF7B87CED68FC8794868F38BC431517ED024DC (Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * __this, WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A *, WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void System.Action`1<System.Byte[]>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m7942990CFFB5E67155F4D9BB7E51F95194069243 (Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WebSocketSharp.Ext::ReadBytesAsync(System.IO.Stream,System.Int32,System.Action`1<System.Byte[]>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ext_ReadBytesAsync_m6CC18875FE4D190E7881E90C46533E434FA6E1A4 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___length1, Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * ___completed2, Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error3, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass73_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass73_0__ctor_mA4B557CE7C123A7E1E81BF4DAA7C8EA8D0A75DA2 (U3CU3Ec__DisplayClass73_0_t1AA2F56924CE1580D7DDEE26E3B028E2200D7135 * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass75_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass75_0__ctor_mBEF3C1FDFD48303743B474901E254F71A0179C32 (U3CU3Ec__DisplayClass75_0_t41FE8DC939EFCB7DF138812C55EBAA3BE1820A84 * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass77_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass77_0__ctor_mBDDFAC434940A602607712ABF422FD2D845C48C9 (U3CU3Ec__DisplayClass77_0_tC80E02C07E3F3B1FA54221550F91A9441C063A9D * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.Ext::ReadBytesAsync(System.IO.Stream,System.Int64,System.Int32,System.Action`1<System.Byte[]>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ext_ReadBytesAsync_m6CB1BE2065877D9016E2F4B3C1513EC25A606978 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int64_t ___length1, int32_t ___bufferLength2, Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * ___completed3, Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error4, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass84_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass84_0__ctor_mA6A1CAA2C7643624C591E31037453A291BC18EDB (U3CU3Ec__DisplayClass84_0_tD733837EE92C060DC99B8407C379B65CA6886F53 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<WebSocketSharp.WebSocketFrame>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m5A5A47FA527D0CE5744363F201993BA8537A8B96 (Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WebSocketSharp.WebSocketFrame::readHeaderAsync(System.IO.Stream,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_readHeaderAsync_m3D0FC60E906398B185A2D9C2418321E606283C82 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * ___completed1, Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error2, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame/<GetEnumerator>d__86::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__86__ctor_mA9ED1EF2C55660D415015B3DDCA1F9612F23CAF2 (U3CGetEnumeratorU3Ed__86_t79B0B8C14D5261662A95C2C543C629419F30FA13 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.String WebSocketSharp.WebSocketFrame::print(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocketFrame_print_m97A0823ABEEADE6EDF3610DC0915B6AF09A8FE4E (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * ___frame0, const RuntimeMethod* method);
// System.String WebSocketSharp.WebSocketFrame::dump(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocketFrame_dump_mF771B433EF815AFF4402FB313384AD25F80B9007 (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * ___frame0, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * __this, const RuntimeMethod* method);
// System.Byte[] WebSocketSharp.PayloadData::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* PayloadData_ToArray_m9F987894AA89C17208C4E7ABB80F9708985682A3 (PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.Ext::WriteBytes(System.IO.Stream,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ext_WriteBytes_m368AA9C6E63EBD8552BA51987CC92D6C64616C6F (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes1, int32_t ___bufferLength2, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Byte> WebSocketSharp.WebSocketFrame::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketFrame_GetEnumerator_m1928AED1BD77E2C2760D0D67526ED2F5F1D30B00 (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.Net.AuthenticationResponse/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9DF7A2FBAB2162534C78347E8CE4705C93F27CDF (U3CU3Ec_tC81DDAE0EA2C737E510CBED988AA0E0A7EF615FA * __this, const RuntimeMethod* method);
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2 (String_t* __this, const RuntimeMethod* method);
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !1 System.Func`2<System.Int32,System.Boolean>::Invoke(!0)
inline bool Func_2_Invoke_mE42F035B56D1C1B51E922AE8EA4261AA141DE6C7 (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * __this, int32_t ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))Func_2_Invoke_mE42F035B56D1C1B51E922AE8EA4261AA141DE6C7_gshared)(__this, ___arg0, method);
}
// T[] WebSocketSharp.Ext::SubArray<System.Byte>(T[],System.Int32,System.Int32)
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Ext_SubArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9D56E868860FD371A750EAA140BFE7EFAC275330 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, const RuntimeMethod*))Ext_SubArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9D56E868860FD371A750EAA140BFE7EFAC275330_gshared)(___array0, ___startIndex1, ___length2, method);
}
// System.Void System.Action`1<System.Byte[]>::Invoke(!0)
inline void Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30 (Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void System.Action`1<System.Exception>::Invoke(!0)
inline void Action_1_Invoke_mFFDA4B6E4544D37A14A46ED010868613ED1F454C (Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * __this, Exception_t * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 *, Exception_t *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void WebSocketSharp.Ext/<>c__DisplayClass61_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass61_1__ctor_m6D3DAA0E5B6F568CDC0E6DBE379D65FF2B3B47E9 (U3CU3Ec__DisplayClass61_1_t2E2BDA6F0A1C4DA3216DDB8C019054EC49793A6F * __this, const RuntimeMethod* method);
// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05 (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int64>::Invoke(!0)
inline void Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39 (Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * __this, int64_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 *, int64_t, const RuntimeMethod*))Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39_gshared)(__this, ___obj0, method);
}
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * __this, const RuntimeMethod* method);
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC (const RuntimeMethod* method);
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Char>(!!0[],!!0)
inline int32_t Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mD5F29E323D31B110F267B79CAF2E456F4C77ECE4 (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___array0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, Il2CppChar, const RuntimeMethod*))Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mD5F29E323D31B110F267B79CAF2E456F4C77ECE4_gshared)(___array0, ___value1, method);
}
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A (StringBuilder_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.Ext/<SplitHeaderValue>d__63::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSplitHeaderValueU3Ed__63__ctor_m3757E013A377FF8D31E3CD2510C0932C52960424 (U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.String> WebSocketSharp.Ext/<SplitHeaderValue>d__63::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSplitHeaderValueU3Ed__63_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_mA753EC79897DDD5F4367BF702FECFDA43007B706 (U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2 * __this, const RuntimeMethod* method);
// System.Void System.IO.EndOfStreamException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfStreamException__ctor_m62AD97E22305B690B74C4EA6E3EAC36D10CE3800 (EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(!0)
inline void List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, uint8_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *, uint8_t, const RuntimeMethod*))List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_gshared)(__this, ___item0, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m37B348187DD9186C2451ACCA3DBC4ABCD4632AD4 (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocket/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m16C4D1F28E43DD3F63D022E8EA98BE3EE9E46692 (U3CU3Ec_tB4B2EE9FCABB432F8B378A41C9FCE9D1B72118E4 * __this, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.Ext::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ext_IsNullOrEmpty_mF001C5C52F7F3C9D34B2383224333009776E8410 (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.Ext::IsToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ext_IsToken_mC26BA563EEF8B18E19B6424D856150A31563A2EE (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Exception>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m36C6688B253977218074ACFD83304E717384FDE6 (Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WebSocketSharp.WebSocketFrame::ReadFrameAsync(System.IO.Stream,System.Boolean,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_ReadFrameAsync_m708A13E47738A4BA9790E2383AB1FF8AE93DDB63 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, bool ___unmask1, Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * ___completed2, Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error3, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.WebSocket::processReceivedFrame(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocket_processReceivedFrame_m1F5A59735176A11759A44C4526D7906C62BE8042 (WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307 * __this, WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * ___frame0, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38 (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.WebSocket::get_HasMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocket_get_HasMessage_mA6DDB45586A4153C7F8A38F3BADEA56905CD3975 (WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307 * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocket::message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_message_mBD3FCC7218B243DCDDE26D0927C81C590082EC53 (WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307 * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.Logger::Fatal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Fatal_m958EC31D6BA8218CA45C993764C334C87F0A6152 (Logger_t7A4ECD749D0DFE4B32485415CDC994EC550D5E00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocket::fatal(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_fatal_m5625883C5BAADD19D5FADC7E977FE233E91BC64E (WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307 * __this, String_t* ___message0, Exception_t * ___exception1, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !0 System.Func`1<System.Boolean>::EndInvoke(System.IAsyncResult)
inline bool Func_1_EndInvoke_m86A4760F9BEAFE6C019DD885A221AB48066F53D6 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, RuntimeObject*, const RuntimeMethod*))Func_1_EndInvoke_m86A4760F9BEAFE6C019DD885A221AB48066F53D6_gshared)(__this, ___result0, method);
}
// System.Void WebSocketSharp.WebSocket::open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_open_m6EBE0FB75B0845BE28025BBC022D257E1A485766 (WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307 * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass67_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass67_1__ctor_m699AC9A86BA453B6F6C58AE3879C9F33E504CD94 (U3CU3Ec__DisplayClass67_1_tE33256331364734FD4FE28A9D9369FE6C5EB1665 * __this, const RuntimeMethod* method);
// System.Void System.Action`4<System.String,System.String,System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_4__ctor_mE339CC347E4BB669DDFC6634B8A25A3DD9A4EA6C (Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_4__ctor_m13BE596D4BB6EE74E7BABCD899B54676A90C51E5_gshared)(__this, ___object0, ___method1, method);
}
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m97C4AAABA51FCC2D426BD22FE05BEC045AB9D6F8 (StringBuilder_t * __this, String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::processHeader(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * WebSocketFrame_processHeader_m746B42813AAF5AE70A094B2C5F8BEA8146ACFABB (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___header0, const RuntimeMethod* method);
// System.Void WebSocketSharp.PayloadData::.ctor(System.Byte[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayloadData__ctor_m853048FD79C545AC0DD19CCD7AC0C8940E54DA3B (PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int64_t ___length1, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame::readExtendedPayloadLengthAsync(System.IO.Stream,WebSocketSharp.WebSocketFrame,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_readExtendedPayloadLengthAsync_m4B4634276583FD368A094C0F0629F1144704BFF4 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * ___frame1, Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * ___completed2, Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error3, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame::readMaskingKeyAsync(System.IO.Stream,WebSocketSharp.WebSocketFrame,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_readMaskingKeyAsync_m96CF6B4ACA26A4398AD1186601B072CFD1098D76 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * ___frame1, Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * ___completed2, Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error3, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame::readPayloadDataAsync(System.IO.Stream,WebSocketSharp.WebSocketFrame,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_readPayloadDataAsync_mE5DDE121C8B21564DBF883FC9D0556FE638DD74E (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * ___frame1, Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * ___completed2, Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error3, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame::Unmask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_Unmask_mFD54F296C7AA70613F65B93F3EC23F28E3419787 (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebSocketSharp.WebSocketFrame::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame__cctor_m7DE2BDD877F9A483660B0226027D6B8A547BEBC7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_0;
		L_0 = WebSocketFrame_CreatePingFrame_mA5EA2B915FBA1343958AA6824499ADBACFC4DEB5((bool)0, /*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = WebSocketFrame_ToArray_mA1FB44622CD8F356F869F4E5FB741E26A0A36E94(L_0, /*hidden argument*/NULL);
		((WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_il2cpp_TypeInfo_var))->set_EmptyPingBytes_10(L_1);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame__ctor_m97DD3448BAAE1904281FDDE41F5837FC77274463 (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame::.ctor(WebSocketSharp.Fin,WebSocketSharp.Opcode,System.Byte[],System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame__ctor_m56F74D707A3BBBF5F72DA3A7A51983D4187F30DC (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, uint8_t ___fin0, uint8_t ___opcode1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data2, bool ___compressed3, bool ___mask4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = ___fin0;
		uint8_t L_1 = ___opcode1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___data2;
		PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * L_3 = (PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E *)il2cpp_codegen_object_new(PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E_il2cpp_TypeInfo_var);
		PayloadData__ctor_mF195F9D472FD6D7A7913DCB1D321EA992EED7949(L_3, L_2, /*hidden argument*/NULL);
		bool L_4 = ___compressed3;
		bool L_5 = ___mask4;
		WebSocketFrame__ctor_mF92491BF286A024786049C17647CD1C3CB725F40(__this, L_0, L_1, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame::.ctor(WebSocketSharp.Fin,WebSocketSharp.Opcode,WebSocketSharp.PayloadData,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame__ctor_mF92491BF286A024786049C17647CD1C3CB725F40 (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, uint8_t ___fin0, uint8_t ___opcode1, PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * ___payloadData2, bool ___compressed3, bool ___mask4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * G_B2_0 = NULL;
	WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * G_B3_1 = NULL;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		uint8_t L_0 = ___fin0;
		__this->set__fin_1(L_0);
		uint8_t L_1 = ___opcode1;
		__this->set__opcode_4(L_1);
		uint8_t L_2 = ___opcode1;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Ext_IsData_mE9635550252EE296581FFABB5B547DE687C4F6FF(L_2, /*hidden argument*/NULL);
		bool L_4 = ___compressed3;
		G_B1_0 = __this;
		if (((int32_t)((int32_t)L_3&(int32_t)L_4)))
		{
			G_B2_0 = __this;
			goto IL_0025;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0026:
	{
		NullCheck(G_B3_1);
		G_B3_1->set__rsv1_7(G_B3_0);
		__this->set__rsv2_8(0);
		__this->set__rsv3_9(0);
		PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * L_5 = ___payloadData2;
		NullCheck(L_5);
		uint64_t L_6;
		L_6 = PayloadData_get_Length_mDC78804C235C880C3EF1448E8496944B4728649F(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		uint64_t L_7 = V_0;
		V_1 = (bool)((!(((uint64_t)L_7) >= ((uint64_t)((int64_t)((int64_t)((int32_t)126))))))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		uint64_t L_9 = V_0;
		__this->set__payloadLength_6((uint8_t)((int32_t)((uint8_t)L_9)));
		IL2CPP_RUNTIME_CLASS_INIT(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = ((WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307_StaticFields*)il2cpp_codegen_static_fields_for(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307_il2cpp_TypeInfo_var))->get_EmptyBytes_43();
		__this->set__extPayloadLength_0(L_10);
		goto IL_009f;
	}

IL_0061:
	{
		uint64_t L_11 = V_0;
		V_2 = (bool)((!(((uint64_t)L_11) >= ((uint64_t)((int64_t)((int64_t)((int32_t)65536))))))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0088;
		}
	}
	{
		__this->set__payloadLength_6((uint8_t)((int32_t)126));
		uint64_t L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14;
		L_14 = Ext_InternalToByteArray_m95D68E7361577B50D01325CDFD283CC9B2F50D52((uint16_t)((int32_t)((uint16_t)L_13)), 1, /*hidden argument*/NULL);
		__this->set__extPayloadLength_0(L_14);
		goto IL_009f;
	}

IL_0088:
	{
		__this->set__payloadLength_6((uint8_t)((int32_t)127));
		uint64_t L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16;
		L_16 = Ext_InternalToByteArray_m1121E122A87FE8288C087D83E62FC1D7B449A732(L_15, 1, /*hidden argument*/NULL);
		__this->set__extPayloadLength_0(L_16);
	}

IL_009f:
	{
		bool L_17 = ___mask4;
		V_3 = L_17;
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_00c8;
		}
	}
	{
		__this->set__mask_2(1);
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19;
		L_19 = WebSocketFrame_createMaskingKey_m814A4A2D3280399A2CAFF532BD5857246AFB298B(/*hidden argument*/NULL);
		__this->set__maskingKey_3(L_19);
		PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * L_20 = ___payloadData2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = __this->get__maskingKey_3();
		NullCheck(L_20);
		PayloadData_Mask_mF740F0F886A5AD0E97D93AE0BDEC1D6F48549460(L_20, L_21, /*hidden argument*/NULL);
		goto IL_00dc;
	}

IL_00c8:
	{
		__this->set__mask_2(0);
		IL2CPP_RUNTIME_CLASS_INIT(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = ((WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307_StaticFields*)il2cpp_codegen_static_fields_for(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307_il2cpp_TypeInfo_var))->get_EmptyBytes_43();
		__this->set__maskingKey_3(L_22);
	}

IL_00dc:
	{
		PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * L_23 = ___payloadData2;
		__this->set__payloadData_5(L_23);
		return;
	}
}
// System.UInt64 WebSocketSharp.WebSocketFrame::get_ExactPayloadLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t WebSocketFrame_get_ExactPayloadLength_m2162839191FF62DBB2D1DAD69BC2FD526161F56B (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint64_t G_B4_0 = 0;
	uint64_t G_B6_0 = 0;
	{
		uint8_t L_0 = __this->get__payloadLength_6();
		if ((((int32_t)L_0) < ((int32_t)((int32_t)126))))
		{
			goto IL_0032;
		}
	}
	{
		uint8_t L_1 = __this->get__payloadLength_6();
		if ((((int32_t)L_1) == ((int32_t)((int32_t)126))))
		{
			goto IL_0023;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get__extPayloadLength_0();
		IL2CPP_RUNTIME_CLASS_INIT(Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = Ext_ToUInt64_m7972E322BB046B1A789830E659694981BFAE0ADD(L_2, 1, /*hidden argument*/NULL);
		G_B4_0 = L_3;
		goto IL_0030;
	}

IL_0023:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get__extPayloadLength_0();
		IL2CPP_RUNTIME_CLASS_INIT(Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var);
		uint16_t L_5;
		L_5 = Ext_ToUInt16_mA37BDEF1960D766E646EFEF6156F78FA5F733A04(L_4, 1, /*hidden argument*/NULL);
		G_B4_0 = ((uint64_t)(((int64_t)((uint64_t)L_5))));
	}

IL_0030:
	{
		G_B6_0 = G_B4_0;
		goto IL_0039;
	}

IL_0032:
	{
		uint8_t L_6 = __this->get__payloadLength_6();
		G_B6_0 = ((uint64_t)(((int64_t)((uint64_t)L_6))));
	}

IL_0039:
	{
		V_0 = G_B6_0;
		goto IL_003c;
	}

IL_003c:
	{
		uint64_t L_7 = V_0;
		return L_7;
	}
}
// System.Int32 WebSocketSharp.WebSocketFrame::get_ExtendedPayloadLengthWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketFrame_get_ExtendedPayloadLengthWidth_m9974FBBA5642F22772E298F31DA5BA90B1BEBA8C (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		uint8_t L_0 = __this->get__payloadLength_6();
		if ((((int32_t)L_0) < ((int32_t)((int32_t)126))))
		{
			goto IL_001b;
		}
	}
	{
		uint8_t L_1 = __this->get__payloadLength_6();
		if ((((int32_t)L_1) == ((int32_t)((int32_t)126))))
		{
			goto IL_0018;
		}
	}
	{
		G_B4_0 = 8;
		goto IL_0019;
	}

IL_0018:
	{
		G_B4_0 = 2;
	}

IL_0019:
	{
		G_B6_0 = G_B4_0;
		goto IL_001c;
	}

IL_001b:
	{
		G_B6_0 = 0;
	}

IL_001c:
	{
		V_0 = G_B6_0;
		goto IL_001f;
	}

IL_001f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsClose_m5407EF273EE765F47630CAC787134D01C21FD79E (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint8_t L_0 = __this->get__opcode_4();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)8))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsCompressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsCompressed_mB13266E84B60606C664B4FCCA6A4745688A5911E (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint8_t L_0 = __this->get__rsv1_7();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsContinuation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsContinuation_m38F7AD29D5B320DC1AE257E442424167760EB3BB (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint8_t L_0 = __this->get__opcode_4();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsData_m4098D43DD51A5F57653A48D2EFC958CEA05F43A5 (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		uint8_t L_0 = __this->get__opcode_4();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		uint8_t L_1 = __this->get__opcode_4();
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsFinal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsFinal_m18A7A2CD5415C2E95CF6A2BE85CCC537958D18E8 (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint8_t L_0 = __this->get__fin_1();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsFragment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsFragment_mC3E54F3ED67ADCE01B00D30D793C2FBAE66CB56A (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		uint8_t L_0 = __this->get__fin_1();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		uint8_t L_1 = __this->get__opcode_4();
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsMasked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsMasked_m16421A430B758792761BCFFA0D937EDC57FBBC47 (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint8_t L_0 = __this->get__mask_2();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsPing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsPing_mA46CF2046AB6491EB0653644D87AAC692E7DAF30 (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint8_t L_0 = __this->get__opcode_4();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)((int32_t)9)))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsPong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsPong_m51CCB982C5B1E021442E37979C8A471979FC21C8 (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint8_t L_0 = __this->get__opcode_4();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)((int32_t)10)))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocketFrame_get_IsText_m6F1610D6DBE3F6AF120CF3583108C756574B1A2C (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint8_t L_0 = __this->get__opcode_4();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.UInt64 WebSocketSharp.WebSocketFrame::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t WebSocketFrame_get_Length_mA9E74472B498346F874BE36A214B0DB00E16AAE2 (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__extPayloadLength_0();
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get__maskingKey_3();
		NullCheck(L_1);
		PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * L_2 = __this->get__payloadData_5();
		NullCheck(L_2);
		uint64_t L_3;
		L_3 = PayloadData_get_Length_mDC78804C235C880C3EF1448E8496944B4728649F(L_2, /*hidden argument*/NULL);
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)2)), (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))))), (int64_t)L_3));
		goto IL_0025;
	}

IL_0025:
	{
		uint64_t L_4 = V_0;
		return L_4;
	}
}
// WebSocketSharp.Opcode WebSocketSharp.WebSocketFrame::get_Opcode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t WebSocketFrame_get_Opcode_m2A28330007F263E4344CD1294CAEC92A6ECF3F5E (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0;
	{
		uint8_t L_0 = __this->get__opcode_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// WebSocketSharp.PayloadData WebSocketSharp.WebSocketFrame::get_PayloadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * WebSocketFrame_get_PayloadData_mB95FBCBDE2349F7F44D83DF396C55A20DAA8378D (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method)
{
	PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * V_0 = NULL;
	{
		PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * L_0 = __this->get__payloadData_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * L_1 = V_0;
		return L_1;
	}
}
// WebSocketSharp.Rsv WebSocketSharp.WebSocketFrame::get_Rsv2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t WebSocketFrame_get_Rsv2_m8B1A88B899F6E9288FB47D7F28A7B77398F3B2F7 (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0;
	{
		uint8_t L_0 = __this->get__rsv2_8();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// WebSocketSharp.Rsv WebSocketSharp.WebSocketFrame::get_Rsv3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t WebSocketFrame_get_Rsv3_m0079E091C268F6648354A14BC3293D2668564EDC (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0;
	{
		uint8_t L_0 = __this->get__rsv3_9();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] WebSocketSharp.WebSocketFrame::createMaskingKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WebSocketFrame_createMaskingKey_m814A4A2D3280399A2CAFF532BD5857246AFB298B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307_il2cpp_TypeInfo_var);
		RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * L_1 = ((WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307_StaticFields*)il2cpp_codegen_static_fields_for(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307_il2cpp_TypeInfo_var))->get_RandomNumber_45();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = V_0;
		NullCheck(L_1);
		VirtActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(6 /* System.Void System.Security.Cryptography.RandomNumberGenerator::GetBytes(System.Byte[]) */, L_1, L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		V_1 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_1;
		return L_4;
	}
}
// System.String WebSocketSharp.WebSocketFrame::dump(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocketFrame_dump_mF771B433EF815AFF4402FB313384AD25F80B9007 (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_4_Invoke_m0A313E142F4941B14FF053146BE0B71FA00D289B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_mD4E991296E96614D54847DA8E9C7F7C1C4525E6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_mFA7CE0231236E9D2D93B07782B199357061CE3FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t14316C5A33A8948423D51DEFFBE784F219A6AFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass67_0_U3CdumpU3Eb__0_mF8714BB660619726040812B172D2050E4C45B309_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass67_0_tDBF918B3DD900B583E012554C379933CDCFA4EA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFrame_dump_mF771B433EF815AFF4402FB313384AD25F80B9007_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20EE8CAA934A2767F12EC9152C5C08F7305A69EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EA52E9C94B4B03D5535BC2F0558A4341C7C3AAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62F57AD061852AB53745F2E49C914CC9E4340133);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63488589AE4F4AB55FD0EB2F6715E45C4001A9E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA545047F18B3FC58954677EB7F12A1370C59CE77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8A0DD08EB1B611313645CAC79DE1BA8FDDCDA7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE260AAE60E6C3A7EB3569B8302BE64F5713E45B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF31A798F77EB74F37FE8821EE17F12CDF6905B4);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass67_0_tDBF918B3DD900B583E012554C379933CDCFA4EA4 * V_0 = NULL;
	uint64_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	Func_1_t14316C5A33A8948423D51DEFFBE784F219A6AFED * V_9 = NULL;
	Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * V_10 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_11 = NULL;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	int64_t V_15 = 0;
	int64_t V_16 = 0;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	String_t* V_20 = NULL;
	String_t* G_B13_0 = NULL;
	Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * G_B13_1 = NULL;
	String_t* G_B12_0 = NULL;
	Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * G_B12_1 = NULL;
	String_t* G_B14_0 = NULL;
	String_t* G_B14_1 = NULL;
	Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * G_B14_2 = NULL;
	String_t* G_B16_0 = NULL;
	String_t* G_B16_1 = NULL;
	Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * G_B16_2 = NULL;
	String_t* G_B15_0 = NULL;
	String_t* G_B15_1 = NULL;
	Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * G_B15_2 = NULL;
	String_t* G_B17_0 = NULL;
	String_t* G_B17_1 = NULL;
	String_t* G_B17_2 = NULL;
	Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * G_B17_3 = NULL;
	{
		U3CU3Ec__DisplayClass67_0_tDBF918B3DD900B583E012554C379933CDCFA4EA4 * L_0 = (U3CU3Ec__DisplayClass67_0_tDBF918B3DD900B583E012554C379933CDCFA4EA4 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass67_0_tDBF918B3DD900B583E012554C379933CDCFA4EA4_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass67_0__ctor_m25277E2EC105F3C5BC980178417339596D5A703A(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_1 = ___frame0;
		NullCheck(L_1);
		uint64_t L_2;
		L_2 = WebSocketFrame_get_Length_mA9E74472B498346F874BE36A214B0DB00E16AAE2(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		uint64_t L_3 = V_1;
		V_2 = ((int64_t)((uint64_t)(int64_t)L_3/(uint64_t)(int64_t)((int64_t)((int64_t)4))));
		uint64_t L_4 = V_1;
		V_3 = ((int32_t)((int32_t)((int64_t)((uint64_t)(int64_t)L_4%(uint64_t)(int64_t)((int64_t)((int64_t)4))))));
		int64_t L_5 = V_2;
		V_12 = (bool)((((int64_t)L_5) < ((int64_t)((int64_t)((int64_t)((int32_t)10000)))))? 1 : 0);
		bool L_6 = V_12;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		V_4 = 4;
		V_5 = _stringLiteral20EE8CAA934A2767F12EC9152C5C08F7305A69EC;
		goto IL_0080;
	}

IL_0036:
	{
		int64_t L_7 = V_2;
		V_13 = (bool)((((int64_t)L_7) < ((int64_t)((int64_t)((int64_t)((int32_t)65536)))))? 1 : 0);
		bool L_8 = V_13;
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		V_4 = 4;
		V_5 = _stringLiteralA545047F18B3FC58954677EB7F12A1370C59CE77;
		goto IL_0080;
	}

IL_0053:
	{
		int64_t L_9 = V_2;
		V_14 = (bool)((((int64_t)L_9) < ((int64_t)((int64_t)4294967296LL)))? 1 : 0);
		bool L_10 = V_14;
		if (!L_10)
		{
			goto IL_0073;
		}
	}
	{
		V_4 = 8;
		V_5 = _stringLiteralD8A0DD08EB1B611313645CAC79DE1BA8FDDCDA7D;
		goto IL_0080;
	}

IL_0073:
	{
		V_4 = ((int32_t)16);
		V_5 = _stringLiteralFF31A798F77EB74F37FE8821EE17F12CDF6905B4;
	}

IL_0080:
	{
		int32_t L_11 = V_4;
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14;
		L_14 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral3EA52E9C94B4B03D5535BC2F0558A4341C7C3AAD, L_13, /*hidden argument*/NULL);
		V_6 = L_14;
		String_t* L_15 = V_6;
		String_t* L_16;
		L_16 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralE260AAE60E6C3A7EB3569B8302BE64F5713E45B4, L_15, /*hidden argument*/NULL);
		V_7 = L_16;
		U3CU3Ec__DisplayClass67_0_tDBF918B3DD900B583E012554C379933CDCFA4EA4 * L_17 = V_0;
		String_t* L_18 = V_5;
		String_t* L_19;
		L_19 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral63488589AE4F4AB55FD0EB2F6715E45C4001A9E4, L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		L_17->set_lineFmt_1(L_19);
		String_t* L_20 = V_6;
		String_t* L_21;
		L_21 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral62F57AD061852AB53745F2E49C914CC9E4340133, L_20, /*hidden argument*/NULL);
		V_8 = L_21;
		U3CU3Ec__DisplayClass67_0_tDBF918B3DD900B583E012554C379933CDCFA4EA4 * L_22 = V_0;
		StringBuilder_t * L_23 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E(L_23, ((int32_t)64), /*hidden argument*/NULL);
		NullCheck(L_22);
		L_22->set_buff_0(L_23);
		U3CU3Ec__DisplayClass67_0_tDBF918B3DD900B583E012554C379933CDCFA4EA4 * L_24 = V_0;
		Func_1_t14316C5A33A8948423D51DEFFBE784F219A6AFED * L_25 = (Func_1_t14316C5A33A8948423D51DEFFBE784F219A6AFED *)il2cpp_codegen_object_new(Func_1_t14316C5A33A8948423D51DEFFBE784F219A6AFED_il2cpp_TypeInfo_var);
		Func_1__ctor_mFA7CE0231236E9D2D93B07782B199357061CE3FA(L_25, L_24, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass67_0_U3CdumpU3Eb__0_mF8714BB660619726040812B172D2050E4C45B309_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_mFA7CE0231236E9D2D93B07782B199357061CE3FA_RuntimeMethod_var);
		V_9 = L_25;
		Func_1_t14316C5A33A8948423D51DEFFBE784F219A6AFED * L_26 = V_9;
		NullCheck(L_26);
		Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * L_27;
		L_27 = Func_1_Invoke_mD4E991296E96614D54847DA8E9C7F7C1C4525E6A(L_26, /*hidden argument*/Func_1_Invoke_mD4E991296E96614D54847DA8E9C7F7C1C4525E6A_RuntimeMethod_var);
		V_10 = L_27;
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_28 = ___frame0;
		NullCheck(L_28);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29;
		L_29 = WebSocketFrame_ToArray_mA1FB44622CD8F356F869F4E5FB741E26A0A36E94(L_28, /*hidden argument*/NULL);
		V_11 = L_29;
		U3CU3Ec__DisplayClass67_0_tDBF918B3DD900B583E012554C379933CDCFA4EA4 * L_30 = V_0;
		NullCheck(L_30);
		StringBuilder_t * L_31 = L_30->get_buff_0();
		String_t* L_32 = V_7;
		String_t* L_33 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_31);
		StringBuilder_t * L_34;
		L_34 = StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E(L_31, L_32, L_33, /*hidden argument*/NULL);
		V_15 = ((int64_t)((int64_t)0));
		goto IL_01f9;
	}

IL_0109:
	{
		int64_t L_35 = V_15;
		V_16 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_35, (int64_t)((int64_t)((int64_t)4))));
		int64_t L_36 = V_15;
		int64_t L_37 = V_2;
		V_17 = (bool)((((int64_t)L_36) < ((int64_t)L_37))? 1 : 0);
		bool L_38 = V_17;
		if (!L_38)
		{
			goto IL_0180;
		}
	}
	{
		Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * L_39 = V_10;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_40 = V_11;
		int64_t L_41 = V_16;
		if ((int64_t)(L_41) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WebSocketFrame_dump_mF771B433EF815AFF4402FB313384AD25F80B9007_RuntimeMethod_var);
		NullCheck(L_40);
		intptr_t L_42 = ((intptr_t)L_41);
		uint8_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_44;
		L_44 = Convert_ToString_m338CB721AA43A1AD6DACE1EFA12F2CE18130DDB7(L_43, 2, /*hidden argument*/NULL);
		NullCheck(L_44);
		String_t* L_45;
		L_45 = String_PadLeft_m7666BD115C91CF7F69642532F4CA9B0726C0A328(L_44, 8, ((int32_t)48), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_46 = V_11;
		int64_t L_47 = V_16;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)L_47, (int64_t)((int64_t)((int64_t)1))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WebSocketFrame_dump_mF771B433EF815AFF4402FB313384AD25F80B9007_RuntimeMethod_var);
		NullCheck(L_46);
		intptr_t L_48 = ((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)L_47, (int64_t)((int64_t)((int64_t)1)))));
		uint8_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		String_t* L_50;
		L_50 = Convert_ToString_m338CB721AA43A1AD6DACE1EFA12F2CE18130DDB7(L_49, 2, /*hidden argument*/NULL);
		NullCheck(L_50);
		String_t* L_51;
		L_51 = String_PadLeft_m7666BD115C91CF7F69642532F4CA9B0726C0A328(L_50, 8, ((int32_t)48), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_52 = V_11;
		int64_t L_53 = V_16;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)L_53, (int64_t)((int64_t)((int64_t)2))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WebSocketFrame_dump_mF771B433EF815AFF4402FB313384AD25F80B9007_RuntimeMethod_var);
		NullCheck(L_52);
		intptr_t L_54 = ((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)L_53, (int64_t)((int64_t)((int64_t)2)))));
		uint8_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		String_t* L_56;
		L_56 = Convert_ToString_m338CB721AA43A1AD6DACE1EFA12F2CE18130DDB7(L_55, 2, /*hidden argument*/NULL);
		NullCheck(L_56);
		String_t* L_57;
		L_57 = String_PadLeft_m7666BD115C91CF7F69642532F4CA9B0726C0A328(L_56, 8, ((int32_t)48), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_58 = V_11;
		int64_t L_59 = V_16;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)L_59, (int64_t)((int64_t)((int64_t)3))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WebSocketFrame_dump_mF771B433EF815AFF4402FB313384AD25F80B9007_RuntimeMethod_var);
		NullCheck(L_58);
		intptr_t L_60 = ((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)L_59, (int64_t)((int64_t)((int64_t)3)))));
		uint8_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		String_t* L_62;
		L_62 = Convert_ToString_m338CB721AA43A1AD6DACE1EFA12F2CE18130DDB7(L_61, 2, /*hidden argument*/NULL);
		NullCheck(L_62);
		String_t* L_63;
		L_63 = String_PadLeft_m7666BD115C91CF7F69642532F4CA9B0726C0A328(L_62, 8, ((int32_t)48), /*hidden argument*/NULL);
		NullCheck(L_39);
		Action_4_Invoke_m0A313E142F4941B14FF053146BE0B71FA00D289B(L_39, L_45, L_51, L_57, L_63, /*hidden argument*/Action_4_Invoke_m0A313E142F4941B14FF053146BE0B71FA00D289B_RuntimeMethod_var);
		goto IL_01f2;
	}

IL_0180:
	{
		int32_t L_64 = V_3;
		V_18 = (bool)((((int32_t)L_64) > ((int32_t)0))? 1 : 0);
		bool L_65 = V_18;
		if (!L_65)
		{
			goto IL_01f1;
		}
	}
	{
		Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * L_66 = V_10;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_67 = V_11;
		int64_t L_68 = V_16;
		if ((int64_t)(L_68) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WebSocketFrame_dump_mF771B433EF815AFF4402FB313384AD25F80B9007_RuntimeMethod_var);
		NullCheck(L_67);
		intptr_t L_69 = ((intptr_t)L_68);
		uint8_t L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_71;
		L_71 = Convert_ToString_m338CB721AA43A1AD6DACE1EFA12F2CE18130DDB7(L_70, 2, /*hidden argument*/NULL);
		NullCheck(L_71);
		String_t* L_72;
		L_72 = String_PadLeft_m7666BD115C91CF7F69642532F4CA9B0726C0A328(L_71, 8, ((int32_t)48), /*hidden argument*/NULL);
		int32_t L_73 = V_3;
		G_B12_0 = L_72;
		G_B12_1 = L_66;
		if ((((int32_t)L_73) >= ((int32_t)2)))
		{
			G_B13_0 = L_72;
			G_B13_1 = L_66;
			goto IL_01ac;
		}
	}
	{
		String_t* L_74 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B14_0 = L_74;
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		goto IL_01c3;
	}

IL_01ac:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_75 = V_11;
		int64_t L_76 = V_16;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)L_76, (int64_t)((int64_t)((int64_t)1))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WebSocketFrame_dump_mF771B433EF815AFF4402FB313384AD25F80B9007_RuntimeMethod_var);
		NullCheck(L_75);
		intptr_t L_77 = ((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)L_76, (int64_t)((int64_t)((int64_t)1)))));
		uint8_t L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_79;
		L_79 = Convert_ToString_m338CB721AA43A1AD6DACE1EFA12F2CE18130DDB7(L_78, 2, /*hidden argument*/NULL);
		NullCheck(L_79);
		String_t* L_80;
		L_80 = String_PadLeft_m7666BD115C91CF7F69642532F4CA9B0726C0A328(L_79, 8, ((int32_t)48), /*hidden argument*/NULL);
		G_B14_0 = L_80;
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
	}

IL_01c3:
	{
		int32_t L_81 = V_3;
		G_B15_0 = G_B14_0;
		G_B15_1 = G_B14_1;
		G_B15_2 = G_B14_2;
		if ((((int32_t)L_81) == ((int32_t)3)))
		{
			G_B16_0 = G_B14_0;
			G_B16_1 = G_B14_1;
			G_B16_2 = G_B14_2;
			goto IL_01ce;
		}
	}
	{
		String_t* L_82 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B17_0 = L_82;
		G_B17_1 = G_B15_0;
		G_B17_2 = G_B15_1;
		G_B17_3 = G_B15_2;
		goto IL_01e5;
	}

IL_01ce:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_83 = V_11;
		int64_t L_84 = V_16;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)L_84, (int64_t)((int64_t)((int64_t)2))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WebSocketFrame_dump_mF771B433EF815AFF4402FB313384AD25F80B9007_RuntimeMethod_var);
		NullCheck(L_83);
		intptr_t L_85 = ((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)L_84, (int64_t)((int64_t)((int64_t)2)))));
		uint8_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_87;
		L_87 = Convert_ToString_m338CB721AA43A1AD6DACE1EFA12F2CE18130DDB7(L_86, 2, /*hidden argument*/NULL);
		NullCheck(L_87);
		String_t* L_88;
		L_88 = String_PadLeft_m7666BD115C91CF7F69642532F4CA9B0726C0A328(L_87, 8, ((int32_t)48), /*hidden argument*/NULL);
		G_B17_0 = L_88;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
		G_B17_3 = G_B16_2;
	}

IL_01e5:
	{
		String_t* L_89 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(G_B17_3);
		Action_4_Invoke_m0A313E142F4941B14FF053146BE0B71FA00D289B(G_B17_3, G_B17_2, G_B17_1, G_B17_0, L_89, /*hidden argument*/Action_4_Invoke_m0A313E142F4941B14FF053146BE0B71FA00D289B_RuntimeMethod_var);
	}

IL_01f1:
	{
	}

IL_01f2:
	{
		int64_t L_90 = V_15;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_90, (int64_t)((int64_t)((int64_t)1))));
	}

IL_01f9:
	{
		int64_t L_91 = V_15;
		int64_t L_92 = V_2;
		V_19 = (bool)((((int32_t)((((int64_t)L_91) > ((int64_t)L_92))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_93 = V_19;
		if (L_93)
		{
			goto IL_0109;
		}
	}
	{
		U3CU3Ec__DisplayClass67_0_tDBF918B3DD900B583E012554C379933CDCFA4EA4 * L_94 = V_0;
		NullCheck(L_94);
		StringBuilder_t * L_95 = L_94->get_buff_0();
		String_t* L_96 = V_8;
		String_t* L_97 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_95);
		StringBuilder_t * L_98;
		L_98 = StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E(L_95, L_96, L_97, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass67_0_tDBF918B3DD900B583E012554C379933CDCFA4EA4 * L_99 = V_0;
		NullCheck(L_99);
		StringBuilder_t * L_100 = L_99->get_buff_0();
		NullCheck(L_100);
		String_t* L_101;
		L_101 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_100);
		V_20 = L_101;
		goto IL_022c;
	}

IL_022c:
	{
		String_t* L_102 = V_20;
		return L_102;
	}
}
// System.String WebSocketSharp.WebSocketFrame::print(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocketFrame_print_m97A0823ABEEADE6EDF3610DC0915B6AF09A8FE4E (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fin_tB63C3774106D399A2802141462FBCA7C2657157C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mask_t11143EC89CC7AA99AD95ED61D44C938CFFBBF7F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Opcode_tDB68976A89F4FC63A2794ACEBBEAA6BDFD25EA01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rsv_tC7F1BD18C6301FBAA510C7755D1A45B8C950250D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral111B078632ED414E9392C91DEE241B11C9EE8544);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C2AD70263FE24D3526592776AEAD3BE74D4301);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	uint64_t V_5 = 0;
	String_t* V_6 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B11_0 = NULL;
	String_t* G_B13_0 = NULL;
	String_t* G_B15_0 = NULL;
	{
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_0 = ___frame0;
		NullCheck(L_0);
		uint8_t L_1 = L_0->get__payloadLength_6();
		V_0 = L_1;
		uint8_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)125))))
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B3_0 = L_3;
		goto IL_0023;
	}

IL_0014:
	{
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_4 = ___frame0;
		NullCheck(L_4);
		uint64_t L_5;
		L_5 = WebSocketFrame_get_ExactPayloadLength_m2162839191FF62DBB2D1DAD69BC2FD526161F56B(L_4, /*hidden argument*/NULL);
		V_5 = L_5;
		String_t* L_6;
		L_6 = UInt64_ToString_m3644686F0A0E32CB94D300CF891DBD7920396F37((uint64_t*)(&V_5), /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_0023:
	{
		V_1 = G_B3_0;
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_7 = ___frame0;
		NullCheck(L_7);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = L_7->get__maskingKey_3();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = BitConverter_ToString_mD476DB63219FD7C7FFB472ABEB04A8BB2D171F30(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		uint8_t L_10 = V_0;
		if (!L_10)
		{
			goto IL_007e;
		}
	}
	{
		uint8_t L_11 = V_0;
		if ((((int32_t)L_11) > ((int32_t)((int32_t)125))))
		{
			goto IL_0077;
		}
	}
	{
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_12 = ___frame0;
		NullCheck(L_12);
		bool L_13;
		L_13 = WebSocketFrame_get_IsText_m6F1610D6DBE3F6AF120CF3583108C756574B1A2C(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_006a;
		}
	}
	{
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_14 = ___frame0;
		NullCheck(L_14);
		bool L_15;
		L_15 = WebSocketFrame_get_IsFragment_mC3E54F3ED67ADCE01B00D30D793C2FBAE66CB56A(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_006a;
		}
	}
	{
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_16 = ___frame0;
		NullCheck(L_16);
		bool L_17;
		L_17 = WebSocketFrame_get_IsMasked_m16421A430B758792761BCFFA0D937EDC57FBBC47(L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_006a;
		}
	}
	{
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_18 = ___frame0;
		NullCheck(L_18);
		bool L_19;
		L_19 = WebSocketFrame_get_IsCompressed_mB13266E84B60606C664B4FCCA6A4745688A5911E(L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_006a;
		}
	}
	{
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_20 = ___frame0;
		NullCheck(L_20);
		PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * L_21 = L_20->get__payloadData_5();
		NullCheck(L_21);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22;
		L_22 = PayloadData_get_ApplicationData_mC2AA23872DD4411DB4B14D7C55CB6781FB503333(L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_il2cpp_TypeInfo_var);
		String_t* L_23;
		L_23 = WebSocketFrame_utf8Decode_mF5CFD8479ED5E3AC2BEC94ACA901D5B9FF1D48C6(L_22, /*hidden argument*/NULL);
		G_B11_0 = L_23;
		goto IL_0075;
	}

IL_006a:
	{
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_24 = ___frame0;
		NullCheck(L_24);
		PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * L_25 = L_24->get__payloadData_5();
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		G_B11_0 = L_26;
	}

IL_0075:
	{
		G_B13_0 = G_B11_0;
		goto IL_007c;
	}

IL_0077:
	{
		G_B13_0 = _stringLiteral111B078632ED414E9392C91DEE241B11C9EE8544;
	}

IL_007c:
	{
		G_B15_0 = G_B13_0;
		goto IL_0083;
	}

IL_007e:
	{
		String_t* L_27 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B15_0 = L_27;
	}

IL_0083:
	{
		V_3 = G_B15_0;
		V_4 = _stringLiteralB7C2AD70263FE24D3526592776AEAD3BE74D4301;
		String_t* L_28 = V_4;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_29 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_30 = L_29;
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_31 = ___frame0;
		NullCheck(L_31);
		uint8_t L_32 = L_31->get__fin_1();
		uint8_t L_33 = L_32;
		RuntimeObject * L_34 = Box(Fin_tB63C3774106D399A2802141462FBCA7C2657157C_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_34);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_34);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_35 = L_30;
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_36 = ___frame0;
		NullCheck(L_36);
		uint8_t L_37 = L_36->get__rsv1_7();
		uint8_t L_38 = L_37;
		RuntimeObject * L_39 = Box(Rsv_tC7F1BD18C6301FBAA510C7755D1A45B8C950250D_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_39);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_39);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_40 = L_35;
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_41 = ___frame0;
		NullCheck(L_41);
		uint8_t L_42 = L_41->get__rsv2_8();
		uint8_t L_43 = L_42;
		RuntimeObject * L_44 = Box(Rsv_tC7F1BD18C6301FBAA510C7755D1A45B8C950250D_il2cpp_TypeInfo_var, &L_43);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_44);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_44);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_45 = L_40;
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_46 = ___frame0;
		NullCheck(L_46);
		uint8_t L_47 = L_46->get__rsv3_9();
		uint8_t L_48 = L_47;
		RuntimeObject * L_49 = Box(Rsv_tC7F1BD18C6301FBAA510C7755D1A45B8C950250D_il2cpp_TypeInfo_var, &L_48);
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_49);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_49);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_50 = L_45;
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_51 = ___frame0;
		NullCheck(L_51);
		uint8_t L_52 = L_51->get__opcode_4();
		uint8_t L_53 = L_52;
		RuntimeObject * L_54 = Box(Opcode_tDB68976A89F4FC63A2794ACEBBEAA6BDFD25EA01_il2cpp_TypeInfo_var, &L_53);
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_54);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_54);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_55 = L_50;
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_56 = ___frame0;
		NullCheck(L_56);
		uint8_t L_57 = L_56->get__mask_2();
		uint8_t L_58 = L_57;
		RuntimeObject * L_59 = Box(Mask_t11143EC89CC7AA99AD95ED61D44C938CFFBBF7F5_il2cpp_TypeInfo_var, &L_58);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_59);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_59);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_60 = L_55;
		uint8_t L_61 = V_0;
		uint8_t L_62 = L_61;
		RuntimeObject * L_63 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_62);
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_63);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_63);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_64 = L_60;
		String_t* L_65 = V_1;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, L_65);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_65);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_66 = L_64;
		String_t* L_67 = V_2;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_67);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)L_67);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_68 = L_66;
		String_t* L_69 = V_3;
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_69);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)L_69);
		String_t* L_70;
		L_70 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(L_28, L_68, /*hidden argument*/NULL);
		V_6 = L_70;
		goto IL_0107;
	}

IL_0107:
	{
		String_t* L_71 = V_6;
		return L_71;
	}
}
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::processHeader(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * WebSocketFrame_processHeader_m746B42813AAF5AE70A094B2C5F8BEA8146ACFABB (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___header0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	uint8_t V_1 = 0;
	uint8_t V_2 = 0;
	uint8_t V_3 = 0;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0;
	uint8_t V_6 = 0x0;
	WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * V_7 = NULL;
	bool V_8 = false;
	String_t* V_9 = NULL;
	bool V_10 = false;
	String_t* V_11 = NULL;
	bool V_12 = false;
	String_t* V_13 = NULL;
	bool V_14 = false;
	bool V_15 = false;
	String_t* V_16 = NULL;
	bool V_17 = false;
	String_t* V_18 = NULL;
	WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * V_19 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B22_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___header0;
		NullCheck(L_0);
		V_8 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_8;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		V_9 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral58C6CC9E50B09DC1CF08B0D07A6B288DF7DCCC9D));
		String_t* L_2 = V_9;
		WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD * L_3 = (WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD_il2cpp_TypeInfo_var)));
		WebSocketException__ctor_m38DB8AFA47A9CBAC2F5D1F5D3E19B9D65EEA348A(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketFrame_processHeader_m746B42813AAF5AE70A094B2C5F8BEA8146ACFABB_RuntimeMethod_var)));
	}

IL_0020:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___header0;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint8_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if ((((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)128)))) == ((int32_t)((int32_t)128))))
		{
			goto IL_0033;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_0034;
	}

IL_0033:
	{
		G_B5_0 = 1;
	}

IL_0034:
	{
		V_0 = G_B5_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___header0;
		NullCheck(L_7);
		int32_t L_8 = 0;
		uint8_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if ((((int32_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)64)))) == ((int32_t)((int32_t)64))))
		{
			goto IL_0042;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 1;
	}

IL_0043:
	{
		V_1 = G_B8_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = ___header0;
		NullCheck(L_10);
		int32_t L_11 = 0;
		uint8_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		if ((((int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)32)))) == ((int32_t)((int32_t)32))))
		{
			goto IL_0051;
		}
	}
	{
		G_B11_0 = 0;
		goto IL_0052;
	}

IL_0051:
	{
		G_B11_0 = 1;
	}

IL_0052:
	{
		V_2 = G_B11_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = ___header0;
		NullCheck(L_13);
		int32_t L_14 = 0;
		uint8_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		if ((((int32_t)((int32_t)((int32_t)L_15&(int32_t)((int32_t)16)))) == ((int32_t)((int32_t)16))))
		{
			goto IL_0060;
		}
	}
	{
		G_B14_0 = 0;
		goto IL_0061;
	}

IL_0060:
	{
		G_B14_0 = 1;
	}

IL_0061:
	{
		V_3 = G_B14_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = ___header0;
		NullCheck(L_16);
		int32_t L_17 = 0;
		uint8_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_4 = (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_18&(int32_t)((int32_t)15)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = ___header0;
		NullCheck(L_19);
		int32_t L_20 = 1;
		uint8_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		if ((((int32_t)((int32_t)((int32_t)L_21&(int32_t)((int32_t)128)))) == ((int32_t)((int32_t)128))))
		{
			goto IL_007e;
		}
	}
	{
		G_B17_0 = 0;
		goto IL_007f;
	}

IL_007e:
	{
		G_B17_0 = 1;
	}

IL_007f:
	{
		V_5 = G_B17_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = ___header0;
		NullCheck(L_22);
		int32_t L_23 = 1;
		uint8_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_6 = (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_24&(int32_t)((int32_t)127)))));
		uint8_t L_25 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Ext_IsSupported_m80971C6143B6F1C57D225A1C282ABCA26A6CB856(L_25, /*hidden argument*/NULL);
		V_10 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_10;
		if (!L_27)
		{
			goto IL_00af;
		}
	}
	{
		V_11 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4A3B7207BD0FE0A9348B78B21B60F0C7FB4FB8D9));
		String_t* L_28 = V_11;
		WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD * L_29 = (WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD_il2cpp_TypeInfo_var)));
		WebSocketException__ctor_m13A23D3EA1E3BF42C594EC411BA6E67F12C610D8(L_29, ((int32_t)1002), L_28, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketFrame_processHeader_m746B42813AAF5AE70A094B2C5F8BEA8146ACFABB_RuntimeMethod_var)));
	}

IL_00af:
	{
		uint8_t L_30 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Ext_IsData_m6AD468BCA8D9A44C16F02D577B441DA4CC008253(L_30, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_00be;
		}
	}
	{
		uint8_t L_32 = V_1;
		G_B22_0 = ((((int32_t)L_32) == ((int32_t)1))? 1 : 0);
		goto IL_00bf;
	}

IL_00be:
	{
		G_B22_0 = 0;
	}

IL_00bf:
	{
		V_12 = (bool)G_B22_0;
		bool L_33 = V_12;
		if (!L_33)
		{
			goto IL_00da;
		}
	}
	{
		V_13 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral834606D724EFC1323366C1AF3A0A89F88DDC2719));
		String_t* L_34 = V_13;
		WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD * L_35 = (WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD_il2cpp_TypeInfo_var)));
		WebSocketException__ctor_m13A23D3EA1E3BF42C594EC411BA6E67F12C610D8(L_35, ((int32_t)1002), L_34, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketFrame_processHeader_m746B42813AAF5AE70A094B2C5F8BEA8146ACFABB_RuntimeMethod_var)));
	}

IL_00da:
	{
		uint8_t L_36 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Ext_IsControl_m918A0FFED3B4B713EB7F2909DD6F3FB751FB88D0(L_36, /*hidden argument*/NULL);
		V_14 = L_37;
		bool L_38 = V_14;
		if (!L_38)
		{
			goto IL_0129;
		}
	}
	{
		uint8_t L_39 = V_0;
		V_15 = (bool)((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		bool L_40 = V_15;
		if (!L_40)
		{
			goto IL_0107;
		}
	}
	{
		V_16 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDB3DAB5A0D06D5129783FDA885A5E18016C1C1F1));
		String_t* L_41 = V_16;
		WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD * L_42 = (WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD_il2cpp_TypeInfo_var)));
		WebSocketException__ctor_m13A23D3EA1E3BF42C594EC411BA6E67F12C610D8(L_42, ((int32_t)1002), L_41, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketFrame_processHeader_m746B42813AAF5AE70A094B2C5F8BEA8146ACFABB_RuntimeMethod_var)));
	}

IL_0107:
	{
		uint8_t L_43 = V_6;
		V_17 = (bool)((((int32_t)L_43) > ((int32_t)((int32_t)125)))? 1 : 0);
		bool L_44 = V_17;
		if (!L_44)
		{
			goto IL_0128;
		}
	}
	{
		V_18 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral18DA0D513DFCDB70E04306E73D5557C9383A43C6));
		String_t* L_45 = V_18;
		WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD * L_46 = (WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD_il2cpp_TypeInfo_var)));
		WebSocketException__ctor_m13A23D3EA1E3BF42C594EC411BA6E67F12C610D8(L_46, ((int32_t)1002), L_45, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_46, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketFrame_processHeader_m746B42813AAF5AE70A094B2C5F8BEA8146ACFABB_RuntimeMethod_var)));
	}

IL_0128:
	{
	}

IL_0129:
	{
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_47 = (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E *)il2cpp_codegen_object_new(WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_il2cpp_TypeInfo_var);
		WebSocketFrame__ctor_m97DD3448BAAE1904281FDDE41F5837FC77274463(L_47, /*hidden argument*/NULL);
		V_7 = L_47;
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_48 = V_7;
		uint8_t L_49 = V_0;
		NullCheck(L_48);
		L_48->set__fin_1(L_49);
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_50 = V_7;
		uint8_t L_51 = V_1;
		NullCheck(L_50);
		L_50->set__rsv1_7(L_51);
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_52 = V_7;
		uint8_t L_53 = V_2;
		NullCheck(L_52);
		L_52->set__rsv2_8(L_53);
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_54 = V_7;
		uint8_t L_55 = V_3;
		NullCheck(L_54);
		L_54->set__rsv3_9(L_55);
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_56 = V_7;
		uint8_t L_57 = V_4;
		NullCheck(L_56);
		L_56->set__opcode_4(L_57);
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_58 = V_7;
		uint8_t L_59 = V_5;
		NullCheck(L_58);
		L_58->set__mask_2(L_59);
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_60 = V_7;
		uint8_t L_61 = V_6;
		NullCheck(L_60);
		L_60->set__payloadLength_6(L_61);
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_62 = V_7;
		V_19 = L_62;
		goto IL_0171;
	}

IL_0171:
	{
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_63 = V_19;
		return L_63;
	}
}
// System.Void WebSocketSharp.WebSocketFrame::readExtendedPayloadLengthAsync(System.IO.Stream,WebSocketSharp.WebSocketFrame,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_readExtendedPayloadLengthAsync_m4B4634276583FD368A094C0F0629F1144704BFF4 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * ___frame1, Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * ___completed2, Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m3FFF7B87CED68FC8794868F38BC431517ED024DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m7942990CFFB5E67155F4D9BB7E51F95194069243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass71_0_U3CreadExtendedPayloadLengthAsyncU3Eb__0_m5527184BF5560C7E9E784777959B25A6462F92A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass71_0_tDE27FBCA0A789AFD6E2B10E71A24F37864062306_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass71_0_tDE27FBCA0A789AFD6E2B10E71A24F37864062306 * V_0 = NULL;
	bool V_1 = false;
	{
		U3CU3Ec__DisplayClass71_0_tDE27FBCA0A789AFD6E2B10E71A24F37864062306 * L_0 = (U3CU3Ec__DisplayClass71_0_tDE27FBCA0A789AFD6E2B10E71A24F37864062306 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass71_0_tDE27FBCA0A789AFD6E2B10E71A24F37864062306_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass71_0__ctor_mA5F8D524DDE8425A4743DFE837FC3AC867A6D1A9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass71_0_tDE27FBCA0A789AFD6E2B10E71A24F37864062306 * L_1 = V_0;
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_2 = ___frame1;
		NullCheck(L_1);
		L_1->set_frame_1(L_2);
		U3CU3Ec__DisplayClass71_0_tDE27FBCA0A789AFD6E2B10E71A24F37864062306 * L_3 = V_0;
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_4 = ___completed2;
		NullCheck(L_3);
		L_3->set_completed_2(L_4);
		U3CU3Ec__DisplayClass71_0_tDE27FBCA0A789AFD6E2B10E71A24F37864062306 * L_5 = V_0;
		U3CU3Ec__DisplayClass71_0_tDE27FBCA0A789AFD6E2B10E71A24F37864062306 * L_6 = V_0;
		NullCheck(L_6);
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_7 = L_6->get_frame_1();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = WebSocketFrame_get_ExtendedPayloadLengthWidth_m9974FBBA5642F22772E298F31DA5BA90B1BEBA8C(L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->set_len_0(L_8);
		U3CU3Ec__DisplayClass71_0_tDE27FBCA0A789AFD6E2B10E71A24F37864062306 * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_len_0();
		V_1 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		U3CU3Ec__DisplayClass71_0_tDE27FBCA0A789AFD6E2B10E71A24F37864062306 * L_12 = V_0;
		NullCheck(L_12);
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_13 = L_12->get_frame_1();
		IL2CPP_RUNTIME_CLASS_INIT(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = ((WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307_StaticFields*)il2cpp_codegen_static_fields_for(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307_il2cpp_TypeInfo_var))->get_EmptyBytes_43();
		NullCheck(L_13);
		L_13->set__extPayloadLength_0(L_14);
		U3CU3Ec__DisplayClass71_0_tDE27FBCA0A789AFD6E2B10E71A24F37864062306 * L_15 = V_0;
		NullCheck(L_15);
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_16 = L_15->get_completed_2();
		U3CU3Ec__DisplayClass71_0_tDE27FBCA0A789AFD6E2B10E71A24F37864062306 * L_17 = V_0;
		NullCheck(L_17);
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_18 = L_17->get_frame_1();
		NullCheck(L_16);
		Action_1_Invoke_m3FFF7B87CED68FC8794868F38BC431517ED024DC(L_16, L_18, /*hidden argument*/Action_1_Invoke_m3FFF7B87CED68FC8794868F38BC431517ED024DC_RuntimeMethod_var);
		goto IL_0072;
	}

IL_0058:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_19 = ___stream0;
		U3CU3Ec__DisplayClass71_0_tDE27FBCA0A789AFD6E2B10E71A24F37864062306 * L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = L_20->get_len_0();
		U3CU3Ec__DisplayClass71_0_tDE27FBCA0A789AFD6E2B10E71A24F37864062306 * L_22 = V_0;
		Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_23 = (Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 *)il2cpp_codegen_object_new(Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1_il2cpp_TypeInfo_var);
		Action_1__ctor_m7942990CFFB5E67155F4D9BB7E51F95194069243(L_23, L_22, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass71_0_U3CreadExtendedPayloadLengthAsyncU3Eb__0_m5527184BF5560C7E9E784777959B25A6462F92A9_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m7942990CFFB5E67155F4D9BB7E51F95194069243_RuntimeMethod_var);
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_24 = ___error3;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var);
		Ext_ReadBytesAsync_m6CC18875FE4D190E7881E90C46533E434FA6E1A4(L_19, L_21, L_23, L_24, /*hidden argument*/NULL);
	}

IL_0072:
	{
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame::readHeaderAsync(System.IO.Stream,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_readHeaderAsync_m3D0FC60E906398B185A2D9C2418321E606283C82 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * ___completed1, Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m7942990CFFB5E67155F4D9BB7E51F95194069243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass73_0_U3CreadHeaderAsyncU3Eb__0_mBD59C233292FE0B2A37D521A0656DF0947A6C7D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass73_0_t1AA2F56924CE1580D7DDEE26E3B028E2200D7135_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass73_0_t1AA2F56924CE1580D7DDEE26E3B028E2200D7135 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass73_0_t1AA2F56924CE1580D7DDEE26E3B028E2200D7135 * L_0 = (U3CU3Ec__DisplayClass73_0_t1AA2F56924CE1580D7DDEE26E3B028E2200D7135 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass73_0_t1AA2F56924CE1580D7DDEE26E3B028E2200D7135_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass73_0__ctor_mA4B557CE7C123A7E1E81BF4DAA7C8EA8D0A75DA2(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass73_0_t1AA2F56924CE1580D7DDEE26E3B028E2200D7135 * L_1 = V_0;
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_2 = ___completed1;
		NullCheck(L_1);
		L_1->set_completed_0(L_2);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_3 = ___stream0;
		U3CU3Ec__DisplayClass73_0_t1AA2F56924CE1580D7DDEE26E3B028E2200D7135 * L_4 = V_0;
		Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_5 = (Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 *)il2cpp_codegen_object_new(Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1_il2cpp_TypeInfo_var);
		Action_1__ctor_m7942990CFFB5E67155F4D9BB7E51F95194069243(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass73_0_U3CreadHeaderAsyncU3Eb__0_mBD59C233292FE0B2A37D521A0656DF0947A6C7D2_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m7942990CFFB5E67155F4D9BB7E51F95194069243_RuntimeMethod_var);
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_6 = ___error2;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var);
		Ext_ReadBytesAsync_m6CC18875FE4D190E7881E90C46533E434FA6E1A4(L_3, 2, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame::readMaskingKeyAsync(System.IO.Stream,WebSocketSharp.WebSocketFrame,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_readMaskingKeyAsync_m96CF6B4ACA26A4398AD1186601B072CFD1098D76 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * ___frame1, Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * ___completed2, Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m3FFF7B87CED68FC8794868F38BC431517ED024DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m7942990CFFB5E67155F4D9BB7E51F95194069243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass75_0_U3CreadMaskingKeyAsyncU3Eb__0_m5DFD119815FD29BD7D02E2304069149282F6A117_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass75_0_t41FE8DC939EFCB7DF138812C55EBAA3BE1820A84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass75_0_t41FE8DC939EFCB7DF138812C55EBAA3BE1820A84 * V_0 = NULL;
	bool V_1 = false;
	{
		U3CU3Ec__DisplayClass75_0_t41FE8DC939EFCB7DF138812C55EBAA3BE1820A84 * L_0 = (U3CU3Ec__DisplayClass75_0_t41FE8DC939EFCB7DF138812C55EBAA3BE1820A84 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass75_0_t41FE8DC939EFCB7DF138812C55EBAA3BE1820A84_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass75_0__ctor_mBEF3C1FDFD48303743B474901E254F71A0179C32(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass75_0_t41FE8DC939EFCB7DF138812C55EBAA3BE1820A84 * L_1 = V_0;
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_2 = ___frame1;
		NullCheck(L_1);
		L_1->set_frame_1(L_2);
		U3CU3Ec__DisplayClass75_0_t41FE8DC939EFCB7DF138812C55EBAA3BE1820A84 * L_3 = V_0;
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_4 = ___completed2;
		NullCheck(L_3);
		L_3->set_completed_2(L_4);
		U3CU3Ec__DisplayClass75_0_t41FE8DC939EFCB7DF138812C55EBAA3BE1820A84 * L_5 = V_0;
		NullCheck(L_5);
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_6 = L_5->get_frame_1();
		NullCheck(L_6);
		bool L_7;
		L_7 = WebSocketFrame_get_IsMasked_m16421A430B758792761BCFFA0D937EDC57FBBC47(L_6, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		U3CU3Ec__DisplayClass75_0_t41FE8DC939EFCB7DF138812C55EBAA3BE1820A84 * L_9 = V_0;
		NullCheck(L_9);
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_10 = L_9->get_frame_1();
		IL2CPP_RUNTIME_CLASS_INIT(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = ((WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307_StaticFields*)il2cpp_codegen_static_fields_for(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307_il2cpp_TypeInfo_var))->get_EmptyBytes_43();
		NullCheck(L_10);
		L_10->set__maskingKey_3(L_11);
		U3CU3Ec__DisplayClass75_0_t41FE8DC939EFCB7DF138812C55EBAA3BE1820A84 * L_12 = V_0;
		NullCheck(L_12);
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_13 = L_12->get_completed_2();
		U3CU3Ec__DisplayClass75_0_t41FE8DC939EFCB7DF138812C55EBAA3BE1820A84 * L_14 = V_0;
		NullCheck(L_14);
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_15 = L_14->get_frame_1();
		NullCheck(L_13);
		Action_1_Invoke_m3FFF7B87CED68FC8794868F38BC431517ED024DC(L_13, L_15, /*hidden argument*/Action_1_Invoke_m3FFF7B87CED68FC8794868F38BC431517ED024DC_RuntimeMethod_var);
		goto IL_006d;
	}

IL_004c:
	{
		U3CU3Ec__DisplayClass75_0_t41FE8DC939EFCB7DF138812C55EBAA3BE1820A84 * L_16 = V_0;
		NullCheck(L_16);
		L_16->set_len_0(4);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_17 = ___stream0;
		U3CU3Ec__DisplayClass75_0_t41FE8DC939EFCB7DF138812C55EBAA3BE1820A84 * L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = L_18->get_len_0();
		U3CU3Ec__DisplayClass75_0_t41FE8DC939EFCB7DF138812C55EBAA3BE1820A84 * L_20 = V_0;
		Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_21 = (Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 *)il2cpp_codegen_object_new(Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1_il2cpp_TypeInfo_var);
		Action_1__ctor_m7942990CFFB5E67155F4D9BB7E51F95194069243(L_21, L_20, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass75_0_U3CreadMaskingKeyAsyncU3Eb__0_m5DFD119815FD29BD7D02E2304069149282F6A117_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m7942990CFFB5E67155F4D9BB7E51F95194069243_RuntimeMethod_var);
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_22 = ___error3;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var);
		Ext_ReadBytesAsync_m6CC18875FE4D190E7881E90C46533E434FA6E1A4(L_17, L_19, L_21, L_22, /*hidden argument*/NULL);
	}

IL_006d:
	{
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame::readPayloadDataAsync(System.IO.Stream,WebSocketSharp.WebSocketFrame,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_readPayloadDataAsync_mE5DDE121C8B21564DBF883FC9D0556FE638DD74E (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * ___frame1, Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * ___completed2, Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m3FFF7B87CED68FC8794868F38BC431517ED024DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m7942990CFFB5E67155F4D9BB7E51F95194069243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass77_0_U3CreadPayloadDataAsyncU3Eb__0_m266CBC02AC10F95BAF979FA4EB92D2DBA7D5F923_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass77_0_tC80E02C07E3F3B1FA54221550F91A9441C063A9D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass77_0_tC80E02C07E3F3B1FA54221550F91A9441C063A9D * V_0 = NULL;
	uint64_t V_1 = 0;
	Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * V_2 = NULL;
	bool V_3 = false;
	String_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	{
		U3CU3Ec__DisplayClass77_0_tC80E02C07E3F3B1FA54221550F91A9441C063A9D * L_0 = (U3CU3Ec__DisplayClass77_0_tC80E02C07E3F3B1FA54221550F91A9441C063A9D *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass77_0_tC80E02C07E3F3B1FA54221550F91A9441C063A9D_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass77_0__ctor_mBDDFAC434940A602607712ABF422FD2D845C48C9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass77_0_tC80E02C07E3F3B1FA54221550F91A9441C063A9D * L_1 = V_0;
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_2 = ___frame1;
		NullCheck(L_1);
		L_1->set_frame_1(L_2);
		U3CU3Ec__DisplayClass77_0_tC80E02C07E3F3B1FA54221550F91A9441C063A9D * L_3 = V_0;
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_4 = ___completed2;
		NullCheck(L_3);
		L_3->set_completed_2(L_4);
		U3CU3Ec__DisplayClass77_0_tC80E02C07E3F3B1FA54221550F91A9441C063A9D * L_5 = V_0;
		NullCheck(L_5);
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_6 = L_5->get_frame_1();
		NullCheck(L_6);
		uint64_t L_7;
		L_7 = WebSocketFrame_get_ExactPayloadLength_m2162839191FF62DBB2D1DAD69BC2FD526161F56B(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		uint64_t L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E_il2cpp_TypeInfo_var);
		uint64_t L_9 = ((PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E_StaticFields*)il2cpp_codegen_static_fields_for(PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E_il2cpp_TypeInfo_var))->get_MaxLength_4();
		V_3 = (bool)((!(((uint64_t)L_8) <= ((uint64_t)L_9)))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0042;
		}
	}
	{
		V_4 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69ECBE0A20622E4AE8AA2D1B5E0CA9B07834AFF1));
		String_t* L_11 = V_4;
		WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD * L_12 = (WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD_il2cpp_TypeInfo_var)));
		WebSocketException__ctor_m13A23D3EA1E3BF42C594EC411BA6E67F12C610D8(L_12, ((int32_t)1009), L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketFrame_readPayloadDataAsync_mE5DDE121C8B21564DBF883FC9D0556FE638DD74E_RuntimeMethod_var)));
	}

IL_0042:
	{
		uint64_t L_13 = V_1;
		V_5 = (bool)((((int64_t)L_13) == ((int64_t)((int64_t)((int64_t)0))))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0072;
		}
	}
	{
		U3CU3Ec__DisplayClass77_0_tC80E02C07E3F3B1FA54221550F91A9441C063A9D * L_15 = V_0;
		NullCheck(L_15);
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_16 = L_15->get_frame_1();
		IL2CPP_RUNTIME_CLASS_INIT(PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E_il2cpp_TypeInfo_var);
		PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * L_17 = ((PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E_StaticFields*)il2cpp_codegen_static_fields_for(PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E_il2cpp_TypeInfo_var))->get_Empty_3();
		NullCheck(L_16);
		L_16->set__payloadData_5(L_17);
		U3CU3Ec__DisplayClass77_0_tC80E02C07E3F3B1FA54221550F91A9441C063A9D * L_18 = V_0;
		NullCheck(L_18);
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_19 = L_18->get_completed_2();
		U3CU3Ec__DisplayClass77_0_tC80E02C07E3F3B1FA54221550F91A9441C063A9D * L_20 = V_0;
		NullCheck(L_20);
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_21 = L_20->get_frame_1();
		NullCheck(L_19);
		Action_1_Invoke_m3FFF7B87CED68FC8794868F38BC431517ED024DC(L_19, L_21, /*hidden argument*/Action_1_Invoke_m3FFF7B87CED68FC8794868F38BC431517ED024DC_RuntimeMethod_var);
		goto IL_00bd;
	}

IL_0072:
	{
		U3CU3Ec__DisplayClass77_0_tC80E02C07E3F3B1FA54221550F91A9441C063A9D * L_22 = V_0;
		uint64_t L_23 = V_1;
		NullCheck(L_22);
		L_22->set_len_0(L_23);
		U3CU3Ec__DisplayClass77_0_tC80E02C07E3F3B1FA54221550F91A9441C063A9D * L_24 = V_0;
		Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_25 = (Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 *)il2cpp_codegen_object_new(Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1_il2cpp_TypeInfo_var);
		Action_1__ctor_m7942990CFFB5E67155F4D9BB7E51F95194069243(L_25, L_24, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass77_0_U3CreadPayloadDataAsyncU3Eb__0_m266CBC02AC10F95BAF979FA4EB92D2DBA7D5F923_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m7942990CFFB5E67155F4D9BB7E51F95194069243_RuntimeMethod_var);
		V_2 = L_25;
		U3CU3Ec__DisplayClass77_0_tC80E02C07E3F3B1FA54221550F91A9441C063A9D * L_26 = V_0;
		NullCheck(L_26);
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_27 = L_26->get_frame_1();
		NullCheck(L_27);
		uint8_t L_28 = L_27->get__payloadLength_6();
		V_6 = (bool)((((int32_t)L_28) < ((int32_t)((int32_t)127)))? 1 : 0);
		bool L_29 = V_6;
		if (!L_29)
		{
			goto IL_00a9;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_30 = ___stream0;
		uint64_t L_31 = V_1;
		Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_32 = V_2;
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_33 = ___error3;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var);
		Ext_ReadBytesAsync_m6CC18875FE4D190E7881E90C46533E434FA6E1A4(L_30, ((int32_t)((int32_t)L_31)), L_32, L_33, /*hidden argument*/NULL);
		goto IL_00bd;
	}

IL_00a9:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_34 = ___stream0;
		U3CU3Ec__DisplayClass77_0_tC80E02C07E3F3B1FA54221550F91A9441C063A9D * L_35 = V_0;
		NullCheck(L_35);
		int64_t L_36 = L_35->get_len_0();
		Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_37 = V_2;
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_38 = ___error3;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var);
		Ext_ReadBytesAsync_m6CB1BE2065877D9016E2F4B3C1513EC25A606978(L_34, L_36, ((int32_t)1024), L_37, L_38, /*hidden argument*/NULL);
	}

IL_00bd:
	{
		return;
	}
}
// System.String WebSocketSharp.WebSocketFrame::utf8Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocketFrame_utf8Decode_mF5CFD8479ED5E3AC2BEC94ACA901D5B9FF1D48C6 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0;
		L_0 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_1);
		V_0 = L_2;
		goto IL_0016;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0010;
		}
		throw e;
	}

CATCH_0010:
	{ // begin catch(System.Object)
		V_0 = (String_t*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0016;
	} // end catch (depth: 1)

IL_0016:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::CreateCloseFrame(WebSocketSharp.PayloadData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * WebSocketFrame_CreateCloseFrame_mBFA6B0C5C8DF2D911643EF9D913F0BF34824360B (PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * ___payloadData0, bool ___mask1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * V_0 = NULL;
	{
		PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * L_0 = ___payloadData0;
		bool L_1 = ___mask1;
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_2 = (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E *)il2cpp_codegen_object_new(WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_il2cpp_TypeInfo_var);
		WebSocketFrame__ctor_mF92491BF286A024786049C17647CD1C3CB725F40(L_2, 1, 8, L_0, (bool)0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000e;
	}

IL_000e:
	{
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_3 = V_0;
		return L_3;
	}
}
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::CreatePingFrame(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * WebSocketFrame_CreatePingFrame_mA5EA2B915FBA1343958AA6824499ADBACFC4DEB5 (bool ___mask0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E_il2cpp_TypeInfo_var);
		PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * L_0 = ((PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E_StaticFields*)il2cpp_codegen_static_fields_for(PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E_il2cpp_TypeInfo_var))->get_Empty_3();
		bool L_1 = ___mask0;
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_2 = (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E *)il2cpp_codegen_object_new(WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_il2cpp_TypeInfo_var);
		WebSocketFrame__ctor_mF92491BF286A024786049C17647CD1C3CB725F40(L_2, 1, ((int32_t)9), L_0, (bool)0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0013;
	}

IL_0013:
	{
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_3 = V_0;
		return L_3;
	}
}
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::CreatePongFrame(WebSocketSharp.PayloadData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * WebSocketFrame_CreatePongFrame_mA8CD688C15DD790CD8F0BA06CC43397E519A3F15 (PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * ___payloadData0, bool ___mask1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * V_0 = NULL;
	{
		PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * L_0 = ___payloadData0;
		bool L_1 = ___mask1;
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_2 = (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E *)il2cpp_codegen_object_new(WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_il2cpp_TypeInfo_var);
		WebSocketFrame__ctor_mF92491BF286A024786049C17647CD1C3CB725F40(L_2, 1, ((int32_t)10), L_0, (bool)0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_3 = V_0;
		return L_3;
	}
}
// System.Void WebSocketSharp.WebSocketFrame::ReadFrameAsync(System.IO.Stream,System.Boolean,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_ReadFrameAsync_m708A13E47738A4BA9790E2383AB1FF8AE93DDB63 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, bool ___unmask1, Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * ___completed2, Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m5A5A47FA527D0CE5744363F201993BA8537A8B96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass84_0_U3CReadFrameAsyncU3Eb__0_m8E53AC8E5C301D964A0EA74854A510E88444EE0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass84_0_tD733837EE92C060DC99B8407C379B65CA6886F53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass84_0_tD733837EE92C060DC99B8407C379B65CA6886F53 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass84_0_tD733837EE92C060DC99B8407C379B65CA6886F53 * L_0 = (U3CU3Ec__DisplayClass84_0_tD733837EE92C060DC99B8407C379B65CA6886F53 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass84_0_tD733837EE92C060DC99B8407C379B65CA6886F53_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass84_0__ctor_mA6A1CAA2C7643624C591E31037453A291BC18EDB(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass84_0_tD733837EE92C060DC99B8407C379B65CA6886F53 * L_1 = V_0;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = ___stream0;
		NullCheck(L_1);
		L_1->set_stream_0(L_2);
		U3CU3Ec__DisplayClass84_0_tD733837EE92C060DC99B8407C379B65CA6886F53 * L_3 = V_0;
		bool L_4 = ___unmask1;
		NullCheck(L_3);
		L_3->set_unmask_1(L_4);
		U3CU3Ec__DisplayClass84_0_tD733837EE92C060DC99B8407C379B65CA6886F53 * L_5 = V_0;
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_6 = ___completed2;
		NullCheck(L_5);
		L_5->set_completed_2(L_6);
		U3CU3Ec__DisplayClass84_0_tD733837EE92C060DC99B8407C379B65CA6886F53 * L_7 = V_0;
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_8 = ___error3;
		NullCheck(L_7);
		L_7->set_error_3(L_8);
		U3CU3Ec__DisplayClass84_0_tD733837EE92C060DC99B8407C379B65CA6886F53 * L_9 = V_0;
		NullCheck(L_9);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_10 = L_9->get_stream_0();
		U3CU3Ec__DisplayClass84_0_tD733837EE92C060DC99B8407C379B65CA6886F53 * L_11 = V_0;
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_12 = (Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A *)il2cpp_codegen_object_new(Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A_il2cpp_TypeInfo_var);
		Action_1__ctor_m5A5A47FA527D0CE5744363F201993BA8537A8B96(L_12, L_11, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass84_0_U3CReadFrameAsyncU3Eb__0_m8E53AC8E5C301D964A0EA74854A510E88444EE0E_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m5A5A47FA527D0CE5744363F201993BA8537A8B96_RuntimeMethod_var);
		U3CU3Ec__DisplayClass84_0_tD733837EE92C060DC99B8407C379B65CA6886F53 * L_13 = V_0;
		NullCheck(L_13);
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_14 = L_13->get_error_3();
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_il2cpp_TypeInfo_var);
		WebSocketFrame_readHeaderAsync_m3D0FC60E906398B185A2D9C2418321E606283C82(L_10, L_12, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame::Unmask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_Unmask_mFD54F296C7AA70613F65B93F3EC23F28E3419787 (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		uint8_t L_0 = __this->get__mask_2();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0034;
	}

IL_0010:
	{
		__this->set__mask_2(0);
		PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * L_2 = __this->get__payloadData_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get__maskingKey_3();
		NullCheck(L_2);
		PayloadData_Mask_mF740F0F886A5AD0E97D93AE0BDEC1D6F48549460(L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ((WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307_StaticFields*)il2cpp_codegen_static_fields_for(WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307_il2cpp_TypeInfo_var))->get_EmptyBytes_43();
		__this->set__maskingKey_3(L_4);
	}

IL_0034:
	{
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Byte> WebSocketSharp.WebSocketFrame::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketFrame_GetEnumerator_m1928AED1BD77E2C2760D0D67526ED2F5F1D30B00 (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__86_t79B0B8C14D5261662A95C2C543C629419F30FA13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetEnumeratorU3Ed__86_t79B0B8C14D5261662A95C2C543C629419F30FA13 * L_0 = (U3CGetEnumeratorU3Ed__86_t79B0B8C14D5261662A95C2C543C629419F30FA13 *)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__86_t79B0B8C14D5261662A95C2C543C629419F30FA13_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ed__86__ctor_mA9ED1EF2C55660D415015B3DDCA1F9612F23CAF2(L_0, 0, /*hidden argument*/NULL);
		U3CGetEnumeratorU3Ed__86_t79B0B8C14D5261662A95C2C543C629419F30FA13 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.String WebSocketSharp.WebSocketFrame::PrintToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocketFrame_PrintToString_m06E4221195ED5BCCC35D591781C95EE90C27A056 (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, bool ___dumped0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		bool L_0 = ___dumped0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = WebSocketFrame_print_m97A0823ABEEADE6EDF3610DC0915B6AF09A8FE4E(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_0012;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = WebSocketFrame_dump_mF771B433EF815AFF4402FB313384AD25F80B9007(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_0012:
	{
		V_0 = G_B3_0;
		goto IL_0015;
	}

IL_0015:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Byte[] WebSocketSharp.WebSocketFrame::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WebSocketFrame_ToArray_mA1FB44622CD8F356F869F4E5FB741E26A0A36E94 (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_5 = NULL;
	bool V_6 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B4_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B4_1 = NULL;
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * G_B4_2 = NULL;
	int32_t G_B3_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B3_1 = NULL;
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * G_B3_2 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B5_2 = NULL;
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * G_B5_3 = NULL;
	{
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_0 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			uint8_t L_1 = __this->get__fin_1();
			V_1 = L_1;
			int32_t L_2 = V_1;
			uint8_t L_3 = __this->get__rsv1_7();
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_2<<(int32_t)1)), (int32_t)L_3));
			int32_t L_4 = V_1;
			uint8_t L_5 = __this->get__rsv2_8();
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_4<<(int32_t)1)), (int32_t)L_5));
			int32_t L_6 = V_1;
			uint8_t L_7 = __this->get__rsv3_9();
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_6<<(int32_t)1)), (int32_t)L_7));
			int32_t L_8 = V_1;
			uint8_t L_9 = __this->get__opcode_4();
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_8<<(int32_t)4)), (int32_t)L_9));
			int32_t L_10 = V_1;
			uint8_t L_11 = __this->get__mask_2();
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_10<<(int32_t)1)), (int32_t)L_11));
			int32_t L_12 = V_1;
			uint8_t L_13 = __this->get__payloadLength_6();
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_12<<(int32_t)7)), (int32_t)L_13));
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_14 = V_0;
			int32_t L_15 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16;
			L_16 = Ext_InternalToByteArray_m95D68E7361577B50D01325CDFD283CC9B2F50D52((uint16_t)((int32_t)((uint16_t)L_15)), 1, /*hidden argument*/NULL);
			NullCheck(L_14);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_14, L_16, 0, 2);
			uint8_t L_17 = __this->get__payloadLength_6();
			V_2 = (bool)((((int32_t)L_17) > ((int32_t)((int32_t)125)))? 1 : 0);
			bool L_18 = V_2;
			if (!L_18)
			{
				goto IL_008c;
			}
		}

IL_0070:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_19 = V_0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = __this->get__extPayloadLength_0();
			uint8_t L_21 = __this->get__payloadLength_6();
			G_B3_0 = 0;
			G_B3_1 = L_20;
			G_B3_2 = L_19;
			if ((((int32_t)L_21) == ((int32_t)((int32_t)126))))
			{
				G_B4_0 = 0;
				G_B4_1 = L_20;
				G_B4_2 = L_19;
				goto IL_0085;
			}
		}

IL_0082:
		{
			G_B5_0 = 8;
			G_B5_1 = G_B3_0;
			G_B5_2 = G_B3_1;
			G_B5_3 = G_B3_2;
			goto IL_0086;
		}

IL_0085:
		{
			G_B5_0 = 2;
			G_B5_1 = G_B4_0;
			G_B5_2 = G_B4_1;
			G_B5_3 = G_B4_2;
		}

IL_0086:
		{
			NullCheck(G_B5_3);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, G_B5_3, G_B5_2, G_B5_1, G_B5_0);
		}

IL_008c:
		{
			uint8_t L_22 = __this->get__mask_2();
			V_3 = (bool)((((int32_t)L_22) == ((int32_t)1))? 1 : 0);
			bool L_23 = V_3;
			if (!L_23)
			{
				goto IL_00a8;
			}
		}

IL_0099:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_24 = V_0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = __this->get__maskingKey_3();
			NullCheck(L_24);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_24, L_25, 0, 4);
		}

IL_00a8:
		{
			uint8_t L_26 = __this->get__payloadLength_6();
			V_4 = (bool)((((int32_t)L_26) > ((int32_t)0))? 1 : 0);
			bool L_27 = V_4;
			if (!L_27)
			{
				goto IL_00f4;
			}
		}

IL_00b7:
		{
			PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * L_28 = __this->get__payloadData_5();
			NullCheck(L_28);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29;
			L_29 = PayloadData_ToArray_m9F987894AA89C17208C4E7ABB80F9708985682A3(L_28, /*hidden argument*/NULL);
			V_5 = L_29;
			uint8_t L_30 = __this->get__payloadLength_6();
			V_6 = (bool)((((int32_t)L_30) < ((int32_t)((int32_t)127)))? 1 : 0);
			bool L_31 = V_6;
			if (!L_31)
			{
				goto IL_00e5;
			}
		}

IL_00d5:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_32 = V_0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33 = V_5;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = V_5;
			NullCheck(L_34);
			NullCheck(L_32);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_32, L_33, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length))));
			goto IL_00f3;
		}

IL_00e5:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_35 = V_0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_36 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var);
			Ext_WriteBytes_m368AA9C6E63EBD8552BA51987CC92D6C64616C6F(L_35, L_36, ((int32_t)1024), /*hidden argument*/NULL);
		}

IL_00f3:
		{
		}

IL_00f4:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_37 = V_0;
			NullCheck(L_37);
			VirtActionInvoker0::Invoke(16 /* System.Void System.IO.Stream::Close() */, L_37);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_38 = V_0;
			NullCheck(L_38);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_39;
			L_39 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(33 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_38);
			V_7 = L_39;
			IL2CPP_LEAVE(0x110, FINALLY_0105);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0105;
	}

FINALLY_0105:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_40 = V_0;
			if (!L_40)
			{
				goto IL_010f;
			}
		}

IL_0108:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_41 = V_0;
			NullCheck(L_41);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_41);
		}

IL_010f:
		{
			IL2CPP_END_FINALLY(261)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(261)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x110, IL_0110)
	}

IL_0110:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_42 = V_7;
		return L_42;
	}
}
// System.String WebSocketSharp.WebSocketFrame::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocketFrame_ToString_m71E6D9CB6CAF8296F1EE7A0DFDA98AB2810AB074 (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = WebSocketFrame_ToArray_mA1FB44622CD8F356F869F4E5FB741E26A0A36E94(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = BitConverter_ToString_mD476DB63219FD7C7FFB472ABEB04A8BB2D171F30(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator WebSocketSharp.WebSocketFrame::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketFrame_System_Collections_IEnumerable_GetEnumerator_m41351EC306763A410DA4D24DEA08149FA87355A9 (WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = WebSocketFrame_GetEnumerator_m1928AED1BD77E2C2760D0D67526ED2F5F1D30B00(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
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
// System.Void WebSocketSharp.Net.AuthenticationResponse/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mCFE0631AB2A8360EE7B969E4145B30C9BB99328E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC81DDAE0EA2C737E510CBED988AA0E0A7EF615FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC81DDAE0EA2C737E510CBED988AA0E0A7EF615FA * L_0 = (U3CU3Ec_tC81DDAE0EA2C737E510CBED988AA0E0A7EF615FA *)il2cpp_codegen_object_new(U3CU3Ec_tC81DDAE0EA2C737E510CBED988AA0E0A7EF615FA_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m9DF7A2FBAB2162534C78347E8CE4705C93F27CDF(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC81DDAE0EA2C737E510CBED988AA0E0A7EF615FA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC81DDAE0EA2C737E510CBED988AA0E0A7EF615FA_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void WebSocketSharp.Net.AuthenticationResponse/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9DF7A2FBAB2162534C78347E8CE4705C93F27CDF (U3CU3Ec_tC81DDAE0EA2C737E510CBED988AA0E0A7EF615FA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean WebSocketSharp.Net.AuthenticationResponse/<>c::<initAsDigest>b__24_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CinitAsDigestU3Eb__24_0_m8F1C6B89E82006C47124CE8620433A6C0C4E88C9 (U3CU3Ec_tC81DDAE0EA2C737E510CBED988AA0E0A7EF615FA * __this, String_t* ___qop0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD555DED7CEC14AAFD2389F4CA5DB31942645053F);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___qop0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralD555DED7CEC14AAFD2389F4CA5DB31942645053F, /*hidden argument*/NULL);
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
// System.Void WebSocketSharp.Ext/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m72C2B5B34D36D3747124710A71FA1F1FA546329D (U3CU3Ec__DisplayClass21_0_t4130DD2D95DB1965A666132D6F3C94B3A451E720 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean WebSocketSharp.Ext/<>c__DisplayClass21_0::<ContainsTwice>b__0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass21_0_U3CContainsTwiceU3Eb__0_m48014E6EE2583BF1A4AD080E1790196A1BDB804E (U3CU3Ec__DisplayClass21_0_t4130DD2D95DB1965A666132D6F3C94B3A451E720 * __this, int32_t ___idx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_mE42F035B56D1C1B51E922AE8EA4261AA141DE6C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	{
		int32_t L_0 = ___idx0;
		int32_t L_1 = __this->get_end_0();
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0062;
	}

IL_0012:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = __this->get_values_1();
		int32_t L_4 = ___idx0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		int32_t L_7 = ___idx0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		goto IL_003f;
	}

IL_0021:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = __this->get_values_1();
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		String_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		String_t* L_12 = V_0;
		bool L_13;
		L_13 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_003a;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0062;
	}

IL_003a:
	{
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_003f:
	{
		int32_t L_16 = V_3;
		int32_t L_17 = __this->get_len_2();
		V_5 = (bool)((((int32_t)L_16) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_5;
		if (L_18)
		{
			goto IL_0021;
		}
	}
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_19 = __this->get_seek_3();
		int32_t L_20 = ___idx0;
		int32_t L_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		___idx0 = L_21;
		NullCheck(L_19);
		bool L_22;
		L_22 = Func_2_Invoke_mE42F035B56D1C1B51E922AE8EA4261AA141DE6C7(L_19, L_21, /*hidden argument*/Func_2_Invoke_mE42F035B56D1C1B51E922AE8EA4261AA141DE6C7_RuntimeMethod_var);
		V_2 = L_22;
		goto IL_0062;
	}

IL_0062:
	{
		bool L_23 = V_2;
		return L_23;
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
// System.Void WebSocketSharp.Ext/<>c__DisplayClass60_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass60_0__ctor_m4DA67D7368D4C624149BA18B8FC4F23CA18440F7 (U3CU3Ec__DisplayClass60_0_tA8D9CEFFE6BB12069D7E66BB20448C65E3B4EA27 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.Ext/<>c__DisplayClass60_0::<ReadBytesAsync>b__0(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass60_0_U3CReadBytesAsyncU3Eb__0_m694523E35914C9D8C4B7CDF87AA89FBFB46CC739 (U3CU3Ec__DisplayClass60_0_tA8D9CEFFE6BB12069D7E66BB20448C65E3B4EA27 * __this, RuntimeObject* ___ar0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_SubArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9D56E868860FD371A750EAA140BFE7EFAC275330_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Exception_t * V_7 = NULL;
	bool V_8 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_stream_0();
			RuntimeObject* L_1 = ___ar0;
			NullCheck(L_0);
			int32_t L_2;
			L_2 = VirtFuncInvoker1< int32_t, RuntimeObject* >::Invoke(20 /* System.Int32 System.IO.Stream::EndRead(System.IAsyncResult) */, L_0, L_1);
			V_0 = L_2;
			int32_t L_3 = V_0;
			V_1 = (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0099;
			}
		}

IL_001a:
		{
			int32_t L_5 = __this->get_retry_1();
			IL2CPP_RUNTIME_CLASS_INIT(Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var);
			int32_t L_6 = ((Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_StaticFields*)il2cpp_codegen_static_fields_for(Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var))->get__retry_1();
			V_2 = (bool)((((int32_t)L_5) < ((int32_t)L_6))? 1 : 0);
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_0067;
			}
		}

IL_002c:
		{
			int32_t L_8 = __this->get_retry_1();
			V_3 = L_8;
			int32_t L_9 = V_3;
			__this->set_retry_1(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_10 = __this->get_stream_0();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_buff_2();
			int32_t L_12 = __this->get_offset_3();
			int32_t L_13 = __this->get_length_4();
			AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_14 = __this->get_callback_5();
			NullCheck(L_10);
			RuntimeObject* L_15;
			L_15 = VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject * >::Invoke(19 /* System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_10, L_11, L_12, L_13, L_14, NULL);
			goto IL_013a;
		}

IL_0067:
		{
			Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_16 = __this->get_completed_6();
			V_4 = (bool)((!(((RuntimeObject*)(Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_17 = V_4;
			if (!L_17)
			{
				goto IL_0094;
			}
		}

IL_0076:
		{
			Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_18 = __this->get_completed_6();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = __this->get_buff_2();
			int32_t L_20 = __this->get_offset_3();
			IL2CPP_RUNTIME_CLASS_INIT(Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21;
			L_21 = Ext_SubArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9D56E868860FD371A750EAA140BFE7EFAC275330(L_19, 0, L_20, /*hidden argument*/Ext_SubArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9D56E868860FD371A750EAA140BFE7EFAC275330_RuntimeMethod_var);
			NullCheck(L_18);
			Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30(L_18, L_21, /*hidden argument*/Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30_RuntimeMethod_var);
		}

IL_0094:
		{
			goto IL_013a;
		}

IL_0099:
		{
			int32_t L_22 = V_0;
			int32_t L_23 = __this->get_length_4();
			V_5 = (bool)((((int32_t)L_22) == ((int32_t)L_23))? 1 : 0);
			bool L_24 = V_5;
			if (!L_24)
			{
				goto IL_00cc;
			}
		}

IL_00a8:
		{
			Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_25 = __this->get_completed_6();
			V_6 = (bool)((!(((RuntimeObject*)(Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 *)L_25) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_26 = V_6;
			if (!L_26)
			{
				goto IL_00ca;
			}
		}

IL_00b8:
		{
			Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_27 = __this->get_completed_6();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28 = __this->get_buff_2();
			NullCheck(L_27);
			Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30(L_27, L_28, /*hidden argument*/Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30_RuntimeMethod_var);
		}

IL_00ca:
		{
			goto IL_013a;
		}

IL_00cc:
		{
			__this->set_retry_1(0);
			int32_t L_29 = __this->get_offset_3();
			int32_t L_30 = V_0;
			__this->set_offset_3(((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_30)));
			int32_t L_31 = __this->get_length_4();
			int32_t L_32 = V_0;
			__this->set_length_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)L_32)));
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_33 = __this->get_stream_0();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = __this->get_buff_2();
			int32_t L_35 = __this->get_offset_3();
			int32_t L_36 = __this->get_length_4();
			AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_37 = __this->get_callback_5();
			NullCheck(L_33);
			RuntimeObject* L_38;
			L_38 = VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject * >::Invoke(19 /* System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_33, L_34, L_35, L_36, L_37, NULL);
			goto IL_013a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0117;
		}
		throw e;
	}

CATCH_0117:
	{ // begin catch(System.Exception)
		{
			V_7 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_39 = __this->get_error_7();
			V_8 = (bool)((!(((RuntimeObject*)(Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 *)L_39) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_40 = V_8;
			if (!L_40)
			{
				goto IL_0137;
			}
		}

IL_0129:
		{
			Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_41 = __this->get_error_7();
			Exception_t * L_42 = V_7;
			NullCheck(L_41);
			Action_1_Invoke_mFFDA4B6E4544D37A14A46ED010868613ED1F454C(L_41, L_42, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Action_1_Invoke_mFFDA4B6E4544D37A14A46ED010868613ED1F454C_RuntimeMethod_var)));
		}

IL_0137:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_013a;
		}
	} // end catch (depth: 1)

IL_013a:
	{
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
// System.Void WebSocketSharp.Ext/<>c__DisplayClass61_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass61_0__ctor_mC557811E6CDAA4EEB3A91D4DEE4B3C851140321B (U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.Ext/<>c__DisplayClass61_0::<ReadBytesAsync>b__0(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass61_0_U3CReadBytesAsyncU3Eb__0_m48AB878766A04B76521404402A8A766C9A0DB13A (U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0 * __this, int64_t ___len0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass61_1_U3CReadBytesAsyncU3Eb__1_m8E0A47C4934E49D92E77E9A60A3EAA2DC6985693_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass61_1_t2E2BDA6F0A1C4DA3216DDB8C019054EC49793A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass61_1_t2E2BDA6F0A1C4DA3216DDB8C019054EC49793A6F * V_0 = NULL;
	bool V_1 = false;
	{
		U3CU3Ec__DisplayClass61_1_t2E2BDA6F0A1C4DA3216DDB8C019054EC49793A6F * L_0 = (U3CU3Ec__DisplayClass61_1_t2E2BDA6F0A1C4DA3216DDB8C019054EC49793A6F *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass61_1_t2E2BDA6F0A1C4DA3216DDB8C019054EC49793A6F_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass61_1__ctor_m6D3DAA0E5B6F568CDC0E6DBE379D65FF2B3B47E9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass61_1_t2E2BDA6F0A1C4DA3216DDB8C019054EC49793A6F * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_CSU24U3CU3E8__locals1_1(__this);
		U3CU3Ec__DisplayClass61_1_t2E2BDA6F0A1C4DA3216DDB8C019054EC49793A6F * L_2 = V_0;
		int64_t L_3 = ___len0;
		NullCheck(L_2);
		L_2->set_len_0(L_3);
		U3CU3Ec__DisplayClass61_1_t2E2BDA6F0A1C4DA3216DDB8C019054EC49793A6F * L_4 = V_0;
		NullCheck(L_4);
		int64_t L_5 = L_4->get_len_0();
		int32_t L_6 = __this->get_bufferLength_0();
		V_1 = (bool)((((int64_t)L_5) < ((int64_t)((int64_t)((int64_t)L_6))))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		U3CU3Ec__DisplayClass61_1_t2E2BDA6F0A1C4DA3216DDB8C019054EC49793A6F * L_8 = V_0;
		NullCheck(L_8);
		int64_t L_9 = L_8->get_len_0();
		__this->set_bufferLength_0(((int32_t)((int32_t)L_9)));
	}

IL_0035:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_10 = __this->get_stream_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_buff_2();
		int32_t L_12 = __this->get_bufferLength_0();
		U3CU3Ec__DisplayClass61_1_t2E2BDA6F0A1C4DA3216DDB8C019054EC49793A6F * L_13 = V_0;
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_14 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_14, L_13, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass61_1_U3CReadBytesAsyncU3Eb__1_m8E0A47C4934E49D92E77E9A60A3EAA2DC6985693_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject* L_15;
		L_15 = VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject * >::Invoke(19 /* System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_10, L_11, 0, L_12, L_14, NULL);
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
// System.Void WebSocketSharp.Ext/<>c__DisplayClass61_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass61_1__ctor_m6D3DAA0E5B6F568CDC0E6DBE379D65FF2B3B47E9 (U3CU3Ec__DisplayClass61_1_t2E2BDA6F0A1C4DA3216DDB8C019054EC49793A6F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.Ext/<>c__DisplayClass61_1::<ReadBytesAsync>b__1(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass61_1_U3CReadBytesAsyncU3Eb__1_m8E0A47C4934E49D92E77E9A60A3EAA2DC6985693 (U3CU3Ec__DisplayClass61_1_t2E2BDA6F0A1C4DA3216DDB8C019054EC49793A6F * __this, RuntimeObject* ___ar0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Exception_t * V_7 = NULL;
	bool V_8 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0 * L_0 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_0);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = L_0->get_stream_1();
			RuntimeObject* L_2 = ___ar0;
			NullCheck(L_1);
			int32_t L_3;
			L_3 = VirtFuncInvoker1< int32_t, RuntimeObject* >::Invoke(20 /* System.Int32 System.IO.Stream::EndRead(System.IAsyncResult) */, L_1, L_2);
			V_0 = L_3;
			int32_t L_4 = V_0;
			V_1 = (bool)((((int32_t)((((int32_t)L_4) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_00ce;
			}
		}

IL_0022:
		{
			U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0 * L_6 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_6);
			int32_t L_7 = L_6->get_retry_3();
			IL2CPP_RUNTIME_CLASS_INIT(Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var);
			int32_t L_8 = ((Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_StaticFields*)il2cpp_codegen_static_fields_for(Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var))->get__retry_1();
			V_2 = (bool)((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
			bool L_9 = V_2;
			if (!L_9)
			{
				goto IL_0070;
			}
		}

IL_0039:
		{
			U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0 * L_10 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_10);
			int32_t L_11 = L_10->get_retry_3();
			V_3 = L_11;
			U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0 * L_12 = __this->get_CSU24U3CU3E8__locals1_1();
			int32_t L_13 = V_3;
			NullCheck(L_12);
			L_12->set_retry_3(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
			U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0 * L_14 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_14);
			Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * L_15 = L_14->get_read_4();
			int64_t L_16 = __this->get_len_0();
			NullCheck(L_15);
			Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39(L_15, L_16, /*hidden argument*/Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39_RuntimeMethod_var);
			goto IL_01bf;
		}

IL_0070:
		{
			U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0 * L_17 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_17);
			Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_18 = L_17->get_completed_5();
			V_4 = (bool)((!(((RuntimeObject*)(Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 *)L_18) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_19 = V_4;
			if (!L_19)
			{
				goto IL_00b8;
			}
		}

IL_0084:
		{
			U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0 * L_20 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_20);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_21 = L_20->get_dest_6();
			NullCheck(L_21);
			VirtActionInvoker0::Invoke(16 /* System.Void System.IO.Stream::Close() */, L_21);
			U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0 * L_22 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_22);
			Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_23 = L_22->get_completed_5();
			U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0 * L_24 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_24);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_25 = L_24->get_dest_6();
			NullCheck(L_25);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26;
			L_26 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(33 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_25);
			NullCheck(L_23);
			Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30(L_23, L_26, /*hidden argument*/Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30_RuntimeMethod_var);
		}

IL_00b8:
		{
			U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0 * L_27 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_27);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_28 = L_27->get_dest_6();
			NullCheck(L_28);
			Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0(L_28, /*hidden argument*/NULL);
			goto IL_01bf;
		}

IL_00ce:
		{
			U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0 * L_29 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_29);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_30 = L_29->get_dest_6();
			U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0 * L_31 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_31);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32 = L_31->get_buff_2();
			int32_t L_33 = V_0;
			NullCheck(L_30);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_30, L_32, 0, L_33);
			int32_t L_34 = V_0;
			int64_t L_35 = __this->get_len_0();
			V_5 = (bool)((((int64_t)((int64_t)((int64_t)L_34))) == ((int64_t)L_35))? 1 : 0);
			bool L_36 = V_5;
			if (!L_36)
			{
				goto IL_0158;
			}
		}

IL_00fc:
		{
			U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0 * L_37 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_37);
			Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_38 = L_37->get_completed_5();
			V_6 = (bool)((!(((RuntimeObject*)(Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 *)L_38) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_39 = V_6;
			if (!L_39)
			{
				goto IL_0145;
			}
		}

IL_0111:
		{
			U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0 * L_40 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_40);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_41 = L_40->get_dest_6();
			NullCheck(L_41);
			VirtActionInvoker0::Invoke(16 /* System.Void System.IO.Stream::Close() */, L_41);
			U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0 * L_42 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_42);
			Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_43 = L_42->get_completed_5();
			U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0 * L_44 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_44);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_45 = L_44->get_dest_6();
			NullCheck(L_45);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_46;
			L_46 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(33 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_45);
			NullCheck(L_43);
			Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30(L_43, L_46, /*hidden argument*/Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30_RuntimeMethod_var);
		}

IL_0145:
		{
			U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0 * L_47 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_47);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_48 = L_47->get_dest_6();
			NullCheck(L_48);
			Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0(L_48, /*hidden argument*/NULL);
			goto IL_01bf;
		}

IL_0158:
		{
			U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0 * L_49 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_49);
			L_49->set_retry_3(0);
			U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0 * L_50 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_50);
			Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * L_51 = L_50->get_read_4();
			int64_t L_52 = __this->get_len_0();
			int32_t L_53 = V_0;
			NullCheck(L_51);
			Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39(L_51, ((int64_t)il2cpp_codegen_subtract((int64_t)L_52, (int64_t)((int64_t)((int64_t)L_53)))), /*hidden argument*/Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39_RuntimeMethod_var);
			goto IL_01bf;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0181;
		}
		throw e;
	}

CATCH_0181:
	{ // begin catch(System.Exception)
		{
			V_7 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0 * L_54 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_54);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_55 = L_54->get_dest_6();
			NullCheck(L_55);
			Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0(L_55, /*hidden argument*/NULL);
			U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0 * L_56 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_56);
			Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_57 = L_56->get_error_7();
			V_8 = (bool)((!(((RuntimeObject*)(Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 *)L_57) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_58 = V_8;
			if (!L_58)
			{
				goto IL_01bc;
			}
		}

IL_01a9:
		{
			U3CU3Ec__DisplayClass61_0_tE3E65CA2B6421E43DFFA5E7CADBBD8C71D402BE0 * L_59 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_59);
			Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_60 = L_59->get_error_7();
			Exception_t * L_61 = V_7;
			NullCheck(L_60);
			Action_1_Invoke_mFFDA4B6E4544D37A14A46ED010868613ED1F454C(L_60, L_61, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Action_1_Invoke_mFFDA4B6E4544D37A14A46ED010868613ED1F454C_RuntimeMethod_var)));
		}

IL_01bc:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01bf;
		}
	} // end catch (depth: 1)

IL_01bf:
	{
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
// System.Void WebSocketSharp.Ext/<SplitHeaderValue>d__63::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSplitHeaderValueU3Ed__63__ctor_m3757E013A377FF8D31E3CD2510C0932C52960424 (U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_2);
		return;
	}
}
// System.Void WebSocketSharp.Ext/<SplitHeaderValue>d__63::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSplitHeaderValueU3Ed__63_System_IDisposable_Dispose_m1F2D441851B00E9FF0154DBC3B6AC5CE8C923A8C (U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean WebSocketSharp.Ext/<SplitHeaderValue>d__63::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSplitHeaderValueU3Ed__63_MoveNext_m42EA2322964A105E1AF612A1AE0740F3C8BE47D1 (U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mD5F29E323D31B110F267B79CAF2E456F4C77ECE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0029;
	}

IL_001d:
	{
		goto IL_0180;
	}

IL_0022:
	{
		goto IL_01dd;
	}

IL_0027:
	{
		return (bool)0;
	}

IL_0029:
	{
		__this->set_U3CU3E1__state_0((-1));
		String_t* L_2 = __this->get_value_3();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		__this->set_U3ClenU3E5__1_7(L_3);
		StringBuilder_t * L_4 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E(L_4, ((int32_t)32), /*hidden argument*/NULL);
		__this->set_U3CbuffU3E5__2_8(L_4);
		int32_t L_5 = __this->get_U3ClenU3E5__1_7();
		__this->set_U3CendU3E5__3_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)));
		__this->set_U3CescapedU3E5__4_10((bool)0);
		__this->set_U3CquotedU3E5__5_11((bool)0);
		__this->set_U3CiU3E5__6_12(0);
		goto IL_01a9;
	}

IL_0077:
	{
		String_t* L_6 = __this->get_value_3();
		int32_t L_7 = __this->get_U3CiU3E5__6_12();
		NullCheck(L_6);
		Il2CppChar L_8;
		L_8 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_6, L_7, /*hidden argument*/NULL);
		__this->set_U3CcU3E5__7_13(L_8);
		StringBuilder_t * L_9 = __this->get_U3CbuffU3E5__2_8();
		Il2CppChar L_10 = __this->get_U3CcU3E5__7_13();
		NullCheck(L_9);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_9, L_10, /*hidden argument*/NULL);
		Il2CppChar L_12 = __this->get_U3CcU3E5__7_13();
		V_1 = (bool)((((int32_t)L_12) == ((int32_t)((int32_t)34)))? 1 : 0);
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_00db;
		}
	}
	{
		bool L_14 = __this->get_U3CescapedU3E5__4_10();
		V_2 = L_14;
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_00c7;
		}
	}
	{
		__this->set_U3CescapedU3E5__4_10((bool)0);
		goto IL_0197;
	}

IL_00c7:
	{
		bool L_16 = __this->get_U3CquotedU3E5__5_11();
		__this->set_U3CquotedU3E5__5_11((bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0));
		goto IL_0197;
	}

IL_00db:
	{
		Il2CppChar L_17 = __this->get_U3CcU3E5__7_13();
		V_3 = (bool)((((int32_t)L_17) == ((int32_t)((int32_t)92)))? 1 : 0);
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_0129;
		}
	}
	{
		int32_t L_19 = __this->get_U3CiU3E5__6_12();
		int32_t L_20 = __this->get_U3CendU3E5__3_9();
		V_4 = (bool)((((int32_t)L_19) == ((int32_t)L_20))? 1 : 0);
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_0103;
		}
	}
	{
		goto IL_01c3;
	}

IL_0103:
	{
		String_t* L_22 = __this->get_value_3();
		int32_t L_23 = __this->get_U3CiU3E5__6_12();
		NullCheck(L_22);
		Il2CppChar L_24;
		L_24 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_22, ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)), /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_24) == ((int32_t)((int32_t)34)))? 1 : 0);
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_0127;
		}
	}
	{
		__this->set_U3CescapedU3E5__4_10((bool)1);
	}

IL_0127:
	{
		goto IL_0197;
	}

IL_0129:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_26 = __this->get_separators_5();
		Il2CppChar L_27 = __this->get_U3CcU3E5__7_13();
		int32_t L_28;
		L_28 = Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mD5F29E323D31B110F267B79CAF2E456F4C77ECE4(L_26, L_27, /*hidden argument*/Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mD5F29E323D31B110F267B79CAF2E456F4C77ECE4_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_28) > ((int32_t)(-1)))? 1 : 0);
		bool L_29 = V_6;
		if (!L_29)
		{
			goto IL_0196;
		}
	}
	{
		bool L_30 = __this->get_U3CquotedU3E5__5_11();
		V_7 = L_30;
		bool L_31 = V_7;
		if (!L_31)
		{
			goto IL_0152;
		}
	}
	{
		goto IL_0197;
	}

IL_0152:
	{
		StringBuilder_t * L_32 = __this->get_U3CbuffU3E5__2_8();
		StringBuilder_t * L_33 = L_32;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_33, /*hidden argument*/NULL);
		NullCheck(L_33);
		StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_33, ((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)1)), /*hidden argument*/NULL);
		StringBuilder_t * L_35 = __this->get_U3CbuffU3E5__2_8();
		NullCheck(L_35);
		String_t* L_36;
		L_36 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_35);
		__this->set_U3CU3E2__current_1(L_36);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0180:
	{
		__this->set_U3CU3E1__state_0((-1));
		StringBuilder_t * L_37 = __this->get_U3CbuffU3E5__2_8();
		NullCheck(L_37);
		StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_37, 0, /*hidden argument*/NULL);
		goto IL_0197;
	}

IL_0196:
	{
	}

IL_0197:
	{
		int32_t L_38 = __this->get_U3CiU3E5__6_12();
		V_8 = L_38;
		int32_t L_39 = V_8;
		__this->set_U3CiU3E5__6_12(((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1)));
	}

IL_01a9:
	{
		int32_t L_40 = __this->get_U3CiU3E5__6_12();
		int32_t L_41 = __this->get_U3CendU3E5__3_9();
		V_9 = (bool)((((int32_t)((((int32_t)L_40) > ((int32_t)L_41))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_42 = V_9;
		if (L_42)
		{
			goto IL_0077;
		}
	}

IL_01c3:
	{
		StringBuilder_t * L_43 = __this->get_U3CbuffU3E5__2_8();
		NullCheck(L_43);
		String_t* L_44;
		L_44 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_43);
		__this->set_U3CU3E2__current_1(L_44);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_01dd:
	{
		__this->set_U3CU3E1__state_0((-1));
		return (bool)0;
	}
}
// System.String WebSocketSharp.Ext/<SplitHeaderValue>d__63::System.Collections.Generic.IEnumerator<System.String>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CSplitHeaderValueU3Ed__63_System_Collections_Generic_IEnumeratorU3CSystem_StringU3E_get_Current_mB1F1BCCC03EE6A0F03C2BE487DD8FB70F868F52A (U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void WebSocketSharp.Ext/<SplitHeaderValue>d__63::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSplitHeaderValueU3Ed__63_System_Collections_IEnumerator_Reset_mF9AEBEF0F025C5B420C12ACA4B3E39AB5CD10EC6 (U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSplitHeaderValueU3Ed__63_System_Collections_IEnumerator_Reset_mF9AEBEF0F025C5B420C12ACA4B3E39AB5CD10EC6_RuntimeMethod_var)));
	}
}
// System.Object WebSocketSharp.Ext/<SplitHeaderValue>d__63::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSplitHeaderValueU3Ed__63_System_Collections_IEnumerator_get_Current_m336E37E49175F5A77547FED4FA85FE893CBC09BF (U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.String> WebSocketSharp.Ext/<SplitHeaderValue>d__63::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSplitHeaderValueU3Ed__63_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_mA753EC79897DDD5F4367BF702FECFDA43007B706 (U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2;
		L_2 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_002e;
	}

IL_0027:
	{
		U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2 * L_4 = (U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2 *)il2cpp_codegen_object_new(U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2_il2cpp_TypeInfo_var);
		U3CSplitHeaderValueU3Ed__63__ctor_m3757E013A377FF8D31E3CD2510C0932C52960424(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002e:
	{
		U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2 * L_5 = V_0;
		String_t* L_6 = __this->get_U3CU3E3__value_4();
		NullCheck(L_5);
		L_5->set_value_3(L_6);
		U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2 * L_7 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_8 = __this->get_U3CU3E3__separators_6();
		NullCheck(L_7);
		L_7->set_separators_5(L_8);
		U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2 * L_9 = V_0;
		return L_9;
	}
}
// System.Collections.IEnumerator WebSocketSharp.Ext/<SplitHeaderValue>d__63::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSplitHeaderValueU3Ed__63_System_Collections_IEnumerable_GetEnumerator_m02754FBE10C352926F3BB451825EFE2EAAC70C84 (U3CSplitHeaderValueU3Ed__63_t2F8BEE5E3EC57EC1701D78FDE86BECCFBB3A93D2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CSplitHeaderValueU3Ed__63_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_mA753EC79897DDD5F4367BF702FECFDA43007B706(__this, /*hidden argument*/NULL);
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
// System.Void WebSocketSharp.HttpBase/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_mFE8EF460D2CA9FFEC20B5FF94B8D1E95975E70CF (U3CU3Ec__DisplayClass13_0_tDE35868D049FE26194335A467663112C5C9E7CF6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.HttpBase/<>c__DisplayClass13_0::<readHeaders>b__0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CreadHeadersU3Eb__0_m2115F63CE9CFBAE73F28A3840C1D0B3F345297F3 (U3CU3Ec__DisplayClass13_0_tDE35868D049FE26194335A467663112C5C9E7CF6 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___i0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 * L_2 = (EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059_il2cpp_TypeInfo_var)));
		EndOfStreamException__ctor_m62AD97E22305B690B74C4EA6E3EAC36D10CE3800(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral089CEAF9555BAF2295EDAC24268380608D558B60)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CreadHeadersU3Eb__0_m2115F63CE9CFBAE73F28A3840C1D0B3F345297F3_RuntimeMethod_var)));
	}

IL_0014:
	{
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_3 = __this->get_buff_0();
		int32_t L_4 = ___i0;
		NullCheck(L_3);
		List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED(L_3, (uint8_t)((int32_t)((uint8_t)L_4)), /*hidden argument*/List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_RuntimeMethod_var);
		int32_t L_5 = __this->get_cnt_1();
		V_1 = L_5;
		int32_t L_6 = V_1;
		__this->set_cnt_1(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
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
// System.Void WebSocketSharp.PayloadData/<GetEnumerator>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__25__ctor_m91760FF9FE6841BCB03B54DCAA6C6775572F3B4B (U3CGetEnumeratorU3Ed__25_t0B69FC394A574EB944DEF07074233712072EE207 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void WebSocketSharp.PayloadData/<GetEnumerator>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__25_System_IDisposable_Dispose_mD5CC9DFBADF87CC5051DE53F21BEE7DADD927482 (U3CGetEnumeratorU3Ed__25_t0B69FC394A574EB944DEF07074233712072EE207 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean WebSocketSharp.PayloadData/<GetEnumerator>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__25_MoveNext_mB5A9FB1F6D024459C903EEBD455B6AD3ACAAAD0E (U3CGetEnumeratorU3Ed__25_t0B69FC394A574EB944DEF07074233712072EE207 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
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
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0063;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * L_3 = __this->get_U3CU3E4__this_2();
		NullCheck(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = L_3->get__data_0();
		__this->set_U3CU3Es__1_3(L_4);
		__this->set_U3CU3Es__2_4(0);
		goto IL_0078;
	}

IL_003b:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = __this->get_U3CU3Es__1_3();
		int32_t L_6 = __this->get_U3CU3Es__2_4();
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		__this->set_U3CbU3E5__3_5(L_8);
		uint8_t L_9 = __this->get_U3CbU3E5__3_5();
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0063:
	{
		__this->set_U3CU3E1__state_0((-1));
		int32_t L_10 = __this->get_U3CU3Es__2_4();
		__this->set_U3CU3Es__2_4(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
	}

IL_0078:
	{
		int32_t L_11 = __this->get_U3CU3Es__2_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = __this->get_U3CU3Es__1_3();
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_003b;
		}
	}
	{
		__this->set_U3CU3Es__1_3((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		return (bool)0;
	}
}
// System.Byte WebSocketSharp.PayloadData/<GetEnumerator>d__25::System.Collections.Generic.IEnumerator<System.Byte>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U3CGetEnumeratorU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ByteU3E_get_Current_m758C597B3CF728D3A6DBAF5DAB5CF53F8FB406CB (U3CGetEnumeratorU3Ed__25_t0B69FC394A574EB944DEF07074233712072EE207 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void WebSocketSharp.PayloadData/<GetEnumerator>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__25_System_Collections_IEnumerator_Reset_m77974595B20E743BDD08B4DAE0E7C7D564DB86FC (U3CGetEnumeratorU3Ed__25_t0B69FC394A574EB944DEF07074233712072EE207 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__25_System_Collections_IEnumerator_Reset_m77974595B20E743BDD08B4DAE0E7C7D564DB86FC_RuntimeMethod_var)));
	}
}
// System.Object WebSocketSharp.PayloadData/<GetEnumerator>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__25_System_Collections_IEnumerator_get_Current_mEE41A90EDCCD627DBAAD7B5407E2A4DDA200759B (U3CGetEnumeratorU3Ed__25_t0B69FC394A574EB944DEF07074233712072EE207 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = __this->get_U3CU3E2__current_1();
		uint8_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_1);
		return L_2;
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
// System.Void WebSocketSharp.Net.WebHeaderCollection/<>c__DisplayClass59_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass59_0__ctor_m474B41B459EF5B76DB70D79F96770A99062C7551 (U3CU3Ec__DisplayClass59_0_tD1A29BA7CFFAD13D049EC46A64BF541638EDF902 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.Net.WebHeaderCollection/<>c__DisplayClass59_0::<GetObjectData>b__0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass59_0_U3CGetObjectDataU3Eb__0_m3EC9B1799B2DDB1079CD2A32A98D3E75CD1028EF (U3CU3Ec__DisplayClass59_0_tD1A29BA7CFFAD13D049EC46A64BF541638EDF902 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = __this->get_serializationInfo_0();
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___i0), /*hidden argument*/NULL);
		WebHeaderCollection_tF41E2CA053DC557D247EE73F96879A3C33120029 * L_2 = __this->get_U3CU3E4__this_1();
		int32_t L_3 = ___i0;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(20 /* System.String System.Collections.Specialized.NameValueCollection::GetKey(System.Int32) */, L_2, L_3);
		NullCheck(L_0);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_0, L_1, L_4, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_5 = __this->get_serializationInfo_0();
		int32_t L_6 = __this->get_cnt_2();
		int32_t L_7 = ___i0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7));
		String_t* L_8;
		L_8 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		WebHeaderCollection_tF41E2CA053DC557D247EE73F96879A3C33120029 * L_9 = __this->get_U3CU3E4__this_1();
		int32_t L_10 = ___i0;
		NullCheck(L_9);
		String_t* L_11;
		L_11 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(19 /* System.String System.Collections.Specialized.NameValueCollection::Get(System.Int32) */, L_9, L_10);
		NullCheck(L_5);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_5, L_8, L_11, /*hidden argument*/NULL);
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
// System.Void WebSocketSharp.Net.WebHeaderCollection/<>c__DisplayClass70_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass70_0__ctor_mAAA55C081B9E752B322D52656895A558D24236BE (U3CU3Ec__DisplayClass70_0_tEB5E1246CD18342EAD3FB5800AA33B4F583B8C2A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.Net.WebHeaderCollection/<>c__DisplayClass70_0::<ToString>b__0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass70_0_U3CToStringU3Eb__0_m091D3241617AC9106361DB8BC88437268DF714C3 (U3CU3Ec__DisplayClass70_0_tEB5E1246CD18342EAD3FB5800AA33B4F583B8C2A * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95C5AE48F5DB42D8A787E2092C983C3F77EB5182);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = __this->get_buff_0();
		WebHeaderCollection_tF41E2CA053DC557D247EE73F96879A3C33120029 * L_1 = __this->get_U3CU3E4__this_1();
		int32_t L_2 = ___i0;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(20 /* System.String System.Collections.Specialized.NameValueCollection::GetKey(System.Int32) */, L_1, L_2);
		WebHeaderCollection_tF41E2CA053DC557D247EE73F96879A3C33120029 * L_4 = __this->get_U3CU3E4__this_1();
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(19 /* System.String System.Collections.Specialized.NameValueCollection::Get(System.Int32) */, L_4, L_5);
		NullCheck(L_0);
		StringBuilder_t * L_7;
		L_7 = StringBuilder_AppendFormat_m37B348187DD9186C2451ACCA3DBC4ABCD4632AD4(L_0, _stringLiteral95C5AE48F5DB42D8A787E2092C983C3F77EB5182, L_3, L_6, /*hidden argument*/NULL);
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
// System.Void WebSocketSharp.WebSocket/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA04149465D020ACB1AA3AE51575D406CC48F38AC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB4B2EE9FCABB432F8B378A41C9FCE9D1B72118E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB4B2EE9FCABB432F8B378A41C9FCE9D1B72118E4 * L_0 = (U3CU3Ec_tB4B2EE9FCABB432F8B378A41C9FCE9D1B72118E4 *)il2cpp_codegen_object_new(U3CU3Ec_tB4B2EE9FCABB432F8B378A41C9FCE9D1B72118E4_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m16C4D1F28E43DD3F63D022E8EA98BE3EE9E46692(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB4B2EE9FCABB432F8B378A41C9FCE9D1B72118E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB4B2EE9FCABB432F8B378A41C9FCE9D1B72118E4_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void WebSocketSharp.WebSocket/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m16C4D1F28E43DD3F63D022E8EA98BE3EE9E46692 (U3CU3Ec_tB4B2EE9FCABB432F8B378A41C9FCE9D1B72118E4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean WebSocketSharp.WebSocket/<>c::<checkProtocols>b__120_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CcheckProtocolsU3Eb__120_0_m84018CDFEC9BA0D7D3417FDA6B8307651B3F6B56 (U3CU3Ec_tB4B2EE9FCABB432F8B378A41C9FCE9D1B72118E4 * __this, String_t* ___protocol0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___protocol0;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Ext_IsNullOrEmpty_mF001C5C52F7F3C9D34B2383224333009776E8410(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_2 = ___protocol0;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_tDE30D99BA7B56AB9FA6D1DA2880DC4DA47007EF9_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Ext_IsToken_mC26BA563EEF8B18E19B6424D856150A31563A2EE(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
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
// System.Void WebSocketSharp.WebSocket/<>c__DisplayClass174_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass174_0__ctor_mE00AC81263B3985FFD5B6A4D766DEE17C883F97E (U3CU3Ec__DisplayClass174_0_tDA36AB493B9655C7CF24DDF7BC3831626019CAF4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocket/<>c__DisplayClass174_0::<startReceiving>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass174_0_U3CstartReceivingU3Eb__0_mFC7582AE29A21E5F1094E5EF1EBD5D0160ACFBE7 (U3CU3Ec__DisplayClass174_0_tDA36AB493B9655C7CF24DDF7BC3831626019CAF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m36C6688B253977218074ACFD83304E717384FDE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m5A5A47FA527D0CE5744363F201993BA8537A8B96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass174_0_U3CstartReceivingU3Eb__1_mD9815C4B1C5A8385B22A01F14193DC70C8BA6E2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass174_0_U3CstartReceivingU3Eb__2_m6E38FD8C6E3371413962B6796C10CCDAF8B63A04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * V_0 = NULL;
	Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * V_1 = NULL;
	Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * G_B2_2 = NULL;
	Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * G_B1_2 = NULL;
	Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * G_B4_0 = NULL;
	Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * G_B4_1 = NULL;
	int32_t G_B4_2 = 0;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * G_B4_3 = NULL;
	Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * G_B3_0 = NULL;
	Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * G_B3_1 = NULL;
	int32_t G_B3_2 = 0;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * G_B3_3 = NULL;
	{
		WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = L_0->get__stream_39();
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_2 = __this->get_U3CU3E9__1_2();
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = 0;
		G_B1_2 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = 0;
			G_B2_2 = L_1;
			goto IL_002b;
		}
	}
	{
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_4 = (Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A *)il2cpp_codegen_object_new(Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A_il2cpp_TypeInfo_var);
		Action_1__ctor_m5A5A47FA527D0CE5744363F201993BA8537A8B96(L_4, __this, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass174_0_U3CstartReceivingU3Eb__1_mD9815C4B1C5A8385B22A01F14193DC70C8BA6E2A_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m5A5A47FA527D0CE5744363F201993BA8537A8B96_RuntimeMethod_var);
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_5 = L_4;
		V_0 = L_5;
		__this->set_U3CU3E9__1_2(L_5);
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_6 = V_0;
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_002b:
	{
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_7 = __this->get_U3CU3E9__2_3();
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_8 = L_7;
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		if (L_8)
		{
			G_B4_0 = L_8;
			G_B4_1 = G_B2_0;
			G_B4_2 = G_B2_1;
			G_B4_3 = G_B2_2;
			goto IL_004a;
		}
	}
	{
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_9 = (Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 *)il2cpp_codegen_object_new(Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90_il2cpp_TypeInfo_var);
		Action_1__ctor_m36C6688B253977218074ACFD83304E717384FDE6(L_9, __this, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass174_0_U3CstartReceivingU3Eb__2_m6E38FD8C6E3371413962B6796C10CCDAF8B63A04_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m36C6688B253977218074ACFD83304E717384FDE6_RuntimeMethod_var);
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_10 = L_9;
		V_1 = L_10;
		__this->set_U3CU3E9__2_3(L_10);
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_11 = V_1;
		G_B4_0 = L_11;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_004a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_il2cpp_TypeInfo_var);
		WebSocketFrame_ReadFrameAsync_m708A13E47738A4BA9790E2383AB1FF8AE93DDB63(G_B4_3, (bool)G_B4_2, G_B4_1, G_B4_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocket/<>c__DisplayClass174_0::<startReceiving>b__1(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass174_0_U3CstartReceivingU3Eb__1_mD9815C4B1C5A8385B22A01F14193DC70C8BA6E2A (U3CU3Ec__DisplayClass174_0_tDA36AB493B9655C7CF24DDF7BC3831626019CAF4 * __this, WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * ___frame0, const RuntimeMethod* method)
{
	bool V_0 = false;
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B11_0 = 0;
	{
		WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307 * L_0 = __this->get_U3CU3E4__this_0();
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_1 = ___frame0;
		NullCheck(L_0);
		bool L_2;
		L_2 = WebSocket_processReceivedFrame_m1F5A59735176A11759A44C4526D7906C62BE8042(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307 * L_3 = __this->get_U3CU3E4__this_0();
		NullCheck(L_3);
		uint16_t L_4 = L_3->get__readyState_34();
		il2cpp_codegen_memory_barrier();
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307 * L_6 = __this->get_U3CU3E4__this_0();
		NullCheck(L_6);
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_7 = L_6->get__receivingExited_35();
		V_1 = L_7;
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_8 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)L_8) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_10 = V_1;
		NullCheck(L_10);
		bool L_11;
		L_11 = EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38(L_10, /*hidden argument*/NULL);
	}

IL_0042:
	{
		goto IL_0094;
	}

IL_0044:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_12 = __this->get_receive_1();
		NullCheck(L_12);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_12, /*hidden argument*/NULL);
		WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307 * L_13 = __this->get_U3CU3E4__this_0();
		NullCheck(L_13);
		bool L_14 = L_13->get__inMessage_20();
		il2cpp_codegen_memory_barrier();
		if (L_14)
		{
			goto IL_0081;
		}
	}
	{
		WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307 * L_15 = __this->get_U3CU3E4__this_0();
		NullCheck(L_15);
		bool L_16;
		L_16 = WebSocket_get_HasMessage_mA6DDB45586A4153C7F8A38F3BADEA56905CD3975(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0081;
		}
	}
	{
		WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307 * L_17 = __this->get_U3CU3E4__this_0();
		NullCheck(L_17);
		uint16_t L_18 = L_17->get__readyState_34();
		il2cpp_codegen_memory_barrier();
		G_B11_0 = ((((int32_t)((((int32_t)L_18) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0082;
	}

IL_0081:
	{
		G_B11_0 = 1;
	}

IL_0082:
	{
		V_3 = (bool)G_B11_0;
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_0088;
		}
	}
	{
		goto IL_0094;
	}

IL_0088:
	{
		WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307 * L_20 = __this->get_U3CU3E4__this_0();
		NullCheck(L_20);
		WebSocket_message_mBD3FCC7218B243DCDDE26D0927C81C590082EC53(L_20, /*hidden argument*/NULL);
	}

IL_0094:
	{
		return;
	}
}
// System.Void WebSocketSharp.WebSocket/<>c__DisplayClass174_0::<startReceiving>b__2(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass174_0_U3CstartReceivingU3Eb__2_m6E38FD8C6E3371413962B6796C10CCDAF8B63A04 (U3CU3Ec__DisplayClass174_0_tDA36AB493B9655C7CF24DDF7BC3831626019CAF4 * __this, Exception_t * ___ex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCABD34D7CF39245177859A0BC4C6FF68D6972CF6);
		s_Il2CppMethodInitialized = true;
	}
	{
		WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		Logger_t7A4ECD749D0DFE4B32485415CDC994EC550D5E00 * L_1 = L_0->get__logger_21();
		il2cpp_codegen_memory_barrier();
		Exception_t * L_2 = ___ex0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		NullCheck(L_1);
		Logger_Fatal_m958EC31D6BA8218CA45C993764C334C87F0A6152(L_1, L_3, /*hidden argument*/NULL);
		WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307 * L_4 = __this->get_U3CU3E4__this_0();
		Exception_t * L_5 = ___ex0;
		NullCheck(L_4);
		WebSocket_fatal_m5625883C5BAADD19D5FADC7E977FE233E91BC64E(L_4, _stringLiteralCABD34D7CF39245177859A0BC4C6FF68D6972CF6, L_5, /*hidden argument*/NULL);
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
// System.Void WebSocketSharp.WebSocket/<>c__DisplayClass176_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass176_0__ctor_mB0F6CD22941146B5C4251C92BFADCF1FCBE2ABCD (U3CU3Ec__DisplayClass176_0_tCE7478BC7F8B2D37B31BCB9ACF716C59380E8D05 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean WebSocketSharp.WebSocket/<>c__DisplayClass176_0::<validateSecWebSocketExtensionsServerHeader>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass176_0_U3CvalidateSecWebSocketExtensionsServerHeaderU3Eb__0_m64C2A4E6B04F89281AA94CBE085D72E96F0B9E50 (U3CU3Ec__DisplayClass176_0_tCE7478BC7F8B2D37B31BCB9ACF716C59380E8D05 * __this, String_t* ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral872863942A17DEDCD0300265682277E23AC55930);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7745A740C0A1346D860F22A7638EF5A029B56E5);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___t0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_0, /*hidden argument*/NULL);
		___t0 = L_1;
		String_t* L_2 = ___t0;
		String_t* L_3 = __this->get_method_0();
		bool L_4;
		L_4 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_5 = ___t0;
		bool L_6;
		L_6 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_5, _stringLiteral872863942A17DEDCD0300265682277E23AC55930, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_7 = ___t0;
		bool L_8;
		L_8 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_7, _stringLiteralB7745A740C0A1346D860F22A7638EF5A029B56E5, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_8));
		goto IL_0032;
	}

IL_0031:
	{
		G_B4_0 = 0;
	}

IL_0032:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0035;
	}

IL_0035:
	{
		bool L_9 = V_0;
		return L_9;
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
// System.Void WebSocketSharp.WebSocket/<>c__DisplayClass177_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass177_0__ctor_m57AC4EAFB28AEACB4C49B319AE5BEBFA07F5E1C2 (U3CU3Ec__DisplayClass177_0_tAD93D381510A325830B232EF9BA36BAFAFB98053 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean WebSocketSharp.WebSocket/<>c__DisplayClass177_0::<validateSecWebSocketProtocolServerHeader>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass177_0_U3CvalidateSecWebSocketProtocolServerHeaderU3Eb__0_m55C6DFEF8121F00B4C1B19004368CC5ECAA9DE21 (U3CU3Ec__DisplayClass177_0_tAD93D381510A325830B232EF9BA36BAFAFB98053 * __this, String_t* ___p0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___p0;
		String_t* L_1 = __this->get_value_0();
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void WebSocketSharp.WebSocket/<>c__DisplayClass201_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass201_0__ctor_mA9CE94E9DEA03AD6E40CB12063AFE7140F7352CE (U3CU3Ec__DisplayClass201_0_tB84E7B19BD4898704A571D9C457DB447890EF39D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocket/<>c__DisplayClass201_0::<ConnectAsync>b__0(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass201_0_U3CConnectAsyncU3Eb__0_m41440E142B460301554EE7EB73F8E19F90526FEC (U3CU3Ec__DisplayClass201_0_tB84E7B19BD4898704A571D9C457DB447890EF39D * __this, RuntimeObject* ___ar0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_EndInvoke_m86A4760F9BEAFE6C019DD885A221AB48066F53D6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_0 = __this->get_connector_0();
		RuntimeObject* L_1 = ___ar0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Func_1_EndInvoke_m86A4760F9BEAFE6C019DD885A221AB48066F53D6(L_0, L_1, /*hidden argument*/Func_1_EndInvoke_m86A4760F9BEAFE6C019DD885A221AB48066F53D6_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		WebSocket_tE753540D3A4A1DDF4E31BE5B4E25E00C71826307 * L_4 = __this->get_U3CU3E4__this_1();
		NullCheck(L_4);
		WebSocket_open_m6EBE0FB75B0845BE28025BBC022D257E1A485766(L_4, /*hidden argument*/NULL);
	}

IL_001d:
	{
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
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass67_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass67_0__ctor_m25277E2EC105F3C5BC980178417339596D5A703A (U3CU3Ec__DisplayClass67_0_tDBF918B3DD900B583E012554C379933CDCFA4EA4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Action`4<System.String,System.String,System.String,System.String> WebSocketSharp.WebSocketFrame/<>c__DisplayClass67_0::<dump>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * U3CU3Ec__DisplayClass67_0_U3CdumpU3Eb__0_mF8714BB660619726040812B172D2050E4C45B309 (U3CU3Ec__DisplayClass67_0_tDBF918B3DD900B583E012554C379933CDCFA4EA4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_4__ctor_mE339CC347E4BB669DDFC6634B8A25A3DD9A4EA6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass67_1_U3CdumpU3Eb__1_m76F366963EF638A306335B02682D8F8623DFFED5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass67_1_tE33256331364734FD4FE28A9D9369FE6C5EB1665_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass67_1_tE33256331364734FD4FE28A9D9369FE6C5EB1665 * V_0 = NULL;
	Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * V_1 = NULL;
	{
		U3CU3Ec__DisplayClass67_1_tE33256331364734FD4FE28A9D9369FE6C5EB1665 * L_0 = (U3CU3Ec__DisplayClass67_1_tE33256331364734FD4FE28A9D9369FE6C5EB1665 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass67_1_tE33256331364734FD4FE28A9D9369FE6C5EB1665_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass67_1__ctor_m699AC9A86BA453B6F6C58AE3879C9F33E504CD94(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass67_1_tE33256331364734FD4FE28A9D9369FE6C5EB1665 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_CSU24U3CU3E8__locals1_1(__this);
		U3CU3Ec__DisplayClass67_1_tE33256331364734FD4FE28A9D9369FE6C5EB1665 * L_2 = V_0;
		NullCheck(L_2);
		L_2->set_lineCnt_0(((int64_t)((int64_t)0)));
		U3CU3Ec__DisplayClass67_1_tE33256331364734FD4FE28A9D9369FE6C5EB1665 * L_3 = V_0;
		Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * L_4 = (Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E *)il2cpp_codegen_object_new(Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E_il2cpp_TypeInfo_var);
		Action_4__ctor_mE339CC347E4BB669DDFC6634B8A25A3DD9A4EA6C(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass67_1_U3CdumpU3Eb__1_m76F366963EF638A306335B02682D8F8623DFFED5_RuntimeMethod_var), /*hidden argument*/Action_4__ctor_mE339CC347E4BB669DDFC6634B8A25A3DD9A4EA6C_RuntimeMethod_var);
		V_1 = L_4;
		goto IL_0025;
	}

IL_0025:
	{
		Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * L_5 = V_1;
		return L_5;
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
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass67_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass67_1__ctor_m699AC9A86BA453B6F6C58AE3879C9F33E504CD94 (U3CU3Ec__DisplayClass67_1_tE33256331364734FD4FE28A9D9369FE6C5EB1665 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass67_1::<dump>b__1(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass67_1_U3CdumpU3Eb__1_m76F366963EF638A306335B02682D8F8623DFFED5 (U3CU3Ec__DisplayClass67_1_tE33256331364734FD4FE28A9D9369FE6C5EB1665 * __this, String_t* ___arg10, String_t* ___arg21, String_t* ___arg32, String_t* ___arg43, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		U3CU3Ec__DisplayClass67_0_tDBF918B3DD900B583E012554C379933CDCFA4EA4 * L_0 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_0);
		StringBuilder_t * L_1 = L_0->get_buff_0();
		U3CU3Ec__DisplayClass67_0_tDBF918B3DD900B583E012554C379933CDCFA4EA4 * L_2 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_2);
		String_t* L_3 = L_2->get_lineFmt_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_4;
		int64_t L_6 = __this->get_lineCnt_0();
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_6, (int64_t)((int64_t)((int64_t)1))));
		int64_t L_7 = V_0;
		__this->set_lineCnt_0(L_7);
		int64_t L_8 = V_0;
		int64_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_10);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_5;
		String_t* L_12 = ___arg10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_11;
		String_t* L_14 = ___arg21;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_14);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_13;
		String_t* L_16 = ___arg32;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_15;
		String_t* L_18 = ___arg43;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_18);
		NullCheck(L_1);
		StringBuilder_t * L_19;
		L_19 = StringBuilder_AppendFormat_m97C4AAABA51FCC2D426BD22FE05BEC045AB9D6F8(L_1, L_3, L_17, /*hidden argument*/NULL);
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
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass71_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass71_0__ctor_mA5F8D524DDE8425A4743DFE837FC3AC867A6D1A9 (U3CU3Ec__DisplayClass71_0_tDE27FBCA0A789AFD6E2B10E71A24F37864062306 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass71_0::<readExtendedPayloadLengthAsync>b__0(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass71_0_U3CreadExtendedPayloadLengthAsyncU3Eb__0_m5527184BF5560C7E9E784777959B25A6462F92A9 (U3CU3Ec__DisplayClass71_0_tDE27FBCA0A789AFD6E2B10E71A24F37864062306 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m3FFF7B87CED68FC8794868F38BC431517ED024DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		NullCheck(L_0);
		int32_t L_1 = __this->get_len_0();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5C2ECDC0A2A9BA225C3FC6116423FBB91A59FB9B));
		String_t* L_3 = V_1;
		WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD * L_4 = (WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD_il2cpp_TypeInfo_var)));
		WebSocketException__ctor_m38DB8AFA47A9CBAC2F5D1F5D3E19B9D65EEA348A(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass71_0_U3CreadExtendedPayloadLengthAsyncU3Eb__0_m5527184BF5560C7E9E784777959B25A6462F92A9_RuntimeMethod_var)));
	}

IL_0021:
	{
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_5 = __this->get_frame_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___bytes0;
		NullCheck(L_5);
		L_5->set__extPayloadLength_0(L_6);
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_7 = __this->get_completed_2();
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_8 = __this->get_frame_1();
		NullCheck(L_7);
		Action_1_Invoke_m3FFF7B87CED68FC8794868F38BC431517ED024DC(L_7, L_8, /*hidden argument*/Action_1_Invoke_m3FFF7B87CED68FC8794868F38BC431517ED024DC_RuntimeMethod_var);
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
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass73_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass73_0__ctor_mA4B557CE7C123A7E1E81BF4DAA7C8EA8D0A75DA2 (U3CU3Ec__DisplayClass73_0_t1AA2F56924CE1580D7DDEE26E3B028E2200D7135 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass73_0::<readHeaderAsync>b__0(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass73_0_U3CreadHeaderAsyncU3Eb__0_mBD59C233292FE0B2A37D521A0656DF0947A6C7D2 (U3CU3Ec__DisplayClass73_0_t1AA2F56924CE1580D7DDEE26E3B028E2200D7135 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m3FFF7B87CED68FC8794868F38BC431517ED024DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_0 = __this->get_completed_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_il2cpp_TypeInfo_var);
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_2;
		L_2 = WebSocketFrame_processHeader_m746B42813AAF5AE70A094B2C5F8BEA8146ACFABB(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Action_1_Invoke_m3FFF7B87CED68FC8794868F38BC431517ED024DC(L_0, L_2, /*hidden argument*/Action_1_Invoke_m3FFF7B87CED68FC8794868F38BC431517ED024DC_RuntimeMethod_var);
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
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass75_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass75_0__ctor_mBEF3C1FDFD48303743B474901E254F71A0179C32 (U3CU3Ec__DisplayClass75_0_t41FE8DC939EFCB7DF138812C55EBAA3BE1820A84 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass75_0::<readMaskingKeyAsync>b__0(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass75_0_U3CreadMaskingKeyAsyncU3Eb__0_m5DFD119815FD29BD7D02E2304069149282F6A117 (U3CU3Ec__DisplayClass75_0_t41FE8DC939EFCB7DF138812C55EBAA3BE1820A84 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m3FFF7B87CED68FC8794868F38BC431517ED024DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		NullCheck(L_0);
		int32_t L_1 = __this->get_len_0();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral44B2B5EE14208A9AC8F2D65D8D3FF9177FB04899));
		String_t* L_3 = V_1;
		WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD * L_4 = (WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD_il2cpp_TypeInfo_var)));
		WebSocketException__ctor_m38DB8AFA47A9CBAC2F5D1F5D3E19B9D65EEA348A(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass75_0_U3CreadMaskingKeyAsyncU3Eb__0_m5DFD119815FD29BD7D02E2304069149282F6A117_RuntimeMethod_var)));
	}

IL_0021:
	{
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_5 = __this->get_frame_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___bytes0;
		NullCheck(L_5);
		L_5->set__maskingKey_3(L_6);
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_7 = __this->get_completed_2();
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_8 = __this->get_frame_1();
		NullCheck(L_7);
		Action_1_Invoke_m3FFF7B87CED68FC8794868F38BC431517ED024DC(L_7, L_8, /*hidden argument*/Action_1_Invoke_m3FFF7B87CED68FC8794868F38BC431517ED024DC_RuntimeMethod_var);
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
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass77_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass77_0__ctor_mBDDFAC434940A602607712ABF422FD2D845C48C9 (U3CU3Ec__DisplayClass77_0_tC80E02C07E3F3B1FA54221550F91A9441C063A9D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass77_0::<readPayloadDataAsync>b__0(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass77_0_U3CreadPayloadDataAsyncU3Eb__0_m266CBC02AC10F95BAF979FA4EB92D2DBA7D5F923 (U3CU3Ec__DisplayClass77_0_tC80E02C07E3F3B1FA54221550F91A9441C063A9D * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m3FFF7B87CED68FC8794868F38BC431517ED024DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		NullCheck(L_0);
		int64_t L_1 = __this->get_len_0();
		V_0 = (bool)((((int32_t)((((int64_t)((int64_t)((int64_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))))) == ((int64_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral05EE84C28CC3F94DE861A55800284B34115C4B7B));
		String_t* L_3 = V_1;
		WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD * L_4 = (WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketException_t8CD7941924E8DD95C263CEB3ED40F99192ABEAFD_il2cpp_TypeInfo_var)));
		WebSocketException__ctor_m38DB8AFA47A9CBAC2F5D1F5D3E19B9D65EEA348A(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass77_0_U3CreadPayloadDataAsyncU3Eb__0_m266CBC02AC10F95BAF979FA4EB92D2DBA7D5F923_RuntimeMethod_var)));
	}

IL_0021:
	{
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_5 = __this->get_frame_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___bytes0;
		int64_t L_7 = __this->get_len_0();
		PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E * L_8 = (PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E *)il2cpp_codegen_object_new(PayloadData_t5362E58499DFB1017A19E8D099EA8215C5C8C76E_il2cpp_TypeInfo_var);
		PayloadData__ctor_m853048FD79C545AC0DD19CCD7AC0C8940E54DA3B(L_8, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->set__payloadData_5(L_8);
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_9 = __this->get_completed_2();
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_10 = __this->get_frame_1();
		NullCheck(L_9);
		Action_1_Invoke_m3FFF7B87CED68FC8794868F38BC431517ED024DC(L_9, L_10, /*hidden argument*/Action_1_Invoke_m3FFF7B87CED68FC8794868F38BC431517ED024DC_RuntimeMethod_var);
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
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass84_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass84_0__ctor_mA6A1CAA2C7643624C591E31037453A291BC18EDB (U3CU3Ec__DisplayClass84_0_tD733837EE92C060DC99B8407C379B65CA6886F53 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass84_0::<ReadFrameAsync>b__0(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass84_0_U3CReadFrameAsyncU3Eb__0_m8E53AC8E5C301D964A0EA74854A510E88444EE0E (U3CU3Ec__DisplayClass84_0_tD733837EE92C060DC99B8407C379B65CA6886F53 * __this, WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m5A5A47FA527D0CE5744363F201993BA8537A8B96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass84_0_U3CReadFrameAsyncU3Eb__1_m7478BBAB5967ABF7BA833D4A134BEC86E5264C06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * V_0 = NULL;
	Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * G_B2_0 = NULL;
	WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * G_B2_1 = NULL;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * G_B2_2 = NULL;
	Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * G_B1_0 = NULL;
	WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * G_B1_1 = NULL;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * G_B1_2 = NULL;
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_stream_0();
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_1 = ___frame0;
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_2 = __this->get_U3CU3E9__1_6();
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_0026;
		}
	}
	{
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_4 = (Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A *)il2cpp_codegen_object_new(Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A_il2cpp_TypeInfo_var);
		Action_1__ctor_m5A5A47FA527D0CE5744363F201993BA8537A8B96(L_4, __this, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass84_0_U3CReadFrameAsyncU3Eb__1_m7478BBAB5967ABF7BA833D4A134BEC86E5264C06_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m5A5A47FA527D0CE5744363F201993BA8537A8B96_RuntimeMethod_var);
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_5 = L_4;
		V_0 = L_5;
		__this->set_U3CU3E9__1_6(L_5);
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_6 = V_0;
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0026:
	{
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_7 = __this->get_error_3();
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_il2cpp_TypeInfo_var);
		WebSocketFrame_readExtendedPayloadLengthAsync_m4B4634276583FD368A094C0F0629F1144704BFF4(G_B2_2, G_B2_1, G_B2_0, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass84_0::<ReadFrameAsync>b__1(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass84_0_U3CReadFrameAsyncU3Eb__1_m7478BBAB5967ABF7BA833D4A134BEC86E5264C06 (U3CU3Ec__DisplayClass84_0_tD733837EE92C060DC99B8407C379B65CA6886F53 * __this, WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * ___frame10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m5A5A47FA527D0CE5744363F201993BA8537A8B96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass84_0_U3CReadFrameAsyncU3Eb__2_mF259A11B658C616E08DA5BB3C86476B2D02778E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * V_0 = NULL;
	Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * G_B2_0 = NULL;
	WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * G_B2_1 = NULL;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * G_B2_2 = NULL;
	Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * G_B1_0 = NULL;
	WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * G_B1_1 = NULL;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * G_B1_2 = NULL;
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_stream_0();
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_1 = ___frame10;
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_2 = __this->get_U3CU3E9__2_5();
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_0026;
		}
	}
	{
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_4 = (Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A *)il2cpp_codegen_object_new(Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A_il2cpp_TypeInfo_var);
		Action_1__ctor_m5A5A47FA527D0CE5744363F201993BA8537A8B96(L_4, __this, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass84_0_U3CReadFrameAsyncU3Eb__2_mF259A11B658C616E08DA5BB3C86476B2D02778E3_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m5A5A47FA527D0CE5744363F201993BA8537A8B96_RuntimeMethod_var);
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_5 = L_4;
		V_0 = L_5;
		__this->set_U3CU3E9__2_5(L_5);
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_6 = V_0;
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0026:
	{
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_7 = __this->get_error_3();
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_il2cpp_TypeInfo_var);
		WebSocketFrame_readMaskingKeyAsync_m96CF6B4ACA26A4398AD1186601B072CFD1098D76(G_B2_2, G_B2_1, G_B2_0, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass84_0::<ReadFrameAsync>b__2(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass84_0_U3CReadFrameAsyncU3Eb__2_mF259A11B658C616E08DA5BB3C86476B2D02778E3 (U3CU3Ec__DisplayClass84_0_tD733837EE92C060DC99B8407C379B65CA6886F53 * __this, WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * ___frame20, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m5A5A47FA527D0CE5744363F201993BA8537A8B96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass84_0_U3CReadFrameAsyncU3Eb__3_mFE3285A7F07F51C368159634D72C0183FE081D4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * V_0 = NULL;
	Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * G_B2_0 = NULL;
	WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * G_B2_1 = NULL;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * G_B2_2 = NULL;
	Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * G_B1_0 = NULL;
	WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * G_B1_1 = NULL;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * G_B1_2 = NULL;
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_stream_0();
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_1 = ___frame20;
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_2 = __this->get_U3CU3E9__3_4();
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_0026;
		}
	}
	{
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_4 = (Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A *)il2cpp_codegen_object_new(Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A_il2cpp_TypeInfo_var);
		Action_1__ctor_m5A5A47FA527D0CE5744363F201993BA8537A8B96(L_4, __this, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass84_0_U3CReadFrameAsyncU3Eb__3_mFE3285A7F07F51C368159634D72C0183FE081D4D_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m5A5A47FA527D0CE5744363F201993BA8537A8B96_RuntimeMethod_var);
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_5 = L_4;
		V_0 = L_5;
		__this->set_U3CU3E9__3_4(L_5);
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_6 = V_0;
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0026:
	{
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_7 = __this->get_error_3();
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E_il2cpp_TypeInfo_var);
		WebSocketFrame_readPayloadDataAsync_mE5DDE121C8B21564DBF883FC9D0556FE638DD74E(G_B2_2, G_B2_1, G_B2_0, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass84_0::<ReadFrameAsync>b__3(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass84_0_U3CReadFrameAsyncU3Eb__3_mFE3285A7F07F51C368159634D72C0183FE081D4D (U3CU3Ec__DisplayClass84_0_tD733837EE92C060DC99B8407C379B65CA6886F53 * __this, WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * ___frame30, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m3FFF7B87CED68FC8794868F38BC431517ED024DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = __this->get_unmask_1();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_2 = ___frame30;
		NullCheck(L_2);
		WebSocketFrame_Unmask_mFD54F296C7AA70613F65B93F3EC23F28E3419787(L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		Action_1_t9A52696BF1A33FB85EC11741ECFE7D9C6060A92A * L_3 = __this->get_completed_2();
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_4 = ___frame30;
		NullCheck(L_3);
		Action_1_Invoke_m3FFF7B87CED68FC8794868F38BC431517ED024DC(L_3, L_4, /*hidden argument*/Action_1_Invoke_m3FFF7B87CED68FC8794868F38BC431517ED024DC_RuntimeMethod_var);
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
// System.Void WebSocketSharp.WebSocketFrame/<GetEnumerator>d__86::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__86__ctor_mA9ED1EF2C55660D415015B3DDCA1F9612F23CAF2 (U3CGetEnumeratorU3Ed__86_t79B0B8C14D5261662A95C2C543C629419F30FA13 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<GetEnumerator>d__86::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__86_System_IDisposable_Dispose_mE8AC64515099654B5FB670B56568ABE2C21301E3 (U3CGetEnumeratorU3Ed__86_t79B0B8C14D5261662A95C2C543C629419F30FA13 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame/<GetEnumerator>d__86::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__86_MoveNext_m5CDCB5257E06AB991EBB74F3C3143885B05D4D3E (U3CGetEnumeratorU3Ed__86_t79B0B8C14D5261662A95C2C543C629419F30FA13 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
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
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0063;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		WebSocketFrame_t39BA8B77AC5C0B6A2673CEEB6B49A5548B82DF5E * L_3 = __this->get_U3CU3E4__this_2();
		NullCheck(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = WebSocketFrame_ToArray_mA1FB44622CD8F356F869F4E5FB741E26A0A36E94(L_3, /*hidden argument*/NULL);
		__this->set_U3CU3Es__1_3(L_4);
		__this->set_U3CU3Es__2_4(0);
		goto IL_0078;
	}

IL_003b:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = __this->get_U3CU3Es__1_3();
		int32_t L_6 = __this->get_U3CU3Es__2_4();
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		__this->set_U3CbU3E5__3_5(L_8);
		uint8_t L_9 = __this->get_U3CbU3E5__3_5();
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0063:
	{
		__this->set_U3CU3E1__state_0((-1));
		int32_t L_10 = __this->get_U3CU3Es__2_4();
		__this->set_U3CU3Es__2_4(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
	}

IL_0078:
	{
		int32_t L_11 = __this->get_U3CU3Es__2_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = __this->get_U3CU3Es__1_3();
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_003b;
		}
	}
	{
		__this->set_U3CU3Es__1_3((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		return (bool)0;
	}
}
// System.Byte WebSocketSharp.WebSocketFrame/<GetEnumerator>d__86::System.Collections.Generic.IEnumerator<System.Byte>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U3CGetEnumeratorU3Ed__86_System_Collections_Generic_IEnumeratorU3CSystem_ByteU3E_get_Current_m71BAB25ECC50917EDC67CA3DE8849ADD78557F52 (U3CGetEnumeratorU3Ed__86_t79B0B8C14D5261662A95C2C543C629419F30FA13 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<GetEnumerator>d__86::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__86_System_Collections_IEnumerator_Reset_mD6404B7FD3FAE9F43707F7006B86408A85BC51FC (U3CGetEnumeratorU3Ed__86_t79B0B8C14D5261662A95C2C543C629419F30FA13 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__86_System_Collections_IEnumerator_Reset_mD6404B7FD3FAE9F43707F7006B86408A85BC51FC_RuntimeMethod_var)));
	}
}
// System.Object WebSocketSharp.WebSocketFrame/<GetEnumerator>d__86::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__86_System_Collections_IEnumerator_get_Current_m1F6C9064C86C366B50366186780B0E9E56C8E49E (U3CGetEnumeratorU3Ed__86_t79B0B8C14D5261662A95C2C543C629419F30FA13 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = __this->get_U3CU3E2__current_1();
		uint8_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
