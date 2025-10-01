#ifndef _ReadAhead$LimitedInputStream_h_
#define _ReadAhead$LimitedInputStream_h_
//$ class ReadAhead$LimitedInputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>

class ReadAhead$LimitedInputStream : public ::java::io::InputStream {
	$class(ReadAhead$LimitedInputStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	ReadAhead$LimitedInputStream();
	void init$($String* input, int32_t limit);
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	$String* input = nullptr;
	int32_t limit = 0;
	int32_t next = 0;
};

#endif // _ReadAhead$LimitedInputStream_h_