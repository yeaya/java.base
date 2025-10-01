#ifndef _BufferBreaker_h_
#define _BufferBreaker_h_
//$ class BufferBreaker
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

class BufferBreaker : public ::java::io::InputStream {
	$class(BufferBreaker, 0, ::java::io::InputStream)
public:
	BufferBreaker();
	void init$();
	virtual int32_t available() override;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b) override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual int64_t skip(int64_t n) override;
	bool breakIt = false;
	static $bytes* buffer;
};

#endif // _BufferBreaker_h_