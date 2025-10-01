#ifndef _jdk_internal_perf_Perf$CleanerAction_h_
#define _jdk_internal_perf_Perf$CleanerAction_h_
//$ class jdk.internal.perf.Perf$CleanerAction
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace nio {
		class ByteBuffer;
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

class Perf$CleanerAction : public ::java::lang::Runnable {
	$class(Perf$CleanerAction, 0, ::java::lang::Runnable)
public:
	Perf$CleanerAction();
	void init$(::jdk::internal::perf::Perf* perf, ::java::nio::ByteBuffer* bb);
	virtual void run() override;
	static bool $assertionsDisabled;
	::java::nio::ByteBuffer* bb = nullptr;
	::jdk::internal::perf::Perf* perf = nullptr;
};

		} // perf
	} // internal
} // jdk

#endif // _jdk_internal_perf_Perf$CleanerAction_h_