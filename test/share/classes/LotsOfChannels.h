#ifndef _LotsOfChannels_h_
#define _LotsOfChannels_h_
//$ class LotsOfChannels
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("PIPES_COUNT")
#undef PIPES_COUNT
#pragma push_macro("BUF_SIZE")
#undef BUF_SIZE
#pragma push_macro("LOOPS")
#undef LOOPS

class $export LotsOfChannels : public ::java::lang::Object {
	$class(LotsOfChannels, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LotsOfChannels();
	void init$();
	static void main($StringArray* argv);
	static const int32_t PIPES_COUNT = 256;
	static const int32_t BUF_SIZE = 8192;
	static const int32_t LOOPS = 10;
};

#pragma pop_macro("PIPES_COUNT")
#pragma pop_macro("BUF_SIZE")
#pragma pop_macro("LOOPS")

#endif // _LotsOfChannels_h_