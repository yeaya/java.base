#ifndef _BufferForwarding_h_
#define _BufferForwarding_h_
//$ class BufferForwarding
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("A_STRING_BUFFER_VAL")
#undef A_STRING_BUFFER_VAL
#pragma push_macro("A_STRING_BUILDER_VAL")
#undef A_STRING_BUILDER_VAL
#pragma push_macro("A_STRING_VAL")
#undef A_STRING_VAL
#pragma push_macro("NON_EMPTY_VAL")
#undef NON_EMPTY_VAL

class $export BufferForwarding : public ::java::lang::Object {
	$class(BufferForwarding, 0, ::java::lang::Object)
public:
	BufferForwarding();
	void init$();
	virtual void appendCharSequence();
	virtual void assertEquals($String* actual, $String* expected);
	virtual void assertEquals(int32_t actual, int32_t expected);
	virtual void executeTestMethods();
	virtual void indexOfString();
	virtual void indexOfStringIntNull();
	virtual void indexOfStringNull();
	virtual void indexOfStringint();
	virtual void insertintCharSequence();
	virtual void insertintObject();
	virtual void insertintboolean();
	virtual void insertintchar();
	virtual void insertintdouble();
	virtual void insertintfloat();
	virtual void insertintint();
	virtual void insertintlong();
	virtual void lastIndexOfString();
	virtual void lastIndexOfStringint();
	static void main($StringArray* args);
	static $String* A_STRING_BUFFER_VAL;
	static $String* A_STRING_BUILDER_VAL;
	static $String* A_STRING_VAL;
	static $String* NON_EMPTY_VAL;
};

#pragma pop_macro("A_STRING_BUFFER_VAL")
#pragma pop_macro("A_STRING_BUILDER_VAL")
#pragma pop_macro("A_STRING_VAL")
#pragma pop_macro("NON_EMPTY_VAL")

#endif // _BufferForwarding_h_