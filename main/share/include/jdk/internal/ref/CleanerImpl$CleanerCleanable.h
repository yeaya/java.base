#ifndef _jdk_internal_ref_CleanerImpl$CleanerCleanable_h_
#define _jdk_internal_ref_CleanerImpl$CleanerCleanable_h_
//$ class jdk.internal.ref.CleanerImpl$CleanerCleanable
//$ extends jdk.internal.ref.PhantomCleanable

#include <jdk/internal/ref/PhantomCleanable.h>

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

class $import CleanerImpl$CleanerCleanable : public ::jdk::internal::ref::PhantomCleanable {
	$class(CleanerImpl$CleanerCleanable, $NO_CLASS_INIT, ::jdk::internal::ref::PhantomCleanable)
public:
	CleanerImpl$CleanerCleanable();
	void init$(::java::lang::ref::Cleaner* cleaner);
	virtual void performCleanup() override;
};

		} // ref
	} // internal
} // jdk

#endif // _jdk_internal_ref_CleanerImpl$CleanerCleanable_h_