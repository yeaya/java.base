#ifndef _java_io_ObjectStreamClass$ClassDataSlot_h_
#define _java_io_ObjectStreamClass$ClassDataSlot_h_
//$ class java.io.ObjectStreamClass$ClassDataSlot
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class ObjectStreamClass;
	}
}

namespace java {
	namespace io {

class $export ObjectStreamClass$ClassDataSlot : public ::java::lang::Object {
	$class(ObjectStreamClass$ClassDataSlot, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ObjectStreamClass$ClassDataSlot();
	void init$(::java::io::ObjectStreamClass* desc, bool hasData);
	::java::io::ObjectStreamClass* desc = nullptr;
	bool hasData = false;
};

	} // io
} // java

#endif // _java_io_ObjectStreamClass$ClassDataSlot_h_