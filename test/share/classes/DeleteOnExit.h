#ifndef _DeleteOnExit_h_
#define _DeleteOnExit_h_
//$ class DeleteOnExit
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
	}
}

class $export DeleteOnExit : public ::java::lang::Object {
	$class(DeleteOnExit, 0, ::java::lang::Object)
public:
	DeleteOnExit();
	void init$();
	static void main($StringArray* args);
	static $String* tmpdir;
	static $String* java;
	static ::java::io::File* file1;
	static ::java::io::File* file2;
	static ::java::io::File* file3;
	static ::java::io::File* dir;
	static ::java::io::File* file4;
	static ::java::io::File* file5;
	static ::java::io::File* file6;
	static ::java::io::File* file7;
};

#endif // _DeleteOnExit_h_