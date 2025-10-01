#ifndef _TestMethodReflectValueOf_h_
#define _TestMethodReflectValueOf_h_
//$ class TestMethodReflectValueOf
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export TestMethodReflectValueOf : public ::java::lang::Object {
	$class(TestMethodReflectValueOf, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestMethodReflectValueOf();
	void init$();
	virtual bool booleanMethod(bool value);
	virtual int8_t byteMethod(int8_t value);
	virtual char16_t charMethod(char16_t value);
	virtual int32_t intMethod(int32_t value);
	virtual int64_t longMethod(int64_t value);
	static void main($StringArray* args);
	virtual int16_t shortMethod(int16_t value);
	static void testMethod($Class* primType, Object$* wrappedValue, bool checkIdentity);
};

#endif // _TestMethodReflectValueOf_h_