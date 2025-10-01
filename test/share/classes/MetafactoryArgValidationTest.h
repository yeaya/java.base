#ifndef _MetafactoryArgValidationTest_h_
#define _MetafactoryArgValidationTest_h_
//$ class MetafactoryArgValidationTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace invoke {
			class CallSite;
			class MethodHandle;
			class MethodHandles$Lookup;
			class MethodType;
		}
	}
}

class $export MetafactoryArgValidationTest : public ::java::lang::Object {
	$class(MetafactoryArgValidationTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MetafactoryArgValidationTest();
	void init$();
	static void amfFail($Class* exceptionType, ::java::lang::invoke::MethodHandles$Lookup* lookup, $String* name, ::java::lang::invoke::MethodType* capType, $ObjectArray* args);
	static ::java::lang::invoke::CallSite* amfSucceed(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* name, ::java::lang::invoke::MethodType* capType, $ObjectArray* args);
	static $ObjectArray* arr($ObjectArray* args);
	static void main($StringArray* args);
	static void mfFail($Class* exceptionType, ::java::lang::invoke::MethodHandles$Lookup* lookup, $String* name, ::java::lang::invoke::MethodType* capType, ::java::lang::invoke::MethodType* desc, ::java::lang::invoke::MethodHandle* impl, ::java::lang::invoke::MethodType* checked);
	static ::java::lang::invoke::CallSite* mfSucceed(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* name, ::java::lang::invoke::MethodType* capType, ::java::lang::invoke::MethodType* desc, ::java::lang::invoke::MethodHandle* impl, ::java::lang::invoke::MethodType* checked);
	static ::java::lang::invoke::MethodType* mt($Class* ret, $ClassArray* params);
	static void testIAE();
	static void testLCE();
	static void testNPE();
};

#endif // _MetafactoryArgValidationTest_h_