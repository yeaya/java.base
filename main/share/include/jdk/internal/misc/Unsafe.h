#ifndef _jdk_internal_misc_Unsafe_h_
#define _jdk_internal_misc_Unsafe_h_
//$ class jdk.internal.misc.Unsafe
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ARRAY_BOOLEAN_BASE_OFFSET")
#undef ARRAY_BOOLEAN_BASE_OFFSET
#pragma push_macro("ARRAY_CHAR_BASE_OFFSET")
#undef ARRAY_CHAR_BASE_OFFSET
#pragma push_macro("ARRAY_SHORT_BASE_OFFSET")
#undef ARRAY_SHORT_BASE_OFFSET
#pragma push_macro("ARRAY_INT_BASE_OFFSET")
#undef ARRAY_INT_BASE_OFFSET
#pragma push_macro("INVALID_FIELD_OFFSET")
#undef INVALID_FIELD_OFFSET
#pragma push_macro("ARRAY_OBJECT_INDEX_SCALE")
#undef ARRAY_OBJECT_INDEX_SCALE
#pragma push_macro("ADDRESS_SIZE")
#undef ADDRESS_SIZE
#pragma push_macro("ARRAY_LONG_INDEX_SCALE")
#undef ARRAY_LONG_INDEX_SCALE
#pragma push_macro("ARRAY_FLOAT_INDEX_SCALE")
#undef ARRAY_FLOAT_INDEX_SCALE
#pragma push_macro("ARRAY_DOUBLE_INDEX_SCALE")
#undef ARRAY_DOUBLE_INDEX_SCALE
#pragma push_macro("ARRAY_FLOAT_BASE_OFFSET")
#undef ARRAY_FLOAT_BASE_OFFSET
#pragma push_macro("ARRAY_DOUBLE_BASE_OFFSET")
#undef ARRAY_DOUBLE_BASE_OFFSET
#pragma push_macro("ARRAY_BOOLEAN_INDEX_SCALE")
#undef ARRAY_BOOLEAN_INDEX_SCALE
#pragma push_macro("ARRAY_CHAR_INDEX_SCALE")
#undef ARRAY_CHAR_INDEX_SCALE
#pragma push_macro("ARRAY_INT_INDEX_SCALE")
#undef ARRAY_INT_INDEX_SCALE
#pragma push_macro("ARRAY_BYTE_INDEX_SCALE")
#undef ARRAY_BYTE_INDEX_SCALE
#pragma push_macro("ARRAY_LONG_BASE_OFFSET")
#undef ARRAY_LONG_BASE_OFFSET
#pragma push_macro("ARRAY_OBJECT_BASE_OFFSET")
#undef ARRAY_OBJECT_BASE_OFFSET
#pragma push_macro("ARRAY_SHORT_INDEX_SCALE")
#undef ARRAY_SHORT_INDEX_SCALE
#pragma push_macro("ARRAY_BYTE_BASE_OFFSET")
#undef ARRAY_BYTE_BASE_OFFSET

namespace java {
	namespace lang {
		class ClassLoader;
		class RuntimeException;
		class Throwable;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Field;
		}
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace security {
		class ProtectionDomain;
	}
}

