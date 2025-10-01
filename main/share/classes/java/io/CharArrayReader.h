#ifndef _java_io_CharArrayReader_h_
#define _java_io_CharArrayReader_h_
//$ class java.io.CharArrayReader
//$ extends java.io.Reader

#include <java/io/Reader.h>
#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class CharBuffer;
	}
}

namespace java {
	namespace io {

class $export CharArrayReader : public ::java::io::Reader {
	$class(CharArrayReader, $NO_CLASS_INIT, ::java::io::Reader)
public:
	CharArrayReader();
	void init$($chars* buf);
	void init$($chars* buf, int32_t offset, int32_t length);
	virtual void close() override;
	void ensureOpen();
	virtual void mark(int32_t readAheadLimit) override;
	virtual bool markSupported() override;
	using ::java::io::Reader::read;
	virtual int32_t read() override;
	virtual int32_t read($chars* cbuf, int32_t off, int32_t len) override;
	virtual int32_t read(::java::nio::CharBuffer* target) override;
	virtual bool ready() override;
	virtual void reset() override;
	virtual int64_t skip(int64_t n) override;
	$chars* buf = nullptr;
	int32_t pos = 0;
	int32_t markedPos = 0;
	int32_t count = 0;
};

	} // io
} // java

#endif // _java_io_CharArrayReader_h_