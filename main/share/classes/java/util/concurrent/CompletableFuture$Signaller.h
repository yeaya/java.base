#ifndef _java_util_concurrent_CompletableFuture$Signaller_h_
#define _java_util_concurrent_CompletableFuture$Signaller_h_
//$ class java.util.concurrent.CompletableFuture$Signaller
//$ extends java.util.concurrent.CompletableFuture$Completion
//$ implements java.util.concurrent.ForkJoinPool$ManagedBlocker

#include <java/util/concurrent/CompletableFuture$Completion.h>
#include <java/util/concurrent/ForkJoinPool$ManagedBlocker.h>

namespace java {
	namespace lang {
		class Thread;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CompletableFuture;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export CompletableFuture$Signaller : public ::java::util::concurrent::CompletableFuture$Completion, public ::java::util::concurrent::ForkJoinPool$ManagedBlocker {
	$class(CompletableFuture$Signaller, $NO_CLASS_INIT, ::java::util::concurrent::CompletableFuture$Completion, ::java::util::concurrent::ForkJoinPool$ManagedBlocker)
public:
	CompletableFuture$Signaller();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(bool interruptible, int64_t nanos, int64_t deadline);
	virtual bool block() override;
	virtual bool isLive() override;
	virtual bool isReleasable() override;
	virtual $String* toString() override;
	virtual ::java::util::concurrent::CompletableFuture* tryFire(int32_t ignore) override;
	int64_t nanos = 0;
	int64_t deadline = 0;
	bool interruptible = false;
	bool interrupted = false;
	$volatile($Thread*) thread = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletableFuture$Signaller_h_