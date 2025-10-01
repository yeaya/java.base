#include <java/lang/invoke/VarHandleByteArrayAsFloats$ByteBufferHandle.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
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
#include <java/lang/invoke/VarHandleByteArrayAsFloats$ByteArrayViewVarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsFloats.h>
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
using $Float = ::java::lang::Float;
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
using $VarHandleByteArrayAsFloats = ::java::lang::invoke::VarHandleByteArrayAsFloats;
using $VarHandleByteArrayAsFloats$ByteArrayViewVarHandle = ::java::lang::invoke::VarHandleByteArrayAsFloats$ByteArrayViewVarHandle;
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

$CompoundAttribute _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_address3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_compareAndExchange4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_compareAndExchangeAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_compareAndExchangeRelease6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_compareAndSet7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_get8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_getAcquire9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_getAndSet10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_getAndSetAcquire11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_getAndSetRelease12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_getOpaque13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_getVolatile14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_index15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_indexRO16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_scope17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_set18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_setOpaque19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_setRelease20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_setVolatile21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_weakCompareAndSet22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_weakCompareAndSetAcquire23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_weakCompareAndSetPlain24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_weakCompareAndSetRelease25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleByteArrayAsFloats$ByteBufferHandle_FieldInfo_[] = {
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsFloats$ByteBufferHandle, FORM)},
	{}
};

$MethodInfo _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, 0, $method(static_cast<void(VarHandleByteArrayAsFloats$ByteBufferHandle::*)(bool)>(&VarHandleByteArrayAsFloats$ByteBufferHandle::init$))},
	{"<init>", "(ZZ)V", nullptr, $PRIVATE, $method(static_cast<void(VarHandleByteArrayAsFloats$ByteBufferHandle::*)(bool,bool)>(&VarHandleByteArrayAsFloats$ByteBufferHandle::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"address", "(Ljava/nio/ByteBuffer;I)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($ByteBuffer*,int32_t)>(&VarHandleByteArrayAsFloats$ByteBufferHandle::address)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_address3},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,int32_t,float,float)>(&VarHandleByteArrayAsFloats$ByteBufferHandle::compareAndExchange)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_compareAndExchange4},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,int32_t,float,float)>(&VarHandleByteArrayAsFloats$ByteBufferHandle::compareAndExchangeAcquire)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_compareAndExchangeAcquire5},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,int32_t,float,float)>(&VarHandleByteArrayAsFloats$ByteBufferHandle::compareAndExchangeRelease)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_compareAndExchangeRelease6},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,float,float)>(&VarHandleByteArrayAsFloats$ByteBufferHandle::compareAndSet)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_compareAndSet7},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsFloats$ByteBufferHandle::get)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_get8},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsFloats$ByteBufferHandle::getAcquire)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_getAcquire9},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,int32_t,float)>(&VarHandleByteArrayAsFloats$ByteBufferHandle::getAndSet)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_getAndSet10},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,int32_t,float)>(&VarHandleByteArrayAsFloats$ByteBufferHandle::getAndSetAcquire)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_getAndSetAcquire11},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,int32_t,float)>(&VarHandleByteArrayAsFloats$ByteBufferHandle::getAndSetRelease)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_getAndSetRelease12},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsFloats$ByteBufferHandle::getOpaque)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_getOpaque13},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsFloats$ByteBufferHandle::getVolatile)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_getVolatile14},
	{"index", "(Ljava/nio/ByteBuffer;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($ByteBuffer*,int32_t)>(&VarHandleByteArrayAsFloats$ByteBufferHandle::index)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_index15},
	{"indexRO", "(Ljava/nio/ByteBuffer;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($ByteBuffer*,int32_t)>(&VarHandleByteArrayAsFloats$ByteBufferHandle::indexRO)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_indexRO16},
	{"scope", "(Ljava/nio/ByteBuffer;)Ljdk/internal/misc/ScopedMemoryAccess$Scope;", nullptr, $STATIC, $method(static_cast<$ScopedMemoryAccess$Scope*(*)($ByteBuffer*)>(&VarHandleByteArrayAsFloats$ByteBufferHandle::scope)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_scope17},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,float)>(&VarHandleByteArrayAsFloats$ByteBufferHandle::set)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_set18},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,float)>(&VarHandleByteArrayAsFloats$ByteBufferHandle::setOpaque)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_setOpaque19},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,float)>(&VarHandleByteArrayAsFloats$ByteBufferHandle::setRelease)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_setRelease20},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,float)>(&VarHandleByteArrayAsFloats$ByteBufferHandle::setVolatile)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_setVolatile21},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,float,float)>(&VarHandleByteArrayAsFloats$ByteBufferHandle::weakCompareAndSet)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_weakCompareAndSet22},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,float,float)>(&VarHandleByteArrayAsFloats$ByteBufferHandle::weakCompareAndSetAcquire)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_weakCompareAndSetAcquire23},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,float,float)>(&VarHandleByteArrayAsFloats$ByteBufferHandle::weakCompareAndSetPlain)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_weakCompareAndSetPlain24},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,float,float)>(&VarHandleByteArrayAsFloats$ByteBufferHandle::weakCompareAndSetRelease)), nullptr, nullptr, _VarHandleByteArrayAsFloats$ByteBufferHandle_MethodAnnotations_weakCompareAndSetRelease25},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsFloats$ByteBufferHandle;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsFloats$ByteBufferHandle;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleByteArrayAsFloats$ByteBufferHandle_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleByteArrayAsFloats$ByteBufferHandle", "java.lang.invoke.VarHandleByteArrayAsFloats", "ByteBufferHandle", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleByteArrayAsFloats$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsFloats", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _VarHandleByteArrayAsFloats$ByteBufferHandle_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleByteArrayAsFloats$ByteBufferHandle",
	"java.lang.invoke.VarHandleByteArrayAsFloats$ByteArrayViewVarHandle",
	nullptr,
	_VarHandleByteArrayAsFloats$ByteBufferHandle_FieldInfo_,
	_VarHandleByteArrayAsFloats$ByteBufferHandle_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleByteArrayAsFloats$ByteBufferHandle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleByteArrayAsFloats"
};

