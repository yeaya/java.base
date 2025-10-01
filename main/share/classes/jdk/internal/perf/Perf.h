#ifndef _jdk_internal_perf_Perf_h_
#define _jdk_internal_perf_Perf_h_
//$ class jdk.internal.perf.Perf
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("PERF_MODE_RO")
#undef PERF_MODE_RO
#pragma push_macro("PERF_MODE_RW")
#undef PERF_MODE_RW

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

namespace jdk {
	namespace internal {
		namespace perf {

class $export Perf : public ::java::lang::Object {
	$class(Perf, 0, ::java::lang::Object)
public:
	Perf();
	void init$();
	::java::nio::ByteBuffer* attach(int32_t lvmid, $String* mode);
	::java::nio::ByteBuffer* attach($String* user, int32_t lvmid, $String* mode);
	::java::nio::ByteBuffer* attach($String* user, int32_t lvmid, int32_t mode);
	::java::nio::ByteBuffer* attachImpl($String* user, int32_t lvmid, int32_t mode);
	::java::nio::ByteBuffer* createByteArray($String* name, int32_t variability, int32_t units, $bytes* value, int32_t maxLength);
	::java::nio::ByteBuffer* createLong($String* name, int32_t variability, int32_t units, int64_t value);
	::java::nio::ByteBuffer* createString($String* name, int32_t variability, int32_t units, $String* value, int32_t maxLength);
	::java::nio::ByteBuffer* createString($String* name, int32_t variability, int32_t units, $String* value);
	void detach(::java::nio::ByteBuffer* bb);
	static ::jdk::internal::perf::Perf* getPerf();
	int64_t highResCounter();
	int64_t highResFrequency();
	static void registerNatives();
	static ::jdk::internal::perf::Perf* instance;
	static const int32_t PERF_MODE_RO = 0;
	static const int32_t PERF_MODE_RW = 1;
};

		} // perf
	} // internal
} // jdk

#pragma pop_macro("PERF_MODE_RO")
#pragma pop_macro("PERF_MODE_RW")

#endif // _jdk_internal_perf_Perf_h_