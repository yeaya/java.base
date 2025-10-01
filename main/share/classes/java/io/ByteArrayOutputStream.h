#ifndef _java_io_ByteArrayOutputStream_h_
#define _java_io_ByteArrayOutputStream_h_
//$ class java.io.ByteArrayOutputStream
//$ extends java.io.OutputStream

#include <java/io/OutputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}

namespace java {
	namespace io {

class $export ByteArrayOutputStream : public ::java::io::OutputStream {
	$class(ByteArrayOutputStream, $PRELOAD | $NO_CLASS_INIT, ::java::io::OutputStream)
public:
	ByteArrayOutputStream();
	void init$();
	void init$(int32_t size);
	virtual void close() override;
	void ensureCapacity(int32_t minCapacity);
	virtual void reset();
	virtual int32_t size();
	virtual $bytes* toByteArray();
	virtual $String* toString() override;
	virtual $String* toString($String* charsetName);
	virtual $String* toString(::java::nio::charset::Charset* charset);
	virtual $String* toString(int32_t hibyte);
	using ::java::io::OutputStream::write;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	virtual void writeBytes($bytes* b);
	virtual void writeTo(::java::io::OutputStream* out);
	$bytes* buf = nullptr;
	int32_t count = 0;
};

	} // io
} // java

#endif // _java_io_ByteArrayOutputStream_h_