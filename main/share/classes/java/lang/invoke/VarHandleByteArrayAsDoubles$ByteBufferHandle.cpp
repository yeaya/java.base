#include <java/lang/invoke/VarHandleByteArrayAsDoubles$ByteBufferHandle.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsDoubles.h>
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
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;
using $VarHandleByteArrayAsDoubles = ::java::lang::invoke::VarHandleByteArrayAsDoubles;
using $VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle = ::java::lang::invoke::VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle;
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

$VarForm* VarHandleByteArrayAsDoubles$ByteBufferHandle::FORM = nullptr;

void VarHandleByteArrayAsDoubles$ByteBufferHandle::init$(bool be) {
	VarHandleByteArrayAsDoubles$ByteBufferHandle::init$(be, false);
}

void VarHandleByteArrayAsDoubles$ByteBufferHandle::init$(bool be, bool exact) {
	$VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::init$(VarHandleByteArrayAsDoubles$ByteBufferHandle::FORM, be, exact);
}

VarHandleByteArrayAsDoubles$ByteBufferHandle* VarHandleByteArrayAsDoubles$ByteBufferHandle::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsDoubles$ByteBufferHandle, this->be, true);
}

VarHandleByteArrayAsDoubles$ByteBufferHandle* VarHandleByteArrayAsDoubles$ByteBufferHandle::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsDoubles$ByteBufferHandle, this->be, false);
}

$MethodType* VarHandleByteArrayAsDoubles$ByteBufferHandle::accessModeTypeUncached($VarHandle$AccessType* at) {
	$load($ByteBuffer);
	return $nc(at)->accessModeType($ByteBuffer::class$, $Double::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

int32_t VarHandleByteArrayAsDoubles$ByteBufferHandle::index($ByteBuffer* bb, int32_t index) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$init($VarHandleByteArrayAsDoubles);
	$var($MemorySegmentProxy, segmentProxy, $nc($VarHandleByteArrayAsDoubles::NIO_ACCESS)->bufferSegment(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	return $Preconditions::checkIndex(index, $nc($MethodHandleStatics::UNSAFE)->getInt(bb, $VarHandleByteArrayBase::BUFFER_LIMIT) - 7, nullptr);
}

$ScopedMemoryAccess$Scope* VarHandleByteArrayAsDoubles$ByteBufferHandle::scope($ByteBuffer* bb) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$init($VarHandleByteArrayAsDoubles);
	$var($MemorySegmentProxy, segmentProxy, $nc($VarHandleByteArrayAsDoubles::NIO_ACCESS)->bufferSegment(bb));
	return segmentProxy != nullptr ? segmentProxy->scope() : ($ScopedMemoryAccess$Scope*)nullptr;
}

int32_t VarHandleByteArrayAsDoubles$ByteBufferHandle::indexRO($ByteBuffer* bb, int32_t index) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	if ($nc($MethodHandleStatics::UNSAFE)->getBoolean(bb, $VarHandleByteArrayBase::BYTE_BUFFER_IS_READ_ONLY)) {
		$throwNew($ReadOnlyBufferException);
	}
	return VarHandleByteArrayAsDoubles$ByteBufferHandle::index(bb, index);
}

int64_t VarHandleByteArrayAsDoubles$ByteBufferHandle::address($ByteBuffer* bb, int32_t index) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	int64_t address = ((int64_t)index) + $nc($MethodHandleStatics::UNSAFE)->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS);
	if ((address & 7) != 0) {
		$throw($($VarHandleByteArrayBase::newIllegalStateExceptionForMisalignedAccess(index)));
	}
	return address;
}

double VarHandleByteArrayAsDoubles$ByteBufferHandle::get($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = (int64_t)VarHandleByteArrayAsDoubles$ByteBufferHandle::index(bb, index);
	int64_t rawValue = $nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->getLongUnaligned(var$0, var$1, var$2 + $MethodHandleStatics::UNSAFE->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS), $nc(handle)->be);
	return $Double::longBitsToDouble(rawValue);
}

void VarHandleByteArrayAsDoubles$ByteBufferHandle::set($VarHandle* ob, Object$* obb, int32_t index, double value) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$3 = (int64_t)indexRO(bb, index);
	int64_t var$2 = var$3 + $MethodHandleStatics::UNSAFE->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS);
	$nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->putLongUnaligned(var$0, var$1, var$2, $Double::doubleToRawLongBits(value), $nc(handle)->be);
}

