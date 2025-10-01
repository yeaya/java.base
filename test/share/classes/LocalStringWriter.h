#ifndef _LocalStringWriter_h_
#define _LocalStringWriter_h_
//$ class LocalStringWriter
//$ extends java.io.Writer

#include <java/io/Writer.h>
#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class StringBuffer;
	}
}

class LocalStringWriter : public ::java::io::Writer {
	$class(LocalStringWriter, $NO_CLASS_INIT, ::java::io::Writer)
public:
	LocalStringWriter();
	void init$();
	virtual void close() override;
	virtual void flush() override;
	virtual $String* toString() override;
	using ::java::io::Writer::write;
	virtual void write($chars* cbuf, int32_t off, int32_t len) override;
	virtual void write($String* str) override;
	::java::lang::StringBuffer* buf = nullptr;
};

#endif // _LocalStringWriter_h_