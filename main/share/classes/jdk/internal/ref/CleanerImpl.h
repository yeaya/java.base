#ifndef _jdk_internal_ref_CleanerImpl_h_
#define _jdk_internal_ref_CleanerImpl_h_
//$ class jdk.internal.ref.CleanerImpl
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace lang {
		namespace ref {
			class Cleaner;
			class ReferenceQueue;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ThreadFactory;
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace ref {
			class PhantomCleanable;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace ref {

class $export CleanerImpl : public ::java::lang::Runnable {
	$class(CleanerImpl, 0, ::java::lang::Runnable)
public:
	CleanerImpl();
	void init$();
	static ::jdk::internal::ref::CleanerImpl* getCleanerImpl(::java::lang::ref::Cleaner* cleaner);
	virtual void run() override;
	static void setCleanerImplAccess(::java::util::function::Function* access);
	void start(::java::lang::ref::Cleaner* cleaner, ::java::util::concurrent::ThreadFactory* threadFactory);
	static ::java::util::function::Function* cleanerImplAccess;
	::jdk::internal::ref::PhantomCleanable* phantomCleanableList = nullptr;
	::java::lang::ref::ReferenceQueue* queue = nullptr;
};

		} // ref
	} // internal
} // jdk

#endif // _jdk_internal_ref_CleanerImpl_h_