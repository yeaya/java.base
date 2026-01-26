#include <java/lang/invoke/VarHandleByteArrayAsLongs$ArrayHandle.h>

#include <java/io/Serializable.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsLongs$ByteArrayViewVarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsLongs.h>
#include <java/lang/invoke/VarHandleByteArrayBase.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/util/Preconditions.h>
#include <jcpp.h>

#undef ARRAY_BYTE_BASE_OFFSET
#undef BE
#undef FORM
#undef OOBEF
#undef TYPE
#undef UNSAFE

using $Serializable = ::java::io::Serializable;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;
using $VarHandleByteArrayAsLongs = ::java::lang::invoke::VarHandleByteArrayAsLongs;
using $VarHandleByteArrayAsLongs$ByteArrayViewVarHandle = ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle;
using $VarHandleByteArrayBase = ::java::lang::invoke::VarHandleByteArrayBase;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Preconditions = ::jdk::internal::util::Preconditions;

namespace java {
	namespace lang {
		namespace invoke {

class VarHandleByteArrayAsLongs$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException : public $Function {
	$class(VarHandleByteArrayAsLongs$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $of($new($ArrayIndexOutOfBoundsException, $cast($String, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<VarHandleByteArrayAsLongs$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo VarHandleByteArrayAsLongs$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(VarHandleByteArrayAsLongs$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsLongs$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, apply, $Object*, Object$*)},
	{}
};
$ClassInfo VarHandleByteArrayAsLongs$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.invoke.VarHandleByteArrayAsLongs$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* VarHandleByteArrayAsLongs$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::load$($String* name, bool initialize) {
	$loadClass(VarHandleByteArrayAsLongs$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* VarHandleByteArrayAsLongs$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::class$ = nullptr;

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_address3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_compareAndExchange4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_compareAndExchangeAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_compareAndExchangeRelease6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_compareAndSet7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_get8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAcquire9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndAdd10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndAddAcquire11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndAddConvEndianWithCAS12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndAddRelease13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndBitwiseAnd14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndBitwiseAndAcquire15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndBitwiseAndConvEndianWithCAS16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndBitwiseAndRelease17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndBitwiseOr18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndBitwiseOrAcquire19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndBitwiseOrConvEndianWithCAS20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndBitwiseOrRelease21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndBitwiseXor22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndBitwiseXorAcquire23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndBitwiseXorConvEndianWithCAS24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndBitwiseXorRelease25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndSet26[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndSetAcquire27[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndSetRelease28[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getOpaque29[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getVolatile30[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_index31[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_set32[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_setOpaque33[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_setRelease34[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_setVolatile35[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_weakCompareAndSet36[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_weakCompareAndSetAcquire37[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_weakCompareAndSetPlain38[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_weakCompareAndSetRelease39[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleByteArrayAsLongs$ArrayHandle_FieldInfo_[] = {
	{"OOBEF", "Ljava/util/function/BiFunction;", "Ljava/util/function/BiFunction<Ljava/lang/String;Ljava/util/List<Ljava/lang/Number;>;Ljava/lang/ArrayIndexOutOfBoundsException;>;", $PRIVATE | $STATIC | $FINAL, $staticField(VarHandleByteArrayAsLongs$ArrayHandle, OOBEF)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsLongs$ArrayHandle, FORM)},
	{}
};

$MethodInfo _VarHandleByteArrayAsLongs$ArrayHandle_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, 0, $method(VarHandleByteArrayAsLongs$ArrayHandle, init$, void, bool)},
	{"<init>", "(ZZ)V", nullptr, $PRIVATE, $method(VarHandleByteArrayAsLongs$ArrayHandle, init$, void, bool, bool)},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleByteArrayAsLongs$ArrayHandle, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
	{"address", "([BI)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, address, int64_t, $bytes*, int32_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_address3},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, compareAndExchange, int64_t, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_compareAndExchange4},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, compareAndExchangeAcquire, int64_t, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_compareAndExchangeAcquire5},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, compareAndExchangeRelease, int64_t, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_compareAndExchangeRelease6},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, compareAndSet, bool, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_compareAndSet7},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, get, int64_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_get8},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAcquire, int64_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAcquire9},
	{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndAdd, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndAdd10},
	{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndAddAcquire, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndAddAcquire11},
	{"getAndAddConvEndianWithCAS", "([BIJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndAddConvEndianWithCAS, int64_t, $bytes*, int32_t, int64_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndAddConvEndianWithCAS12},
	{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndAddRelease, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndAddRelease13},
	{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndBitwiseAnd, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndBitwiseAnd14},
	{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndBitwiseAndAcquire, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndBitwiseAndAcquire15},
	{"getAndBitwiseAndConvEndianWithCAS", "([BIJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndBitwiseAndConvEndianWithCAS, int64_t, $bytes*, int32_t, int64_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndBitwiseAndConvEndianWithCAS16},
	{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndBitwiseAndRelease, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndBitwiseAndRelease17},
	{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndBitwiseOr, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndBitwiseOr18},
	{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndBitwiseOrAcquire, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndBitwiseOrAcquire19},
	{"getAndBitwiseOrConvEndianWithCAS", "([BIJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndBitwiseOrConvEndianWithCAS, int64_t, $bytes*, int32_t, int64_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndBitwiseOrConvEndianWithCAS20},
	{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndBitwiseOrRelease, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndBitwiseOrRelease21},
	{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndBitwiseXor, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndBitwiseXor22},
	{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndBitwiseXorAcquire, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndBitwiseXorAcquire23},
	{"getAndBitwiseXorConvEndianWithCAS", "([BIJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndBitwiseXorConvEndianWithCAS, int64_t, $bytes*, int32_t, int64_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndBitwiseXorConvEndianWithCAS24},
	{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndBitwiseXorRelease, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndBitwiseXorRelease25},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndSet, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndSet26},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndSetAcquire, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndSetAcquire27},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getAndSetRelease, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getAndSetRelease28},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getOpaque, int64_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getOpaque29},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, getVolatile, int64_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_getVolatile30},
	{"index", "([BI)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, index, int32_t, $bytes*, int32_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_index31},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, set, void, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_set32},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, setOpaque, void, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_setOpaque33},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, setRelease, void, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_setRelease34},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, setVolatile, void, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_setVolatile35},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, weakCompareAndSet, bool, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_weakCompareAndSet36},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_weakCompareAndSetAcquire37},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_weakCompareAndSetPlain38},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs$ArrayHandle, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, _VarHandleByteArrayAsLongs$ArrayHandle_MethodAnnotations_weakCompareAndSetRelease39},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsLongs$ArrayHandle;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsLongs$ArrayHandle, withInvokeBehavior, VarHandleByteArrayAsLongs$ArrayHandle*)},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsLongs$ArrayHandle;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsLongs$ArrayHandle, withInvokeExactBehavior, VarHandleByteArrayAsLongs$ArrayHandle*)},
	{}
};

$InnerClassInfo _VarHandleByteArrayAsLongs$ArrayHandle_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleByteArrayAsLongs$ArrayHandle", "java.lang.invoke.VarHandleByteArrayAsLongs", "ArrayHandle", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleByteArrayAsLongs$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsLongs", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _VarHandleByteArrayAsLongs$ArrayHandle_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleByteArrayAsLongs$ArrayHandle",
	"java.lang.invoke.VarHandleByteArrayAsLongs$ByteArrayViewVarHandle",
	nullptr,
	_VarHandleByteArrayAsLongs$ArrayHandle_FieldInfo_,
	_VarHandleByteArrayAsLongs$ArrayHandle_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleByteArrayAsLongs$ArrayHandle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleByteArrayAsLongs"
};

$Object* allocate$VarHandleByteArrayAsLongs$ArrayHandle($Class* clazz) {
	return $of($alloc(VarHandleByteArrayAsLongs$ArrayHandle));
}

$BiFunction* VarHandleByteArrayAsLongs$ArrayHandle::OOBEF = nullptr;
$VarForm* VarHandleByteArrayAsLongs$ArrayHandle::FORM = nullptr;

void VarHandleByteArrayAsLongs$ArrayHandle::init$(bool be) {
	VarHandleByteArrayAsLongs$ArrayHandle::init$(be, false);
}

void VarHandleByteArrayAsLongs$ArrayHandle::init$(bool be, bool exact) {
	$VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::init$(VarHandleByteArrayAsLongs$ArrayHandle::FORM, be, exact);
}

VarHandleByteArrayAsLongs$ArrayHandle* VarHandleByteArrayAsLongs$ArrayHandle::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsLongs$ArrayHandle, this->be, true);
}

VarHandleByteArrayAsLongs$ArrayHandle* VarHandleByteArrayAsLongs$ArrayHandle::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsLongs$ArrayHandle, this->be, false);
}

$MethodType* VarHandleByteArrayAsLongs$ArrayHandle::accessModeTypeUncached($VarHandle$AccessType* at) {
	$load($bytes);
	$init($Long);
	$init($Integer);
	return $nc(at)->accessModeType($getClass($bytes), $Long::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

int32_t VarHandleByteArrayAsLongs$ArrayHandle::index($bytes* ba, int32_t index) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	return $Preconditions::checkIndex(index, $nc(ba)->length - 7, VarHandleByteArrayAsLongs$ArrayHandle::OOBEF);
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::address($bytes* ba, int32_t index) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$init($Unsafe);
	int64_t address = ((int64_t)index) + $Unsafe::ARRAY_BYTE_BASE_OFFSET;
	if (((int64_t)(address & (uint64_t)(int64_t)7)) != 0) {
		$throw($($VarHandleByteArrayBase::newIllegalStateExceptionForMisalignedAccess(index)));
	}
	return address;
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::get($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$init($Unsafe);
	return $nc($MethodHandleStatics::UNSAFE)->getLongUnaligned(ba, ((int64_t)VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index)) + $Unsafe::ARRAY_BYTE_BASE_OFFSET, $nc(handle)->be);
}

void VarHandleByteArrayAsLongs$ArrayHandle::set($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$init($Unsafe);
	$nc($MethodHandleStatics::UNSAFE)->putLongUnaligned(ba, ((int64_t)VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index)) + $Unsafe::ARRAY_BYTE_BASE_OFFSET, value, $nc(handle)->be);
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getVolatile($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getLongVolatile(ba, address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsLongs$ArrayHandle::setVolatile($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putLongVolatile(var$0, var$1, $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, value));
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAcquire($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getLongAcquire(ba, address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsLongs$ArrayHandle::setRelease($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putLongRelease(var$0, var$1, $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, value));
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getOpaque($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getLongOpaque(ba, address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsLongs$ArrayHandle::setOpaque($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putLongOpaque(var$0, var$1, $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsLongs$ArrayHandle::compareAndSet($VarHandle* ob, Object$* oba, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	int64_t var$2 = $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetLong(var$0, var$1, var$2, $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, value));
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::compareAndExchange($VarHandle* ob, Object$* oba, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	int64_t var$2 = $VarHandleByteArrayAsLongs::convEndian(handle->be, expected);
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeLong(var$0, var$1, var$2, $VarHandleByteArrayAsLongs::convEndian(handle->be, value)));
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::compareAndExchangeAcquire($VarHandle* ob, Object$* oba, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	int64_t var$2 = $VarHandleByteArrayAsLongs::convEndian(handle->be, expected);
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeLongAcquire(var$0, var$1, var$2, $VarHandleByteArrayAsLongs::convEndian(handle->be, value)));
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::compareAndExchangeRelease($VarHandle* ob, Object$* oba, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	int64_t var$2 = $VarHandleByteArrayAsLongs::convEndian(handle->be, expected);
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeLongRelease(var$0, var$1, var$2, $VarHandleByteArrayAsLongs::convEndian(handle->be, value)));
}

bool VarHandleByteArrayAsLongs$ArrayHandle::weakCompareAndSetPlain($VarHandle* ob, Object$* oba, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	int64_t var$2 = $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLongPlain(var$0, var$1, var$2, $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsLongs$ArrayHandle::weakCompareAndSet($VarHandle* ob, Object$* oba, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	int64_t var$2 = $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLong(var$0, var$1, var$2, $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsLongs$ArrayHandle::weakCompareAndSetAcquire($VarHandle* ob, Object$* oba, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	int64_t var$2 = $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLongAcquire(var$0, var$1, var$2, $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsLongs$ArrayHandle::weakCompareAndSetRelease($VarHandle* ob, Object$* oba, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	int64_t var$2 = $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLongRelease(var$0, var$1, var$2, $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, value));
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndSet($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getAndSetLong(var$0, var$1, $VarHandleByteArrayAsLongs::convEndian(handle->be, value)));
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndSetAcquire($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getAndSetLongAcquire(var$0, var$1, $VarHandleByteArrayAsLongs::convEndian(handle->be, value)));
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndSetRelease($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	return $VarHandleByteArrayAsLongs::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getAndSetLongRelease(var$0, var$1, $VarHandleByteArrayAsLongs::convEndian(handle->be, value)));
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndAdd($VarHandle* ob, Object$* oba, int32_t index, int64_t delta) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndAddLong(ba, address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index)), delta);
	} else {
		return getAndAddConvEndianWithCAS(ba, index, delta);
	}
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndAddAcquire($VarHandle* ob, Object$* oba, int32_t index, int64_t delta) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndAddLongAcquire(ba, address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index)), delta);
	} else {
		return getAndAddConvEndianWithCAS(ba, index, delta);
	}
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndAddRelease($VarHandle* ob, Object$* oba, int32_t index, int64_t delta) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndAddLongRelease(ba, address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index)), delta);
	} else {
		return getAndAddConvEndianWithCAS(ba, index, delta);
	}
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndAddConvEndianWithCAS($bytes* ba, int32_t index, int64_t delta) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	int64_t nativeExpectedValue = 0;
	int64_t expectedValue = 0;
	int64_t offset = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	do {
		$init($MethodHandleStatics);
		nativeExpectedValue = $nc($MethodHandleStatics::UNSAFE)->getLongVolatile(ba, offset);
		expectedValue = $Long::reverseBytes(nativeExpectedValue);
	$init($MethodHandleStatics);
	} while (!$nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLong(ba, offset, nativeExpectedValue, $Long::reverseBytes(expectedValue + delta)));
	return expectedValue;
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndBitwiseOr($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrLong(ba, address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseOrConvEndianWithCAS(ba, index, value);
	}
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndBitwiseOrRelease($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrLongRelease(ba, address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseOrConvEndianWithCAS(ba, index, value);
	}
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndBitwiseOrAcquire($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrLongAcquire(ba, address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseOrConvEndianWithCAS(ba, index, value);
	}
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndBitwiseOrConvEndianWithCAS($bytes* ba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	int64_t nativeExpectedValue = 0;
	int64_t expectedValue = 0;
	int64_t offset = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	do {
		$init($MethodHandleStatics);
		nativeExpectedValue = $nc($MethodHandleStatics::UNSAFE)->getLongVolatile(ba, offset);
		expectedValue = $Long::reverseBytes(nativeExpectedValue);
	$init($MethodHandleStatics);
	} while (!$nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLong(ba, offset, nativeExpectedValue, $Long::reverseBytes(expectedValue | value)));
	return expectedValue;
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndBitwiseAnd($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndLong(ba, address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseAndConvEndianWithCAS(ba, index, value);
	}
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndBitwiseAndRelease($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndLongRelease(ba, address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseAndConvEndianWithCAS(ba, index, value);
	}
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndBitwiseAndAcquire($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndLongAcquire(ba, address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseAndConvEndianWithCAS(ba, index, value);
	}
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndBitwiseAndConvEndianWithCAS($bytes* ba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	int64_t nativeExpectedValue = 0;
	int64_t expectedValue = 0;
	int64_t offset = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	do {
		$init($MethodHandleStatics);
		nativeExpectedValue = $nc($MethodHandleStatics::UNSAFE)->getLongVolatile(ba, offset);
		expectedValue = $Long::reverseBytes(nativeExpectedValue);
	$init($MethodHandleStatics);
	} while (!$nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLong(ba, offset, nativeExpectedValue, $Long::reverseBytes((int64_t)(expectedValue & (uint64_t)value))));
	return expectedValue;
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndBitwiseXor($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorLong(ba, address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseXorConvEndianWithCAS(ba, index, value);
	}
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndBitwiseXorRelease($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorLongRelease(ba, address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseXorConvEndianWithCAS(ba, index, value);
	}
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndBitwiseXorAcquire($VarHandle* ob, Object$* oba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsLongs$ArrayHandle, handle, $cast(VarHandleByteArrayAsLongs$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorLongAcquire(ba, address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseXorConvEndianWithCAS(ba, index, value);
	}
}

int64_t VarHandleByteArrayAsLongs$ArrayHandle::getAndBitwiseXorConvEndianWithCAS($bytes* ba, int32_t index, int64_t value) {
	$init(VarHandleByteArrayAsLongs$ArrayHandle);
	int64_t nativeExpectedValue = 0;
	int64_t expectedValue = 0;
	int64_t offset = address(ba, VarHandleByteArrayAsLongs$ArrayHandle::index(ba, index));
	do {
		$init($MethodHandleStatics);
		nativeExpectedValue = $nc($MethodHandleStatics::UNSAFE)->getLongVolatile(ba, offset);
		expectedValue = $Long::reverseBytes(nativeExpectedValue);
	$init($MethodHandleStatics);
	} while (!$nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLong(ba, offset, nativeExpectedValue, $Long::reverseBytes(expectedValue ^ value)));
	return expectedValue;
}

void clinit$VarHandleByteArrayAsLongs$ArrayHandle($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(VarHandleByteArrayAsLongs$ArrayHandle::OOBEF, $Preconditions::outOfBoundsExceptionFormatter(static_cast<$Function*>($$new(VarHandleByteArrayAsLongs$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException))));
	$load($bytes);
	$init($Long);
	$init($Integer);
	$assignStatic(VarHandleByteArrayAsLongs$ArrayHandle::FORM, $new($VarForm, VarHandleByteArrayAsLongs$ArrayHandle::class$, $getClass($bytes), $Long::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleByteArrayAsLongs$ArrayHandle::VarHandleByteArrayAsLongs$ArrayHandle() {
}

$Class* VarHandleByteArrayAsLongs$ArrayHandle::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(VarHandleByteArrayAsLongs$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::classInfo$.name)) {
			return VarHandleByteArrayAsLongs$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::load$(name, initialize);
		}
	}
	$loadClass(VarHandleByteArrayAsLongs$ArrayHandle, name, initialize, &_VarHandleByteArrayAsLongs$ArrayHandle_ClassInfo_, clinit$VarHandleByteArrayAsLongs$ArrayHandle, allocate$VarHandleByteArrayAsLongs$ArrayHandle);
	return class$;
}

$Class* VarHandleByteArrayAsLongs$ArrayHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java