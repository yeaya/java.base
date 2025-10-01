#ifndef _java_io_FilterInputStream_h_
#define _java_io_FilterInputStream_h_
//$ class java.io.FilterInputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {

class $export FilterInputStream : public ::java::io::InputStream {
	$class(FilterInputStream, $PRELOAD | $NO_CLASS_INIT, ::java::io::InputStream)
public:
	FilterInputStream();
	void init$(::java::io::InputStream* in);
	virtual int32_t available() override;
	virtual void close() override;
	virtual void mark(int32_t readlimit) override;
	virtual bool markSupported() override;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b) override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual void reset() override;
	virtual int64_t skip(int64_t n) override;
	$volatile(::java::io::InputStream*) in = nullptr;
};

	} // io
} // java

#endif // _java_io_FilterInputStream_h_