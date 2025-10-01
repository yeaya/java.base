#ifndef _SecurityRace_h_
#define _SecurityRace_h_
//$ class SecurityRace
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

#pragma push_macro("SET_TIMING_LOOPS")
#undef SET_TIMING_LOOPS
#pragma push_macro("WARMUP_LOOPS")
#undef WARMUP_LOOPS
#pragma push_macro("GET_TIMING_LOOPS")
#undef GET_TIMING_LOOPS
#pragma push_macro("MAX_MILLISECONDS")
#undef MAX_MILLISECONDS
#pragma push_macro("TIMING_TRIALS")
#undef TIMING_TRIALS
#pragma push_macro("GETPROPERTY_LOOPS")
#undef GETPROPERTY_LOOPS
#pragma push_macro("STRESS_MILLISECONDS")
#undef STRESS_MILLISECONDS

namespace java {
	namespace lang {
		class SecurityManager;
	}
}

class $export SecurityRace : public ::java::lang::Runnable {
	$class(SecurityRace, 0, ::java::lang::Runnable)
public:
	SecurityRace();
	void init$();
	static void main($StringArray* argv);
	virtual void run() override;
	static void timeit(int32_t timing_trials, int32_t get_timing_loops, int32_t set_timing_loops);
	static const int32_t WARMUP_LOOPS = 0x000186A0;
	static const int32_t TIMING_TRIALS = 10;
	static const int32_t STRESS_MILLISECONDS = 0x000493E0;
	static const int32_t SET_TIMING_LOOPS = 10000;
	static int32_t MAX_MILLISECONDS;
	static const int32_t GET_TIMING_LOOPS = 0x00989680;
	static $volatile(bool) stopthreads;
	static const int32_t GETPROPERTY_LOOPS = 30000;
	static ::java::lang::SecurityManager* sm;
};

#pragma pop_macro("SET_TIMING_LOOPS")
#pragma pop_macro("WARMUP_LOOPS")
#pragma pop_macro("GET_TIMING_LOOPS")
#pragma pop_macro("MAX_MILLISECONDS")
#pragma pop_macro("TIMING_TRIALS")
#pragma pop_macro("GETPROPERTY_LOOPS")
#pragma pop_macro("STRESS_MILLISECONDS")

#endif // _SecurityRace_h_