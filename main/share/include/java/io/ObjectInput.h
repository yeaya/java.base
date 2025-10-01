#ifndef _java_io_ObjectInput_h_
#define _java_io_ObjectInput_h_
//$ interface java.io.ObjectInput
//$ extends java.io.DataInput,java.lang.AutoCloseable

#include <java/io/DataInput.h>
#include <java/lang/Array.h>
#include <java/lang/AutoCloseable.h>

namespace java {
	namespace io {

class $import ObjectInput : public ::java::io::DataInput, public ::java::lang::AutoCloseable {
	$interface(ObjectInput, $NO_CLASS_INIT, ::java::io::DataInput, ::java::lang::AutoCloseable)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual int32_t available() {return 0;}
	virtual $Object* clone() override;
	virtual void close() override {}
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual int32_t read() {return 0;}
	virtual int32_t read($bytes* b) {return 0;}
	virtual int32_t read($bytes* b, int32_t off, int32_t len) {return 0;}
	virtual $Object* readObject() {return nullptr;}
	virtual int64_t skip(int64_t n) {return 0;}
	virtual $String* toString() override;
};

	} // io
} // java

#endif // _java_io_ObjectInput_h_