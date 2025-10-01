#ifndef _ABCReader_h_
#define _ABCReader_h_
//$ class ABCReader
//$ extends java.io.Reader

#include <java/io/Reader.h>
#include <java/lang/Array.h>

class ABCReader : public ::java::io::Reader {
	$class(ABCReader, $NO_CLASS_INIT, ::java::io::Reader)
public:
	ABCReader();
	void init$(int32_t len);
	virtual void close() override;
	using ::java::io::Reader::read;
	virtual int32_t read() override;
	virtual int32_t read($chars* cbuf, int32_t off, int32_t len) override;
	int32_t len = 0;
	int32_t count = 0;
	char16_t next = 0;
};

#endif // _ABCReader_h_