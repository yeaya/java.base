#ifndef _java_io_InputStream$1_h_
#define _java_io_InputStream$1_h_
//$ class java.io.InputStream$1
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}

namespace java {
	namespace io {

class InputStream$1 : public ::java::io::InputStream {
	$class(InputStream$1, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	InputStream$1();
	void init$();
	virtual int32_t available() override;
	virtual void close() override;
	void ensureOpen();
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual $bytes* readAllBytes() override;
	virtual int32_t readNBytes($bytes* b, int32_t off, int32_t len) override;
	virtual $bytes* readNBytes(int32_t len) override;
	virtual int64_t skip(int64_t n) override;
	virtual void skipNBytes(int64_t n) override;
	virtual int64_t transferTo(::java::io::OutputStream* out) override;
	$volatile(bool) closed = false;
};

	} // io
} // java

#endif // _java_io_InputStream$1_h_