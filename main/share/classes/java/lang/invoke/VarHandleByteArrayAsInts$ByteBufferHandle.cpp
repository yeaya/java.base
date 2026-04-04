#include <java/lang/invoke/VarHandleByteArrayAsInts$ByteBufferHandle.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsInts$ByteArrayViewVarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsInts.h>
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
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;
using $VarHandleByteArrayAsInts = ::java::lang::invoke::VarHandleByteArrayAsInts;
using $VarHandleByteArrayAsInts$ByteArrayViewVarHandle = ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle;
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

$VarForm* VarHandleByteArrayAsInts$ByteBufferHandle::FORM = nullptr;

void VarHandleByteArrayAsInts$ByteBufferHandle::init$(bool be) {
	VarHandleByteArrayAsInts$ByteBufferHandle::init$(be, false);
}

void VarHandleByteArrayAsInts$ByteBufferHandle::init$(bool be, bool exact) {
	$VarHandleByteArrayAsInts$ByteArrayViewVarHandle::init$(VarHandleByteArrayAsInts$ByteBufferHandle::FORM, be, exact);
}

VarHandleByteArrayAsInts$ByteBufferHandle* VarHandleByteArrayAsInts$ByteBufferHandle::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsInts$ByteBufferHandle, this->be, true);
}

VarHandleByteArrayAsInts$ByteBufferHandle* VarHandleByteArrayAsInts$ByteBufferHandle::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsInts$ByteBufferHandle, this->be, false);
}

$MethodType* VarHandleByteArrayAsInts$ByteBufferHandle::accessModeTypeUncached($VarHandle$AccessType* at) {
	$load($ByteBuffer);
	return $nc(at)->accessModeType($ByteBuffer::class$, $Integer::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::index($ByteBuffer* bb, int32_t index) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$init($VarHandleByteArrayAsInts);
	$var($MemorySegmentProxy, segmentProxy, $nc($VarHandleByteArrayAsInts::NIO_ACCESS)->bufferSegment(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	return $Preconditions::checkIndex(index, $nc($MethodHandleStatics::UNSAFE)->getInt(bb, $VarHandleByteArrayBase::BUFFER_LIMIT) - 3, nullptr);
}

$ScopedMemoryAccess$Scope* VarHandleByteArrayAsInts$ByteBufferHandle::scope($ByteBuffer* bb) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$init($VarHandleByteArrayAsInts);
	$var($MemorySegmentProxy, segmentProxy, $nc($VarHandleByteArrayAsInts::NIO_ACCESS)->bufferSegment(bb));
	return segmentProxy != nullptr ? segmentProxy->scope() : ($ScopedMemoryAccess$Scope*)nullptr;
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::indexRO($ByteBuffer* bb, int32_t index) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	if ($nc($MethodHandleStatics::UNSAFE)->getBoolean(bb, $VarHandleByteArrayBase::BYTE_BUFFER_IS_READ_ONLY)) {
		$throwNew($ReadOnlyBufferException);
	}
	return VarHandleByteArrayAsInts$ByteBufferHandle::index(bb, index);
}

int64_t VarHandleByteArrayAsInts$ByteBufferHandle::address($ByteBuffer* bb, int32_t index) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	int64_t address = ((int64_t)index) + $nc($MethodHandleStatics::UNSAFE)->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS);
	if ((address & 3) != 0) {
		$throw($($VarHandleByteArrayBase::newIllegalStateExceptionForMisalignedAccess(index)));
	}
	return address;
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::get($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = (int64_t)VarHandleByteArrayAsInts$ByteBufferHandle::index(bb, index);
	return $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->getIntUnaligned(var$0, var$1, var$2 + $MethodHandleStatics::UNSAFE->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS), $nc(handle)->be);
}

void VarHandleByteArrayAsInts$ByteBufferHandle::set($VarHandle* ob, Object$* obb, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = (int64_t)indexRO(bb, index);
	$nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->putIntUnaligned(var$0, var$1, var$2 + $MethodHandleStatics::UNSAFE->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS), value, $nc(handle)->be);
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::getVolatile($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->getIntVolatile(var$0, var$1, address(bb, VarHandleByteArrayAsInts$ByteBufferHandle::index(bb, index))));
}

