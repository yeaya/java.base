#ifndef _java_lang_invoke_MethodHandleNatives_h_
#define _java_lang_invoke_MethodHandleNatives_h_
//$ class java.lang.invoke.MethodHandleNatives
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("JLA")
#undef JLA

namespace java {
	namespace lang {
		class Error;
		class Exception;
		class LinkageError;
		class NoSuchMethodError;
		class ReflectiveOperationException;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class CallSite;
			class MemberName;
			class MethodHandle;
			class MethodHandleNatives$CallSiteContext;
			class MethodType;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaLangAccess;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class MethodHandleNatives : public ::java::lang::Object {
	$class(MethodHandleNatives, 0, ::java::lang::Object)
public:
	MethodHandleNatives();
	void init$();
	static bool canBeCalledVirtual(::java::lang::invoke::MemberName* mem);
	static bool canBeCalledVirtual(::java::lang::invoke::MemberName* symbolicRef, $Class* definingClass);
	static $Object* classData($Class* c);
	static void clearCallSiteContext(::java::lang::invoke::MethodHandleNatives$CallSiteContext* context);
	static void copyOutBootstrapArguments($Class* caller, $ints* indexInfo, int32_t start, int32_t end, $ObjectArray* buf, int32_t pos, bool resolve, Object$* ifNotAvailable);
	static void expand(::java::lang::invoke::MemberName* self);
	static ::java::lang::invoke::MethodType* findMethodHandleType($Class* rtype, $ClassArray* ptypes);
	static ::java::lang::invoke::MethodType* fixMethodType($Class* callerClass, Object$* type);
	static char16_t getCharType($Class* pt);
	static $Object* getMemberVMInfo(::java::lang::invoke::MemberName* self);
	static int32_t getMembers($Class* defc, $String* matchName, $String* matchSig, int32_t matchFlags, $Class* caller, int32_t skip, $Array<::java::lang::invoke::MemberName>* results);
	static int32_t getNamedCon(int32_t which, $ObjectArray* name);
	static $String* getVarHandleGuardMethodName(::java::lang::invoke::MethodType* guardType);
	static void init(::java::lang::invoke::MemberName* self, Object$* ref);
	static ::java::lang::Error* initCauseFrom(::java::lang::Error* err, ::java::lang::Exception* ex);
	static bool isCallerSensitive(::java::lang::invoke::MemberName* mem);
	static bool isPullModeBSM(::java::lang::invoke::MethodHandle* bsm);
	static ::java::lang::invoke::MemberName* linkCallSite(Object$* callerObj, int32_t indexInCP, Object$* bootstrapMethodObj, Object$* nameObj, Object$* typeObj, Object$* staticArguments, $ObjectArray* appendixResult);
	static ::java::lang::invoke::MemberName* linkCallSiteImpl($Class* caller, ::java::lang::invoke::MethodHandle* bootstrapMethod, $String* name, ::java::lang::invoke::MethodType* type, Object$* staticArguments, $ObjectArray* appendixResult);
	static ::java::lang::invoke::MemberName* linkCallSiteTracing($Class* caller, ::java::lang::invoke::MethodHandle* bootstrapMethod, $String* name, ::java::lang::invoke::MethodType* type, Object$* staticArguments, $ObjectArray* appendixResult);
	static $Object* linkDynamicConstant(Object$* callerObj, int32_t indexInCP, Object$* bootstrapMethodObj, Object$* nameObj, Object$* typeObj, Object$* staticArguments);
	static $Object* linkDynamicConstantImpl($Class* caller, ::java::lang::invoke::MethodHandle* bootstrapMethod, $String* name, $Class* type, Object$* staticArguments);
	static $Object* linkDynamicConstantTracing($Class* caller, ::java::lang::invoke::MethodHandle* bootstrapMethod, $String* name, $Class* type, Object$* staticArguments);
	static ::java::lang::invoke::MemberName* linkMethod($Class* callerClass, int32_t refKind, $Class* defc, $String* name, Object$* type, $ObjectArray* appendixResult);
	static ::java::lang::invoke::MethodHandle* linkMethodHandleConstant($Class* callerClass, int32_t refKind, $Class* defc, $String* name, Object$* type);
	static ::java::lang::invoke::MemberName* linkMethodImpl($Class* callerClass, int32_t refKind, $Class* defc, $String* name, Object$* type, $ObjectArray* appendixResult);
	static ::java::lang::invoke::MemberName* linkMethodTracing($Class* callerClass, int32_t refKind, $Class* defc, $String* name, Object$* type, $ObjectArray* appendixResult);
	static ::java::lang::LinkageError* mapLookupExceptionToError(::java::lang::ReflectiveOperationException* ex);
	static ::java::lang::NoSuchMethodError* newNoSuchMethodErrorOnVarHandle($String* name, ::java::lang::invoke::MethodType* mtype);
	static int64_t objectFieldOffset(::java::lang::invoke::MemberName* self);
	static bool refKindDoesDispatch(int8_t refKind);
	static bool refKindHasReceiver(int8_t refKind);
	static bool refKindIsConstructor(int8_t refKind);
	static bool refKindIsField(int8_t refKind);
	static bool refKindIsGetter(int8_t refKind);
	static bool refKindIsMethod(int8_t refKind);
	static bool refKindIsSetter(int8_t refKind);
	static bool refKindIsStatic(int8_t refKind);
	static bool refKindIsValid(int32_t refKind);
	static $String* refKindName(int8_t refKind);
	static void registerNatives();
	static ::java::lang::invoke::MemberName* resolve(::java::lang::invoke::MemberName* self, $Class* caller, int32_t lookupMode, bool speculativeResolve);
	static void setCallSiteTargetNormal(::java::lang::invoke::CallSite* site, ::java::lang::invoke::MethodHandle* target);
	static void setCallSiteTargetVolatile(::java::lang::invoke::CallSite* site, ::java::lang::invoke::MethodHandle* target);
	static $String* staticArglistForTrace(Object$* staticArguments);
	static bool staticArgumentsPulled(Object$* staticArguments);
	static $Object* staticFieldBase(::java::lang::invoke::MemberName* self);
	static int64_t staticFieldOffset(::java::lang::invoke::MemberName* self);
	static ::java::lang::invoke::MemberName* varHandleOperationLinkerMethod($String* name, ::java::lang::invoke::MethodType* mtype, $ObjectArray* appendixResult);
	static bool verifyConstants();
	static bool $assertionsDisabled;
	static ::jdk::internal::access::JavaLangAccess* JLA;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("JLA")

#endif // _java_lang_invoke_MethodHandleNatives_h_