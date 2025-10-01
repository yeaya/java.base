#ifndef _StaticFieldTest_h_
#define _StaticFieldTest_h_
//$ class StaticFieldTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Field;
		}
	}
}

class $export StaticFieldTest : public ::java::lang::Object {
	$class(StaticFieldTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StaticFieldTest();
	void init$();
	static ::java::lang::reflect::Field* getAccessibleField($String* name);
	static void main($StringArray* args);
	static int8_t byteField;
	static int16_t shortField;
	static char16_t charField;
	static int32_t intField;
	static int64_t longField;
	static float floatField;
	static double doubleField;
	static $String* stringField;
};

#endif // _StaticFieldTest_h_