#include <java/lang/invoke/VarHandleByteArrayAsInts$ArrayHandle.h>

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
#include <java/lang/invoke/VarHandleByteArrayAsInts$ByteArrayViewVarHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsInts.h>
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
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;
using $VarHandleByteArrayAsInts = ::java::lang::invoke::VarHandleByteArrayAsInts;
using $VarHandleByteArrayAsInts$ByteArrayViewVarHandle = ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle;
using $VarHandleByteArrayBase = ::java::lang::invoke::VarHandleByteArrayBase;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Preconditions = ::jdk::internal::util::Preconditions;

namespace java {
	namespace lang {
		namespace invoke {

class VarHandleByteArrayAsInts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException : public $Function {
	$class(VarHandleByteArrayAsInts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $of($new($ArrayIndexOutOfBoundsException, $cast($String, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<VarHandleByteArrayAsInts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo VarHandleByteArrayAsInts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(VarHandleByteArrayAsInts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsInts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, apply, $Object*, Object$*)},
	{}
};
$ClassInfo VarHandleByteArrayAsInts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.invoke.VarHandleByteArrayAsInts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* VarHandleByteArrayAsInts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::load$($String* name, bool initialize) {
	$loadClass(VarHandleByteArrayAsInts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* VarHandleByteArrayAsInts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::class$ = nullptr;

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_address3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_compareAndExchange4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_compareAndExchangeAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_compareAndExchangeRelease6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_compareAndSet7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_get8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAcquire9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndAdd10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndAddAcquire11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndAddConvEndianWithCAS12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndAddRelease13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndBitwiseAnd14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndBitwiseAndAcquire15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndBitwiseAndConvEndianWithCAS16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndBitwiseAndRelease17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndBitwiseOr18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndBitwiseOrAcquire19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndBitwiseOrConvEndianWithCAS20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndBitwiseOrRelease21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndBitwiseXor22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndBitwiseXorAcquire23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndBitwiseXorConvEndianWithCAS24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndBitwiseXorRelease25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndSet26[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndSetAcquire27[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndSetRelease28[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getOpaque29[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getVolatile30[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_index31[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_set32[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_setOpaque33[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_setRelease34[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_setVolatile35[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_weakCompareAndSet36[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_weakCompareAndSetAcquire37[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_weakCompareAndSetPlain38[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_weakCompareAndSetRelease39[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleByteArrayAsInts$ArrayHandle_FieldInfo_[] = {
	{"OOBEF", "Ljava/util/function/BiFunction;", "Ljava/util/function/BiFunction<Ljava/lang/String;Ljava/util/List<Ljava/lang/Number;>;Ljava/lang/ArrayIndexOutOfBoundsException;>;", $PRIVATE | $STATIC | $FINAL, $staticField(VarHandleByteArrayAsInts$ArrayHandle, OOBEF)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsInts$ArrayHandle, FORM)},
	{}
};

$MethodInfo _VarHandleByteArrayAsInts$ArrayHandle_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, 0, $method(VarHandleByteArrayAsInts$ArrayHandle, init$, void, bool)},
	{"<init>", "(ZZ)V", nullptr, $PRIVATE, $method(VarHandleByteArrayAsInts$ArrayHandle, init$, void, bool, bool)},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleByteArrayAsInts$ArrayHandle, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
	{"address", "([BI)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, address, int64_t, $bytes*, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_address3},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, compareAndExchange, int32_t, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_compareAndExchange4},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, compareAndExchangeAcquire, int32_t, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_compareAndExchangeAcquire5},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, compareAndExchangeRelease, int32_t, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_compareAndExchangeRelease6},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, compareAndSet, bool, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_compareAndSet7},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, get, int32_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_get8},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAcquire, int32_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAcquire9},
	{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndAdd, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndAdd10},
	{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndAddAcquire, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndAddAcquire11},
	{"getAndAddConvEndianWithCAS", "([BII)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndAddConvEndianWithCAS, int32_t, $bytes*, int32_t, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndAddConvEndianWithCAS12},
	{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndAddRelease, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndAddRelease13},
	{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndBitwiseAnd, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndBitwiseAnd14},
	{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndBitwiseAndAcquire, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndBitwiseAndAcquire15},
	{"getAndBitwiseAndConvEndianWithCAS", "([BII)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndBitwiseAndConvEndianWithCAS, int32_t, $bytes*, int32_t, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndBitwiseAndConvEndianWithCAS16},
	{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndBitwiseAndRelease, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndBitwiseAndRelease17},
	{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndBitwiseOr, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndBitwiseOr18},
	{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndBitwiseOrAcquire, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndBitwiseOrAcquire19},
	{"getAndBitwiseOrConvEndianWithCAS", "([BII)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndBitwiseOrConvEndianWithCAS, int32_t, $bytes*, int32_t, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndBitwiseOrConvEndianWithCAS20},
	{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndBitwiseOrRelease, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndBitwiseOrRelease21},
	{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndBitwiseXor, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndBitwiseXor22},
	{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndBitwiseXorAcquire, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndBitwiseXorAcquire23},
	{"getAndBitwiseXorConvEndianWithCAS", "([BII)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndBitwiseXorConvEndianWithCAS, int32_t, $bytes*, int32_t, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndBitwiseXorConvEndianWithCAS24},
	{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndBitwiseXorRelease, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndBitwiseXorRelease25},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndSet, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndSet26},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndSetAcquire, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndSetAcquire27},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getAndSetRelease, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getAndSetRelease28},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getOpaque, int32_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getOpaque29},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, getVolatile, int32_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_getVolatile30},
	{"index", "([BI)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, index, int32_t, $bytes*, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_index31},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, set, void, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_set32},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, setOpaque, void, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_setOpaque33},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, setRelease, void, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_setRelease34},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)V", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, setVolatile, void, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_setVolatile35},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, weakCompareAndSet, bool, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_weakCompareAndSet36},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_weakCompareAndSetAcquire37},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_weakCompareAndSetPlain38},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)Z", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts$ArrayHandle, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, _VarHandleByteArrayAsInts$ArrayHandle_MethodAnnotations_weakCompareAndSetRelease39},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsInts$ArrayHandle;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsInts$ArrayHandle, withInvokeBehavior, VarHandleByteArrayAsInts$ArrayHandle*)},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleByteArrayAsInts$ArrayHandle;", nullptr, $PUBLIC, $virtualMethod(VarHandleByteArrayAsInts$ArrayHandle, withInvokeExactBehavior, VarHandleByteArrayAsInts$ArrayHandle*)},
	{}
};

$InnerClassInfo _VarHandleByteArrayAsInts$ArrayHandle_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleByteArrayAsInts$ArrayHandle", "java.lang.invoke.VarHandleByteArrayAsInts", "ArrayHandle", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleByteArrayAsInts$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsInts", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _VarHandleByteArrayAsInts$ArrayHandle_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleByteArrayAsInts$ArrayHandle",
	"java.lang.invoke.VarHandleByteArrayAsInts$ByteArrayViewVarHandle",
	nullptr,
	_VarHandleByteArrayAsInts$ArrayHandle_FieldInfo_,
	_VarHandleByteArrayAsInts$ArrayHandle_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleByteArrayAsInts$ArrayHandle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleByteArrayAsInts"
};

$Object* allocate$VarHandleByteArrayAsInts$ArrayHandle($Class* clazz) {
	return $of($alloc(VarHandleByteArrayAsInts$ArrayHandle));
}

$BiFunction* VarHandleByteArrayAsInts$ArrayHandle::OOBEF = nullptr;
$VarForm* VarHandleByteArrayAsInts$ArrayHandle::FORM = nullptr;

void VarHandleByteArrayAsInts$ArrayHandle::init$(bool be) {
	VarHandleByteArrayAsInts$ArrayHandle::init$(be, false);
}

void VarHandleByteArrayAsInts$ArrayHandle::init$(bool be, bool exact) {
	$VarHandleByteArrayAsInts$ByteArrayViewVarHandle::init$(VarHandleByteArrayAsInts$ArrayHandle::FORM, be, exact);
}

VarHandleByteArrayAsInts$ArrayHandle* VarHandleByteArrayAsInts$ArrayHandle::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsInts$ArrayHandle, this->be, true);
}

VarHandleByteArrayAsInts$ArrayHandle* VarHandleByteArrayAsInts$ArrayHandle::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleByteArrayAsInts$ArrayHandle, this->be, false);
}

$MethodType* VarHandleByteArrayAsInts$ArrayHandle::accessModeTypeUncached($VarHandle$AccessType* at) {
	$load($bytes);
	$init($Integer);
	return $nc(at)->accessModeType($getClass($bytes), $Integer::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::index($bytes* ba, int32_t index) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	return $Preconditions::checkIndex(index, $nc(ba)->length - 3, VarHandleByteArrayAsInts$ArrayHandle::OOBEF);
}

int64_t VarHandleByteArrayAsInts$ArrayHandle::address($bytes* ba, int32_t index) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$init($Unsafe);
	int64_t address = ((int64_t)index) + $Unsafe::ARRAY_BYTE_BASE_OFFSET;
	if (((int64_t)(address & (uint64_t)(int64_t)3)) != 0) {
		$throw($($VarHandleByteArrayBase::newIllegalStateExceptionForMisalignedAccess(index)));
	}
	return address;
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::get($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$init($Unsafe);
	return $nc($MethodHandleStatics::UNSAFE)->getIntUnaligned(ba, ((int64_t)VarHandleByteArrayAsInts$ArrayHandle::index(ba, index)) + $Unsafe::ARRAY_BYTE_BASE_OFFSET, $nc(handle)->be);
}

void VarHandleByteArrayAsInts$ArrayHandle::set($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$init($Unsafe);
	$nc($MethodHandleStatics::UNSAFE)->putIntUnaligned(ba, ((int64_t)VarHandleByteArrayAsInts$ArrayHandle::index(ba, index)) + $Unsafe::ARRAY_BYTE_BASE_OFFSET, value, $nc(handle)->be);
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getVolatile($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getIntVolatile(ba, address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsInts$ArrayHandle::setVolatile($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putIntVolatile(var$0, var$1, $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, value));
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAcquire($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getIntAcquire(ba, address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsInts$ArrayHandle::setRelease($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putIntRelease(var$0, var$1, $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, value));
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getOpaque($VarHandle* ob, Object$* oba, int32_t index) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getIntOpaque(ba, address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index))));
}

void VarHandleByteArrayAsInts$ArrayHandle::setOpaque($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	$nc($MethodHandleStatics::UNSAFE)->putIntOpaque(var$0, var$1, $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsInts$ArrayHandle::compareAndSet($VarHandle* ob, Object$* oba, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	int32_t var$2 = $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetInt(var$0, var$1, var$2, $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, value));
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::compareAndExchange($VarHandle* ob, Object$* oba, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	int32_t var$2 = $VarHandleByteArrayAsInts::convEndian(handle->be, expected);
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeInt(var$0, var$1, var$2, $VarHandleByteArrayAsInts::convEndian(handle->be, value)));
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::compareAndExchangeAcquire($VarHandle* ob, Object$* oba, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	int32_t var$2 = $VarHandleByteArrayAsInts::convEndian(handle->be, expected);
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeIntAcquire(var$0, var$1, var$2, $VarHandleByteArrayAsInts::convEndian(handle->be, value)));
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::compareAndExchangeRelease($VarHandle* ob, Object$* oba, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	int32_t var$2 = $VarHandleByteArrayAsInts::convEndian(handle->be, expected);
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeIntRelease(var$0, var$1, var$2, $VarHandleByteArrayAsInts::convEndian(handle->be, value)));
}

bool VarHandleByteArrayAsInts$ArrayHandle::weakCompareAndSetPlain($VarHandle* ob, Object$* oba, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	int32_t var$2 = $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetIntPlain(var$0, var$1, var$2, $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsInts$ArrayHandle::weakCompareAndSet($VarHandle* ob, Object$* oba, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	int32_t var$2 = $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetInt(var$0, var$1, var$2, $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsInts$ArrayHandle::weakCompareAndSetAcquire($VarHandle* ob, Object$* oba, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	int32_t var$2 = $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetIntAcquire(var$0, var$1, var$2, $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, value));
}

bool VarHandleByteArrayAsInts$ArrayHandle::weakCompareAndSetRelease($VarHandle* ob, Object$* oba, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	int32_t var$2 = $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, expected);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetIntRelease(var$0, var$1, var$2, $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, value));
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndSet($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getAndSetInt(var$0, var$1, $VarHandleByteArrayAsInts::convEndian(handle->be, value)));
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndSetAcquire($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getAndSetIntAcquire(var$0, var$1, $VarHandleByteArrayAsInts::convEndian(handle->be, value)));
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndSetRelease($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(ba));
	int64_t var$1 = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	return $VarHandleByteArrayAsInts::convEndian($nc(handle)->be, $nc($MethodHandleStatics::UNSAFE)->getAndSetIntRelease(var$0, var$1, $VarHandleByteArrayAsInts::convEndian(handle->be, value)));
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndAdd($VarHandle* ob, Object$* oba, int32_t index, int32_t delta) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndAddInt(ba, address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index)), delta);
	} else {
		return getAndAddConvEndianWithCAS(ba, index, delta);
	}
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndAddAcquire($VarHandle* ob, Object$* oba, int32_t index, int32_t delta) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndAddIntAcquire(ba, address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index)), delta);
	} else {
		return getAndAddConvEndianWithCAS(ba, index, delta);
	}
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndAddRelease($VarHandle* ob, Object$* oba, int32_t index, int32_t delta) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndAddIntRelease(ba, address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index)), delta);
	} else {
		return getAndAddConvEndianWithCAS(ba, index, delta);
	}
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndAddConvEndianWithCAS($bytes* ba, int32_t index, int32_t delta) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	int32_t nativeExpectedValue = 0;
	int32_t expectedValue = 0;
	int64_t offset = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	do {
		$init($MethodHandleStatics);
		nativeExpectedValue = $nc($MethodHandleStatics::UNSAFE)->getIntVolatile(ba, offset);
		expectedValue = $Integer::reverseBytes(nativeExpectedValue);
	$init($MethodHandleStatics);
	} while (!$nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetInt(ba, offset, nativeExpectedValue, $Integer::reverseBytes(expectedValue + delta)));
	return expectedValue;
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndBitwiseOr($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrInt(ba, address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseOrConvEndianWithCAS(ba, index, value);
	}
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndBitwiseOrRelease($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrIntRelease(ba, address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseOrConvEndianWithCAS(ba, index, value);
	}
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndBitwiseOrAcquire($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrIntAcquire(ba, address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseOrConvEndianWithCAS(ba, index, value);
	}
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndBitwiseOrConvEndianWithCAS($bytes* ba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	int32_t nativeExpectedValue = 0;
	int32_t expectedValue = 0;
	int64_t offset = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	do {
		$init($MethodHandleStatics);
		nativeExpectedValue = $nc($MethodHandleStatics::UNSAFE)->getIntVolatile(ba, offset);
		expectedValue = $Integer::reverseBytes(nativeExpectedValue);
	$init($MethodHandleStatics);
	} while (!$nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetInt(ba, offset, nativeExpectedValue, $Integer::reverseBytes(expectedValue | value)));
	return expectedValue;
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndBitwiseAnd($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndInt(ba, address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseAndConvEndianWithCAS(ba, index, value);
	}
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndBitwiseAndRelease($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndIntRelease(ba, address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseAndConvEndianWithCAS(ba, index, value);
	}
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndBitwiseAndAcquire($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndIntAcquire(ba, address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseAndConvEndianWithCAS(ba, index, value);
	}
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndBitwiseAndConvEndianWithCAS($bytes* ba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	int32_t nativeExpectedValue = 0;
	int32_t expectedValue = 0;
	int64_t offset = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	do {
		$init($MethodHandleStatics);
		nativeExpectedValue = $nc($MethodHandleStatics::UNSAFE)->getIntVolatile(ba, offset);
		expectedValue = $Integer::reverseBytes(nativeExpectedValue);
	$init($MethodHandleStatics);
	} while (!$nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetInt(ba, offset, nativeExpectedValue, $Integer::reverseBytes((int32_t)(expectedValue & (uint32_t)value))));
	return expectedValue;
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndBitwiseXor($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorInt(ba, address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseXorConvEndianWithCAS(ba, index, value);
	}
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndBitwiseXorRelease($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorIntRelease(ba, address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseXorConvEndianWithCAS(ba, index, value);
	}
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndBitwiseXorAcquire($VarHandle* ob, Object$* oba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleByteArrayAsInts$ArrayHandle, handle, $cast(VarHandleByteArrayAsInts$ArrayHandle, ob));
	$var($bytes, ba, $cast($bytes, oba));
	$init($VarHandleByteArrayBase);
	if ($nc(handle)->be == $VarHandleByteArrayBase::BE) {
		$init($MethodHandleStatics);
		return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorIntAcquire(ba, address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index)), value);
	} else {
		return getAndBitwiseXorConvEndianWithCAS(ba, index, value);
	}
}

int32_t VarHandleByteArrayAsInts$ArrayHandle::getAndBitwiseXorConvEndianWithCAS($bytes* ba, int32_t index, int32_t value) {
	$init(VarHandleByteArrayAsInts$ArrayHandle);
	int32_t nativeExpectedValue = 0;
	int32_t expectedValue = 0;
	int64_t offset = address(ba, VarHandleByteArrayAsInts$ArrayHandle::index(ba, index));
	do {
		$init($MethodHandleStatics);
		nativeExpectedValue = $nc($MethodHandleStatics::UNSAFE)->getIntVolatile(ba, offset);
		expectedValue = $Integer::reverseBytes(nativeExpectedValue);
	$init($MethodHandleStatics);
	} while (!$nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetInt(ba, offset, nativeExpectedValue, $Integer::reverseBytes(expectedValue ^ value)));
	return expectedValue;
}

void clinit$VarHandleByteArrayAsInts$ArrayHandle($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(VarHandleByteArrayAsInts$ArrayHandle::OOBEF, $Preconditions::outOfBoundsExceptionFormatter(static_cast<$Function*>($$new(VarHandleByteArrayAsInts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException))));
	$load($bytes);
	$init($Integer);
	$assignStatic(VarHandleByteArrayAsInts$ArrayHandle::FORM, $new($VarForm, VarHandleByteArrayAsInts$ArrayHandle::class$, $getClass($bytes), $Integer::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleByteArrayAsInts$ArrayHandle::VarHandleByteArrayAsInts$ArrayHandle() {
}

$Class* VarHandleByteArrayAsInts$ArrayHandle::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(VarHandleByteArrayAsInts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::classInfo$.name)) {
			return VarHandleByteArrayAsInts$ArrayHandle$$Lambda$ArrayIndexOutOfBoundsException::load$(name, initialize);
		}
	}
	$loadClass(VarHandleByteArrayAsInts$ArrayHandle, name, initialize, &_VarHandleByteArrayAsInts$ArrayHandle_ClassInfo_, clinit$VarHandleByteArrayAsInts$ArrayHandle, allocate$VarHandleByteArrayAsInts$ArrayHandle);
	return class$;
}

$Class* VarHandleByteArrayAsInts$ArrayHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java