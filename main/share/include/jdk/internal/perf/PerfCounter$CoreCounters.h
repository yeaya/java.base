#ifndef _jdk_internal_perf_PerfCounter$CoreCounters_h_
#define _jdk_internal_perf_PerfCounter$CoreCounters_h_
//$ class jdk.internal.perf.PerfCounter$CoreCounters
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace perf {
			class PerfCounter;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace perf {

class $import PerfCounter$CoreCounters : public ::java::lang::Object {
	$class(PerfCounter$CoreCounters, 0, ::java::lang::Object)
public:
	PerfCounter$CoreCounters();
	void init$();
	static ::jdk::internal::perf::PerfCounter* pdt;
	static ::jdk::internal::perf::PerfCounter* lc;
	static ::jdk::internal::perf::PerfCounter* lct;
	static ::jdk::internal::perf::PerfCounter* rcbt;
	static ::jdk::internal::perf::PerfCounter* zfc;
	static ::jdk::internal::perf::PerfCounter* zfot;
};

		} // perf
	} // internal
} // jdk

#endif // _jdk_internal_perf_PerfCounter$CoreCounters_h_