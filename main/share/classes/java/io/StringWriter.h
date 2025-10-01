#ifndef _java_io_StringWriter_h_
#define _java_io_StringWriter_h_
//$ class java.io.StringWriter
//$ extends java.io.Writer

#include <java/io/Writer.h>
#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class CharSequence;
		class StringBuffer;
	}
}

namespace java {
	namespace io {

class $export StringWriter : public ::java::io::Writer {
	$class(StringWriter, $NO_CLASS_INIT, ::java::io::Writer)
public:
	StringWriter();
	void init$();
	void init$(int32_t initialSize);
	virtual ::java::io::StringWriter* append(::java::lang::CharSequence* csq) override;
	virtual ::java::io::StringWriter* append(::java::lang::CharSequence* csq, int32_t start, int32_t end) override;
	virtual ::java::io::StringWriter* append(char16_t c) override;
	virtual void close() override;
	virtual void flush() override;
	virtual ::java::lang::StringBuffer* getBuffer();
	virtual $String* toString() override;
	using ::java::io::Writer::write;
	virtual void write(int32_t c) override;
	virtual void write($chars* cbuf, int32_t off, int32_t len) override;
	virtual void write($String* str) override;
	virtual void write($String* str, int32_t off, int32_t len) override;
	::java::lang::StringBuffer* buf = nullptr;
};

	} // io
} // java

#endif // _java_io_StringWriter_h_