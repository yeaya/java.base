#ifndef _jdk_internal_ref_CleanerImpl$PhantomCleanableRef_h_
#define _jdk_internal_ref_CleanerImpl$PhantomCleanableRef_h_
//$ class jdk.internal.ref.CleanerImpl$PhantomCleanableRef
//$ extends jdk.internal.ref.PhantomCleanable

#include <jdk/internal/ref/PhantomCleanable.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}
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

class $import CleanerImpl$PhantomCleanableRef : public ::jdk::internal::ref::PhantomCleanable {
	$class(CleanerImpl$PhantomCleanableRef, $NO_CLASS_INIT, ::jdk::internal::ref::PhantomCleanable)
public:
	CleanerImpl$PhantomCleanableRef();
	void init$(Object$* obj, ::java::lang::ref::Cleaner* cleaner, ::java::lang::Runnable* action);
	void init$();
	virtual void clear() override;
	virtual $Object* get() override;
	virtual void performCleanup() override;
	::java::lang::Runnable* action = nullptr;
};

		} // ref
	} // internal
} // jdk

#endif // _jdk_internal_ref_CleanerImpl$PhantomCleanableRef_h_