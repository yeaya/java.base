#include <java/lang/invoke/VarHandleByteArrayAsLongs$ByteBufferHandle.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsLongs$ByteArrayViewVarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsLongs.h>
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

#undef BE
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
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;
using $VarHandleByteArrayAsLongs = ::java::lang::invoke::VarHandleByteArrayAsLongs;
using $VarHandleByteArrayAsLongs$ByteArrayViewVarHandle = ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle;
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

$VarForm* VarHandleByteArrayAsLongs$ByteBufferHandle::FORM = nullptr;

void VarHandleByteArrayAsLongs$ByteBufferHandle::init$(bool be) {
	VarHandleByteArrayAsLongs$ByteBufferHandle::init$(be, false);
}

void VarHandleByteArrayAsLongs$ByteBufferHandle::init$(bool be, bool exact) {
	$VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::init$(VarHandleByteArrayAsLongs$ByteBufferHandle::FORM, be, exact);
}

VarHandleByteArrayAsLongs$ByteBufferHandle* VarHandleByteArrayAsLongs$ByteBufferHandle::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsLongs$ByteBufferHandle, this->be, true);
}

VarHandleByteArrayAsLongs$ByteBufferHandle* VarHandleByteArrayAsLongs$ByteBufferHandle::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsLongs$ByteBufferHandle, this->be, false);
}

$MethodType* VarHandleByteArrayAsLongs$ByteBufferHandle::accessModeTypeUncached($VarHandle$AccessType* at) {
	$load($ByteBuffer);
	return $nc(at)->accessModeType($ByteBuffer::class$, $Long::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

int32_t VarHandleByteArrayAsLongs$ByteBufferHandle::index($ByteBuffer* bb, int32_t index) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$init($VarHandleByteArrayAsLongs);
	$var($MemorySegmentProxy, segmentProxy, $nc($VarHandleByteArrayAsLongs::NIO_ACCESS)->bufferSegment(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	return $Preconditions::checkIndex(index, $nc($MethodHandleStatics::UNSAFE)->getInt(bb, $VarHandleByteArrayBase::BUFFER_LIMIT) - 7, nullptr);
}

$ScopedMemoryAccess$Scope* VarHandleByteArrayAsLongs$ByteBufferHandle::scope($ByteBuffer* bb) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$init($VarHandleByteArrayAsLongs);
	$var($MemorySegmentProxy, segmentProxy, $nc($VarHandleByteArrayAsLongs::NIO_ACCESS)->bufferSegment(bb));
	return segmentProxy != nullptr ? segmentProxy->scope() : ($ScopedMemoryAccess$Scope*)nullptr;
}

int32_t VarHandleByteArrayAsLongs$ByteBufferHandle::indexRO($ByteBuffer* bb, int32_t index) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	if ($nc($MethodHandleStatics::UNSAFE)->getBoolean(bb, $VarHandleByteArrayBase::BYTE_BUFFER_IS_READ_ONLY)) {
		$throwNew($ReadOnlyBufferException);
	}
	return VarHandleByteArrayAsLongs$ByteBufferHandle::index(bb, index);
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::address($ByteBuffer* bb, int32_t index) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	int64_t address = ((int64_t)index) + $nc($MethodHandleStatics::UNSAFE)->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS);
	if ((address & 7) != 0) {
		$throw($($VarHandleByteArrayBase::newIllegalStateExceptionForMisalignedAccess(index)));
	}
	return address;
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::get($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = (int64_t)VarHandleByteArrayAsLongs$ByteBufferHandle::index(bb, index);
	return $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->getLongUnaligned(var$0, var$1, var$2 + $MethodHandleStatics::UNSAFE->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS), $nc(handle)->be);
}

void VarHandleByteArrayAsLongs$ByteBufferHandle::set($VarHandle* ob, Object$* obb, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = (int64_t)indexRO(bb, index);
	$nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->putLongUnaligned(var$0, var$1, var$2 + $MethodHandleStatics::UNSAFE->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS), value, $nc(handle)->be);
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::getVolatile($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->getLongVolatile(var$0, var$1, address(bb, VarHandleByteArrayAsLongs$ByteBufferHandle::index(bb, index))));
}

