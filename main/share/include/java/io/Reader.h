#ifndef _java_io_Reader_h_
#define _java_io_Reader_h_
//$ class java.io.Reader
//$ extends java.lang.Readable
//$ implements java.io.Closeable

#include <java/io/Closeable.h>
#include <java/lang/Array.h>
#include <java/lang/Readable.h>

#pragma push_macro("TRANSFER_BUFFER_SIZE")
#undef TRANSFER_BUFFER_SIZE

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

class $import Reader : public ::java::lang::Readable, public ::java::io::Closeable {
	$class(Reader, $NO_CLASS_INIT, ::java::lang::Readable, ::java::io::Closeable)
public:
	Reader();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void close() override {}
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(Object$* lock);
	virtual void mark(int32_t readAheadLimit);
	virtual bool markSupported();
	static ::java::io::Reader* nullReader();
	virtual int32_t read(::java::nio::CharBuffer* target) override;
	virtual int32_t read();
	virtual int32_t read($chars* cbuf);
	virtual int32_t read($chars* cbuf, int32_t off, int32_t len) {return 0;}
	virtual bool ready();
	virtual void reset();
	virtual int64_t skip(int64_t n);
	virtual $String* toString() override;
	virtual int64_t transferTo(::java::io::Writer* out);
	static const int32_t TRANSFER_BUFFER_SIZE = 8192;
	$Object* lock = nullptr;
	static const int32_t maxSkipBufferSize = 8192;
	$chars* skipBuffer = nullptr;
};

	} // io
} // java

#pragma pop_macro("TRANSFER_BUFFER_SIZE")

#endif // _java_io_Reader_h_