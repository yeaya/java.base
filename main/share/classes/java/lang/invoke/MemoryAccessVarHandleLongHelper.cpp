#include <java/lang/invoke/MemoryAccessVarHandleLongHelper.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MemoryAccessVarHandleBase.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope.h>
#include <jdk/internal/misc/ScopedMemoryAccess.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef BE
#undef FORM
#undef SCOPED_MEMORY_ACCESS
#undef TYPE
#undef UNSAFE
#undef VM_ALIGN

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $MemoryAccessVarHandleBase = ::java::lang::invoke::MemoryAccessVarHandleBase;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $ScopedMemoryAccess = ::jdk::internal::misc::ScopedMemoryAccess;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_checkAddress2[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_compareAndExchange3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_compareAndExchangeAcquire4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_compareAndExchangeRelease5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_compareAndSet6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_convEndian7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_get8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAcquire9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndAdd10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndAddAcquire11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndAddConvEndianWithCAS12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndAddRelease13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndBitwiseAnd14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndBitwiseAndAcquire15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndBitwiseAndConvEndianWithCAS16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndBitwiseAndRelease17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndBitwiseOr18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndBitwiseOrAcquire19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndBitwiseOrConvEndianWithCAS20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndBitwiseOrRelease21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndBitwiseXor22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndBitwiseXorAcquire23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndBitwiseXorConvEndianWithCAS24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndBitwiseXorRelease25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndSet26[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndSetAcquire27[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndSetRelease28[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_getOpaque29[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_getVolatile30[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_offset31[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_offsetNoVMAlignCheck32[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_set33[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_setOpaque34[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_setRelease35[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_setVolatile36[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_weakCompareAndSet37[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_weakCompareAndSetAcquire38[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_weakCompareAndSetPlain39[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleLongHelper_MethodAnnotations_weakCompareAndSetRelease40[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _MemoryAccessVarHandleLongHelper_FieldInfo_[] = {
	{"BE", "Z", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleLongHelper, BE)},
	{"SCOPED_MEMORY_ACCESS", "Ljdk/internal/misc/ScopedMemoryAccess;", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleLongHelper, SCOPED_MEMORY_ACCESS)},
	{"VM_ALIGN", "I", nullptr, $STATIC | $FINAL, $constField(MemoryAccessVarHandleLongHelper, VM_ALIGN)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleLongHelper, FORM)},
	{}
};

$MethodInfo _MemoryAccessVarHandleLongHelper_MethodInfo_[] = {
	{"<init>", "(ZZJJZ)V", nullptr, 0, $method(static_cast<void(MemoryAccessVarHandleLongHelper::*)(bool,bool,int64_t,int64_t,bool)>(&MemoryAccessVarHandleLongHelper::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"checkAddress", "(Ljava/lang/Object;JJZ)Ljdk/internal/access/foreign/MemorySegmentProxy;", nullptr, $STATIC, $method(static_cast<$MemorySegmentProxy*(*)(Object$*,int64_t,int64_t,bool)>(&MemoryAccessVarHandleLongHelper::checkAddress)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_checkAddress2},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::compareAndExchange)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_compareAndExchange3},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::compareAndExchangeAcquire)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_compareAndExchangeAcquire4},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::compareAndExchangeRelease)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_compareAndExchangeRelease5},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJJ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int64_t,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::compareAndSet)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_compareAndSet6},
	{"convEndian", "(ZJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(bool,int64_t)>(&MemoryAccessVarHandleLongHelper::convEndian)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_convEndian7},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t)>(&MemoryAccessVarHandleLongHelper::get)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_get8},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t)>(&MemoryAccessVarHandleLongHelper::getAcquire)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAcquire9},
	{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::getAndAdd)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndAdd10},
	{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::getAndAddAcquire)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndAddAcquire11},
	{"getAndAddConvEndianWithCAS", "(Ljdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($MemorySegmentProxy*,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::getAndAddConvEndianWithCAS)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndAddConvEndianWithCAS12},
	{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::getAndAddRelease)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndAddRelease13},
	{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::getAndBitwiseAnd)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndBitwiseAnd14},
	{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::getAndBitwiseAndAcquire)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndBitwiseAndAcquire15},
	{"getAndBitwiseAndConvEndianWithCAS", "(Ljdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($MemorySegmentProxy*,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::getAndBitwiseAndConvEndianWithCAS)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndBitwiseAndConvEndianWithCAS16},
	{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::getAndBitwiseAndRelease)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndBitwiseAndRelease17},
	{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::getAndBitwiseOr)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndBitwiseOr18},
	{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::getAndBitwiseOrAcquire)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndBitwiseOrAcquire19},
	{"getAndBitwiseOrConvEndianWithCAS", "(Ljdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($MemorySegmentProxy*,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::getAndBitwiseOrConvEndianWithCAS)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndBitwiseOrConvEndianWithCAS20},
	{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::getAndBitwiseOrRelease)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndBitwiseOrRelease21},
	{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::getAndBitwiseXor)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndBitwiseXor22},
	{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::getAndBitwiseXorAcquire)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndBitwiseXorAcquire23},
	{"getAndBitwiseXorConvEndianWithCAS", "(Ljdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($MemorySegmentProxy*,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::getAndBitwiseXorConvEndianWithCAS)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndBitwiseXorConvEndianWithCAS24},
	{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::getAndBitwiseXorRelease)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndBitwiseXorRelease25},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::getAndSet)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndSet26},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::getAndSetAcquire)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndSetAcquire27},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::getAndSetRelease)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_getAndSetRelease28},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t)>(&MemoryAccessVarHandleLongHelper::getOpaque)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_getOpaque29},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t)>(&MemoryAccessVarHandleLongHelper::getVolatile)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_getVolatile30},
	{"offset", "(ZLjdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(bool,$MemorySegmentProxy*,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::offset)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_offset31},
	{"offsetNoVMAlignCheck", "(ZLjdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(bool,$MemorySegmentProxy*,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::offsetNoVMAlignCheck)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_offsetNoVMAlignCheck32},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::set)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_set33},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::setOpaque)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_setOpaque34},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::setRelease)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_setRelease35},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::setVolatile)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_setVolatile36},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJJ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int64_t,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::weakCompareAndSet)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_weakCompareAndSet37},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJJ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int64_t,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::weakCompareAndSetAcquire)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_weakCompareAndSetAcquire38},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJJ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int64_t,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::weakCompareAndSetPlain)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_weakCompareAndSetPlain39},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJJ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int64_t,int64_t,int64_t)>(&MemoryAccessVarHandleLongHelper::weakCompareAndSetRelease)), nullptr, nullptr, _MemoryAccessVarHandleLongHelper_MethodAnnotations_weakCompareAndSetRelease40},
	{"withInvokeBehavior", "()Ljava/lang/invoke/MemoryAccessVarHandleLongHelper;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/MemoryAccessVarHandleLongHelper;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MemoryAccessVarHandleLongHelper_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.MemoryAccessVarHandleLongHelper",
	"java.lang.invoke.MemoryAccessVarHandleBase",
	nullptr,
	_MemoryAccessVarHandleLongHelper_FieldInfo_,
	_MemoryAccessVarHandleLongHelper_MethodInfo_
};

$Object* allocate$MemoryAccessVarHandleLongHelper($Class* clazz) {
	return $of($alloc(MemoryAccessVarHandleLongHelper));
}

bool MemoryAccessVarHandleLongHelper::BE = false;
$ScopedMemoryAccess* MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS = nullptr;
$VarForm* MemoryAccessVarHandleLongHelper::FORM = nullptr;

void MemoryAccessVarHandleLongHelper::init$(bool skipAlignmentMaskCheck, bool be, int64_t length, int64_t alignmentMask, bool exact) {
	$MemoryAccessVarHandleBase::init$(MemoryAccessVarHandleLongHelper::FORM, skipAlignmentMaskCheck, be, length, alignmentMask, exact);
}

$MethodType* MemoryAccessVarHandleLongHelper::accessModeTypeUncached($VarHandle$AccessType* accessType) {
	$load($MemorySegmentProxy);
	$init($Long);
	return $nc(accessType)->accessModeType($MemorySegmentProxy::class$, $Long::TYPE, $$new($ClassArray, {$Long::TYPE}));
}

MemoryAccessVarHandleLongHelper* MemoryAccessVarHandleLongHelper::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(MemoryAccessVarHandleLongHelper, this->skipAlignmentMaskCheck, this->be, this->length, this->alignmentMask, true);
}

MemoryAccessVarHandleLongHelper* MemoryAccessVarHandleLongHelper::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(MemoryAccessVarHandleLongHelper, this->skipAlignmentMaskCheck, this->be, this->length, this->alignmentMask, false);
}

