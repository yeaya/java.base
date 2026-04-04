#include <java/lang/invoke/VarHandleByteArrayAsFloats$ByteBufferHandle.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsFloats$ByteArrayViewVarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsFloats.h>
#include <java/lang/invoke/VarHandleByteArrayBase.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ReadOnlyBufferException.h>
#include <java/util/Objects.h>
#include <java/util/function/BiFunction.h>
#include <jdk/internal/access/JavaNioAccess.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope.h>
#include <jdk/internal/misc/ScopedMemoryAccess.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/util/Preconditions.h>
#include <jcpp.h>

#undef BUFFER_ADDRESS
#undef BUFFER_LIMIT
#undef BYTE_BUFFER_HB
#undef BYTE_BUFFER_IS_READ_ONLY
#undef FORM
#undef NIO_ACCESS
#undef SCOPED_MEMORY_ACCESS
#undef TYPE
#undef UNSAFE

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;
using $VarHandleByteArrayAsFloats = ::java::lang::invoke::VarHandleByteArrayAsFloats;
using $VarHandleByteArrayAsFloats$ByteArrayViewVarHandle = ::java::lang::invoke::VarHandleByteArrayAsFloats$ByteArrayViewVarHandle;
using $VarHandleByteArrayBase = ::java::lang::invoke::VarHandleByteArrayBase;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $BiFunction = ::java::util::function::BiFunction;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;
using $Preconditions = ::jdk::internal::util::Preconditions;

namespace java {
	namespace lang {
		namespace invoke {

$VarForm* VarHandleByteArrayAsFloats$ByteBufferHandle::FORM = nullptr;

void VarHandleByteArrayAsFloats$ByteBufferHandle::init$(bool be) {
	VarHandleByteArrayAsFloats$ByteBufferHandle::init$(be, false);
}

void VarHandleByteArrayAsFloats$ByteBufferHandle::init$(bool be, bool exact) {
	$VarHandleByteArrayAsFloats$ByteArrayViewVarHandle::init$(VarHandleByteArrayAsFloats$ByteBufferHandle::FORM, be, exact);
}

VarHandleByteArrayAsFloats$ByteBufferHandle* VarHandleByteArrayAsFloats$ByteBufferHandle::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsFloats$ByteBufferHandle, this->be, true);
}

VarHandleByteArrayAsFloats$ByteBufferHandle* VarHandleByteArrayAsFloats$ByteBufferHandle::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsFloats$ByteBufferHandle, this->be, false);
}

$MethodType* VarHandleByteArrayAsFloats$ByteBufferHandle::accessModeTypeUncached($VarHandle$AccessType* at) {
	$load($ByteBuffer);
	return $nc(at)->accessModeType($ByteBuffer::class$, $Float::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

int32_t VarHandleByteArrayAsFloats$ByteBufferHandle::index($ByteBuffer* bb, int32_t index) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$init($VarHandleByteArrayAsFloats);
	$var($MemorySegmentProxy, segmentProxy, $nc($VarHandleByteArrayAsFloats::NIO_ACCESS)->bufferSegment(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	return $Preconditions::checkIndex(index, $nc($MethodHandleStatics::UNSAFE)->getInt(bb, $VarHandleByteArrayBase::BUFFER_LIMIT) - 3, nullptr);
}

$ScopedMemoryAccess$Scope* VarHandleByteArrayAsFloats$ByteBufferHandle::scope($ByteBuffer* bb) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$init($VarHandleByteArrayAsFloats);
	$var($MemorySegmentProxy, segmentProxy, $nc($VarHandleByteArrayAsFloats::NIO_ACCESS)->bufferSegment(bb));
	return segmentProxy != nullptr ? segmentProxy->scope() : ($ScopedMemoryAccess$Scope*)nullptr;
}

int32_t VarHandleByteArrayAsFloats$ByteBufferHandle::indexRO($ByteBuffer* bb, int32_t index) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	if ($nc($MethodHandleStatics::UNSAFE)->getBoolean(bb, $VarHandleByteArrayBase::BYTE_BUFFER_IS_READ_ONLY)) {
		$throwNew($ReadOnlyBufferException);
	}
	return VarHandleByteArrayAsFloats$ByteBufferHandle::index(bb, index);
}

int64_t VarHandleByteArrayAsFloats$ByteBufferHandle::address($ByteBuffer* bb, int32_t index) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	int64_t address = ((int64_t)index) + $nc($MethodHandleStatics::UNSAFE)->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS);
	if ((address & 3) != 0) {
		$throw($($VarHandleByteArrayBase::newIllegalStateExceptionForMisalignedAccess(index)));
	}
	return address;
}

float VarHandleByteArrayAsFloats$ByteBufferHandle::get($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = (int64_t)VarHandleByteArrayAsFloats$ByteBufferHandle::index(bb, index);
	int32_t rawValue = $nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->getIntUnaligned(var$0, var$1, var$2 + $MethodHandleStatics::UNSAFE->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS), $nc(handle)->be);
	return $Float::intBitsToFloat(rawValue);
}