void VarHandleByteArrayAsInts$ByteBufferHandle::setVolatile($VarHandle* ob, Object$* obb, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	$nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->putIntVolatile(var$0, var$1, var$2, $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, value));
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::getAcquire($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->getIntAcquire(var$0, var$1, address(bb, VarHandleByteArrayAsInts$ByteBufferHandle::index(bb, index))));
}

void VarHandleByteArrayAsInts$ByteBufferHandle::setRelease($VarHandle* ob, Object$* obb, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	$nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->putIntRelease(var$0, var$1, var$2, $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, value));
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::getOpaque($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->getIntOpaque(var$0, var$1, address(bb, VarHandleByteArrayAsInts$ByteBufferHandle::index(bb, index))));
}

void VarHandleByteArrayAsInts$ByteBufferHandle::setOpaque($VarHandle* ob, Object$* obb, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	$nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->putIntOpaque(var$0, var$1, var$2, $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsInts$ByteBufferHandle::compareAndSet($VarHandle* ob, Object$* obb, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->compareAndSetInt(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsInts::convEndian(handle->be, value));
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::compareAndExchange($VarHandle* ob, Object$* obb, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, expected);
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->compareAndExchangeInt(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsInts::convEndian(handle->be, value)));
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::compareAndExchangeAcquire($VarHandle* ob, Object$* obb, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, expected);
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->compareAndExchangeIntAcquire(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsInts::convEndian(handle->be, value)));
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::compareAndExchangeRelease($VarHandle* ob, Object$* obb, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, expected);
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->compareAndExchangeIntRelease(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsInts::convEndian(handle->be, value)));
}

bool VarHandleByteArrayAsInts$ByteBufferHandle::weakCompareAndSetPlain($VarHandle* ob, Object$* obb, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->weakCompareAndSetIntPlain(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsInts::convEndian(handle->be, value));
}

bool VarHandleByteArrayAsInts$ByteBufferHandle::weakCompareAndSet($VarHandle* ob, Object$* obb, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->weakCompareAndSetInt(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsInts::convEndian(handle->be, value));
}

bool VarHandleByteArrayAsInts$ByteBufferHandle::weakCompareAndSetAcquire($VarHandle* ob, Object$* obb, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->weakCompareAndSetIntAcquire(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsInts::convEndian(handle->be, value));
}