int64_t MemoryAccessVarHandleLongHelper::convEndian(bool big, int64_t n) {
	$init(MemoryAccessVarHandleLongHelper);
	return big == MemoryAccessVarHandleLongHelper::BE ? n : $Long::reverseBytes(n);
}

$MemorySegmentProxy* MemoryAccessVarHandleLongHelper::checkAddress(Object$* obb, int64_t offset, int64_t length, bool ro) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemorySegmentProxy, oo, $cast($MemorySegmentProxy, $Objects::requireNonNull(obb)));
	$nc(oo)->checkAccess(offset, length, ro);
	return oo;
}

int64_t MemoryAccessVarHandleLongHelper::offset(bool skipAlignmentMaskCheck, $MemorySegmentProxy* bb, int64_t offset, int64_t alignmentMask) {
	$init(MemoryAccessVarHandleLongHelper);
	int64_t address = offsetNoVMAlignCheck(skipAlignmentMaskCheck, bb, offset, alignmentMask);
	if (((int64_t)(address & (uint64_t)(int64_t)MemoryAccessVarHandleLongHelper::VM_ALIGN)) != 0) {
		$throw($($MemoryAccessVarHandleBase::newIllegalStateExceptionForMisalignedAccess(address)));
	}
	return address;
}

int64_t MemoryAccessVarHandleLongHelper::offsetNoVMAlignCheck(bool skipAlignmentMaskCheck, $MemorySegmentProxy* bb, int64_t offset, int64_t alignmentMask) {
	$init(MemoryAccessVarHandleLongHelper);
	int64_t base = $nc(bb)->unsafeGetOffset();
	int64_t address = base + offset;
	if (skipAlignmentMaskCheck) {
		if (((int64_t)(base & (uint64_t)alignmentMask)) != 0) {
			$throw($($MemoryAccessVarHandleBase::newIllegalStateExceptionForMisalignedAccess(address)));
		}
	} else if (((int64_t)(address & (uint64_t)alignmentMask)) != 0) {
		$throw($($MemoryAccessVarHandleBase::newIllegalStateExceptionForMisalignedAccess(address)));
	}
	return address;
}

