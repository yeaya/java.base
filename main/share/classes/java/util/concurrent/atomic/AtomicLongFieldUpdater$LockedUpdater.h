#ifndef _java_util_concurrent_atomic_AtomicLongFieldUpdater$LockedUpdater_h_
#define _java_util_concurrent_atomic_AtomicLongFieldUpdater$LockedUpdater_h_
//$ class java.util.concurrent.atomic.AtomicLongFieldUpdater$LockedUpdater
//$ extends java.util.concurrent.atomic.AtomicLongFieldUpdater

#include <java/util/concurrent/atomic/AtomicLongFieldUpdater.h>

#pragma push_macro("U")
#undef U

namespace java {
	namespace lang {
		class RuntimeException;
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

class AtomicLongFieldUpdater$LockedUpdater : public ::java::util::concurrent::atomic::AtomicLongFieldUpdater {
	$class(AtomicLongFieldUpdater$LockedUpdater, 0, ::java::util::concurrent::atomic::AtomicLongFieldUpdater)
public:
	AtomicLongFieldUpdater$LockedUpdater();
	void init$($Class* tclass, $String* fieldName, $Class* caller);
	void accessCheck(Object$* obj);
	::java::lang::RuntimeException* accessCheckException(Object$* obj);
	virtual bool compareAndSet(Object$* obj, int64_t expect, int64_t update) override;
	virtual int64_t get(Object$* obj) override;
	virtual void lazySet(Object$* obj, int64_t newValue) override;
	virtual void set(Object$* obj, int64_t newValue) override;
	virtual bool weakCompareAndSet(Object$* obj, int64_t expect, int64_t update) override;
	static ::jdk::internal::misc::Unsafe* U;
	int64_t offset = 0;
	$Class* cclass = nullptr;
	$Class* tclass = nullptr;
};

			} // atomic
		} // concurrent
	} // util
} // java

#pragma pop_macro("U")

#endif // _java_util_concurrent_atomic_AtomicLongFieldUpdater$LockedUpdater_h_