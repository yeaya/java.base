#ifndef _java_io_DataOutputStream_h_
#define _java_io_DataOutputStream_h_
//$ class java.io.DataOutputStream
//$ extends java.io.FilterOutputStream
//$ implements java.io.DataOutput

#include <java/io/DataOutput.h>
#include <java/io/FilterOutputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}

namespace java {
	namespace io {

class $import DataOutputStream : public ::java::io::FilterOutputStream, public ::java::io::DataOutput {
	$class(DataOutputStream, $PRELOAD | $NO_CLASS_INIT, ::java::io::FilterOutputStream, ::java::io::DataOutput)
public:
	DataOutputStream();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::io::OutputStream* out);
	virtual void flush() override;
	void incCount(int32_t value);
	int32_t size();
	virtual $String* toString() override;
	static $String* tooLongMsg($String* s, int32_t bits32);
	virtual void write($bytes* b) override;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	virtual void writeBoolean(bool v) override;
	virtual void writeByte(int32_t v) override;
	virtual void writeBytes($String* s) override;
	virtual void writeChar(int32_t v) override;
	virtual void writeChars($String* s) override;
	virtual void writeDouble(double v) override;
	virtual void writeFloat(float v) override;
	virtual void writeInt(int32_t v) override;
	virtual void writeLong(int64_t v) override;
	virtual void writeShort(int32_t v) override;
	virtual void writeUTF($String* str) override;
	static int32_t writeUTF($String* str, ::java::io::DataOutput* out);
	int32_t written = 0;
	$bytes* bytearr = nullptr;
	$bytes* writeBuffer = nullptr;
};

	} // io
} // java

#endif // _java_io_DataOutputStream_h_