double VarHandleByteArrayAsDoubles$ByteBufferHandle::getVolatile($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->getLongVolatile(var$0, var$1, address(bb, VarHandleByteArrayAsDoubles$ByteBufferHandle::index(bb, index))));
}

void VarHandleByteArrayAsDoubles$ByteBufferHandle::setVolatile($VarHandle* ob, Object$* obb, int32_t index, double value) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	$nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->putLongVolatile(var$0, var$1, var$2, $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, value));
}

double VarHandleByteArrayAsDoubles$ByteBufferHandle::getAcquire($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->getLongAcquire(var$0, var$1, address(bb, VarHandleByteArrayAsDoubles$ByteBufferHandle::index(bb, index))));
}

void VarHandleByteArrayAsDoubles$ByteBufferHandle::setRelease($VarHandle* ob, Object$* obb, int32_t index, double value) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	$nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->putLongRelease(var$0, var$1, var$2, $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, value));
}

double VarHandleByteArrayAsDoubles$ByteBufferHandle::getOpaque($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->getLongOpaque(var$0, var$1, address(bb, VarHandleByteArrayAsDoubles$ByteBufferHandle::index(bb, index))));
}

void VarHandleByteArrayAsDoubles$ByteBufferHandle::setOpaque($VarHandle* ob, Object$* obb, int32_t index, double value) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	$nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->putLongOpaque(var$0, var$1, var$2, $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsDoubles$ByteBufferHandle::compareAndSet($VarHandle* ob, Object$* obb, int32_t index, double expected, double value) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->compareAndSetLong(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsDoubles::convEndian(handle->be, value));
}

double VarHandleByteArrayAsDoubles$ByteBufferHandle::compareAndExchange($VarHandle* ob, Object$* obb, int32_t index, double expected, double value) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, expected);
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->compareAndExchangeLong(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsDoubles::convEndian(handle->be, value)));
}

double VarHandleByteArrayAsDoubles$ByteBufferHandle::compareAndExchangeAcquire($VarHandle* ob, Object$* obb, int32_t index, double expected, double value) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, expected);
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->compareAndExchangeLongAcquire(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsDoubles::convEndian(handle->be, value)));
}

double VarHandleByteArrayAsDoubles$ByteBufferHandle::compareAndExchangeRelease($VarHandle* ob, Object$* obb, int32_t index, double expected, double value) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, expected);
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->compareAndExchangeLongRelease(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsDoubles::convEndian(handle->be, value)));
}

bool VarHandleByteArrayAsDoubles$ByteBufferHandle::weakCompareAndSetPlain($VarHandle* ob, Object$* obb, int32_t index, double expected, double value) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLongPlain(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsDoubles::convEndian(handle->be, value));
}

bool VarHandleByteArrayAsDoubles$ByteBufferHandle::weakCompareAndSet($VarHandle* ob, Object$* obb, int32_t index, double expected, double value) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLong(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsDoubles::convEndian(handle->be, value));
}

bool VarHandleByteArrayAsDoubles$ByteBufferHandle::weakCompareAndSetAcquire($VarHandle* ob, Object$* obb, int32_t index, double expected, double value) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLongAcquire(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsDoubles::convEndian(handle->be, value));
}

bool VarHandleByteArrayAsDoubles$ByteBufferHandle::weakCompareAndSetRelease($VarHandle* ob, Object$* obb, int32_t index, double expected, double value) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLongRelease(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsDoubles::convEndian(handle->be, value));
}

double VarHandleByteArrayAsDoubles$ByteBufferHandle::getAndSet($VarHandle* ob, Object$* obb, int32_t index, double value) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->getAndSetLong(var$0, var$1, var$2, $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, value)));
}

double VarHandleByteArrayAsDoubles$ByteBufferHandle::getAndSetAcquire($VarHandle* ob, Object$* obb, int32_t index, double value) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->getAndSetLongAcquire(var$0, var$1, var$2, $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, value)));
}

double VarHandleByteArrayAsDoubles$ByteBufferHandle::getAndSetRelease($VarHandle* ob, Object$* obb, int32_t index, double value) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->getAndSetLongRelease(var$0, var$1, var$2, $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, value)));
}

