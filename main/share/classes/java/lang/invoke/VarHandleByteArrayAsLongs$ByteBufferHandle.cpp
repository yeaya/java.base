#include <java/lang/invoke/VarHandleByteArrayAsLongs$ByteBufferHandle.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsLongs$ByteArrayViewVarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsLongs.h>
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
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;
using $VarHandleByteArrayAsLongs = ::java::lang::invoke::VarHandleByteArrayAsLongs;
using $VarHandleByteArrayAsLongs$ByteArrayViewVarHandle = ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle;
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

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_address3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_compareAndExchange4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_compareAndExchangeAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_compareAndExchangeRelease6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_compareAndSet7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_get8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAcquire9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndAdd10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndAddAcquire11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndAddConvEndianWithCAS12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndAddRelease13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndBitwiseAnd14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndBitwiseAndAcquire15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndBitwiseAndConvEndianWithCAS16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndBitwiseAndRelease17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndBitwiseOr18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndBitwiseOrAcquire19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndBitwiseOrConvEndianWithCAS20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndBitwiseOrRelease21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndBitwiseXor22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndBitwiseXorAcquire23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndBitwiseXorConvEndianWithCAS24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndBitwiseXorRelease25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndSet26[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndSetAcquire27[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndSetRelease28[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getOpaque29[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getVolatile30[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_index31[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_indexRO32[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_scope33[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_set34[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_setOpaque35[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_setRelease36[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_setVolatile37[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_weakCompareAndSet38[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_weakCompareAndSetAcquire39[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_weakCompareAndSetPlain40[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_weakCompareAndSetRelease41[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleByteArrayAsLongs$ByteBufferHandle_FieldInfo_[] = {
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsLongs$ByteBufferHandle, FORM)},
	{}
};

$MethodInfo _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, 0, $method(static_cast<void(VarHandleByteArrayAsLongs$ByteBufferHandle::*)(bool)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::init$))},
	{"<init>", "(ZZ)V", nullptr, $PRIVATE, $method(static_cast<void(VarHandleByteArrayAsLongs$ByteBufferHandle::*)(bool,bool)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"address", "(Ljava/nio/ByteBuffer;I)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($ByteBuffer*,int32_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::address)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_address3},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t,int64_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::compareAndExchange)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_compareAndExchange4},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t,int64_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::compareAndExchangeAcquire)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_compareAndExchangeAcquire5},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t,int64_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::compareAndExchangeRelease)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_compareAndExchangeRelease6},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int64_t,int64_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::compareAndSet)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_compareAndSet7},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::get)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_get8},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::getAcquire)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAcquire9},
	{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::getAndAdd)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndAdd10},
	{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::getAndAddAcquire)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndAddAcquire11},
	{"getAndAddConvEndianWithCAS", "(Ljava/nio/ByteBuffer;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($ByteBuffer*,int32_t,int64_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::getAndAddConvEndianWithCAS)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndAddConvEndianWithCAS12},
	{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::getAndAddRelease)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndAddRelease13},
	{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::getAndBitwiseAnd)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndBitwiseAnd14},
	{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::getAndBitwiseAndAcquire)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndBitwiseAndAcquire15},
	{"getAndBitwiseAndConvEndianWithCAS", "(Ljava/nio/ByteBuffer;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($ByteBuffer*,int32_t,int64_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::getAndBitwiseAndConvEndianWithCAS)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndBitwiseAndConvEndianWithCAS16},
	{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::getAndBitwiseAndRelease)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndBitwiseAndRelease17},
	{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::getAndBitwiseOr)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndBitwiseOr18},
	{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::getAndBitwiseOrAcquire)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndBitwiseOrAcquire19},
	{"getAndBitwiseOrConvEndianWithCAS", "(Ljava/nio/ByteBuffer;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($ByteBuffer*,int32_t,int64_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::getAndBitwiseOrConvEndianWithCAS)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndBitwiseOrConvEndianWithCAS20},
	{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::getAndBitwiseOrRelease)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndBitwiseOrRelease21},
	{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::getAndBitwiseXor)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndBitwiseXor22},
	{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::getAndBitwiseXorAcquire)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndBitwiseXorAcquire23},
	{"getAndBitwiseXorConvEndianWithCAS", "(Ljava/nio/ByteBuffer;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($ByteBuffer*,int32_t,int64_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::getAndBitwiseXorConvEndianWithCAS)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndBitwiseXorConvEndianWithCAS24},
	{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::getAndBitwiseXorRelease)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndBitwiseXorRelease25},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::getAndSet)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndSet26},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::getAndSetAcquire)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndSetAcquire27},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::getAndSetRelease)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getAndSetRelease28},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::getOpaque)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getOpaque29},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::getVolatile)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_getVolatile30},
	{"index", "(Ljava/nio/ByteBuffer;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($ByteBuffer*,int32_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::index)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_index31},
	{"indexRO", "(Ljava/nio/ByteBuffer;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($ByteBuffer*,int32_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::indexRO)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_indexRO32},
	{"scope", "(Ljava/nio/ByteBuffer;)Ljdk/internal/misc/ScopedMemoryAccess$Scope;", nullptr, $STATIC, $method(static_cast<$ScopedMemoryAccess$Scope*(*)($ByteBuffer*)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::scope)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_scope33},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::set)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_set34},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::setOpaque)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_setOpaque35},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::setRelease)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_setRelease36},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::setVolatile)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_setVolatile37},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int64_t,int64_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::weakCompareAndSet)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_weakCompareAndSet38},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int64_t,int64_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::weakCompareAndSetAcquire)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_weakCompareAndSetAcquire39},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int64_t,int64_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::weakCompareAndSetPlain)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_weakCompareAndSetPlain40},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int64_t,int64_t)>(&VarHandleByteArrayAsLongs$ByteBufferHandle::weakCompareAndSetRelease)), nullptr, nullptr, _VarHandleByteArrayAsLongs$ByteBufferHandle_MethodAnnotations_weakCompareAndSetRelease41},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsLongs$ByteBufferHandle;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsLongs$ByteBufferHandle;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleByteArrayAsLongs$ByteBufferHandle_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleByteArrayAsLongs$ByteBufferHandle", "java.lang.invoke.VarHandleByteArrayAsLongs", "ByteBufferHandle", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleByteArrayAsLongs$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsLongs", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _VarHandleByteArrayAsLongs$ByteBufferHandle_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleByteArrayAsLongs$ByteBufferHandle",
	"java.lang.invoke.VarHandleByteArrayAsLongs$ByteArrayViewVarHandle",
	nullptr,
	_VarHandleByteArrayAsLongs$ByteBufferHandle_FieldInfo_,
	_VarHandleByteArrayAsLongs$ByteBufferHandle_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleByteArrayAsLongs$ByteBufferHandle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleByteArrayAsLongs"
};

