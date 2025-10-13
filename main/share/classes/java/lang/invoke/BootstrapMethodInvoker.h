#ifndef _java_lang_invoke_BootstrapMethodInvoker_h_
#define _java_lang_invoke_BootstrapMethodInvoker_h_
//$ class java.lang.invoke.BootstrapMethodInvoker
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("LMF_ALT_MT")
#undef LMF_ALT_MT
#pragma push_macro("LMF_CONDY_MT")
#undef LMF_CONDY_MT
#pragma push_macro("LMF_INDY_MT")
#undef LMF_INDY_MT
#pragma push_macro("SCF_MT")
#undef SCF_MT

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
			class MethodHandles$Lookup;
			class MethodType;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class BootstrapMethodInvoker : public ::java::lang::Object {
	$class(BootstrapMethodInvoker, 0, ::java::lang::Object)
public:
	BootstrapMethodInvoker();
	void init$();
	static $Object* invoke($Class* resultType, ::java::lang::invoke::MethodHandle* bootstrapMethod, $String* name, Object$* type, Object$* info, $Class* callerClass);
	static $Object* invokeWithManyArguments(::java::lang::invoke::MethodHandle* bootstrapMethod, ::java::lang::invoke::MethodHandles$Lookup* caller, $String* name, Object$* type, $ObjectArray* argv);
	static bool isLambdaMetafactoryAltMetafactoryBSM(::java::lang::invoke::MethodType* bsmType);
	static bool isLambdaMetafactoryCondyBSM(::java::lang::invoke::MethodType* bsmType);
	static bool isLambdaMetafactoryIndyBSM(::java::lang::invoke::MethodType* bsmType);
	static bool isStringConcatFactoryBSM(::java::lang::invoke::MethodType* bsmType);
	static $Object* maybeReBox(Object$* x);
	static void maybeReBoxElements($ObjectArray* xa);
	static ::java::lang::invoke::MethodHandle* pushMePullYou(::java::lang::invoke::MethodHandle* bsm, bool goToPushMode);
	static $Object* widenAndCast(Object$* result, $Class* resultType);
	static bool $assertionsDisabled;
	static ::java::lang::invoke::MethodType* LMF_INDY_MT;
	static ::java::lang::invoke::MethodType* LMF_ALT_MT;
	static ::java::lang::invoke::MethodType* LMF_CONDY_MT;
	static ::java::lang::invoke::MethodType* SCF_MT;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("LMF_ALT_MT")
#pragma pop_macro("LMF_CONDY_MT")
#pragma pop_macro("LMF_INDY_MT")
#pragma pop_macro("SCF_MT")

#endif // _java_lang_invoke_BootstrapMethodInvoker_h_