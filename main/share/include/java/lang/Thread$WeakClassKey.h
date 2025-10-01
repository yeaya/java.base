#ifndef _java_lang_Thread$WeakClassKey_h_
#define _java_lang_Thread$WeakClassKey_h_
//$ class java.lang.Thread$WeakClassKey
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

class $import Thread$WeakClassKey : public ::java::lang::ref::WeakReference {
	$class(Thread$WeakClassKey, $NO_CLASS_INIT, ::java::lang::ref::WeakReference)
public:
	Thread$WeakClassKey();
	void init$($Class* cl, ::java::lang::ref::ReferenceQueue* refQueue);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	int32_t hash = 0;
};

	} // lang
} // java

#endif // _java_lang_Thread$WeakClassKey_h_