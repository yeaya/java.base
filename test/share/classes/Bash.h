#ifndef _Bash_h_
#define _Bash_h_
//$ class Bash
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("NUM_BLOCKS")
#undef NUM_BLOCKS
#pragma push_macro("BLOCK_SIZE")
#undef BLOCK_SIZE

class $export Bash : public ::java::lang::Object {
	$class(Bash, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Bash();
	void init$();
	static void main($StringArray* args);
	static const int32_t NUM_BLOCKS = 2048;
	static const int32_t BLOCK_SIZE = 32768;
};

#pragma pop_macro("NUM_BLOCKS")
#pragma pop_macro("BLOCK_SIZE")

#endif // _Bash_h_