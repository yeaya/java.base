#ifndef _ICCBasher_h_
#define _ICCBasher_h_
//$ class ICCBasher
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CHAR_VALUE_LIMIT")
#undef CHAR_VALUE_LIMIT
#pragma push_macro("TEST_SIZE")
#undef TEST_SIZE
#pragma push_macro("STRING_SIZE")
#undef STRING_SIZE

class $export ICCBasher : public ::java::lang::Object {
	$class(ICCBasher, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ICCBasher();
	void init$();
	static void main($StringArray* args);
	static const int32_t TEST_SIZE = 20;
	static const int32_t STRING_SIZE = 5;
	static const int32_t CHAR_VALUE_LIMIT = 128;
};

#pragma pop_macro("CHAR_VALUE_LIMIT")
#pragma pop_macro("TEST_SIZE")
#pragma pop_macro("STRING_SIZE")

#endif // _ICCBasher_h_