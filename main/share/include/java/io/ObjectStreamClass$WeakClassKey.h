#ifndef _java_io_ObjectStreamClass$WeakClassKey_h_
#define _java_io_ObjectStreamClass$WeakClassKey_h_
//$ class java.io.ObjectStreamClass$WeakClassKey
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
	namespace io {

class $import ObjectStreamClass$WeakClassKey : public ::java::lang::ref::WeakReference {
	$class(ObjectStreamClass$WeakClassKey, $NO_CLASS_INIT, ::java::lang::ref::WeakReference)
public:
	ObjectStreamClass$WeakClassKey();
	void init$($Class* cl, ::java::lang::ref::ReferenceQueue* refQueue);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	int32_t hash = 0;
};

	} // io
} // java

#endif // _java_io_ObjectStreamClass$WeakClassKey_h_