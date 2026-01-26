#include <java/lang/invoke/MemoryAccessVarHandleIntHelper.h>

#include <java/lang/IllegalStateException.h>
#include <java/lang/invoke/MemoryAccessVarHandleBase.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle.h>
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
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
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

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_checkAddress2[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_compareAndExchange3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_compareAndExchangeAcquire4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_compareAndExchangeRelease5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_compareAndSet6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_convEndian7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_get8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAcquire9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndAdd10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndAddAcquire11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndAddConvEndianWithCAS12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndAddRelease13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndBitwiseAnd14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndBitwiseAndAcquire15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndBitwiseAndConvEndianWithCAS16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndBitwiseAndRelease17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndBitwiseOr18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndBitwiseOrAcquire19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndBitwiseOrConvEndianWithCAS20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndBitwiseOrRelease21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndBitwiseXor22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndBitwiseXorAcquire23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndBitwiseXorConvEndianWithCAS24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndBitwiseXorRelease25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndSet26[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndSetAcquire27[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndSetRelease28[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_getOpaque29[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_getVolatile30[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_offset31[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_offsetNoVMAlignCheck32[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_set33[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_setOpaque34[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_setRelease35[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_setVolatile36[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_weakCompareAndSet37[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_weakCompareAndSetAcquire38[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_weakCompareAndSetPlain39[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleIntHelper_MethodAnnotations_weakCompareAndSetRelease40[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _MemoryAccessVarHandleIntHelper_FieldInfo_[] = {
	{"BE", "Z", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleIntHelper, BE)},
	{"SCOPED_MEMORY_ACCESS", "Ljdk/internal/misc/ScopedMemoryAccess;", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleIntHelper, SCOPED_MEMORY_ACCESS)},
	{"VM_ALIGN", "I", nullptr, $STATIC | $FINAL, $constField(MemoryAccessVarHandleIntHelper, VM_ALIGN)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleIntHelper, FORM)},
	{}
};

$MethodInfo _MemoryAccessVarHandleIntHelper_MethodInfo_[] = {
	{"<init>", "(ZZJJZ)V", nullptr, 0, $method(MemoryAccessVarHandleIntHelper, init$, void, bool, bool, int64_t, int64_t, bool)},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(MemoryAccessVarHandleIntHelper, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
	{"checkAddress", "(Ljava/lang/Object;JJZ)Ljdk/internal/access/foreign/MemorySegmentProxy;", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, checkAddress, $MemorySegmentProxy*, Object$*, int64_t, int64_t, bool), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_checkAddress2},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JII)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, compareAndExchange, int32_t, $VarHandle*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_compareAndExchange3},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JII)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, compareAndExchangeAcquire, int32_t, $VarHandle*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_compareAndExchangeAcquire4},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JII)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, compareAndExchangeRelease, int32_t, $VarHandle*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_compareAndExchangeRelease5},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JII)Z", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, compareAndSet, bool, $VarHandle*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_compareAndSet6},
	{"convEndian", "(ZI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, convEndian, int32_t, bool, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_convEndian7},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, get, int32_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_get8},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAcquire, int32_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAcquire9},
	{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndAdd, int32_t, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndAdd10},
	{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndAddAcquire, int32_t, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndAddAcquire11},
	{"getAndAddConvEndianWithCAS", "(Ljdk/internal/access/foreign/MemorySegmentProxy;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndAddConvEndianWithCAS, int32_t, $MemorySegmentProxy*, int64_t, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndAddConvEndianWithCAS12},
	{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndAddRelease, int32_t, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndAddRelease13},
	{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndBitwiseAnd, int32_t, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndBitwiseAnd14},
	{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndBitwiseAndAcquire, int32_t, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndBitwiseAndAcquire15},
	{"getAndBitwiseAndConvEndianWithCAS", "(Ljdk/internal/access/foreign/MemorySegmentProxy;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndBitwiseAndConvEndianWithCAS, int32_t, $MemorySegmentProxy*, int64_t, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndBitwiseAndConvEndianWithCAS16},
	{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndBitwiseAndRelease, int32_t, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndBitwiseAndRelease17},
	{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndBitwiseOr, int32_t, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndBitwiseOr18},
	{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndBitwiseOrAcquire, int32_t, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndBitwiseOrAcquire19},
	{"getAndBitwiseOrConvEndianWithCAS", "(Ljdk/internal/access/foreign/MemorySegmentProxy;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndBitwiseOrConvEndianWithCAS, int32_t, $MemorySegmentProxy*, int64_t, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndBitwiseOrConvEndianWithCAS20},
	{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndBitwiseOrRelease, int32_t, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndBitwiseOrRelease21},
	{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndBitwiseXor, int32_t, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndBitwiseXor22},
	{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndBitwiseXorAcquire, int32_t, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndBitwiseXorAcquire23},
	{"getAndBitwiseXorConvEndianWithCAS", "(Ljdk/internal/access/foreign/MemorySegmentProxy;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndBitwiseXorConvEndianWithCAS, int32_t, $MemorySegmentProxy*, int64_t, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndBitwiseXorConvEndianWithCAS24},
	{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndBitwiseXorRelease, int32_t, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndBitwiseXorRelease25},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndSet, int32_t, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndSet26},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndSetAcquire, int32_t, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndSetAcquire27},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndSetRelease, int32_t, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_getAndSetRelease28},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getOpaque, int32_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_getOpaque29},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getVolatile, int32_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_getVolatile30},
	{"offset", "(ZLjdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, offset, int64_t, bool, $MemorySegmentProxy*, int64_t, int64_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_offset31},
	{"offsetNoVMAlignCheck", "(ZLjdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, offsetNoVMAlignCheck, int64_t, bool, $MemorySegmentProxy*, int64_t, int64_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_offsetNoVMAlignCheck32},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)V", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, set, void, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_set33},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)V", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, setOpaque, void, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_setOpaque34},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)V", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, setRelease, void, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_setRelease35},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)V", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, setVolatile, void, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_setVolatile36},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JII)Z", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, weakCompareAndSet, bool, $VarHandle*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_weakCompareAndSet37},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JII)Z", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_weakCompareAndSetAcquire38},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JII)Z", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_weakCompareAndSetPlain39},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JII)Z", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, _MemoryAccessVarHandleIntHelper_MethodAnnotations_weakCompareAndSetRelease40},
	{"withInvokeBehavior", "()Ljava/lang/invoke/MemoryAccessVarHandleIntHelper;", nullptr, $PUBLIC, $virtualMethod(MemoryAccessVarHandleIntHelper, withInvokeBehavior, MemoryAccessVarHandleIntHelper*)},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/MemoryAccessVarHandleIntHelper;", nullptr, $PUBLIC, $virtualMethod(MemoryAccessVarHandleIntHelper, withInvokeExactBehavior, MemoryAccessVarHandleIntHelper*)},
	{}
};

