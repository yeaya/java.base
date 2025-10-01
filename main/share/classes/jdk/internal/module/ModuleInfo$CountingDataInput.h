#ifndef _jdk_internal_module_ModuleInfo$CountingDataInput_h_
#define _jdk_internal_module_ModuleInfo$CountingDataInput_h_
//$ class jdk.internal.module.ModuleInfo$CountingDataInput
//$ extends java.io.DataInput

#include <java/io/DataInput.h>
#include <java/lang/Array.h>

namespace jdk {
	namespace internal {
		namespace module {

class ModuleInfo$CountingDataInput : public ::java::io::DataInput {
	$class(ModuleInfo$CountingDataInput, $NO_CLASS_INIT, ::java::io::DataInput)
public:
	ModuleInfo$CountingDataInput();
	void init$(::java::io::DataInput* delegate);
	virtual int64_t count();
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
	virtual int32_t readUnsignedByte() override;
	virtual int32_t readUnsignedShort() override;
	virtual int32_t skipBytes(int32_t n) override;
	::java::io::DataInput* delegate = nullptr;
	int64_t count$ = 0;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModuleInfo$CountingDataInput_h_