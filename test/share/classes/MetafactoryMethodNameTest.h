#ifndef _MetafactoryMethodNameTest_h_
#define _MetafactoryMethodNameTest_h_
//$ class MetafactoryMethodNameTest
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

class $export MetafactoryMethodNameTest : public ::java::lang::Object {
	$class(MetafactoryMethodNameTest, 0, ::java::lang::Object)
public:
	MetafactoryMethodNameTest();
	void init$();
	static $ObjectArray* arr($ObjectArray* args);
	static void badName($String* name);
	static void failAltMFLinkage(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* name, ::java::lang::invoke::MethodType* capType, $ObjectArray* args, $Class* expectedExceptionType);
	static void failMFLinkage(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* name, ::java::lang::invoke::MethodType* capType, ::java::lang::invoke::MethodType* desc, ::java::lang::invoke::MethodHandle* impl, ::java::lang::invoke::MethodType* checked, $Class* expectedExceptionType);
	static void goodName($String* name);
	static void main($StringArray* args);
	static ::java::lang::invoke::MethodType* mt($Class* ret, $ClassArray* params);
	static ::java::lang::invoke::MethodHandle* smh($Class* c, $String* name, ::java::lang::invoke::MethodType* desc);
	static ::java::lang::invoke::CallSite* succeedAltMFLinkage(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* name, ::java::lang::invoke::MethodType* capType, $ObjectArray* args);
	static ::java::lang::invoke::CallSite* succeedMFLinkage(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* name, ::java::lang::invoke::MethodType* capType, ::java::lang::invoke::MethodType* desc, ::java::lang::invoke::MethodHandle* impl, ::java::lang::invoke::MethodType* checked);
	static ::java::lang::invoke::MethodHandles$Lookup* lookup;
	static ::java::lang::invoke::MethodType* toI;
	static ::java::lang::invoke::MethodType* toVoid;
	static ::java::lang::invoke::MethodHandle* mh;
	static $Class* lce;
};

#endif // _MetafactoryMethodNameTest_h_