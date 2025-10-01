#include <java/lang/invoke/VarHandleByteArrayAsShorts$ByteBufferHandle.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsShorts$ByteArrayViewVarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsShorts.h>
#include <java/lang/invoke/VarHandleByteArrayBase.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/Buffer.h>
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
#undef BYTE_BUFFER_IS_READ_ONLY
#undef NIO_ACCESS
#undef FORM
#undef BUFFER_LIMIT
#undef UNSAFE
#undef TYPE
#undef SCOPED_MEMORY_ACCESS
#undef BYTE_BUFFER_HB

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Short = ::java::lang::Short;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;
using $VarHandleByteArrayAsShorts = ::java::lang::invoke::VarHandleByteArrayAsShorts;
using $VarHandleByteArrayAsShorts$ByteArrayViewVarHandle = ::java::lang::invoke::VarHandleByteArrayAsShorts$ByteArrayViewVarHandle;
using $VarHandleByteArrayBase = ::java::lang::invoke::VarHandleByteArrayBase;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $BiFunction = ::java::util::function::BiFunction;
using $JavaNioAccess = ::jdk::internal::access::JavaNioAccess;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $ScopedMemoryAccess = ::jdk::internal::misc::ScopedMemoryAccess;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Preconditions = ::jdk::internal::util::Preconditions;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleByteArrayAsShorts$ByteBufferHandle_MethodAnnotations_address3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsShorts$ByteBufferHandle_MethodAnnotations_get4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsShorts$ByteBufferHandle_MethodAnnotations_getAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsShorts$ByteBufferHandle_MethodAnnotations_getOpaque6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsShorts$ByteBufferHandle_MethodAnnotations_getVolatile7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsShorts$ByteBufferHandle_MethodAnnotations_index8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsShorts$ByteBufferHandle_MethodAnnotations_indexRO9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsShorts$ByteBufferHandle_MethodAnnotations_scope10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsShorts$ByteBufferHandle_MethodAnnotations_set11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsShorts$ByteBufferHandle_MethodAnnotations_setOpaque12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsShorts$ByteBufferHandle_MethodAnnotations_setRelease13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsShorts$ByteBufferHandle_MethodAnnotations_setVolatile14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleByteArrayAsShorts$ByteBufferHandle_FieldInfo_[] = {
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsShorts$ByteBufferHandle, FORM)},
	{}
};

