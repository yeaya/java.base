#ifndef _java_io_DataInputStream_h_
#define _java_io_DataInputStream_h_
//$ class java.io.DataInputStream
//$ extends java.io.FilterInputStream
//$ implements java.io.DataInput

#include <java/io/DataInput.h>
#include <java/io/FilterInputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
	}
}

namespace java {
	namespace io {

class $import DataInputStream : public ::java::io::FilterInputStream, public ::java::io::DataInput {
	$class(DataInputStream, $NO_CLASS_INIT, ::java::io::FilterInputStream, ::java::io::DataInput)
public:
	DataInputStream();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::io::InputStream* in);
	using ::java::io::FilterInputStream::read;
	virtual int32_t read($bytes* b) override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual bool readBoolean() override;
	virtual int8_t readByte() override;
	virtual char16_t readChar() override;
	virtual double readDouble() override;
	virtual float readFloat() override;
	virtual void readFully($bytes* b) override;
	virtual void readFully($bytes* b, int32_t off, int32_t len) override;
	virtual int32_t readInt() override;
	virtual $String* readLine() override;
	virtual int64_t readLong() override;
	virtual int16_t readShort() override;
	virtual $String* readUTF() override;
	static $String* readUTF(::java::io::DataInput* in);
	virtual int32_t readUnsignedByte() override;
	virtual int32_t readUnsignedShort() override;
	virtual int32_t skipBytes(int32_t n) override;
	virtual $String* toString() override;
	$bytes* bytearr = nullptr;
	$chars* chararr = nullptr;
	$bytes* readBuffer = nullptr;
	$chars* lineBuffer = nullptr;
};

	} // io
} // java

#endif // _java_io_DataInputStream_h_