void VarHandleByteArrayAsDoubles$ByteBufferHandle::clinit$($Class* clazz) {
	$load($ByteBuffer);
	$assignStatic(VarHandleByteArrayAsDoubles$ByteBufferHandle::FORM, $new($VarForm, VarHandleByteArrayAsDoubles$ByteBufferHandle::class$, $ByteBuffer::class$, $Double::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleByteArrayAsDoubles$ByteBufferHandle::VarHandleByteArrayAsDoubles$ByteBufferHandle() {
}

$Class* VarHandleByteArrayAsDoubles$ByteBufferHandle::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsDoubles$ByteBufferHandle, FORM)},
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
		{"<init>", "(Z)V", nullptr, 0, $method(VarHandleByteArrayAsDoubles$ByteBufferHandle, init$, void, bool)},
		{"<init>", "(ZZ)V", nullptr, $PRIVATE, $method(VarHandleByteArrayAsDoubles$ByteBufferHandle, init$, void, bool, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleByteArrayAsDoubles$ByteBufferHandle, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"address", "(Ljava/nio/ByteBuffer;I)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ByteBufferHandle, address, int64_t, $ByteBuffer*, int32_t), nullptr, nullptr, addressmethodAnnotations$$},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)D", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ByteBufferHandle, compareAndExchange, double, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)D", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ByteBufferHandle, compareAndExchangeAcquire, double, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)D", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ByteBufferHandle, compareAndExchangeRelease, double, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ByteBufferHandle, compareAndSet, bool, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)D", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ByteBufferHandle, get, double, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)D", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ByteBufferHandle, getAcquire, double, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)D", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ByteBufferHandle, getAndSet, double, $VarHandle*, Object$*, int32_t, double), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)D", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ByteBufferHandle, getAndSetAcquire, double, $VarHandle*, Object$*, int32_t, double), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)D", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ByteBufferHandle, getAndSetRelease, double, $VarHandle*, Object$*, int32_t, double), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)D", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ByteBufferHandle, getOpaque, double, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)D", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ByteBufferHandle, getVolatile, double, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"index", "(Ljava/nio/ByteBuffer;I)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ByteBufferHandle, index, int32_t, $ByteBuffer*, int32_t), nullptr, nullptr, indexmethodAnnotations$$},
		{"indexRO", "(Ljava/nio/ByteBuffer;I)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ByteBufferHandle, indexRO, int32_t, $ByteBuffer*, int32_t), nullptr, nullptr, indexROmethodAnnotations$$},
		{"scope", "(Ljava/nio/ByteBuffer;)Ljdk/internal/misc/ScopedMemoryAccess$Scope;", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ByteBufferHandle, scope, $ScopedMemoryAccess$Scope*, $ByteBuffer*), nullptr, nullptr, scopemethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ByteBufferHandle, set, void, $VarHandle*, Object$*, int32_t, double), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ByteBufferHandle, setOpaque, void, $VarHandle*, Object$*, int32_t, double), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ByteBufferHandle, setRelease, void, $VarHandle*, Object$*, int32_t, double), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ByteBufferHandle, setVolatile, void, $VarHandle*, Object$*, int32_t, double), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ByteBufferHandle, weakCompareAndSet, bool, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ByteBufferHandle, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ByteBufferHandle, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsDoubles$ByteBufferHandle, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsDoubles$ByteBufferHandle;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsDoubles$ByteBufferHandle, withInvokeBehavior, VarHandleByteArrayAsDoubles$ByteBufferHandle*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsDoubles$ByteBufferHandle;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsDoubles$ByteBufferHandle, withInvokeExactBehavior, VarHandleByteArrayAsDoubles$ByteBufferHandle*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleByteArrayAsDoubles$ByteBufferHandle", "java.lang.invoke.VarHandleByteArrayAsDoubles", "ByteBufferHandle", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsDoubles", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleByteArrayAsDoubles$ByteBufferHandle",
		"java.lang.invoke.VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandleByteArrayAsDoubles"
	};
	$loadClass(VarHandleByteArrayAsDoubles$ByteBufferHandle, name, initialize, &classInfo$$, VarHandleByteArrayAsDoubles$ByteBufferHandle::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	});
	return class$;
}

$Class* VarHandleByteArrayAsDoubles$ByteBufferHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java