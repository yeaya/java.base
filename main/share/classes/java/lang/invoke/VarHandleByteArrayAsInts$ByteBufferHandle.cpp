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
using $VarHandleByteArrayAsInts = ::java::lang::invoke::VarHandleByteArrayAsInts;
using $VarHandleByteArrayAsInts$ByteArrayViewVarHandle = ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle;
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

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_address3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_compareAndExchange4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_compareAndExchangeAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_compareAndExchangeRelease6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_compareAndSet7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_get8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAcquire9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndAdd10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndAddAcquire11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndAddConvEndianWithCAS12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndAddRelease13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndBitwiseAnd14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndBitwiseAndAcquire15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndBitwiseAndConvEndianWithCAS16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndBitwiseAndRelease17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndBitwiseOr18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndBitwiseOrAcquire19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndBitwiseOrConvEndianWithCAS20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndBitwiseOrRelease21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndBitwiseXor22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndBitwiseXorAcquire23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndBitwiseXorConvEndianWithCAS24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndBitwiseXorRelease25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndSet26[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndSetAcquire27[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndSetRelease28[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getOpaque29[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getVolatile30[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_index31[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_indexRO32[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_scope33[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_set34[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_setOpaque35[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_setRelease36[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_setVolatile37[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_weakCompareAndSet38[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_weakCompareAndSetAcquire39[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_weakCompareAndSetPlain40[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_weakCompareAndSetRelease41[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleByteArrayAsInts$ByteBufferHandle_FieldInfo_[] = {
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsInts$ByteBufferHandle, FORM)},
	{}
};

$MethodInfo _VarHandleByteArrayAsInts$ByteBufferHandle_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, 0, $method(static_cast<void(VarHandleByteArrayAsInts$ByteBufferHandle::*)(bool)>(&VarHandleByteArrayAsInts$ByteBufferHandle::init$))},
	{"<init>", "(ZZ)V", nullptr, $PRIVATE, $method(static_cast<void(VarHandleByteArrayAsInts$ByteBufferHandle::*)(bool,bool)>(&VarHandleByteArrayAsInts$ByteBufferHandle::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"address", "(Ljava/nio/ByteBuffer;I)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($ByteBuffer*,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::address)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_address3},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::compareAndExchange)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_compareAndExchange4},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::compareAndExchangeAcquire)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_compareAndExchangeAcquire5},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::compareAndExchangeRelease)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_compareAndExchangeRelease6},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int32_t,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::compareAndSet)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_compareAndSet7},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::get)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_get8},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::getAcquire)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAcquire9},
	{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::getAndAdd)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndAdd10},
	{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::getAndAddAcquire)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndAddAcquire11},
	{"getAndAddConvEndianWithCAS", "(Ljava/nio/ByteBuffer;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($ByteBuffer*,int32_t,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::getAndAddConvEndianWithCAS)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndAddConvEndianWithCAS12},
	{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::getAndAddRelease)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndAddRelease13},
	{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::getAndBitwiseAnd)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndBitwiseAnd14},
	{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::getAndBitwiseAndAcquire)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndBitwiseAndAcquire15},
	{"getAndBitwiseAndConvEndianWithCAS", "(Ljava/nio/ByteBuffer;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($ByteBuffer*,int32_t,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::getAndBitwiseAndConvEndianWithCAS)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndBitwiseAndConvEndianWithCAS16},
	{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::getAndBitwiseAndRelease)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndBitwiseAndRelease17},
	{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::getAndBitwiseOr)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndBitwiseOr18},
	{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::getAndBitwiseOrAcquire)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndBitwiseOrAcquire19},
	{"getAndBitwiseOrConvEndianWithCAS", "(Ljava/nio/ByteBuffer;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($ByteBuffer*,int32_t,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::getAndBitwiseOrConvEndianWithCAS)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndBitwiseOrConvEndianWithCAS20},
	{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::getAndBitwiseOrRelease)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndBitwiseOrRelease21},
	{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::getAndBitwiseXor)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndBitwiseXor22},
	{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::getAndBitwiseXorAcquire)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndBitwiseXorAcquire23},
	{"getAndBitwiseXorConvEndianWithCAS", "(Ljava/nio/ByteBuffer;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($ByteBuffer*,int32_t,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::getAndBitwiseXorConvEndianWithCAS)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndBitwiseXorConvEndianWithCAS24},
	{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::getAndBitwiseXorRelease)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndBitwiseXorRelease25},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::getAndSet)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndSet26},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::getAndSetAcquire)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndSetAcquire27},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::getAndSetRelease)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getAndSetRelease28},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::getOpaque)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getOpaque29},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::getVolatile)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_getVolatile30},
	{"index", "(Ljava/nio/ByteBuffer;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($ByteBuffer*,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::index)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_index31},
	{"indexRO", "(Ljava/nio/ByteBuffer;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($ByteBuffer*,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::indexRO)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_indexRO32},
	{"scope", "(Ljava/nio/ByteBuffer;)Ljdk/internal/misc/ScopedMemoryAccess$Scope;", nullptr, $STATIC, $method(static_cast<$ScopedMemoryAccess$Scope*(*)($ByteBuffer*)>(&VarHandleByteArrayAsInts$ByteBufferHandle::scope)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_scope33},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::set)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_set34},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::setOpaque)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_setOpaque35},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::setRelease)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_setRelease36},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::setVolatile)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_setVolatile37},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int32_t,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::weakCompareAndSet)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_weakCompareAndSet38},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int32_t,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::weakCompareAndSetAcquire)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_weakCompareAndSetAcquire39},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int32_t,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::weakCompareAndSetPlain)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_weakCompareAndSetPlain40},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int32_t,int32_t)>(&VarHandleByteArrayAsInts$ByteBufferHandle::weakCompareAndSetRelease)), nullptr, nullptr, _VarHandleByteArrayAsInts$ByteBufferHandle_MethodAnnotations_weakCompareAndSetRelease41},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsInts$ByteBufferHandle;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsInts$ByteBufferHandle;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleByteArrayAsInts$ByteBufferHandle_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleByteArrayAsInts$ByteBufferHandle", "java.lang.invoke.VarHandleByteArrayAsInts", "ByteBufferHandle", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleByteArrayAsInts$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsInts", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _VarHandleByteArrayAsInts$ByteBufferHandle_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleByteArrayAsInts$ByteBufferHandle",
	"java.lang.invoke.VarHandleByteArrayAsInts$ByteArrayViewVarHandle",
	nullptr,
	_VarHandleByteArrayAsInts$ByteBufferHandle_FieldInfo_,
	_VarHandleByteArrayAsInts$ByteBufferHandle_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleByteArrayAsInts$ByteBufferHandle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleByteArrayAsInts"
};