$Object* allocate$VarHandleByteArrayAsLongs$ByteBufferHandle($Class* clazz) {
	return $of($alloc(VarHandleByteArrayAsLongs$ByteBufferHandle));
}

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
	$init($Long);
	$init($Integer);
	return $nc(at)->accessModeType($ByteBuffer::class$, $Long::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

int32_t VarHandleByteArrayAsLongs$ByteBufferHandle::index($ByteBuffer* bb, int32_t index) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$init($VarHandleByteArrayAsLongs);
	$var($MemorySegmentProxy, segmentProxy, $nc($VarHandleByteArrayAsLongs::NIO_ACCESS)->bufferSegment(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	return $Preconditions::checkIndex(index, $nc($MethodHandleStatics::UNSAFE)->getInt(bb, $VarHandleByteArrayBase::BUFFER_LIMIT) - 7, ($BiFunction*)nullptr);
}

$ScopedMemoryAccess$Scope* VarHandleByteArrayAsLongs$ByteBufferHandle::scope($ByteBuffer* bb) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$init($VarHandleByteArrayAsLongs);
	$var($MemorySegmentProxy, segmentProxy, $nc($VarHandleByteArrayAsLongs::NIO_ACCESS)->bufferSegment(bb));
	return segmentProxy != nullptr ? $nc(segmentProxy)->scope() : ($ScopedMemoryAccess$Scope*)nullptr;
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
	if (((int64_t)(address & (uint64_t)(int64_t)7)) != 0) {
		$throw($($VarHandleByteArrayBase::newIllegalStateExceptionForMisalignedAccess(index)));
	}
	return address;
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::get($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = ((int64_t)VarHandleByteArrayAsLongs$ByteBufferHandle::index(bb, index));
	return $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->getLongUnaligned(var$0, var$1, var$2 + $nc($MethodHandleStatics::UNSAFE)->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS), $nc(handle)->be);
}

void VarHandleByteArrayAsLongs$ByteBufferHandle::set($VarHandle* ob, Object$* obb, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = ((int64_t)indexRO(bb, index));
	$nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->putLongUnaligned(var$0, var$1, var$2 + $nc($MethodHandleStatics::UNSAFE)->getLong(bb, $VarHandleByteArrayBase::BUFFER_ADDRESS), value, $nc(handle)->be);
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::getVolatile($VarHandle* ob, Object$* obb, int32_t index) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
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
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->compareAndSetLong(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, value));
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::compareAndExchange($VarHandle* ob, Object$* obb, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsLongs::convEndian(handle->be, expected);
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->compareAndExchangeLong(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsLongs::convEndian(handle->be, value)));
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::compareAndExchangeAcquire($VarHandle* ob, Object$* obb, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsLongs::convEndian(handle->be, expected);
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->compareAndExchangeLongAcquire(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsLongs::convEndian(handle->be, value)));
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::compareAndExchangeRelease($VarHandle* ob, Object$* obb, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsLongs::convEndian(handle->be, expected);
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->compareAndExchangeLongRelease(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsLongs::convEndian(handle->be, value)));
}

