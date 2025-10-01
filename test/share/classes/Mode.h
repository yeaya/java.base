#ifndef _Mode_h_
#define _Mode_h_
//$ class Mode
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
	}
}

class $export Mode : public ::java::lang::Object {
	$class(Mode, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Mode();
	void init$();
	static void main($StringArray* args);
	static void testReadable();
	static void testWritable();
	static ::java::io::File* testFile;
};

#endif // _Mode_h_