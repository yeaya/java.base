#ifndef _ReadAhead$LimitedReader_h_
#define _ReadAhead$LimitedReader_h_
//$ class ReadAhead$LimitedReader
//$ extends java.io.Reader

#include <java/io/Reader.h>
#include <java/lang/Array.h>

class ReadAhead$LimitedReader : public ::java::io::Reader {
	$class(ReadAhead$LimitedReader, $NO_CLASS_INIT, ::java::io::Reader)
public:
	ReadAhead$LimitedReader();
	void init$($String* input, int32_t limit);
	virtual void close() override;
	using ::java::io::Reader::read;
	virtual int32_t read() override;
	virtual int32_t read($chars* b, int32_t off, int32_t len) override;
	$String* input = nullptr;
	int32_t limit = 0;
	int32_t next = 0;
};

#endif // _ReadAhead$LimitedReader_h_