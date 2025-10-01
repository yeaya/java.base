#ifndef _java_io_ObjectOutput_h_
#define _java_io_ObjectOutput_h_
//$ interface java.io.ObjectOutput
//$ extends java.io.DataOutput,java.lang.AutoCloseable

#include <java/io/DataOutput.h>
#include <java/lang/AutoCloseable.h>

namespace java {
	namespace io {

class $export ObjectOutput : public ::java::io::DataOutput, public ::java::lang::AutoCloseable {
	$interface(ObjectOutput, $NO_CLASS_INIT, ::java::io::DataOutput, ::java::lang::AutoCloseable)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void close() override {}
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual void flush() {}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	virtual void write(int32_t b) override {}
	virtual void write($bytes* b) override {}
	virtual void write($bytes* b, int32_t off, int32_t len) override {}
	virtual void writeObject(Object$* obj) {}
};

	} // io
} // java

#endif // _java_io_ObjectOutput_h_