$Object* allocate$VarHandleByteArrayAsFloats$ByteBufferHandle($Class* clazz) {
	return $of($alloc(VarHandleByteArrayAsFloats$ByteBufferHandle));
}

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
	$init($Float);
	$init($Integer);
	return $nc(at)->accessModeType($ByteBuffer::class$, $Float::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

int32_t VarHandleByteArrayAsFloats$ByteBufferHandle::index($ByteBuffer* bb, int32_t index) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$init($VarHandleByteArrayAsFloats);
	$var($MemorySegmentProxy, segmentProxy, $nc($VarHandleByteArrayAsFloats::NIO_ACCESS)->bufferSegment(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	return $Preconditions::checkIndex(index, $nc($MethodHandleStatics::UNSAFE)->getInt(bb, $VarHandleByteArrayBase::BUFFER_LIMIT) - 3, ($BiFunction*)nullptr);
}

$ScopedMemoryAccess$Scope* VarHandleByteArrayAsFloats$ByteBufferHandle::scope($ByteBuffer* bb) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$init($VarHandleByteArrayAsFloats);
	$var($MemorySegmentProxy, segmentProxy, $nc($VarHandleByteArrayAsFloats::NIO_ACCESS)->bufferSegment(bb));
	return segmentProxy != nullptr ? $nc(segmentProxy)->scope() : ($ScopedMemoryAccess$Scope*)nullptr;
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
	if (((int64_t)(address & (uint64_t)(int64_t)3)) != 0) {
		$throw($($VarHandleByteArrayBase::newIllegalStateExceptionForMisalignedAccess(index)));
	}
	return address;
}

float VarHandleByteArrayAsFloats$ByteBufferHandle::get($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = ((int64_t)VarHandleByteArrayAsFloats$ByteBufferHandle::index(bb, index));
	int32_t rawValue = $nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->getIntUnaligned(var$0, var$1, var$2 + $nc($MethodHandleStatics::UNSAFE)->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS), $nc(handle)->be);
	return $Float::intBitsToFloat(rawValue);
}

void VarHandleByteArrayAsFloats$ByteBufferHandle::set($VarHandle* ob, Object$* obb, int32_t index, float value) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$3 = ((int64_t)indexRO(bb, index));
	int64_t var$2 = var$3 + $nc($MethodHandleStatics::UNSAFE)->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS);
	$nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->putIntUnaligned(var$0, var$1, var$2, $Float::floatToRawIntBits(value), $nc(handle)->be);
}

