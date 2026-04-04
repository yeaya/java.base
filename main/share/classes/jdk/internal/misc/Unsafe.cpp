#include <jdk/internal/misc/Unsafe.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/IllegalAccessError.h>
#include <java/lang/NoSuchMethodError.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/reflect/Field.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/ProtectionDomain.h>
#include <jdk/internal/misc/UnsafeConstants.h>
#include <jdk/internal/ref/Cleaner.h>
#include <sun/nio/ch/DirectBuffer.h>
#include <jcpp.h>

#include <java/lang/Thread.h>
#include <java/lang/Machine.h>
#include <java/lang/fence.h>

#include <atomic>
#include <string.h>
#include <stdlib.h>

using namespace ::java::lang;

#undef ADDRESS_SIZE
#undef ADDRESS_SIZE0
#undef ARRAY_BOOLEAN_BASE_OFFSET
#undef ARRAY_BOOLEAN_INDEX_SCALE
#undef ARRAY_BYTE_BASE_OFFSET
#undef ARRAY_BYTE_INDEX_SCALE
#undef ARRAY_CHAR_BASE_OFFSET
#undef ARRAY_CHAR_INDEX_SCALE
#undef ARRAY_DOUBLE_BASE_OFFSET
#undef ARRAY_DOUBLE_INDEX_SCALE
#undef ARRAY_FLOAT_BASE_OFFSET
#undef ARRAY_FLOAT_INDEX_SCALE
#undef ARRAY_INT_BASE_OFFSET
#undef ARRAY_INT_INDEX_SCALE
#undef ARRAY_LONG_BASE_OFFSET
#undef ARRAY_LONG_INDEX_SCALE
#undef ARRAY_OBJECT_BASE_OFFSET
#undef ARRAY_OBJECT_INDEX_SCALE
#undef ARRAY_SHORT_BASE_OFFSET
#undef ARRAY_SHORT_INDEX_SCALE
#undef BIG_ENDIAN
#undef DATA_CACHE_LINE_FLUSH_SIZE
#undef INVALID_FIELD_OFFSET
#undef PAGE_SIZE
#undef TYPE
#undef UNALIGNED_ACCESS

using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalAccessError = ::java::lang::IllegalAccessError;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NoSuchMethodError = ::java::lang::NoSuchMethodError;
using $NullPointerException = ::java::lang::NullPointerException;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $RuntimeException = ::java::lang::RuntimeException;
using $Short = ::java::lang::Short;
using $Field = ::java::lang::reflect::Field;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $UnsafeConstants = ::jdk::internal::misc::UnsafeConstants;
using $Cleaner = ::jdk::internal::ref::Cleaner;
using $DirectBuffer = ::sun::nio::ch::DirectBuffer;

