#ifndef _java_io_FilterOutputStream_h_
#define _java_io_FilterOutputStream_h_
//$ class java.io.FilterOutputStream
//$ extends java.io.OutputStream

#include <java/io/OutputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {

class $import FilterOutputStream : public ::java::io::OutputStream {
	$class(FilterOutputStream, $PRELOAD | $NO_CLASS_INIT, ::java::io::OutputStream)
public:
	FilterOutputStream();
	void init$(::java::io::OutputStream* out);
	virtual void close() override;
	virtual void flush() override;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	::java::io::OutputStream* out = nullptr;
	$volatile(bool) closed = false;
	$Object* closeLock = nullptr;
};

	} // io
} // java

#endif // _java_io_FilterOutputStream_h_