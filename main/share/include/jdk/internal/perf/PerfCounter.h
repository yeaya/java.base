#ifndef _jdk_internal_perf_PerfCounter_h_
#define _jdk_internal_perf_PerfCounter_h_
//$ class jdk.internal.perf.PerfCounter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		class LongBuffer;
	}
}
namespace jdk {
	namespace internal {
		namespace perf {
			class Perf;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace perf {

class $import PerfCounter : public ::java::lang::Object {
	$class(PerfCounter, 0, ::java::lang::Object)
public:
	PerfCounter();
	void init$($String* name, int32_t type);
	virtual void add(int64_t value);
	virtual void addElapsedTimeFrom(int64_t startTime);
	virtual void addTime(int64_t interval);
	virtual int64_t get();
	static ::jdk::internal::perf::PerfCounter* getFindClassTime();
	static ::jdk::internal::perf::PerfCounter* getFindClasses();
	static ::jdk::internal::perf::PerfCounter* getParentDelegationTime();
	static ::jdk::internal::perf::PerfCounter* getReadClassBytesTime();
	static ::jdk::internal::perf::PerfCounter* getZipFileCount();
	static ::jdk::internal::perf::PerfCounter* getZipFileOpenTime();
	virtual void increment();
	static ::jdk::internal::perf::PerfCounter* newConstantPerfCounter($String* name);
	static ::jdk::internal::perf::PerfCounter* newPerfCounter($String* name);
	virtual void set(int64_t newValue);
	virtual $String* toString() override;
	static ::jdk::internal::perf::Perf* perf;
	static const int32_t V_Constant = 1;
	static const int32_t V_Monotonic = 2;
	static const int32_t V_Variable = 3;
	static const int32_t U_None = 1;
	$String* name = nullptr;
	::java::nio::LongBuffer* lb = nullptr;
};

		} // perf
	} // internal
} // jdk

#endif // _jdk_internal_perf_PerfCounter_h_