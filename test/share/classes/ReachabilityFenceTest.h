#ifndef _ReachabilityFenceTest_h_
#define _ReachabilityFenceTest_h_
//$ class ReachabilityFenceTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("LOOP_ITERS")
#undef LOOP_ITERS
#pragma push_macro("MAIN_ITERS")
#undef MAIN_ITERS
#pragma push_macro("PREMATURE_FINALIZATION")
#undef PREMATURE_FINALIZATION
#pragma push_macro("WARMUP_LOOP_ITERS")
#undef WARMUP_LOOP_ITERS

class $export ReachabilityFenceTest : public ::java::lang::Object {
	$class(ReachabilityFenceTest, 0, ::java::lang::Object)
public:
	ReachabilityFenceTest();
	void init$();
	static bool fenced();
	static void main($StringArray* args);
	static bool nonFenced();
	static int32_t LOOP_ITERS;
	static int32_t WARMUP_LOOP_ITERS;
	static const int32_t MAIN_ITERS = 3;
	static bool PREMATURE_FINALIZATION;
};

#pragma pop_macro("LOOP_ITERS")
#pragma pop_macro("MAIN_ITERS")
#pragma pop_macro("PREMATURE_FINALIZATION")
#pragma pop_macro("WARMUP_LOOP_ITERS")

#endif // _ReachabilityFenceTest_h_