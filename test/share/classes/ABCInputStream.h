#ifndef _ABCInputStream_h_
#define _ABCInputStream_h_
//$ class ABCInputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

class $export ABCInputStream : public ::java::io::InputStream {
	$class(ABCInputStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	ABCInputStream();
	void init$(int32_t len);
	void init$(int32_t len, int32_t chunk);
	virtual int32_t available() override;
	virtual void close() override;
	static char16_t firstChar();
	static char16_t nextChar(char16_t c);
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* buf, int32_t off, int32_t len) override;
	int32_t len = 0;
	int32_t chunk = 0;
	int32_t count = 0;
	char16_t next = 0;
};

#endif // _ABCInputStream_h_