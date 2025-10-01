#ifndef _ExternalizableBlockData_h_
#define _ExternalizableBlockData_h_
//$ class ExternalizableBlockData
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
	}
}

class $export ExternalizableBlockData : public ::java::lang::Object {
	$class(ExternalizableBlockData, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ExternalizableBlockData();
	void init$();
	static $bytes* getFileBytes(::java::io::File* file);
	static void main($StringArray* args);
};

#endif // _ExternalizableBlockData_h_