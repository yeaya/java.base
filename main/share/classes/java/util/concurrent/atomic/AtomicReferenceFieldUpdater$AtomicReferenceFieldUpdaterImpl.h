#ifndef _java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_h_
#define _java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_h_
//$ class java.util.concurrent.atomic.AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl
//$ extends java.util.concurrent.atomic.AtomicReferenceFieldUpdater

#include <java/util/concurrent/atomic/AtomicReferenceFieldUpdater.h>

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

class AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl : public ::java::util::concurrent::atomic::AtomicReferenceFieldUpdater {
	$class(AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl, 0, ::java::util::concurrent::atomic::AtomicReferenceFieldUpdater)
public:
	AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl();
	void init$($Class* tclass, $Class* vclass, $String* fieldName, $Class* caller);
	void accessCheck(Object$* obj);
	virtual bool compareAndSet(Object$* obj, Object$* expect, Object$* update) override;
	virtual $Object* get(Object$* obj) override;
	virtual $Object* getAndSet(Object$* obj, Object$* newValue) override;
	static bool isAncestor(::java::lang::ClassLoader* first, ::java::lang::ClassLoader* second);
	static bool isSamePackage($Class* class1, $Class* class2);
	virtual void lazySet(Object$* obj, Object$* newValue) override;
	virtual void set(Object$* obj, Object$* newValue) override;
	void throwAccessCheckException(Object$* obj);
	static void throwCCE();
	void valueCheck(Object$* v);
	virtual bool weakCompareAndSet(Object$* obj, Object$* expect, Object$* update) override;
	static ::jdk::internal::misc::Unsafe* U;
	int64_t offset = 0;
	$Class* cclass = nullptr;
	$Class* tclass = nullptr;
	$Class* vclass = nullptr;
};

			} // atomic
		} // concurrent
	} // util
} // java

#pragma pop_macro("U")

#endif // _java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_h_