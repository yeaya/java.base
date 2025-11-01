#ifndef _jdk_internal_ref_PhantomCleanable_h_
#define _jdk_internal_ref_PhantomCleanable_h_
//$ class jdk.internal.ref.PhantomCleanable
//$ extends java.lang.ref.PhantomReference
//$ implements java.lang.ref.Cleaner$Cleanable

#include <java/lang/ref/Cleaner$Cleanable.h>
#include <java/lang/ref/PhantomReference.h>

namespace java {
	namespace lang {
		namespace ref {
			class Cleaner;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace ref {

class $export PhantomCleanable : public ::java::lang::ref::PhantomReference, public ::java::lang::ref::Cleaner$Cleanable {
	$class(PhantomCleanable, $NO_CLASS_INIT, ::java::lang::ref::PhantomReference, ::java::lang::ref::Cleaner$Cleanable)
public:
	PhantomCleanable();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(Object$* referent, ::java::lang::ref::Cleaner* cleaner);
	void init$();
	virtual void clean() override;
	virtual void clear() override;
	virtual bool enqueue() override;
	void insert();
	virtual bool isEnqueued() override;
	virtual bool isListEmpty();
	virtual void performCleanup() {}
	bool remove();
	virtual $String* toString() override;
	::jdk::internal::ref::PhantomCleanable* prev = nullptr;
	::jdk::internal::ref::PhantomCleanable* next = nullptr;
	::jdk::internal::ref::PhantomCleanable* list = nullptr;
};

		} // ref
	} // internal
} // jdk

#endif // _jdk_internal_ref_PhantomCleanable_h_