#ifndef _java_io_RandomAccessFile_h_
#define _java_io_RandomAccessFile_h_
//$ class java.io.RandomAccessFile
//$ extends java.io.DataOutput
//$ implements java.io.DataInput,java.io.Closeable

#include <java/io/Closeable.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutput.h>
#include <java/lang/Array.h>

#pragma push_macro("O_DSYNC")
#undef O_DSYNC
#pragma push_macro("O_RDONLY")
#undef O_RDONLY
#pragma push_macro("O_RDWR")
#undef O_RDWR
#pragma push_macro("O_SYNC")
#undef O_SYNC
#pragma push_macro("O_TEMPORARY")
#undef O_TEMPORARY

namespace java {
	namespace io {
		class File;
		class FileDescriptor;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class FileChannel;
		}
	}
}

namespace java {
	namespace io {

class $import RandomAccessFile : public ::java::io::DataOutput, public ::java::io::DataInput, public ::java::io::Closeable {
	$class(RandomAccessFile, 0, ::java::io::DataOutput, ::java::io::DataInput, ::java::io::Closeable)
public:
	RandomAccessFile();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* name, $String* mode);
	void init$(::java::io::File* file, $String* mode);
	void init$(::java::io::File* file, $String* mode, bool openAndDelete);
	virtual void close() override;
	::java::nio::channels::FileChannel* getChannel();
	::java::io::FileDescriptor* getFD();
	virtual int64_t getFilePointer();
	static void initIDs();
	virtual int64_t length();
	void open($String* name, int32_t mode);
	void open0($String* name, int32_t mode);
	virtual int32_t read();
	virtual int32_t read($bytes* b, int32_t off, int32_t len);
	virtual int32_t read($bytes* b);
	int32_t read0();
	virtual bool readBoolean() override;
	virtual int8_t readByte() override;
	int32_t readBytes($bytes* b, int32_t off, int32_t len);
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
	virtual int32_t readUnsignedByte() override;
	virtual int32_t readUnsignedShort() override;
	virtual void seek(int64_t pos);
	void seek0(int64_t pos);
	virtual void setLength(int64_t newLength);
	virtual int32_t skipBytes(int32_t n) override;
	virtual $String* toString() override;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	void write0(int32_t b);
	virtual void writeBoolean(bool v) override;
	virtual void writeByte(int32_t v) override;
	void writeBytes($bytes* b, int32_t off, int32_t len);
	virtual void writeBytes($String* s) override;
	virtual void writeChar(int32_t v) override;
	virtual void writeChars($String* s) override;
	virtual void writeDouble(double v) override;
	virtual void writeFloat(float v) override;
	virtual void writeInt(int32_t v) override;
	virtual void writeLong(int64_t v) override;
	virtual void writeShort(int32_t v) override;
	virtual void writeUTF($String* str) override;
	::java::io::FileDescriptor* fd = nullptr;
	$volatile(::java::nio::channels::FileChannel*) channel = nullptr;
	bool rw = false;
	$String* path = nullptr;
	$Object* closeLock = nullptr;
	$volatile(bool) closed = false;
	static const int32_t O_RDONLY = 1;
	static const int32_t O_RDWR = 2;
	static const int32_t O_SYNC = 4;
	static const int32_t O_DSYNC = 8;
	static const int32_t O_TEMPORARY = 16;
};

	} // io
} // java

#pragma pop_macro("O_DSYNC")
#pragma pop_macro("O_RDONLY")
#pragma pop_macro("O_RDWR")
#pragma pop_macro("O_SYNC")
#pragma pop_macro("O_TEMPORARY")

#endif // _java_io_RandomAccessFile_h_