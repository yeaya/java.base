#include <java/lang/invoke/VarHandleByteArrayAsChars$ByteBufferHandle.h>

#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsChars$ByteArrayViewVarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsChars.h>
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

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;
using $VarHandleByteArrayAsChars = ::java::lang::invoke::VarHandleByteArrayAsChars;
using $VarHandleByteArrayAsChars$ByteArrayViewVarHandle = ::java::lang::invoke::VarHandleByteArrayAsChars$ByteArrayViewVarHandle;
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

$CompoundAttribute _VarHandleByteArrayAsChars$ByteBufferHandle_MethodAnnotations_address3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsChars$ByteBufferHandle_MethodAnnotations_get4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsChars$ByteBufferHandle_MethodAnnotations_getAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsChars$ByteBufferHandle_MethodAnnotations_getOpaque6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsChars$ByteBufferHandle_MethodAnnotations_getVolatile7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsChars$ByteBufferHandle_MethodAnnotations_index8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsChars$ByteBufferHandle_MethodAnnotations_indexRO9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsChars$ByteBufferHandle_MethodAnnotations_scope10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsChars$ByteBufferHandle_MethodAnnotations_set11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsChars$ByteBufferHandle_MethodAnnotations_setOpaque12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsChars$ByteBufferHandle_MethodAnnotations_setRelease13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsChars$ByteBufferHandle_MethodAnnotations_setVolatile14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleByteArrayAsChars$ByteBufferHandle_FieldInfo_[] = {
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsChars$ByteBufferHandle, FORM)},
	{}
};

$MethodInfo _VarHandleByteArrayAsChars$ByteBufferHandle_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, 0, $method(static_cast<void(VarHandleByteArrayAsChars$ByteBufferHandle::*)(bool)>(&VarHandleByteArrayAsChars$ByteBufferHandle::init$))},
	{"<init>", "(ZZ)V", nullptr, $PRIVATE, $method(static_cast<void(VarHandleByteArrayAsChars$ByteBufferHandle::*)(bool,bool)>(&VarHandleByteArrayAsChars$ByteBufferHandle::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"address", "(Ljava/nio/ByteBuffer;I)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($ByteBuffer*,int32_t)>(&VarHandleByteArrayAsChars$ByteBufferHandle::address)), nullptr, nullptr, _VarHandleByteArrayAsChars$ByteBufferHandle_MethodAnnotations_address3},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsChars$ByteBufferHandle::get)), nullptr, nullptr, _VarHandleByteArrayAsChars$ByteBufferHandle_MethodAnnotations_get4},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsChars$ByteBufferHandle::getAcquire)), nullptr, nullptr, _VarHandleByteArrayAsChars$ByteBufferHandle_MethodAnnotations_getAcquire5},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsChars$ByteBufferHandle::getOpaque)), nullptr, nullptr, _VarHandleByteArrayAsChars$ByteBufferHandle_MethodAnnotations_getOpaque6},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsChars$ByteBufferHandle::getVolatile)), nullptr, nullptr, _VarHandleByteArrayAsChars$ByteBufferHandle_MethodAnnotations_getVolatile7},
	{"index", "(Ljava/nio/ByteBuffer;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($ByteBuffer*,int32_t)>(&VarHandleByteArrayAsChars$ByteBufferHandle::index)), nullptr, nullptr, _VarHandleByteArrayAsChars$ByteBufferHandle_MethodAnnotations_index8},
	{"indexRO", "(Ljava/nio/ByteBuffer;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($ByteBuffer*,int32_t)>(&VarHandleByteArrayAsChars$ByteBufferHandle::indexRO)), nullptr, nullptr, _VarHandleByteArrayAsChars$ByteBufferHandle_MethodAnnotations_indexRO9},
	{"scope", "(Ljava/nio/ByteBuffer;)Ljdk/internal/misc/ScopedMemoryAccess$Scope;", nullptr, $STATIC, $method(static_cast<$ScopedMemoryAccess$Scope*(*)($ByteBuffer*)>(&VarHandleByteArrayAsChars$ByteBufferHandle::scope)), nullptr, nullptr, _VarHandleByteArrayAsChars$ByteBufferHandle_MethodAnnotations_scope10},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,char16_t)>(&VarHandleByteArrayAsChars$ByteBufferHandle::set)), nullptr, nullptr, _VarHandleByteArrayAsChars$ByteBufferHandle_MethodAnnotations_set11},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,char16_t)>(&VarHandleByteArrayAsChars$ByteBufferHandle::setOpaque)), nullptr, nullptr, _VarHandleByteArrayAsChars$ByteBufferHandle_MethodAnnotations_setOpaque12},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,char16_t)>(&VarHandleByteArrayAsChars$ByteBufferHandle::setRelease)), nullptr, nullptr, _VarHandleByteArrayAsChars$ByteBufferHandle_MethodAnnotations_setRelease13},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,char16_t)>(&VarHandleByteArrayAsChars$ByteBufferHandle::setVolatile)), nullptr, nullptr, _VarHandleByteArrayAsChars$ByteBufferHandle_MethodAnnotations_setVolatile14},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsChars$ByteBufferHandle;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsChars$ByteBufferHandle;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleByteArrayAsChars$ByteBufferHandle_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleByteArrayAsChars$ByteBufferHandle", "java.lang.invoke.VarHandleByteArrayAsChars", "ByteBufferHandle", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleByteArrayAsChars$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsChars", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _VarHandleByteArrayAsChars$ByteBufferHandle_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleByteArrayAsChars$ByteBufferHandle",
	"java.lang.invoke.VarHandleByteArrayAsChars$ByteArrayViewVarHandle",
	nullptr,
	_VarHandleByteArrayAsChars$ByteBufferHandle_FieldInfo_,
	_VarHandleByteArrayAsChars$ByteBufferHandle_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleByteArrayAsChars$ByteBufferHandle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleByteArrayAsChars"
};

