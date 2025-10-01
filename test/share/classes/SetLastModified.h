#ifndef _SetLastModified_h_
#define _SetLastModified_h_
//$ class SetLastModified
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
	}
}

class $export SetLastModified : public ::java::lang::Object {
	$class(SetLastModified, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SetLastModified();
	void init$();
	static void ck(::java::io::File* f, int64_t nt, int64_t rt);
	static void main($StringArray* args);
};

#endif // _SetLastModified_h_