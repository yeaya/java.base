#ifndef _java_io_OutputStream$1_h_
#define _java_io_OutputStream$1_h_
//$ class java.io.OutputStream$1
//$ extends java.io.OutputStream

#include <java/io/OutputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {

class OutputStream$1 : public ::java::io::OutputStream {
	$class(OutputStream$1, $NO_CLASS_INIT, ::java::io::OutputStream)
public:
	OutputStream$1();
	void init$();
	virtual void close() override;
	void ensureOpen();
	using ::java::io::OutputStream::write;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	$volatile(bool) closed = false;
};

	} // io
} // java

#endif // _java_io_OutputStream$1_h_