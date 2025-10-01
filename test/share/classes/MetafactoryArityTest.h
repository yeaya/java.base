#ifndef _MetafactoryArityTest_h_
#define _MetafactoryArityTest_h_
//$ class MetafactoryArityTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
			class MethodHandles$Lookup;
			class MethodType;
		}
	}
}

class $export MetafactoryArityTest : public ::java::lang::Object {
	$class(MetafactoryArityTest, 0, ::java::lang::Object)
public:
	MetafactoryArityTest();
	void init$();
	static void main($StringArray* args);
	static void test(bool correct, ::java::lang::invoke::MethodHandle* mh, ::java::lang::invoke::MethodType* instMT, ::java::lang::invoke::MethodType* samMT);
	static void testBridge(bool correct, ::java::lang::invoke::MethodHandle* mh, ::java::lang::invoke::MethodType* instMT, ::java::lang::invoke::MethodType* samMT, $Array<::java::lang::invoke::MethodType>* bridgeMTs);
	static void testCapture(bool correct, ::java::lang::invoke::MethodHandle* mh, $ClassArray* captured, ::java::lang::invoke::MethodType* instMT, ::java::lang::invoke::MethodType* samMT);
	static void testCaptureBridge(bool correct, ::java::lang::invoke::MethodHandle* mh, $ClassArray* captured, ::java::lang::invoke::MethodType* instMT, ::java::lang::invoke::MethodType* samMT, $Array<::java::lang::invoke::MethodType>* bridgeMTs);
	static void tryAltMetafactory(bool correct, ::java::lang::invoke::MethodHandle* mh, $ClassArray* captured, ::java::lang::invoke::MethodType* instMT, ::java::lang::invoke::MethodType* samMT, $Array<::java::lang::invoke::MethodType>* bridgeMTs);
	static void tryMetafactory(bool correct, ::java::lang::invoke::MethodHandle* mh, $ClassArray* captured, ::java::lang::invoke::MethodType* instMT, ::java::lang::invoke::MethodType* samMT);
	static ::java::lang::invoke::MethodHandles$Lookup* lookup;
	static $ClassArray* capInt;
	static ::java::lang::invoke::MethodHandle* C_m;
};

#endif // _MetafactoryArityTest_h_