$ClassInfo _MemoryAccessVarHandleIntHelper_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.MemoryAccessVarHandleIntHelper",
	"java.lang.invoke.MemoryAccessVarHandleBase",
	nullptr,
	_MemoryAccessVarHandleIntHelper_FieldInfo_,
	_MemoryAccessVarHandleIntHelper_MethodInfo_
};

$Object* allocate$MemoryAccessVarHandleIntHelper($Class* clazz) {
	return $of($alloc(MemoryAccessVarHandleIntHelper));
}

bool MemoryAccessVarHandleIntHelper::BE = false;
$ScopedMemoryAccess* MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS = nullptr;
$VarForm* MemoryAccessVarHandleIntHelper::FORM = nullptr;

void MemoryAccessVarHandleIntHelper::init$(bool skipAlignmentMaskCheck, bool be, int64_t length, int64_t alignmentMask, bool exact) {
	$MemoryAccessVarHandleBase::init$(MemoryAccessVarHandleIntHelper::FORM, skipAlignmentMaskCheck, be, length, alignmentMask, exact);
}

$MethodType* MemoryAccessVarHandleIntHelper::accessModeTypeUncached($VarHandle$AccessType* accessType) {
	$load($MemorySegmentProxy);
	$init($Integer);
	$init($Long);
	return $nc(accessType)->accessModeType($MemorySegmentProxy::class$, $Integer::TYPE, $$new($ClassArray, {$Long::TYPE}));
}

MemoryAccessVarHandleIntHelper* MemoryAccessVarHandleIntHelper::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(MemoryAccessVarHandleIntHelper, this->skipAlignmentMaskCheck, this->be, this->length, this->alignmentMask, true);
}

MemoryAccessVarHandleIntHelper* MemoryAccessVarHandleIntHelper::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(MemoryAccessVarHandleIntHelper, this->skipAlignmentMaskCheck, this->be, this->length, this->alignmentMask, false);
}

