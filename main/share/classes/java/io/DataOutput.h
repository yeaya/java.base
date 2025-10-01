#ifndef _java_io_DataOutput_h_
#define _java_io_DataOutput_h_
//$ interface java.io.DataOutput
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {

class $export DataOutput : public ::java::lang::Object {
	$interface(DataOutput, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void write(int32_t b) {}
	virtual void write($bytes* b) {}
	virtual void write($bytes* b, int32_t off, int32_t len) {}
	virtual void writeBoolean(bool v) {}
	virtual void writeByte(int32_t v) {}
	virtual void writeBytes($String* s) {}
	virtual void writeChar(int32_t v) {}
	virtual void writeChars($String* s) {}
	virtual void writeDouble(double v) {}
	virtual void writeFloat(float v) {}
	virtual void writeInt(int32_t v) {}
	virtual void writeLong(int64_t v) {}
	virtual void writeShort(int32_t v) {}
	virtual void writeUTF($String* s) {}
};

	} // io
} // java

#endif // _java_io_DataOutput_h_