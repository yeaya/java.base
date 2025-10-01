#ifndef _java_io_DataInput_h_
#define _java_io_DataInput_h_
//$ interface java.io.DataInput
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {

class $export DataInput : public ::java::lang::Object {
	$interface(DataInput, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool readBoolean() {return false;}
	virtual int8_t readByte() {return 0;}
	virtual char16_t readChar() {return 0;}
	virtual double readDouble() {return 0.0;}
	virtual float readFloat() {return 0.0;}
	virtual void readFully($bytes* b) {}
	virtual void readFully($bytes* b, int32_t off, int32_t len) {}
	virtual int32_t readInt() {return 0;}
	virtual $String* readLine() {return nullptr;}
	virtual int64_t readLong() {return 0;}
	virtual int16_t readShort() {return 0;}
	virtual $String* readUTF() {return nullptr;}
	virtual int32_t readUnsignedByte() {return 0;}
	virtual int32_t readUnsignedShort() {return 0;}
	virtual int32_t skipBytes(int32_t n) {return 0;}
};

	} // io
} // java

#endif // _java_io_DataInput_h_