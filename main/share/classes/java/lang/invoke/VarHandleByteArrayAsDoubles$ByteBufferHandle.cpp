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
using $VarHandleByteArrayAsDoubles = ::java::lang::invoke::VarHandleByteArrayAsDoubles;
using $VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle = ::java::lang::invoke::VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle;
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

$CompoundAttribute _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_address3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_compareAndExchange4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_compareAndExchangeAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_compareAndExchangeRelease6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_compareAndSet7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_get8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_getAcquire9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_getAndSet10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_getAndSetAcquire11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_getAndSetRelease12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_getOpaque13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_getVolatile14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_index15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_indexRO16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_scope17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_set18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_setOpaque19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_setRelease20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_setVolatile21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_weakCompareAndSet22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_weakCompareAndSetAcquire23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_weakCompareAndSetPlain24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_weakCompareAndSetRelease25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleByteArrayAsDoubles$ByteBufferHandle_FieldInfo_[] = {
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsDoubles$ByteBufferHandle, FORM)},
	{}
};

$MethodInfo _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, 0, $method(static_cast<void(VarHandleByteArrayAsDoubles$ByteBufferHandle::*)(bool)>(&VarHandleByteArrayAsDoubles$ByteBufferHandle::init$))},
	{"<init>", "(ZZ)V", nullptr, $PRIVATE, $method(static_cast<void(VarHandleByteArrayAsDoubles$ByteBufferHandle::*)(bool,bool)>(&VarHandleByteArrayAsDoubles$ByteBufferHandle::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"address", "(Ljava/nio/ByteBuffer;I)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($ByteBuffer*,int32_t)>(&VarHandleByteArrayAsDoubles$ByteBufferHandle::address)), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_address3},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int32_t,double,double)>(&VarHandleByteArrayAsDoubles$ByteBufferHandle::compareAndExchange)), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_compareAndExchange4},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int32_t,double,double)>(&VarHandleByteArrayAsDoubles$ByteBufferHandle::compareAndExchangeAcquire)), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_compareAndExchangeAcquire5},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int32_t,double,double)>(&VarHandleByteArrayAsDoubles$ByteBufferHandle::compareAndExchangeRelease)), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_compareAndExchangeRelease6},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,double,double)>(&VarHandleByteArrayAsDoubles$ByteBufferHandle::compareAndSet)), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_compareAndSet7},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsDoubles$ByteBufferHandle::get)), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_get8},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsDoubles$ByteBufferHandle::getAcquire)), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_getAcquire9},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int32_t,double)>(&VarHandleByteArrayAsDoubles$ByteBufferHandle::getAndSet)), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_getAndSet10},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int32_t,double)>(&VarHandleByteArrayAsDoubles$ByteBufferHandle::getAndSetAcquire)), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_getAndSetAcquire11},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int32_t,double)>(&VarHandleByteArrayAsDoubles$ByteBufferHandle::getAndSetRelease)), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_getAndSetRelease12},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsDoubles$ByteBufferHandle::getOpaque)), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_getOpaque13},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsDoubles$ByteBufferHandle::getVolatile)), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_getVolatile14},
	{"index", "(Ljava/nio/ByteBuffer;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($ByteBuffer*,int32_t)>(&VarHandleByteArrayAsDoubles$ByteBufferHandle::index)), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_index15},
	{"indexRO", "(Ljava/nio/ByteBuffer;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($ByteBuffer*,int32_t)>(&VarHandleByteArrayAsDoubles$ByteBufferHandle::indexRO)), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_indexRO16},
	{"scope", "(Ljava/nio/ByteBuffer;)Ljdk/internal/misc/ScopedMemoryAccess$Scope;", nullptr, $STATIC, $method(static_cast<$ScopedMemoryAccess$Scope*(*)($ByteBuffer*)>(&VarHandleByteArrayAsDoubles$ByteBufferHandle::scope)), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_scope17},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,double)>(&VarHandleByteArrayAsDoubles$ByteBufferHandle::set)), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_set18},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,double)>(&VarHandleByteArrayAsDoubles$ByteBufferHandle::setOpaque)), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_setOpaque19},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,double)>(&VarHandleByteArrayAsDoubles$ByteBufferHandle::setRelease)), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_setRelease20},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,double)>(&VarHandleByteArrayAsDoubles$ByteBufferHandle::setVolatile)), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_setVolatile21},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,double,double)>(&VarHandleByteArrayAsDoubles$ByteBufferHandle::weakCompareAndSet)), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_weakCompareAndSet22},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,double,double)>(&VarHandleByteArrayAsDoubles$ByteBufferHandle::weakCompareAndSetAcquire)), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_weakCompareAndSetAcquire23},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,double,double)>(&VarHandleByteArrayAsDoubles$ByteBufferHandle::weakCompareAndSetPlain)), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_weakCompareAndSetPlain24},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,double,double)>(&VarHandleByteArrayAsDoubles$ByteBufferHandle::weakCompareAndSetRelease)), nullptr, nullptr, _VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodAnnotations_weakCompareAndSetRelease25},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsDoubles$ByteBufferHandle;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsDoubles$ByteBufferHandle;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleByteArrayAsDoubles$ByteBufferHandle_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleByteArrayAsDoubles$ByteBufferHandle", "java.lang.invoke.VarHandleByteArrayAsDoubles", "ByteBufferHandle", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsDoubles", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _VarHandleByteArrayAsDoubles$ByteBufferHandle_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleByteArrayAsDoubles$ByteBufferHandle",
	"java.lang.invoke.VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle",
	nullptr,
	_VarHandleByteArrayAsDoubles$ByteBufferHandle_FieldInfo_,
	_VarHandleByteArrayAsDoubles$ByteBufferHandle_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleByteArrayAsDoubles$ByteBufferHandle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleByteArrayAsDoubles"
};

