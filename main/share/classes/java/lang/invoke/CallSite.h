#ifndef _java_lang_invoke_CallSite_h_
#define _java_lang_invoke_CallSite_h_
//$ class java.lang.invoke.CallSite
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("GET_TARGET")
#undef GET_TARGET
#pragma push_macro("TARGET_OFFSET")
#undef TARGET_OFFSET
#pragma push_macro("THROW_UCS")
#undef THROW_UCS

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
			class MethodHandleNatives$CallSiteContext;
			class MethodType;
			class WrongMethodTypeException;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class $export CallSite : public ::java::lang::Object {
	$class(CallSite, 0, ::java::lang::Object)
public:
	CallSite();
	void init$(::java::lang::invoke::MethodType* type);
	void init$(::java::lang::invoke::MethodHandle* target);
	void init$(::java::lang::invoke::MethodType* targetType, ::java::lang::invoke::MethodHandle* createTargetHook);
	void checkTargetChange(::java::lang::invoke::MethodHandle* newTarget);
	virtual ::java::lang::invoke::MethodHandle* dynamicInvoker() {return nullptr;}
	virtual ::java::lang::invoke::MethodHandle* getTarget() {return nullptr;}
	static ::java::lang::invoke::MethodHandle* getTargetHandle();
	static int64_t getTargetOffset();
	::java::lang::invoke::MethodHandle* getTargetVolatile();
	virtual ::java::lang::invoke::MethodHandle* makeDynamicInvoker();
	static ::java::lang::invoke::CallSite* makeSite(::java::lang::invoke::MethodHandle* bootstrapMethod, $String* name, ::java::lang::invoke::MethodType* type, Object$* info, $Class* callerClass);
	::java::lang::invoke::MethodHandle* makeUninitializedCallSite(::java::lang::invoke::MethodType* targetType);
	virtual void setTarget(::java::lang::invoke::MethodHandle* newTarget) {}
	void setTargetNormal(::java::lang::invoke::MethodHandle* newTarget);
	void setTargetVolatile(::java::lang::invoke::MethodHandle* newTarget);
	virtual ::java::lang::invoke::MethodType* type();
	static $Object* uninitializedCallSite($ObjectArray* ignore);
	static ::java::lang::invoke::MethodHandle* uninitializedCallSiteHandle();
	static ::java::lang::invoke::WrongMethodTypeException* wrongTargetType(::java::lang::invoke::MethodHandle* target, ::java::lang::invoke::MethodType* type);
	static bool $assertionsDisabled;
	::java::lang::invoke::MethodHandle* target = nullptr;
	::java::lang::invoke::MethodHandleNatives$CallSiteContext* context = nullptr;
	static ::java::lang::invoke::MethodHandle* GET_TARGET;
	static ::java::lang::invoke::MethodHandle* THROW_UCS;
	static int64_t TARGET_OFFSET;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("GET_TARGET")
#pragma pop_macro("TARGET_OFFSET")
#pragma pop_macro("THROW_UCS")

#endif // _java_lang_invoke_CallSite_h_