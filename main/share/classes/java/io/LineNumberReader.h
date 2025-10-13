#ifndef _java_io_LineNumberReader_h_
#define _java_io_LineNumberReader_h_
//$ class java.io.LineNumberReader
//$ extends java.io.BufferedReader

#include <java/io/BufferedReader.h>
#include <java/lang/Array.h>

#pragma push_macro("CHAR")
#undef CHAR
#pragma push_macro("EOF")
#undef EOF
#pragma push_macro("EOL")
#undef EOL
#pragma push_macro("NONE")
#undef NONE

namespace java {
	namespace io {
		class Reader;
	}
}

namespace java {
	namespace io {

class $export LineNumberReader : public ::java::io::BufferedReader {
	$class(LineNumberReader, $NO_CLASS_INIT, ::java::io::BufferedReader)
public:
	LineNumberReader();
	void init$(::java::io::Reader* in);
	void init$(::java::io::Reader* in, int32_t sz);
	virtual int32_t getLineNumber();
	virtual void mark(int32_t readAheadLimit) override;
	using ::java::io::BufferedReader::read;
	virtual int32_t read() override;
	virtual int32_t read($chars* cbuf, int32_t off, int32_t len) override;
	using ::java::io::BufferedReader::readLine;
	virtual $String* readLine() override;
	virtual void reset() override;
	virtual void setLineNumber(int32_t lineNumber);
	virtual int64_t skip(int64_t n) override;
	static const int32_t NONE = 0;
	static const int32_t CHAR = 1;
	static const int32_t EOL = 2;
	static const int32_t EOF = 3;
	int32_t prevChar = 0;
	int32_t lineNumber = 0;
	int32_t markedLineNumber = 0;
	bool skipLF = false;
	bool markedSkipLF = false;
	static const int32_t maxSkipBufferSize = 8192;
	$chars* skipBuffer = nullptr;
};

	} // io
} // java

#pragma pop_macro("CHAR")
#pragma pop_macro("EOF")
#pragma pop_macro("EOL")
#pragma pop_macro("NONE")

#endif // _java_io_LineNumberReader_h_