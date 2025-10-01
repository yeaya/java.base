#ifndef _LotsOfStreams_h_
#define _LotsOfStreams_h_
//$ class LotsOfStreams
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MAX_SUBSTREAMS")
#undef MAX_SUBSTREAMS

class $export LotsOfStreams : public ::java::lang::Object {
	$class(LotsOfStreams, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LotsOfStreams();
	void init$();
	static void main($StringArray* argv);
	static const int32_t MAX_SUBSTREAMS = 32000;
};

#pragma pop_macro("MAX_SUBSTREAMS")

#endif // _LotsOfStreams_h_