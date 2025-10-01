#ifndef _HelperSlowToDie_h_
#define _HelperSlowToDie_h_
//$ class HelperSlowToDie
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CHANNELS_PER_THREAD")
#undef CHANNELS_PER_THREAD
#pragma push_macro("TEST_ITERATIONS")
#undef TEST_ITERATIONS

class $export HelperSlowToDie : public ::java::lang::Object {
	$class(HelperSlowToDie, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HelperSlowToDie();
	void init$();
	static void main($StringArray* args);
	static const int32_t CHANNELS_PER_THREAD = 1023;
	static const int32_t TEST_ITERATIONS = 200;
	static $volatile(bool) done;
};

#pragma pop_macro("CHANNELS_PER_THREAD")
#pragma pop_macro("TEST_ITERATIONS")

#endif // _HelperSlowToDie_h_