int32_t MemoryAccessVarHandleIntHelper::convEndian(bool big, int32_t n) {
	$init(MemoryAccessVarHandleIntHelper);
	return big == MemoryAccessVarHandleIntHelper::BE ? n : $Integer::reverseBytes(n);
}

$MemorySegmentProxy* MemoryAccessVarHandleIntHelper::checkAddress(Object$* obb, int64_t offset, int64_t length, bool ro) {
	$init(MemoryAccessVarHandleIntHelper);
	$var($MemorySegmentProxy, oo, $cast($MemorySegmentProxy, $Objects::requireNonNull(obb)));
	$nc(oo)->checkAccess(offset, length, ro);
	return oo;
}

int64_t MemoryAccessVarHandleIntHelper::offset(bool skipAlignmentMaskCheck, $MemorySegmentProxy* bb, int64_t offset, int64_t alignmentMask) {
	$init(MemoryAccessVarHandleIntHelper);
	int64_t address = offsetNoVMAlignCheck(skipAlignmentMaskCheck, bb, offset, alignmentMask);
	if (((int64_t)(address & (uint64_t)(int64_t)MemoryAccessVarHandleIntHelper::VM_ALIGN)) != 0) {
		$throw($($MemoryAccessVarHandleBase::newIllegalStateExceptionForMisalignedAccess(address)));
	}
	return address;
}

int64_t MemoryAccessVarHandleIntHelper::offsetNoVMAlignCheck(bool skipAlignmentMaskCheck, $MemorySegmentProxy* bb, int64_t offset, int64_t alignmentMask) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
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

int32_t MemoryAccessVarHandleIntHelper::get($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getIntUnaligned(var$0, var$1, offsetNoVMAlignCheck($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), $nc(handle)->be);
}

void MemoryAccessVarHandleIntHelper::set($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	$nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->putIntUnaligned(var$0, var$1, offsetNoVMAlignCheck($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value, $nc(handle)->be);
}

int32_t MemoryAccessVarHandleIntHelper::getVolatile($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getIntVolatile(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleIntHelper::setVolatile($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->putIntVolatile(var$0, var$1, var$2, convEndian($nc(handle)->be, value));
}

int32_t MemoryAccessVarHandleIntHelper::getAcquire($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getIntAcquire(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleIntHelper::setRelease($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->putIntRelease(var$0, var$1, var$2, convEndian($nc(handle)->be, value));
}

int32_t MemoryAccessVarHandleIntHelper::getOpaque($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getIntOpaque(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleIntHelper::setOpaque($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->putIntOpaque(var$0, var$1, var$2, convEndian($nc(handle)->be, value));
}

bool MemoryAccessVarHandleIntHelper::compareAndSet($VarHandle* ob, Object$* obb, int64_t base, int32_t expected, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian($nc(handle)->be, expected);
	return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->compareAndSetInt(var$0, var$1, var$2, var$3, convEndian($nc(handle)->be, value));
}

int32_t MemoryAccessVarHandleIntHelper::compareAndExchange($VarHandle* ob, Object$* obb, int64_t base, int32_t expected, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian(handle->be, expected);
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->compareAndExchangeInt(var$0, var$1, var$2, var$3, convEndian(handle->be, value)));
}

int32_t MemoryAccessVarHandleIntHelper::compareAndExchangeAcquire($VarHandle* ob, Object$* obb, int64_t base, int32_t expected, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian(handle->be, expected);
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->compareAndExchangeIntAcquire(var$0, var$1, var$2, var$3, convEndian(handle->be, value)));
}

int32_t MemoryAccessVarHandleIntHelper::compareAndExchangeRelease($VarHandle* ob, Object$* obb, int64_t base, int32_t expected, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian(handle->be, expected);
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->compareAndExchangeIntRelease(var$0, var$1, var$2, var$3, convEndian(handle->be, value)));
}

bool MemoryAccessVarHandleIntHelper::weakCompareAndSetPlain($VarHandle* ob, Object$* obb, int64_t base, int32_t expected, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian($nc(handle)->be, expected);
	return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetIntPlain(var$0, var$1, var$2, var$3, convEndian($nc(handle)->be, value));
}

bool MemoryAccessVarHandleIntHelper::weakCompareAndSet($VarHandle* ob, Object$* obb, int64_t base, int32_t expected, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian($nc(handle)->be, expected);
	return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetInt(var$0, var$1, var$2, var$3, convEndian($nc(handle)->be, value));
}

bool MemoryAccessVarHandleIntHelper::weakCompareAndSetAcquire($VarHandle* ob, Object$* obb, int64_t base, int32_t expected, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian($nc(handle)->be, expected);
	return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetIntAcquire(var$0, var$1, var$2, var$3, convEndian($nc(handle)->be, value));
}

bool MemoryAccessVarHandleIntHelper::weakCompareAndSetRelease($VarHandle* ob, Object$* obb, int64_t base, int32_t expected, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian($nc(handle)->be, expected);
	return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetIntRelease(var$0, var$1, var$2, var$3, convEndian($nc(handle)->be, value));
}

int32_t MemoryAccessVarHandleIntHelper::getAndSet($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getAndSetInt(var$0, var$1, var$2, convEndian(handle->be, value)));
}

int32_t MemoryAccessVarHandleIntHelper::getAndSetAcquire($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getAndSetIntAcquire(var$0, var$1, var$2, convEndian(handle->be, value)));
}

int32_t MemoryAccessVarHandleIntHelper::getAndSetRelease($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getAndSetIntRelease(var$0, var$1, var$2, convEndian(handle->be, value)));
}

int32_t MemoryAccessVarHandleIntHelper::getAndAdd($VarHandle* ob, Object$* obb, int64_t base, int32_t delta) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if ($nc(handle)->be == MemoryAccessVarHandleIntHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getAndAddInt(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), delta);
	} else {
		return getAndAddConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), delta);
	}
}