$Object* allocate$VarHandleByteArrayAsChars$ByteBufferHandle($Class* clazz) {
	return $of($alloc(VarHandleByteArrayAsChars$ByteBufferHandle));
}

$VarForm* VarHandleByteArrayAsChars$ByteBufferHandle::FORM = nullptr;

void VarHandleByteArrayAsChars$ByteBufferHandle::init$(bool be) {
	VarHandleByteArrayAsChars$ByteBufferHandle::init$(be, false);
}

void VarHandleByteArrayAsChars$ByteBufferHandle::init$(bool be, bool exact) {
	$VarHandleByteArrayAsChars$ByteArrayViewVarHandle::init$(VarHandleByteArrayAsChars$ByteBufferHandle::FORM, be, exact);
}

VarHandleByteArrayAsChars$ByteBufferHandle* VarHandleByteArrayAsChars$ByteBufferHandle::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsChars$ByteBufferHandle, this->be, true);
}

VarHandleByteArrayAsChars$ByteBufferHandle* VarHandleByteArrayAsChars$ByteBufferHandle::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsChars$ByteBufferHandle, this->be, false);
}

$MethodType* VarHandleByteArrayAsChars$ByteBufferHandle::accessModeTypeUncached($VarHandle$AccessType* at) {
	$load($ByteBuffer);
	$init($Character);
	$init($Integer);
	return $nc(at)->accessModeType($ByteBuffer::class$, $Character::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

int32_t VarHandleByteArrayAsChars$ByteBufferHandle::index($ByteBuffer* bb, int32_t index) {
	$init(VarHandleByteArrayAsChars$ByteBufferHandle);
	$init($VarHandleByteArrayAsChars);
	$var($MemorySegmentProxy, segmentProxy, $nc($VarHandleByteArrayAsChars::NIO_ACCESS)->bufferSegment(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	return $Preconditions::checkIndex(index, $nc($MethodHandleStatics::UNSAFE)->getInt(bb, $VarHandleByteArrayBase::BUFFER_LIMIT) - 1, ($BiFunction*)nullptr);
}

$ScopedMemoryAccess$Scope* VarHandleByteArrayAsChars$ByteBufferHandle::scope($ByteBuffer* bb) {
	$init(VarHandleByteArrayAsChars$ByteBufferHandle);
	$init($VarHandleByteArrayAsChars);
	$var($MemorySegmentProxy, segmentProxy, $nc($VarHandleByteArrayAsChars::NIO_ACCESS)->bufferSegment(bb));
	return segmentProxy != nullptr ? $nc(segmentProxy)->scope() : ($ScopedMemoryAccess$Scope*)nullptr;
}

int32_t VarHandleByteArrayAsChars$ByteBufferHandle::indexRO($ByteBuffer* bb, int32_t index) {
	$init(VarHandleByteArrayAsChars$ByteBufferHandle);
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	if ($nc($MethodHandleStatics::UNSAFE)->getBoolean(bb, $VarHandleByteArrayBase::BYTE_BUFFER_IS_READ_ONLY)) {
		$throwNew($ReadOnlyBufferException);
	}
	return VarHandleByteArrayAsChars$ByteBufferHandle::index(bb, index);
}

int64_t VarHandleByteArrayAsChars$ByteBufferHandle::address($ByteBuffer* bb, int32_t index) {
	$init(VarHandleByteArrayAsChars$ByteBufferHandle);
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	int64_t address = ((int64_t)index) + $nc($MethodHandleStatics::UNSAFE)->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS);
	if (((int64_t)(address & (uint64_t)(int64_t)1)) != 0) {
		$throw($($VarHandleByteArrayBase::newIllegalStateExceptionForMisalignedAccess(index)));
	}
	return address;
}

char16_t VarHandleByteArrayAsChars$ByteBufferHandle::get($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsChars$ByteBufferHandle);
	$var(VarHandleByteArrayAsChars$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsChars$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsChars);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = ((int64_t)VarHandleByteArrayAsChars$ByteBufferHandle::index(bb, index));
	return $nc($VarHandleByteArrayAsChars::SCOPED_MEMORY_ACCESS)->getCharUnaligned(var$0, var$1, var$2 + $nc($MethodHandleStatics::UNSAFE)->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS), $nc(handle)->be);
}

void VarHandleByteArrayAsChars$ByteBufferHandle::set($VarHandle* ob, Object$* obb, int32_t index, char16_t value) {
	$init(VarHandleByteArrayAsChars$ByteBufferHandle);
	$var(VarHandleByteArrayAsChars$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsChars$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsChars);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = ((int64_t)indexRO(bb, index));
	$nc($VarHandleByteArrayAsChars::SCOPED_MEMORY_ACCESS)->putCharUnaligned(var$0, var$1, var$2 + $nc($MethodHandleStatics::UNSAFE)->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS), value, $nc(handle)->be);
}

