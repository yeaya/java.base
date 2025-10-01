#ifndef _java_io_ObjectInputStream$BlockDataInputStream_h_
#define _java_io_ObjectInputStream$BlockDataInputStream_h_
//$ class java.io.ObjectInputStream$BlockDataInputStream
//$ extends java.io.InputStream
//$ implements java.io.DataInput

#include <java/io/DataInput.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>

#pragma push_macro("CHAR_BUF_SIZE")
#undef CHAR_BUF_SIZE
#pragma push_macro("MAX_HEADER_SIZE")
#undef MAX_HEADER_SIZE
#pragma push_macro("MAX_BLOCK_SIZE")
#undef MAX_BLOCK_SIZE
#pragma push_macro("HEADER_BLOCKED")
#undef HEADER_BLOCKED

namespace java {
	namespace io {
		class DataInputStream;
		class ObjectInputStream;
		class ObjectInputStream$PeekInputStream;
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}

namespace java {
	namespace io {

class ObjectInputStream$BlockDataInputStream : public ::java::io::InputStream, public ::java::io::DataInput {
	$class(ObjectInputStream$BlockDataInputStream, $NO_CLASS_INIT, ::java::io::InputStream, ::java::io::DataInput)
public:
	ObjectInputStream$BlockDataInputStream();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::io::ObjectInputStream* this$0, ::java::io::InputStream* in);
	virtual int32_t available() override;
	virtual void close() override;
	virtual int32_t currentBlockRemaining();
	virtual bool getBlockDataMode();
	virtual int64_t getBytesRead();
	virtual int32_t peek();
	virtual int8_t peekByte();
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len, bool copy);
	int32_t readBlockHeader(bool canBlock);
	virtual bool readBoolean() override;
	virtual void readBooleans($booleans* v, int32_t off, int32_t len);
	virtual int8_t readByte() override;
	virtual char16_t readChar() override;
	virtual void readChars($chars* v, int32_t off, int32_t len);
	virtual double readDouble() override;
	virtual void readDoubles($doubles* v, int32_t off, int32_t len);
	virtual float readFloat() override;
	virtual void readFloats($floats* v, int32_t off, int32_t len);
	virtual void readFully($bytes* b) override;
	virtual void readFully($bytes* b, int32_t off, int32_t len) override;
	virtual void readFully($bytes* b, int32_t off, int32_t len, bool copy);
	virtual int32_t readInt() override;
	virtual void readInts($ints* v, int32_t off, int32_t len);
	virtual $String* readLine() override;
	virtual int64_t readLong() override;
	virtual $String* readLongUTF();
	virtual void readLongs($longs* v, int32_t off, int32_t len);
	virtual int16_t readShort() override;
	virtual void readShorts($shorts* v, int32_t off, int32_t len);
	virtual $String* readUTF() override;
	$String* readUTFBody(int64_t utflen);
	int32_t readUTFChar(::java::lang::StringBuilder* sbuf, int64_t utflen);
	int64_t readUTFSpan(::java::lang::StringBuilder* sbuf, int64_t utflen);
	virtual int32_t readUnsignedByte() override;
	virtual int32_t readUnsignedShort() override;
	void refill();
	virtual bool setBlockDataMode(bool newmode);
	virtual int64_t skip(int64_t len) override;
	virtual void skipBlockData();
	virtual int32_t skipBytes(int32_t n) override;
	virtual $String* toString() override;
	::java::io::ObjectInputStream* this$0 = nullptr;
	static const int32_t MAX_BLOCK_SIZE = 1024;
	static const int32_t MAX_HEADER_SIZE = 5;
	static const int32_t CHAR_BUF_SIZE = 256;
	static const int32_t HEADER_BLOCKED = (-2);
	$bytes* buf = nullptr;
	$bytes* hbuf = nullptr;
	$chars* cbuf = nullptr;
	bool blkmode = false;
	int32_t pos = 0;
	int32_t end = 0;
	int32_t unread = 0;
	::java::io::ObjectInputStream$PeekInputStream* in = nullptr;
	::java::io::DataInputStream* din = nullptr;
};

	} // io
} // java

#pragma pop_macro("CHAR_BUF_SIZE")
#pragma pop_macro("MAX_HEADER_SIZE")
#pragma pop_macro("MAX_BLOCK_SIZE")
#pragma pop_macro("HEADER_BLOCKED")

#endif // _java_io_ObjectInputStream$BlockDataInputStream_h_