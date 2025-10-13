#ifndef _GetClosedChannel_h_
#define _GetClosedChannel_h_
//$ class GetClosedChannel
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("NUM_CHANNELS")
#undef NUM_CHANNELS
#pragma push_macro("NUM_EXCEPTIONS")
#undef NUM_EXCEPTIONS

class $export GetClosedChannel : public ::java::lang::Object {
	$class(GetClosedChannel, 0, ::java::lang::Object)
public:
	GetClosedChannel();
	void init$();
	static void main($StringArray* args);
	static bool $assertionsDisabled;
	static const int32_t NUM_CHANNELS = 3;
	static const int32_t NUM_EXCEPTIONS = 6; // 2 * NUM_CHANNELS
};

#pragma pop_macro("NUM_CHANNELS")
#pragma pop_macro("NUM_EXCEPTIONS")

#endif // _GetClosedChannel_h_