int64_t MemoryAccessVarHandleLongHelper::get($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getLongUnaligned(var$0, var$1, offsetNoVMAlignCheck($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), $nc(handle)->be);
}

void MemoryAccessVarHandleLongHelper::set($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	$nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->putLongUnaligned(var$0, var$1, offsetNoVMAlignCheck($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value, $nc(handle)->be);
}

int64_t MemoryAccessVarHandleLongHelper::getVolatile($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getLongVolatile(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleLongHelper::setVolatile($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->putLongVolatile(var$0, var$1, var$2, convEndian($nc(handle)->be, value));
}

int64_t MemoryAccessVarHandleLongHelper::getAcquire($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getLongAcquire(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleLongHelper::setRelease($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->putLongRelease(var$0, var$1, var$2, convEndian($nc(handle)->be, value));
}

int64_t MemoryAccessVarHandleLongHelper::getOpaque($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getLongOpaque(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleLongHelper::setOpaque($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->putLongOpaque(var$0, var$1, var$2, convEndian($nc(handle)->be, value));
}

bool MemoryAccessVarHandleLongHelper::compareAndSet($VarHandle* ob, Object$* obb, int64_t base, int64_t expected, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian($nc(handle)->be, expected);
	return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->compareAndSetLong(var$0, var$1, var$2, var$3, convEndian($nc(handle)->be, value));
}

int64_t MemoryAccessVarHandleLongHelper::compareAndExchange($VarHandle* ob, Object$* obb, int64_t base, int64_t expected, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian(handle->be, expected);
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->compareAndExchangeLong(var$0, var$1, var$2, var$3, convEndian(handle->be, value)));
}

int64_t MemoryAccessVarHandleLongHelper::compareAndExchangeAcquire($VarHandle* ob, Object$* obb, int64_t base, int64_t expected, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian(handle->be, expected);
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->compareAndExchangeLongAcquire(var$0, var$1, var$2, var$3, convEndian(handle->be, value)));
}

int64_t MemoryAccessVarHandleLongHelper::compareAndExchangeRelease($VarHandle* ob, Object$* obb, int64_t base, int64_t expected, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian(handle->be, expected);
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->compareAndExchangeLongRelease(var$0, var$1, var$2, var$3, convEndian(handle->be, value)));
}

bool MemoryAccessVarHandleLongHelper::weakCompareAndSetPlain($VarHandle* ob, Object$* obb, int64_t base, int64_t expected, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian($nc(handle)->be, expected);
	return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLongPlain(var$0, var$1, var$2, var$3, convEndian($nc(handle)->be, value));
}

bool MemoryAccessVarHandleLongHelper::weakCompareAndSet($VarHandle* ob, Object$* obb, int64_t base, int64_t expected, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian($nc(handle)->be, expected);
	return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLong(var$0, var$1, var$2, var$3, convEndian($nc(handle)->be, value));
}

bool MemoryAccessVarHandleLongHelper::weakCompareAndSetAcquire($VarHandle* ob, Object$* obb, int64_t base, int64_t expected, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian($nc(handle)->be, expected);
	return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLongAcquire(var$0, var$1, var$2, var$3, convEndian($nc(handle)->be, value));
}

bool MemoryAccessVarHandleLongHelper::weakCompareAndSetRelease($VarHandle* ob, Object$* obb, int64_t base, int64_t expected, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian($nc(handle)->be, expected);
	return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLongRelease(var$0, var$1, var$2, var$3, convEndian($nc(handle)->be, value));
}

int64_t MemoryAccessVarHandleLongHelper::getAndSet($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getAndSetLong(var$0, var$1, var$2, convEndian(handle->be, value)));
}

int64_t MemoryAccessVarHandleLongHelper::getAndSetAcquire($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getAndSetLongAcquire(var$0, var$1, var$2, convEndian(handle->be, value)));
}

int64_t MemoryAccessVarHandleLongHelper::getAndSetRelease($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getAndSetLongRelease(var$0, var$1, var$2, convEndian(handle->be, value)));
}

int64_t MemoryAccessVarHandleLongHelper::getAndAdd($VarHandle* ob, Object$* obb, int64_t base, int64_t delta) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if ($nc(handle)->be == MemoryAccessVarHandleLongHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getAndAddLong(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), delta);
	} else {
		return getAndAddConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), delta);
	}
}