namespace jdk {
	namespace internal {
		namespace misc {

class $import Unsafe : public ::java::lang::Object {
	$class(Unsafe, $PRELOAD, ::java::lang::Object)
public:
	Unsafe();
	void init$();
	int32_t addressSize();
	int64_t alignToHeapWordSize(int64_t bytes);
	$Object* allocateInstance($Class* cls);
	int64_t allocateMemory(int64_t bytes);
	int64_t allocateMemory0(int64_t bytes);
	void allocateMemoryChecks(int64_t bytes);
	$Object* allocateUninitializedArray($Class* componentType, int32_t length);
	$Object* allocateUninitializedArray0($Class* componentType, int32_t length);
	int32_t arrayBaseOffset($Class* arrayClass);
	int32_t arrayBaseOffset0($Class* arrayClass);
	int32_t arrayIndexScale($Class* arrayClass);
	int32_t arrayIndexScale0($Class* arrayClass);
	int8_t bool2byte(bool b);
	bool byte2bool(int8_t b);
	int16_t c2s(char16_t s);
	void checkNativeAddress(int64_t address);
	void checkOffset(Object$* o, int64_t offset);
	void checkPointer(Object$* o, int64_t offset);
	void checkPrimitiveArray($Class* c);
	void checkPrimitivePointer(Object$* o, int64_t offset);
	void checkSize(int64_t size);
	void checkWritebackEnabled();
	void checkWritebackMemory(int64_t address, int64_t length);
	bool compareAndExchangeBoolean(Object$* o, int64_t offset, bool expected, bool x);
	bool compareAndExchangeBooleanAcquire(Object$* o, int64_t offset, bool expected, bool x);
	bool compareAndExchangeBooleanRelease(Object$* o, int64_t offset, bool expected, bool x);
	int8_t compareAndExchangeByte(Object$* o, int64_t offset, int8_t expected, int8_t x);
	int8_t compareAndExchangeByteAcquire(Object$* o, int64_t offset, int8_t expected, int8_t x);
	int8_t compareAndExchangeByteRelease(Object$* o, int64_t offset, int8_t expected, int8_t x);
	char16_t compareAndExchangeChar(Object$* o, int64_t offset, char16_t expected, char16_t x);
	char16_t compareAndExchangeCharAcquire(Object$* o, int64_t offset, char16_t expected, char16_t x);
	char16_t compareAndExchangeCharRelease(Object$* o, int64_t offset, char16_t expected, char16_t x);
	double compareAndExchangeDouble(Object$* o, int64_t offset, double expected, double x);
	double compareAndExchangeDoubleAcquire(Object$* o, int64_t offset, double expected, double x);
	double compareAndExchangeDoubleRelease(Object$* o, int64_t offset, double expected, double x);
	float compareAndExchangeFloat(Object$* o, int64_t offset, float expected, float x);
	float compareAndExchangeFloatAcquire(Object$* o, int64_t offset, float expected, float x);
	float compareAndExchangeFloatRelease(Object$* o, int64_t offset, float expected, float x);
	int32_t compareAndExchangeInt(Object$* o, int64_t offset, int32_t expected, int32_t x);
	int32_t compareAndExchangeIntAcquire(Object$* o, int64_t offset, int32_t expected, int32_t x);
	int32_t compareAndExchangeIntRelease(Object$* o, int64_t offset, int32_t expected, int32_t x);
	int64_t compareAndExchangeLong(Object$* o, int64_t offset, int64_t expected, int64_t x);
	int64_t compareAndExchangeLongAcquire(Object$* o, int64_t offset, int64_t expected, int64_t x);
	int64_t compareAndExchangeLongRelease(Object$* o, int64_t offset, int64_t expected, int64_t x);
	$Object* compareAndExchangeObject(Object$* o, int64_t offset, Object$* expected, Object$* x);
	$Object* compareAndExchangeObjectAcquire(Object$* o, int64_t offset, Object$* expected, Object$* x);
	$Object* compareAndExchangeObjectRelease(Object$* o, int64_t offset, Object$* expected, Object$* x);
	$Object* compareAndExchangeReference(Object$* o, int64_t offset, Object$* expected, Object$* x);
	$Object* compareAndExchangeReferenceAcquire(Object$* o, int64_t offset, Object$* expected, Object$* x);
	$Object* compareAndExchangeReferenceRelease(Object$* o, int64_t offset, Object$* expected, Object$* x);
	int16_t compareAndExchangeShort(Object$* o, int64_t offset, int16_t expected, int16_t x);
	int16_t compareAndExchangeShortAcquire(Object$* o, int64_t offset, int16_t expected, int16_t x);
	int16_t compareAndExchangeShortRelease(Object$* o, int64_t offset, int16_t expected, int16_t x);
	bool compareAndSetBoolean(Object$* o, int64_t offset, bool expected, bool x);
	bool compareAndSetByte(Object$* o, int64_t offset, int8_t expected, int8_t x);
	bool compareAndSetChar(Object$* o, int64_t offset, char16_t expected, char16_t x);
	bool compareAndSetDouble(Object$* o, int64_t offset, double expected, double x);
	bool compareAndSetFloat(Object$* o, int64_t offset, float expected, float x);
	bool compareAndSetInt(Object$* o, int64_t offset, int32_t expected, int32_t x);
	bool compareAndSetLong(Object$* o, int64_t offset, int64_t expected, int64_t x);
	bool compareAndSetObject(Object$* o, int64_t offset, Object$* expected, Object$* x);
	bool compareAndSetReference(Object$* o, int64_t offset, Object$* expected, Object$* x);
	bool compareAndSetShort(Object$* o, int64_t offset, int16_t expected, int16_t x);
	static char16_t convEndian(bool big, char16_t n);
	static int16_t convEndian(bool big, int16_t n);
	static int32_t convEndian(bool big, int32_t n);
	static int64_t convEndian(bool big, int64_t n);
	void copyMemory(Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes);
	void copyMemory(int64_t srcAddress, int64_t destAddress, int64_t bytes);
	void copyMemory0(Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes);
	void copyMemoryChecks(Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes);
	void copySwapMemory(Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes, int64_t elemSize);
	void copySwapMemory(int64_t srcAddress, int64_t destAddress, int64_t bytes, int64_t elemSize);
	void copySwapMemory0(Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes, int64_t elemSize);
	void copySwapMemoryChecks(Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes, int64_t elemSize);
	int64_t dataCacheLineAlignDown(int64_t address);
	int32_t dataCacheLineFlushSize();
	$Class* defineClass($String* name, $bytes* b, int32_t off, int32_t len, ::java::lang::ClassLoader* loader, ::java::security::ProtectionDomain* protectionDomain);
	$Class* defineClass0($String* name, $bytes* b, int32_t off, int32_t len, ::java::lang::ClassLoader* loader, ::java::security::ProtectionDomain* protectionDomain);
	void ensureClassInitialized($Class* c);
	void ensureClassInitialized0($Class* c);
	void freeMemory(int64_t address);
	void freeMemory0(int64_t address);
	void freeMemoryChecks(int64_t address);
	void fullFence();
	int64_t getAddress(Object$* o, int64_t offset);
	int64_t getAddress(int64_t address);
	int8_t getAndAddByte(Object$* o, int64_t offset, int8_t delta);
	int8_t getAndAddByteAcquire(Object$* o, int64_t offset, int8_t delta);
	int8_t getAndAddByteRelease(Object$* o, int64_t offset, int8_t delta);
	char16_t getAndAddChar(Object$* o, int64_t offset, char16_t delta);
	char16_t getAndAddCharAcquire(Object$* o, int64_t offset, char16_t delta);
	char16_t getAndAddCharRelease(Object$* o, int64_t offset, char16_t delta);
	double getAndAddDouble(Object$* o, int64_t offset, double delta);
	double getAndAddDoubleAcquire(Object$* o, int64_t offset, double delta);
	double getAndAddDoubleRelease(Object$* o, int64_t offset, double delta);
	float getAndAddFloat(Object$* o, int64_t offset, float delta);
	float getAndAddFloatAcquire(Object$* o, int64_t offset, float delta);
	float getAndAddFloatRelease(Object$* o, int64_t offset, float delta);
	int32_t getAndAddInt(Object$* o, int64_t offset, int32_t delta);
	int32_t getAndAddIntAcquire(Object$* o, int64_t offset, int32_t delta);
	int32_t getAndAddIntRelease(Object$* o, int64_t offset, int32_t delta);
	int64_t getAndAddLong(Object$* o, int64_t offset, int64_t delta);
	int64_t getAndAddLongAcquire(Object$* o, int64_t offset, int64_t delta);
	int64_t getAndAddLongRelease(Object$* o, int64_t offset, int64_t delta);
	int16_t getAndAddShort(Object$* o, int64_t offset, int16_t delta);
	int16_t getAndAddShortAcquire(Object$* o, int64_t offset, int16_t delta);
	int16_t getAndAddShortRelease(Object$* o, int64_t offset, int16_t delta);
	bool getAndBitwiseAndBoolean(Object$* o, int64_t offset, bool mask);
	bool getAndBitwiseAndBooleanAcquire(Object$* o, int64_t offset, bool mask);
	bool getAndBitwiseAndBooleanRelease(Object$* o, int64_t offset, bool mask);
	int8_t getAndBitwiseAndByte(Object$* o, int64_t offset, int8_t mask);
	int8_t getAndBitwiseAndByteAcquire(Object$* o, int64_t offset, int8_t mask);
	int8_t getAndBitwiseAndByteRelease(Object$* o, int64_t offset, int8_t mask);
	char16_t getAndBitwiseAndChar(Object$* o, int64_t offset, char16_t mask);
	char16_t getAndBitwiseAndCharAcquire(Object$* o, int64_t offset, char16_t mask);
	char16_t getAndBitwiseAndCharRelease(Object$* o, int64_t offset, char16_t mask);
	int32_t getAndBitwiseAndInt(Object$* o, int64_t offset, int32_t mask);
	int32_t getAndBitwiseAndIntAcquire(Object$* o, int64_t offset, int32_t mask);
	int32_t getAndBitwiseAndIntRelease(Object$* o, int64_t offset, int32_t mask);
	int64_t getAndBitwiseAndLong(Object$* o, int64_t offset, int64_t mask);
	int64_t getAndBitwiseAndLongAcquire(Object$* o, int64_t offset, int64_t mask);
	int64_t getAndBitwiseAndLongRelease(Object$* o, int64_t offset, int64_t mask);
	int16_t getAndBitwiseAndShort(Object$* o, int64_t offset, int16_t mask);
	int16_t getAndBitwiseAndShortAcquire(Object$* o, int64_t offset, int16_t mask);
	int16_t getAndBitwiseAndShortRelease(Object$* o, int64_t offset, int16_t mask);
	bool getAndBitwiseOrBoolean(Object$* o, int64_t offset, bool mask);
	bool getAndBitwiseOrBooleanAcquire(Object$* o, int64_t offset, bool mask);
	bool getAndBitwiseOrBooleanRelease(Object$* o, int64_t offset, bool mask);
	int8_t getAndBitwiseOrByte(Object$* o, int64_t offset, int8_t mask);
	int8_t getAndBitwiseOrByteAcquire(Object$* o, int64_t offset, int8_t mask);
	int8_t getAndBitwiseOrByteRelease(Object$* o, int64_t offset, int8_t mask);
	char16_t getAndBitwiseOrChar(Object$* o, int64_t offset, char16_t mask);
	char16_t getAndBitwiseOrCharAcquire(Object$* o, int64_t offset, char16_t mask);
	char16_t getAndBitwiseOrCharRelease(Object$* o, int64_t offset, char16_t mask);
	int32_t getAndBitwiseOrInt(Object$* o, int64_t offset, int32_t mask);
	int32_t getAndBitwiseOrIntAcquire(Object$* o, int64_t offset, int32_t mask);
	int32_t getAndBitwiseOrIntRelease(Object$* o, int64_t offset, int32_t mask);
	int64_t getAndBitwiseOrLong(Object$* o, int64_t offset, int64_t mask);
	int64_t getAndBitwiseOrLongAcquire(Object$* o, int64_t offset, int64_t mask);
	int64_t getAndBitwiseOrLongRelease(Object$* o, int64_t offset, int64_t mask);
	int16_t getAndBitwiseOrShort(Object$* o, int64_t offset, int16_t mask);
	int16_t getAndBitwiseOrShortAcquire(Object$* o, int64_t offset, int16_t mask);
	int16_t getAndBitwiseOrShortRelease(Object$* o, int64_t offset, int16_t mask);
	bool getAndBitwiseXorBoolean(Object$* o, int64_t offset, bool mask);
	bool getAndBitwiseXorBooleanAcquire(Object$* o, int64_t offset, bool mask);
	bool getAndBitwiseXorBooleanRelease(Object$* o, int64_t offset, bool mask);
	int8_t getAndBitwiseXorByte(Object$* o, int64_t offset, int8_t mask);
	int8_t getAndBitwiseXorByteAcquire(Object$* o, int64_t offset, int8_t mask);
	int8_t getAndBitwiseXorByteRelease(Object$* o, int64_t offset, int8_t mask);
	char16_t getAndBitwiseXorChar(Object$* o, int64_t offset, char16_t mask);
	char16_t getAndBitwiseXorCharAcquire(Object$* o, int64_t offset, char16_t mask);
	char16_t getAndBitwiseXorCharRelease(Object$* o, int64_t offset, char16_t mask);
	int32_t getAndBitwiseXorInt(Object$* o, int64_t offset, int32_t mask);
	int32_t getAndBitwiseXorIntAcquire(Object$* o, int64_t offset, int32_t mask);
	int32_t getAndBitwiseXorIntRelease(Object$* o, int64_t offset, int32_t mask);
	int64_t getAndBitwiseXorLong(Object$* o, int64_t offset, int64_t mask);
	int64_t getAndBitwiseXorLongAcquire(Object$* o, int64_t offset, int64_t mask);
	int64_t getAndBitwiseXorLongRelease(Object$* o, int64_t offset, int64_t mask);
	int16_t getAndBitwiseXorShort(Object$* o, int64_t offset, int16_t mask);
	int16_t getAndBitwiseXorShortAcquire(Object$* o, int64_t offset, int16_t mask);
	int16_t getAndBitwiseXorShortRelease(Object$* o, int64_t offset, int16_t mask);
	bool getAndSetBoolean(Object$* o, int64_t offset, bool newValue);
	bool getAndSetBooleanAcquire(Object$* o, int64_t offset, bool newValue);
	bool getAndSetBooleanRelease(Object$* o, int64_t offset, bool newValue);
	int8_t getAndSetByte(Object$* o, int64_t offset, int8_t newValue);
	int8_t getAndSetByteAcquire(Object$* o, int64_t offset, int8_t newValue);
	int8_t getAndSetByteRelease(Object$* o, int64_t offset, int8_t newValue);
	char16_t getAndSetChar(Object$* o, int64_t offset, char16_t newValue);
	char16_t getAndSetCharAcquire(Object$* o, int64_t offset, char16_t newValue);
	char16_t getAndSetCharRelease(Object$* o, int64_t offset, char16_t newValue);
	double getAndSetDouble(Object$* o, int64_t offset, double newValue);
	double getAndSetDoubleAcquire(Object$* o, int64_t offset, double newValue);
	double getAndSetDoubleRelease(Object$* o, int64_t offset, double newValue);
	float getAndSetFloat(Object$* o, int64_t offset, float newValue);
	float getAndSetFloatAcquire(Object$* o, int64_t offset, float newValue);
	float getAndSetFloatRelease(Object$* o, int64_t offset, float newValue);
	int32_t getAndSetInt(Object$* o, int64_t offset, int32_t newValue);
	int32_t getAndSetIntAcquire(Object$* o, int64_t offset, int32_t newValue);
	int32_t getAndSetIntRelease(Object$* o, int64_t offset, int32_t newValue);
	int64_t getAndSetLong(Object$* o, int64_t offset, int64_t newValue);
	int64_t getAndSetLongAcquire(Object$* o, int64_t offset, int64_t newValue);
	int64_t getAndSetLongRelease(Object$* o, int64_t offset, int64_t newValue);
	$Object* getAndSetObject(Object$* o, int64_t offset, Object$* newValue);
	$Object* getAndSetObjectAcquire(Object$* o, int64_t offset, Object$* newValue);
	$Object* getAndSetObjectRelease(Object$* o, int64_t offset, Object$* newValue);
	$Object* getAndSetReference(Object$* o, int64_t offset, Object$* newValue);
	$Object* getAndSetReferenceAcquire(Object$* o, int64_t offset, Object$* newValue);
	$Object* getAndSetReferenceRelease(Object$* o, int64_t offset, Object$* newValue);
	int16_t getAndSetShort(Object$* o, int64_t offset, int16_t newValue);
	int16_t getAndSetShortAcquire(Object$* o, int64_t offset, int16_t newValue);
	int16_t getAndSetShortRelease(Object$* o, int64_t offset, int16_t newValue);
	bool getBoolean(Object$* o, int64_t offset);
	bool getBooleanAcquire(Object$* o, int64_t offset);
	bool getBooleanOpaque(Object$* o, int64_t offset);
	bool getBooleanVolatile(Object$* o, int64_t offset);
	int8_t getByte(Object$* o, int64_t offset);
	int8_t getByte(int64_t address);
	int8_t getByteAcquire(Object$* o, int64_t offset);
	int8_t getByteOpaque(Object$* o, int64_t offset);
	int8_t getByteVolatile(Object$* o, int64_t offset);
	char16_t getChar(Object$* o, int64_t offset);
	char16_t getChar(int64_t address);
	char16_t getCharAcquire(Object$* o, int64_t offset);
	char16_t getCharOpaque(Object$* o, int64_t offset);
	char16_t getCharUnaligned(Object$* o, int64_t offset);
	char16_t getCharUnaligned(Object$* o, int64_t offset, bool bigEndian);
	char16_t getCharVolatile(Object$* o, int64_t offset);
	double getDouble(Object$* o, int64_t offset);
	double getDouble(int64_t address);
	double getDoubleAcquire(Object$* o, int64_t offset);
	double getDoubleOpaque(Object$* o, int64_t offset);
	double getDoubleVolatile(Object$* o, int64_t offset);
	float getFloat(Object$* o, int64_t offset);
	float getFloat(int64_t address);
	float getFloatAcquire(Object$* o, int64_t offset);
	float getFloatOpaque(Object$* o, int64_t offset);
	float getFloatVolatile(Object$* o, int64_t offset);
	int32_t getInt(Object$* o, int64_t offset);
	int32_t getInt(int64_t address);
	int32_t getIntAcquire(Object$* o, int64_t offset);
	int32_t getIntOpaque(Object$* o, int64_t offset);
	int32_t getIntUnaligned(Object$* o, int64_t offset);
	int32_t getIntUnaligned(Object$* o, int64_t offset, bool bigEndian);
	int32_t getIntVolatile(Object$* o, int64_t offset);
	int32_t getLoadAverage($doubles* loadavg, int32_t nelems);
	int32_t getLoadAverage0($doubles* loadavg, int32_t nelems);
	int64_t getLong(Object$* o, int64_t offset);
	int64_t getLong(int64_t address);
	int64_t getLongAcquire(Object$* o, int64_t offset);
	int64_t getLongOpaque(Object$* o, int64_t offset);
	int64_t getLongUnaligned(Object$* o, int64_t offset);
	int64_t getLongUnaligned(Object$* o, int64_t offset, bool bigEndian);
	int64_t getLongVolatile(Object$* o, int64_t offset);
	$Object* getObject(Object$* o, int64_t offset);
	$Object* getObjectAcquire(Object$* o, int64_t offset);
	$Object* getObjectOpaque(Object$* o, int64_t offset);
	$Object* getObjectVolatile(Object$* o, int64_t offset);
	$Object* getReference(Object$* o, int64_t offset);
	$Object* getReferenceAcquire(Object$* o, int64_t offset);
	$Object* getReferenceOpaque(Object$* o, int64_t offset);
	$Object* getReferenceVolatile(Object$* o, int64_t offset);
	int16_t getShort(Object$* o, int64_t offset);
	int16_t getShort(int64_t address);
	int16_t getShortAcquire(Object$* o, int64_t offset);
	int16_t getShortOpaque(Object$* o, int64_t offset);
	int16_t getShortUnaligned(Object$* o, int64_t offset);
	int16_t getShortUnaligned(Object$* o, int64_t offset, bool bigEndian);
	int16_t getShortVolatile(Object$* o, int64_t offset);
	$Object* getUncompressedObject(int64_t address);
	static ::jdk::internal::misc::Unsafe* getUnsafe();
	::java::lang::RuntimeException* invalidInput();
	void invokeCleaner(::java::nio::ByteBuffer* directBuffer);
	bool is32BitClean(int64_t value);
	bool isBigEndian();
	static bool isWritebackEnabled();
	void loadFence();
	void loadLoadFence();
	static int32_t makeInt(int16_t i0, int16_t i1);
	static int32_t makeInt(int8_t i0, int8_t i1, int8_t i2, int8_t i3);
	static int64_t makeLong(int8_t i0, int8_t i1, int8_t i2, int8_t i3, int8_t i4, int8_t i5, int8_t i6, int8_t i7);
	static int64_t makeLong(int16_t i0, int16_t i1, int16_t i2, int16_t i3);
	static int64_t makeLong(int32_t i0, int32_t i1);
	static int16_t makeShort(int8_t i0, int8_t i1);
	int64_t objectFieldOffset(::java::lang::reflect::Field* f);
	int64_t objectFieldOffset($Class* c, $String* name);
	int64_t objectFieldOffset0(::java::lang::reflect::Field* f);
	int64_t objectFieldOffset1($Class* c, $String* name);
	int32_t pageSize();
	void park(bool isAbsolute, int64_t time);
	static int8_t pick(int8_t le, int8_t be);
	static int16_t pick(int16_t le, int16_t be);
	static int32_t pick(int32_t le, int32_t be);
	static int32_t pickPos(int32_t top, int32_t pos);
	void putAddress(Object$* o, int64_t offset, int64_t x);
	void putAddress(int64_t address, int64_t x);
	void putBoolean(Object$* o, int64_t offset, bool x);
	void putBooleanOpaque(Object$* o, int64_t offset, bool x);
	void putBooleanRelease(Object$* o, int64_t offset, bool x);
	void putBooleanVolatile(Object$* o, int64_t offset, bool x);
	void putByte(Object$* o, int64_t offset, int8_t x);
	void putByte(int64_t address, int8_t x);
	void putByteOpaque(Object$* o, int64_t offset, int8_t x);
	void putByteRelease(Object$* o, int64_t offset, int8_t x);
	void putByteVolatile(Object$* o, int64_t offset, int8_t x);
	void putChar(Object$* o, int64_t offset, char16_t x);
	void putChar(int64_t address, char16_t x);
	void putCharOpaque(Object$* o, int64_t offset, char16_t x);
	void putCharRelease(Object$* o, int64_t offset, char16_t x);
	void putCharUnaligned(Object$* o, int64_t offset, char16_t x);
	void putCharUnaligned(Object$* o, int64_t offset, char16_t x, bool bigEndian);
	void putCharVolatile(Object$* o, int64_t offset, char16_t x);
	void putDouble(Object$* o, int64_t offset, double x);
	void putDouble(int64_t address, double x);
	void putDoubleOpaque(Object$* o, int64_t offset, double x);
	void putDoubleRelease(Object$* o, int64_t offset, double x);
	void putDoubleVolatile(Object$* o, int64_t offset, double x);
	void putFloat(Object$* o, int64_t offset, float x);
	void putFloat(int64_t address, float x);
	void putFloatOpaque(Object$* o, int64_t offset, float x);
	void putFloatRelease(Object$* o, int64_t offset, float x);
	void putFloatVolatile(Object$* o, int64_t offset, float x);
	void putInt(Object$* o, int64_t offset, int32_t x);
	void putInt(int64_t address, int32_t x);
	void putIntOpaque(Object$* o, int64_t offset, int32_t x);
	void putIntParts(Object$* o, int64_t offset, int16_t i0, int16_t i1);
	void putIntParts(Object$* o, int64_t offset, int8_t i0, int8_t i1, int8_t i2, int8_t i3);
	void putIntRelease(Object$* o, int64_t offset, int32_t x);
	void putIntUnaligned(Object$* o, int64_t offset, int32_t x);
	void putIntUnaligned(Object$* o, int64_t offset, int32_t x, bool bigEndian);
	void putIntVolatile(Object$* o, int64_t offset, int32_t x);
	void putLong(Object$* o, int64_t offset, int64_t x);
	void putLong(int64_t address, int64_t x);
	void putLongOpaque(Object$* o, int64_t offset, int64_t x);
	void putLongParts(Object$* o, int64_t offset, int8_t i0, int8_t i1, int8_t i2, int8_t i3, int8_t i4, int8_t i5, int8_t i6, int8_t i7);
	void putLongParts(Object$* o, int64_t offset, int16_t i0, int16_t i1, int16_t i2, int16_t i3);
	void putLongParts(Object$* o, int64_t offset, int32_t i0, int32_t i1);
	void putLongRelease(Object$* o, int64_t offset, int64_t x);
	void putLongUnaligned(Object$* o, int64_t offset, int64_t x);
	void putLongUnaligned(Object$* o, int64_t offset, int64_t x, bool bigEndian);
	void putLongVolatile(Object$* o, int64_t offset, int64_t x);
	void putObject(Object$* o, int64_t offset, Object$* x);
	void putObjectOpaque(Object$* o, int64_t offset, Object$* x);
	void putObjectRelease(Object$* o, int64_t offset, Object$* x);
	void putObjectVolatile(Object$* o, int64_t offset, Object$* x);
	void putReference(Object$* o, int64_t offset, Object$* x);
	void putReferenceOpaque(Object$* o, int64_t offset, Object$* x);
	void putReferenceRelease(Object$* o, int64_t offset, Object$* x);
	void putReferenceVolatile(Object$* o, int64_t offset, Object$* x);
	void putShort(Object$* o, int64_t offset, int16_t x);
	void putShort(int64_t address, int16_t x);
	void putShortOpaque(Object$* o, int64_t offset, int16_t x);
	void putShortParts(Object$* o, int64_t offset, int8_t i0, int8_t i1);
	void putShortRelease(Object$* o, int64_t offset, int16_t x);
	void putShortUnaligned(Object$* o, int64_t offset, int16_t x);
	void putShortUnaligned(Object$* o, int64_t offset, int16_t x, bool bigEndian);
	void putShortVolatile(Object$* o, int64_t offset, int16_t x);
	int64_t reallocateMemory(int64_t address, int64_t bytes);
	int64_t reallocateMemory0(int64_t address, int64_t bytes);
	void reallocateMemoryChecks(int64_t address, int64_t bytes);
	static void registerNatives();
	char16_t s2c(int16_t s);
	void setMemory(Object$* o, int64_t offset, int64_t bytes, int8_t value);
	void setMemory(int64_t address, int64_t bytes, int8_t value);
	void setMemory0(Object$* o, int64_t offset, int64_t bytes, int8_t value);
	void setMemoryChecks(Object$* o, int64_t offset, int64_t bytes, int8_t value);
	bool shouldBeInitialized($Class* c);
	bool shouldBeInitialized0($Class* c);
	$Object* staticFieldBase(::java::lang::reflect::Field* f);
	$Object* staticFieldBase0(::java::lang::reflect::Field* f);
	int64_t staticFieldOffset(::java::lang::reflect::Field* f);
	int64_t staticFieldOffset0(::java::lang::reflect::Field* f);
	void storeFence();
	void storeStoreFence();
	void throwException($Throwable* ee);
	static void throwIllegalAccessError();
	static void throwNoSuchMethodError();
	static int32_t toUnsignedInt(int8_t n);
	static int32_t toUnsignedInt(int16_t n);
	static int64_t toUnsignedLong(int8_t n);
	static int64_t toUnsignedLong(int16_t n);
	static int64_t toUnsignedLong(int32_t n);
	bool unalignedAccess();
	void unpark(Object$* thread);
	bool weakCompareAndSetBoolean(Object$* o, int64_t offset, bool expected, bool x);
	bool weakCompareAndSetBooleanAcquire(Object$* o, int64_t offset, bool expected, bool x);
	bool weakCompareAndSetBooleanPlain(Object$* o, int64_t offset, bool expected, bool x);
	bool weakCompareAndSetBooleanRelease(Object$* o, int64_t offset, bool expected, bool x);
	bool weakCompareAndSetByte(Object$* o, int64_t offset, int8_t expected, int8_t x);
	bool weakCompareAndSetByteAcquire(Object$* o, int64_t offset, int8_t expected, int8_t x);
	bool weakCompareAndSetBytePlain(Object$* o, int64_t offset, int8_t expected, int8_t x);
	bool weakCompareAndSetByteRelease(Object$* o, int64_t offset, int8_t expected, int8_t x);
	bool weakCompareAndSetChar(Object$* o, int64_t offset, char16_t expected, char16_t x);
	bool weakCompareAndSetCharAcquire(Object$* o, int64_t offset, char16_t expected, char16_t x);
	bool weakCompareAndSetCharPlain(Object$* o, int64_t offset, char16_t expected, char16_t x);
	bool weakCompareAndSetCharRelease(Object$* o, int64_t offset, char16_t expected, char16_t x);
	bool weakCompareAndSetDouble(Object$* o, int64_t offset, double expected, double x);
	bool weakCompareAndSetDoubleAcquire(Object$* o, int64_t offset, double expected, double x);
	bool weakCompareAndSetDoublePlain(Object$* o, int64_t offset, double expected, double x);
	bool weakCompareAndSetDoubleRelease(Object$* o, int64_t offset, double expected, double x);
	bool weakCompareAndSetFloat(Object$* o, int64_t offset, float expected, float x);
	bool weakCompareAndSetFloatAcquire(Object$* o, int64_t offset, float expected, float x);
	bool weakCompareAndSetFloatPlain(Object$* o, int64_t offset, float expected, float x);
	bool weakCompareAndSetFloatRelease(Object$* o, int64_t offset, float expected, float x);
	bool weakCompareAndSetInt(Object$* o, int64_t offset, int32_t expected, int32_t x);
	bool weakCompareAndSetIntAcquire(Object$* o, int64_t offset, int32_t expected, int32_t x);
	bool weakCompareAndSetIntPlain(Object$* o, int64_t offset, int32_t expected, int32_t x);
	bool weakCompareAndSetIntRelease(Object$* o, int64_t offset, int32_t expected, int32_t x);
	bool weakCompareAndSetLong(Object$* o, int64_t offset, int64_t expected, int64_t x);
	bool weakCompareAndSetLongAcquire(Object$* o, int64_t offset, int64_t expected, int64_t x);
	bool weakCompareAndSetLongPlain(Object$* o, int64_t offset, int64_t expected, int64_t x);
	bool weakCompareAndSetLongRelease(Object$* o, int64_t offset, int64_t expected, int64_t x);
	bool weakCompareAndSetObject(Object$* o, int64_t offset, Object$* expected, Object$* x);
	bool weakCompareAndSetObjectAcquire(Object$* o, int64_t offset, Object$* expected, Object$* x);
	bool weakCompareAndSetObjectPlain(Object$* o, int64_t offset, Object$* expected, Object$* x);
	bool weakCompareAndSetObjectRelease(Object$* o, int64_t offset, Object$* expected, Object$* x);
	bool weakCompareAndSetReference(Object$* o, int64_t offset, Object$* expected, Object$* x);
	bool weakCompareAndSetReferenceAcquire(Object$* o, int64_t offset, Object$* expected, Object$* x);
	bool weakCompareAndSetReferencePlain(Object$* o, int64_t offset, Object$* expected, Object$* x);
	bool weakCompareAndSetReferenceRelease(Object$* o, int64_t offset, Object$* expected, Object$* x);
	bool weakCompareAndSetShort(Object$* o, int64_t offset, int16_t expected, int16_t x);
	bool weakCompareAndSetShortAcquire(Object$* o, int64_t offset, int16_t expected, int16_t x);
	bool weakCompareAndSetShortPlain(Object$* o, int64_t offset, int16_t expected, int16_t x);
	bool weakCompareAndSetShortRelease(Object$* o, int64_t offset, int16_t expected, int16_t x);
	void writeback0(int64_t address);
	void writebackMemory(int64_t address, int64_t length);
	void writebackPostSync0();
	void writebackPreSync0();
	static ::jdk::internal::misc::Unsafe* theUnsafe;
	static const int32_t INVALID_FIELD_OFFSET = (-1);
	static int32_t ARRAY_BOOLEAN_BASE_OFFSET;
	static int32_t ARRAY_BYTE_BASE_OFFSET;
	static int32_t ARRAY_SHORT_BASE_OFFSET;
	static int32_t ARRAY_CHAR_BASE_OFFSET;
	static int32_t ARRAY_INT_BASE_OFFSET;
	static int32_t ARRAY_LONG_BASE_OFFSET;
	static int32_t ARRAY_FLOAT_BASE_OFFSET;
	static int32_t ARRAY_DOUBLE_BASE_OFFSET;
	static int32_t ARRAY_OBJECT_BASE_OFFSET;
	static int32_t ARRAY_BOOLEAN_INDEX_SCALE;
	static int32_t ARRAY_BYTE_INDEX_SCALE;
	static int32_t ARRAY_SHORT_INDEX_SCALE;
	static int32_t ARRAY_CHAR_INDEX_SCALE;
	static int32_t ARRAY_INT_INDEX_SCALE;
	static int32_t ARRAY_LONG_INDEX_SCALE;
	static int32_t ARRAY_FLOAT_INDEX_SCALE;
	static int32_t ARRAY_DOUBLE_INDEX_SCALE;
	static int32_t ARRAY_OBJECT_INDEX_SCALE;
	static int32_t ADDRESS_SIZE;
};

		} // misc
	} // internal
} // jdk

