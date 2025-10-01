#ifndef _java_lang_invoke_MethodType$ConcurrentWeakInternSet$WeakEntry_h_
#define _java_lang_invoke_MethodType$ConcurrentWeakInternSet$WeakEntry_h_
//$ class java.lang.invoke.MethodType$ConcurrentWeakInternSet$WeakEntry
//$ extends java.lang.ref.WeakReference

#include <java/lang/ref/WeakReference.h>

namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class MethodType$ConcurrentWeakInternSet$WeakEntry : public ::java::lang::ref::WeakReference {
	$class(MethodType$ConcurrentWeakInternSet$WeakEntry, $NO_CLASS_INIT, ::java::lang::ref::WeakReference)
public:
	MethodType$ConcurrentWeakInternSet$WeakEntry();
	void init$(Object$* key, ::java::lang::ref::ReferenceQueue* queue);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	int32_t hashcode = 0;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_MethodType$ConcurrentWeakInternSet$WeakEntry_h_