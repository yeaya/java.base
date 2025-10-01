#ifndef _MetafactoryDescriptorTest_h_
#define _MetafactoryDescriptorTest_h_
//$ class MetafactoryDescriptorTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

class MetafactoryDescriptorTest$ConversionTable;
namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
			class MethodHandles$Lookup;
			class MethodType;
		}
	}
}

class $export MetafactoryDescriptorTest : public ::java::lang::Object {
	$class(MetafactoryDescriptorTest, 0, ::java::lang::Object)
public:
	MetafactoryDescriptorTest();
	void init$();
	static void main($StringArray* args);
	static ::java::lang::invoke::MethodType* mt($Class* ret, $ClassArray* params);
	static void test(bool correct, ::java::lang::invoke::MethodHandle* mh, ::java::lang::invoke::MethodType* instMT, ::java::lang::invoke::MethodType* samMT);
	static void testBridge(bool correct, ::java::lang::invoke::MethodHandle* mh, ::java::lang::invoke::MethodType* instMT, ::java::lang::invoke::MethodType* samMT, $Array<::java::lang::invoke::MethodType>* bridgeMTs);
	static void tryAltMetafactory(bool correct, ::java::lang::invoke::MethodHandle* mh, ::java::lang::invoke::MethodType* instMT, ::java::lang::invoke::MethodType* samMT, $Array<::java::lang::invoke::MethodType>* bridgeMTs);
	static void tryMetafactory(bool correct, ::java::lang::invoke::MethodHandle* mh, ::java::lang::invoke::MethodType* instMT, ::java::lang::invoke::MethodType* samMT);
	static ::java::lang::invoke::MethodHandles$Lookup* lookup;
	static ::MetafactoryDescriptorTest$ConversionTable* conversions;
};

#endif // _MetafactoryDescriptorTest_h_