$Object* allocate$VarHandleByteArrayAsDoubles$ByteBufferHandle($Class* clazz) {
	return $of($alloc(VarHandleByteArrayAsDoubles$ByteBufferHandle));
}

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
	$init($Double);
	$init($Integer);
	return $nc(at)->accessModeType($ByteBuffer::class$, $Double::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

int32_t VarHandleByteArrayAsDoubles$ByteBufferHandle::index($ByteBuffer* bb, int32_t index) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$init($VarHandleByteArrayAsDoubles);
	$var($MemorySegmentProxy, segmentProxy, $nc($VarHandleByteArrayAsDoubles::NIO_ACCESS)->bufferSegment(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	return $Preconditions::checkIndex(index, $nc($MethodHandleStatics::UNSAFE)->getInt(bb, $VarHandleByteArrayBase::BUFFER_LIMIT) - 7, ($BiFunction*)nullptr);
}

$ScopedMemoryAccess$Scope* VarHandleByteArrayAsDoubles$ByteBufferHandle::scope($ByteBuffer* bb) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$init($VarHandleByteArrayAsDoubles);
	$var($MemorySegmentProxy, segmentProxy, $nc($VarHandleByteArrayAsDoubles::NIO_ACCESS)->bufferSegment(bb));
	return segmentProxy != nullptr ? $nc(segmentProxy)->scope() : ($ScopedMemoryAccess$Scope*)nullptr;
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
	if (((int64_t)(address & (uint64_t)(int64_t)7)) != 0) {
		$throw($($VarHandleByteArrayBase::newIllegalStateExceptionForMisalignedAccess(index)));
	}
	return address;
}

double VarHandleByteArrayAsDoubles$ByteBufferHandle::get($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = ((int64_t)VarHandleByteArrayAsDoubles$ByteBufferHandle::index(bb, index));
	int64_t rawValue = $nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->getLongUnaligned(var$0, var$1, var$2 + $nc($MethodHandleStatics::UNSAFE)->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS), $nc(handle)->be);
	return $Double::longBitsToDouble(rawValue);
}

void VarHandleByteArrayAsDoubles$ByteBufferHandle::set($VarHandle* ob, Object$* obb, int32_t index, double value) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$3 = ((int64_t)indexRO(bb, index));
	int64_t var$2 = var$3 + $nc($MethodHandleStatics::UNSAFE)->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS);
	$nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->putLongUnaligned(var$0, var$1, var$2, $Double::doubleToRawLongBits(value), $nc(handle)->be);
}