#pragma pop_macro("ARRAY_BOOLEAN_BASE_OFFSET")
#pragma pop_macro("ARRAY_CHAR_BASE_OFFSET")
#pragma pop_macro("ARRAY_SHORT_BASE_OFFSET")
#pragma pop_macro("ARRAY_INT_BASE_OFFSET")
#pragma pop_macro("INVALID_FIELD_OFFSET")
#pragma pop_macro("ARRAY_OBJECT_INDEX_SCALE")
#pragma pop_macro("ADDRESS_SIZE")
#pragma pop_macro("ARRAY_LONG_INDEX_SCALE")
#pragma pop_macro("ARRAY_FLOAT_INDEX_SCALE")
#pragma pop_macro("ARRAY_DOUBLE_INDEX_SCALE")
#pragma pop_macro("ARRAY_FLOAT_BASE_OFFSET")
#pragma pop_macro("ARRAY_DOUBLE_BASE_OFFSET")
#pragma pop_macro("ARRAY_BOOLEAN_INDEX_SCALE")
#pragma pop_macro("ARRAY_CHAR_INDEX_SCALE")
#pragma pop_macro("ARRAY_INT_INDEX_SCALE")
#pragma pop_macro("ARRAY_BYTE_INDEX_SCALE")
#pragma pop_macro("ARRAY_LONG_BASE_OFFSET")
#pragma pop_macro("ARRAY_OBJECT_BASE_OFFSET")
#pragma pop_macro("ARRAY_SHORT_INDEX_SCALE")
#pragma pop_macro("ARRAY_BYTE_BASE_OFFSET")

#endif // _jdk_internal_misc_Unsafe_h_