$MethodInfo _VarHandleByteArrayAsShorts$ByteBufferHandle_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, 0, $method(static_cast<void(VarHandleByteArrayAsShorts$ByteBufferHandle::*)(bool)>(&VarHandleByteArrayAsShorts$ByteBufferHandle::init$))},
	{"<init>", "(ZZ)V", nullptr, $PRIVATE, $method(static_cast<void(VarHandleByteArrayAsShorts$ByteBufferHandle::*)(bool,bool)>(&VarHandleByteArrayAsShorts$ByteBufferHandle::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"address", "(Ljava/nio/ByteBuffer;I)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($ByteBuffer*,int32_t)>(&VarHandleByteArrayAsShorts$ByteBufferHandle::address)), nullptr, nullptr, _VarHandleByteArrayAsShorts$ByteBufferHandle_MethodAnnotations_address3},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsShorts$ByteBufferHandle::get)), nullptr, nullptr, _VarHandleByteArrayAsShorts$ByteBufferHandle_MethodAnnotations_get4},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsShorts$ByteBufferHandle::getAcquire)), nullptr, nullptr, _VarHandleByteArrayAsShorts$ByteBufferHandle_MethodAnnotations_getAcquire5},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsShorts$ByteBufferHandle::getOpaque)), nullptr, nullptr, _VarHandleByteArrayAsShorts$ByteBufferHandle_MethodAnnotations_getOpaque6},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsShorts$ByteBufferHandle::getVolatile)), nullptr, nullptr, _VarHandleByteArrayAsShorts$ByteBufferHandle_MethodAnnotations_getVolatile7},
	{"index", "(Ljava/nio/ByteBuffer;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($ByteBuffer*,int32_t)>(&VarHandleByteArrayAsShorts$ByteBufferHandle::index)), nullptr, nullptr, _VarHandleByteArrayAsShorts$ByteBufferHandle_MethodAnnotations_index8},
	{"indexRO", "(Ljava/nio/ByteBuffer;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($ByteBuffer*,int32_t)>(&VarHandleByteArrayAsShorts$ByteBufferHandle::indexRO)), nullptr, nullptr, _VarHandleByteArrayAsShorts$ByteBufferHandle_MethodAnnotations_indexRO9},
	{"scope", "(Ljava/nio/ByteBuffer;)Ljdk/internal/misc/ScopedMemoryAccess$Scope;", nullptr, $STATIC, $method(static_cast<$ScopedMemoryAccess$Scope*(*)($ByteBuffer*)>(&VarHandleByteArrayAsShorts$ByteBufferHandle::scope)), nullptr, nullptr, _VarHandleByteArrayAsShorts$ByteBufferHandle_MethodAnnotations_scope10},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int16_t)>(&VarHandleByteArrayAsShorts$ByteBufferHandle::set)), nullptr, nullptr, _VarHandleByteArrayAsShorts$ByteBufferHandle_MethodAnnotations_set11},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int16_t)>(&VarHandleByteArrayAsShorts$ByteBufferHandle::setOpaque)), nullptr, nullptr, _VarHandleByteArrayAsShorts$ByteBufferHandle_MethodAnnotations_setOpaque12},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int16_t)>(&VarHandleByteArrayAsShorts$ByteBufferHandle::setRelease)), nullptr, nullptr, _VarHandleByteArrayAsShorts$ByteBufferHandle_MethodAnnotations_setRelease13},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int16_t)>(&VarHandleByteArrayAsShorts$ByteBufferHandle::setVolatile)), nullptr, nullptr, _VarHandleByteArrayAsShorts$ByteBufferHandle_MethodAnnotations_setVolatile14},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsShorts$ByteBufferHandle;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsShorts$ByteBufferHandle;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleByteArrayAsShorts$ByteBufferHandle_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleByteArrayAsShorts$ByteBufferHandle", "java.lang.invoke.VarHandleByteArrayAsShorts", "ByteBufferHandle", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleByteArrayAsShorts$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsShorts", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _VarHandleByteArrayAsShorts$ByteBufferHandle_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleByteArrayAsShorts$ByteBufferHandle",
	"java.lang.invoke.VarHandleByteArrayAsShorts$ByteArrayViewVarHandle",
	nullptr,
	_VarHandleByteArrayAsShorts$ByteBufferHandle_FieldInfo_,
	_VarHandleByteArrayAsShorts$ByteBufferHandle_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleByteArrayAsShorts$ByteBufferHandle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleByteArrayAsShorts"
};

$Object* allocate$VarHandleByteArrayAsShorts$ByteBufferHandle($Class* clazz) {
	return $of($alloc(VarHandleByteArrayAsShorts$ByteBufferHandle));
}

$VarForm* VarHandleByteArrayAsShorts$ByteBufferHandle::FORM = nullptr;

void VarHandleByteArrayAsShorts$ByteBufferHandle::init$(bool be) {
	VarHandleByteArrayAsShorts$ByteBufferHandle::init$(be, false);
}

void VarHandleByteArrayAsShorts$ByteBufferHandle::init$(bool be, bool exact) {
	$VarHandleByteArrayAsShorts$ByteArrayViewVarHandle::init$(VarHandleByteArrayAsShorts$ByteBufferHandle::FORM, be, exact);
}

VarHandleByteArrayAsShorts$ByteBufferHandle* VarHandleByteArrayAsShorts$ByteBufferHandle::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsShorts$ByteBufferHandle, this->be, true);
}

VarHandleByteArrayAsShorts$ByteBufferHandle* VarHandleByteArrayAsShorts$ByteBufferHandle::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsShorts$ByteBufferHandle, this->be, false);
}