void VarHandleByteArrayAsFloats$ByteBufferHandle::set($VarHandle* ob, Object$* obb, int32_t index, float value) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$3 = (int64_t)indexRO(bb, index);
	int64_t var$2 = var$3 + $MethodHandleStatics::UNSAFE->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS);
	$nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->putIntUnaligned(var$0, var$1, var$2, $Float::floatToRawIntBits(value), $nc(handle)->be);
}

float VarHandleByteArrayAsFloats$ByteBufferHandle::getVolatile($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->getIntVolatile(var$0, var$1, address(bb, VarHandleByteArrayAsFloats$ByteBufferHandle::index(bb, index))));
}

void VarHandleByteArrayAsFloats$ByteBufferHandle::setVolatile($VarHandle* ob, Object$* obb, int32_t index, float value) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	$nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->putIntVolatile(var$0, var$1, var$2, $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, value));
}

float VarHandleByteArrayAsFloats$ByteBufferHandle::getAcquire($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->getIntAcquire(var$0, var$1, address(bb, VarHandleByteArrayAsFloats$ByteBufferHandle::index(bb, index))));
}

void VarHandleByteArrayAsFloats$ByteBufferHandle::setRelease($VarHandle* ob, Object$* obb, int32_t index, float value) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	$nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->putIntRelease(var$0, var$1, var$2, $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, value));
}

float VarHandleByteArrayAsFloats$ByteBufferHandle::getOpaque($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->getIntOpaque(var$0, var$1, address(bb, VarHandleByteArrayAsFloats$ByteBufferHandle::index(bb, index))));
}

void VarHandleByteArrayAsFloats$ByteBufferHandle::setOpaque($VarHandle* ob, Object$* obb, int32_t index, float value) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	$nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->putIntOpaque(var$0, var$1, var$2, $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsFloats$ByteBufferHandle::compareAndSet($VarHandle* ob, Object$* obb, int32_t index, float expected, float value) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->compareAndSetInt(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsFloats::convEndian(handle->be, value));
}

float VarHandleByteArrayAsFloats$ByteBufferHandle::compareAndExchange($VarHandle* ob, Object$* obb, int32_t index, float expected, float value) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, expected);
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->compareAndExchangeInt(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsFloats::convEndian(handle->be, value)));
}

float VarHandleByteArrayAsFloats$ByteBufferHandle::compareAndExchangeAcquire($VarHandle* ob, Object$* obb, int32_t index, float expected, float value) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, expected);
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->compareAndExchangeIntAcquire(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsFloats::convEndian(handle->be, value)));
}

float VarHandleByteArrayAsFloats$ByteBufferHandle::compareAndExchangeRelease($VarHandle* ob, Object$* obb, int32_t index, float expected, float value) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, expected);
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->compareAndExchangeIntRelease(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsFloats::convEndian(handle->be, value)));
}

bool VarHandleByteArrayAsFloats$ByteBufferHandle::weakCompareAndSetPlain($VarHandle* ob, Object$* obb, int32_t index, float expected, float value) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->weakCompareAndSetIntPlain(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsFloats::convEndian(handle->be, value));
}

bool VarHandleByteArrayAsFloats$ByteBufferHandle::weakCompareAndSet($VarHandle* ob, Object$* obb, int32_t index, float expected, float value) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->weakCompareAndSetInt(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsFloats::convEndian(handle->be, value));
}

bool VarHandleByteArrayAsFloats$ByteBufferHandle::weakCompareAndSetAcquire($VarHandle* ob, Object$* obb, int32_t index, float expected, float value) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->weakCompareAndSetIntAcquire(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsFloats::convEndian(handle->be, value));
}

bool VarHandleByteArrayAsFloats$ByteBufferHandle::weakCompareAndSetRelease($VarHandle* ob, Object$* obb, int32_t index, float expected, float value) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->weakCompareAndSetIntRelease(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsFloats::convEndian(handle->be, value));
}

float VarHandleByteArrayAsFloats$ByteBufferHandle::getAndSet($VarHandle* ob, Object$* obb, int32_t index, float value) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->getAndSetInt(var$0, var$1, var$2, $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, value)));
}

float VarHandleByteArrayAsFloats$ByteBufferHandle::getAndSetAcquire($VarHandle* ob, Object$* obb, int32_t index, float value) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->getAndSetIntAcquire(var$0, var$1, var$2, $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, value)));
}

float VarHandleByteArrayAsFloats$ByteBufferHandle::getAndSetRelease($VarHandle* ob, Object$* obb, int32_t index, float value) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->getAndSetIntRelease(var$0, var$1, var$2, $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, value)));
}