namespace jdk {
	namespace internal {
		namespace misc {

Unsafe* Unsafe::theUnsafe = nullptr;
int32_t Unsafe::ARRAY_BOOLEAN_BASE_OFFSET = 0;
int32_t Unsafe::ARRAY_BYTE_BASE_OFFSET = 0;
int32_t Unsafe::ARRAY_SHORT_BASE_OFFSET = 0;
int32_t Unsafe::ARRAY_CHAR_BASE_OFFSET = 0;
int32_t Unsafe::ARRAY_INT_BASE_OFFSET = 0;
int32_t Unsafe::ARRAY_LONG_BASE_OFFSET = 0;
int32_t Unsafe::ARRAY_FLOAT_BASE_OFFSET = 0;
int32_t Unsafe::ARRAY_DOUBLE_BASE_OFFSET = 0;
int32_t Unsafe::ARRAY_OBJECT_BASE_OFFSET = 0;
int32_t Unsafe::ARRAY_BOOLEAN_INDEX_SCALE = 0;
int32_t Unsafe::ARRAY_BYTE_INDEX_SCALE = 0;
int32_t Unsafe::ARRAY_SHORT_INDEX_SCALE = 0;
int32_t Unsafe::ARRAY_CHAR_INDEX_SCALE = 0;
int32_t Unsafe::ARRAY_INT_INDEX_SCALE = 0;
int32_t Unsafe::ARRAY_LONG_INDEX_SCALE = 0;
int32_t Unsafe::ARRAY_FLOAT_INDEX_SCALE = 0;
int32_t Unsafe::ARRAY_DOUBLE_INDEX_SCALE = 0;
int32_t Unsafe::ARRAY_OBJECT_INDEX_SCALE = 0;
int32_t Unsafe::ADDRESS_SIZE = 0;

void Unsafe::registerNatives() {
}

void Unsafe::init$() {
}

Unsafe* Unsafe::getUnsafe() {
	$init(Unsafe);
	return Unsafe::theUnsafe;
}

int32_t Unsafe::getInt(Object$* o, int64_t offset) {
	int32_t* ptr = nullptr;
	if (o != nullptr) {
		ptr = (int32_t*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (int32_t*)(offset);
	}
	return *ptr;
}

void Unsafe::putInt(Object$* o, int64_t offset, int32_t x) {
	int32_t* ptr = nullptr;
	if (o != nullptr) {
		ptr = (int32_t*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (int32_t*)(offset);
	}
	*ptr = x;
}

$Object* Unsafe::getReference(Object$* o, int64_t offset) {
	$Object** ptr = nullptr;
	if (o != nullptr) {
		ptr = ($Object**)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = ($Object**)(offset);
	}
	return *ptr;
}

void Unsafe::putReference(Object$* o, int64_t offset, Object$* x) {
	$Object** ptr = nullptr;
	if (o != nullptr) {
		Object0* owner = $toObject0(o);
		ptr = ($Object**)((int8_t*)owner + offset);
		$Class* clazz = owner->getClass();
		if (clazz->isArray()) {
			$ObjectArray* oa = ($ObjectArray*)owner;
			Object0** ptr0 = (Object0**)ptr;
			if (x != nullptr) {
				x = $toObject0(x);
			}
			ObjectManager::assignArray(oa, *ptr0, x);
		} else {
			if (x != nullptr) {
				$Class* fieldType = clazz->getFieldTypeByOffset((int32_t)offset);
				if (fieldType != nullptr) {
					x = fieldType->cast(x);
				}
			}
			ObjectManager::assignField(owner, offset, x);
		}
	} else {
		ptr = ($Object**)(offset);
		$assignStatic(*ptr, x);
	}
}

bool Unsafe::getBoolean(Object$* o, int64_t offset) {
	bool* ptr = nullptr;
	if (o != nullptr) {
		ptr = (bool*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (bool*)(offset);
	}
	return *ptr;
}

void Unsafe::putBoolean(Object$* o, int64_t offset, bool x) {
	bool* ptr = nullptr;
	if (o != nullptr) {
		ptr = (bool*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (bool*)(offset);
	}
	*ptr = x;
}

int8_t Unsafe::getByte(Object$* o, int64_t offset) {
	int8_t* ptr = nullptr;
	if (o != nullptr) {
		ptr = (int8_t*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (int8_t*)(offset);
	}
	return *ptr;
}

void Unsafe::putByte(Object$* o, int64_t offset, int8_t x) {
	int8_t* ptr = nullptr;
	if (o != nullptr) {
		ptr = (int8_t*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (int8_t*)(offset);
	}
	*ptr = x;
}

int16_t Unsafe::getShort(Object$* o, int64_t offset) {
	int16_t* ptr = nullptr;
	if (o != nullptr) {
		ptr = (int16_t*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (int16_t*)(offset);
	}
	return *ptr;
}

void Unsafe::putShort(Object$* o, int64_t offset, int16_t x) {
	int16_t* ptr = nullptr;
	if (o != nullptr) {
		ptr = (int16_t*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (int16_t*)(offset);
	}
	*ptr = x;
}

char16_t Unsafe::getChar(Object$* o, int64_t offset) {
	char16_t* ptr = nullptr;
	if (o != nullptr) {
		ptr = (char16_t*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (char16_t*)(offset);
	}
	return *ptr;
}

void Unsafe::putChar(Object$* o, int64_t offset, char16_t x) {
	char16_t* ptr = nullptr;
	if (o != nullptr) {
		ptr = (char16_t*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (char16_t*)(offset);
	}
	*ptr = x;
}

int64_t Unsafe::getLong(Object$* o, int64_t offset) {
	int64_t* ptr = nullptr;
	if (o != nullptr) {
		ptr = (int64_t*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (int64_t*)(offset);
	}
	return *ptr;
}

void Unsafe::putLong(Object$* o, int64_t offset, int64_t x) {
	int64_t* ptr = nullptr;
	if (o != nullptr) {
		ptr = (int64_t*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (int64_t*)(offset);
	}
	*ptr = x;
}

float Unsafe::getFloat(Object$* o, int64_t offset) {
	float* ptr = nullptr;
	if (o != nullptr) {
		ptr = (float*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (float*)(offset);
	}
	return *ptr;
}

void Unsafe::putFloat(Object$* o, int64_t offset, float x) {
	float* ptr = nullptr;
	if (o != nullptr) {
		ptr = (float*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (float*)(offset);
	}
	*ptr = x;
}

double Unsafe::getDouble(Object$* o, int64_t offset) {
	double* ptr = nullptr;
	if (o != nullptr) {
		ptr = (double*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (double*)(offset);
	}
	return *ptr;
}

void Unsafe::putDouble(Object$* o, int64_t offset, double x) {
	double* ptr = nullptr;
	if (o != nullptr) {
		ptr = (double*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (double*)(offset);
	}
	*ptr = x;
}

int64_t Unsafe::getAddress(Object$* o, int64_t offset) {
	if (Unsafe::ADDRESS_SIZE == 4) {
		return $Integer::toUnsignedLong(getInt(o, offset));
	} else {
		return getLong(o, offset);
	}
}

void Unsafe::putAddress(Object$* o, int64_t offset, int64_t x) {
	if (Unsafe::ADDRESS_SIZE == 4) {
		putInt(o, offset, (int32_t)x);
	} else {
		putLong(o, offset, x);
	}
}

$Object* Unsafe::getUncompressedObject(int64_t getObject) {
	$Object* o = ($Object*)getObject;
	return nullptr;
}

int8_t Unsafe::getByte(int64_t address) {
	return getByte(nullptr, address);
}

void Unsafe::putByte(int64_t address, int8_t x) {
	putByte(nullptr, address, x);
}

int16_t Unsafe::getShort(int64_t address) {
	return getShort(nullptr, address);
}

void Unsafe::putShort(int64_t address, int16_t x) {
	putShort(nullptr, address, x);
}

char16_t Unsafe::getChar(int64_t address) {
	return getChar(nullptr, address);
}

void Unsafe::putChar(int64_t address, char16_t x) {
	putChar(nullptr, address, x);
}

int32_t Unsafe::getInt(int64_t address) {
	return getInt(nullptr, address);
}

void Unsafe::putInt(int64_t address, int32_t x) {
	putInt(nullptr, address, x);
}

int64_t Unsafe::getLong(int64_t address) {
	return getLong(nullptr, address);
}

void Unsafe::putLong(int64_t address, int64_t x) {
	putLong(nullptr, address, x);
}

float Unsafe::getFloat(int64_t address) {
	return getFloat(nullptr, address);
}

void Unsafe::putFloat(int64_t address, float x) {
	putFloat(nullptr, address, x);
}

double Unsafe::getDouble(int64_t address) {
	return getDouble(nullptr, address);
}

void Unsafe::putDouble(int64_t address, double x) {
	putDouble(nullptr, address, x);
}

int64_t Unsafe::getAddress(int64_t address) {
	return getAddress(nullptr, address);
}

void Unsafe::putAddress(int64_t address, int64_t x) {
	putAddress(nullptr, address, x);
}

$RuntimeException* Unsafe::invalidInput() {
	return $new($IllegalArgumentException);
}

bool Unsafe::is32BitClean(int64_t value) {
	return (int64_t)((uint64_t)value >> 32) == 0;
}

void Unsafe::checkSize(int64_t size) {
	$useLocalObjectStack();
	if (Unsafe::ADDRESS_SIZE == 4) {
		if (!is32BitClean(size)) {
			$throw($(invalidInput()));
		}
	} else if (size < 0) {
		$throw($(invalidInput()));
	}
}

void Unsafe::checkNativeAddress(int64_t address) {
	if (Unsafe::ADDRESS_SIZE == 4) {
		if ((((address >> 32) + 1) & ~1) != 0) {
			$throw($(invalidInput()));
		}
	}
}

void Unsafe::checkOffset(Object$* o, int64_t offset) {
	$useLocalObjectStack();
	if (Unsafe::ADDRESS_SIZE == 4) {
		if (!is32BitClean(offset)) {
			$throw($(invalidInput()));
		}
	} else if (offset < 0) {
		$throw($(invalidInput()));
	}
}

void Unsafe::checkPointer(Object$* o, int64_t offset) {
	if (o == nullptr) {
		checkNativeAddress(offset);
	} else {
		checkOffset(o, offset);
	}
}

void Unsafe::checkPrimitiveArray($Class* c) {
	$Class* componentType = $nc(c)->getComponentType();
	if (componentType == nullptr || !componentType->isPrimitive()) {
		$throw($(invalidInput()));
	}
}

void Unsafe::checkPrimitivePointer(Object$* o, int64_t offset) {
	checkPointer(o, offset);
	if (o != nullptr) {
		checkPrimitiveArray($of(o)->getClass());
	}
}

int64_t Unsafe::alignToHeapWordSize(int64_t bytes) {
	if (bytes >= 0) {
		return (bytes + Unsafe::ADDRESS_SIZE - 1) & ~(Unsafe::ADDRESS_SIZE - 1);
	} else {
		$throw($(invalidInput()));
	}
}

int64_t Unsafe::allocateMemory(int64_t bytes) {
	$useLocalObjectStack();
	bytes = alignToHeapWordSize(bytes);
	allocateMemoryChecks(bytes);
	if (bytes == 0) {
		return 0;
	}
	int64_t p = allocateMemory0(bytes);
	if (p == 0) {
		$throwNew($OutOfMemoryError, $$str({"Unable to allocate "_s, $$str(bytes), " bytes"_s}));
	}
	return p;
}

void Unsafe::allocateMemoryChecks(int64_t bytes) {
	checkSize(bytes);
}

int64_t Unsafe::reallocateMemory(int64_t address, int64_t bytes) {
	$useLocalObjectStack();
	bytes = alignToHeapWordSize(bytes);
	reallocateMemoryChecks(address, bytes);
	if (bytes == 0) {
		freeMemory(address);
		return 0;
	}
	int64_t p = (address == 0) ? allocateMemory0(bytes) : reallocateMemory0(address, bytes);
	if (p == 0) {
		$throwNew($OutOfMemoryError, $$str({"Unable to allocate "_s, $$str(bytes), " bytes"_s}));
	}
	return p;
}

void Unsafe::reallocateMemoryChecks(int64_t address, int64_t bytes) {
	checkPointer(nullptr, address);
	checkSize(bytes);
}

void Unsafe::setMemory(Object$* o, int64_t offset, int64_t bytes, int8_t value) {
	setMemoryChecks(o, offset, bytes, value);
	if (bytes == 0) {
		return;
	}
	setMemory0(o, offset, bytes, value);
}

void Unsafe::setMemory(int64_t address, int64_t bytes, int8_t value) {
	setMemory(nullptr, address, bytes, value);
}

void Unsafe::setMemoryChecks(Object$* o, int64_t offset, int64_t bytes, int8_t value) {
	checkPrimitivePointer(o, offset);
	checkSize(bytes);
}

void Unsafe::copyMemory(Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes) {
	copyMemoryChecks(srcBase, srcOffset, destBase, destOffset, bytes);
	if (bytes == 0) {
		return;
	}
	copyMemory0(srcBase, srcOffset, destBase, destOffset, bytes);
}

void Unsafe::copyMemory(int64_t srcAddress, int64_t destAddress, int64_t bytes) {
	copyMemory(nullptr, srcAddress, nullptr, destAddress, bytes);
}

void Unsafe::copyMemoryChecks(Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes) {
	checkSize(bytes);
	checkPrimitivePointer(srcBase, srcOffset);
	checkPrimitivePointer(destBase, destOffset);
}

void Unsafe::copySwapMemory(Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes, int64_t elemSize) {
	copySwapMemoryChecks(srcBase, srcOffset, destBase, destOffset, bytes, elemSize);
	if (bytes == 0) {
		return;
	}
	copySwapMemory0(srcBase, srcOffset, destBase, destOffset, bytes, elemSize);
}

void Unsafe::copySwapMemoryChecks(Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes, int64_t elemSize) {
	$useLocalObjectStack();
	checkSize(bytes);
	if (elemSize != 2 && elemSize != 4 && elemSize != 8) {
		$throw($(invalidInput()));
	}
	if ($mod(bytes, elemSize) != 0) {
		$throw($(invalidInput()));
	}
	checkPrimitivePointer(srcBase, srcOffset);
	checkPrimitivePointer(destBase, destOffset);
}

void Unsafe::copySwapMemory(int64_t srcAddress, int64_t destAddress, int64_t bytes, int64_t elemSize) {
	copySwapMemory(nullptr, srcAddress, nullptr, destAddress, bytes, elemSize);
}

void Unsafe::freeMemory(int64_t address) {
	freeMemoryChecks(address);
	if (address == 0) {
		return;
	}
	freeMemory0(address);
}

void Unsafe::freeMemoryChecks(int64_t address) {
	checkPointer(nullptr, address);
}

void Unsafe::writebackMemory(int64_t address, int64_t length) {
	checkWritebackEnabled();
	checkWritebackMemory(address, length);
	writebackPreSync0();
	int64_t line = dataCacheLineAlignDown(address);
	int64_t end = address + length;
	while (line < end) {
		writeback0(line);
		line += dataCacheLineFlushSize();
	}
	writebackPostSync0();
}

void Unsafe::checkWritebackMemory(int64_t address, int64_t length) {
	checkNativeAddress(address);
	checkSize(length);
}

void Unsafe::checkWritebackEnabled() {
	if (!isWritebackEnabled()) {
		$throwNew($RuntimeException, "writebackMemory not enabled!"_s);
	}
}

void Unsafe::writeback0(int64_t getObject) {
	// TODO
	$throwNew(IllegalAccessError);
}

void Unsafe::writebackPreSync0() {
	// TODO
	$throwNew(IllegalAccessError);
}

void Unsafe::writebackPostSync0() {
	// TODO
	$throwNew(IllegalAccessError);
}

int64_t Unsafe::objectFieldOffset($Field* f) {
	if (f == nullptr) {
		$throwNew($NullPointerException);
	}
	return objectFieldOffset0(f);
}

int64_t Unsafe::objectFieldOffset($Class* c, $String* name) {
	if (c == nullptr || name == nullptr) {
		$throwNew($NullPointerException);
	}
	return objectFieldOffset1(c, name);
}

int64_t Unsafe::staticFieldOffset($Field* f) {
	if (f == nullptr) {
		$throwNew($NullPointerException);
	}
	return staticFieldOffset0(f);
}

$Object* Unsafe::staticFieldBase($Field* f) {
	if (f == nullptr) {
		$throwNew($NullPointerException);
	}
	return staticFieldBase0(f);
}

bool Unsafe::shouldBeInitialized($Class* c) {
	if (c == nullptr) {
		$throwNew($NullPointerException);
	}
	return shouldBeInitialized0(c);
}

void Unsafe::ensureClassInitialized($Class* c) {
	if (c == nullptr) {
		$throwNew($NullPointerException);
	}
	ensureClassInitialized0(c);
}

int32_t Unsafe::arrayBaseOffset($Class* arrayClass) {
	if (arrayClass == nullptr) {
		$throwNew($NullPointerException);
	}
	return arrayBaseOffset0(arrayClass);
}

int32_t Unsafe::arrayIndexScale($Class* arrayClass) {
	if (arrayClass == nullptr) {
		$throwNew($NullPointerException);
	}
	return arrayIndexScale0(arrayClass);
}

int32_t Unsafe::addressSize() {
	return Unsafe::ADDRESS_SIZE;
}

int32_t Unsafe::pageSize() {
	$init($UnsafeConstants);
	return $UnsafeConstants::PAGE_SIZE;
}

int32_t Unsafe::dataCacheLineFlushSize() {
	$init($UnsafeConstants);
	return $UnsafeConstants::DATA_CACHE_LINE_FLUSH_SIZE;
}

int64_t Unsafe::dataCacheLineAlignDown(int64_t address) {
	$init($UnsafeConstants);
	return (address & ~($UnsafeConstants::DATA_CACHE_LINE_FLUSH_SIZE - 1));
}

bool Unsafe::isWritebackEnabled() {
	$init(Unsafe);
	$init($UnsafeConstants);
	return $UnsafeConstants::DATA_CACHE_LINE_FLUSH_SIZE != 0;
}

$Class* Unsafe::defineClass($String* name, $bytes* b, int32_t off, int32_t len, $ClassLoader* loader, $ProtectionDomain* protectionDomain) {
	if (b == nullptr) {
		$throwNew($NullPointerException);
	}
	if (len < 0) {
		$throwNew($ArrayIndexOutOfBoundsException);
	}
	return defineClass0(name, b, off, len, loader, protectionDomain);
}

$Class* Unsafe::defineClass0($String* name, $bytes* b, int32_t off, int32_t len, $ClassLoader* loader, $ProtectionDomain* protectionDomain) {
	return Machine::defineClass1(loader, name, b, off, len, protectionDomain, nullptr);;
}

$Object* Unsafe::allocateInstance($Class* cls) {
	return cls->allocateInstance();
}

$Object* Unsafe::allocateUninitializedArray($Class* componentType, int32_t length) {
	if (componentType == nullptr) {
		$throwNew($IllegalArgumentException, "Component type is null"_s);
	}
	if (!$nc(componentType)->isPrimitive()) {
		$throwNew($IllegalArgumentException, "Component type is not primitive"_s);
	}
	if (length < 0) {
		$throwNew($IllegalArgumentException, "Negative length"_s);
	}
	return allocateUninitializedArray0(componentType, length);
}

$Object* Unsafe::allocateUninitializedArray0($Class* componentType, int32_t length) {
	if (componentType == $Byte::TYPE) {
		return $new($bytes, length);
	}
	if (componentType == $Boolean::TYPE) {
		return $new($booleans, length);
	}
	if (componentType == $Short::TYPE) {
		return $new($shorts, length);
	}
	if (componentType == $Character::TYPE) {
		return $new($chars, length);
	}
	if (componentType == $Integer::TYPE) {
		return $new($ints, length);
	}
	if (componentType == $Float::TYPE) {
		return $new($floats, length);
	}
	if (componentType == $Long::TYPE) {
		return $new($longs, length);
	}
	if (componentType == $Double::TYPE) {
		return $new($doubles, length);
	}
	return nullptr;
}

void Unsafe::throwException($Throwable* ee) {
	$throw(ee);
}

bool Unsafe::compareAndSetReference(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	if (o != nullptr) {
		Object0* obj0 = $toObject0(o);
		$Object** ptr = ($Object**)((int8_t*)obj0 + offset);
		return ObjectManager::compareAndSetReference(obj0, ptr, expected, x);
	} else {
		$Object** ptr = ($Object**)(offset);
		return ObjectManager::compareAndSetReference(ptr, expected, x);
	}
}

$Object* Unsafe::compareAndExchangeReference(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	if (o != nullptr) {
		Object0* obj0 = $toObject0(o);
		$Object** ptr = ($Object**)((int8_t*)obj0 + offset);
		return ObjectManager::compareAndExchangeReference(obj0, ptr, expected, x);
	} else {
		$Object** ptr = ($Object**)(offset);
		return ObjectManager::compareAndExchangeReference(ptr, expected, x);
	}
}

$Object* Unsafe::compareAndExchangeReferenceAcquire(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	return compareAndExchangeReference(o, offset, expected, x);
}

$Object* Unsafe::compareAndExchangeReferenceRelease(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	return compareAndExchangeReference(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetReferencePlain(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	return compareAndSetReference(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetReferenceAcquire(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	return compareAndSetReference(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetReferenceRelease(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	return compareAndSetReference(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetReference(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	return compareAndSetReference(o, offset, expected, x);
}

bool Unsafe::compareAndSetInt(Object$* o, int64_t offset, int32_t expected, int32_t x) {
	int32_t* ptr = nullptr;
	if (o != nullptr) {
		ptr = (int32_t*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (int32_t*)(offset);
	}
	bool ret = std::atomic_compare_exchange_strong((std::atomic<int32_t>*)ptr, &expected, x);
	return ret;
}

int32_t Unsafe::compareAndExchangeInt(Object$* o, int64_t offset, int32_t expected, int32_t x) {
	int32_t* ptr = nullptr;
	if (o != nullptr) {
		ptr = (int32_t*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (int32_t*)(offset);
	}
	bool ret = std::atomic_compare_exchange_strong((std::atomic<int32_t>*)ptr, &expected, x);
	return expected;
}

int32_t Unsafe::compareAndExchangeIntAcquire(Object$* o, int64_t offset, int32_t expected, int32_t x) {
	return compareAndExchangeInt(o, offset, expected, x);
}

int32_t Unsafe::compareAndExchangeIntRelease(Object$* o, int64_t offset, int32_t expected, int32_t x) {
	return compareAndExchangeInt(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetIntPlain(Object$* o, int64_t offset, int32_t expected, int32_t x) {
	return compareAndSetInt(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetIntAcquire(Object$* o, int64_t offset, int32_t expected, int32_t x) {
	return compareAndSetInt(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetIntRelease(Object$* o, int64_t offset, int32_t expected, int32_t x) {
	return compareAndSetInt(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetInt(Object$* o, int64_t offset, int32_t expected, int32_t x) {
	return compareAndSetInt(o, offset, expected, x);
}

int8_t Unsafe::compareAndExchangeByte(Object$* o, int64_t offset, int8_t expected, int8_t x) {
	int64_t wordOffset = offset & ~3;
	int32_t shift = (int32_t)(offset & 3) << 3;
	$init($UnsafeConstants);
	if ($UnsafeConstants::BIG_ENDIAN) {
		shift = 24 - shift;
	}
	int32_t mask = $sl(255, shift);
	int32_t maskedExpected = $sl(expected & 0xff, shift);
	int32_t maskedX = $sl(x & 0xff, shift);
	int32_t fullWord = 0;
	do {
		fullWord = getIntVolatile(o, wordOffset);
		if ((fullWord & mask) != maskedExpected) {
			return (int8_t)($sr(fullWord & mask, shift));
		}
	} while (!weakCompareAndSetInt(o, wordOffset, fullWord, (fullWord & ~mask) | maskedX));
	return expected;
}

bool Unsafe::compareAndSetByte(Object$* o, int64_t offset, int8_t expected, int8_t x) {
	return compareAndExchangeByte(o, offset, expected, x) == expected;
}

bool Unsafe::weakCompareAndSetByte(Object$* o, int64_t offset, int8_t expected, int8_t x) {
	return compareAndSetByte(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetByteAcquire(Object$* o, int64_t offset, int8_t expected, int8_t x) {
	return weakCompareAndSetByte(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetByteRelease(Object$* o, int64_t offset, int8_t expected, int8_t x) {
	return weakCompareAndSetByte(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetBytePlain(Object$* o, int64_t offset, int8_t expected, int8_t x) {
	return weakCompareAndSetByte(o, offset, expected, x);
}

int8_t Unsafe::compareAndExchangeByteAcquire(Object$* o, int64_t offset, int8_t expected, int8_t x) {
	return compareAndExchangeByte(o, offset, expected, x);
}

int8_t Unsafe::compareAndExchangeByteRelease(Object$* o, int64_t offset, int8_t expected, int8_t x) {
	return compareAndExchangeByte(o, offset, expected, x);
}

int16_t Unsafe::compareAndExchangeShort(Object$* o, int64_t offset, int16_t expected, int16_t x) {
	if ((offset & 3) == 3) {
		$throwNew($IllegalArgumentException, "Update spans the word, not supported"_s);
	}
	int64_t wordOffset = offset & ~3;
	int32_t shift = (int32_t)(offset & 3) << 3;
	$init($UnsafeConstants);
	if ($UnsafeConstants::BIG_ENDIAN) {
		shift = 16 - shift;
	}
	int32_t mask = $sl(0x0000ffff, shift);
	int32_t maskedExpected = $sl(expected & 0xffff, shift);
	int32_t maskedX = $sl(x & 0xffff, shift);
	int32_t fullWord = 0;
	do {
		fullWord = getIntVolatile(o, wordOffset);
		if ((fullWord & mask) != maskedExpected) {
			return (int16_t)($sr(fullWord & mask, shift));
		}
	} while (!weakCompareAndSetInt(o, wordOffset, fullWord, (fullWord & ~mask) | maskedX));
	return expected;
}

bool Unsafe::compareAndSetShort(Object$* o, int64_t offset, int16_t expected, int16_t x) {
	return compareAndExchangeShort(o, offset, expected, x) == expected;
}

bool Unsafe::weakCompareAndSetShort(Object$* o, int64_t offset, int16_t expected, int16_t x) {
	return compareAndSetShort(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetShortAcquire(Object$* o, int64_t offset, int16_t expected, int16_t x) {
	return weakCompareAndSetShort(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetShortRelease(Object$* o, int64_t offset, int16_t expected, int16_t x) {
	return weakCompareAndSetShort(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetShortPlain(Object$* o, int64_t offset, int16_t expected, int16_t x) {
	return weakCompareAndSetShort(o, offset, expected, x);
}

int16_t Unsafe::compareAndExchangeShortAcquire(Object$* o, int64_t offset, int16_t expected, int16_t x) {
	return compareAndExchangeShort(o, offset, expected, x);
}

int16_t Unsafe::compareAndExchangeShortRelease(Object$* o, int64_t offset, int16_t expected, int16_t x) {
	return compareAndExchangeShort(o, offset, expected, x);
}

char16_t Unsafe::s2c(int16_t s) {
	return (char16_t)s;
}

int16_t Unsafe::c2s(char16_t s) {
	return (int16_t)s;
}

bool Unsafe::compareAndSetChar(Object$* o, int64_t offset, char16_t expected, char16_t x) {
	int16_t var$0 = c2s(expected);
	return compareAndSetShort(o, offset, var$0, c2s(x));
}

char16_t Unsafe::compareAndExchangeChar(Object$* o, int64_t offset, char16_t expected, char16_t x) {
	int16_t var$0 = c2s(expected);
	return s2c(compareAndExchangeShort(o, offset, var$0, c2s(x)));
}

char16_t Unsafe::compareAndExchangeCharAcquire(Object$* o, int64_t offset, char16_t expected, char16_t x) {
	int16_t var$0 = c2s(expected);
	return s2c(compareAndExchangeShortAcquire(o, offset, var$0, c2s(x)));
}

char16_t Unsafe::compareAndExchangeCharRelease(Object$* o, int64_t offset, char16_t expected, char16_t x) {
	int16_t var$0 = c2s(expected);
	return s2c(compareAndExchangeShortRelease(o, offset, var$0, c2s(x)));
}

bool Unsafe::weakCompareAndSetChar(Object$* o, int64_t offset, char16_t expected, char16_t x) {
	int16_t var$0 = c2s(expected);
	return weakCompareAndSetShort(o, offset, var$0, c2s(x));
}

bool Unsafe::weakCompareAndSetCharAcquire(Object$* o, int64_t offset, char16_t expected, char16_t x) {
	int16_t var$0 = c2s(expected);
	return weakCompareAndSetShortAcquire(o, offset, var$0, c2s(x));
}

bool Unsafe::weakCompareAndSetCharRelease(Object$* o, int64_t offset, char16_t expected, char16_t x) {
	int16_t var$0 = c2s(expected);
	return weakCompareAndSetShortRelease(o, offset, var$0, c2s(x));
}

bool Unsafe::weakCompareAndSetCharPlain(Object$* o, int64_t offset, char16_t expected, char16_t x) {
	int16_t var$0 = c2s(expected);
	return weakCompareAndSetShortPlain(o, offset, var$0, c2s(x));
}

bool Unsafe::byte2bool(int8_t b) {
	return b != 0;
}

int8_t Unsafe::bool2byte(bool b) {
	return b ? (int8_t)1 : (int8_t)0;
}

bool Unsafe::compareAndSetBoolean(Object$* o, int64_t offset, bool expected, bool x) {
	int8_t var$0 = bool2byte(expected);
	return compareAndSetByte(o, offset, var$0, bool2byte(x));
}

bool Unsafe::compareAndExchangeBoolean(Object$* o, int64_t offset, bool expected, bool x) {
	int8_t var$0 = bool2byte(expected);
	return byte2bool(compareAndExchangeByte(o, offset, var$0, bool2byte(x)));
}

bool Unsafe::compareAndExchangeBooleanAcquire(Object$* o, int64_t offset, bool expected, bool x) {
	int8_t var$0 = bool2byte(expected);
	return byte2bool(compareAndExchangeByteAcquire(o, offset, var$0, bool2byte(x)));
}

bool Unsafe::compareAndExchangeBooleanRelease(Object$* o, int64_t offset, bool expected, bool x) {
	int8_t var$0 = bool2byte(expected);
	return byte2bool(compareAndExchangeByteRelease(o, offset, var$0, bool2byte(x)));
}

bool Unsafe::weakCompareAndSetBoolean(Object$* o, int64_t offset, bool expected, bool x) {
	int8_t var$0 = bool2byte(expected);
	return weakCompareAndSetByte(o, offset, var$0, bool2byte(x));
}

bool Unsafe::weakCompareAndSetBooleanAcquire(Object$* o, int64_t offset, bool expected, bool x) {
	int8_t var$0 = bool2byte(expected);
	return weakCompareAndSetByteAcquire(o, offset, var$0, bool2byte(x));
}

bool Unsafe::weakCompareAndSetBooleanRelease(Object$* o, int64_t offset, bool expected, bool x) {
	int8_t var$0 = bool2byte(expected);
	return weakCompareAndSetByteRelease(o, offset, var$0, bool2byte(x));
}

bool Unsafe::weakCompareAndSetBooleanPlain(Object$* o, int64_t offset, bool expected, bool x) {
	int8_t var$0 = bool2byte(expected);
	return weakCompareAndSetBytePlain(o, offset, var$0, bool2byte(x));
}

bool Unsafe::compareAndSetFloat(Object$* o, int64_t offset, float expected, float x) {
	int32_t var$0 = $Float::floatToRawIntBits(expected);
	return compareAndSetInt(o, offset, var$0, $Float::floatToRawIntBits(x));
}

float Unsafe::compareAndExchangeFloat(Object$* o, int64_t offset, float expected, float x) {
	int32_t var$0 = $Float::floatToRawIntBits(expected);
	int32_t w = compareAndExchangeInt(o, offset, var$0, $Float::floatToRawIntBits(x));
	return $Float::intBitsToFloat(w);
}

float Unsafe::compareAndExchangeFloatAcquire(Object$* o, int64_t offset, float expected, float x) {
	int32_t var$0 = $Float::floatToRawIntBits(expected);
	int32_t w = compareAndExchangeIntAcquire(o, offset, var$0, $Float::floatToRawIntBits(x));
	return $Float::intBitsToFloat(w);
}

float Unsafe::compareAndExchangeFloatRelease(Object$* o, int64_t offset, float expected, float x) {
	int32_t var$0 = $Float::floatToRawIntBits(expected);
	int32_t w = compareAndExchangeIntRelease(o, offset, var$0, $Float::floatToRawIntBits(x));
	return $Float::intBitsToFloat(w);
}

bool Unsafe::weakCompareAndSetFloatPlain(Object$* o, int64_t offset, float expected, float x) {
	int32_t var$0 = $Float::floatToRawIntBits(expected);
	return weakCompareAndSetIntPlain(o, offset, var$0, $Float::floatToRawIntBits(x));
}

bool Unsafe::weakCompareAndSetFloatAcquire(Object$* o, int64_t offset, float expected, float x) {
	int32_t var$0 = $Float::floatToRawIntBits(expected);
	return weakCompareAndSetIntAcquire(o, offset, var$0, $Float::floatToRawIntBits(x));
}

bool Unsafe::weakCompareAndSetFloatRelease(Object$* o, int64_t offset, float expected, float x) {
	int32_t var$0 = $Float::floatToRawIntBits(expected);
	return weakCompareAndSetIntRelease(o, offset, var$0, $Float::floatToRawIntBits(x));
}

bool Unsafe::weakCompareAndSetFloat(Object$* o, int64_t offset, float expected, float x) {
	int32_t var$0 = $Float::floatToRawIntBits(expected);
	return weakCompareAndSetInt(o, offset, var$0, $Float::floatToRawIntBits(x));
}

bool Unsafe::compareAndSetDouble(Object$* o, int64_t offset, double expected, double x) {
	int64_t var$0 = $Double::doubleToRawLongBits(expected);
	return compareAndSetLong(o, offset, var$0, $Double::doubleToRawLongBits(x));
}

double Unsafe::compareAndExchangeDouble(Object$* o, int64_t offset, double expected, double x) {
	int64_t var$0 = $Double::doubleToRawLongBits(expected);
	int64_t w = compareAndExchangeLong(o, offset, var$0, $Double::doubleToRawLongBits(x));
	return $Double::longBitsToDouble(w);
}

double Unsafe::compareAndExchangeDoubleAcquire(Object$* o, int64_t offset, double expected, double x) {
	int64_t var$0 = $Double::doubleToRawLongBits(expected);
	int64_t w = compareAndExchangeLongAcquire(o, offset, var$0, $Double::doubleToRawLongBits(x));
	return $Double::longBitsToDouble(w);
}

double Unsafe::compareAndExchangeDoubleRelease(Object$* o, int64_t offset, double expected, double x) {
	int64_t var$0 = $Double::doubleToRawLongBits(expected);
	int64_t w = compareAndExchangeLongRelease(o, offset, var$0, $Double::doubleToRawLongBits(x));
	return $Double::longBitsToDouble(w);
}

bool Unsafe::weakCompareAndSetDoublePlain(Object$* o, int64_t offset, double expected, double x) {
	int64_t var$0 = $Double::doubleToRawLongBits(expected);
	return weakCompareAndSetLongPlain(o, offset, var$0, $Double::doubleToRawLongBits(x));
}

bool Unsafe::weakCompareAndSetDoubleAcquire(Object$* o, int64_t offset, double expected, double x) {
	int64_t var$0 = $Double::doubleToRawLongBits(expected);
	return weakCompareAndSetLongAcquire(o, offset, var$0, $Double::doubleToRawLongBits(x));
}

bool Unsafe::weakCompareAndSetDoubleRelease(Object$* o, int64_t offset, double expected, double x) {
	int64_t var$0 = $Double::doubleToRawLongBits(expected);
	return weakCompareAndSetLongRelease(o, offset, var$0, $Double::doubleToRawLongBits(x));
}

bool Unsafe::weakCompareAndSetDouble(Object$* o, int64_t offset, double expected, double x) {
	int64_t var$0 = $Double::doubleToRawLongBits(expected);
	return weakCompareAndSetLong(o, offset, var$0, $Double::doubleToRawLongBits(x));
}

bool Unsafe::compareAndSetLong(Object$* o, int64_t offset, int64_t expected, int64_t x) {
	int64_t* ptr = nullptr;
	if (o != nullptr) {
		ptr = (int64_t*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (int64_t*)(offset);
	}
	bool ret = std::atomic_compare_exchange_strong((std::atomic<int64_t>*)ptr, &expected, x);
	return ret;
}

int64_t Unsafe::compareAndExchangeLong(Object$* o, int64_t offset, int64_t expected, int64_t x) {
	int64_t* ptr = nullptr;
	if (o != nullptr) {
		ptr = (int64_t*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (int64_t*)(offset);
	}
	bool ret = std::atomic_compare_exchange_strong((std::atomic<int64_t>*)ptr, &expected, x);
	return expected;
}

int64_t Unsafe::compareAndExchangeLongAcquire(Object$* o, int64_t offset, int64_t expected, int64_t x) {
	return compareAndExchangeLong(o, offset, expected, x);
}

int64_t Unsafe::compareAndExchangeLongRelease(Object$* o, int64_t offset, int64_t expected, int64_t x) {
	return compareAndExchangeLong(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetLongPlain(Object$* o, int64_t offset, int64_t expected, int64_t x) {
	return compareAndSetLong(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetLongAcquire(Object$* o, int64_t offset, int64_t expected, int64_t x) {
	return compareAndSetLong(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetLongRelease(Object$* o, int64_t offset, int64_t expected, int64_t x) {
	return compareAndSetLong(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetLong(Object$* o, int64_t offset, int64_t expected, int64_t x) {
	return compareAndSetLong(o, offset, expected, x);
}

$Object* Unsafe::getReferenceVolatile(Object$* o, int64_t offset) {
	$Object* ret = getReference(o, offset);
	$loadfence();
	return ret;
}

void Unsafe::putReferenceVolatile(Object$* o, int64_t offset, Object$* x) {
	$storestore();
	putReference(o, offset, x);
	$storeload();
}

int32_t Unsafe::getIntVolatile(Object$* o, int64_t offset) {
	int32_t ret = getInt(o, offset);
	$loadfence();
	return ret;
}

void Unsafe::putIntVolatile(Object$* o, int64_t offset, int32_t x) {
	$storestore();
	putInt(o, offset, x);
	$storeload();
}

bool Unsafe::getBooleanVolatile(Object$* o, int64_t offset) {
	bool ret = getBoolean(o, offset);
	$loadfence();
	return ret;
}

void Unsafe::putBooleanVolatile(Object$* o, int64_t offset, bool x) {
	$storestore();
	putBoolean(o, offset, x);
	$storeload();
}

int8_t Unsafe::getByteVolatile(Object$* o, int64_t offset) {
	int8_t ret = getByte(o, offset);
	$loadfence();
	return ret;
}

void Unsafe::putByteVolatile(Object$* o, int64_t offset, int8_t x) {
	$storestore();
	putByte(o, offset, x);
	$storeload();
}

int16_t Unsafe::getShortVolatile(Object$* o, int64_t offset) {
	int16_t ret = getShort(o, offset);
	$loadfence();
	return ret;
}

void Unsafe::putShortVolatile(Object$* o, int64_t offset, int16_t x) {
	$storestore();
	putShort(o, offset, x);
	$storeload();
}

char16_t Unsafe::getCharVolatile(Object$* o, int64_t offset) {
	char16_t ret = getChar(o, offset);
	$loadfence();
	return ret;
}

void Unsafe::putCharVolatile(Object$* o, int64_t offset, char16_t x) {
	$storestore();
	putChar(o, offset, x);
	$storeload();
}

int64_t Unsafe::getLongVolatile(Object$* o, int64_t offset) {
	int64_t ret = getLong(o, offset);
	$loadfence();
	return ret;
}

void Unsafe::putLongVolatile(Object$* o, int64_t offset, int64_t x) {
	$storestore();
	putLong(o, offset, x);
	$storeload();
}

float Unsafe::getFloatVolatile(Object$* o, int64_t offset) {
	float ret = getFloat(o, offset);
	$loadfence();
	return ret;
}

void Unsafe::putFloatVolatile(Object$* o, int64_t offset, float x) {
	$storestore();
	putFloat(o, offset, x);
	$storeload();
}

double Unsafe::getDoubleVolatile(Object$* o, int64_t offset) {
	double ret = getDouble(o, offset);
	$loadfence();
	return ret;
}

void Unsafe::putDoubleVolatile(Object$* o, int64_t offset, double x) {
	$storestore();
	putDouble(o, offset, x);
	$storeload();
}

$Object* Unsafe::getReferenceAcquire(Object$* o, int64_t offset) {
	return getReferenceVolatile(o, offset);
}

bool Unsafe::getBooleanAcquire(Object$* o, int64_t offset) {
	return getBooleanVolatile(o, offset);
}

int8_t Unsafe::getByteAcquire(Object$* o, int64_t offset) {
	return getByteVolatile(o, offset);
}

int16_t Unsafe::getShortAcquire(Object$* o, int64_t offset) {
	return getShortVolatile(o, offset);
}

char16_t Unsafe::getCharAcquire(Object$* o, int64_t offset) {
	return getCharVolatile(o, offset);
}

int32_t Unsafe::getIntAcquire(Object$* o, int64_t offset) {
	return getIntVolatile(o, offset);
}

float Unsafe::getFloatAcquire(Object$* o, int64_t offset) {
	return getFloatVolatile(o, offset);
}

int64_t Unsafe::getLongAcquire(Object$* o, int64_t offset) {
	return getLongVolatile(o, offset);
}

double Unsafe::getDoubleAcquire(Object$* o, int64_t offset) {
	return getDoubleVolatile(o, offset);
}

void Unsafe::putReferenceRelease(Object$* o, int64_t offset, Object$* x) {
	putReferenceVolatile(o, offset, x);
}

void Unsafe::putBooleanRelease(Object$* o, int64_t offset, bool x) {
	putBooleanVolatile(o, offset, x);
}

void Unsafe::putByteRelease(Object$* o, int64_t offset, int8_t x) {
	putByteVolatile(o, offset, x);
}

void Unsafe::putShortRelease(Object$* o, int64_t offset, int16_t x) {
	putShortVolatile(o, offset, x);
}

void Unsafe::putCharRelease(Object$* o, int64_t offset, char16_t x) {
	putCharVolatile(o, offset, x);
}

void Unsafe::putIntRelease(Object$* o, int64_t offset, int32_t x) {
	putIntVolatile(o, offset, x);
}

void Unsafe::putFloatRelease(Object$* o, int64_t offset, float x) {
	putFloatVolatile(o, offset, x);
}

void Unsafe::putLongRelease(Object$* o, int64_t offset, int64_t x) {
	putLongVolatile(o, offset, x);
}

void Unsafe::putDoubleRelease(Object$* o, int64_t offset, double x) {
	putDoubleVolatile(o, offset, x);
}

$Object* Unsafe::getReferenceOpaque(Object$* o, int64_t offset) {
	return getReferenceVolatile(o, offset);
}

bool Unsafe::getBooleanOpaque(Object$* o, int64_t offset) {
	return getBooleanVolatile(o, offset);
}

int8_t Unsafe::getByteOpaque(Object$* o, int64_t offset) {
	return getByteVolatile(o, offset);
}

int16_t Unsafe::getShortOpaque(Object$* o, int64_t offset) {
	return getShortVolatile(o, offset);
}

char16_t Unsafe::getCharOpaque(Object$* o, int64_t offset) {
	return getCharVolatile(o, offset);
}

int32_t Unsafe::getIntOpaque(Object$* o, int64_t offset) {
	return getIntVolatile(o, offset);
}

float Unsafe::getFloatOpaque(Object$* o, int64_t offset) {
	return getFloatVolatile(o, offset);
}

int64_t Unsafe::getLongOpaque(Object$* o, int64_t offset) {
	return getLongVolatile(o, offset);
}

double Unsafe::getDoubleOpaque(Object$* o, int64_t offset) {
	return getDoubleVolatile(o, offset);
}

void Unsafe::putReferenceOpaque(Object$* o, int64_t offset, Object$* x) {
	putReferenceVolatile(o, offset, x);
}

void Unsafe::putBooleanOpaque(Object$* o, int64_t offset, bool x) {
	putBooleanVolatile(o, offset, x);
}

void Unsafe::putByteOpaque(Object$* o, int64_t offset, int8_t x) {
	putByteVolatile(o, offset, x);
}

void Unsafe::putShortOpaque(Object$* o, int64_t offset, int16_t x) {
	putShortVolatile(o, offset, x);
}

void Unsafe::putCharOpaque(Object$* o, int64_t offset, char16_t x) {
	putCharVolatile(o, offset, x);
}

void Unsafe::putIntOpaque(Object$* o, int64_t offset, int32_t x) {
	putIntVolatile(o, offset, x);
}

void Unsafe::putFloatOpaque(Object$* o, int64_t offset, float x) {
	putFloatVolatile(o, offset, x);
}

void Unsafe::putLongOpaque(Object$* o, int64_t offset, int64_t x) {
	putLongVolatile(o, offset, x);
}

void Unsafe::putDoubleOpaque(Object$* o, int64_t offset, double x) {
	putDoubleVolatile(o, offset, x);
}

void Unsafe::unpark(Object$* thread) {
	Thread* t = (Thread*)thread;
	if (t != nullptr) {
		t->unpark();
	}
}

void Unsafe::park(bool isAbsolute, int64_t time) {
	Thread* t = Thread::currentThread();
	t->park(isAbsolute, time);
}

int32_t Unsafe::getLoadAverage($doubles* loadavg, int32_t nelems) {
	if (nelems < 0 || nelems > 3 || nelems > $nc(loadavg)->length) {
		$throwNew($ArrayIndexOutOfBoundsException);
	}
	return getLoadAverage0(loadavg, nelems);
}

int32_t Unsafe::getAndAddInt(Object$* o, int64_t offset, int32_t delta) {
	int32_t v = 0;
	do {
		v = getIntVolatile(o, offset);
	} while (!weakCompareAndSetInt(o, offset, v, v + delta));
	return v;
}

int32_t Unsafe::getAndAddIntRelease(Object$* o, int64_t offset, int32_t delta) {
	int32_t v = 0;
	do {
		v = getInt(o, offset);
	} while (!weakCompareAndSetIntRelease(o, offset, v, v + delta));
	return v;
}

int32_t Unsafe::getAndAddIntAcquire(Object$* o, int64_t offset, int32_t delta) {
	int32_t v = 0;
	do {
		v = getIntAcquire(o, offset);
	} while (!weakCompareAndSetIntAcquire(o, offset, v, v + delta));
	return v;
}

int64_t Unsafe::getAndAddLong(Object$* o, int64_t offset, int64_t delta) {
	int64_t v = 0;
	do {
		v = getLongVolatile(o, offset);
	} while (!weakCompareAndSetLong(o, offset, v, v + delta));
	return v;
}

int64_t Unsafe::getAndAddLongRelease(Object$* o, int64_t offset, int64_t delta) {
	int64_t v = 0;
	do {
		v = getLong(o, offset);
	} while (!weakCompareAndSetLongRelease(o, offset, v, v + delta));
	return v;
}

int64_t Unsafe::getAndAddLongAcquire(Object$* o, int64_t offset, int64_t delta) {
	int64_t v = 0;
	do {
		v = getLongAcquire(o, offset);
	} while (!weakCompareAndSetLongAcquire(o, offset, v, v + delta));
	return v;
}

int8_t Unsafe::getAndAddByte(Object$* o, int64_t offset, int8_t delta) {
	int8_t v = 0;
	do {
		v = getByteVolatile(o, offset);
	} while (!weakCompareAndSetByte(o, offset, v, (int8_t)(v + delta)));
	return v;
}

int8_t Unsafe::getAndAddByteRelease(Object$* o, int64_t offset, int8_t delta) {
	int8_t v = 0;
	do {
		v = getByte(o, offset);
	} while (!weakCompareAndSetByteRelease(o, offset, v, (int8_t)(v + delta)));
	return v;
}

int8_t Unsafe::getAndAddByteAcquire(Object$* o, int64_t offset, int8_t delta) {
	int8_t v = 0;
	do {
		v = getByteAcquire(o, offset);
	} while (!weakCompareAndSetByteAcquire(o, offset, v, (int8_t)(v + delta)));
	return v;
}

int16_t Unsafe::getAndAddShort(Object$* o, int64_t offset, int16_t delta) {
	int16_t v = 0;
	do {
		v = getShortVolatile(o, offset);
	} while (!weakCompareAndSetShort(o, offset, v, (int16_t)(v + delta)));
	return v;
}

int16_t Unsafe::getAndAddShortRelease(Object$* o, int64_t offset, int16_t delta) {
	int16_t v = 0;
	do {
		v = getShort(o, offset);
	} while (!weakCompareAndSetShortRelease(o, offset, v, (int16_t)(v + delta)));
	return v;
}

int16_t Unsafe::getAndAddShortAcquire(Object$* o, int64_t offset, int16_t delta) {
	int16_t v = 0;
	do {
		v = getShortAcquire(o, offset);
	} while (!weakCompareAndSetShortAcquire(o, offset, v, (int16_t)(v + delta)));
	return v;
}

char16_t Unsafe::getAndAddChar(Object$* o, int64_t offset, char16_t delta) {
	return (char16_t)getAndAddShort(o, offset, (int16_t)delta);
}

char16_t Unsafe::getAndAddCharRelease(Object$* o, int64_t offset, char16_t delta) {
	return (char16_t)getAndAddShortRelease(o, offset, (int16_t)delta);
}

char16_t Unsafe::getAndAddCharAcquire(Object$* o, int64_t offset, char16_t delta) {
	return (char16_t)getAndAddShortAcquire(o, offset, (int16_t)delta);
}

float Unsafe::getAndAddFloat(Object$* o, int64_t offset, float delta) {
	int32_t expectedBits = 0;
	float v = 0.0;
	do {
		expectedBits = getIntVolatile(o, offset);
		v = $Float::intBitsToFloat(expectedBits);
	} while (!weakCompareAndSetInt(o, offset, expectedBits, $Float::floatToRawIntBits(v + delta)));
	return v;
}

float Unsafe::getAndAddFloatRelease(Object$* o, int64_t offset, float delta) {
	int32_t expectedBits = 0;
	float v = 0.0;
	do {
		expectedBits = getInt(o, offset);
		v = $Float::intBitsToFloat(expectedBits);
	} while (!weakCompareAndSetIntRelease(o, offset, expectedBits, $Float::floatToRawIntBits(v + delta)));
	return v;
}

float Unsafe::getAndAddFloatAcquire(Object$* o, int64_t offset, float delta) {
	int32_t expectedBits = 0;
	float v = 0.0;
	do {
		expectedBits = getIntAcquire(o, offset);
		v = $Float::intBitsToFloat(expectedBits);
	} while (!weakCompareAndSetIntAcquire(o, offset, expectedBits, $Float::floatToRawIntBits(v + delta)));
	return v;
}

double Unsafe::getAndAddDouble(Object$* o, int64_t offset, double delta) {
	int64_t expectedBits = 0;
	double v = 0.0;
	do {
		expectedBits = getLongVolatile(o, offset);
		v = $Double::longBitsToDouble(expectedBits);
	} while (!weakCompareAndSetLong(o, offset, expectedBits, $Double::doubleToRawLongBits(v + delta)));
	return v;
}

double Unsafe::getAndAddDoubleRelease(Object$* o, int64_t offset, double delta) {
	int64_t expectedBits = 0;
	double v = 0.0;
	do {
		expectedBits = getLong(o, offset);
		v = $Double::longBitsToDouble(expectedBits);
	} while (!weakCompareAndSetLongRelease(o, offset, expectedBits, $Double::doubleToRawLongBits(v + delta)));
	return v;
}

double Unsafe::getAndAddDoubleAcquire(Object$* o, int64_t offset, double delta) {
	int64_t expectedBits = 0;
	double v = 0.0;
	do {
		expectedBits = getLongAcquire(o, offset);
		v = $Double::longBitsToDouble(expectedBits);
	} while (!weakCompareAndSetLongAcquire(o, offset, expectedBits, $Double::doubleToRawLongBits(v + delta)));
	return v;
}

int32_t Unsafe::getAndSetInt(Object$* o, int64_t offset, int32_t newValue) {
	int32_t v = 0;
	do {
		v = getIntVolatile(o, offset);
	} while (!weakCompareAndSetInt(o, offset, v, newValue));
	return v;
}

int32_t Unsafe::getAndSetIntRelease(Object$* o, int64_t offset, int32_t newValue) {
	int32_t v = 0;
	do {
		v = getInt(o, offset);
	} while (!weakCompareAndSetIntRelease(o, offset, v, newValue));
	return v;
}

int32_t Unsafe::getAndSetIntAcquire(Object$* o, int64_t offset, int32_t newValue) {
	int32_t v = 0;
	do {
		v = getIntAcquire(o, offset);
	} while (!weakCompareAndSetIntAcquire(o, offset, v, newValue));
	return v;
}

int64_t Unsafe::getAndSetLong(Object$* o, int64_t offset, int64_t newValue) {
	int64_t v = 0;
	do {
		v = getLongVolatile(o, offset);
	} while (!weakCompareAndSetLong(o, offset, v, newValue));
	return v;
}

int64_t Unsafe::getAndSetLongRelease(Object$* o, int64_t offset, int64_t newValue) {
	int64_t v = 0;
	do {
		v = getLong(o, offset);
	} while (!weakCompareAndSetLongRelease(o, offset, v, newValue));
	return v;
}

int64_t Unsafe::getAndSetLongAcquire(Object$* o, int64_t offset, int64_t newValue) {
	int64_t v = 0;
	do {
		v = getLongAcquire(o, offset);
	} while (!weakCompareAndSetLongAcquire(o, offset, v, newValue));
	return v;
}

$Object* Unsafe::getAndSetReference(Object$* o, int64_t offset, Object$* newValue) {
	$var($Object, v, nullptr);
	do {
		$assign(v, getReferenceVolatile(o, offset));
	} while (!weakCompareAndSetReference(o, offset, v, newValue));
	return v;
}

$Object* Unsafe::getAndSetReferenceRelease(Object$* o, int64_t offset, Object$* newValue) {
	$var($Object, v, nullptr);
	do {
		$assign(v, getReference(o, offset));
	} while (!weakCompareAndSetReferenceRelease(o, offset, v, newValue));
	return v;
}

$Object* Unsafe::getAndSetReferenceAcquire(Object$* o, int64_t offset, Object$* newValue) {
	$var($Object, v, nullptr);
	do {
		$assign(v, getReferenceAcquire(o, offset));
	} while (!weakCompareAndSetReferenceAcquire(o, offset, v, newValue));
	return v;
}

int8_t Unsafe::getAndSetByte(Object$* o, int64_t offset, int8_t newValue) {
	int8_t v = 0;
	do {
		v = getByteVolatile(o, offset);
	} while (!weakCompareAndSetByte(o, offset, v, newValue));
	return v;
}

int8_t Unsafe::getAndSetByteRelease(Object$* o, int64_t offset, int8_t newValue) {
	int8_t v = 0;
	do {
		v = getByte(o, offset);
	} while (!weakCompareAndSetByteRelease(o, offset, v, newValue));
	return v;
}

int8_t Unsafe::getAndSetByteAcquire(Object$* o, int64_t offset, int8_t newValue) {
	int8_t v = 0;
	do {
		v = getByteAcquire(o, offset);
	} while (!weakCompareAndSetByteAcquire(o, offset, v, newValue));
	return v;
}

bool Unsafe::getAndSetBoolean(Object$* o, int64_t offset, bool newValue) {
	return byte2bool(getAndSetByte(o, offset, bool2byte(newValue)));
}

bool Unsafe::getAndSetBooleanRelease(Object$* o, int64_t offset, bool newValue) {
	return byte2bool(getAndSetByteRelease(o, offset, bool2byte(newValue)));
}

bool Unsafe::getAndSetBooleanAcquire(Object$* o, int64_t offset, bool newValue) {
	return byte2bool(getAndSetByteAcquire(o, offset, bool2byte(newValue)));
}

int16_t Unsafe::getAndSetShort(Object$* o, int64_t offset, int16_t newValue) {
	int16_t v = 0;
	do {
		v = getShortVolatile(o, offset);
	} while (!weakCompareAndSetShort(o, offset, v, newValue));
	return v;
}

int16_t Unsafe::getAndSetShortRelease(Object$* o, int64_t offset, int16_t newValue) {
	int16_t v = 0;
	do {
		v = getShort(o, offset);
	} while (!weakCompareAndSetShortRelease(o, offset, v, newValue));
	return v;
}

int16_t Unsafe::getAndSetShortAcquire(Object$* o, int64_t offset, int16_t newValue) {
	int16_t v = 0;
	do {
		v = getShortAcquire(o, offset);
	} while (!weakCompareAndSetShortAcquire(o, offset, v, newValue));
	return v;
}

char16_t Unsafe::getAndSetChar(Object$* o, int64_t offset, char16_t newValue) {
	return s2c(getAndSetShort(o, offset, c2s(newValue)));
}

char16_t Unsafe::getAndSetCharRelease(Object$* o, int64_t offset, char16_t newValue) {
	return s2c(getAndSetShortRelease(o, offset, c2s(newValue)));
}

char16_t Unsafe::getAndSetCharAcquire(Object$* o, int64_t offset, char16_t newValue) {
	return s2c(getAndSetShortAcquire(o, offset, c2s(newValue)));
}

float Unsafe::getAndSetFloat(Object$* o, int64_t offset, float newValue) {
	int32_t v = getAndSetInt(o, offset, $Float::floatToRawIntBits(newValue));
	return $Float::intBitsToFloat(v);
}

float Unsafe::getAndSetFloatRelease(Object$* o, int64_t offset, float newValue) {
	int32_t v = getAndSetIntRelease(o, offset, $Float::floatToRawIntBits(newValue));
	return $Float::intBitsToFloat(v);
}

float Unsafe::getAndSetFloatAcquire(Object$* o, int64_t offset, float newValue) {
	int32_t v = getAndSetIntAcquire(o, offset, $Float::floatToRawIntBits(newValue));
	return $Float::intBitsToFloat(v);
}

double Unsafe::getAndSetDouble(Object$* o, int64_t offset, double newValue) {
	int64_t v = getAndSetLong(o, offset, $Double::doubleToRawLongBits(newValue));
	return $Double::longBitsToDouble(v);
}

double Unsafe::getAndSetDoubleRelease(Object$* o, int64_t offset, double newValue) {
	int64_t v = getAndSetLongRelease(o, offset, $Double::doubleToRawLongBits(newValue));
	return $Double::longBitsToDouble(v);
}

double Unsafe::getAndSetDoubleAcquire(Object$* o, int64_t offset, double newValue) {
	int64_t v = getAndSetLongAcquire(o, offset, $Double::doubleToRawLongBits(newValue));
	return $Double::longBitsToDouble(v);
}

bool Unsafe::getAndBitwiseOrBoolean(Object$* o, int64_t offset, bool mask) {
	return byte2bool(getAndBitwiseOrByte(o, offset, bool2byte(mask)));
}

bool Unsafe::getAndBitwiseOrBooleanRelease(Object$* o, int64_t offset, bool mask) {
	return byte2bool(getAndBitwiseOrByteRelease(o, offset, bool2byte(mask)));
}

bool Unsafe::getAndBitwiseOrBooleanAcquire(Object$* o, int64_t offset, bool mask) {
	return byte2bool(getAndBitwiseOrByteAcquire(o, offset, bool2byte(mask)));
}

bool Unsafe::getAndBitwiseAndBoolean(Object$* o, int64_t offset, bool mask) {
	return byte2bool(getAndBitwiseAndByte(o, offset, bool2byte(mask)));
}

bool Unsafe::getAndBitwiseAndBooleanRelease(Object$* o, int64_t offset, bool mask) {
	return byte2bool(getAndBitwiseAndByteRelease(o, offset, bool2byte(mask)));
}

bool Unsafe::getAndBitwiseAndBooleanAcquire(Object$* o, int64_t offset, bool mask) {
	return byte2bool(getAndBitwiseAndByteAcquire(o, offset, bool2byte(mask)));
}

bool Unsafe::getAndBitwiseXorBoolean(Object$* o, int64_t offset, bool mask) {
	return byte2bool(getAndBitwiseXorByte(o, offset, bool2byte(mask)));
}

bool Unsafe::getAndBitwiseXorBooleanRelease(Object$* o, int64_t offset, bool mask) {
	return byte2bool(getAndBitwiseXorByteRelease(o, offset, bool2byte(mask)));
}

bool Unsafe::getAndBitwiseXorBooleanAcquire(Object$* o, int64_t offset, bool mask) {
	return byte2bool(getAndBitwiseXorByteAcquire(o, offset, bool2byte(mask)));
}

int8_t Unsafe::getAndBitwiseOrByte(Object$* o, int64_t offset, int8_t mask) {
	int8_t current = 0;
	do {
		current = getByteVolatile(o, offset);
	} while (!weakCompareAndSetByte(o, offset, current, (int8_t)(current | mask)));
	return current;
}

int8_t Unsafe::getAndBitwiseOrByteRelease(Object$* o, int64_t offset, int8_t mask) {
	int8_t current = 0;
	do {
		current = getByte(o, offset);
	} while (!weakCompareAndSetByteRelease(o, offset, current, (int8_t)(current | mask)));
	return current;
}

int8_t Unsafe::getAndBitwiseOrByteAcquire(Object$* o, int64_t offset, int8_t mask) {
	int8_t current = 0;
	do {
		current = getByte(o, offset);
	} while (!weakCompareAndSetByteAcquire(o, offset, current, (int8_t)(current | mask)));
	return current;
}

int8_t Unsafe::getAndBitwiseAndByte(Object$* o, int64_t offset, int8_t mask) {
	int8_t current = 0;
	do {
		current = getByteVolatile(o, offset);
	} while (!weakCompareAndSetByte(o, offset, current, (int8_t)(current & mask)));
	return current;
}

int8_t Unsafe::getAndBitwiseAndByteRelease(Object$* o, int64_t offset, int8_t mask) {
	int8_t current = 0;
	do {
		current = getByte(o, offset);
	} while (!weakCompareAndSetByteRelease(o, offset, current, (int8_t)(current & mask)));
	return current;
}

int8_t Unsafe::getAndBitwiseAndByteAcquire(Object$* o, int64_t offset, int8_t mask) {
	int8_t current = 0;
	do {
		current = getByte(o, offset);
	} while (!weakCompareAndSetByteAcquire(o, offset, current, (int8_t)(current & mask)));
	return current;
}

int8_t Unsafe::getAndBitwiseXorByte(Object$* o, int64_t offset, int8_t mask) {
	int8_t current = 0;
	do {
		current = getByteVolatile(o, offset);
	} while (!weakCompareAndSetByte(o, offset, current, (int8_t)(current ^ mask)));
	return current;
}

int8_t Unsafe::getAndBitwiseXorByteRelease(Object$* o, int64_t offset, int8_t mask) {
	int8_t current = 0;
	do {
		current = getByte(o, offset);
	} while (!weakCompareAndSetByteRelease(o, offset, current, (int8_t)(current ^ mask)));
	return current;
}

int8_t Unsafe::getAndBitwiseXorByteAcquire(Object$* o, int64_t offset, int8_t mask) {
	int8_t current = 0;
	do {
		current = getByte(o, offset);
	} while (!weakCompareAndSetByteAcquire(o, offset, current, (int8_t)(current ^ mask)));
	return current;
}

char16_t Unsafe::getAndBitwiseOrChar(Object$* o, int64_t offset, char16_t mask) {
	return s2c(getAndBitwiseOrShort(o, offset, c2s(mask)));
}

char16_t Unsafe::getAndBitwiseOrCharRelease(Object$* o, int64_t offset, char16_t mask) {
	return s2c(getAndBitwiseOrShortRelease(o, offset, c2s(mask)));
}

char16_t Unsafe::getAndBitwiseOrCharAcquire(Object$* o, int64_t offset, char16_t mask) {
	return s2c(getAndBitwiseOrShortAcquire(o, offset, c2s(mask)));
}

char16_t Unsafe::getAndBitwiseAndChar(Object$* o, int64_t offset, char16_t mask) {
	return s2c(getAndBitwiseAndShort(o, offset, c2s(mask)));
}

char16_t Unsafe::getAndBitwiseAndCharRelease(Object$* o, int64_t offset, char16_t mask) {
	return s2c(getAndBitwiseAndShortRelease(o, offset, c2s(mask)));
}

char16_t Unsafe::getAndBitwiseAndCharAcquire(Object$* o, int64_t offset, char16_t mask) {
	return s2c(getAndBitwiseAndShortAcquire(o, offset, c2s(mask)));
}

char16_t Unsafe::getAndBitwiseXorChar(Object$* o, int64_t offset, char16_t mask) {
	return s2c(getAndBitwiseXorShort(o, offset, c2s(mask)));
}

char16_t Unsafe::getAndBitwiseXorCharRelease(Object$* o, int64_t offset, char16_t mask) {
	return s2c(getAndBitwiseXorShortRelease(o, offset, c2s(mask)));
}

char16_t Unsafe::getAndBitwiseXorCharAcquire(Object$* o, int64_t offset, char16_t mask) {
	return s2c(getAndBitwiseXorShortAcquire(o, offset, c2s(mask)));
}

int16_t Unsafe::getAndBitwiseOrShort(Object$* o, int64_t offset, int16_t mask) {
	int16_t current = 0;
	do {
		current = getShortVolatile(o, offset);
	} while (!weakCompareAndSetShort(o, offset, current, (int16_t)(current | mask)));
	return current;
}

int16_t Unsafe::getAndBitwiseOrShortRelease(Object$* o, int64_t offset, int16_t mask) {
	int16_t current = 0;
	do {
		current = getShort(o, offset);
	} while (!weakCompareAndSetShortRelease(o, offset, current, (int16_t)(current | mask)));
	return current;
}

int16_t Unsafe::getAndBitwiseOrShortAcquire(Object$* o, int64_t offset, int16_t mask) {
	int16_t current = 0;
	do {
		current = getShort(o, offset);
	} while (!weakCompareAndSetShortAcquire(o, offset, current, (int16_t)(current | mask)));
	return current;
}

int16_t Unsafe::getAndBitwiseAndShort(Object$* o, int64_t offset, int16_t mask) {
	int16_t current = 0;
	do {
		current = getShortVolatile(o, offset);
	} while (!weakCompareAndSetShort(o, offset, current, (int16_t)(current & mask)));
	return current;
}

int16_t Unsafe::getAndBitwiseAndShortRelease(Object$* o, int64_t offset, int16_t mask) {
	int16_t current = 0;
	do {
		current = getShort(o, offset);
	} while (!weakCompareAndSetShortRelease(o, offset, current, (int16_t)(current & mask)));
	return current;
}

int16_t Unsafe::getAndBitwiseAndShortAcquire(Object$* o, int64_t offset, int16_t mask) {
	int16_t current = 0;
	do {
		current = getShort(o, offset);
	} while (!weakCompareAndSetShortAcquire(o, offset, current, (int16_t)(current & mask)));
	return current;
}

int16_t Unsafe::getAndBitwiseXorShort(Object$* o, int64_t offset, int16_t mask) {
	int16_t current = 0;
	do {
		current = getShortVolatile(o, offset);
	} while (!weakCompareAndSetShort(o, offset, current, (int16_t)(current ^ mask)));
	return current;
}

int16_t Unsafe::getAndBitwiseXorShortRelease(Object$* o, int64_t offset, int16_t mask) {
	int16_t current = 0;
	do {
		current = getShort(o, offset);
	} while (!weakCompareAndSetShortRelease(o, offset, current, (int16_t)(current ^ mask)));
	return current;
}

int16_t Unsafe::getAndBitwiseXorShortAcquire(Object$* o, int64_t offset, int16_t mask) {
	int16_t current = 0;
	do {
		current = getShort(o, offset);
	} while (!weakCompareAndSetShortAcquire(o, offset, current, (int16_t)(current ^ mask)));
	return current;
}

int32_t Unsafe::getAndBitwiseOrInt(Object$* o, int64_t offset, int32_t mask) {
	int32_t current = 0;
	do {
		current = getIntVolatile(o, offset);
	} while (!weakCompareAndSetInt(o, offset, current, current | mask));
	return current;
}

int32_t Unsafe::getAndBitwiseOrIntRelease(Object$* o, int64_t offset, int32_t mask) {
	int32_t current = 0;
	do {
		current = getInt(o, offset);
	} while (!weakCompareAndSetIntRelease(o, offset, current, current | mask));
	return current;
}

int32_t Unsafe::getAndBitwiseOrIntAcquire(Object$* o, int64_t offset, int32_t mask) {
	int32_t current = 0;
	do {
		current = getInt(o, offset);
	} while (!weakCompareAndSetIntAcquire(o, offset, current, current | mask));
	return current;
}

int32_t Unsafe::getAndBitwiseAndInt(Object$* o, int64_t offset, int32_t mask) {
	int32_t current = 0;
	do {
		current = getIntVolatile(o, offset);
	} while (!weakCompareAndSetInt(o, offset, current, current & mask));
	return current;
}

int32_t Unsafe::getAndBitwiseAndIntRelease(Object$* o, int64_t offset, int32_t mask) {
	int32_t current = 0;
	do {
		current = getInt(o, offset);
	} while (!weakCompareAndSetIntRelease(o, offset, current, current & mask));
	return current;
}

int32_t Unsafe::getAndBitwiseAndIntAcquire(Object$* o, int64_t offset, int32_t mask) {
	int32_t current = 0;
	do {
		current = getInt(o, offset);
	} while (!weakCompareAndSetIntAcquire(o, offset, current, current & mask));
	return current;
}

int32_t Unsafe::getAndBitwiseXorInt(Object$* o, int64_t offset, int32_t mask) {
	int32_t current = 0;
	do {
		current = getIntVolatile(o, offset);
	} while (!weakCompareAndSetInt(o, offset, current, current ^ mask));
	return current;
}

int32_t Unsafe::getAndBitwiseXorIntRelease(Object$* o, int64_t offset, int32_t mask) {
	int32_t current = 0;
	do {
		current = getInt(o, offset);
	} while (!weakCompareAndSetIntRelease(o, offset, current, current ^ mask));
	return current;
}

int32_t Unsafe::getAndBitwiseXorIntAcquire(Object$* o, int64_t offset, int32_t mask) {
	int32_t current = 0;
	do {
		current = getInt(o, offset);
	} while (!weakCompareAndSetIntAcquire(o, offset, current, current ^ mask));
	return current;
}

int64_t Unsafe::getAndBitwiseOrLong(Object$* o, int64_t offset, int64_t mask) {
	int64_t current = 0;
	do {
		current = getLongVolatile(o, offset);
	} while (!weakCompareAndSetLong(o, offset, current, current | mask));
	return current;
}

int64_t Unsafe::getAndBitwiseOrLongRelease(Object$* o, int64_t offset, int64_t mask) {
	int64_t current = 0;
	do {
		current = getLong(o, offset);
	} while (!weakCompareAndSetLongRelease(o, offset, current, current | mask));
	return current;
}

int64_t Unsafe::getAndBitwiseOrLongAcquire(Object$* o, int64_t offset, int64_t mask) {
	int64_t current = 0;
	do {
		current = getLong(o, offset);
	} while (!weakCompareAndSetLongAcquire(o, offset, current, current | mask));
	return current;
}

int64_t Unsafe::getAndBitwiseAndLong(Object$* o, int64_t offset, int64_t mask) {
	int64_t current = 0;
	do {
		current = getLongVolatile(o, offset);
	} while (!weakCompareAndSetLong(o, offset, current, current & mask));
	return current;
}

int64_t Unsafe::getAndBitwiseAndLongRelease(Object$* o, int64_t offset, int64_t mask) {
	int64_t current = 0;
	do {
		current = getLong(o, offset);
	} while (!weakCompareAndSetLongRelease(o, offset, current, current & mask));
	return current;
}

int64_t Unsafe::getAndBitwiseAndLongAcquire(Object$* o, int64_t offset, int64_t mask) {
	int64_t current = 0;
	do {
		current = getLong(o, offset);
	} while (!weakCompareAndSetLongAcquire(o, offset, current, current & mask));
	return current;
}

int64_t Unsafe::getAndBitwiseXorLong(Object$* o, int64_t offset, int64_t mask) {
	int64_t current = 0;
	do {
		current = getLongVolatile(o, offset);
	} while (!weakCompareAndSetLong(o, offset, current, current ^ mask));
	return current;
}

int64_t Unsafe::getAndBitwiseXorLongRelease(Object$* o, int64_t offset, int64_t mask) {
	int64_t current = 0;
	do {
		current = getLong(o, offset);
	} while (!weakCompareAndSetLongRelease(o, offset, current, current ^ mask));
	return current;
}

int64_t Unsafe::getAndBitwiseXorLongAcquire(Object$* o, int64_t offset, int64_t mask) {
	int64_t current = 0;
	do {
		current = getLong(o, offset);
	} while (!weakCompareAndSetLongAcquire(o, offset, current, current ^ mask));
	return current;
}

void Unsafe::loadFence() {
	$loadfence();
}

void Unsafe::storeFence() {
	$storefence();
}

void Unsafe::fullFence() {
	$fence();
}

void Unsafe::loadLoadFence() {
	loadFence();
}

void Unsafe::storeStoreFence() {
	storeFence();
}

void Unsafe::throwIllegalAccessError() {
	$init(Unsafe);
	$throwNew($IllegalAccessError);
}

void Unsafe::throwNoSuchMethodError() {
	$init(Unsafe);
	$throwNew($NoSuchMethodError);
}

bool Unsafe::isBigEndian() {
	$init($UnsafeConstants);
	return $UnsafeConstants::BIG_ENDIAN;
}

bool Unsafe::unalignedAccess() {
	$init($UnsafeConstants);
	return $UnsafeConstants::UNALIGNED_ACCESS;
}

int64_t Unsafe::getLongUnaligned(Object$* o, int64_t offset) {
	if ((offset & 7) == 0) {
		return getLong(o, offset);
	} else if ((offset & 3) == 0) {
		int32_t var$0 = getInt(o, offset);
		return makeLong(var$0, getInt(o, offset + 4));
	} else if ((offset & 1) == 0) {
		int16_t var$1 = getShort(o, offset);
		int16_t var$2 = getShort(o, offset + 2);
		int16_t var$3 = getShort(o, offset + 4);
		return makeLong(var$1, var$2, var$3, getShort(o, offset + 6));
	} else {
		int8_t var$4 = getByte(o, offset);
		int8_t var$5 = getByte(o, offset + 1);
		int8_t var$6 = getByte(o, offset + 2);
		int8_t var$7 = getByte(o, offset + 3);
		int8_t var$8 = getByte(o, offset + 4);
		int8_t var$9 = getByte(o, offset + 5);
		int8_t var$10 = getByte(o, offset + 6);
		return makeLong(var$4, var$5, var$6, var$7, var$8, var$9, var$10, getByte(o, offset + 7));
	}
}

int64_t Unsafe::getLongUnaligned(Object$* o, int64_t offset, bool bigEndian) {
	return convEndian(bigEndian, getLongUnaligned(o, offset));
}

int32_t Unsafe::getIntUnaligned(Object$* o, int64_t offset) {
	if ((offset & 3) == 0) {
		return getInt(o, offset);
	} else if ((offset & 1) == 0) {
		int16_t var$0 = getShort(o, offset);
		return makeInt(var$0, getShort(o, offset + 2));
	} else {
		int8_t var$1 = getByte(o, offset);
		int8_t var$2 = getByte(o, offset + 1);
		int8_t var$3 = getByte(o, offset + 2);
		return makeInt(var$1, var$2, var$3, getByte(o, offset + 3));
	}
}

int32_t Unsafe::getIntUnaligned(Object$* o, int64_t offset, bool bigEndian) {
	return convEndian(bigEndian, getIntUnaligned(o, offset));
}

int16_t Unsafe::getShortUnaligned(Object$* o, int64_t offset) {
	if ((offset & 1) == 0) {
		return getShort(o, offset);
	} else {
		int8_t var$0 = getByte(o, offset);
		return makeShort(var$0, getByte(o, offset + 1));
	}
}

int16_t Unsafe::getShortUnaligned(Object$* o, int64_t offset, bool bigEndian) {
	return convEndian(bigEndian, getShortUnaligned(o, offset));
}

char16_t Unsafe::getCharUnaligned(Object$* o, int64_t offset) {
	if ((offset & 1) == 0) {
		return getChar(o, offset);
	} else {
		int8_t var$0 = getByte(o, offset);
		return (char16_t)makeShort(var$0, getByte(o, offset + 1));
	}
}

char16_t Unsafe::getCharUnaligned(Object$* o, int64_t offset, bool bigEndian) {
	return convEndian(bigEndian, getCharUnaligned(o, offset));
}

void Unsafe::putLongUnaligned(Object$* o, int64_t offset, int64_t x) {
	if ((offset & 7) == 0) {
		putLong(o, offset, x);
	} else if ((offset & 3) == 0) {
		putLongParts(o, offset, (int32_t)(x >> 0), (int32_t)((int64_t)((uint64_t)x >> 32)));
	} else if ((offset & 1) == 0) {
		putLongParts(o, offset, (int16_t)((int64_t)((uint64_t)x >> 0)), (int16_t)((int64_t)((uint64_t)x >> 16)), (int16_t)((int64_t)((uint64_t)x >> 32)), (int16_t)((int64_t)((uint64_t)x >> 48)));
	} else {
		putLongParts(o, offset, (int8_t)((int64_t)((uint64_t)x >> 0)), (int8_t)((int64_t)((uint64_t)x >> 8)), (int8_t)((int64_t)((uint64_t)x >> 16)), (int8_t)((int64_t)((uint64_t)x >> 24)), (int8_t)((int64_t)((uint64_t)x >> 32)), (int8_t)((int64_t)((uint64_t)x >> 40)), (int8_t)((int64_t)((uint64_t)x >> 48)), (int8_t)((int64_t)((uint64_t)x >> 56)));
	}
}

void Unsafe::putLongUnaligned(Object$* o, int64_t offset, int64_t x, bool bigEndian) {
	putLongUnaligned(o, offset, convEndian(bigEndian, x));
}

void Unsafe::putIntUnaligned(Object$* o, int64_t offset, int32_t x) {
	if ((offset & 3) == 0) {
		putInt(o, offset, x);
	} else if ((offset & 1) == 0) {
		putIntParts(o, offset, (int16_t)(x >> 0), (int16_t)((int32_t)((uint32_t)x >> 16)));
	} else {
		putIntParts(o, offset, (int8_t)((int32_t)((uint32_t)x >> 0)), (int8_t)((int32_t)((uint32_t)x >> 8)), (int8_t)((int32_t)((uint32_t)x >> 16)), (int8_t)((int32_t)((uint32_t)x >> 24)));
	}
}

void Unsafe::putIntUnaligned(Object$* o, int64_t offset, int32_t x, bool bigEndian) {
	putIntUnaligned(o, offset, convEndian(bigEndian, x));
}

void Unsafe::putShortUnaligned(Object$* o, int64_t offset, int16_t x) {
	if ((offset & 1) == 0) {
		putShort(o, offset, x);
	} else {
		putShortParts(o, offset, (int8_t)((int32_t)((uint32_t)x >> 0)), (int8_t)((int32_t)((uint32_t)x >> 8)));
	}
}

void Unsafe::putShortUnaligned(Object$* o, int64_t offset, int16_t x, bool bigEndian) {
	putShortUnaligned(o, offset, convEndian(bigEndian, x));
}

void Unsafe::putCharUnaligned(Object$* o, int64_t offset, char16_t x) {
	putShortUnaligned(o, offset, (int16_t)x);
}

void Unsafe::putCharUnaligned(Object$* o, int64_t offset, char16_t x, bool bigEndian) {
	putCharUnaligned(o, offset, convEndian(bigEndian, x));
}

int32_t Unsafe::pickPos(int32_t top, int32_t pos) {
	$init(Unsafe);
	$init($UnsafeConstants);
	return $UnsafeConstants::BIG_ENDIAN ? top - pos : pos;
}

int64_t Unsafe::makeLong(int8_t i0, int8_t i1, int8_t i2, int8_t i3, int8_t i4, int8_t i5, int8_t i6, int8_t i7) {
	$init(Unsafe);
	int64_t var$7 = toUnsignedLong(i0);
	int64_t var$6 = ($sl(var$7, pickPos(56, 0)));
	int64_t var$9 = toUnsignedLong(i1);
	int64_t var$8 = ($sl(var$9, pickPos(56, 8)));
	int64_t var$5 = var$6 | var$8;
	int64_t var$11 = toUnsignedLong(i2);
	int64_t var$10 = ($sl(var$11, pickPos(56, 16)));
	int64_t var$4 = var$5 | var$10;
	int64_t var$13 = toUnsignedLong(i3);
	int64_t var$12 = ($sl(var$13, pickPos(56, 24)));
	int64_t var$3 = var$4 | var$12;
	int64_t var$15 = toUnsignedLong(i4);
	int64_t var$14 = ($sl(var$15, pickPos(56, 32)));
	int64_t var$2 = var$3 | var$14;
	int64_t var$17 = toUnsignedLong(i5);
	int64_t var$16 = ($sl(var$17, pickPos(56, 40)));
	int64_t var$1 = var$2 | var$16;
	int64_t var$19 = toUnsignedLong(i6);
	int64_t var$18 = ($sl(var$19, pickPos(56, 48)));
	int64_t var$0 = var$1 | var$18;
	int64_t var$21 = toUnsignedLong(i7);
	int64_t var$20 = ($sl(var$21, pickPos(56, 56)));
	return (var$0 | var$20);
}

int64_t Unsafe::makeLong(int16_t i0, int16_t i1, int16_t i2, int16_t i3) {
	$init(Unsafe);
	int64_t var$3 = toUnsignedLong(i0);
	int64_t var$2 = ($sl(var$3, pickPos(48, 0)));
	int64_t var$5 = toUnsignedLong(i1);
	int64_t var$4 = ($sl(var$5, pickPos(48, 16)));
	int64_t var$1 = var$2 | var$4;
	int64_t var$7 = toUnsignedLong(i2);
	int64_t var$6 = ($sl(var$7, pickPos(48, 32)));
	int64_t var$0 = var$1 | var$6;
	int64_t var$9 = toUnsignedLong(i3);
	int64_t var$8 = ($sl(var$9, pickPos(48, 48)));
	return (var$0 | var$8);
}

int64_t Unsafe::makeLong(int32_t i0, int32_t i1) {
	$init(Unsafe);
	int64_t var$1 = toUnsignedLong(i0);
	int64_t var$0 = ($sl(var$1, pickPos(32, 0)));
	int64_t var$3 = toUnsignedLong(i1);
	int64_t var$2 = ($sl(var$3, pickPos(32, 32)));
	return var$0 | var$2;
}

int32_t Unsafe::makeInt(int16_t i0, int16_t i1) {
	$init(Unsafe);
	int32_t var$1 = toUnsignedInt(i0);
	int32_t var$0 = ($sl(var$1, pickPos(16, 0)));
	int32_t var$3 = toUnsignedInt(i1);
	int32_t var$2 = ($sl(var$3, pickPos(16, 16)));
	return var$0 | var$2;
}

int32_t Unsafe::makeInt(int8_t i0, int8_t i1, int8_t i2, int8_t i3) {
	$init(Unsafe);
	int32_t var$3 = toUnsignedInt(i0);
	int32_t var$2 = ($sl(var$3, pickPos(24, 0)));
	int32_t var$5 = toUnsignedInt(i1);
	int32_t var$4 = ($sl(var$5, pickPos(24, 8)));
	int32_t var$1 = var$2 | var$4;
	int32_t var$7 = toUnsignedInt(i2);
	int32_t var$6 = ($sl(var$7, pickPos(24, 16)));
	int32_t var$0 = var$1 | var$6;
	int32_t var$9 = toUnsignedInt(i3);
	int32_t var$8 = ($sl(var$9, pickPos(24, 24)));
	return (var$0 | var$8);
}

int16_t Unsafe::makeShort(int8_t i0, int8_t i1) {
	$init(Unsafe);
	int32_t var$1 = toUnsignedInt(i0);
	int32_t var$0 = ($sl(var$1, pickPos(8, 0)));
	int32_t var$3 = toUnsignedInt(i1);
	int32_t var$2 = ($sl(var$3, pickPos(8, 8)));
	return (int16_t)(var$0 | var$2);
}

int8_t Unsafe::pick(int8_t le, int8_t be) {
	$init(Unsafe);
	$init($UnsafeConstants);
	return $UnsafeConstants::BIG_ENDIAN ? be : le;
}

int16_t Unsafe::pick(int16_t le, int16_t be) {
	$init(Unsafe);
	$init($UnsafeConstants);
	return $UnsafeConstants::BIG_ENDIAN ? be : le;
}

int32_t Unsafe::pick(int32_t le, int32_t be) {
	$init(Unsafe);
	$init($UnsafeConstants);
	return $UnsafeConstants::BIG_ENDIAN ? be : le;
}

void Unsafe::putLongParts(Object$* o, int64_t offset, int8_t i0, int8_t i1, int8_t i2, int8_t i3, int8_t i4, int8_t i5, int8_t i6, int8_t i7) {
	putByte(o, offset + 0, pick(i0, i7));
	putByte(o, offset + 1, pick(i1, i6));
	putByte(o, offset + 2, pick(i2, i5));
	putByte(o, offset + 3, pick(i3, i4));
	putByte(o, offset + 4, pick(i4, i3));
	putByte(o, offset + 5, pick(i5, i2));
	putByte(o, offset + 6, pick(i6, i1));
	putByte(o, offset + 7, pick(i7, i0));
}

void Unsafe::putLongParts(Object$* o, int64_t offset, int16_t i0, int16_t i1, int16_t i2, int16_t i3) {
	putShort(o, offset + 0, pick(i0, i3));
	putShort(o, offset + 2, pick(i1, i2));
	putShort(o, offset + 4, pick(i2, i1));
	putShort(o, offset + 6, pick(i3, i0));
}

void Unsafe::putLongParts(Object$* o, int64_t offset, int32_t i0, int32_t i1) {
	putInt(o, offset + 0, pick(i0, i1));
	putInt(o, offset + 4, pick(i1, i0));
}

void Unsafe::putIntParts(Object$* o, int64_t offset, int16_t i0, int16_t i1) {
	putShort(o, offset + 0, pick(i0, i1));
	putShort(o, offset + 2, pick(i1, i0));
}

void Unsafe::putIntParts(Object$* o, int64_t offset, int8_t i0, int8_t i1, int8_t i2, int8_t i3) {
	putByte(o, offset + 0, pick(i0, i3));
	putByte(o, offset + 1, pick(i1, i2));
	putByte(o, offset + 2, pick(i2, i1));
	putByte(o, offset + 3, pick(i3, i0));
}

void Unsafe::putShortParts(Object$* o, int64_t offset, int8_t i0, int8_t i1) {
	putByte(o, offset + 0, pick(i0, i1));
	putByte(o, offset + 1, pick(i1, i0));
}

int32_t Unsafe::toUnsignedInt(int8_t n) {
	$init(Unsafe);
	return n & 0xff;
}

int32_t Unsafe::toUnsignedInt(int16_t n) {
	$init(Unsafe);
	return n & 0xffff;
}

int64_t Unsafe::toUnsignedLong(int8_t n) {
	$init(Unsafe);
	return n & (int64_t)0xff;
}

int64_t Unsafe::toUnsignedLong(int16_t n) {
	$init(Unsafe);
	return n & (int64_t)0xffff;
}

int64_t Unsafe::toUnsignedLong(int32_t n) {
	$init(Unsafe);
	return n & (int64_t)0xffffffff;
}

char16_t Unsafe::convEndian(bool big, char16_t n) {
	$init(Unsafe);
	$init($UnsafeConstants);
	return big == $UnsafeConstants::BIG_ENDIAN ? n : $Character::reverseBytes(n);
}

int16_t Unsafe::convEndian(bool big, int16_t n) {
	$init(Unsafe);
	$init($UnsafeConstants);
	return big == $UnsafeConstants::BIG_ENDIAN ? n : $Short::reverseBytes(n);
}

int32_t Unsafe::convEndian(bool big, int32_t n) {
	$init(Unsafe);
	$init($UnsafeConstants);
	return big == $UnsafeConstants::BIG_ENDIAN ? n : $Integer::reverseBytes(n);
}

int64_t Unsafe::convEndian(bool big, int64_t n) {
	$init(Unsafe);
	$init($UnsafeConstants);
	return big == $UnsafeConstants::BIG_ENDIAN ? n : $Long::reverseBytes(n);
}

int64_t Unsafe::allocateMemory0(int64_t bytes) {
	void* m = malloc(bytes);
	return (int64_t)m;
}

int64_t Unsafe::reallocateMemory0(int64_t getObject, int64_t bytes) {
	void* addr = (void*)getObject;
	void* m = realloc(addr, bytes);
	return (int64_t)m;
}

void Unsafe::freeMemory0(int64_t getObject) {
	int8_t* m = (int8_t*)getObject;
	free(m);
}

void Unsafe::setMemory0(Object$* o, int64_t offset, int64_t bytes, int8_t value) {
	int8_t* ptr = nullptr;
	if (o != nullptr) {
		ptr = (int8_t*)((int8_t*)$toObject0(o) + offset);
	} else {
		ptr = (int8_t*)(offset);
	}
	memset(ptr, value, bytes);
}

void Unsafe::copyMemory0(Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes) {
	int8_t* src = nullptr;
	if (srcBase != nullptr) {
		src = (int8_t*)((int8_t*)$toObject0(srcBase) + srcOffset);
	} else {
		src = (int8_t*)(srcOffset);
	}
	int8_t* dest = nullptr;
	if (destBase != nullptr) {
		dest = (int8_t*)((int8_t*)$toObject0(destBase) + destOffset);
	} else {
		dest = (int8_t*)(destOffset);
	}
//	if (srcBase != destBase) {
//		memcpy(dest, src, bytes);
//	} else {
		memmove(dest, src, bytes);
//	}
}

void Unsafe::copySwapMemory0(Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes, int64_t elemSize) {
	int8_t* src = nullptr;
	if (srcBase != nullptr) {
		src = (int8_t*)((int8_t*)$toObject0(srcBase) + srcOffset);
	} else {
		src = (int8_t*)(srcOffset);
	}
	int8_t* dest = nullptr;
	if (destBase != nullptr) {
		dest = (int8_t*)((int8_t*)$toObject0(destBase) + destOffset);
	} else {
		dest = (int8_t*)(destOffset);
	}
	int64_t count = bytes / elemSize;
	if (elemSize == 2) {
		int16_t* srcInt16 = (int16_t*)src;
		int16_t* destInt16 = (int16_t*)dest;
		for (int64_t i = 0; i < count; i++) {
			int16_t t = srcInt16[i];
			int16_t v = ((t << 8) & 0xFF00) | ((t >> 8) & 0xFF);
			destInt16[i] = v;
		}
		return;
	}
	if (elemSize == 4) {
		int32_t* srcInt32 = (int32_t*)src;
		int32_t* destInt32 = (int32_t*)dest;
		for (int64_t i = 0; i < count; i++) {
			int32_t t = srcInt32[i];
			int32_t v = ((t << 24) & 0xFF000000) | ((t << 8) & 0x00FF0000) | ((t >> 8) & 0x0000FF00) | ((t >> 24) & 0x000000FF);
			destInt32[i] = v;
		}
		return;
	}
	// elemSize == 8
	int64_t* srcInt64 = (int64_t*)src;
	int64_t* destInt64 = (int64_t*)dest;
	for (int64_t i = 0; i < count; i++) {
		int64_t t = srcInt64[i];
		int64_t v = ((t << 56) & 0xFF00000000000000) | ((t << 40) & 0x00FF000000000000) | ((t << 24) & 0x0000FF0000000000) | ((t << 8) & 0x000000FF00000000)
			| ((t >> 8) & 0x00000000FF000000) | ((t >> 24) & 0x0000000000FF0000) | ((t >> 40) & 0x000000000000FF00) | ((t >> 56) & 0x00000000000000FF);
		destInt64[i] = v;
	}
}

int64_t Unsafe::objectFieldOffset0($Field* f) {
	return f->offsetof;
}

int64_t Unsafe::objectFieldOffset1($Class* c, $String* name) {
	return $nullcheck(c->findField(name))->offsetof;
}

int64_t Unsafe::staticFieldOffset0($Field* f) {
	return f->getOffsetof();
}

$Object* Unsafe::staticFieldBase0($Field* f) {
	return nullptr;
}

bool Unsafe::shouldBeInitialized0($Class* c) {
	return c->state != $Class::CLASS_STATE_INITIALIZED;
}

void Unsafe::ensureClassInitialized0($Class* c) {
	c->ensureClassInitialized();
}

int32_t Unsafe::arrayBaseOffset0($Class* arrayClass) {
	return arrayClass->getArrayBaseOffset();
}

int32_t Unsafe::arrayIndexScale0($Class* arrayClass) {
	return arrayClass->getArrayIndexScale();
}

int32_t Unsafe::getLoadAverage0($doubles* loadavg, int32_t nelems) {
	return -1;
}

void Unsafe::invokeCleaner($ByteBuffer* directBuffer) {
	$useLocalObjectStack();
	if (!$nc(directBuffer)->isDirect()) {
		$throwNew($IllegalArgumentException, "buffer is non-direct"_s);
	}
	$var($DirectBuffer, db, $cast($DirectBuffer, directBuffer));
	if (db->attachment() != nullptr) {
		$throwNew($IllegalArgumentException, "duplicate or slice"_s);
	}
	$var($Cleaner, cleaner, db->cleaner());
	if (cleaner != nullptr) {
		cleaner->clean();
	}
}

$Object* Unsafe::getObject(Object$* o, int64_t offset) {
	return getReference(o, offset);
}

$Object* Unsafe::getObjectVolatile(Object$* o, int64_t offset) {
	return getReferenceVolatile(o, offset);
}

$Object* Unsafe::getObjectAcquire(Object$* o, int64_t offset) {
	return getReferenceAcquire(o, offset);
}

$Object* Unsafe::getObjectOpaque(Object$* o, int64_t offset) {
	return getReferenceOpaque(o, offset);
}

void Unsafe::putObject(Object$* o, int64_t offset, Object$* x) {
	putReference(o, offset, x);
}

void Unsafe::putObjectVolatile(Object$* o, int64_t offset, Object$* x) {
	putReferenceVolatile(o, offset, x);
}

void Unsafe::putObjectOpaque(Object$* o, int64_t offset, Object$* x) {
	putReferenceOpaque(o, offset, x);
}

void Unsafe::putObjectRelease(Object$* o, int64_t offset, Object$* x) {
	putReferenceRelease(o, offset, x);
}

$Object* Unsafe::getAndSetObject(Object$* o, int64_t offset, Object$* newValue) {
	return getAndSetReference(o, offset, newValue);
}

$Object* Unsafe::getAndSetObjectAcquire(Object$* o, int64_t offset, Object$* newValue) {
	return getAndSetReferenceAcquire(o, offset, newValue);
}

$Object* Unsafe::getAndSetObjectRelease(Object$* o, int64_t offset, Object$* newValue) {
	return getAndSetReferenceRelease(o, offset, newValue);
}

bool Unsafe::compareAndSetObject(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	return compareAndSetReference(o, offset, expected, x);
}

$Object* Unsafe::compareAndExchangeObject(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	return compareAndExchangeReference(o, offset, expected, x);
}

$Object* Unsafe::compareAndExchangeObjectAcquire(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	return compareAndExchangeReferenceAcquire(o, offset, expected, x);
}

$Object* Unsafe::compareAndExchangeObjectRelease(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	return compareAndExchangeReferenceRelease(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetObject(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	return weakCompareAndSetReference(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetObjectAcquire(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	return weakCompareAndSetReferenceAcquire(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetObjectPlain(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	return weakCompareAndSetReferencePlain(o, offset, expected, x);
}

bool Unsafe::weakCompareAndSetObjectRelease(Object$* o, int64_t offset, Object$* expected, Object$* x) {
	return weakCompareAndSetReferenceRelease(o, offset, expected, x);
}

void Unsafe::clinit$($Class* clazz) {
	{
		Unsafe::registerNatives();
	}
	$assignStatic(Unsafe::theUnsafe, $new(Unsafe));
	Unsafe::ARRAY_BOOLEAN_BASE_OFFSET = Unsafe::theUnsafe->arrayBaseOffset($getClass($booleans));
	Unsafe::ARRAY_BYTE_BASE_OFFSET = Unsafe::theUnsafe->arrayBaseOffset($getClass($bytes));
	Unsafe::ARRAY_SHORT_BASE_OFFSET = Unsafe::theUnsafe->arrayBaseOffset($getClass($shorts));
	Unsafe::ARRAY_CHAR_BASE_OFFSET = Unsafe::theUnsafe->arrayBaseOffset($getClass($chars));
	Unsafe::ARRAY_INT_BASE_OFFSET = Unsafe::theUnsafe->arrayBaseOffset($getClass($ints));
	Unsafe::ARRAY_LONG_BASE_OFFSET = Unsafe::theUnsafe->arrayBaseOffset($getClass($longs));
	Unsafe::ARRAY_FLOAT_BASE_OFFSET = Unsafe::theUnsafe->arrayBaseOffset($getClass($floats));
	Unsafe::ARRAY_DOUBLE_BASE_OFFSET = Unsafe::theUnsafe->arrayBaseOffset($getClass($doubles));
	Unsafe::ARRAY_OBJECT_BASE_OFFSET = Unsafe::theUnsafe->arrayBaseOffset($getClass($ObjectArray));
	Unsafe::ARRAY_BOOLEAN_INDEX_SCALE = Unsafe::theUnsafe->arrayIndexScale($getClass($booleans));
	Unsafe::ARRAY_BYTE_INDEX_SCALE = Unsafe::theUnsafe->arrayIndexScale($getClass($bytes));
	Unsafe::ARRAY_SHORT_INDEX_SCALE = Unsafe::theUnsafe->arrayIndexScale($getClass($shorts));
	Unsafe::ARRAY_CHAR_INDEX_SCALE = Unsafe::theUnsafe->arrayIndexScale($getClass($chars));
	Unsafe::ARRAY_INT_INDEX_SCALE = Unsafe::theUnsafe->arrayIndexScale($getClass($ints));
	Unsafe::ARRAY_LONG_INDEX_SCALE = Unsafe::theUnsafe->arrayIndexScale($getClass($longs));
	Unsafe::ARRAY_FLOAT_INDEX_SCALE = Unsafe::theUnsafe->arrayIndexScale($getClass($floats));
	Unsafe::ARRAY_DOUBLE_INDEX_SCALE = Unsafe::theUnsafe->arrayIndexScale($getClass($doubles));
	Unsafe::ARRAY_OBJECT_INDEX_SCALE = Unsafe::theUnsafe->arrayIndexScale($getClass($ObjectArray));
	$init($UnsafeConstants);
	Unsafe::ADDRESS_SIZE = $UnsafeConstants::ADDRESS_SIZE0;
}

Unsafe::Unsafe() {
}

$Class* Unsafe::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"theUnsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Unsafe, theUnsafe)},
		{"INVALID_FIELD_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Unsafe, INVALID_FIELD_OFFSET)},
		{"ARRAY_BOOLEAN_BASE_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_BOOLEAN_BASE_OFFSET)},
		{"ARRAY_BYTE_BASE_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_BYTE_BASE_OFFSET)},
		{"ARRAY_SHORT_BASE_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_SHORT_BASE_OFFSET)},
		{"ARRAY_CHAR_BASE_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_CHAR_BASE_OFFSET)},
		{"ARRAY_INT_BASE_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_INT_BASE_OFFSET)},
		{"ARRAY_LONG_BASE_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_LONG_BASE_OFFSET)},
		{"ARRAY_FLOAT_BASE_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_FLOAT_BASE_OFFSET)},
		{"ARRAY_DOUBLE_BASE_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_DOUBLE_BASE_OFFSET)},
		{"ARRAY_OBJECT_BASE_OFFSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_OBJECT_BASE_OFFSET)},
		{"ARRAY_BOOLEAN_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_BOOLEAN_INDEX_SCALE)},
		{"ARRAY_BYTE_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_BYTE_INDEX_SCALE)},
		{"ARRAY_SHORT_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_SHORT_INDEX_SCALE)},
		{"ARRAY_CHAR_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_CHAR_INDEX_SCALE)},
		{"ARRAY_INT_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_INT_INDEX_SCALE)},
		{"ARRAY_LONG_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_LONG_INDEX_SCALE)},
		{"ARRAY_FLOAT_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_FLOAT_INDEX_SCALE)},
		{"ARRAY_DOUBLE_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_DOUBLE_INDEX_SCALE)},
		{"ARRAY_OBJECT_INDEX_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ARRAY_OBJECT_INDEX_SCALE)},
		{"ADDRESS_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Unsafe, ADDRESS_SIZE)},
		{}
	};
	$CompoundAttribute allocateInstancemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute allocateUninitializedArray0methodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute bool2bytemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute byte2boolmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute c2smethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeBooleanmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeBooleanAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeBooleanReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeBytemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeByteAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeByteReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeCharmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeCharAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeCharReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeDoublemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeDoubleAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeDoubleReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeFloatmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeFloatAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeFloatReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeIntmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeIntAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeIntReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeLongmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeLongAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeLongReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$NamedAttribute compareAndExchangeObjectmethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "12"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute compareAndExchangeObjectmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", compareAndExchangeObjectmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute compareAndExchangeObjectAcquiremethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "12"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute compareAndExchangeObjectAcquiremethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", compareAndExchangeObjectAcquiremethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute compareAndExchangeObjectReleasemethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "12"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute compareAndExchangeObjectReleasemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", compareAndExchangeObjectReleasemethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute compareAndExchangeReferencemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeReferenceAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeReferenceReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeShortmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeShortAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeShortReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute compareAndSetBooleanmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndSetBytemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute compareAndSetCharmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndSetDoublemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndSetFloatmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndSetIntmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute compareAndSetLongmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$NamedAttribute compareAndSetObjectmethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "12"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute compareAndSetObjectmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", compareAndSetObjectmethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute compareAndSetReferencemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute compareAndSetShortmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute copyMemory0methodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute fullFencemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getAddressmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAddressmethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddBytemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddByteAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddByteReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddCharmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddCharAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddCharReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddDoublemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddDoubleAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddDoubleReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddFloatmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddFloatAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddFloatReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddIntmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddIntAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddIntReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddLongmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddLongAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddLongReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddShortmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddShortAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddShortReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndBooleanmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndBooleanAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndBooleanReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndBytemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndByteAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndByteReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndCharmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndCharAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndCharReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndIntmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndIntAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndIntReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndLongmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndLongAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndLongReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndShortmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndShortAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndShortReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrBooleanmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrBooleanAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrBooleanReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrBytemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrByteAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrByteReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrCharmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrCharAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrCharReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrIntmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrIntAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrIntReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrLongmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrLongAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrLongReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrShortmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrShortAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrShortReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorBooleanmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorBooleanAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorBooleanReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorBytemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorByteAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorByteReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorCharmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorCharAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorCharReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorIntmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorIntAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorIntReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorLongmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorLongAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorLongReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorShortmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorShortAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorShortReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetBooleanmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetBooleanAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetBooleanReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetBytemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetByteAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetByteReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetCharmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetCharAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetCharReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetDoublemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetDoubleAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetDoubleReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetFloatmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetFloatAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetFloatReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetIntmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetIntAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetIntReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetLongmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetLongAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetLongReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$NamedAttribute getAndSetObjectmethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "12"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute getAndSetObjectmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", getAndSetObjectmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getAndSetObjectAcquiremethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "12"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute getAndSetObjectAcquiremethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", getAndSetObjectAcquiremethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getAndSetObjectReleasemethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "12"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute getAndSetObjectReleasemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", getAndSetObjectReleasemethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute getAndSetReferencemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetReferenceAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetReferenceReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetShortmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetShortAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetShortReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getBooleanmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getBooleanAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getBooleanOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getBooleanVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getBytemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getBytemethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getByteAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getByteOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getByteVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getCharmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getCharmethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getCharAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getCharOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getCharUnalignedmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getCharVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getDoublemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getDoublemethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getDoubleAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getDoubleOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getDoubleVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getFloatmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getFloatmethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getFloatAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getFloatOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getFloatVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getIntmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getIntmethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getIntAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getIntOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getIntUnalignedmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getIntVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getLongmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getLongmethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getLongAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getLongOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getLongUnalignedmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getLongVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$NamedAttribute getObjectmethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "12"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute getObjectmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", getObjectmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getObjectAcquiremethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "12"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute getObjectAcquiremethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", getObjectAcquiremethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getObjectOpaquemethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "12"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute getObjectOpaquemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", getObjectOpaquemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getObjectVolatilemethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "12"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute getObjectVolatilemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", getObjectVolatilemethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute getReferencemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getReferenceAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getReferenceOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getReferenceVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getShortmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getShortmethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getShortAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getShortOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getShortUnalignedmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute getShortVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute loadFencemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute parkmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putAddressmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putAddressmethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putBooleanmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putBooleanOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putBooleanReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putBooleanVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putBytemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putBytemethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putByteOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putByteReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putByteVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putCharmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putCharmethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putCharOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putCharReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putCharUnalignedmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putCharVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putDoublemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putDoublemethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putDoubleOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putDoubleReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putDoubleVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putFloatmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putFloatmethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putFloatOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putFloatReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putFloatVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putIntmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putIntmethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putIntOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putIntReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putIntUnalignedmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putIntVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putLongmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putLongmethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putLongOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putLongReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putLongUnalignedmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putLongVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$NamedAttribute putObjectmethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "12"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute putObjectmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", putObjectmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute putObjectOpaquemethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "12"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute putObjectOpaquemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", putObjectOpaquemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute putObjectReleasemethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "12"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute putObjectReleasemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", putObjectReleasemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute putObjectVolatilemethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "12"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute putObjectVolatilemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", putObjectVolatilemethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute putReferencemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putReferenceOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putReferenceReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putReferenceVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putShortmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putShortmethodAnnotations$$$1[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute putShortOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putShortReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putShortUnalignedmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute putShortVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute s2cmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute storeFencemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute unparkmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetBooleanmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetBooleanAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetBooleanPlainmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetBooleanReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetBytemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetByteAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetBytePlainmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetByteReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetCharmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetCharAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetCharPlainmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetCharReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetDoublemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetDoubleAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetDoublePlainmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetDoubleReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetFloatmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetFloatAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetFloatPlainmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetFloatReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetIntmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetIntAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetIntPlainmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetIntReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetLongmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetLongAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetLongPlainmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetLongReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$NamedAttribute weakCompareAndSetObjectmethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "12"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute weakCompareAndSetObjectmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", weakCompareAndSetObjectmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute weakCompareAndSetObjectAcquiremethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "12"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute weakCompareAndSetObjectAcquiremethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", weakCompareAndSetObjectAcquiremethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute weakCompareAndSetObjectPlainmethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "12"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute weakCompareAndSetObjectPlainmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", weakCompareAndSetObjectPlainmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute weakCompareAndSetObjectReleasemethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "12"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute weakCompareAndSetObjectReleasemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", weakCompareAndSetObjectReleasemethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute weakCompareAndSetReferencemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetReferenceAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetReferencePlainmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetReferenceReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetShortmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetShortAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetShortPlainmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetShortReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute writeback0methodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute writebackPostSync0methodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute writebackPreSync0methodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Unsafe, init$, void)},
		{"addressSize", "()I", nullptr, $PUBLIC, $method(Unsafe, addressSize, int32_t)},
		{"alignToHeapWordSize", "(J)J", nullptr, $PRIVATE, $method(Unsafe, alignToHeapWordSize, int64_t, int64_t)},
		{"allocateInstance", "(Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/Class<*>;)Ljava/lang/Object;", $PUBLIC | $NATIVE, $method(Unsafe, allocateInstance, $Object*, $Class*), "java.lang.InstantiationException", nullptr, allocateInstancemethodAnnotations$$},
		{"allocateMemory", "(J)J", nullptr, $PUBLIC, $method(Unsafe, allocateMemory, int64_t, int64_t)},
		{"allocateMemory0", "(J)J", nullptr, $PRIVATE | $NATIVE, $method(Unsafe, allocateMemory0, int64_t, int64_t)},
		{"allocateMemoryChecks", "(J)V", nullptr, $PRIVATE, $method(Unsafe, allocateMemoryChecks, void, int64_t)},
		{"allocateUninitializedArray", "(Ljava/lang/Class;I)Ljava/lang/Object;", "(Ljava/lang/Class<*>;I)Ljava/lang/Object;", $PUBLIC, $method(Unsafe, allocateUninitializedArray, $Object*, $Class*, int32_t)},
		{"allocateUninitializedArray0", "(Ljava/lang/Class;I)Ljava/lang/Object;", "(Ljava/lang/Class<*>;I)Ljava/lang/Object;", $PRIVATE, $method(Unsafe, allocateUninitializedArray0, $Object*, $Class*, int32_t), nullptr, nullptr, allocateUninitializedArray0methodAnnotations$$},
		{"arrayBaseOffset", "(Ljava/lang/Class;)I", "(Ljava/lang/Class<*>;)I", $PUBLIC, $method(Unsafe, arrayBaseOffset, int32_t, $Class*)},
		{"arrayBaseOffset0", "(Ljava/lang/Class;)I", "(Ljava/lang/Class<*>;)I", $PRIVATE | $NATIVE, $method(Unsafe, arrayBaseOffset0, int32_t, $Class*)},
		{"arrayIndexScale", "(Ljava/lang/Class;)I", "(Ljava/lang/Class<*>;)I", $PUBLIC, $method(Unsafe, arrayIndexScale, int32_t, $Class*)},
		{"arrayIndexScale0", "(Ljava/lang/Class;)I", "(Ljava/lang/Class<*>;)I", $PRIVATE | $NATIVE, $method(Unsafe, arrayIndexScale0, int32_t, $Class*)},
		{"bool2byte", "(Z)B", nullptr, $PRIVATE, $method(Unsafe, bool2byte, int8_t, bool), nullptr, nullptr, bool2bytemethodAnnotations$$},
		{"byte2bool", "(B)Z", nullptr, $PRIVATE, $method(Unsafe, byte2bool, bool, int8_t), nullptr, nullptr, byte2boolmethodAnnotations$$},
		{"c2s", "(C)S", nullptr, $PRIVATE, $method(Unsafe, c2s, int16_t, char16_t), nullptr, nullptr, c2smethodAnnotations$$},
		{"checkNativeAddress", "(J)V", nullptr, $PRIVATE, $method(Unsafe, checkNativeAddress, void, int64_t)},
		{"checkOffset", "(Ljava/lang/Object;J)V", nullptr, $PRIVATE, $method(Unsafe, checkOffset, void, Object$*, int64_t)},
		{"checkPointer", "(Ljava/lang/Object;J)V", nullptr, $PRIVATE, $method(Unsafe, checkPointer, void, Object$*, int64_t)},
		{"checkPrimitiveArray", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE, $method(Unsafe, checkPrimitiveArray, void, $Class*)},
		{"checkPrimitivePointer", "(Ljava/lang/Object;J)V", nullptr, $PRIVATE, $method(Unsafe, checkPrimitivePointer, void, Object$*, int64_t)},
		{"checkSize", "(J)V", nullptr, $PRIVATE, $method(Unsafe, checkSize, void, int64_t)},
		{"checkWritebackEnabled", "()V", nullptr, $PRIVATE, $method(Unsafe, checkWritebackEnabled, void)},
		{"checkWritebackMemory", "(JJ)V", nullptr, $PRIVATE, $method(Unsafe, checkWritebackMemory, void, int64_t, int64_t)},
		{"compareAndExchangeBoolean", "(Ljava/lang/Object;JZZ)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndExchangeBoolean, bool, Object$*, int64_t, bool, bool), nullptr, nullptr, compareAndExchangeBooleanmethodAnnotations$$},
		{"compareAndExchangeBooleanAcquire", "(Ljava/lang/Object;JZZ)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndExchangeBooleanAcquire, bool, Object$*, int64_t, bool, bool), nullptr, nullptr, compareAndExchangeBooleanAcquiremethodAnnotations$$},
		{"compareAndExchangeBooleanRelease", "(Ljava/lang/Object;JZZ)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndExchangeBooleanRelease, bool, Object$*, int64_t, bool, bool), nullptr, nullptr, compareAndExchangeBooleanReleasemethodAnnotations$$},
		{"compareAndExchangeByte", "(Ljava/lang/Object;JBB)B", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndExchangeByte, int8_t, Object$*, int64_t, int8_t, int8_t), nullptr, nullptr, compareAndExchangeBytemethodAnnotations$$},
		{"compareAndExchangeByteAcquire", "(Ljava/lang/Object;JBB)B", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndExchangeByteAcquire, int8_t, Object$*, int64_t, int8_t, int8_t), nullptr, nullptr, compareAndExchangeByteAcquiremethodAnnotations$$},
		{"compareAndExchangeByteRelease", "(Ljava/lang/Object;JBB)B", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndExchangeByteRelease, int8_t, Object$*, int64_t, int8_t, int8_t), nullptr, nullptr, compareAndExchangeByteReleasemethodAnnotations$$},
		{"compareAndExchangeChar", "(Ljava/lang/Object;JCC)C", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndExchangeChar, char16_t, Object$*, int64_t, char16_t, char16_t), nullptr, nullptr, compareAndExchangeCharmethodAnnotations$$},
		{"compareAndExchangeCharAcquire", "(Ljava/lang/Object;JCC)C", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndExchangeCharAcquire, char16_t, Object$*, int64_t, char16_t, char16_t), nullptr, nullptr, compareAndExchangeCharAcquiremethodAnnotations$$},
		{"compareAndExchangeCharRelease", "(Ljava/lang/Object;JCC)C", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndExchangeCharRelease, char16_t, Object$*, int64_t, char16_t, char16_t), nullptr, nullptr, compareAndExchangeCharReleasemethodAnnotations$$},
		{"compareAndExchangeDouble", "(Ljava/lang/Object;JDD)D", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndExchangeDouble, double, Object$*, int64_t, double, double), nullptr, nullptr, compareAndExchangeDoublemethodAnnotations$$},
		{"compareAndExchangeDoubleAcquire", "(Ljava/lang/Object;JDD)D", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndExchangeDoubleAcquire, double, Object$*, int64_t, double, double), nullptr, nullptr, compareAndExchangeDoubleAcquiremethodAnnotations$$},
		{"compareAndExchangeDoubleRelease", "(Ljava/lang/Object;JDD)D", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndExchangeDoubleRelease, double, Object$*, int64_t, double, double), nullptr, nullptr, compareAndExchangeDoubleReleasemethodAnnotations$$},
		{"compareAndExchangeFloat", "(Ljava/lang/Object;JFF)F", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndExchangeFloat, float, Object$*, int64_t, float, float), nullptr, nullptr, compareAndExchangeFloatmethodAnnotations$$},
		{"compareAndExchangeFloatAcquire", "(Ljava/lang/Object;JFF)F", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndExchangeFloatAcquire, float, Object$*, int64_t, float, float), nullptr, nullptr, compareAndExchangeFloatAcquiremethodAnnotations$$},
		{"compareAndExchangeFloatRelease", "(Ljava/lang/Object;JFF)F", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndExchangeFloatRelease, float, Object$*, int64_t, float, float), nullptr, nullptr, compareAndExchangeFloatReleasemethodAnnotations$$},
		{"compareAndExchangeInt", "(Ljava/lang/Object;JII)I", nullptr, $PUBLIC | $FINAL | $NATIVE, $method(Unsafe, compareAndExchangeInt, int32_t, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, compareAndExchangeIntmethodAnnotations$$},
		{"compareAndExchangeIntAcquire", "(Ljava/lang/Object;JII)I", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndExchangeIntAcquire, int32_t, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, compareAndExchangeIntAcquiremethodAnnotations$$},
		{"compareAndExchangeIntRelease", "(Ljava/lang/Object;JII)I", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndExchangeIntRelease, int32_t, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, compareAndExchangeIntReleasemethodAnnotations$$},
		{"compareAndExchangeLong", "(Ljava/lang/Object;JJJ)J", nullptr, $PUBLIC | $FINAL | $NATIVE, $method(Unsafe, compareAndExchangeLong, int64_t, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, compareAndExchangeLongmethodAnnotations$$},
		{"compareAndExchangeLongAcquire", "(Ljava/lang/Object;JJJ)J", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndExchangeLongAcquire, int64_t, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, compareAndExchangeLongAcquiremethodAnnotations$$},
		{"compareAndExchangeLongRelease", "(Ljava/lang/Object;JJJ)J", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndExchangeLongRelease, int64_t, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, compareAndExchangeLongReleasemethodAnnotations$$},
		{"compareAndExchangeObject", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(Unsafe, compareAndExchangeObject, $Object*, Object$*, int64_t, Object$*, Object$*), nullptr, nullptr, compareAndExchangeObjectmethodAnnotations$$},
		{"compareAndExchangeObjectAcquire", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(Unsafe, compareAndExchangeObjectAcquire, $Object*, Object$*, int64_t, Object$*, Object$*), nullptr, nullptr, compareAndExchangeObjectAcquiremethodAnnotations$$},
		{"compareAndExchangeObjectRelease", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(Unsafe, compareAndExchangeObjectRelease, $Object*, Object$*, int64_t, Object$*, Object$*), nullptr, nullptr, compareAndExchangeObjectReleasemethodAnnotations$$},
		{"compareAndExchangeReference", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $NATIVE, $method(Unsafe, compareAndExchangeReference, $Object*, Object$*, int64_t, Object$*, Object$*), nullptr, nullptr, compareAndExchangeReferencemethodAnnotations$$},
		{"compareAndExchangeReferenceAcquire", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndExchangeReferenceAcquire, $Object*, Object$*, int64_t, Object$*, Object$*), nullptr, nullptr, compareAndExchangeReferenceAcquiremethodAnnotations$$},
		{"compareAndExchangeReferenceRelease", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndExchangeReferenceRelease, $Object*, Object$*, int64_t, Object$*, Object$*), nullptr, nullptr, compareAndExchangeReferenceReleasemethodAnnotations$$},
		{"compareAndExchangeShort", "(Ljava/lang/Object;JSS)S", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndExchangeShort, int16_t, Object$*, int64_t, int16_t, int16_t), nullptr, nullptr, compareAndExchangeShortmethodAnnotations$$},
		{"compareAndExchangeShortAcquire", "(Ljava/lang/Object;JSS)S", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndExchangeShortAcquire, int16_t, Object$*, int64_t, int16_t, int16_t), nullptr, nullptr, compareAndExchangeShortAcquiremethodAnnotations$$},
		{"compareAndExchangeShortRelease", "(Ljava/lang/Object;JSS)S", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndExchangeShortRelease, int16_t, Object$*, int64_t, int16_t, int16_t), nullptr, nullptr, compareAndExchangeShortReleasemethodAnnotations$$},
		{"compareAndSetBoolean", "(Ljava/lang/Object;JZZ)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndSetBoolean, bool, Object$*, int64_t, bool, bool), nullptr, nullptr, compareAndSetBooleanmethodAnnotations$$},
		{"compareAndSetByte", "(Ljava/lang/Object;JBB)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndSetByte, bool, Object$*, int64_t, int8_t, int8_t), nullptr, nullptr, compareAndSetBytemethodAnnotations$$},
		{"compareAndSetChar", "(Ljava/lang/Object;JCC)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndSetChar, bool, Object$*, int64_t, char16_t, char16_t), nullptr, nullptr, compareAndSetCharmethodAnnotations$$},
		{"compareAndSetDouble", "(Ljava/lang/Object;JDD)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndSetDouble, bool, Object$*, int64_t, double, double), nullptr, nullptr, compareAndSetDoublemethodAnnotations$$},
		{"compareAndSetFloat", "(Ljava/lang/Object;JFF)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndSetFloat, bool, Object$*, int64_t, float, float), nullptr, nullptr, compareAndSetFloatmethodAnnotations$$},
		{"compareAndSetInt", "(Ljava/lang/Object;JII)Z", nullptr, $PUBLIC | $FINAL | $NATIVE, $method(Unsafe, compareAndSetInt, bool, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, compareAndSetIntmethodAnnotations$$},
		{"compareAndSetLong", "(Ljava/lang/Object;JJJ)Z", nullptr, $PUBLIC | $FINAL | $NATIVE, $method(Unsafe, compareAndSetLong, bool, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, compareAndSetLongmethodAnnotations$$},
		{"compareAndSetObject", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(Unsafe, compareAndSetObject, bool, Object$*, int64_t, Object$*, Object$*), nullptr, nullptr, compareAndSetObjectmethodAnnotations$$},
		{"compareAndSetReference", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL | $NATIVE, $method(Unsafe, compareAndSetReference, bool, Object$*, int64_t, Object$*, Object$*), nullptr, nullptr, compareAndSetReferencemethodAnnotations$$},
		{"compareAndSetShort", "(Ljava/lang/Object;JSS)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, compareAndSetShort, bool, Object$*, int64_t, int16_t, int16_t), nullptr, nullptr, compareAndSetShortmethodAnnotations$$},
		{"convEndian", "(ZC)C", nullptr, $PRIVATE | $STATIC, $staticMethod(Unsafe, convEndian, char16_t, bool, char16_t)},
		{"convEndian", "(ZS)S", nullptr, $PRIVATE | $STATIC, $staticMethod(Unsafe, convEndian, int16_t, bool, int16_t)},
		{"convEndian", "(ZI)I", nullptr, $PRIVATE | $STATIC, $staticMethod(Unsafe, convEndian, int32_t, bool, int32_t)},
		{"convEndian", "(ZJ)J", nullptr, $PRIVATE | $STATIC, $staticMethod(Unsafe, convEndian, int64_t, bool, int64_t)},
		{"copyMemory", "(Ljava/lang/Object;JLjava/lang/Object;JJ)V", nullptr, $PUBLIC, $method(Unsafe, copyMemory, void, Object$*, int64_t, Object$*, int64_t, int64_t)},
		{"copyMemory", "(JJJ)V", nullptr, $PUBLIC, $method(Unsafe, copyMemory, void, int64_t, int64_t, int64_t)},
		{"copyMemory0", "(Ljava/lang/Object;JLjava/lang/Object;JJ)V", nullptr, $PRIVATE | $NATIVE, $method(Unsafe, copyMemory0, void, Object$*, int64_t, Object$*, int64_t, int64_t), nullptr, nullptr, copyMemory0methodAnnotations$$},
		{"copyMemoryChecks", "(Ljava/lang/Object;JLjava/lang/Object;JJ)V", nullptr, $PRIVATE, $method(Unsafe, copyMemoryChecks, void, Object$*, int64_t, Object$*, int64_t, int64_t)},
		{"copySwapMemory", "(Ljava/lang/Object;JLjava/lang/Object;JJJ)V", nullptr, $PUBLIC, $method(Unsafe, copySwapMemory, void, Object$*, int64_t, Object$*, int64_t, int64_t, int64_t)},
		{"copySwapMemory", "(JJJJ)V", nullptr, $PUBLIC, $method(Unsafe, copySwapMemory, void, int64_t, int64_t, int64_t, int64_t)},
		{"copySwapMemory0", "(Ljava/lang/Object;JLjava/lang/Object;JJJ)V", nullptr, $PRIVATE | $NATIVE, $method(Unsafe, copySwapMemory0, void, Object$*, int64_t, Object$*, int64_t, int64_t, int64_t)},
		{"copySwapMemoryChecks", "(Ljava/lang/Object;JLjava/lang/Object;JJJ)V", nullptr, $PRIVATE, $method(Unsafe, copySwapMemoryChecks, void, Object$*, int64_t, Object$*, int64_t, int64_t, int64_t)},
		{"dataCacheLineAlignDown", "(J)J", nullptr, $PUBLIC, $method(Unsafe, dataCacheLineAlignDown, int64_t, int64_t)},
		{"dataCacheLineFlushSize", "()I", nullptr, $PUBLIC, $method(Unsafe, dataCacheLineFlushSize, int32_t)},
		{"defineClass", "(Ljava/lang/String;[BIILjava/lang/ClassLoader;Ljava/security/ProtectionDomain;)Ljava/lang/Class;", "(Ljava/lang/String;[BIILjava/lang/ClassLoader;Ljava/security/ProtectionDomain;)Ljava/lang/Class<*>;", $PUBLIC, $method(Unsafe, defineClass, $Class*, $String*, $bytes*, int32_t, int32_t, $ClassLoader*, $ProtectionDomain*)},
		{"defineClass0", "(Ljava/lang/String;[BIILjava/lang/ClassLoader;Ljava/security/ProtectionDomain;)Ljava/lang/Class;", "(Ljava/lang/String;[BIILjava/lang/ClassLoader;Ljava/security/ProtectionDomain;)Ljava/lang/Class<*>;", $PUBLIC | $NATIVE, $method(Unsafe, defineClass0, $Class*, $String*, $bytes*, int32_t, int32_t, $ClassLoader*, $ProtectionDomain*)},
		{"ensureClassInitialized", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC, $method(Unsafe, ensureClassInitialized, void, $Class*)},
		{"ensureClassInitialized0", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE | $NATIVE, $method(Unsafe, ensureClassInitialized0, void, $Class*)},
		{"freeMemory", "(J)V", nullptr, $PUBLIC, $method(Unsafe, freeMemory, void, int64_t)},
		{"freeMemory0", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(Unsafe, freeMemory0, void, int64_t)},
		{"freeMemoryChecks", "(J)V", nullptr, $PRIVATE, $method(Unsafe, freeMemoryChecks, void, int64_t)},
		{"fullFence", "()V", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, fullFence, void), nullptr, nullptr, fullFencemethodAnnotations$$},
		{"getAddress", "(Ljava/lang/Object;J)J", nullptr, $PUBLIC, $method(Unsafe, getAddress, int64_t, Object$*, int64_t), nullptr, nullptr, getAddressmethodAnnotations$$},
		{"getAddress", "(J)J", nullptr, $PUBLIC, $method(Unsafe, getAddress, int64_t, int64_t), nullptr, nullptr, getAddressmethodAnnotations$$$1},
		{"getAndAddByte", "(Ljava/lang/Object;JB)B", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndAddByte, int8_t, Object$*, int64_t, int8_t), nullptr, nullptr, getAndAddBytemethodAnnotations$$},
		{"getAndAddByteAcquire", "(Ljava/lang/Object;JB)B", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndAddByteAcquire, int8_t, Object$*, int64_t, int8_t), nullptr, nullptr, getAndAddByteAcquiremethodAnnotations$$},
		{"getAndAddByteRelease", "(Ljava/lang/Object;JB)B", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndAddByteRelease, int8_t, Object$*, int64_t, int8_t), nullptr, nullptr, getAndAddByteReleasemethodAnnotations$$},
		{"getAndAddChar", "(Ljava/lang/Object;JC)C", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndAddChar, char16_t, Object$*, int64_t, char16_t), nullptr, nullptr, getAndAddCharmethodAnnotations$$},
		{"getAndAddCharAcquire", "(Ljava/lang/Object;JC)C", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndAddCharAcquire, char16_t, Object$*, int64_t, char16_t), nullptr, nullptr, getAndAddCharAcquiremethodAnnotations$$},
		{"getAndAddCharRelease", "(Ljava/lang/Object;JC)C", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndAddCharRelease, char16_t, Object$*, int64_t, char16_t), nullptr, nullptr, getAndAddCharReleasemethodAnnotations$$},
		{"getAndAddDouble", "(Ljava/lang/Object;JD)D", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndAddDouble, double, Object$*, int64_t, double), nullptr, nullptr, getAndAddDoublemethodAnnotations$$},
		{"getAndAddDoubleAcquire", "(Ljava/lang/Object;JD)D", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndAddDoubleAcquire, double, Object$*, int64_t, double), nullptr, nullptr, getAndAddDoubleAcquiremethodAnnotations$$},
		{"getAndAddDoubleRelease", "(Ljava/lang/Object;JD)D", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndAddDoubleRelease, double, Object$*, int64_t, double), nullptr, nullptr, getAndAddDoubleReleasemethodAnnotations$$},
		{"getAndAddFloat", "(Ljava/lang/Object;JF)F", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndAddFloat, float, Object$*, int64_t, float), nullptr, nullptr, getAndAddFloatmethodAnnotations$$},
		{"getAndAddFloatAcquire", "(Ljava/lang/Object;JF)F", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndAddFloatAcquire, float, Object$*, int64_t, float), nullptr, nullptr, getAndAddFloatAcquiremethodAnnotations$$},
		{"getAndAddFloatRelease", "(Ljava/lang/Object;JF)F", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndAddFloatRelease, float, Object$*, int64_t, float), nullptr, nullptr, getAndAddFloatReleasemethodAnnotations$$},
		{"getAndAddInt", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndAddInt, int32_t, Object$*, int64_t, int32_t), nullptr, nullptr, getAndAddIntmethodAnnotations$$},
		{"getAndAddIntAcquire", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndAddIntAcquire, int32_t, Object$*, int64_t, int32_t), nullptr, nullptr, getAndAddIntAcquiremethodAnnotations$$},
		{"getAndAddIntRelease", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndAddIntRelease, int32_t, Object$*, int64_t, int32_t), nullptr, nullptr, getAndAddIntReleasemethodAnnotations$$},
		{"getAndAddLong", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndAddLong, int64_t, Object$*, int64_t, int64_t), nullptr, nullptr, getAndAddLongmethodAnnotations$$},
		{"getAndAddLongAcquire", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndAddLongAcquire, int64_t, Object$*, int64_t, int64_t), nullptr, nullptr, getAndAddLongAcquiremethodAnnotations$$},
		{"getAndAddLongRelease", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndAddLongRelease, int64_t, Object$*, int64_t, int64_t), nullptr, nullptr, getAndAddLongReleasemethodAnnotations$$},
		{"getAndAddShort", "(Ljava/lang/Object;JS)S", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndAddShort, int16_t, Object$*, int64_t, int16_t), nullptr, nullptr, getAndAddShortmethodAnnotations$$},
		{"getAndAddShortAcquire", "(Ljava/lang/Object;JS)S", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndAddShortAcquire, int16_t, Object$*, int64_t, int16_t), nullptr, nullptr, getAndAddShortAcquiremethodAnnotations$$},
		{"getAndAddShortRelease", "(Ljava/lang/Object;JS)S", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndAddShortRelease, int16_t, Object$*, int64_t, int16_t), nullptr, nullptr, getAndAddShortReleasemethodAnnotations$$},
		{"getAndBitwiseAndBoolean", "(Ljava/lang/Object;JZ)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseAndBoolean, bool, Object$*, int64_t, bool), nullptr, nullptr, getAndBitwiseAndBooleanmethodAnnotations$$},
		{"getAndBitwiseAndBooleanAcquire", "(Ljava/lang/Object;JZ)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseAndBooleanAcquire, bool, Object$*, int64_t, bool), nullptr, nullptr, getAndBitwiseAndBooleanAcquiremethodAnnotations$$},
		{"getAndBitwiseAndBooleanRelease", "(Ljava/lang/Object;JZ)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseAndBooleanRelease, bool, Object$*, int64_t, bool), nullptr, nullptr, getAndBitwiseAndBooleanReleasemethodAnnotations$$},
		{"getAndBitwiseAndByte", "(Ljava/lang/Object;JB)B", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseAndByte, int8_t, Object$*, int64_t, int8_t), nullptr, nullptr, getAndBitwiseAndBytemethodAnnotations$$},
		{"getAndBitwiseAndByteAcquire", "(Ljava/lang/Object;JB)B", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseAndByteAcquire, int8_t, Object$*, int64_t, int8_t), nullptr, nullptr, getAndBitwiseAndByteAcquiremethodAnnotations$$},
		{"getAndBitwiseAndByteRelease", "(Ljava/lang/Object;JB)B", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseAndByteRelease, int8_t, Object$*, int64_t, int8_t), nullptr, nullptr, getAndBitwiseAndByteReleasemethodAnnotations$$},
		{"getAndBitwiseAndChar", "(Ljava/lang/Object;JC)C", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseAndChar, char16_t, Object$*, int64_t, char16_t), nullptr, nullptr, getAndBitwiseAndCharmethodAnnotations$$},
		{"getAndBitwiseAndCharAcquire", "(Ljava/lang/Object;JC)C", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseAndCharAcquire, char16_t, Object$*, int64_t, char16_t), nullptr, nullptr, getAndBitwiseAndCharAcquiremethodAnnotations$$},
		{"getAndBitwiseAndCharRelease", "(Ljava/lang/Object;JC)C", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseAndCharRelease, char16_t, Object$*, int64_t, char16_t), nullptr, nullptr, getAndBitwiseAndCharReleasemethodAnnotations$$},
		{"getAndBitwiseAndInt", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseAndInt, int32_t, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseAndIntmethodAnnotations$$},
		{"getAndBitwiseAndIntAcquire", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseAndIntAcquire, int32_t, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseAndIntAcquiremethodAnnotations$$},
		{"getAndBitwiseAndIntRelease", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseAndIntRelease, int32_t, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseAndIntReleasemethodAnnotations$$},
		{"getAndBitwiseAndLong", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseAndLong, int64_t, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseAndLongmethodAnnotations$$},
		{"getAndBitwiseAndLongAcquire", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseAndLongAcquire, int64_t, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseAndLongAcquiremethodAnnotations$$},
		{"getAndBitwiseAndLongRelease", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseAndLongRelease, int64_t, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseAndLongReleasemethodAnnotations$$},
		{"getAndBitwiseAndShort", "(Ljava/lang/Object;JS)S", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseAndShort, int16_t, Object$*, int64_t, int16_t), nullptr, nullptr, getAndBitwiseAndShortmethodAnnotations$$},
		{"getAndBitwiseAndShortAcquire", "(Ljava/lang/Object;JS)S", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseAndShortAcquire, int16_t, Object$*, int64_t, int16_t), nullptr, nullptr, getAndBitwiseAndShortAcquiremethodAnnotations$$},
		{"getAndBitwiseAndShortRelease", "(Ljava/lang/Object;JS)S", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseAndShortRelease, int16_t, Object$*, int64_t, int16_t), nullptr, nullptr, getAndBitwiseAndShortReleasemethodAnnotations$$},
		{"getAndBitwiseOrBoolean", "(Ljava/lang/Object;JZ)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseOrBoolean, bool, Object$*, int64_t, bool), nullptr, nullptr, getAndBitwiseOrBooleanmethodAnnotations$$},
		{"getAndBitwiseOrBooleanAcquire", "(Ljava/lang/Object;JZ)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseOrBooleanAcquire, bool, Object$*, int64_t, bool), nullptr, nullptr, getAndBitwiseOrBooleanAcquiremethodAnnotations$$},
		{"getAndBitwiseOrBooleanRelease", "(Ljava/lang/Object;JZ)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseOrBooleanRelease, bool, Object$*, int64_t, bool), nullptr, nullptr, getAndBitwiseOrBooleanReleasemethodAnnotations$$},
		{"getAndBitwiseOrByte", "(Ljava/lang/Object;JB)B", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseOrByte, int8_t, Object$*, int64_t, int8_t), nullptr, nullptr, getAndBitwiseOrBytemethodAnnotations$$},
		{"getAndBitwiseOrByteAcquire", "(Ljava/lang/Object;JB)B", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseOrByteAcquire, int8_t, Object$*, int64_t, int8_t), nullptr, nullptr, getAndBitwiseOrByteAcquiremethodAnnotations$$},
		{"getAndBitwiseOrByteRelease", "(Ljava/lang/Object;JB)B", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseOrByteRelease, int8_t, Object$*, int64_t, int8_t), nullptr, nullptr, getAndBitwiseOrByteReleasemethodAnnotations$$},
		{"getAndBitwiseOrChar", "(Ljava/lang/Object;JC)C", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseOrChar, char16_t, Object$*, int64_t, char16_t), nullptr, nullptr, getAndBitwiseOrCharmethodAnnotations$$},
		{"getAndBitwiseOrCharAcquire", "(Ljava/lang/Object;JC)C", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseOrCharAcquire, char16_t, Object$*, int64_t, char16_t), nullptr, nullptr, getAndBitwiseOrCharAcquiremethodAnnotations$$},
		{"getAndBitwiseOrCharRelease", "(Ljava/lang/Object;JC)C", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseOrCharRelease, char16_t, Object$*, int64_t, char16_t), nullptr, nullptr, getAndBitwiseOrCharReleasemethodAnnotations$$},
		{"getAndBitwiseOrInt", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseOrInt, int32_t, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseOrIntmethodAnnotations$$},
		{"getAndBitwiseOrIntAcquire", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseOrIntAcquire, int32_t, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseOrIntAcquiremethodAnnotations$$},
		{"getAndBitwiseOrIntRelease", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseOrIntRelease, int32_t, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseOrIntReleasemethodAnnotations$$},
		{"getAndBitwiseOrLong", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseOrLong, int64_t, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseOrLongmethodAnnotations$$},
		{"getAndBitwiseOrLongAcquire", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseOrLongAcquire, int64_t, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseOrLongAcquiremethodAnnotations$$},
		{"getAndBitwiseOrLongRelease", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseOrLongRelease, int64_t, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseOrLongReleasemethodAnnotations$$},
		{"getAndBitwiseOrShort", "(Ljava/lang/Object;JS)S", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseOrShort, int16_t, Object$*, int64_t, int16_t), nullptr, nullptr, getAndBitwiseOrShortmethodAnnotations$$},
		{"getAndBitwiseOrShortAcquire", "(Ljava/lang/Object;JS)S", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseOrShortAcquire, int16_t, Object$*, int64_t, int16_t), nullptr, nullptr, getAndBitwiseOrShortAcquiremethodAnnotations$$},
		{"getAndBitwiseOrShortRelease", "(Ljava/lang/Object;JS)S", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseOrShortRelease, int16_t, Object$*, int64_t, int16_t), nullptr, nullptr, getAndBitwiseOrShortReleasemethodAnnotations$$},
		{"getAndBitwiseXorBoolean", "(Ljava/lang/Object;JZ)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseXorBoolean, bool, Object$*, int64_t, bool), nullptr, nullptr, getAndBitwiseXorBooleanmethodAnnotations$$},
		{"getAndBitwiseXorBooleanAcquire", "(Ljava/lang/Object;JZ)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseXorBooleanAcquire, bool, Object$*, int64_t, bool), nullptr, nullptr, getAndBitwiseXorBooleanAcquiremethodAnnotations$$},
		{"getAndBitwiseXorBooleanRelease", "(Ljava/lang/Object;JZ)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseXorBooleanRelease, bool, Object$*, int64_t, bool), nullptr, nullptr, getAndBitwiseXorBooleanReleasemethodAnnotations$$},
		{"getAndBitwiseXorByte", "(Ljava/lang/Object;JB)B", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseXorByte, int8_t, Object$*, int64_t, int8_t), nullptr, nullptr, getAndBitwiseXorBytemethodAnnotations$$},
		{"getAndBitwiseXorByteAcquire", "(Ljava/lang/Object;JB)B", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseXorByteAcquire, int8_t, Object$*, int64_t, int8_t), nullptr, nullptr, getAndBitwiseXorByteAcquiremethodAnnotations$$},
		{"getAndBitwiseXorByteRelease", "(Ljava/lang/Object;JB)B", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseXorByteRelease, int8_t, Object$*, int64_t, int8_t), nullptr, nullptr, getAndBitwiseXorByteReleasemethodAnnotations$$},
		{"getAndBitwiseXorChar", "(Ljava/lang/Object;JC)C", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseXorChar, char16_t, Object$*, int64_t, char16_t), nullptr, nullptr, getAndBitwiseXorCharmethodAnnotations$$},
		{"getAndBitwiseXorCharAcquire", "(Ljava/lang/Object;JC)C", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseXorCharAcquire, char16_t, Object$*, int64_t, char16_t), nullptr, nullptr, getAndBitwiseXorCharAcquiremethodAnnotations$$},
		{"getAndBitwiseXorCharRelease", "(Ljava/lang/Object;JC)C", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseXorCharRelease, char16_t, Object$*, int64_t, char16_t), nullptr, nullptr, getAndBitwiseXorCharReleasemethodAnnotations$$},
		{"getAndBitwiseXorInt", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseXorInt, int32_t, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseXorIntmethodAnnotations$$},
		{"getAndBitwiseXorIntAcquire", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseXorIntAcquire, int32_t, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseXorIntAcquiremethodAnnotations$$},
		{"getAndBitwiseXorIntRelease", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseXorIntRelease, int32_t, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseXorIntReleasemethodAnnotations$$},
		{"getAndBitwiseXorLong", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseXorLong, int64_t, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseXorLongmethodAnnotations$$},
		{"getAndBitwiseXorLongAcquire", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseXorLongAcquire, int64_t, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseXorLongAcquiremethodAnnotations$$},
		{"getAndBitwiseXorLongRelease", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseXorLongRelease, int64_t, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseXorLongReleasemethodAnnotations$$},
		{"getAndBitwiseXorShort", "(Ljava/lang/Object;JS)S", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseXorShort, int16_t, Object$*, int64_t, int16_t), nullptr, nullptr, getAndBitwiseXorShortmethodAnnotations$$},
		{"getAndBitwiseXorShortAcquire", "(Ljava/lang/Object;JS)S", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseXorShortAcquire, int16_t, Object$*, int64_t, int16_t), nullptr, nullptr, getAndBitwiseXorShortAcquiremethodAnnotations$$},
		{"getAndBitwiseXorShortRelease", "(Ljava/lang/Object;JS)S", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndBitwiseXorShortRelease, int16_t, Object$*, int64_t, int16_t), nullptr, nullptr, getAndBitwiseXorShortReleasemethodAnnotations$$},
		{"getAndSetBoolean", "(Ljava/lang/Object;JZ)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetBoolean, bool, Object$*, int64_t, bool), nullptr, nullptr, getAndSetBooleanmethodAnnotations$$},
		{"getAndSetBooleanAcquire", "(Ljava/lang/Object;JZ)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetBooleanAcquire, bool, Object$*, int64_t, bool), nullptr, nullptr, getAndSetBooleanAcquiremethodAnnotations$$},
		{"getAndSetBooleanRelease", "(Ljava/lang/Object;JZ)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetBooleanRelease, bool, Object$*, int64_t, bool), nullptr, nullptr, getAndSetBooleanReleasemethodAnnotations$$},
		{"getAndSetByte", "(Ljava/lang/Object;JB)B", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetByte, int8_t, Object$*, int64_t, int8_t), nullptr, nullptr, getAndSetBytemethodAnnotations$$},
		{"getAndSetByteAcquire", "(Ljava/lang/Object;JB)B", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetByteAcquire, int8_t, Object$*, int64_t, int8_t), nullptr, nullptr, getAndSetByteAcquiremethodAnnotations$$},
		{"getAndSetByteRelease", "(Ljava/lang/Object;JB)B", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetByteRelease, int8_t, Object$*, int64_t, int8_t), nullptr, nullptr, getAndSetByteReleasemethodAnnotations$$},
		{"getAndSetChar", "(Ljava/lang/Object;JC)C", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetChar, char16_t, Object$*, int64_t, char16_t), nullptr, nullptr, getAndSetCharmethodAnnotations$$},
		{"getAndSetCharAcquire", "(Ljava/lang/Object;JC)C", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetCharAcquire, char16_t, Object$*, int64_t, char16_t), nullptr, nullptr, getAndSetCharAcquiremethodAnnotations$$},
		{"getAndSetCharRelease", "(Ljava/lang/Object;JC)C", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetCharRelease, char16_t, Object$*, int64_t, char16_t), nullptr, nullptr, getAndSetCharReleasemethodAnnotations$$},
		{"getAndSetDouble", "(Ljava/lang/Object;JD)D", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetDouble, double, Object$*, int64_t, double), nullptr, nullptr, getAndSetDoublemethodAnnotations$$},
		{"getAndSetDoubleAcquire", "(Ljava/lang/Object;JD)D", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetDoubleAcquire, double, Object$*, int64_t, double), nullptr, nullptr, getAndSetDoubleAcquiremethodAnnotations$$},
		{"getAndSetDoubleRelease", "(Ljava/lang/Object;JD)D", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetDoubleRelease, double, Object$*, int64_t, double), nullptr, nullptr, getAndSetDoubleReleasemethodAnnotations$$},
		{"getAndSetFloat", "(Ljava/lang/Object;JF)F", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetFloat, float, Object$*, int64_t, float), nullptr, nullptr, getAndSetFloatmethodAnnotations$$},
		{"getAndSetFloatAcquire", "(Ljava/lang/Object;JF)F", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetFloatAcquire, float, Object$*, int64_t, float), nullptr, nullptr, getAndSetFloatAcquiremethodAnnotations$$},
		{"getAndSetFloatRelease", "(Ljava/lang/Object;JF)F", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetFloatRelease, float, Object$*, int64_t, float), nullptr, nullptr, getAndSetFloatReleasemethodAnnotations$$},
		{"getAndSetInt", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetInt, int32_t, Object$*, int64_t, int32_t), nullptr, nullptr, getAndSetIntmethodAnnotations$$},
		{"getAndSetIntAcquire", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetIntAcquire, int32_t, Object$*, int64_t, int32_t), nullptr, nullptr, getAndSetIntAcquiremethodAnnotations$$},
		{"getAndSetIntRelease", "(Ljava/lang/Object;JI)I", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetIntRelease, int32_t, Object$*, int64_t, int32_t), nullptr, nullptr, getAndSetIntReleasemethodAnnotations$$},
		{"getAndSetLong", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetLong, int64_t, Object$*, int64_t, int64_t), nullptr, nullptr, getAndSetLongmethodAnnotations$$},
		{"getAndSetLongAcquire", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetLongAcquire, int64_t, Object$*, int64_t, int64_t), nullptr, nullptr, getAndSetLongAcquiremethodAnnotations$$},
		{"getAndSetLongRelease", "(Ljava/lang/Object;JJ)J", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetLongRelease, int64_t, Object$*, int64_t, int64_t), nullptr, nullptr, getAndSetLongReleasemethodAnnotations$$},
		{"getAndSetObject", "(Ljava/lang/Object;JLjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(Unsafe, getAndSetObject, $Object*, Object$*, int64_t, Object$*), nullptr, nullptr, getAndSetObjectmethodAnnotations$$},
		{"getAndSetObjectAcquire", "(Ljava/lang/Object;JLjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(Unsafe, getAndSetObjectAcquire, $Object*, Object$*, int64_t, Object$*), nullptr, nullptr, getAndSetObjectAcquiremethodAnnotations$$},
		{"getAndSetObjectRelease", "(Ljava/lang/Object;JLjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(Unsafe, getAndSetObjectRelease, $Object*, Object$*, int64_t, Object$*), nullptr, nullptr, getAndSetObjectReleasemethodAnnotations$$},
		{"getAndSetReference", "(Ljava/lang/Object;JLjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetReference, $Object*, Object$*, int64_t, Object$*), nullptr, nullptr, getAndSetReferencemethodAnnotations$$},
		{"getAndSetReferenceAcquire", "(Ljava/lang/Object;JLjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetReferenceAcquire, $Object*, Object$*, int64_t, Object$*), nullptr, nullptr, getAndSetReferenceAcquiremethodAnnotations$$},
		{"getAndSetReferenceRelease", "(Ljava/lang/Object;JLjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetReferenceRelease, $Object*, Object$*, int64_t, Object$*), nullptr, nullptr, getAndSetReferenceReleasemethodAnnotations$$},
		{"getAndSetShort", "(Ljava/lang/Object;JS)S", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetShort, int16_t, Object$*, int64_t, int16_t), nullptr, nullptr, getAndSetShortmethodAnnotations$$},
		{"getAndSetShortAcquire", "(Ljava/lang/Object;JS)S", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetShortAcquire, int16_t, Object$*, int64_t, int16_t), nullptr, nullptr, getAndSetShortAcquiremethodAnnotations$$},
		{"getAndSetShortRelease", "(Ljava/lang/Object;JS)S", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getAndSetShortRelease, int16_t, Object$*, int64_t, int16_t), nullptr, nullptr, getAndSetShortReleasemethodAnnotations$$},
		{"getBoolean", "(Ljava/lang/Object;J)Z", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, getBoolean, bool, Object$*, int64_t), nullptr, nullptr, getBooleanmethodAnnotations$$},
		{"getBooleanAcquire", "(Ljava/lang/Object;J)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getBooleanAcquire, bool, Object$*, int64_t), nullptr, nullptr, getBooleanAcquiremethodAnnotations$$},
		{"getBooleanOpaque", "(Ljava/lang/Object;J)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getBooleanOpaque, bool, Object$*, int64_t), nullptr, nullptr, getBooleanOpaquemethodAnnotations$$},
		{"getBooleanVolatile", "(Ljava/lang/Object;J)Z", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, getBooleanVolatile, bool, Object$*, int64_t), nullptr, nullptr, getBooleanVolatilemethodAnnotations$$},
		{"getByte", "(Ljava/lang/Object;J)B", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, getByte, int8_t, Object$*, int64_t), nullptr, nullptr, getBytemethodAnnotations$$},
		{"getByte", "(J)B", nullptr, $PUBLIC, $method(Unsafe, getByte, int8_t, int64_t), nullptr, nullptr, getBytemethodAnnotations$$$1},
		{"getByteAcquire", "(Ljava/lang/Object;J)B", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getByteAcquire, int8_t, Object$*, int64_t), nullptr, nullptr, getByteAcquiremethodAnnotations$$},
		{"getByteOpaque", "(Ljava/lang/Object;J)B", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getByteOpaque, int8_t, Object$*, int64_t), nullptr, nullptr, getByteOpaquemethodAnnotations$$},
		{"getByteVolatile", "(Ljava/lang/Object;J)B", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, getByteVolatile, int8_t, Object$*, int64_t), nullptr, nullptr, getByteVolatilemethodAnnotations$$},
		{"getChar", "(Ljava/lang/Object;J)C", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, getChar, char16_t, Object$*, int64_t), nullptr, nullptr, getCharmethodAnnotations$$},
		{"getChar", "(J)C", nullptr, $PUBLIC, $method(Unsafe, getChar, char16_t, int64_t), nullptr, nullptr, getCharmethodAnnotations$$$1},
		{"getCharAcquire", "(Ljava/lang/Object;J)C", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getCharAcquire, char16_t, Object$*, int64_t), nullptr, nullptr, getCharAcquiremethodAnnotations$$},
		{"getCharOpaque", "(Ljava/lang/Object;J)C", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getCharOpaque, char16_t, Object$*, int64_t), nullptr, nullptr, getCharOpaquemethodAnnotations$$},
		{"getCharUnaligned", "(Ljava/lang/Object;J)C", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getCharUnaligned, char16_t, Object$*, int64_t), nullptr, nullptr, getCharUnalignedmethodAnnotations$$},
		{"getCharUnaligned", "(Ljava/lang/Object;JZ)C", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getCharUnaligned, char16_t, Object$*, int64_t, bool)},
		{"getCharVolatile", "(Ljava/lang/Object;J)C", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, getCharVolatile, char16_t, Object$*, int64_t), nullptr, nullptr, getCharVolatilemethodAnnotations$$},
		{"getDouble", "(Ljava/lang/Object;J)D", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, getDouble, double, Object$*, int64_t), nullptr, nullptr, getDoublemethodAnnotations$$},
		{"getDouble", "(J)D", nullptr, $PUBLIC, $method(Unsafe, getDouble, double, int64_t), nullptr, nullptr, getDoublemethodAnnotations$$$1},
		{"getDoubleAcquire", "(Ljava/lang/Object;J)D", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getDoubleAcquire, double, Object$*, int64_t), nullptr, nullptr, getDoubleAcquiremethodAnnotations$$},
		{"getDoubleOpaque", "(Ljava/lang/Object;J)D", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getDoubleOpaque, double, Object$*, int64_t), nullptr, nullptr, getDoubleOpaquemethodAnnotations$$},
		{"getDoubleVolatile", "(Ljava/lang/Object;J)D", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, getDoubleVolatile, double, Object$*, int64_t), nullptr, nullptr, getDoubleVolatilemethodAnnotations$$},
		{"getFloat", "(Ljava/lang/Object;J)F", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, getFloat, float, Object$*, int64_t), nullptr, nullptr, getFloatmethodAnnotations$$},
		{"getFloat", "(J)F", nullptr, $PUBLIC, $method(Unsafe, getFloat, float, int64_t), nullptr, nullptr, getFloatmethodAnnotations$$$1},
		{"getFloatAcquire", "(Ljava/lang/Object;J)F", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getFloatAcquire, float, Object$*, int64_t), nullptr, nullptr, getFloatAcquiremethodAnnotations$$},
		{"getFloatOpaque", "(Ljava/lang/Object;J)F", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getFloatOpaque, float, Object$*, int64_t), nullptr, nullptr, getFloatOpaquemethodAnnotations$$},
		{"getFloatVolatile", "(Ljava/lang/Object;J)F", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, getFloatVolatile, float, Object$*, int64_t), nullptr, nullptr, getFloatVolatilemethodAnnotations$$},
		{"getInt", "(Ljava/lang/Object;J)I", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, getInt, int32_t, Object$*, int64_t), nullptr, nullptr, getIntmethodAnnotations$$},
		{"getInt", "(J)I", nullptr, $PUBLIC, $method(Unsafe, getInt, int32_t, int64_t), nullptr, nullptr, getIntmethodAnnotations$$$1},
		{"getIntAcquire", "(Ljava/lang/Object;J)I", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getIntAcquire, int32_t, Object$*, int64_t), nullptr, nullptr, getIntAcquiremethodAnnotations$$},
		{"getIntOpaque", "(Ljava/lang/Object;J)I", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getIntOpaque, int32_t, Object$*, int64_t), nullptr, nullptr, getIntOpaquemethodAnnotations$$},
		{"getIntUnaligned", "(Ljava/lang/Object;J)I", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getIntUnaligned, int32_t, Object$*, int64_t), nullptr, nullptr, getIntUnalignedmethodAnnotations$$},
		{"getIntUnaligned", "(Ljava/lang/Object;JZ)I", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getIntUnaligned, int32_t, Object$*, int64_t, bool)},
		{"getIntVolatile", "(Ljava/lang/Object;J)I", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, getIntVolatile, int32_t, Object$*, int64_t), nullptr, nullptr, getIntVolatilemethodAnnotations$$},
		{"getLoadAverage", "([DI)I", nullptr, $PUBLIC, $method(Unsafe, getLoadAverage, int32_t, $doubles*, int32_t)},
		{"getLoadAverage0", "([DI)I", nullptr, $PRIVATE | $NATIVE, $method(Unsafe, getLoadAverage0, int32_t, $doubles*, int32_t)},
		{"getLong", "(Ljava/lang/Object;J)J", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, getLong, int64_t, Object$*, int64_t), nullptr, nullptr, getLongmethodAnnotations$$},
		{"getLong", "(J)J", nullptr, $PUBLIC, $method(Unsafe, getLong, int64_t, int64_t), nullptr, nullptr, getLongmethodAnnotations$$$1},
		{"getLongAcquire", "(Ljava/lang/Object;J)J", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getLongAcquire, int64_t, Object$*, int64_t), nullptr, nullptr, getLongAcquiremethodAnnotations$$},
		{"getLongOpaque", "(Ljava/lang/Object;J)J", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getLongOpaque, int64_t, Object$*, int64_t), nullptr, nullptr, getLongOpaquemethodAnnotations$$},
		{"getLongUnaligned", "(Ljava/lang/Object;J)J", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getLongUnaligned, int64_t, Object$*, int64_t), nullptr, nullptr, getLongUnalignedmethodAnnotations$$},
		{"getLongUnaligned", "(Ljava/lang/Object;JZ)J", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getLongUnaligned, int64_t, Object$*, int64_t, bool)},
		{"getLongVolatile", "(Ljava/lang/Object;J)J", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, getLongVolatile, int64_t, Object$*, int64_t), nullptr, nullptr, getLongVolatilemethodAnnotations$$},
		{"getObject", "(Ljava/lang/Object;J)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(Unsafe, getObject, $Object*, Object$*, int64_t), nullptr, nullptr, getObjectmethodAnnotations$$},
		{"getObjectAcquire", "(Ljava/lang/Object;J)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(Unsafe, getObjectAcquire, $Object*, Object$*, int64_t), nullptr, nullptr, getObjectAcquiremethodAnnotations$$},
		{"getObjectOpaque", "(Ljava/lang/Object;J)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(Unsafe, getObjectOpaque, $Object*, Object$*, int64_t), nullptr, nullptr, getObjectOpaquemethodAnnotations$$},
		{"getObjectVolatile", "(Ljava/lang/Object;J)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(Unsafe, getObjectVolatile, $Object*, Object$*, int64_t), nullptr, nullptr, getObjectVolatilemethodAnnotations$$},
		{"getReference", "(Ljava/lang/Object;J)Ljava/lang/Object;", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, getReference, $Object*, Object$*, int64_t), nullptr, nullptr, getReferencemethodAnnotations$$},
		{"getReferenceAcquire", "(Ljava/lang/Object;J)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getReferenceAcquire, $Object*, Object$*, int64_t), nullptr, nullptr, getReferenceAcquiremethodAnnotations$$},
		{"getReferenceOpaque", "(Ljava/lang/Object;J)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getReferenceOpaque, $Object*, Object$*, int64_t), nullptr, nullptr, getReferenceOpaquemethodAnnotations$$},
		{"getReferenceVolatile", "(Ljava/lang/Object;J)Ljava/lang/Object;", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, getReferenceVolatile, $Object*, Object$*, int64_t), nullptr, nullptr, getReferenceVolatilemethodAnnotations$$},
		{"getShort", "(Ljava/lang/Object;J)S", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, getShort, int16_t, Object$*, int64_t), nullptr, nullptr, getShortmethodAnnotations$$},
		{"getShort", "(J)S", nullptr, $PUBLIC, $method(Unsafe, getShort, int16_t, int64_t), nullptr, nullptr, getShortmethodAnnotations$$$1},
		{"getShortAcquire", "(Ljava/lang/Object;J)S", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getShortAcquire, int16_t, Object$*, int64_t), nullptr, nullptr, getShortAcquiremethodAnnotations$$},
		{"getShortOpaque", "(Ljava/lang/Object;J)S", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getShortOpaque, int16_t, Object$*, int64_t), nullptr, nullptr, getShortOpaquemethodAnnotations$$},
		{"getShortUnaligned", "(Ljava/lang/Object;J)S", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getShortUnaligned, int16_t, Object$*, int64_t), nullptr, nullptr, getShortUnalignedmethodAnnotations$$},
		{"getShortUnaligned", "(Ljava/lang/Object;JZ)S", nullptr, $PUBLIC | $FINAL, $method(Unsafe, getShortUnaligned, int16_t, Object$*, int64_t, bool)},
		{"getShortVolatile", "(Ljava/lang/Object;J)S", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, getShortVolatile, int16_t, Object$*, int64_t), nullptr, nullptr, getShortVolatilemethodAnnotations$$},
		{"getUncompressedObject", "(J)Ljava/lang/Object;", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, getUncompressedObject, $Object*, int64_t)},
		{"getUnsafe", "()Ljdk/internal/misc/Unsafe;", nullptr, $PUBLIC | $STATIC, $staticMethod(Unsafe, getUnsafe, Unsafe*)},
		{"invalidInput", "()Ljava/lang/RuntimeException;", nullptr, $PRIVATE, $method(Unsafe, invalidInput, $RuntimeException*)},
		{"invokeCleaner", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $method(Unsafe, invokeCleaner, void, $ByteBuffer*)},
		{"is32BitClean", "(J)Z", nullptr, $PRIVATE, $method(Unsafe, is32BitClean, bool, int64_t)},
		{"isBigEndian", "()Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, isBigEndian, bool)},
		{"isWritebackEnabled", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Unsafe, isWritebackEnabled, bool)},
		{"loadFence", "()V", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, loadFence, void), nullptr, nullptr, loadFencemethodAnnotations$$},
		{"loadLoadFence", "()V", nullptr, $PUBLIC | $FINAL, $method(Unsafe, loadLoadFence, void)},
		{"makeInt", "(SS)I", nullptr, $PRIVATE | $STATIC, $staticMethod(Unsafe, makeInt, int32_t, int16_t, int16_t)},
		{"makeInt", "(BBBB)I", nullptr, $PRIVATE | $STATIC, $staticMethod(Unsafe, makeInt, int32_t, int8_t, int8_t, int8_t, int8_t)},
		{"makeLong", "(BBBBBBBB)J", nullptr, $PRIVATE | $STATIC, $staticMethod(Unsafe, makeLong, int64_t, int8_t, int8_t, int8_t, int8_t, int8_t, int8_t, int8_t, int8_t)},
		{"makeLong", "(SSSS)J", nullptr, $PRIVATE | $STATIC, $staticMethod(Unsafe, makeLong, int64_t, int16_t, int16_t, int16_t, int16_t)},
		{"makeLong", "(II)J", nullptr, $PRIVATE | $STATIC, $staticMethod(Unsafe, makeLong, int64_t, int32_t, int32_t)},
		{"makeShort", "(BB)S", nullptr, $PRIVATE | $STATIC, $staticMethod(Unsafe, makeShort, int16_t, int8_t, int8_t)},
		{"objectFieldOffset", "(Ljava/lang/reflect/Field;)J", nullptr, $PUBLIC, $method(Unsafe, objectFieldOffset, int64_t, $Field*)},
		{"objectFieldOffset", "(Ljava/lang/Class;Ljava/lang/String;)J", "(Ljava/lang/Class<*>;Ljava/lang/String;)J", $PUBLIC, $method(Unsafe, objectFieldOffset, int64_t, $Class*, $String*)},
		{"objectFieldOffset0", "(Ljava/lang/reflect/Field;)J", nullptr, $PRIVATE | $NATIVE, $method(Unsafe, objectFieldOffset0, int64_t, $Field*)},
		{"objectFieldOffset1", "(Ljava/lang/Class;Ljava/lang/String;)J", "(Ljava/lang/Class<*>;Ljava/lang/String;)J", $PRIVATE | $NATIVE, $method(Unsafe, objectFieldOffset1, int64_t, $Class*, $String*)},
		{"pageSize", "()I", nullptr, $PUBLIC, $method(Unsafe, pageSize, int32_t)},
		{"park", "(ZJ)V", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, park, void, bool, int64_t), nullptr, nullptr, parkmethodAnnotations$$},
		{"pick", "(BB)B", nullptr, $PRIVATE | $STATIC, $staticMethod(Unsafe, pick, int8_t, int8_t, int8_t)},
		{"pick", "(SS)S", nullptr, $PRIVATE | $STATIC, $staticMethod(Unsafe, pick, int16_t, int16_t, int16_t)},
		{"pick", "(II)I", nullptr, $PRIVATE | $STATIC, $staticMethod(Unsafe, pick, int32_t, int32_t, int32_t)},
		{"pickPos", "(II)I", nullptr, $PRIVATE | $STATIC, $staticMethod(Unsafe, pickPos, int32_t, int32_t, int32_t)},
		{"putAddress", "(Ljava/lang/Object;JJ)V", nullptr, $PUBLIC, $method(Unsafe, putAddress, void, Object$*, int64_t, int64_t), nullptr, nullptr, putAddressmethodAnnotations$$},
		{"putAddress", "(JJ)V", nullptr, $PUBLIC, $method(Unsafe, putAddress, void, int64_t, int64_t), nullptr, nullptr, putAddressmethodAnnotations$$$1},
		{"putBoolean", "(Ljava/lang/Object;JZ)V", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, putBoolean, void, Object$*, int64_t, bool), nullptr, nullptr, putBooleanmethodAnnotations$$},
		{"putBooleanOpaque", "(Ljava/lang/Object;JZ)V", nullptr, $PUBLIC | $FINAL, $method(Unsafe, putBooleanOpaque, void, Object$*, int64_t, bool), nullptr, nullptr, putBooleanOpaquemethodAnnotations$$},
		{"putBooleanRelease", "(Ljava/lang/Object;JZ)V", nullptr, $PUBLIC | $FINAL, $method(Unsafe, putBooleanRelease, void, Object$*, int64_t, bool), nullptr, nullptr, putBooleanReleasemethodAnnotations$$},
		{"putBooleanVolatile", "(Ljava/lang/Object;JZ)V", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, putBooleanVolatile, void, Object$*, int64_t, bool), nullptr, nullptr, putBooleanVolatilemethodAnnotations$$},
		{"putByte", "(Ljava/lang/Object;JB)V", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, putByte, void, Object$*, int64_t, int8_t), nullptr, nullptr, putBytemethodAnnotations$$},
		{"putByte", "(JB)V", nullptr, $PUBLIC, $method(Unsafe, putByte, void, int64_t, int8_t), nullptr, nullptr, putBytemethodAnnotations$$$1},
		{"putByteOpaque", "(Ljava/lang/Object;JB)V", nullptr, $PUBLIC | $FINAL, $method(Unsafe, putByteOpaque, void, Object$*, int64_t, int8_t), nullptr, nullptr, putByteOpaquemethodAnnotations$$},
		{"putByteRelease", "(Ljava/lang/Object;JB)V", nullptr, $PUBLIC | $FINAL, $method(Unsafe, putByteRelease, void, Object$*, int64_t, int8_t), nullptr, nullptr, putByteReleasemethodAnnotations$$},
		{"putByteVolatile", "(Ljava/lang/Object;JB)V", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, putByteVolatile, void, Object$*, int64_t, int8_t), nullptr, nullptr, putByteVolatilemethodAnnotations$$},
		{"putChar", "(Ljava/lang/Object;JC)V", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, putChar, void, Object$*, int64_t, char16_t), nullptr, nullptr, putCharmethodAnnotations$$},
		{"putChar", "(JC)V", nullptr, $PUBLIC, $method(Unsafe, putChar, void, int64_t, char16_t), nullptr, nullptr, putCharmethodAnnotations$$$1},
		{"putCharOpaque", "(Ljava/lang/Object;JC)V", nullptr, $PUBLIC | $FINAL, $method(Unsafe, putCharOpaque, void, Object$*, int64_t, char16_t), nullptr, nullptr, putCharOpaquemethodAnnotations$$},
		{"putCharRelease", "(Ljava/lang/Object;JC)V", nullptr, $PUBLIC | $FINAL, $method(Unsafe, putCharRelease, void, Object$*, int64_t, char16_t), nullptr, nullptr, putCharReleasemethodAnnotations$$},
		{"putCharUnaligned", "(Ljava/lang/Object;JC)V", nullptr, $PUBLIC | $FINAL, $method(Unsafe, putCharUnaligned, void, Object$*, int64_t, char16_t), nullptr, nullptr, putCharUnalignedmethodAnnotations$$},
		{"putCharUnaligned", "(Ljava/lang/Object;JCZ)V", nullptr, $PUBLIC | $FINAL, $method(Unsafe, putCharUnaligned, void, Object$*, int64_t, char16_t, bool)},
		{"putCharVolatile", "(Ljava/lang/Object;JC)V", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, putCharVolatile, void, Object$*, int64_t, char16_t), nullptr, nullptr, putCharVolatilemethodAnnotations$$},
		{"putDouble", "(Ljava/lang/Object;JD)V", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, putDouble, void, Object$*, int64_t, double), nullptr, nullptr, putDoublemethodAnnotations$$},
		{"putDouble", "(JD)V", nullptr, $PUBLIC, $method(Unsafe, putDouble, void, int64_t, double), nullptr, nullptr, putDoublemethodAnnotations$$$1},
		{"putDoubleOpaque", "(Ljava/lang/Object;JD)V", nullptr, $PUBLIC | $FINAL, $method(Unsafe, putDoubleOpaque, void, Object$*, int64_t, double), nullptr, nullptr, putDoubleOpaquemethodAnnotations$$},
		{"putDoubleRelease", "(Ljava/lang/Object;JD)V", nullptr, $PUBLIC | $FINAL, $method(Unsafe, putDoubleRelease, void, Object$*, int64_t, double), nullptr, nullptr, putDoubleReleasemethodAnnotations$$},
		{"putDoubleVolatile", "(Ljava/lang/Object;JD)V", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, putDoubleVolatile, void, Object$*, int64_t, double), nullptr, nullptr, putDoubleVolatilemethodAnnotations$$},
		{"putFloat", "(Ljava/lang/Object;JF)V", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, putFloat, void, Object$*, int64_t, float), nullptr, nullptr, putFloatmethodAnnotations$$},
		{"putFloat", "(JF)V", nullptr, $PUBLIC, $method(Unsafe, putFloat, void, int64_t, float), nullptr, nullptr, putFloatmethodAnnotations$$$1},
		{"putFloatOpaque", "(Ljava/lang/Object;JF)V", nullptr, $PUBLIC | $FINAL, $method(Unsafe, putFloatOpaque, void, Object$*, int64_t, float), nullptr, nullptr, putFloatOpaquemethodAnnotations$$},
		{"putFloatRelease", "(Ljava/lang/Object;JF)V", nullptr, $PUBLIC | $FINAL, $method(Unsafe, putFloatRelease, void, Object$*, int64_t, float), nullptr, nullptr, putFloatReleasemethodAnnotations$$},
		{"putFloatVolatile", "(Ljava/lang/Object;JF)V", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, putFloatVolatile, void, Object$*, int64_t, float), nullptr, nullptr, putFloatVolatilemethodAnnotations$$},
		{"putInt", "(Ljava/lang/Object;JI)V", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, putInt, void, Object$*, int64_t, int32_t), nullptr, nullptr, putIntmethodAnnotations$$},
		{"putInt", "(JI)V", nullptr, $PUBLIC, $method(Unsafe, putInt, void, int64_t, int32_t), nullptr, nullptr, putIntmethodAnnotations$$$1},
		{"putIntOpaque", "(Ljava/lang/Object;JI)V", nullptr, $PUBLIC | $FINAL, $method(Unsafe, putIntOpaque, void, Object$*, int64_t, int32_t), nullptr, nullptr, putIntOpaquemethodAnnotations$$},
		{"putIntParts", "(Ljava/lang/Object;JSS)V", nullptr, $PRIVATE, $method(Unsafe, putIntParts, void, Object$*, int64_t, int16_t, int16_t)},
		{"putIntParts", "(Ljava/lang/Object;JBBBB)V", nullptr, $PRIVATE, $method(Unsafe, putIntParts, void, Object$*, int64_t, int8_t, int8_t, int8_t, int8_t)},
		{"putIntRelease", "(Ljava/lang/Object;JI)V", nullptr, $PUBLIC | $FINAL, $method(Unsafe, putIntRelease, void, Object$*, int64_t, int32_t), nullptr, nullptr, putIntReleasemethodAnnotations$$},
		{"putIntUnaligned", "(Ljava/lang/Object;JI)V", nullptr, $PUBLIC | $FINAL, $method(Unsafe, putIntUnaligned, void, Object$*, int64_t, int32_t), nullptr, nullptr, putIntUnalignedmethodAnnotations$$},
		{"putIntUnaligned", "(Ljava/lang/Object;JIZ)V", nullptr, $PUBLIC | $FINAL, $method(Unsafe, putIntUnaligned, void, Object$*, int64_t, int32_t, bool)},
		{"putIntVolatile", "(Ljava/lang/Object;JI)V", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, putIntVolatile, void, Object$*, int64_t, int32_t), nullptr, nullptr, putIntVolatilemethodAnnotations$$},
		{"putLong", "(Ljava/lang/Object;JJ)V", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, putLong, void, Object$*, int64_t, int64_t), nullptr, nullptr, putLongmethodAnnotations$$},
		{"putLong", "(JJ)V", nullptr, $PUBLIC, $method(Unsafe, putLong, void, int64_t, int64_t), nullptr, nullptr, putLongmethodAnnotations$$$1},
		{"putLongOpaque", "(Ljava/lang/Object;JJ)V", nullptr, $PUBLIC | $FINAL, $method(Unsafe, putLongOpaque, void, Object$*, int64_t, int64_t), nullptr, nullptr, putLongOpaquemethodAnnotations$$},
		{"putLongParts", "(Ljava/lang/Object;JBBBBBBBB)V", nullptr, $PRIVATE, $method(Unsafe, putLongParts, void, Object$*, int64_t, int8_t, int8_t, int8_t, int8_t, int8_t, int8_t, int8_t, int8_t)},
		{"putLongParts", "(Ljava/lang/Object;JSSSS)V", nullptr, $PRIVATE, $method(Unsafe, putLongParts, void, Object$*, int64_t, int16_t, int16_t, int16_t, int16_t)},
		{"putLongParts", "(Ljava/lang/Object;JII)V", nullptr, $PRIVATE, $method(Unsafe, putLongParts, void, Object$*, int64_t, int32_t, int32_t)},
		{"putLongRelease", "(Ljava/lang/Object;JJ)V", nullptr, $PUBLIC | $FINAL, $method(Unsafe, putLongRelease, void, Object$*, int64_t, int64_t), nullptr, nullptr, putLongReleasemethodAnnotations$$},
		{"putLongUnaligned", "(Ljava/lang/Object;JJ)V", nullptr, $PUBLIC | $FINAL, $method(Unsafe, putLongUnaligned, void, Object$*, int64_t, int64_t), nullptr, nullptr, putLongUnalignedmethodAnnotations$$},
		{"putLongUnaligned", "(Ljava/lang/Object;JJZ)V", nullptr, $PUBLIC | $FINAL, $method(Unsafe, putLongUnaligned, void, Object$*, int64_t, int64_t, bool)},
		{"putLongVolatile", "(Ljava/lang/Object;JJ)V", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, putLongVolatile, void, Object$*, int64_t, int64_t), nullptr, nullptr, putLongVolatilemethodAnnotations$$},
		{"putObject", "(Ljava/lang/Object;JLjava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(Unsafe, putObject, void, Object$*, int64_t, Object$*), nullptr, nullptr, putObjectmethodAnnotations$$},
		{"putObjectOpaque", "(Ljava/lang/Object;JLjava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(Unsafe, putObjectOpaque, void, Object$*, int64_t, Object$*), nullptr, nullptr, putObjectOpaquemethodAnnotations$$},
		{"putObjectRelease", "(Ljava/lang/Object;JLjava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(Unsafe, putObjectRelease, void, Object$*, int64_t, Object$*), nullptr, nullptr, putObjectReleasemethodAnnotations$$},
		{"putObjectVolatile", "(Ljava/lang/Object;JLjava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(Unsafe, putObjectVolatile, void, Object$*, int64_t, Object$*), nullptr, nullptr, putObjectVolatilemethodAnnotations$$},
		{"putReference", "(Ljava/lang/Object;JLjava/lang/Object;)V", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, putReference, void, Object$*, int64_t, Object$*), nullptr, nullptr, putReferencemethodAnnotations$$},
		{"putReferenceOpaque", "(Ljava/lang/Object;JLjava/lang/Object;)V", nullptr, $PUBLIC | $FINAL, $method(Unsafe, putReferenceOpaque, void, Object$*, int64_t, Object$*), nullptr, nullptr, putReferenceOpaquemethodAnnotations$$},
		{"putReferenceRelease", "(Ljava/lang/Object;JLjava/lang/Object;)V", nullptr, $PUBLIC | $FINAL, $method(Unsafe, putReferenceRelease, void, Object$*, int64_t, Object$*), nullptr, nullptr, putReferenceReleasemethodAnnotations$$},
		{"putReferenceVolatile", "(Ljava/lang/Object;JLjava/lang/Object;)V", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, putReferenceVolatile, void, Object$*, int64_t, Object$*), nullptr, nullptr, putReferenceVolatilemethodAnnotations$$},
		{"putShort", "(Ljava/lang/Object;JS)V", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, putShort, void, Object$*, int64_t, int16_t), nullptr, nullptr, putShortmethodAnnotations$$},
		{"putShort", "(JS)V", nullptr, $PUBLIC, $method(Unsafe, putShort, void, int64_t, int16_t), nullptr, nullptr, putShortmethodAnnotations$$$1},
		{"putShortOpaque", "(Ljava/lang/Object;JS)V", nullptr, $PUBLIC | $FINAL, $method(Unsafe, putShortOpaque, void, Object$*, int64_t, int16_t), nullptr, nullptr, putShortOpaquemethodAnnotations$$},
		{"putShortParts", "(Ljava/lang/Object;JBB)V", nullptr, $PRIVATE, $method(Unsafe, putShortParts, void, Object$*, int64_t, int8_t, int8_t)},
		{"putShortRelease", "(Ljava/lang/Object;JS)V", nullptr, $PUBLIC | $FINAL, $method(Unsafe, putShortRelease, void, Object$*, int64_t, int16_t), nullptr, nullptr, putShortReleasemethodAnnotations$$},
		{"putShortUnaligned", "(Ljava/lang/Object;JS)V", nullptr, $PUBLIC | $FINAL, $method(Unsafe, putShortUnaligned, void, Object$*, int64_t, int16_t), nullptr, nullptr, putShortUnalignedmethodAnnotations$$},
		{"putShortUnaligned", "(Ljava/lang/Object;JSZ)V", nullptr, $PUBLIC | $FINAL, $method(Unsafe, putShortUnaligned, void, Object$*, int64_t, int16_t, bool)},
		{"putShortVolatile", "(Ljava/lang/Object;JS)V", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, putShortVolatile, void, Object$*, int64_t, int16_t), nullptr, nullptr, putShortVolatilemethodAnnotations$$},
		{"reallocateMemory", "(JJ)J", nullptr, $PUBLIC, $method(Unsafe, reallocateMemory, int64_t, int64_t, int64_t)},
		{"reallocateMemory0", "(JJ)J", nullptr, $PRIVATE | $NATIVE, $method(Unsafe, reallocateMemory0, int64_t, int64_t, int64_t)},
		{"reallocateMemoryChecks", "(JJ)V", nullptr, $PRIVATE, $method(Unsafe, reallocateMemoryChecks, void, int64_t, int64_t)},
		{"registerNatives", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Unsafe, registerNatives, void)},
		{"s2c", "(S)C", nullptr, $PRIVATE, $method(Unsafe, s2c, char16_t, int16_t), nullptr, nullptr, s2cmethodAnnotations$$},
		{"setMemory", "(Ljava/lang/Object;JJB)V", nullptr, $PUBLIC, $method(Unsafe, setMemory, void, Object$*, int64_t, int64_t, int8_t)},
		{"setMemory", "(JJB)V", nullptr, $PUBLIC, $method(Unsafe, setMemory, void, int64_t, int64_t, int8_t)},
		{"setMemory0", "(Ljava/lang/Object;JJB)V", nullptr, $PRIVATE | $NATIVE, $method(Unsafe, setMemory0, void, Object$*, int64_t, int64_t, int8_t)},
		{"setMemoryChecks", "(Ljava/lang/Object;JJB)V", nullptr, $PRIVATE, $method(Unsafe, setMemoryChecks, void, Object$*, int64_t, int64_t, int8_t)},
		{"shouldBeInitialized", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC, $method(Unsafe, shouldBeInitialized, bool, $Class*)},
		{"shouldBeInitialized0", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PRIVATE | $NATIVE, $method(Unsafe, shouldBeInitialized0, bool, $Class*)},
		{"staticFieldBase", "(Ljava/lang/reflect/Field;)Ljava/lang/Object;", nullptr, $PUBLIC, $method(Unsafe, staticFieldBase, $Object*, $Field*)},
		{"staticFieldBase0", "(Ljava/lang/reflect/Field;)Ljava/lang/Object;", nullptr, $PRIVATE | $NATIVE, $method(Unsafe, staticFieldBase0, $Object*, $Field*)},
		{"staticFieldOffset", "(Ljava/lang/reflect/Field;)J", nullptr, $PUBLIC, $method(Unsafe, staticFieldOffset, int64_t, $Field*)},
		{"staticFieldOffset0", "(Ljava/lang/reflect/Field;)J", nullptr, $PRIVATE | $NATIVE, $method(Unsafe, staticFieldOffset0, int64_t, $Field*)},
		{"storeFence", "()V", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, storeFence, void), nullptr, nullptr, storeFencemethodAnnotations$$},
		{"storeStoreFence", "()V", nullptr, $PUBLIC | $FINAL, $method(Unsafe, storeStoreFence, void)},
		{"throwException", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, throwException, void, $Throwable*)},
		{"throwIllegalAccessError", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Unsafe, throwIllegalAccessError, void)},
		{"throwNoSuchMethodError", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Unsafe, throwNoSuchMethodError, void)},
		{"toUnsignedInt", "(B)I", nullptr, $PRIVATE | $STATIC, $staticMethod(Unsafe, toUnsignedInt, int32_t, int8_t)},
		{"toUnsignedInt", "(S)I", nullptr, $PRIVATE | $STATIC, $staticMethod(Unsafe, toUnsignedInt, int32_t, int16_t)},
		{"toUnsignedLong", "(B)J", nullptr, $PRIVATE | $STATIC, $staticMethod(Unsafe, toUnsignedLong, int64_t, int8_t)},
		{"toUnsignedLong", "(S)J", nullptr, $PRIVATE | $STATIC, $staticMethod(Unsafe, toUnsignedLong, int64_t, int16_t)},
		{"toUnsignedLong", "(I)J", nullptr, $PRIVATE | $STATIC, $staticMethod(Unsafe, toUnsignedLong, int64_t, int32_t)},
		{"unalignedAccess", "()Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, unalignedAccess, bool)},
		{"unpark", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $NATIVE, $method(Unsafe, unpark, void, Object$*), nullptr, nullptr, unparkmethodAnnotations$$},
		{"weakCompareAndSetBoolean", "(Ljava/lang/Object;JZZ)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetBoolean, bool, Object$*, int64_t, bool, bool), nullptr, nullptr, weakCompareAndSetBooleanmethodAnnotations$$},
		{"weakCompareAndSetBooleanAcquire", "(Ljava/lang/Object;JZZ)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetBooleanAcquire, bool, Object$*, int64_t, bool, bool), nullptr, nullptr, weakCompareAndSetBooleanAcquiremethodAnnotations$$},
		{"weakCompareAndSetBooleanPlain", "(Ljava/lang/Object;JZZ)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetBooleanPlain, bool, Object$*, int64_t, bool, bool), nullptr, nullptr, weakCompareAndSetBooleanPlainmethodAnnotations$$},
		{"weakCompareAndSetBooleanRelease", "(Ljava/lang/Object;JZZ)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetBooleanRelease, bool, Object$*, int64_t, bool, bool), nullptr, nullptr, weakCompareAndSetBooleanReleasemethodAnnotations$$},
		{"weakCompareAndSetByte", "(Ljava/lang/Object;JBB)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetByte, bool, Object$*, int64_t, int8_t, int8_t), nullptr, nullptr, weakCompareAndSetBytemethodAnnotations$$},
		{"weakCompareAndSetByteAcquire", "(Ljava/lang/Object;JBB)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetByteAcquire, bool, Object$*, int64_t, int8_t, int8_t), nullptr, nullptr, weakCompareAndSetByteAcquiremethodAnnotations$$},
		{"weakCompareAndSetBytePlain", "(Ljava/lang/Object;JBB)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetBytePlain, bool, Object$*, int64_t, int8_t, int8_t), nullptr, nullptr, weakCompareAndSetBytePlainmethodAnnotations$$},
		{"weakCompareAndSetByteRelease", "(Ljava/lang/Object;JBB)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetByteRelease, bool, Object$*, int64_t, int8_t, int8_t), nullptr, nullptr, weakCompareAndSetByteReleasemethodAnnotations$$},
		{"weakCompareAndSetChar", "(Ljava/lang/Object;JCC)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetChar, bool, Object$*, int64_t, char16_t, char16_t), nullptr, nullptr, weakCompareAndSetCharmethodAnnotations$$},
		{"weakCompareAndSetCharAcquire", "(Ljava/lang/Object;JCC)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetCharAcquire, bool, Object$*, int64_t, char16_t, char16_t), nullptr, nullptr, weakCompareAndSetCharAcquiremethodAnnotations$$},
		{"weakCompareAndSetCharPlain", "(Ljava/lang/Object;JCC)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetCharPlain, bool, Object$*, int64_t, char16_t, char16_t), nullptr, nullptr, weakCompareAndSetCharPlainmethodAnnotations$$},
		{"weakCompareAndSetCharRelease", "(Ljava/lang/Object;JCC)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetCharRelease, bool, Object$*, int64_t, char16_t, char16_t), nullptr, nullptr, weakCompareAndSetCharReleasemethodAnnotations$$},
		{"weakCompareAndSetDouble", "(Ljava/lang/Object;JDD)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetDouble, bool, Object$*, int64_t, double, double), nullptr, nullptr, weakCompareAndSetDoublemethodAnnotations$$},
		{"weakCompareAndSetDoubleAcquire", "(Ljava/lang/Object;JDD)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetDoubleAcquire, bool, Object$*, int64_t, double, double), nullptr, nullptr, weakCompareAndSetDoubleAcquiremethodAnnotations$$},
		{"weakCompareAndSetDoublePlain", "(Ljava/lang/Object;JDD)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetDoublePlain, bool, Object$*, int64_t, double, double), nullptr, nullptr, weakCompareAndSetDoublePlainmethodAnnotations$$},
		{"weakCompareAndSetDoubleRelease", "(Ljava/lang/Object;JDD)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetDoubleRelease, bool, Object$*, int64_t, double, double), nullptr, nullptr, weakCompareAndSetDoubleReleasemethodAnnotations$$},
		{"weakCompareAndSetFloat", "(Ljava/lang/Object;JFF)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetFloat, bool, Object$*, int64_t, float, float), nullptr, nullptr, weakCompareAndSetFloatmethodAnnotations$$},
		{"weakCompareAndSetFloatAcquire", "(Ljava/lang/Object;JFF)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetFloatAcquire, bool, Object$*, int64_t, float, float), nullptr, nullptr, weakCompareAndSetFloatAcquiremethodAnnotations$$},
		{"weakCompareAndSetFloatPlain", "(Ljava/lang/Object;JFF)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetFloatPlain, bool, Object$*, int64_t, float, float), nullptr, nullptr, weakCompareAndSetFloatPlainmethodAnnotations$$},
		{"weakCompareAndSetFloatRelease", "(Ljava/lang/Object;JFF)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetFloatRelease, bool, Object$*, int64_t, float, float), nullptr, nullptr, weakCompareAndSetFloatReleasemethodAnnotations$$},
		{"weakCompareAndSetInt", "(Ljava/lang/Object;JII)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetInt, bool, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetIntmethodAnnotations$$},
		{"weakCompareAndSetIntAcquire", "(Ljava/lang/Object;JII)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetIntAcquire, bool, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetIntAcquiremethodAnnotations$$},
		{"weakCompareAndSetIntPlain", "(Ljava/lang/Object;JII)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetIntPlain, bool, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetIntPlainmethodAnnotations$$},
		{"weakCompareAndSetIntRelease", "(Ljava/lang/Object;JII)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetIntRelease, bool, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetIntReleasemethodAnnotations$$},
		{"weakCompareAndSetLong", "(Ljava/lang/Object;JJJ)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetLong, bool, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetLongmethodAnnotations$$},
		{"weakCompareAndSetLongAcquire", "(Ljava/lang/Object;JJJ)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetLongAcquire, bool, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetLongAcquiremethodAnnotations$$},
		{"weakCompareAndSetLongPlain", "(Ljava/lang/Object;JJJ)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetLongPlain, bool, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetLongPlainmethodAnnotations$$},
		{"weakCompareAndSetLongRelease", "(Ljava/lang/Object;JJJ)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetLongRelease, bool, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetLongReleasemethodAnnotations$$},
		{"weakCompareAndSetObject", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(Unsafe, weakCompareAndSetObject, bool, Object$*, int64_t, Object$*, Object$*), nullptr, nullptr, weakCompareAndSetObjectmethodAnnotations$$},
		{"weakCompareAndSetObjectAcquire", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(Unsafe, weakCompareAndSetObjectAcquire, bool, Object$*, int64_t, Object$*, Object$*), nullptr, nullptr, weakCompareAndSetObjectAcquiremethodAnnotations$$},
		{"weakCompareAndSetObjectPlain", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(Unsafe, weakCompareAndSetObjectPlain, bool, Object$*, int64_t, Object$*, Object$*), nullptr, nullptr, weakCompareAndSetObjectPlainmethodAnnotations$$},
		{"weakCompareAndSetObjectRelease", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(Unsafe, weakCompareAndSetObjectRelease, bool, Object$*, int64_t, Object$*, Object$*), nullptr, nullptr, weakCompareAndSetObjectReleasemethodAnnotations$$},
		{"weakCompareAndSetReference", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetReference, bool, Object$*, int64_t, Object$*, Object$*), nullptr, nullptr, weakCompareAndSetReferencemethodAnnotations$$},
		{"weakCompareAndSetReferenceAcquire", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetReferenceAcquire, bool, Object$*, int64_t, Object$*, Object$*), nullptr, nullptr, weakCompareAndSetReferenceAcquiremethodAnnotations$$},
		{"weakCompareAndSetReferencePlain", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetReferencePlain, bool, Object$*, int64_t, Object$*, Object$*), nullptr, nullptr, weakCompareAndSetReferencePlainmethodAnnotations$$},
		{"weakCompareAndSetReferenceRelease", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetReferenceRelease, bool, Object$*, int64_t, Object$*, Object$*), nullptr, nullptr, weakCompareAndSetReferenceReleasemethodAnnotations$$},
		{"weakCompareAndSetShort", "(Ljava/lang/Object;JSS)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetShort, bool, Object$*, int64_t, int16_t, int16_t), nullptr, nullptr, weakCompareAndSetShortmethodAnnotations$$},
		{"weakCompareAndSetShortAcquire", "(Ljava/lang/Object;JSS)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetShortAcquire, bool, Object$*, int64_t, int16_t, int16_t), nullptr, nullptr, weakCompareAndSetShortAcquiremethodAnnotations$$},
		{"weakCompareAndSetShortPlain", "(Ljava/lang/Object;JSS)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetShortPlain, bool, Object$*, int64_t, int16_t, int16_t), nullptr, nullptr, weakCompareAndSetShortPlainmethodAnnotations$$},
		{"weakCompareAndSetShortRelease", "(Ljava/lang/Object;JSS)Z", nullptr, $PUBLIC | $FINAL, $method(Unsafe, weakCompareAndSetShortRelease, bool, Object$*, int64_t, int16_t, int16_t), nullptr, nullptr, weakCompareAndSetShortReleasemethodAnnotations$$},
		{"writeback0", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(Unsafe, writeback0, void, int64_t), nullptr, nullptr, writeback0methodAnnotations$$},
		{"writebackMemory", "(JJ)V", nullptr, $PUBLIC, $method(Unsafe, writebackMemory, void, int64_t, int64_t)},
		{"writebackPostSync0", "()V", nullptr, $PRIVATE | $NATIVE, $method(Unsafe, writebackPostSync0, void), nullptr, nullptr, writebackPostSync0methodAnnotations$$},
		{"writebackPreSync0", "()V", nullptr, $PRIVATE | $NATIVE, $method(Unsafe, writebackPreSync0, void), nullptr, nullptr, writebackPreSync0methodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.misc.Unsafe",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Unsafe, name, initialize, &classInfo$$, Unsafe::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Unsafe);
	});
	return class$;
}

$Class* Unsafe::class$ = nullptr;

		} // misc
	} // internal
} // jdk