#ifndef _java_io_StringReader_h_
#define _java_io_StringReader_h_
//$ class java.io.StringReader
//$ extends java.io.Reader

#include <java/io/Reader.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {

class $export StringReader : public ::java::io::Reader {
	$class(StringReader, $NO_CLASS_INIT, ::java::io::Reader)
public:
	StringReader();
	void init$($String* s);
	virtual void close() override;
	void ensureOpen();
	virtual void mark(int32_t readAheadLimit) override;
	virtual bool markSupported() override;
	using ::java::io::Reader::read;
	virtual int32_t read() override;
	virtual int32_t read($chars* cbuf, int32_t off, int32_t len) override;
	virtual bool ready() override;
	virtual void reset() override;
	virtual int64_t skip(int64_t n) override;
	$String* str = nullptr;
	int32_t length = 0;
	int32_t next = 0;
	int32_t mark$ = 0;
};

	} // io
} // java

#endif // _java_io_StringReader_h_