#ifndef _java_lang_invoke_Invokers_h_
#define _java_lang_invoke_Invokers_h_
//$ class java.lang.invoke.Invokers
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("INV_BASIC")
#undef INV_BASIC
#pragma push_macro("INV_EXACT")
#undef INV_EXACT
#pragma push_macro("INV_GENERIC")
#undef INV_GENERIC
#pragma push_macro("INV_LIMIT")
#undef INV_LIMIT
#pragma push_macro("MH_LINKER_ARG_APPENDED")
#undef MH_LINKER_ARG_APPENDED
#pragma push_macro("NFS")
#undef NFS
#pragma push_macro("NF_LIMIT")
#undef NF_LIMIT
#pragma push_macro("VH_INV_EXACT")
#undef VH_INV_EXACT
#pragma push_macro("VH_INV_GENERIC")
#undef VH_INV_GENERIC

namespace java {
	namespace lang {
		namespace invoke {
			class CallSite;
			class LambdaForm;
			class LambdaForm$NamedFunction;
			class MemberName;
			class MethodHandle;
			class MethodType;
			class VarHandle;
			class VarHandle$AccessDescriptor;
			class VarHandle$AccessMode;
			class WrongMethodTypeException;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class Invokers : public ::java::lang::Object {
	$class(Invokers, 0, ::java::lang::Object)
public:
	Invokers();
	void init$(::java::lang::invoke::MethodType* targetType);
	virtual ::java::lang::invoke::MethodHandle* basicInvoker();
	::java::lang::invoke::MethodHandle* cachedInvoker(int32_t idx);
	::java::lang::invoke::MethodHandle* cachedVHInvoker(bool isExact, ::java::lang::invoke::VarHandle$AccessMode* ak);
	static ::java::lang::invoke::LambdaForm* callSiteForm(::java::lang::invoke::MethodType* mtype, bool skipCallSite);
	static void checkCustomized(::java::lang::invoke::MethodHandle* mh);
	static void checkExactType(::java::lang::invoke::MethodHandle* mh, ::java::lang::invoke::MethodType* expected);
	static ::java::lang::invoke::MethodHandle* checkGenericType(::java::lang::invoke::MethodHandle* mh, ::java::lang::invoke::MethodType* expected);
	bool checkInvoker(::java::lang::invoke::MethodHandle* invoker);
	static ::java::lang::invoke::MethodHandle* checkVarHandleExactType(::java::lang::invoke::VarHandle* handle, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	static ::java::lang::invoke::MethodHandle* checkVarHandleGenericType(::java::lang::invoke::VarHandle* handle, ::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	bool checkVarHandleInvoker(::java::lang::invoke::MethodHandle* invoker);
	static ::java::lang::invoke::LambdaForm$NamedFunction* createFunction(int8_t func);
	static ::java::lang::invoke::VarHandle* directVarHandleTarget(::java::lang::invoke::VarHandle* handle);
	virtual ::java::lang::invoke::MethodHandle* exactInvoker();
	virtual ::java::lang::invoke::MethodHandle* genericInvoker();
	static ::java::lang::invoke::MethodHandle* getCallSiteTarget(::java::lang::invoke::CallSite* site);
	static ::java::lang::invoke::LambdaForm$NamedFunction* getFunction(int8_t func);
	static ::java::lang::invoke::LambdaForm$NamedFunction* getNamedFunction($String* name, ::java::lang::invoke::MethodType* type);
	static $Class* impliedRestargType(::java::lang::invoke::MethodType* restargType, int32_t fromPos);
	static ::java::lang::invoke::MemberName* invokeBasicMethod(::java::lang::invoke::MethodType* basicType);
	static ::java::lang::invoke::LambdaForm* invokeHandleForm(::java::lang::invoke::MethodType* mtype, bool customized, int32_t which);
	static ::java::lang::invoke::MemberName* linkToCallSiteMethod(::java::lang::invoke::MethodType* mtype);
	static ::java::lang::invoke::MemberName* linkToTargetMethod(::java::lang::invoke::MethodType* mtype);
	::java::lang::invoke::MethodHandle* makeExactOrGeneralInvoker(bool isExact);
	::java::lang::invoke::MethodHandle* makeVarHandleMethodInvoker(::java::lang::invoke::VarHandle$AccessMode* ak, bool isExact);
	void maybeCompileToBytecode(::java::lang::invoke::MethodHandle* invoker);
	static void maybeCustomize(::java::lang::invoke::MethodHandle* mh);
	static ::java::lang::invoke::MemberName* methodHandleInvokeLinkerMethod($String* name, ::java::lang::invoke::MethodType* mtype, $ObjectArray* appendixResult);
	static ::java::lang::invoke::WrongMethodTypeException* newWrongMethodTypeException(::java::lang::invoke::MethodType* actual, ::java::lang::invoke::MethodType* expected);
	::java::lang::invoke::MethodHandle* setCachedInvoker(int32_t idx, ::java::lang::invoke::MethodHandle* invoker);
	::java::lang::invoke::MethodHandle* setCachedVHInvoker(bool isExact, ::java::lang::invoke::VarHandle$AccessMode* ak, ::java::lang::invoke::MethodHandle* invoker);
	virtual ::java::lang::invoke::MethodHandle* spreadInvoker(int32_t leadingArgCount);
	virtual $String* toString() override;
	static ::java::lang::invoke::MemberName* varHandleInvokeLinkerMethod(::java::lang::invoke::MethodType* mtype);
	virtual ::java::lang::invoke::MethodHandle* varHandleMethodExactInvoker(::java::lang::invoke::VarHandle$AccessMode* ak);
	static ::java::lang::invoke::LambdaForm* varHandleMethodGenericLinkerHandleForm(::java::lang::invoke::MethodType* mtype);
	virtual ::java::lang::invoke::MethodHandle* varHandleMethodInvoker(::java::lang::invoke::VarHandle$AccessMode* ak);
	static ::java::lang::invoke::LambdaForm* varHandleMethodInvokerHandleForm(::java::lang::invoke::MethodType* mtype, bool isExact);
	static bool $assertionsDisabled;
	::java::lang::invoke::MethodType* targetType = nullptr;
	$Array<::java::lang::invoke::MethodHandle>* invokers = nullptr;
	static const int32_t INV_EXACT = 0;
	static const int32_t INV_GENERIC = 1;
	static const int32_t INV_BASIC = 2;
	static const int32_t VH_INV_EXACT = 3;
	static int32_t VH_INV_GENERIC;
	static int32_t INV_LIMIT;
	static const int32_t MH_LINKER_ARG_APPENDED = 1;
	static const int8_t NF_checkExactType = 0;
	static const int8_t NF_checkGenericType = 1;
	static const int8_t NF_getCallSiteTarget = 2;
	static const int8_t NF_checkCustomized = 3;
	static const int8_t NF_checkVarHandleGenericType = 4;
	static const int8_t NF_checkVarHandleExactType = 5;
	static const int8_t NF_directVarHandleTarget = 6;
	static const int8_t NF_LIMIT = 7;
	static $Array<::java::lang::invoke::LambdaForm$NamedFunction>* NFS;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("INV_BASIC")
#pragma pop_macro("INV_EXACT")
#pragma pop_macro("INV_GENERIC")
#pragma pop_macro("INV_LIMIT")
#pragma pop_macro("MH_LINKER_ARG_APPENDED")
#pragma pop_macro("NFS")
#pragma pop_macro("NF_LIMIT")
#pragma pop_macro("VH_INV_EXACT")
#pragma pop_macro("VH_INV_GENERIC")

#endif // _java_lang_invoke_Invokers_h_