double VarHandleByteArrayAsDoubles$ByteBufferHandle::getVolatile($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->compareAndSetLong(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, value));
}

double VarHandleByteArrayAsDoubles$ByteBufferHandle::compareAndExchange($VarHandle* ob, Object$* obb, int32_t index, double expected, double value) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsDoubles::convEndian(handle->be, expected);
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->compareAndExchangeLong(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsDoubles::convEndian(handle->be, value)));
}

double VarHandleByteArrayAsDoubles$ByteBufferHandle::compareAndExchangeAcquire($VarHandle* ob, Object$* obb, int32_t index, double expected, double value) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsDoubles::convEndian(handle->be, expected);
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->compareAndExchangeLongAcquire(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsDoubles::convEndian(handle->be, value)));
}

double VarHandleByteArrayAsDoubles$ByteBufferHandle::compareAndExchangeRelease($VarHandle* ob, Object$* obb, int32_t index, double expected, double value) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsDoubles::convEndian(handle->be, expected);
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->compareAndExchangeLongRelease(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsDoubles::convEndian(handle->be, value)));
}

bool VarHandleByteArrayAsDoubles$ByteBufferHandle::weakCompareAndSetPlain($VarHandle* ob, Object$* obb, int32_t index, double expected, double value) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLongPlain(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsDoubles$ByteBufferHandle::weakCompareAndSet($VarHandle* ob, Object$* obb, int32_t index, double expected, double value) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLong(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsDoubles$ByteBufferHandle::weakCompareAndSetAcquire($VarHandle* ob, Object$* obb, int32_t index, double expected, double value) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLongAcquire(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsDoubles$ByteBufferHandle::weakCompareAndSetRelease($VarHandle* ob, Object$* obb, int32_t index, double expected, double value) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLongRelease(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, value));
}

double VarHandleByteArrayAsDoubles$ByteBufferHandle::getAndSet($VarHandle* ob, Object$* obb, int32_t index, double value) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->getAndSetLong(var$0, var$1, var$2, $VarHandleByteArrayAsDoubles::convEndian(handle->be, value)));
}

double VarHandleByteArrayAsDoubles$ByteBufferHandle::getAndSetAcquire($VarHandle* ob, Object$* obb, int32_t index, double value) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->getAndSetLongAcquire(var$0, var$1, var$2, $VarHandleByteArrayAsDoubles::convEndian(handle->be, value)));
}

double VarHandleByteArrayAsDoubles$ByteBufferHandle::getAndSetRelease($VarHandle* ob, Object$* obb, int32_t index, double value) {
	$init(VarHandleByteArrayAsDoubles$ByteBufferHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsDoubles$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsDoubles$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsDoubles);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	return $VarHandleByteArrayAsDoubles::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS)->getAndSetLongRelease(var$0, var$1, var$2, $VarHandleByteArrayAsDoubles::convEndian(handle->be, value)));
}

void clinit$VarHandleByteArrayAsDoubles$ByteBufferHandle($Class* class$) {
	$load($ByteBuffer);
	$init($Double);
	$init($Integer);
	$assignStatic(VarHandleByteArrayAsDoubles$ByteBufferHandle::FORM, $new($VarForm, VarHandleByteArrayAsDoubles$ByteBufferHandle::class$, $ByteBuffer::class$, $Double::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleByteArrayAsDoubles$ByteBufferHandle::VarHandleByteArrayAsDoubles$ByteBufferHandle() {
}

$Class* VarHandleByteArrayAsDoubles$ByteBufferHandle::load$($String* name, bool initialize) {
	$loadClass(VarHandleByteArrayAsDoubles$ByteBufferHandle, name, initialize, &_VarHandleByteArrayAsDoubles$ByteBufferHandle_ClassInfo_, clinit$VarHandleByteArrayAsDoubles$ByteBufferHandle, allocate$VarHandleByteArrayAsDoubles$ByteBufferHandle);
	return class$;
}

$Class* VarHandleByteArrayAsDoubles$ByteBufferHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java