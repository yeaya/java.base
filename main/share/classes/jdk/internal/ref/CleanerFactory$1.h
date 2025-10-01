#ifndef _jdk_internal_ref_CleanerFactory$1_h_
#define _jdk_internal_ref_CleanerFactory$1_h_
//$ class jdk.internal.ref.CleanerFactory$1
//$ extends java.util.concurrent.ThreadFactory

#include <java/util/concurrent/ThreadFactory.h>

namespace java {
	namespace lang {
		class Runnable;
		class Thread;
	}
}

namespace jdk {
	namespace internal {
		namespace ref {

class CleanerFactory$1 : public ::java::util::concurrent::ThreadFactory {
	$class(CleanerFactory$1, $NO_CLASS_INIT, ::java::util::concurrent::ThreadFactory)
public:
	CleanerFactory$1();
	void init$();
	virtual $Thread* newThread(::java::lang::Runnable* r) override;
};

		} // ref
	} // internal
} // jdk

#endif // _jdk_internal_ref_CleanerFactory$1_h_