#ifndef _java_io_CharArrayWriter_h_
#define _java_io_CharArrayWriter_h_
//$ class java.io.CharArrayWriter
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

class $export CharArrayWriter : public ::java::io::Writer {
	$class(CharArrayWriter, $NO_CLASS_INIT, ::java::io::Writer)
public:
	CharArrayWriter();
	void init$();
	void init$(int32_t initialSize);
	virtual ::java::io::CharArrayWriter* append(::java::lang::CharSequence* csq) override;
	virtual ::java::io::CharArrayWriter* append(::java::lang::CharSequence* csq, int32_t start, int32_t end) override;
	virtual ::java::io::CharArrayWriter* append(char16_t c) override;
	virtual void close() override;
	virtual void flush() override;
	virtual void reset();
	virtual int32_t size();
	virtual $chars* toCharArray();
	virtual $String* toString() override;
	using ::java::io::Writer::write;
	virtual void write(int32_t c) override;
	virtual void write($chars* c, int32_t off, int32_t len) override;
	virtual void write($String* str, int32_t off, int32_t len) override;
	virtual void writeTo(::java::io::Writer* out);
	$chars* buf = nullptr;
	int32_t count = 0;
};

	} // io
} // java

#endif // _java_io_CharArrayWriter_h_