#ifndef _Mkdir_h_
#define _Mkdir_h_
//$ class Mkdir
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
	}
}

class $export Mkdir : public ::java::lang::Object {
	$class(Mkdir, 0, ::java::lang::Object)
public:
	Mkdir();
	void init$();
	static void main($StringArray* args);
	static ::java::io::File* a;
	static ::java::io::File* a_dot;
	static ::java::io::File* a_dot_b;
};

#endif // _Mkdir_h_