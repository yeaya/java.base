#ifndef _java_io_Console$LineReader_h_
#define _java_io_Console$LineReader_h_
//$ class java.io.Console$LineReader
//$ extends java.io.Reader

#include <java/io/Reader.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class Console;
	}
}

namespace java {
	namespace io {

class $import Console$LineReader : public ::java::io::Reader {
	$class(Console$LineReader, $NO_CLASS_INIT, ::java::io::Reader)
public:
	Console$LineReader();
	void init$(::java::io::Console* this$0, ::java::io::Reader* in);
	virtual void close() override;
	using ::java::io::Reader::read;
	virtual int32_t read($chars* cbuf, int32_t offset, int32_t length) override;
	virtual bool ready() override;
	::java::io::Console* this$0 = nullptr;
	::java::io::Reader* in = nullptr;
	$chars* cb = nullptr;
	int32_t nChars = 0;
	int32_t nextChar = 0;
	bool leftoverLF = false;
};

	} // io
} // java

#endif // _java_io_Console$LineReader_h_