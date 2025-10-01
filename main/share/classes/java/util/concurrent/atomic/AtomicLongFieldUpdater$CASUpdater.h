#ifndef _java_util_concurrent_atomic_AtomicLongFieldUpdater$CASUpdater_h_
#define _java_util_concurrent_atomic_AtomicLongFieldUpdater$CASUpdater_h_
//$ class java.util.concurrent.atomic.AtomicLongFieldUpdater$CASUpdater
//$ extends java.util.concurrent.atomic.AtomicLongFieldUpdater

#include <java/util/concurrent/atomic/AtomicLongFieldUpdater.h>

#pragma push_macro("U")
#undef U

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

class AtomicLongFieldUpdater$CASUpdater : public ::java::util::concurrent::atomic::AtomicLongFieldUpdater {
	$class(AtomicLongFieldUpdater$CASUpdater, 0, ::java::util::concurrent::atomic::AtomicLongFieldUpdater)
public:
	AtomicLongFieldUpdater$CASUpdater();
	void init$($Class* tclass, $String* fieldName, $Class* caller);
	void accessCheck(Object$* obj);
	virtual int64_t addAndGet(Object$* obj, int64_t delta) override;
	virtual bool compareAndSet(Object$* obj, int64_t expect, int64_t update) override;
	virtual int64_t decrementAndGet(Object$* obj) override;
	virtual int64_t get(Object$* obj) override;
	virtual int64_t getAndAdd(Object$* obj, int64_t delta) override;
	virtual int64_t getAndDecrement(Object$* obj) override;
	virtual int64_t getAndIncrement(Object$* obj) override;
	virtual int64_t getAndSet(Object$* obj, int64_t newValue) override;
	virtual int64_t incrementAndGet(Object$* obj) override;
	virtual void lazySet(Object$* obj, int64_t newValue) override;
	virtual void set(Object$* obj, int64_t newValue) override;
	void throwAccessCheckException(Object$* obj);
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

#endif // _java_util_concurrent_atomic_AtomicLongFieldUpdater$CASUpdater_h_