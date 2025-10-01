#ifndef _java_io_OutputStream_h_
#define _java_io_OutputStream_h_
//$ class java.io.OutputStream
//$ extends java.io.Closeable
//$ implements java.io.Flushable

#include <java/io/Closeable.h>
#include <java/io/Flushable.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {

class $import OutputStream : public ::java::io::Closeable, public ::java::io::Flushable {
	$class(OutputStream, $PRELOAD | $NO_CLASS_INIT, ::java::io::Closeable, ::java::io::Flushable)
public:
	OutputStream();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void close() override;
	virtual void flush() override;
	static ::java::io::OutputStream* nullOutputStream();
	virtual $String* toString() override;
	virtual void write(int32_t b) {}
	virtual void write($bytes* b);
	virtual void write($bytes* b, int32_t off, int32_t len);
};

	} // io
} // java

#endif // _java_io_OutputStream_h_