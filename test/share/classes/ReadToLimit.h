#ifndef _ReadToLimit_h_
#define _ReadToLimit_h_
//$ class ReadToLimit
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
	}
}

class $export ReadToLimit : public ::java::lang::Object {
	$class(ReadToLimit, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ReadToLimit();
	void init$();
	static void initTestFile(::java::io::File* blah);
	static void main($StringArray* args);
};

#endif // _ReadToLimit_h_