int64_t MemoryAccessVarHandleLongHelper::getAndAddAcquire($VarHandle* ob, Object$* obb, int64_t base, int64_t delta) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if ($nc(handle)->be == MemoryAccessVarHandleLongHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getAndAddLongAcquire(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), delta);
	} else {
		return getAndAddConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), delta);
	}
}

int64_t MemoryAccessVarHandleLongHelper::getAndAddRelease($VarHandle* ob, Object$* obb, int64_t base, int64_t delta) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if ($nc(handle)->be == MemoryAccessVarHandleLongHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getAndAddLongRelease(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), delta);
	} else {
		return getAndAddConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), delta);
	}
}

int64_t MemoryAccessVarHandleLongHelper::getAndAddConvEndianWithCAS($MemorySegmentProxy* bb, int64_t offset, int64_t delta) {
	$init(MemoryAccessVarHandleLongHelper);
	int64_t nativeExpectedValue = 0;
	int64_t expectedValue = 0;
	$var($Object, base, $nc(bb)->unsafeGetBase());
	$var($ScopedMemoryAccess$Scope, var$0, nullptr);
	$var($Object, var$1, nullptr);
	int64_t var$2 = 0;
	int64_t var$3 = 0;
	do {
		nativeExpectedValue = $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getLongVolatile($(bb->scope()), base, offset);
		expectedValue = $Long::reverseBytes(nativeExpectedValue);
		$assign(var$0, bb->scope());
		$assign(var$1, base);
		var$2 = offset;
		var$3 = nativeExpectedValue;
	} while (!$nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLong(var$0, var$1, var$2, var$3, $Long::reverseBytes(expectedValue + delta)));
	return expectedValue;
}