void VarHandleByteArrayAsLongs$ByteBufferHandle::setVolatile($VarHandle* ob, Object$* obb, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	$nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->putLongVolatile(var$0, var$1, var$2, $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, value));
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::getAcquire($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->getLongAcquire(var$0, var$1, address(bb, VarHandleByteArrayAsLongs$ByteBufferHandle::index(bb, index))));
}

void VarHandleByteArrayAsLongs$ByteBufferHandle::setRelease($VarHandle* ob, Object$* obb, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	$nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->putLongRelease(var$0, var$1, var$2, $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, value));
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::getOpaque($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->getLongOpaque(var$0, var$1, address(bb, VarHandleByteArrayAsLongs$ByteBufferHandle::index(bb, index))));
}

void VarHandleByteArrayAsLongs$ByteBufferHandle::setOpaque($VarHandle* ob, Object$* obb, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	$nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->putLongOpaque(var$0, var$1, var$2, $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsLongs$ByteBufferHandle::compareAndSet($VarHandle* ob, Object$* obb, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->compareAndSetLong(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsLongs::convEndian(handle->be, value));
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::compareAndExchange($VarHandle* ob, Object$* obb, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, expected);
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->compareAndExchangeLong(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsLongs::convEndian(handle->be, value)));
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::compareAndExchangeAcquire($VarHandle* ob, Object$* obb, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, expected);
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->compareAndExchangeLongAcquire(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsLongs::convEndian(handle->be, value)));
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::compareAndExchangeRelease($VarHandle* ob, Object$* obb, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, expected);
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->compareAndExchangeLongRelease(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsLongs::convEndian(handle->be, value)));
}

bool VarHandleByteArrayAsLongs$ByteBufferHandle::weakCompareAndSetPlain($VarHandle* ob, Object$* obb, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLongPlain(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsLongs::convEndian(handle->be, value));
}

bool VarHandleByteArrayAsLongs$ByteBufferHandle::weakCompareAndSet($VarHandle* ob, Object$* obb, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLong(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsLongs::convEndian(handle->be, value));
}

bool VarHandleByteArrayAsLongs$ByteBufferHandle::weakCompareAndSetAcquire($VarHandle* ob, Object$* obb, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLongAcquire(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsLongs::convEndian(handle->be, value));
}

