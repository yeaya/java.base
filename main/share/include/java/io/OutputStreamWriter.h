#ifndef _java_io_OutputStreamWriter_h_
#define _java_io_OutputStreamWriter_h_
//$ class java.io.OutputStreamWriter
//$ extends java.io.Writer

#include <java/io/Writer.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
			class CharsetEncoder;
		}
	}
}
namespace sun {
	namespace nio {
		namespace cs {
			class StreamEncoder;
		}
	}
}

namespace java {
	namespace io {

class $import OutputStreamWriter : public ::java::io::Writer {
	$class(OutputStreamWriter, $PRELOAD | $NO_CLASS_INIT, ::java::io::Writer)
public:
	OutputStreamWriter();
	using ::java::io::Writer::append;
	void init$(::java::io::OutputStream* out, $String* charsetName);
	void init$(::java::io::OutputStream* out);
	void init$(::java::io::OutputStream* out, ::java::nio::charset::Charset* cs);
	void init$(::java::io::OutputStream* out, ::java::nio::charset::CharsetEncoder* enc);
	virtual ::java::io::Writer* append(::java::lang::CharSequence* csq, int32_t start, int32_t end) override;
	virtual ::java::io::Writer* append(::java::lang::CharSequence* csq) override;
	virtual void close() override;
	virtual void flush() override;
	virtual void flushBuffer();
	virtual $String* getEncoding();
	using ::java::io::Writer::write;
	virtual void write(int32_t c) override;
	virtual void write($chars* cbuf, int32_t off, int32_t len) override;
	virtual void write($String* str, int32_t off, int32_t len) override;
	::sun::nio::cs::StreamEncoder* se = nullptr;
};

	} // io
} // java

#endif // _java_io_OutputStreamWriter_h_