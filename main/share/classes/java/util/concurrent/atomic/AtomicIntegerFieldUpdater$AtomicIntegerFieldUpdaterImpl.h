#ifndef _java_util_concurrent_atomic_AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl_h_
#define _java_util_concurrent_atomic_AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl_h_
//$ class java.util.concurrent.atomic.AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl
//$ extends java.util.concurrent.atomic.AtomicIntegerFieldUpdater

#include <java/util/concurrent/atomic/AtomicIntegerFieldUpdater.h>

#pragma push_macro("U")
#undef U

namespace java {
	namespace lang {
		class ClassLoader;
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

class AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl : public ::java::util::concurrent::atomic::AtomicIntegerFieldUpdater {
	$class(AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl, 0, ::java::util::concurrent::atomic::AtomicIntegerFieldUpdater)
public:
	AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl();
	void init$($Class* tclass, $String* fieldName, $Class* caller);
	void accessCheck(Object$* obj);
	virtual int32_t addAndGet(Object$* obj, int32_t delta) override;
	virtual bool compareAndSet(Object$* obj, int32_t expect, int32_t update) override;
	virtual int32_t decrementAndGet(Object$* obj) override;
	virtual int32_t get(Object$* obj) override;
	virtual int32_t getAndAdd(Object$* obj, int32_t delta) override;
	virtual int32_t getAndDecrement(Object$* obj) override;
	virtual int32_t getAndIncrement(Object$* obj) override;
	virtual int32_t getAndSet(Object$* obj, int32_t newValue) override;
	virtual int32_t incrementAndGet(Object$* obj) override;
	static bool isAncestor(::java::lang::ClassLoader* first, ::java::lang::ClassLoader* second);
	static bool isSamePackage($Class* class1, $Class* class2);
	virtual void lazySet(Object$* obj, int32_t newValue) override;
	virtual void set(Object$* obj, int32_t newValue) override;
	void throwAccessCheckException(Object$* obj);
	virtual bool weakCompareAndSet(Object$* obj, int32_t expect, int32_t update) override;
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

#endif // _java_util_concurrent_atomic_AtomicIntegerFieldUpdater$AtomicIntegerFieldUpdaterImpl_h_