$MethodType* VarHandleByteArrayAsShorts$ByteBufferHandle::accessModeTypeUncached($VarHandle$AccessType* at) {
	$load($ByteBuffer);
	$init($Short);
	$init($Integer);
	return $nc(at)->accessModeType($ByteBuffer::class$, $Short::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

int32_t VarHandleByteArrayAsShorts$ByteBufferHandle::index($ByteBuffer* bb, int32_t index) {
	$init(VarHandleByteArrayAsShorts$ByteBufferHandle);
	$init($VarHandleByteArrayAsShorts);
	$var($MemorySegmentProxy, segmentProxy, $nc($VarHandleByteArrayAsShorts::NIO_ACCESS)->bufferSegment(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	return $Preconditions::checkIndex(index, $nc($MethodHandleStatics::UNSAFE)->getInt(bb, $VarHandleByteArrayBase::BUFFER_LIMIT) - 1, ($BiFunction*)nullptr);
}

$ScopedMemoryAccess$Scope* VarHandleByteArrayAsShorts$ByteBufferHandle::scope($ByteBuffer* bb) {
	$init(VarHandleByteArrayAsShorts$ByteBufferHandle);
	$init($VarHandleByteArrayAsShorts);
	$var($MemorySegmentProxy, segmentProxy, $nc($VarHandleByteArrayAsShorts::NIO_ACCESS)->bufferSegment(bb));
	return segmentProxy != nullptr ? $nc(segmentProxy)->scope() : ($ScopedMemoryAccess$Scope*)nullptr;
}

int32_t VarHandleByteArrayAsShorts$ByteBufferHandle::indexRO($ByteBuffer* bb, int32_t index) {
	$init(VarHandleByteArrayAsShorts$ByteBufferHandle);
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	if ($nc($MethodHandleStatics::UNSAFE)->getBoolean(bb, $VarHandleByteArrayBase::BYTE_BUFFER_IS_READ_ONLY)) {
		$throwNew($ReadOnlyBufferException);
	}
	return VarHandleByteArrayAsShorts$ByteBufferHandle::index(bb, index);
}

int64_t VarHandleByteArrayAsShorts$ByteBufferHandle::address($ByteBuffer* bb, int32_t index) {
	$init(VarHandleByteArrayAsShorts$ByteBufferHandle);
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	int64_t address = ((int64_t)index) + $nc($MethodHandleStatics::UNSAFE)->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS);
	if (((int64_t)(address & (uint64_t)(int64_t)1)) != 0) {
		$throw($($VarHandleByteArrayBase::newIllegalStateExceptionForMisalignedAccess(index)));
	}
	return address;
}

int16_t VarHandleByteArrayAsShorts$ByteBufferHandle::get($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsShorts$ByteBufferHandle);
	$var(VarHandleByteArrayAsShorts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsShorts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsShorts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = ((int64_t)VarHandleByteArrayAsShorts$ByteBufferHandle::index(bb, index));
	return $nc($VarHandleByteArrayAsShorts::SCOPED_MEMORY_ACCESS)->getShortUnaligned(var$0, var$1, var$2 + $nc($MethodHandleStatics::UNSAFE)->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS), $nc(handle)->be);
}

void VarHandleByteArrayAsShorts$ByteBufferHandle::set($VarHandle* ob, Object$* obb, int32_t index, int16_t value) {
	$init(VarHandleByteArrayAsShorts$ByteBufferHandle);
	$var(VarHandleByteArrayAsShorts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsShorts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsShorts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = ((int64_t)indexRO(bb, index));
	$nc($VarHandleByteArrayAsShorts::SCOPED_MEMORY_ACCESS)->putShortUnaligned(var$0, var$1, var$2 + $nc($MethodHandleStatics::UNSAFE)->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS), value, $nc(handle)->be);
}

int16_t VarHandleByteArrayAsShorts$ByteBufferHandle::getVolatile($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsShorts$ByteBufferHandle);
	$var(VarHandleByteArrayAsShorts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsShorts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsShorts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	return $VarHandleByteArrayAsShorts::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsShorts::SCOPED_MEMORY_ACCESS)->getShortVolatile(var$0, var$1, address(bb, VarHandleByteArrayAsShorts$ByteBufferHandle::index(bb, index))));
}

