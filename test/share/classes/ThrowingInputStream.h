#ifndef _ThrowingInputStream_h_
#define _ThrowingInputStream_h_
//$ class ThrowingInputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

class ThrowingInputStream : public ::java::io::InputStream {
	$class(ThrowingInputStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	ThrowingInputStream();
	void init$();
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
};

#endif // _ThrowingInputStream_h_