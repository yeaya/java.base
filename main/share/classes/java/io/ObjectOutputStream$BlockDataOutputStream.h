#ifndef _java_io_ObjectOutputStream$BlockDataOutputStream_h_
#define _java_io_ObjectOutputStream$BlockDataOutputStream_h_
//$ class java.io.ObjectOutputStream$BlockDataOutputStream
//$ extends java.io.OutputStream
//$ implements java.io.DataOutput

#include <java/io/DataOutput.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>

#pragma push_macro("CHAR_BUF_SIZE")
#undef CHAR_BUF_SIZE
#pragma push_macro("MAX_BLOCK_SIZE")
#undef MAX_BLOCK_SIZE
#pragma push_macro("MAX_HEADER_SIZE")
#undef MAX_HEADER_SIZE

namespace java {
	namespace io {
		class DataOutputStream;
	}
}

namespace java {
	namespace io {

class ObjectOutputStream$BlockDataOutputStream : public ::java::io::OutputStream, public ::java::io::DataOutput {
	$class(ObjectOutputStream$BlockDataOutputStream, $NO_CLASS_INIT, ::java::io::OutputStream, ::java::io::DataOutput)
public:
	ObjectOutputStream$BlockDataOutputStream();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::io::OutputStream* out);
	virtual void close() override;
	virtual void drain();
	virtual void flush() override;
	virtual bool getBlockDataMode();
	virtual int64_t getUTFLength($String* s);
	virtual bool setBlockDataMode(bool mode);
	virtual $String* toString() override;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	virtual void write($bytes* b, int32_t off, int32_t len, bool copy);
	void writeBlockHeader(int32_t len);
	virtual void writeBoolean(bool v) override;
	virtual void writeBooleans($booleans* v, int32_t off, int32_t len);
	virtual void writeByte(int32_t v) override;
	virtual void writeBytes($String* s) override;
	virtual void writeChar(int32_t v) override;
	virtual void writeChars($String* s) override;
	virtual void writeChars($chars* v, int32_t off, int32_t len);
	virtual void writeDouble(double v) override;
	virtual void writeDoubles($doubles* v, int32_t off, int32_t len);
	virtual void writeFloat(float v) override;
	virtual void writeFloats($floats* v, int32_t off, int32_t len);
	virtual void writeInt(int32_t v) override;
	virtual void writeInts($ints* v, int32_t off, int32_t len);
	virtual void writeLong(int64_t v) override;
	virtual void writeLongUTF($String* s);
	virtual void writeLongUTF($String* s, int64_t utflen);
	virtual void writeLongs($longs* v, int32_t off, int32_t len);
	virtual void writeShort(int32_t v) override;
	virtual void writeShorts($shorts* v, int32_t off, int32_t len);
	virtual void writeUTF($String* s) override;
	virtual void writeUTF($String* s, int64_t utflen);
	void writeUTFBody($String* s);
	static const int32_t MAX_BLOCK_SIZE = 1024;
	static const int32_t MAX_HEADER_SIZE = 5;
	static const int32_t CHAR_BUF_SIZE = 256;
	$bytes* buf = nullptr;
	$bytes* hbuf = nullptr;
	$chars* cbuf = nullptr;
	bool blkmode = false;
	int32_t pos = 0;
	::java::io::OutputStream* out = nullptr;
	::java::io::DataOutputStream* dout = nullptr;
};

	} // io
} // java

#pragma pop_macro("CHAR_BUF_SIZE")
#pragma pop_macro("MAX_BLOCK_SIZE")
#pragma pop_macro("MAX_HEADER_SIZE")

#endif // _java_io_ObjectOutputStream$BlockDataOutputStream_h_