#ifndef _java_io_BufferedReader_h_
#define _java_io_BufferedReader_h_
//$ class java.io.BufferedReader
//$ extends java.io.Reader

#include <java/io/Reader.h>
#include <java/lang/Array.h>

#pragma push_macro("INVALIDATED")
#undef INVALIDATED
#pragma push_macro("UNMARKED")
#undef UNMARKED

namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

namespace java {
	namespace io {

class $export BufferedReader : public ::java::io::Reader {
	$class(BufferedReader, 0, ::java::io::Reader)
public:
	BufferedReader();
	void init$(::java::io::Reader* in, int32_t sz);
	void init$(::java::io::Reader* in);
	virtual void close() override;
	void ensureOpen();
	void fill();
	virtual ::java::util::stream::Stream* lines();
	virtual void mark(int32_t readAheadLimit) override;
	virtual bool markSupported() override;
	using ::java::io::Reader::read;
	virtual int32_t read() override;
	virtual int32_t read($chars* cbuf, int32_t off, int32_t len) override;
	int32_t read1($chars* cbuf, int32_t off, int32_t len);
	virtual $String* readLine(bool ignoreLF, $booleans* term);
	virtual $String* readLine();
	virtual bool ready() override;
	virtual void reset() override;
	virtual int64_t skip(int64_t n) override;
	::java::io::Reader* in = nullptr;
	$chars* cb = nullptr;
	int32_t nChars = 0;
	int32_t nextChar = 0;
	static const int32_t INVALIDATED = (-2);
	static const int32_t UNMARKED = (-1);
	int32_t markedChar = 0;
	int32_t readAheadLimit = 0;
	bool skipLF = false;
	bool markedSkipLF = false;
	static int32_t defaultCharBufferSize;
	static int32_t defaultExpectedLineLength;
};

	} // io
} // java

#pragma pop_macro("INVALIDATED")
#pragma pop_macro("UNMARKED")

#endif // _java_io_BufferedReader_h_