int32_t MemoryAccessVarHandleIntHelper::getAndAddAcquire($VarHandle* ob, Object$* obb, int64_t base, int32_t delta) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if ($nc(handle)->be == MemoryAccessVarHandleIntHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getAndAddIntAcquire(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), delta);
	} else {
		return getAndAddConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), delta);
	}
}

int32_t MemoryAccessVarHandleIntHelper::getAndAddRelease($VarHandle* ob, Object$* obb, int64_t base, int32_t delta) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if ($nc(handle)->be == MemoryAccessVarHandleIntHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getAndAddIntRelease(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), delta);
	} else {
		return getAndAddConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), delta);
	}
}

int32_t MemoryAccessVarHandleIntHelper::getAndAddConvEndianWithCAS($MemorySegmentProxy* bb, int64_t offset, int32_t delta) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	int32_t nativeExpectedValue = 0;
	int32_t expectedValue = 0;
	$var($Object, base, $nc(bb)->unsafeGetBase());
	$var($ScopedMemoryAccess$Scope, var$0, nullptr);
	$var($Object, var$1, nullptr);
	int64_t var$2 = 0;
	int32_t var$3 = 0;
	do {
		nativeExpectedValue = $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getIntVolatile($(bb->scope()), base, offset);
		expectedValue = $Integer::reverseBytes(nativeExpectedValue);
		$assign(var$0, bb->scope());
		$assign(var$1, base);
		var$2 = offset;
		var$3 = nativeExpectedValue;
	} while (!$nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetInt(var$0, var$1, var$2, var$3, $Integer::reverseBytes(expectedValue + delta)));
	return expectedValue;
}