$Object* allocate$VarHandleByteArrayAsInts$ByteBufferHandle($Class* clazz) {
	return $of($alloc(VarHandleByteArrayAsInts$ByteBufferHandle));
}

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
	$init($Integer);
	return $nc(at)->accessModeType($ByteBuffer::class$, $Integer::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::index($ByteBuffer* bb, int32_t index) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$init($VarHandleByteArrayAsInts);
	$var($MemorySegmentProxy, segmentProxy, $nc($VarHandleByteArrayAsInts::NIO_ACCESS)->bufferSegment(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	return $Preconditions::checkIndex(index, $nc($MethodHandleStatics::UNSAFE)->getInt(bb, $VarHandleByteArrayBase::BUFFER_LIMIT) - 3, ($BiFunction*)nullptr);
}

$ScopedMemoryAccess$Scope* VarHandleByteArrayAsInts$ByteBufferHandle::scope($ByteBuffer* bb) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$init($VarHandleByteArrayAsInts);
	$var($MemorySegmentProxy, segmentProxy, $nc($VarHandleByteArrayAsInts::NIO_ACCESS)->bufferSegment(bb));
	return segmentProxy != nullptr ? $nc(segmentProxy)->scope() : ($ScopedMemoryAccess$Scope*)nullptr;
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
	if (((int64_t)(address & (uint64_t)(int64_t)3)) != 0) {
		$throw($($VarHandleByteArrayBase::newIllegalStateExceptionForMisalignedAccess(index)));
	}
	return address;
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::get($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = ((int64_t)VarHandleByteArrayAsInts$ByteBufferHandle::index(bb, index));
	return $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->getIntUnaligned(var$0, var$1, var$2 + $nc($MethodHandleStatics::UNSAFE)->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS), $nc(handle)->be);
}

void VarHandleByteArrayAsInts$ByteBufferHandle::set($VarHandle* ob, Object$* obb, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = ((int64_t)indexRO(bb, index));
	$nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->putIntUnaligned(var$0, var$1, var$2 + $nc($MethodHandleStatics::UNSAFE)->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS), value, $nc(handle)->be);
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::getVolatile($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->compareAndSetInt(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, value));
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::compareAndExchange($VarHandle* ob, Object$* obb, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsInts::convEndian(handle->be, expected);
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->compareAndExchangeInt(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsInts::convEndian(handle->be, value)));
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::compareAndExchangeAcquire($VarHandle* ob, Object$* obb, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsInts::convEndian(handle->be, expected);
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->compareAndExchangeIntAcquire(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsInts::convEndian(handle->be, value)));
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::compareAndExchangeRelease($VarHandle* ob, Object$* obb, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsInts::convEndian(handle->be, expected);
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->compareAndExchangeIntRelease(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsInts::convEndian(handle->be, value)));
}