int64_t MemoryAccessVarHandleLongHelper::getAndBitwiseOr($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if ($nc(handle)->be == MemoryAccessVarHandleLongHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseOrLong(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseOrConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int64_t MemoryAccessVarHandleLongHelper::getAndBitwiseOrRelease($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if ($nc(handle)->be == MemoryAccessVarHandleLongHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseOrLongRelease(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseOrConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int64_t MemoryAccessVarHandleLongHelper::getAndBitwiseOrAcquire($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if ($nc(handle)->be == MemoryAccessVarHandleLongHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseOrLongAcquire(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseOrConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int64_t MemoryAccessVarHandleLongHelper::getAndBitwiseOrConvEndianWithCAS($MemorySegmentProxy* bb, int64_t offset, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	int64_t nativeExpectedValue = 0;
	int64_t expectedValue = 0;
	$var($Object, base, $nc(bb)->unsafeGetBase());
	$var($ScopedMemoryAccess$Scope, var$0, nullptr);
	$var($Object, var$1, nullptr);
	int64_t var$2 = 0;
	int64_t var$3 = 0;
	do {
		nativeExpectedValue = $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getLongVolatile($(bb->scope()), base, offset);
		expectedValue = $Long::reverseBytes(nativeExpectedValue);
		$assign(var$0, bb->scope());
		$assign(var$1, base);
		var$2 = offset;
		var$3 = nativeExpectedValue;
	} while (!$nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLong(var$0, var$1, var$2, var$3, $Long::reverseBytes(expectedValue | value)));
	return expectedValue;
}

int64_t MemoryAccessVarHandleLongHelper::getAndBitwiseAnd($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if ($nc(handle)->be == MemoryAccessVarHandleLongHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseAndLong(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseAndConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int64_t MemoryAccessVarHandleLongHelper::getAndBitwiseAndRelease($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if ($nc(handle)->be == MemoryAccessVarHandleLongHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseAndLongRelease(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseAndConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int64_t MemoryAccessVarHandleLongHelper::getAndBitwiseAndAcquire($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if ($nc(handle)->be == MemoryAccessVarHandleLongHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseAndLongAcquire(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseAndConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int64_t MemoryAccessVarHandleLongHelper::getAndBitwiseAndConvEndianWithCAS($MemorySegmentProxy* bb, int64_t offset, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	int64_t nativeExpectedValue = 0;
	int64_t expectedValue = 0;
	$var($Object, base, $nc(bb)->unsafeGetBase());
	$var($ScopedMemoryAccess$Scope, var$0, nullptr);
	$var($Object, var$1, nullptr);
	int64_t var$2 = 0;
	int64_t var$3 = 0;
	do {
		nativeExpectedValue = $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getLongVolatile($(bb->scope()), base, offset);
		expectedValue = $Long::reverseBytes(nativeExpectedValue);
		$assign(var$0, bb->scope());
		$assign(var$1, base);
		var$2 = offset;
		var$3 = nativeExpectedValue;
	} while (!$nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLong(var$0, var$1, var$2, var$3, $Long::reverseBytes((int64_t)(expectedValue & (uint64_t)value))));
	return expectedValue;
}

int64_t MemoryAccessVarHandleLongHelper::getAndBitwiseXor($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if ($nc(handle)->be == MemoryAccessVarHandleLongHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseXorLong(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseXorConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int64_t MemoryAccessVarHandleLongHelper::getAndBitwiseXorRelease($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if ($nc(handle)->be == MemoryAccessVarHandleLongHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseXorLongRelease(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseXorConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int64_t MemoryAccessVarHandleLongHelper::getAndBitwiseXorAcquire($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if ($nc(handle)->be == MemoryAccessVarHandleLongHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseXorLongAcquire(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseXorConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int64_t MemoryAccessVarHandleLongHelper::getAndBitwiseXorConvEndianWithCAS($MemorySegmentProxy* bb, int64_t offset, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	int64_t nativeExpectedValue = 0;
	int64_t expectedValue = 0;
	$var($Object, base, $nc(bb)->unsafeGetBase());
	$var($ScopedMemoryAccess$Scope, var$0, nullptr);
	$var($Object, var$1, nullptr);
	int64_t var$2 = 0;
	int64_t var$3 = 0;
	do {
		nativeExpectedValue = $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getLongVolatile($(bb->scope()), base, offset);
		expectedValue = $Long::reverseBytes(nativeExpectedValue);
		$assign(var$0, bb->scope());
		$assign(var$1, base);
		var$2 = offset;
		var$3 = nativeExpectedValue;
	} while (!$nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLong(var$0, var$1, var$2, var$3, $Long::reverseBytes(expectedValue ^ value)));
	return expectedValue;
}

void clinit$MemoryAccessVarHandleLongHelper($Class* class$) {
	$init($MethodHandleStatics);
	MemoryAccessVarHandleLongHelper::BE = $nc($MethodHandleStatics::UNSAFE)->isBigEndian();
	$assignStatic(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS, $ScopedMemoryAccess::getScopedMemoryAccess());
	$load($MemorySegmentProxy);
	$init($Long);
	$assignStatic(MemoryAccessVarHandleLongHelper::FORM, $new($VarForm, MemoryAccessVarHandleLongHelper::class$, $MemorySegmentProxy::class$, $Long::TYPE, $$new($ClassArray, {$Long::TYPE})));
}

MemoryAccessVarHandleLongHelper::MemoryAccessVarHandleLongHelper() {
}

$Class* MemoryAccessVarHandleLongHelper::load$($String* name, bool initialize) {
	$loadClass(MemoryAccessVarHandleLongHelper, name, initialize, &_MemoryAccessVarHandleLongHelper_ClassInfo_, clinit$MemoryAccessVarHandleLongHelper, allocate$MemoryAccessVarHandleLongHelper);
	return class$;
}

$Class* MemoryAccessVarHandleLongHelper::class$ = nullptr;

		} // invoke
	} // lang
} // java