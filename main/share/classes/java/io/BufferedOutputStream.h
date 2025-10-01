#ifndef _java_io_BufferedOutputStream_h_
#define _java_io_BufferedOutputStream_h_
//$ class java.io.BufferedOutputStream
//$ extends java.io.FilterOutputStream

#include <java/io/FilterOutputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}

namespace java {
	namespace io {

class $export BufferedOutputStream : public ::java::io::FilterOutputStream {
	$class(BufferedOutputStream, $PRELOAD | $NO_CLASS_INIT, ::java::io::FilterOutputStream)
public:
	BufferedOutputStream();
	void init$(::java::io::OutputStream* out);
	void init$(::java::io::OutputStream* out, int32_t size);
	virtual void flush() override;
	void flushBuffer();
	using ::java::io::FilterOutputStream::write;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	$bytes* buf = nullptr;
	int32_t count = 0;
};

	} // io
} // java

#endif // _java_io_BufferedOutputStream_h_