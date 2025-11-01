#ifndef _java_io_Writer_h_
#define _java_io_Writer_h_
//$ class java.io.Writer
//$ extends java.lang.Appendable
//$ implements java.io.Closeable,java.io.Flushable

#include <java/io/Closeable.h>
#include <java/io/Flushable.h>
#include <java/lang/Appendable.h>
#include <java/lang/Array.h>

#pragma push_macro("WRITE_BUFFER_SIZE")
#undef WRITE_BUFFER_SIZE

namespace java {
	namespace lang {
		class CharSequence;
	}
}

namespace java {
	namespace io {

class $import Writer : public ::java::lang::Appendable, public ::java::io::Closeable, public ::java::io::Flushable {
	$class(Writer, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Appendable, ::java::io::Closeable, ::java::io::Flushable)
public:
	Writer();
	virtual $Object* clone() override;
	virtual void close() override {}
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual void flush() override {}
	virtual int32_t hashCode() override;
	void init$();
	void init$(Object$* lock);
	virtual ::java::io::Writer* append(::java::lang::CharSequence* csq) override;
	virtual ::java::io::Writer* append(::java::lang::CharSequence* csq, int32_t start, int32_t end) override;
	virtual ::java::io::Writer* append(char16_t c) override;
	static ::java::io::Writer* nullWriter();
	virtual $String* toString() override;
	virtual void write(int32_t c);
	virtual void write($chars* cbuf);
	virtual void write($chars* cbuf, int32_t off, int32_t len) {}
	virtual void write($String* str);
	virtual void write($String* str, int32_t off, int32_t len);
	$chars* writeBuffer = nullptr;
	static const int32_t WRITE_BUFFER_SIZE = 1024;
	$Object* lock = nullptr;
};

	} // io
} // java

#pragma pop_macro("WRITE_BUFFER_SIZE")

#endif // _java_io_Writer_h_