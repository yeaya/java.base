#ifndef _test_java_lang_invoke_InvokeDynamicPrintArgs$PrintingCallSite_h_
#define _test_java_lang_invoke_InvokeDynamicPrintArgs$PrintingCallSite_h_
//$ class test.java.lang.invoke.InvokeDynamicPrintArgs$PrintingCallSite
//$ extends java.lang.invoke.ConstantCallSite

#include <java/lang/Array.h>
#include <java/lang/invoke/ConstantCallSite.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
			class MethodHandles$Lookup;
			class MethodType;
		}
	}
}

namespace test {
	namespace java {
		namespace lang {
			namespace invoke {

class $export InvokeDynamicPrintArgs$PrintingCallSite : public ::java::lang::invoke::ConstantCallSite {
	$class(InvokeDynamicPrintArgs$PrintingCallSite, $NO_CLASS_INIT, ::java::lang::invoke::ConstantCallSite)
public:
	InvokeDynamicPrintArgs$PrintingCallSite();
	void init$(::java::lang::invoke::MethodHandles$Lookup* caller, $String* name, ::java::lang::invoke::MethodType* type, $ObjectArray* staticArgs);
	static ::java::lang::invoke::MethodHandle* MH_createTarget();
	virtual ::java::lang::invoke::MethodHandle* createTarget();
	virtual $Object* runTarget($ObjectArray* dynamicArgs);
	::java::lang::invoke::MethodHandles$Lookup* caller = nullptr;
	$String* name = nullptr;
	$ObjectArray* staticArgs = nullptr;
};

			} // invoke
		} // lang
	} // java
} // test

#endif // _test_java_lang_invoke_InvokeDynamicPrintArgs$PrintingCallSite_h_