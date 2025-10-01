#ifndef _java_io_Writer$1_h_
#define _java_io_Writer$1_h_
//$ class java.io.Writer$1
//$ extends java.io.Writer

#include <java/io/Writer.h>
#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}

namespace java {
	namespace io {

class Writer$1 : public ::java::io::Writer {
	$class(Writer$1, $NO_CLASS_INIT, ::java::io::Writer)
public:
	Writer$1();
	void init$();
	virtual ::java::io::Writer* append(char16_t c) override;
	virtual ::java::io::Writer* append(::java::lang::CharSequence* csq) override;
	virtual ::java::io::Writer* append(::java::lang::CharSequence* csq, int32_t start, int32_t end) override;
	virtual void close() override;
	void ensureOpen();
	virtual void flush() override;
	using ::java::io::Writer::write;
	virtual void write(int32_t c) override;
	virtual void write($chars* cbuf, int32_t off, int32_t len) override;
	virtual void write($String* str) override;
	virtual void write($String* str, int32_t off, int32_t len) override;
	$volatile(bool) closed = false;
};

	} // io
} // java

#endif // _java_io_Writer$1_h_