char16_t VarHandleByteArrayAsChars$ByteBufferHandle::getVolatile($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsChars$ByteBufferHandle);
	$var(VarHandleByteArrayAsChars$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsChars$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsChars);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	return $VarHandleByteArrayAsChars::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsChars::SCOPED_MEMORY_ACCESS)->getCharVolatile(var$0, var$1, address(bb, VarHandleByteArrayAsChars$ByteBufferHandle::index(bb, index))));
}

void VarHandleByteArrayAsChars$ByteBufferHandle::setVolatile($VarHandle* ob, Object$* obb, int32_t index, char16_t value) {
	$init(VarHandleByteArrayAsChars$ByteBufferHandle);
	$var(VarHandleByteArrayAsChars$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsChars$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsChars);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	$nc($VarHandleByteArrayAsChars::SCOPED_MEMORY_ACCESS)->putCharVolatile(var$0, var$1, var$2, $VarHandleByteArrayAsChars::convEndian($nc(handle)->be, value));
}

char16_t VarHandleByteArrayAsChars$ByteBufferHandle::getAcquire($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsChars$ByteBufferHandle);
	$var(VarHandleByteArrayAsChars$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsChars$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsChars);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	return $VarHandleByteArrayAsChars::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsChars::SCOPED_MEMORY_ACCESS)->getCharAcquire(var$0, var$1, address(bb, VarHandleByteArrayAsChars$ByteBufferHandle::index(bb, index))));
}

void VarHandleByteArrayAsChars$ByteBufferHandle::setRelease($VarHandle* ob, Object$* obb, int32_t index, char16_t value) {
	$init(VarHandleByteArrayAsChars$ByteBufferHandle);
	$var(VarHandleByteArrayAsChars$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsChars$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsChars);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	$nc($VarHandleByteArrayAsChars::SCOPED_MEMORY_ACCESS)->putCharRelease(var$0, var$1, var$2, $VarHandleByteArrayAsChars::convEndian($nc(handle)->be, value));
}

char16_t VarHandleByteArrayAsChars$ByteBufferHandle::getOpaque($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsChars$ByteBufferHandle);
	$var(VarHandleByteArrayAsChars$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsChars$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsChars);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	return $VarHandleByteArrayAsChars::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsChars::SCOPED_MEMORY_ACCESS)->getCharOpaque(var$0, var$1, address(bb, VarHandleByteArrayAsChars$ByteBufferHandle::index(bb, index))));
}

void VarHandleByteArrayAsChars$ByteBufferHandle::setOpaque($VarHandle* ob, Object$* obb, int32_t index, char16_t value) {
	$init(VarHandleByteArrayAsChars$ByteBufferHandle);
	$var(VarHandleByteArrayAsChars$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsChars$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsChars);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	$nc($VarHandleByteArrayAsChars::SCOPED_MEMORY_ACCESS)->putCharOpaque(var$0, var$1, var$2, $VarHandleByteArrayAsChars::convEndian($nc(handle)->be, value));
}

void clinit$VarHandleByteArrayAsChars$ByteBufferHandle($Class* class$) {
	$load($ByteBuffer);
	$init($Character);
	$init($Integer);
	$assignStatic(VarHandleByteArrayAsChars$ByteBufferHandle::FORM, $new($VarForm, VarHandleByteArrayAsChars$ByteBufferHandle::class$, $ByteBuffer::class$, $Character::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleByteArrayAsChars$ByteBufferHandle::VarHandleByteArrayAsChars$ByteBufferHandle() {
}

$Class* VarHandleByteArrayAsChars$ByteBufferHandle::load$($String* name, bool initialize) {
	$loadClass(VarHandleByteArrayAsChars$ByteBufferHandle, name, initialize, &_VarHandleByteArrayAsChars$ByteBufferHandle_ClassInfo_, clinit$VarHandleByteArrayAsChars$ByteBufferHandle, allocate$VarHandleByteArrayAsChars$ByteBufferHandle);
	return class$;
}

$Class* VarHandleByteArrayAsChars$ByteBufferHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java