#ifndef _SPIProviderTest_h_
#define _SPIProviderTest_h_
//$ class SPIProviderTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("QAA")
#undef QAA
#pragma push_macro("QAB")
#undef QAB

namespace java {
	namespace util {
		class Locale;
	}
}

class $export SPIProviderTest : public ::java::lang::Object {
	$class(SPIProviderTest, 0, ::java::lang::Object)
public:
	SPIProviderTest();
	void init$();
	static void main($StringArray* args);
	virtual $Array<::java::lang::Object, 2>* testData();
	static void testSPIProvider($ObjectArray* args);
	static ::java::util::Locale* QAA;
	static ::java::util::Locale* QAB;
};

#pragma pop_macro("QAA")
#pragma pop_macro("QAB")

#endif // _SPIProviderTest_h_