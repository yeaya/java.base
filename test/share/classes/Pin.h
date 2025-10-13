#ifndef _Pin_h_
#define _Pin_h_
//$ class Pin
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BLOCK_SIZE")
#undef BLOCK_SIZE
#pragma push_macro("NUM_BLOCKS")
#undef NUM_BLOCKS

class $export Pin : public ::java::lang::Object {
	$class(Pin, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Pin();
	void init$();
	static void main($StringArray* args);
	static const int32_t NUM_BLOCKS = 128;
	static const int32_t BLOCK_SIZE = 32768;
};

#pragma pop_macro("BLOCK_SIZE")
#pragma pop_macro("NUM_BLOCKS")

#endif // _Pin_h_