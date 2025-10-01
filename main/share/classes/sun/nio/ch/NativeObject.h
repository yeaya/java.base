#ifndef _sun_nio_ch_NativeObject_h_
#define _sun_nio_ch_NativeObject_h_
//$ class sun.nio.ch.NativeObject
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		class ByteOrder;
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class NativeObject : public ::java::lang::Object {
	$class(NativeObject, 0, ::java::lang::Object)
public:
	NativeObject();
	void init$(int64_t address);
	void init$(int64_t address, int64_t offset);
	void init$(int32_t size, bool pageAligned);
	virtual int64_t address();
	static int32_t addressSize();
	virtual int64_t allocationAddress();
	static ::java::nio::ByteOrder* byteOrder();
	int8_t getByte(int32_t offset);
	char16_t getChar(int32_t offset);
	double getDouble(int32_t offset);
	float getFloat(int32_t offset);
	int32_t getInt(int32_t offset);
	int64_t getLong(int32_t offset);
	virtual ::sun::nio::ch::NativeObject* getObject(int32_t offset);
	int16_t getShort(int32_t offset);
	static int32_t pageSize();
	void putByte(int32_t offset, int8_t value);
	void putChar(int32_t offset, char16_t value);
	void putDouble(int32_t offset, double value);
	void putFloat(int32_t offset, float value);
	void putInt(int32_t offset, int32_t value);
	void putLong(int32_t offset, int64_t value);
	virtual void putObject(int32_t offset, ::sun::nio::ch::NativeObject* ob);
	void putShort(int32_t offset, int16_t value);
	virtual ::sun::nio::ch::NativeObject* subObject(int32_t offset);
	static bool $assertionsDisabled;
	static ::jdk::internal::misc::Unsafe* unsafe;
	int64_t allocationAddress$ = 0;
	int64_t address$ = 0;
	static ::java::nio::ByteOrder* byteOrder$;
	static int32_t pageSize$;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_NativeObject_h_