bool VarHandleByteArrayAsInts$ByteBufferHandle::weakCompareAndSetRelease($VarHandle* ob, Object$* obb, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->weakCompareAndSetIntRelease(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsInts::convEndian(handle->be, value));
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::getAndSet($VarHandle* ob, Object$* obb, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->getAndSetInt(var$0, var$1, var$2, $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, value)));
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::getAndSetAcquire($VarHandle* ob, Object$* obb, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->getAndSetIntAcquire(var$0, var$1, var$2, $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, value)));
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::getAndSetRelease($VarHandle* ob, Object$* obb, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->getAndSetIntRelease(var$0, var$1, var$2, $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, value)));
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::getAndAdd($VarHandle* ob, Object$* obb, int32_t index, int32_t delta) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($VarHandleByteArrayAsInts);
		$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
		$init($MethodHandleStatics);
		$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
		return $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->getAndAddInt(var$0, var$1, address(bb, indexRO(bb, index)), delta);
	} else {
		return getAndAddConvEndianWithCAS(bb, index, delta);
	}
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::getAndAddAcquire($VarHandle* ob, Object$* obb, int32_t index, int32_t delta) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($VarHandleByteArrayAsInts);
		$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
		$init($MethodHandleStatics);
		$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
		return $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->getAndAddIntAcquire(var$0, var$1, address(bb, indexRO(bb, index)), delta);
	} else {
		return getAndAddConvEndianWithCAS(bb, index, delta);
	}
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::getAndAddRelease($VarHandle* ob, Object$* obb, int32_t index, int32_t delta) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($VarHandleByteArrayAsInts);
		$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
		$init($MethodHandleStatics);
		$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
		return $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->getAndAddIntRelease(var$0, var$1, address(bb, indexRO(bb, index)), delta);
	} else {
		return getAndAddConvEndianWithCAS(bb, index, delta);
	}
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::getAndAddConvEndianWithCAS($ByteBuffer* bb, int32_t index, int32_t delta) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	int32_t nativeExpectedValue = 0;
	int32_t expectedValue = 0;
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, base, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t offset = address(bb, indexRO(bb, index));
	do {
		$init($VarHandleByteArrayAsInts);
		nativeExpectedValue = $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->getIntVolatile($(scope(bb)), base, offset);
		expectedValue = $Integer::reverseBytes(nativeExpectedValue);
	} while (!$MethodHandleStatics::UNSAFE->weakCompareAndSetInt(base, offset, nativeExpectedValue, $Integer::reverseBytes(expectedValue + delta)));
	return expectedValue;
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::getAndBitwiseOr($VarHandle* ob, Object$* obb, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($VarHandleByteArrayAsInts);
		$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
		$init($MethodHandleStatics);
		$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
		return $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->getAndBitwiseOrInt(var$0, var$1, address(bb, indexRO(bb, index)), value);
	} else {
		return getAndBitwiseOrConvEndianWithCAS(bb, index, value);
	}
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::getAndBitwiseOrRelease($VarHandle* ob, Object$* obb, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($VarHandleByteArrayAsInts);
		$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
		$init($MethodHandleStatics);
		$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
		return $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->getAndBitwiseOrIntRelease(var$0, var$1, address(bb, indexRO(bb, index)), value);
	} else {
		return getAndBitwiseOrConvEndianWithCAS(bb, index, value);
	}
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::getAndBitwiseOrAcquire($VarHandle* ob, Object$* obb, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($VarHandleByteArrayAsInts);
		$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
		$init($MethodHandleStatics);
		$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
		return $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->getAndBitwiseOrIntAcquire(var$0, var$1, address(bb, indexRO(bb, index)), value);
	} else {
		return getAndBitwiseOrConvEndianWithCAS(bb, index, value);
	}
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::getAndBitwiseOrConvEndianWithCAS($ByteBuffer* bb, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	int32_t nativeExpectedValue = 0;
	int32_t expectedValue = 0;
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, base, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t offset = address(bb, indexRO(bb, index));
	do {
		$init($VarHandleByteArrayAsInts);
		nativeExpectedValue = $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->getIntVolatile($(scope(bb)), base, offset);
		expectedValue = $Integer::reverseBytes(nativeExpectedValue);
	} while (!$MethodHandleStatics::UNSAFE->weakCompareAndSetInt(base, offset, nativeExpectedValue, $Integer::reverseBytes(expectedValue | value)));
	return expectedValue;
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::getAndBitwiseAnd($VarHandle* ob, Object$* obb, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($VarHandleByteArrayAsInts);
		$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
		$init($MethodHandleStatics);
		$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
		return $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->getAndBitwiseAndInt(var$0, var$1, address(bb, indexRO(bb, index)), value);
	} else {
		return getAndBitwiseAndConvEndianWithCAS(bb, index, value);
	}
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::getAndBitwiseAndRelease($VarHandle* ob, Object$* obb, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($VarHandleByteArrayAsInts);
		$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
		$init($MethodHandleStatics);
		$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
		return $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->getAndBitwiseAndIntRelease(var$0, var$1, address(bb, indexRO(bb, index)), value);
	} else {
		return getAndBitwiseAndConvEndianWithCAS(bb, index, value);
	}
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::getAndBitwiseAndAcquire($VarHandle* ob, Object$* obb, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($VarHandleByteArrayAsInts);
		$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
		$init($MethodHandleStatics);
		$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
		return $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->getAndBitwiseAndIntAcquire(var$0, var$1, address(bb, indexRO(bb, index)), value);
	} else {
		return getAndBitwiseAndConvEndianWithCAS(bb, index, value);
	}
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::getAndBitwiseAndConvEndianWithCAS($ByteBuffer* bb, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	int32_t nativeExpectedValue = 0;
	int32_t expectedValue = 0;
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, base, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t offset = address(bb, indexRO(bb, index));
	do {
		$init($VarHandleByteArrayAsInts);
		nativeExpectedValue = $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->getIntVolatile($(scope(bb)), base, offset);
		expectedValue = $Integer::reverseBytes(nativeExpectedValue);
	} while (!$MethodHandleStatics::UNSAFE->weakCompareAndSetInt(base, offset, nativeExpectedValue, $Integer::reverseBytes(expectedValue & value)));
	return expectedValue;
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::getAndBitwiseXor($VarHandle* ob, Object$* obb, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($VarHandleByteArrayAsInts);
		$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
		$init($MethodHandleStatics);
		$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
		return $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->getAndBitwiseXorInt(var$0, var$1, address(bb, indexRO(bb, index)), value);
	} else {
		return getAndBitwiseXorConvEndianWithCAS(bb, index, value);
	}
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::getAndBitwiseXorRelease($VarHandle* ob, Object$* obb, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($VarHandleByteArrayAsInts);
		$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
		$init($MethodHandleStatics);
		$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
		return $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->getAndBitwiseXorIntRelease(var$0, var$1, address(bb, indexRO(bb, index)), value);
	} else {
		return getAndBitwiseXorConvEndianWithCAS(bb, index, value);
	}
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::getAndBitwiseXorAcquire($VarHandle* ob, Object$* obb, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($VarHandleByteArrayAsInts);
		$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
		$init($MethodHandleStatics);
		$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
		return $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->getAndBitwiseXorIntAcquire(var$0, var$1, address(bb, indexRO(bb, index)), value);
	} else {
		return getAndBitwiseXorConvEndianWithCAS(bb, index, value);
	}
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::getAndBitwiseXorConvEndianWithCAS($ByteBuffer* bb, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalObjectStack();
	int32_t nativeExpectedValue = 0;
	int32_t expectedValue = 0;
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, base, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t offset = address(bb, indexRO(bb, index));
	do {
		$init($VarHandleByteArrayAsInts);
		nativeExpectedValue = $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->getIntVolatile($(scope(bb)), base, offset);
		expectedValue = $Integer::reverseBytes(nativeExpectedValue);
	} while (!$MethodHandleStatics::UNSAFE->weakCompareAndSetInt(base, offset, nativeExpectedValue, $Integer::reverseBytes(expectedValue ^ value)));
	return expectedValue;
}

void VarHandleByteArrayAsInts$ByteBufferHandle::clinit$($Class* clazz) {
	$load($ByteBuffer);
	$assignStatic(VarHandleByteArrayAsInts$ByteBufferHandle::FORM, $new($VarForm, VarHandleByteArrayAsInts$ByteBufferHandle::class$, $ByteBuffer::class$, $Integer::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleByteArrayAsInts$ByteBufferHandle::VarHandleByteArrayAsInts$ByteBufferHandle() {
}

$Class* VarHandleByteArrayAsInts$ByteBufferHandle::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsInts$ByteBufferHandle, FORM)},
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
		{"<init>", "(Z)V", nullptr, 0, $method(VarHandleByteArrayAsInts$ByteBufferHandle, init$, void, bool)},
		{"<init>", "(ZZ)V", nullptr, $PRIVATE, $method(VarHandleByteArrayAsInts$ByteBufferHandle, init$, void, bool, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleByteArrayAsInts$ByteBufferHandle, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"address", "(Ljava/nio/ByteBuffer;I)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, address, int64_t, $ByteBuffer*, int32_t), nullptr, nullptr, addressmethodAnnotations$$},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, compareAndExchange, int32_t, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, compareAndExchangeAcquire, int32_t, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, compareAndExchangeRelease, int32_t, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, compareAndSet, bool, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, get, int32_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, getAcquire, int32_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, getAndAdd, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndAddmethodAnnotations$$},
		{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, getAndAddAcquire, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndAddAcquiremethodAnnotations$$},
		{"getAndAddConvEndianWithCAS", "(Ljava/nio/ByteBuffer;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, getAndAddConvEndianWithCAS, int32_t, $ByteBuffer*, int32_t, int32_t), nullptr, nullptr, getAndAddConvEndianWithCASmethodAnnotations$$},
		{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, getAndAddRelease, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndAddReleasemethodAnnotations$$},
		{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, getAndBitwiseAnd, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseAndmethodAnnotations$$},
		{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, getAndBitwiseAndAcquire, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseAndAcquiremethodAnnotations$$},
		{"getAndBitwiseAndConvEndianWithCAS", "(Ljava/nio/ByteBuffer;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, getAndBitwiseAndConvEndianWithCAS, int32_t, $ByteBuffer*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseAndConvEndianWithCASmethodAnnotations$$},
		{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, getAndBitwiseAndRelease, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseAndReleasemethodAnnotations$$},
		{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, getAndBitwiseOr, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseOrmethodAnnotations$$},
		{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, getAndBitwiseOrAcquire, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseOrAcquiremethodAnnotations$$},
		{"getAndBitwiseOrConvEndianWithCAS", "(Ljava/nio/ByteBuffer;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, getAndBitwiseOrConvEndianWithCAS, int32_t, $ByteBuffer*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseOrConvEndianWithCASmethodAnnotations$$},
		{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, getAndBitwiseOrRelease, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseOrReleasemethodAnnotations$$},
		{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, getAndBitwiseXor, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseXormethodAnnotations$$},
		{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, getAndBitwiseXorAcquire, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseXorAcquiremethodAnnotations$$},
		{"getAndBitwiseXorConvEndianWithCAS", "(Ljava/nio/ByteBuffer;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, getAndBitwiseXorConvEndianWithCAS, int32_t, $ByteBuffer*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseXorConvEndianWithCASmethodAnnotations$$},
		{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, getAndBitwiseXorRelease, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseXorReleasemethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, getAndSet, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, getAndSetAcquire, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, getAndSetRelease, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, getOpaque, int32_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, getVolatile, int32_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"index", "(Ljava/nio/ByteBuffer;I)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, index, int32_t, $ByteBuffer*, int32_t), nullptr, nullptr, indexmethodAnnotations$$},
		{"indexRO", "(Ljava/nio/ByteBuffer;I)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, indexRO, int32_t, $ByteBuffer*, int32_t), nullptr, nullptr, indexROmethodAnnotations$$},
		{"scope", "(Ljava/nio/ByteBuffer;)Ljdk/internal/misc/ScopedMemoryAccess$Scope;", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, scope, $ScopedMemoryAccess$Scope*, $ByteBuffer*), nullptr, nullptr, scopemethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, set, void, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, setOpaque, void, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, setRelease, void, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, setVolatile, void, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, weakCompareAndSet, bool, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ByteBufferHandle, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsInts$ByteBufferHandle;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsInts$ByteBufferHandle, withInvokeBehavior, VarHandleByteArrayAsInts$ByteBufferHandle*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsInts$ByteBufferHandle;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsInts$ByteBufferHandle, withInvokeExactBehavior, VarHandleByteArrayAsInts$ByteBufferHandle*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleByteArrayAsInts$ByteBufferHandle", "java.lang.invoke.VarHandleByteArrayAsInts", "ByteBufferHandle", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleByteArrayAsInts$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsInts", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleByteArrayAsInts$ByteBufferHandle",
		"java.lang.invoke.VarHandleByteArrayAsInts$ByteArrayViewVarHandle",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandleByteArrayAsInts"
	};
	$loadClass(VarHandleByteArrayAsInts$ByteBufferHandle, name, initialize, &classInfo$$, VarHandleByteArrayAsInts$ByteBufferHandle::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleByteArrayAsInts$ByteBufferHandle);
	});
	return class$;
}

$Class* VarHandleByteArrayAsInts$ByteBufferHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java