float VarHandleByteArrayAsFloats$ByteBufferHandle::getVolatile($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
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
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->compareAndSetInt(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, value));
}

float VarHandleByteArrayAsFloats$ByteBufferHandle::compareAndExchange($VarHandle* ob, Object$* obb, int32_t index, float expected, float value) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsFloats::convEndian(handle->be, expected);
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->compareAndExchangeInt(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsFloats::convEndian(handle->be, value)));
}

float VarHandleByteArrayAsFloats$ByteBufferHandle::compareAndExchangeAcquire($VarHandle* ob, Object$* obb, int32_t index, float expected, float value) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsFloats::convEndian(handle->be, expected);
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->compareAndExchangeIntAcquire(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsFloats::convEndian(handle->be, value)));
}

float VarHandleByteArrayAsFloats$ByteBufferHandle::compareAndExchangeRelease($VarHandle* ob, Object$* obb, int32_t index, float expected, float value) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsFloats::convEndian(handle->be, expected);
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->compareAndExchangeIntRelease(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsFloats::convEndian(handle->be, value)));
}

bool VarHandleByteArrayAsFloats$ByteBufferHandle::weakCompareAndSetPlain($VarHandle* ob, Object$* obb, int32_t index, float expected, float value) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->weakCompareAndSetIntPlain(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsFloats$ByteBufferHandle::weakCompareAndSet($VarHandle* ob, Object$* obb, int32_t index, float expected, float value) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->weakCompareAndSetInt(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsFloats$ByteBufferHandle::weakCompareAndSetAcquire($VarHandle* ob, Object$* obb, int32_t index, float expected, float value) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->weakCompareAndSetIntAcquire(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsFloats$ByteBufferHandle::weakCompareAndSetRelease($VarHandle* ob, Object$* obb, int32_t index, float expected, float value) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->weakCompareAndSetIntRelease(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, value));
}

float VarHandleByteArrayAsFloats$ByteBufferHandle::getAndSet($VarHandle* ob, Object$* obb, int32_t index, float value) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->getAndSetInt(var$0, var$1, var$2, $VarHandleByteArrayAsFloats::convEndian(handle->be, value)));
}

float VarHandleByteArrayAsFloats$ByteBufferHandle::getAndSetAcquire($VarHandle* ob, Object$* obb, int32_t index, float value) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->getAndSetIntAcquire(var$0, var$1, var$2, $VarHandleByteArrayAsFloats::convEndian(handle->be, value)));
}

float VarHandleByteArrayAsFloats$ByteBufferHandle::getAndSetRelease($VarHandle* ob, Object$* obb, int32_t index, float value) {
	$init(VarHandleByteArrayAsFloats$ByteBufferHandle);
	$var(VarHandleByteArrayAsFloats$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsFloats$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsFloats);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	return $VarHandleByteArrayAsFloats::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS)->getAndSetIntRelease(var$0, var$1, var$2, $VarHandleByteArrayAsFloats::convEndian(handle->be, value)));
}

void clinit$VarHandleByteArrayAsFloats$ByteBufferHandle($Class* class$) {
	$load($ByteBuffer);
	$init($Float);
	$init($Integer);
	$assignStatic(VarHandleByteArrayAsFloats$ByteBufferHandle::FORM, $new($VarForm, VarHandleByteArrayAsFloats$ByteBufferHandle::class$, $ByteBuffer::class$, $Float::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleByteArrayAsFloats$ByteBufferHandle::VarHandleByteArrayAsFloats$ByteBufferHandle() {
}

$Class* VarHandleByteArrayAsFloats$ByteBufferHandle::load$($String* name, bool initialize) {
	$loadClass(VarHandleByteArrayAsFloats$ByteBufferHandle, name, initialize, &_VarHandleByteArrayAsFloats$ByteBufferHandle_ClassInfo_, clinit$VarHandleByteArrayAsFloats$ByteBufferHandle, allocate$VarHandleByteArrayAsFloats$ByteBufferHandle);
	return class$;
}

$Class* VarHandleByteArrayAsFloats$ByteBufferHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java