bool VarHandleByteArrayAsLongs$ByteBufferHandle::weakCompareAndSetRelease($VarHandle* ob, Object$* obb, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLongRelease(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsLongs::convEndian(handle->be, value));
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::getAndSet($VarHandle* ob, Object$* obb, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->getAndSetLong(var$0, var$1, var$2, $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, value)));
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::getAndSetAcquire($VarHandle* ob, Object$* obb, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->getAndSetLongAcquire(var$0, var$1, var$2, $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, value)));
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::getAndSetRelease($VarHandle* ob, Object$* obb, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->getAndSetLongRelease(var$0, var$1, var$2, $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, value)));
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::getAndAdd($VarHandle* ob, Object$* obb, int32_t index, int64_t delta) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($VarHandleByteArrayAsLongs);
		$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
		$init($MethodHandleStatics);
		$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
		return $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->getAndAddLong(var$0, var$1, address(bb, indexRO(bb, index)), delta);
	} else {
		return getAndAddConvEndianWithCAS(bb, index, delta);
	}
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::getAndAddAcquire($VarHandle* ob, Object$* obb, int32_t index, int64_t delta) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($VarHandleByteArrayAsLongs);
		$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
		$init($MethodHandleStatics);
		$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
		return $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->getAndAddLongAcquire(var$0, var$1, address(bb, indexRO(bb, index)), delta);
	} else {
		return getAndAddConvEndianWithCAS(bb, index, delta);
	}
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::getAndAddRelease($VarHandle* ob, Object$* obb, int32_t index, int64_t delta) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($VarHandleByteArrayAsLongs);
		$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
		$init($MethodHandleStatics);
		$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
		return $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->getAndAddLongRelease(var$0, var$1, address(bb, indexRO(bb, index)), delta);
	} else {
		return getAndAddConvEndianWithCAS(bb, index, delta);
	}
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::getAndAddConvEndianWithCAS($ByteBuffer* bb, int32_t index, int64_t delta) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	int64_t nativeExpectedValue = 0;
	int64_t expectedValue = 0;
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, base, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t offset = address(bb, indexRO(bb, index));
	do {
		$init($VarHandleByteArrayAsLongs);
		nativeExpectedValue = $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->getLongVolatile($(scope(bb)), base, offset);
		expectedValue = $Long::reverseBytes(nativeExpectedValue);
	} while (!$MethodHandleStatics::UNSAFE->weakCompareAndSetLong(base, offset, nativeExpectedValue, $Long::reverseBytes(expectedValue + delta)));
	return expectedValue;
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::getAndBitwiseOr($VarHandle* ob, Object$* obb, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($VarHandleByteArrayAsLongs);
		$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
		$init($MethodHandleStatics);
		$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
		return $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->getAndBitwiseOrLong(var$0, var$1, address(bb, indexRO(bb, index)), value);
	} else {
		return getAndBitwiseOrConvEndianWithCAS(bb, index, value);
	}
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::getAndBitwiseOrRelease($VarHandle* ob, Object$* obb, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($VarHandleByteArrayAsLongs);
		$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
		$init($MethodHandleStatics);
		$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
		return $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->getAndBitwiseOrLongRelease(var$0, var$1, address(bb, indexRO(bb, index)), value);
	} else {
		return getAndBitwiseOrConvEndianWithCAS(bb, index, value);
	}
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::getAndBitwiseOrAcquire($VarHandle* ob, Object$* obb, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($VarHandleByteArrayAsLongs);
		$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
		$init($MethodHandleStatics);
		$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
		return $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->getAndBitwiseOrLongAcquire(var$0, var$1, address(bb, indexRO(bb, index)), value);
	} else {
		return getAndBitwiseOrConvEndianWithCAS(bb, index, value);
	}
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::getAndBitwiseOrConvEndianWithCAS($ByteBuffer* bb, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	int64_t nativeExpectedValue = 0;
	int64_t expectedValue = 0;
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, base, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t offset = address(bb, indexRO(bb, index));
	do {
		$init($VarHandleByteArrayAsLongs);
		nativeExpectedValue = $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->getLongVolatile($(scope(bb)), base, offset);
		expectedValue = $Long::reverseBytes(nativeExpectedValue);
	} while (!$MethodHandleStatics::UNSAFE->weakCompareAndSetLong(base, offset, nativeExpectedValue, $Long::reverseBytes(expectedValue | value)));
	return expectedValue;
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::getAndBitwiseAnd($VarHandle* ob, Object$* obb, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($VarHandleByteArrayAsLongs);
		$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
		$init($MethodHandleStatics);
		$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
		return $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->getAndBitwiseAndLong(var$0, var$1, address(bb, indexRO(bb, index)), value);
	} else {
		return getAndBitwiseAndConvEndianWithCAS(bb, index, value);
	}
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::getAndBitwiseAndRelease($VarHandle* ob, Object$* obb, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($VarHandleByteArrayAsLongs);
		$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
		$init($MethodHandleStatics);
		$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
		return $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->getAndBitwiseAndLongRelease(var$0, var$1, address(bb, indexRO(bb, index)), value);
	} else {
		return getAndBitwiseAndConvEndianWithCAS(bb, index, value);
	}
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::getAndBitwiseAndAcquire($VarHandle* ob, Object$* obb, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($VarHandleByteArrayAsLongs);
		$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
		$init($MethodHandleStatics);
		$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
		return $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->getAndBitwiseAndLongAcquire(var$0, var$1, address(bb, indexRO(bb, index)), value);
	} else {
		return getAndBitwiseAndConvEndianWithCAS(bb, index, value);
	}
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::getAndBitwiseAndConvEndianWithCAS($ByteBuffer* bb, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	int64_t nativeExpectedValue = 0;
	int64_t expectedValue = 0;
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, base, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t offset = address(bb, indexRO(bb, index));
	do {
		$init($VarHandleByteArrayAsLongs);
		nativeExpectedValue = $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->getLongVolatile($(scope(bb)), base, offset);
		expectedValue = $Long::reverseBytes(nativeExpectedValue);
	} while (!$MethodHandleStatics::UNSAFE->weakCompareAndSetLong(base, offset, nativeExpectedValue, $Long::reverseBytes(expectedValue & value)));
	return expectedValue;
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::getAndBitwiseXor($VarHandle* ob, Object$* obb, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($VarHandleByteArrayAsLongs);
		$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
		$init($MethodHandleStatics);
		$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
		return $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->getAndBitwiseXorLong(var$0, var$1, address(bb, indexRO(bb, index)), value);
	} else {
		return getAndBitwiseXorConvEndianWithCAS(bb, index, value);
	}
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::getAndBitwiseXorRelease($VarHandle* ob, Object$* obb, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($VarHandleByteArrayAsLongs);
		$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
		$init($MethodHandleStatics);
		$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
		return $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->getAndBitwiseXorLongRelease(var$0, var$1, address(bb, indexRO(bb, index)), value);
	} else {
		return getAndBitwiseXorConvEndianWithCAS(bb, index, value);
	}
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::getAndBitwiseXorAcquire($VarHandle* ob, Object$* obb, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($VarHandleByteArrayAsLongs);
		$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
		$init($MethodHandleStatics);
		$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
		return $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->getAndBitwiseXorLongAcquire(var$0, var$1, address(bb, indexRO(bb, index)), value);
	} else {
		return getAndBitwiseXorConvEndianWithCAS(bb, index, value);
	}
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::getAndBitwiseXorConvEndianWithCAS($ByteBuffer* bb, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$useLocalObjectStack();
	int64_t nativeExpectedValue = 0;
	int64_t expectedValue = 0;
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, base, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t offset = address(bb, indexRO(bb, index));
	do {
		$init($VarHandleByteArrayAsLongs);
		nativeExpectedValue = $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->getLongVolatile($(scope(bb)), base, offset);
		expectedValue = $Long::reverseBytes(nativeExpectedValue);
	} while (!$MethodHandleStatics::UNSAFE->weakCompareAndSetLong(base, offset, nativeExpectedValue, $Long::reverseBytes(expectedValue ^ value)));
	return expectedValue;
}

void VarHandleByteArrayAsLongs$ByteBufferHandle::clinit$($Class* clazz) {
	$load($ByteBuffer);
	$assignStatic(VarHandleByteArrayAsLongs$ByteBufferHandle::FORM, $new($VarForm, VarHandleByteArrayAsLongs$ByteBufferHandle::class$, $ByteBuffer::class$, $Long::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleByteArrayAsLongs$ByteBufferHandle::VarHandleByteArrayAsLongs$ByteBufferHandle() {
}

$Class* VarHandleByteArrayAsLongs$ByteBufferHandle::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsLongs$ByteBufferHandle, FORM)},
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
	$CompoundAttribute getAndAddmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddConvEndianWithCASmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndConvEndianWithCASmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrConvEndianWithCASmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXormethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorConvEndianWithCASmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorReleasemethodAnnotations$$[] = {
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
		{"<init>", "(Z)V", nullptr, 0, $method(VarHandleByteArrayAsLongs$ByteBufferHandle, init$, void, bool)},
		{"<init>", "(ZZ)V", nullptr, $PRIVATE, $method(VarHandleByteArrayAsLongs$ByteBufferHandle, init$, void, bool, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"address", "(Ljava/nio/ByteBuffer;I)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, address, int64_t, $ByteBuffer*, int32_t), nullptr, nullptr, addressmethodAnnotations$$},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, compareAndExchange, int64_t, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, compareAndExchangeAcquire, int64_t, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, compareAndExchangeRelease, int64_t, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, compareAndSet, bool, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, get, int64_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, getAcquire, int64_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, getAndAdd, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndAddmethodAnnotations$$},
		{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, getAndAddAcquire, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndAddAcquiremethodAnnotations$$},
		{"getAndAddConvEndianWithCAS", "(Ljava/nio/ByteBuffer;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, getAndAddConvEndianWithCAS, int64_t, $ByteBuffer*, int32_t, int64_t), nullptr, nullptr, getAndAddConvEndianWithCASmethodAnnotations$$},
		{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, getAndAddRelease, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndAddReleasemethodAnnotations$$},
		{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, getAndBitwiseAnd, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseAndmethodAnnotations$$},
		{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, getAndBitwiseAndAcquire, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseAndAcquiremethodAnnotations$$},
		{"getAndBitwiseAndConvEndianWithCAS", "(Ljava/nio/ByteBuffer;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, getAndBitwiseAndConvEndianWithCAS, int64_t, $ByteBuffer*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseAndConvEndianWithCASmethodAnnotations$$},
		{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, getAndBitwiseAndRelease, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseAndReleasemethodAnnotations$$},
		{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, getAndBitwiseOr, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseOrmethodAnnotations$$},
		{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, getAndBitwiseOrAcquire, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseOrAcquiremethodAnnotations$$},
		{"getAndBitwiseOrConvEndianWithCAS", "(Ljava/nio/ByteBuffer;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, getAndBitwiseOrConvEndianWithCAS, int64_t, $ByteBuffer*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseOrConvEndianWithCASmethodAnnotations$$},
		{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, getAndBitwiseOrRelease, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseOrReleasemethodAnnotations$$},
		{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, getAndBitwiseXor, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseXormethodAnnotations$$},
		{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, getAndBitwiseXorAcquire, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseXorAcquiremethodAnnotations$$},
		{"getAndBitwiseXorConvEndianWithCAS", "(Ljava/nio/ByteBuffer;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, getAndBitwiseXorConvEndianWithCAS, int64_t, $ByteBuffer*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseXorConvEndianWithCASmethodAnnotations$$},
		{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, getAndBitwiseXorRelease, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseXorReleasemethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, getAndSet, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, getAndSetAcquire, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, getAndSetRelease, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, getOpaque, int64_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, getVolatile, int64_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"index", "(Ljava/nio/ByteBuffer;I)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, index, int32_t, $ByteBuffer*, int32_t), nullptr, nullptr, indexmethodAnnotations$$},
		{"indexRO", "(Ljava/nio/ByteBuffer;I)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, indexRO, int32_t, $ByteBuffer*, int32_t), nullptr, nullptr, indexROmethodAnnotations$$},
		{"scope", "(Ljava/nio/ByteBuffer;)Ljdk/internal/misc/ScopedMemoryAccess$Scope;", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, scope, $ScopedMemoryAccess$Scope*, $ByteBuffer*), nullptr, nullptr, scopemethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, set, void, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, setOpaque, void, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, setRelease, void, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, setVolatile, void, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, weakCompareAndSet, bool, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsLongs$ByteBufferHandle;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, withInvokeBehavior, VarHandleByteArrayAsLongs$ByteBufferHandle*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsLongs$ByteBufferHandle;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsLongs$ByteBufferHandle, withInvokeExactBehavior, VarHandleByteArrayAsLongs$ByteBufferHandle*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleByteArrayAsLongs$ByteBufferHandle", "java.lang.invoke.VarHandleByteArrayAsLongs", "ByteBufferHandle", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleByteArrayAsLongs$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsLongs", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleByteArrayAsLongs$ByteBufferHandle",
		"java.lang.invoke.VarHandleByteArrayAsLongs$ByteArrayViewVarHandle",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandleByteArrayAsLongs"
	};
	$loadClass(VarHandleByteArrayAsLongs$ByteBufferHandle, name, initialize, &classInfo$$, VarHandleByteArrayAsLongs$ByteBufferHandle::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleByteArrayAsLongs$ByteBufferHandle);
	});
	return class$;
}

$Class* VarHandleByteArrayAsLongs$ByteBufferHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java