void VarHandleByteArrayAsShorts$ByteBufferHandle::setVolatile($VarHandle* ob, Object$* obb, int32_t index, int16_t value) {
	$init(VarHandleByteArrayAsShorts$ByteBufferHandle);
	$var(VarHandleByteArrayAsShorts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsShorts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsShorts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	$nc($VarHandleByteArrayAsShorts::SCOPED_MEMORY_ACCESS)->putShortVolatile(var$0, var$1, var$2, $VarHandleByteArrayAsShorts::convEndian($nc(handle)->be, value));
}

int16_t VarHandleByteArrayAsShorts$ByteBufferHandle::getAcquire($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsShorts$ByteBufferHandle);
	$var(VarHandleByteArrayAsShorts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsShorts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsShorts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	return $VarHandleByteArrayAsShorts::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsShorts::SCOPED_MEMORY_ACCESS)->getShortAcquire(var$0, var$1, address(bb, VarHandleByteArrayAsShorts$ByteBufferHandle::index(bb, index))));
}

void VarHandleByteArrayAsShorts$ByteBufferHandle::setRelease($VarHandle* ob, Object$* obb, int32_t index, int16_t value) {
	$init(VarHandleByteArrayAsShorts$ByteBufferHandle);
	$var(VarHandleByteArrayAsShorts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsShorts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsShorts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	$nc($VarHandleByteArrayAsShorts::SCOPED_MEMORY_ACCESS)->putShortRelease(var$0, var$1, var$2, $VarHandleByteArrayAsShorts::convEndian($nc(handle)->be, value));
}

int16_t VarHandleByteArrayAsShorts$ByteBufferHandle::getOpaque($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsShorts$ByteBufferHandle);
	$var(VarHandleByteArrayAsShorts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsShorts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsShorts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	return $VarHandleByteArrayAsShorts::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsShorts::SCOPED_MEMORY_ACCESS)->getShortOpaque(var$0, var$1, address(bb, VarHandleByteArrayAsShorts$ByteBufferHandle::index(bb, index))));
}

void VarHandleByteArrayAsShorts$ByteBufferHandle::setOpaque($VarHandle* ob, Object$* obb, int32_t index, int16_t value) {
	$init(VarHandleByteArrayAsShorts$ByteBufferHandle);
	$var(VarHandleByteArrayAsShorts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsShorts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsShorts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	$nc($VarHandleByteArrayAsShorts::SCOPED_MEMORY_ACCESS)->putShortOpaque(var$0, var$1, var$2, $VarHandleByteArrayAsShorts::convEndian($nc(handle)->be, value));
}

void clinit$VarHandleByteArrayAsShorts$ByteBufferHandle($Class* class$) {
	$load($ByteBuffer);
	$init($Short);
	$init($Integer);
	$assignStatic(VarHandleByteArrayAsShorts$ByteBufferHandle::FORM, $new($VarForm, VarHandleByteArrayAsShorts$ByteBufferHandle::class$, $ByteBuffer::class$, $Short::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleByteArrayAsShorts$ByteBufferHandle::VarHandleByteArrayAsShorts$ByteBufferHandle() {
}

$Class* VarHandleByteArrayAsShorts$ByteBufferHandle::load$($String* name, bool initialize) {
	$loadClass(VarHandleByteArrayAsShorts$ByteBufferHandle, name, initialize, &_VarHandleByteArrayAsShorts$ByteBufferHandle_ClassInfo_, clinit$VarHandleByteArrayAsShorts$ByteBufferHandle, allocate$VarHandleByteArrayAsShorts$ByteBufferHandle);
	return class$;
}

$Class* VarHandleByteArrayAsShorts$ByteBufferHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java