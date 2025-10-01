#ifndef _java_io_Closeable_h_
#define _java_io_Closeable_h_
//$ interface java.io.Closeable
//$ extends java.lang.AutoCloseable

#include <java/lang/AutoCloseable.h>

namespace java {
	namespace io {

class $export Closeable : public ::java::lang::AutoCloseable {
	$interface(Closeable, $PRELOAD | $NO_CLASS_INIT, ::java::lang::AutoCloseable)
public:
	virtual void close() override {}
};

	} // io
} // java

#endif // _java_io_Closeable_h_