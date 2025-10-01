#ifndef _java_io_PushbackInputStream_h_
#define _java_io_PushbackInputStream_h_
//$ class java.io.PushbackInputStream
//$ extends java.io.FilterInputStream

#include <java/io/FilterInputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
	}
}

namespace java {
	namespace io {

class $import PushbackInputStream : public ::java::io::FilterInputStream {
	$class(PushbackInputStream, $NO_CLASS_INIT, ::java::io::FilterInputStream)
public:
	PushbackInputStream();
	void init$(::java::io::InputStream* in, int32_t size);
	void init$(::java::io::InputStream* in);
	virtual int32_t available() override;
	virtual void close() override;
	void ensureOpen();
	virtual void mark(int32_t readlimit) override;
	virtual bool markSupported() override;
	using ::java::io::FilterInputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual void reset() override;
	virtual int64_t skip(int64_t n) override;
	virtual void unread(int32_t b);
	virtual void unread($bytes* b, int32_t off, int32_t len);
	virtual void unread($bytes* b);
	$bytes* buf = nullptr;
	int32_t pos = 0;
};

	} // io
} // java

#endif // _java_io_PushbackInputStream_h_