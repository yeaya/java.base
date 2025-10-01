#ifndef _java_io_ObjectStreamClass$FieldReflectorKey_h_
#define _java_io_ObjectStreamClass$FieldReflectorKey_h_
//$ class java.io.ObjectStreamClass$FieldReflectorKey
//$ extends java.lang.ref.WeakReference

#include <java/lang/Array.h>
#include <java/lang/ref/WeakReference.h>

namespace java {
	namespace io {
		class ObjectStreamField;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}

namespace java {
	namespace io {

class ObjectStreamClass$FieldReflectorKey : public ::java::lang::ref::WeakReference {
	$class(ObjectStreamClass$FieldReflectorKey, $NO_CLASS_INIT, ::java::lang::ref::WeakReference)
public:
	ObjectStreamClass$FieldReflectorKey();
	void init$($Class* cl, $Array<::java::io::ObjectStreamField>* fields, ::java::lang::ref::ReferenceQueue* queue);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	$StringArray* sigs = nullptr;
	int32_t hash = 0;
	bool nullClass = false;
};

	} // io
} // java

#endif // _java_io_ObjectStreamClass$FieldReflectorKey_h_