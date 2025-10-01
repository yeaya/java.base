#ifndef _jdk_internal_misc_ScopedMemoryAccess_h_
#define _jdk_internal_misc_ScopedMemoryAccess_h_
//$ class jdk.internal.misc.ScopedMemoryAccess
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("UNSAFE")
#undef UNSAFE

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class ScopedMemoryAccess$Scope;
			class ScopedMemoryAccess$Scope$ScopedAccessError;
			class Unsafe;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {
				class VectorSupport$LoadOperation;
				class VectorSupport$StoreVectorOperation;
				class VectorSupport$Vector;
				class VectorSupport$VectorSpecies;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace misc {

class $import ScopedMemoryAccess : public ::java::lang::Object {
	$class(ScopedMemoryAccess, $PRELOAD, ::java::lang::Object)
public:
	ScopedMemoryAccess();
	void init$();
	virtual bool closeScope(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope);
	virtual bool closeScope0(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, ::jdk::internal::misc::ScopedMemoryAccess$Scope$ScopedAccessError* exception);
	virtual double compareAndExchangeDouble(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value);
	virtual double compareAndExchangeDoubleAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value);
	double compareAndExchangeDoubleAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value);
	double compareAndExchangeDoubleInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value);
	virtual double compareAndExchangeDoubleRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value);
	double compareAndExchangeDoubleReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value);
	virtual float compareAndExchangeFloat(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value);
	virtual float compareAndExchangeFloatAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value);
	float compareAndExchangeFloatAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value);
	float compareAndExchangeFloatInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value);
	virtual float compareAndExchangeFloatRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value);
	float compareAndExchangeFloatReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value);
	virtual int32_t compareAndExchangeInt(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value);
	virtual int32_t compareAndExchangeIntAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value);
	int32_t compareAndExchangeIntAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value);
	int32_t compareAndExchangeIntInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value);
	virtual int32_t compareAndExchangeIntRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value);
	int32_t compareAndExchangeIntReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value);
	virtual int64_t compareAndExchangeLong(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value);
	virtual int64_t compareAndExchangeLongAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value);
	int64_t compareAndExchangeLongAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value);
	int64_t compareAndExchangeLongInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value);
	virtual int64_t compareAndExchangeLongRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value);
	int64_t compareAndExchangeLongReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value);
	virtual bool compareAndSetDouble(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value);
	bool compareAndSetDoubleInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value);
	virtual bool compareAndSetFloat(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value);
	bool compareAndSetFloatInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value);
	virtual bool compareAndSetInt(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value);
	bool compareAndSetIntInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value);
	virtual bool compareAndSetLong(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value);
	bool compareAndSetLongInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value);
	virtual void copyMemory(::jdk::internal::misc::ScopedMemoryAccess$Scope* srcScope, ::jdk::internal::misc::ScopedMemoryAccess$Scope* dstScope, Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes);
	void copyMemoryInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* srcScope, ::jdk::internal::misc::ScopedMemoryAccess$Scope* dstScope, Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes);
	virtual void copySwapMemory(::jdk::internal::misc::ScopedMemoryAccess$Scope* srcScope, ::jdk::internal::misc::ScopedMemoryAccess$Scope* dstScope, Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes, int64_t elemSize);
	void copySwapMemoryInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* srcScope, ::jdk::internal::misc::ScopedMemoryAccess$Scope* dstScope, Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes, int64_t elemSize);
	virtual void force(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, ::java::io::FileDescriptor* fd, int64_t address, bool isSync, int64_t index, int64_t length);
	virtual void forceInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, ::java::io::FileDescriptor* fd, int64_t address, bool isSync, int64_t index, int64_t length);
	virtual int8_t getAndAddByte(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t delta);
	virtual int8_t getAndAddByteAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t delta);
	int8_t getAndAddByteAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t delta);
	int8_t getAndAddByteInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t delta);
	virtual int8_t getAndAddByteRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t delta);
	int8_t getAndAddByteReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t delta);
	virtual char16_t getAndAddChar(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t delta);
	virtual char16_t getAndAddCharAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t delta);
	char16_t getAndAddCharAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t delta);
	char16_t getAndAddCharInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t delta);
	virtual char16_t getAndAddCharRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t delta);
	char16_t getAndAddCharReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t delta);
	virtual double getAndAddDouble(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double delta);
	virtual double getAndAddDoubleAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double delta);
	double getAndAddDoubleAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double delta);
	double getAndAddDoubleInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double delta);
	virtual double getAndAddDoubleRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double delta);
	double getAndAddDoubleReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double delta);
	virtual float getAndAddFloat(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float delta);
	virtual float getAndAddFloatAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float delta);
	float getAndAddFloatAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float delta);
	float getAndAddFloatInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float delta);
	virtual float getAndAddFloatRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float delta);
	float getAndAddFloatReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float delta);
	virtual int32_t getAndAddInt(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t delta);
	virtual int32_t getAndAddIntAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t delta);
	int32_t getAndAddIntAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t delta);
	int32_t getAndAddIntInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t delta);
	virtual int32_t getAndAddIntRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t delta);
	int32_t getAndAddIntReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t delta);
	virtual int64_t getAndAddLong(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t delta);
	virtual int64_t getAndAddLongAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t delta);
	int64_t getAndAddLongAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t delta);
	int64_t getAndAddLongInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t delta);
	virtual int64_t getAndAddLongRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t delta);
	int64_t getAndAddLongReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t delta);
	virtual int16_t getAndAddShort(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t delta);
	virtual int16_t getAndAddShortAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t delta);
	int16_t getAndAddShortAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t delta);
	int16_t getAndAddShortInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t delta);
	virtual int16_t getAndAddShortRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t delta);
	int16_t getAndAddShortReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t delta);
	virtual int8_t getAndBitwiseAndByte(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value);
	virtual int8_t getAndBitwiseAndByteAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value);
	int8_t getAndBitwiseAndByteAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value);
	int8_t getAndBitwiseAndByteInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value);
	virtual int8_t getAndBitwiseAndByteRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value);
	int8_t getAndBitwiseAndByteReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value);
	virtual char16_t getAndBitwiseAndChar(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value);
	virtual char16_t getAndBitwiseAndCharAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value);
	char16_t getAndBitwiseAndCharAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value);
	char16_t getAndBitwiseAndCharInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value);
	virtual char16_t getAndBitwiseAndCharRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value);
	char16_t getAndBitwiseAndCharReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value);
	virtual int32_t getAndBitwiseAndInt(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	virtual int32_t getAndBitwiseAndIntAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	int32_t getAndBitwiseAndIntAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	int32_t getAndBitwiseAndIntInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	virtual int32_t getAndBitwiseAndIntRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	int32_t getAndBitwiseAndIntReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	virtual int64_t getAndBitwiseAndLong(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	virtual int64_t getAndBitwiseAndLongAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	int64_t getAndBitwiseAndLongAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	int64_t getAndBitwiseAndLongInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	virtual int64_t getAndBitwiseAndLongRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	int64_t getAndBitwiseAndLongReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	virtual int16_t getAndBitwiseAndShort(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value);
	virtual int16_t getAndBitwiseAndShortAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value);
	int16_t getAndBitwiseAndShortAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value);
	int16_t getAndBitwiseAndShortInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value);
	virtual int16_t getAndBitwiseAndShortRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value);
	int16_t getAndBitwiseAndShortReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value);
	virtual int8_t getAndBitwiseOrByte(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value);
	virtual int8_t getAndBitwiseOrByteAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value);
	int8_t getAndBitwiseOrByteAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value);
	int8_t getAndBitwiseOrByteInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value);
	virtual int8_t getAndBitwiseOrByteRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value);
	int8_t getAndBitwiseOrByteReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value);
	virtual char16_t getAndBitwiseOrChar(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value);
	virtual char16_t getAndBitwiseOrCharAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value);
	char16_t getAndBitwiseOrCharAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value);
	char16_t getAndBitwiseOrCharInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value);
	virtual char16_t getAndBitwiseOrCharRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value);
	char16_t getAndBitwiseOrCharReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value);
	virtual int32_t getAndBitwiseOrInt(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	virtual int32_t getAndBitwiseOrIntAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	int32_t getAndBitwiseOrIntAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	int32_t getAndBitwiseOrIntInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	virtual int32_t getAndBitwiseOrIntRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	int32_t getAndBitwiseOrIntReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	virtual int64_t getAndBitwiseOrLong(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	virtual int64_t getAndBitwiseOrLongAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	int64_t getAndBitwiseOrLongAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	int64_t getAndBitwiseOrLongInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	virtual int64_t getAndBitwiseOrLongRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	int64_t getAndBitwiseOrLongReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	virtual int16_t getAndBitwiseOrShort(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value);
	virtual int16_t getAndBitwiseOrShortAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value);
	int16_t getAndBitwiseOrShortAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value);
	int16_t getAndBitwiseOrShortInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value);
	virtual int16_t getAndBitwiseOrShortRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value);
	int16_t getAndBitwiseOrShortReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value);
	virtual int8_t getAndBitwiseXorByte(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value);
	virtual int8_t getAndBitwiseXorByteAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value);
	int8_t getAndBitwiseXorByteAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value);
	int8_t getAndBitwiseXorByteInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value);
	virtual int8_t getAndBitwiseXorByteRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value);
	int8_t getAndBitwiseXorByteReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value);
	virtual char16_t getAndBitwiseXorChar(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value);
	virtual char16_t getAndBitwiseXorCharAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value);
	char16_t getAndBitwiseXorCharAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value);
	char16_t getAndBitwiseXorCharInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value);
	virtual char16_t getAndBitwiseXorCharRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value);
	char16_t getAndBitwiseXorCharReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value);
	virtual int32_t getAndBitwiseXorInt(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	virtual int32_t getAndBitwiseXorIntAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	int32_t getAndBitwiseXorIntAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	int32_t getAndBitwiseXorIntInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	virtual int32_t getAndBitwiseXorIntRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	int32_t getAndBitwiseXorIntReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	virtual int64_t getAndBitwiseXorLong(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	virtual int64_t getAndBitwiseXorLongAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	int64_t getAndBitwiseXorLongAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	int64_t getAndBitwiseXorLongInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	virtual int64_t getAndBitwiseXorLongRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	int64_t getAndBitwiseXorLongReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	virtual int16_t getAndBitwiseXorShort(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value);
	virtual int16_t getAndBitwiseXorShortAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value);
	int16_t getAndBitwiseXorShortAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value);
	int16_t getAndBitwiseXorShortInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value);
	virtual int16_t getAndBitwiseXorShortRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value);
	int16_t getAndBitwiseXorShortReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value);
	virtual double getAndSetDouble(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value);
	virtual double getAndSetDoubleAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value);
	double getAndSetDoubleAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value);
	double getAndSetDoubleInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value);
	virtual double getAndSetDoubleRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value);
	double getAndSetDoubleReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value);
	virtual float getAndSetFloat(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value);
	virtual float getAndSetFloatAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value);
	float getAndSetFloatAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value);
	float getAndSetFloatInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value);
	virtual float getAndSetFloatRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value);
	float getAndSetFloatReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value);
	virtual int32_t getAndSetInt(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	virtual int32_t getAndSetIntAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	int32_t getAndSetIntAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	int32_t getAndSetIntInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	virtual int32_t getAndSetIntRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	int32_t getAndSetIntReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	virtual int64_t getAndSetLong(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	virtual int64_t getAndSetLongAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	int64_t getAndSetLongAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	int64_t getAndSetLongInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	virtual int64_t getAndSetLongRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	int64_t getAndSetLongReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	virtual int8_t getByte(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	virtual int8_t getByteAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	int8_t getByteAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	int8_t getByteInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	virtual int8_t getByteOpaque(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	int8_t getByteOpaqueInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	virtual int8_t getByteVolatile(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	int8_t getByteVolatileInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	virtual char16_t getChar(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	virtual char16_t getCharAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	char16_t getCharAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	char16_t getCharInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	virtual char16_t getCharOpaque(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	char16_t getCharOpaqueInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	virtual char16_t getCharUnaligned(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, bool be);
	char16_t getCharUnalignedInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, bool be);
	virtual char16_t getCharVolatile(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	char16_t getCharVolatileInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	virtual double getDouble(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	virtual double getDoubleAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	double getDoubleAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	double getDoubleInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	virtual double getDoubleOpaque(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	double getDoubleOpaqueInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	virtual double getDoubleVolatile(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	double getDoubleVolatileInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	virtual float getFloat(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	virtual float getFloatAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	float getFloatAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	float getFloatInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	virtual float getFloatOpaque(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	float getFloatOpaqueInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	virtual float getFloatVolatile(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	float getFloatVolatileInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	virtual int32_t getInt(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	virtual int32_t getIntAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	int32_t getIntAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	int32_t getIntInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	virtual int32_t getIntOpaque(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	int32_t getIntOpaqueInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	virtual int32_t getIntUnaligned(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, bool be);
	int32_t getIntUnalignedInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, bool be);
	virtual int32_t getIntVolatile(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	int32_t getIntVolatileInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	virtual int64_t getLong(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	virtual int64_t getLongAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	int64_t getLongAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	int64_t getLongInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	virtual int64_t getLongOpaque(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	int64_t getLongOpaqueInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	virtual int64_t getLongUnaligned(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, bool be);
	int64_t getLongUnalignedInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, bool be);
	virtual int64_t getLongVolatile(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	int64_t getLongVolatileInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	static ::jdk::internal::misc::ScopedMemoryAccess* getScopedMemoryAccess();
	virtual int16_t getShort(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	virtual int16_t getShortAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	int16_t getShortAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	int16_t getShortInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	virtual int16_t getShortOpaque(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	int16_t getShortOpaqueInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	virtual int16_t getShortUnaligned(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, bool be);
	int16_t getShortUnalignedInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, bool be);
	virtual int16_t getShortVolatile(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	int16_t getShortVolatileInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset);
	virtual bool isLoaded(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, int64_t address, bool isSync, int64_t size);
	virtual bool isLoadedInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, int64_t address, bool isSync, int64_t size);
	virtual void load(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, int64_t address, bool isSync, int64_t size);
	static ::jdk::internal::vm::vector::VectorSupport$Vector* loadFromByteBuffer($Class* vmClass, $Class* e, int32_t length, ::java::nio::ByteBuffer* bb, int32_t offset, ::jdk::internal::vm::vector::VectorSupport$VectorSpecies* s, ::jdk::internal::vm::vector::VectorSupport$LoadOperation* defaultImpl);
	static ::jdk::internal::vm::vector::VectorSupport$Vector* loadFromByteBufferScoped(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, $Class* vmClass, $Class* e, int32_t length, ::java::nio::ByteBuffer* bb, int32_t offset, ::jdk::internal::vm::vector::VectorSupport$VectorSpecies* s, ::jdk::internal::vm::vector::VectorSupport$LoadOperation* defaultImpl);
	virtual void loadInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, int64_t address, bool isSync, int64_t size);
	virtual void putByte(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value);
	void putByteInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value);
	virtual void putByteOpaque(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value);
	void putByteOpaqueInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value);
	virtual void putByteRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value);
	void putByteReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value);
	virtual void putByteVolatile(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value);
	void putByteVolatileInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value);
	virtual void putChar(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value);
	void putCharInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value);
	virtual void putCharOpaque(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value);
	void putCharOpaqueInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value);
	virtual void putCharRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value);
	void putCharReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value);
	virtual void putCharUnaligned(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value, bool be);
	void putCharUnalignedInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value, bool be);
	virtual void putCharVolatile(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value);
	void putCharVolatileInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value);
	virtual void putDouble(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value);
	void putDoubleInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value);
	virtual void putDoubleOpaque(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value);
	void putDoubleOpaqueInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value);
	virtual void putDoubleRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value);
	void putDoubleReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value);
	virtual void putDoubleVolatile(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value);
	void putDoubleVolatileInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value);
	virtual void putFloat(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value);
	void putFloatInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value);
	virtual void putFloatOpaque(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value);
	void putFloatOpaqueInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value);
	virtual void putFloatRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value);
	void putFloatReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value);
	virtual void putFloatVolatile(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value);
	void putFloatVolatileInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value);
	virtual void putInt(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	void putIntInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	virtual void putIntOpaque(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	void putIntOpaqueInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	virtual void putIntRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	void putIntReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	virtual void putIntUnaligned(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value, bool be);
	void putIntUnalignedInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value, bool be);
	virtual void putIntVolatile(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	void putIntVolatileInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value);
	virtual void putLong(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	void putLongInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	virtual void putLongOpaque(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	void putLongOpaqueInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	virtual void putLongRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	void putLongReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	virtual void putLongUnaligned(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value, bool be);
	void putLongUnalignedInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value, bool be);
	virtual void putLongVolatile(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	void putLongVolatileInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value);
	virtual void putShort(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value);
	void putShortInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value);
	virtual void putShortOpaque(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value);
	void putShortOpaqueInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value);
	virtual void putShortRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value);
	void putShortReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value);
	virtual void putShortUnaligned(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value, bool be);
	void putShortUnalignedInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value, bool be);
	virtual void putShortVolatile(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value);
	void putShortVolatileInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value);
	static void registerNatives();
	virtual void setMemory(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* o, int64_t offset, int64_t bytes, int8_t value);
	void setMemoryInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* o, int64_t offset, int64_t bytes, int8_t value);
	static void storeIntoByteBuffer($Class* vmClass, $Class* e, int32_t length, ::jdk::internal::vm::vector::VectorSupport$Vector* v, ::java::nio::ByteBuffer* bb, int32_t offset, ::jdk::internal::vm::vector::VectorSupport$StoreVectorOperation* defaultImpl);
	static void storeIntoByteBufferScoped(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, $Class* vmClass, $Class* e, int32_t length, ::jdk::internal::vm::vector::VectorSupport$Vector* v, ::java::nio::ByteBuffer* bb, int32_t offset, ::jdk::internal::vm::vector::VectorSupport$StoreVectorOperation* defaultImpl);
	virtual void unload(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, int64_t address, bool isSync, int64_t size);
	virtual void unloadInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, int64_t address, bool isSync, int64_t size);
	virtual int32_t vectorizedMismatch(::jdk::internal::misc::ScopedMemoryAccess$Scope* aScope, ::jdk::internal::misc::ScopedMemoryAccess$Scope* bScope, Object$* a, int64_t aOffset, Object$* b, int64_t bOffset, int32_t length, int32_t log2ArrayIndexScale);
	int32_t vectorizedMismatchInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* aScope, ::jdk::internal::misc::ScopedMemoryAccess$Scope* bScope, Object$* a, int64_t aOffset, Object$* b, int64_t bOffset, int32_t length, int32_t log2ArrayIndexScale);
	virtual bool weakCompareAndSetDouble(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value);
	virtual bool weakCompareAndSetDoubleAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value);
	bool weakCompareAndSetDoubleAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value);
	bool weakCompareAndSetDoubleInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value);
	virtual bool weakCompareAndSetDoublePlain(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value);
	bool weakCompareAndSetDoublePlainInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value);
	virtual bool weakCompareAndSetDoubleRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value);
	bool weakCompareAndSetDoubleReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value);
	virtual bool weakCompareAndSetFloat(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value);
	virtual bool weakCompareAndSetFloatAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value);
	bool weakCompareAndSetFloatAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value);
	bool weakCompareAndSetFloatInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value);
	virtual bool weakCompareAndSetFloatPlain(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value);
	bool weakCompareAndSetFloatPlainInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value);
	virtual bool weakCompareAndSetFloatRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value);
	bool weakCompareAndSetFloatReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value);
	virtual bool weakCompareAndSetInt(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value);
	virtual bool weakCompareAndSetIntAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value);
	bool weakCompareAndSetIntAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value);
	bool weakCompareAndSetIntInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value);
	virtual bool weakCompareAndSetIntPlain(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value);
	bool weakCompareAndSetIntPlainInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value);
	virtual bool weakCompareAndSetIntRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value);
	bool weakCompareAndSetIntReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value);
	virtual bool weakCompareAndSetLong(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value);
	virtual bool weakCompareAndSetLongAcquire(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value);
	bool weakCompareAndSetLongAcquireInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value);
	bool weakCompareAndSetLongInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value);
	virtual bool weakCompareAndSetLongPlain(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value);
	bool weakCompareAndSetLongPlainInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value);
	virtual bool weakCompareAndSetLongRelease(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value);
	bool weakCompareAndSetLongReleaseInternal(::jdk::internal::misc::ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value);
	static ::jdk::internal::misc::Unsafe* UNSAFE;
	static ::jdk::internal::misc::ScopedMemoryAccess* theScopedMemoryAccess;
};

		} // misc
	} // internal
} // jdk

#pragma pop_macro("UNSAFE")

#endif // _jdk_internal_misc_ScopedMemoryAccess_h_