bool VarHandleByteArrayAsInts$ByteBufferHandle::weakCompareAndSetPlain($VarHandle* ob, Object$* obb, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->weakCompareAndSetIntPlain(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsInts$ByteBufferHandle::weakCompareAndSet($VarHandle* ob, Object$* obb, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->weakCompareAndSetInt(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsInts$ByteBufferHandle::weakCompareAndSetAcquire($VarHandle* ob, Object$* obb, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->weakCompareAndSetIntAcquire(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsInts$ByteBufferHandle::weakCompareAndSetRelease($VarHandle* ob, Object$* obb, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int32_t var$3 = $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->weakCompareAndSetIntRelease(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, value));
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::getAndSet($VarHandle* ob, Object$* obb, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->getAndSetInt(var$0, var$1, var$2, $VarHandleByteArrayAsInts::convEndian(handle->be, value)));
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::getAndSetAcquire($VarHandle* ob, Object$* obb, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->getAndSetIntAcquire(var$0, var$1, var$2, $VarHandleByteArrayAsInts::convEndian(handle->be, value)));
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::getAndSetRelease($VarHandle* ob, Object$* obb, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsInts$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsInts);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS)->getAndSetIntRelease(var$0, var$1, var$2, $VarHandleByteArrayAsInts::convEndian(handle->be, value)));
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::getAndAdd($VarHandle* ob, Object$* obb, int32_t index, int32_t delta) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
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
	} while (!$nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetInt(base, offset, nativeExpectedValue, $Integer::reverseBytes(expectedValue + delta)));
	return expectedValue;
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::getAndBitwiseOr($VarHandle* ob, Object$* obb, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
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
	} while (!$nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetInt(base, offset, nativeExpectedValue, $Integer::reverseBytes(expectedValue | value)));
	return expectedValue;
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::getAndBitwiseAnd($VarHandle* ob, Object$* obb, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
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
	} while (!$nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetInt(base, offset, nativeExpectedValue, $Integer::reverseBytes((int32_t)(expectedValue & (uint32_t)value))));
	return expectedValue;
}

int32_t VarHandleByteArrayAsInts$ByteBufferHandle::getAndBitwiseXor($VarHandle* ob, Object$* obb, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ByteBufferHandle);
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
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
	} while (!$nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetInt(base, offset, nativeExpectedValue, $Integer::reverseBytes(expectedValue ^ value)));
	return expectedValue;
}

void clinit$VarHandleByteArrayAsInts$ByteBufferHandle($Class* class$) {
	$load($ByteBuffer);
	$init($Integer);
	$assignStatic(VarHandleByteArrayAsInts$ByteBufferHandle::FORM, $new($VarForm, VarHandleByteArrayAsInts$ByteBufferHandle::class$, $ByteBuffer::class$, $Integer::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleByteArrayAsInts$ByteBufferHandle::VarHandleByteArrayAsInts$ByteBufferHandle() {
}

$Class* VarHandleByteArrayAsInts$ByteBufferHandle::load$($String* name, bool initialize) {
	$loadClass(VarHandleByteArrayAsInts$ByteBufferHandle, name, initialize, &_VarHandleByteArrayAsInts$ByteBufferHandle_ClassInfo_, clinit$VarHandleByteArrayAsInts$ByteBufferHandle, allocate$VarHandleByteArrayAsInts$ByteBufferHandle);
	return class$;
}

$Class* VarHandleByteArrayAsInts$ByteBufferHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java