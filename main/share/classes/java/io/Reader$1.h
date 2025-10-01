#ifndef _java_io_Reader$1_h_
#define _java_io_Reader$1_h_
//$ class java.io.Reader$1
//$ extends java.io.Reader

#include <java/io/Reader.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class Writer;
	}
}
namespace java {
	namespace nio {
		class CharBuffer;
	}
}

namespace java {
	namespace io {

class Reader$1 : public ::java::io::Reader {
	$class(Reader$1, $NO_CLASS_INIT, ::java::io::Reader)
public:
	Reader$1();
	void init$();
	virtual void close() override;
	void ensureOpen();
	using ::java::io::Reader::read;
	virtual int32_t read() override;
	virtual int32_t read($chars* cbuf, int32_t off, int32_t len) override;
	virtual int32_t read(::java::nio::CharBuffer* target) override;
	virtual bool ready() override;
	virtual int64_t skip(int64_t n) override;
	virtual int64_t transferTo(::java::io::Writer* out) override;
	$volatile(bool) closed = false;
};

	} // io
} // java

#endif // _java_io_Reader$1_h_