#ifndef _java_io_Flushable_h_
#define _java_io_Flushable_h_
//$ interface java.io.Flushable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {

class $import Flushable : public ::java::lang::Object {
	$interface(Flushable, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void flush() {}
};

	} // io
} // java

#endif // _java_io_Flushable_h_