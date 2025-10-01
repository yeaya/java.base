#ifndef _FileMethods_h_
#define _FileMethods_h_
//$ class FileMethods
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
	}
}

class $export FileMethods : public ::java::lang::Object {
	$class(FileMethods, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FileMethods();
	void init$();
	static void ck($String* op, ::java::io::File* got, ::java::io::File* ans);
	static void ck($String* op, ::java::io::File* f, $StringArray* ls, $Array<::java::io::File>* lf);
	static void main($StringArray* args);
};

#endif // _FileMethods_h_