int32_t MemoryAccessVarHandleIntHelper::getAndBitwiseOr($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if ($nc(handle)->be == MemoryAccessVarHandleIntHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseOrInt(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseOrConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int32_t MemoryAccessVarHandleIntHelper::getAndBitwiseOrRelease($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if ($nc(handle)->be == MemoryAccessVarHandleIntHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseOrIntRelease(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseOrConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int32_t MemoryAccessVarHandleIntHelper::getAndBitwiseOrAcquire($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if ($nc(handle)->be == MemoryAccessVarHandleIntHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseOrIntAcquire(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseOrConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int32_t MemoryAccessVarHandleIntHelper::getAndBitwiseOrConvEndianWithCAS($MemorySegmentProxy* bb, int64_t offset, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	int32_t nativeExpectedValue = 0;
	int32_t expectedValue = 0;
	$var($Object, base, $nc(bb)->unsafeGetBase());
	$var($ScopedMemoryAccess$Scope, var$0, nullptr);
	$var($Object, var$1, nullptr);
	int64_t var$2 = 0;
	int32_t var$3 = 0;
	do {
		nativeExpectedValue = $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getIntVolatile($(bb->scope()), base, offset);
		expectedValue = $Integer::reverseBytes(nativeExpectedValue);
		$assign(var$0, bb->scope());
		$assign(var$1, base);
		var$2 = offset;
		var$3 = nativeExpectedValue;
	} while (!$nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetInt(var$0, var$1, var$2, var$3, $Integer::reverseBytes(expectedValue | value)));
	return expectedValue;
}

int32_t MemoryAccessVarHandleIntHelper::getAndBitwiseAnd($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if ($nc(handle)->be == MemoryAccessVarHandleIntHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseAndInt(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseAndConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int32_t MemoryAccessVarHandleIntHelper::getAndBitwiseAndRelease($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if ($nc(handle)->be == MemoryAccessVarHandleIntHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseAndIntRelease(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseAndConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int32_t MemoryAccessVarHandleIntHelper::getAndBitwiseAndAcquire($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if ($nc(handle)->be == MemoryAccessVarHandleIntHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseAndIntAcquire(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseAndConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int32_t MemoryAccessVarHandleIntHelper::getAndBitwiseAndConvEndianWithCAS($MemorySegmentProxy* bb, int64_t offset, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	int32_t nativeExpectedValue = 0;
	int32_t expectedValue = 0;
	$var($Object, base, $nc(bb)->unsafeGetBase());
	$var($ScopedMemoryAccess$Scope, var$0, nullptr);
	$var($Object, var$1, nullptr);
	int64_t var$2 = 0;
	int32_t var$3 = 0;
	do {
		nativeExpectedValue = $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getIntVolatile($(bb->scope()), base, offset);
		expectedValue = $Integer::reverseBytes(nativeExpectedValue);
		$assign(var$0, bb->scope());
		$assign(var$1, base);
		var$2 = offset;
		var$3 = nativeExpectedValue;
	} while (!$nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetInt(var$0, var$1, var$2, var$3, $Integer::reverseBytes((int32_t)(expectedValue & (uint32_t)value))));
	return expectedValue;
}

int32_t MemoryAccessVarHandleIntHelper::getAndBitwiseXor($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if ($nc(handle)->be == MemoryAccessVarHandleIntHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseXorInt(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseXorConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int32_t MemoryAccessVarHandleIntHelper::getAndBitwiseXorRelease($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if ($nc(handle)->be == MemoryAccessVarHandleIntHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseXorIntRelease(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseXorConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int32_t MemoryAccessVarHandleIntHelper::getAndBitwiseXorAcquire($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if ($nc(handle)->be == MemoryAccessVarHandleIntHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseXorIntAcquire(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseXorConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int32_t MemoryAccessVarHandleIntHelper::getAndBitwiseXorConvEndianWithCAS($MemorySegmentProxy* bb, int64_t offset, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalCurrentObjectStackCache();
	int32_t nativeExpectedValue = 0;
	int32_t expectedValue = 0;
	$var($Object, base, $nc(bb)->unsafeGetBase());
	$var($ScopedMemoryAccess$Scope, var$0, nullptr);
	$var($Object, var$1, nullptr);
	int64_t var$2 = 0;
	int32_t var$3 = 0;
	do {
		nativeExpectedValue = $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getIntVolatile($(bb->scope()), base, offset);
		expectedValue = $Integer::reverseBytes(nativeExpectedValue);
		$assign(var$0, bb->scope());
		$assign(var$1, base);
		var$2 = offset;
		var$3 = nativeExpectedValue;
	} while (!$nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetInt(var$0, var$1, var$2, var$3, $Integer::reverseBytes(expectedValue ^ value)));
	return expectedValue;
}

void clinit$MemoryAccessVarHandleIntHelper($Class* class$) {
	$init($MethodHandleStatics);
	MemoryAccessVarHandleIntHelper::BE = $nc($MethodHandleStatics::UNSAFE)->isBigEndian();
	$assignStatic(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS, $ScopedMemoryAccess::getScopedMemoryAccess());
	$load($MemorySegmentProxy);
	$init($Integer);
	$init($Long);
	$assignStatic(MemoryAccessVarHandleIntHelper::FORM, $new($VarForm, MemoryAccessVarHandleIntHelper::class$, $MemorySegmentProxy::class$, $Integer::TYPE, $$new($ClassArray, {$Long::TYPE})));
}

MemoryAccessVarHandleIntHelper::MemoryAccessVarHandleIntHelper() {
}

$Class* MemoryAccessVarHandleIntHelper::load$($String* name, bool initialize) {
	$loadClass(MemoryAccessVarHandleIntHelper, name, initialize, &_MemoryAccessVarHandleIntHelper_ClassInfo_, clinit$MemoryAccessVarHandleIntHelper, allocate$MemoryAccessVarHandleIntHelper);
	return class$;
}

$Class* MemoryAccessVarHandleIntHelper::class$ = nullptr;

		} // invoke
	} // lang
} // java