void VarHandleByteArrayAsFloats$ByteBufferHandle::clinit$($Class* clazz) {
	$load($ByteBuffer);
	$assignStatic(VarHandleByteArrayAsFloats$ByteBufferHandle::FORM, $new($VarForm, VarHandleByteArrayAsFloats$ByteBufferHandle::class$, $ByteBuffer::class$, $Float::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleByteArrayAsFloats$ByteBufferHandle::VarHandleByteArrayAsFloats$ByteBufferHandle() {
}

$Class* VarHandleByteArrayAsFloats$ByteBufferHandle::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsFloats$ByteBufferHandle, FORM)},
		{}
	};
	$CompoundAttribute addressmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndSetmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute indexmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute indexROmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute scopemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute setmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute setOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute setReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute setVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetPlainmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", nullptr, 0, $method(VarHandleByteArrayAsFloats$ByteBufferHandle, init$, void, bool)},
		{"<init>", "(ZZ)V", nullptr, $PRIVATE, $method(VarHandleByteArrayAsFloats$ByteBufferHandle, init$, void, bool, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleByteArrayAsFloats$ByteBufferHandle, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"address", "(Ljava/nio/ByteBuffer;I)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ByteBufferHandle, address, int64_t, $ByteBuffer*, int32_t), nullptr, nullptr, addressmethodAnnotations$$},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)F", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ByteBufferHandle, compareAndExchange, float, $VarHandle*, Object$*, int32_t, float, float), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)F", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ByteBufferHandle, compareAndExchangeAcquire, float, $VarHandle*, Object$*, int32_t, float, float), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)F", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ByteBufferHandle, compareAndExchangeRelease, float, $VarHandle*, Object$*, int32_t, float, float), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ByteBufferHandle, compareAndSet, bool, $VarHandle*, Object$*, int32_t, float, float), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)F", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ByteBufferHandle, get, float, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)F", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ByteBufferHandle, getAcquire, float, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)F", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ByteBufferHandle, getAndSet, float, $VarHandle*, Object$*, int32_t, float), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)F", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ByteBufferHandle, getAndSetAcquire, float, $VarHandle*, Object$*, int32_t, float), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)F", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ByteBufferHandle, getAndSetRelease, float, $VarHandle*, Object$*, int32_t, float), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)F", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ByteBufferHandle, getOpaque, float, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)F", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ByteBufferHandle, getVolatile, float, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"index", "(Ljava/nio/ByteBuffer;I)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ByteBufferHandle, index, int32_t, $ByteBuffer*, int32_t), nullptr, nullptr, indexmethodAnnotations$$},
		{"indexRO", "(Ljava/nio/ByteBuffer;I)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ByteBufferHandle, indexRO, int32_t, $ByteBuffer*, int32_t), nullptr, nullptr, indexROmethodAnnotations$$},
		{"scope", "(Ljava/nio/ByteBuffer;)Ljdk/internal/misc/ScopedMemoryAccess$Scope;", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ByteBufferHandle, scope, $ScopedMemoryAccess$Scope*, $ByteBuffer*), nullptr, nullptr, scopemethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ByteBufferHandle, set, void, $VarHandle*, Object$*, int32_t, float), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ByteBufferHandle, setOpaque, void, $VarHandle*, Object$*, int32_t, float), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ByteBufferHandle, setRelease, void, $VarHandle*, Object$*, int32_t, float), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ByteBufferHandle, setVolatile, void, $VarHandle*, Object$*, int32_t, float), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ByteBufferHandle, weakCompareAndSet, bool, $VarHandle*, Object$*, int32_t, float, float), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ByteBufferHandle, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, int32_t, float, float), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ByteBufferHandle, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, int32_t, float, float), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats$ByteBufferHandle, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, int32_t, float, float), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsFloats$ByteBufferHandle;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsFloats$ByteBufferHandle, withInvokeBehavior, VarHandleByteArrayAsFloats$ByteBufferHandle*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsFloats$ByteBufferHandle;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsFloats$ByteBufferHandle, withInvokeExactBehavior, VarHandleByteArrayAsFloats$ByteBufferHandle*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleByteArrayAsFloats$ByteBufferHandle", "java.lang.invoke.VarHandleByteArrayAsFloats", "ByteBufferHandle", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleByteArrayAsFloats$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsFloats", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleByteArrayAsFloats$ByteBufferHandle",
		"java.lang.invoke.VarHandleByteArrayAsFloats$ByteArrayViewVarHandle",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandleByteArrayAsFloats"
	};
	$loadClass(VarHandleByteArrayAsFloats$ByteBufferHandle, name, initialize, &classInfo$$, VarHandleByteArrayAsFloats$ByteBufferHandle::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleByteArrayAsFloats$ByteBufferHandle);
	});
	return class$;
}

$Class* VarHandleByteArrayAsFloats$ByteBufferHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java