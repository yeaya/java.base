#ifndef _TestFieldReflectValueOf_h_
#define _TestFieldReflectValueOf_h_
//$ class TestFieldReflectValueOf
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export TestFieldReflectValueOf : public ::java::lang::Object {
	$class(TestFieldReflectValueOf, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestFieldReflectValueOf();
	void init$();
	static void main($StringArray* args);
	static void testField($Class* primType, Object$* wrappedValue, bool checkStatic, bool checkVolatile);
	static void testFieldAccessors(bool checkStatic, bool checkVolatile);
	static void testUnsafeFieldAccessors();
	static void testUnsafeQualifiedFieldAccessors();
	static void testUnsafeQualifiedStaticFieldAccessors();
	static void testUnsafeStaticFieldAccessors();
	static bool booleanStaticField;
	static int8_t byteStaticField;
	static char16_t charStaticField;
	static int32_t intStaticField;
	static int64_t longStaticField;
	static int16_t shortStaticField;
	static $volatile(bool) booleanStaticVolatileField;
	static $volatile(int8_t) byteStaticVolatileField;
	static $volatile(char16_t) charStaticVolatileField;
	static $volatile(int32_t) intStaticVolatileField;
	static $volatile(int64_t) longStaticVolatileField;
	static $volatile(int16_t) shortStaticVolatileField;
	bool booleanField = false;
	int8_t byteField = 0;
	char16_t charField = 0;
	int32_t intField = 0;
	int64_t longField = 0;
	int16_t shortField = 0;
	$volatile(bool) booleanVolatileField = false;
	$volatile(int8_t) byteVolatileField = 0;
	$volatile(char16_t) charVolatileField = 0;
	$volatile(int32_t) intVolatileField = 0;
	$volatile(int64_t) longVolatileField = 0;
	$volatile(int16_t) shortVolatileField = 0;
};

#endif // _TestFieldReflectValueOf_h_