#ifndef _ReadAfterClose_h_
#define _ReadAfterClose_h_
//$ class ReadAfterClose
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
	}
}

class $export ReadAfterClose : public ::java::lang::Object {
	$class(ReadAfterClose, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ReadAfterClose();
	void init$();
	static void main($StringArray* argv);
	static void testRead(::java::io::InputStream* in);
};

#endif // _ReadAfterClose_h_