bool VarHandleByteArrayAsLongs$ByteBufferHandle::weakCompareAndSetPlain($VarHandle* ob, Object$* obb, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLongPlain(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsLongs$ByteBufferHandle::weakCompareAndSet($VarHandle* ob, Object$* obb, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLong(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsLongs$ByteBufferHandle::weakCompareAndSetAcquire($VarHandle* ob, Object$* obb, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLongAcquire(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsLongs$ByteBufferHandle::weakCompareAndSetRelease($VarHandle* ob, Object$* obb, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	int64_t var$3 = $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, expected);
	return $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLongRelease(var$0, var$1, var$2, var$3, $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, value));
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::getAndSet($VarHandle* ob, Object$* obb, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->getAndSetLong(var$0, var$1, var$2, $VarHandleByteArrayAsLongs::convEndian(handle->be, value)));
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::getAndSetAcquire($VarHandle* ob, Object$* obb, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->getAndSetLongAcquire(var$0, var$1, var$2, $VarHandleByteArrayAsLongs::convEndian(handle->be, value)));
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::getAndSetRelease($VarHandle* ob, Object$* obb, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
	$var(VarHandleByteArrayAsLongs$ByteBufferHandle, handle, $cast(VarHandleByteArrayAsLongs$ByteBufferHandle, ob));
	$var($ByteBuffer, bb, $cast($ByteBuffer, $Objects::requireNonNull(obb)));
	$init($VarHandleByteArrayAsLongs);
	$var($ScopedMemoryAccess$Scope, var$0, scope(bb));
	$init($MethodHandleStatics);
	$init($VarHandleByteArrayBase);
	$var($Object, var$1, $nc($MethodHandleStatics::UNSAFE)->getReference(bb, $VarHandleByteArrayBase::BYTE_BUFFER_HB));
	int64_t var$2 = address(bb, indexRO(bb, index));
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS)->getAndSetLongRelease(var$0, var$1, var$2, $VarHandleByteArrayAsLongs::convEndian(handle->be, value)));
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::getAndAdd($VarHandle* ob, Object$* obb, int32_t index, int64_t delta) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
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
	} while (!$nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLong(base, offset, nativeExpectedValue, $Long::reverseBytes(expectedValue + delta)));
	return expectedValue;
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::getAndBitwiseOr($VarHandle* ob, Object$* obb, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
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
	} while (!$nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLong(base, offset, nativeExpectedValue, $Long::reverseBytes(expectedValue | value)));
	return expectedValue;
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::getAndBitwiseAnd($VarHandle* ob, Object$* obb, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
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
	} while (!$nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLong(base, offset, nativeExpectedValue, $Long::reverseBytes((int64_t)(expectedValue & (uint64_t)value))));
	return expectedValue;
}

int64_t VarHandleByteArrayAsLongs$ByteBufferHandle::getAndBitwiseXor($VarHandle* ob, Object$* obb, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ByteBufferHandle);
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
	} while (!$nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLong(base, offset, nativeExpectedValue, $Long::reverseBytes(expectedValue ^ value)));
	return expectedValue;
}

void clinit$VarHandleByteArrayAsLongs$ByteBufferHandle($Class* class$) {
	$load($ByteBuffer);
	$init($Long);
	$init($Integer);
	$assignStatic(VarHandleByteArrayAsLongs$ByteBufferHandle::FORM, $new($VarForm, VarHandleByteArrayAsLongs$ByteBufferHandle::class$, $ByteBuffer::class$, $Long::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleByteArrayAsLongs$ByteBufferHandle::VarHandleByteArrayAsLongs$ByteBufferHandle() {
}

$Class* VarHandleByteArrayAsLongs$ByteBufferHandle::load$($String* name, bool initialize) {
	$loadClass(VarHandleByteArrayAsLongs$ByteBufferHandle, name, initialize, &_VarHandleByteArrayAsLongs$ByteBufferHandle_ClassInfo_, clinit$VarHandleByteArrayAsLongs$ByteBufferHandle, allocate$VarHandleByteArrayAsLongs$ByteBufferHandle);
	return class$;
}

$Class* VarHandleByteArrayAsLongs$ByteBufferHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java