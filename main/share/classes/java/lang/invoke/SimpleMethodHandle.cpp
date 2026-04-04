#include <java/lang/invoke/SimpleMethodHandle.h>
#include <java/lang/Error.h>
#include <java/lang/invoke/BoundMethodHandle$SpeciesData.h>
#include <java/lang/invoke/BoundMethodHandle.h>
#include <java/lang/invoke/LambdaForm$BasicType.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

#undef BMH_SPECIES
#undef D_TYPE_NUM
#undef F_TYPE_NUM
#undef I_TYPE_NUM
#undef J_TYPE_NUM

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoundMethodHandle = ::java::lang::invoke::BoundMethodHandle;
using $BoundMethodHandle$SpeciesData = ::java::lang::invoke::BoundMethodHandle$SpeciesData;
using $LambdaForm = ::java::lang::invoke::LambdaForm;
using $LambdaForm$BasicType = ::java::lang::invoke::LambdaForm$BasicType;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;

namespace java {
	namespace lang {
		namespace invoke {

$BoundMethodHandle$SpeciesData* SimpleMethodHandle::BMH_SPECIES = nullptr;

void SimpleMethodHandle::init$($MethodType* type, $LambdaForm* form) {
	$BoundMethodHandle::init$(type, form);
}

$BoundMethodHandle* SimpleMethodHandle::make($MethodType* type, $LambdaForm* form) {
	$init(SimpleMethodHandle);
	return $new(SimpleMethodHandle, type, form);
}

$BoundMethodHandle$SpeciesData* SimpleMethodHandle::speciesData() {
	return SimpleMethodHandle::BMH_SPECIES;
}

$BoundMethodHandle* SimpleMethodHandle::copyWith($MethodType* mt, $LambdaForm* lf) {
	return make(mt, lf);
}

$Object* SimpleMethodHandle::internalProperties() {
	return $of($str({"\n& Class="_s, $($of(this)->getClass()->getSimpleName())}));
}

$BoundMethodHandle* SimpleMethodHandle::copyWithExtendL($MethodType* mt, $LambdaForm* lf, Object$* narg) {
	return $BoundMethodHandle::bindSingle(mt, lf, narg);
}

$BoundMethodHandle* SimpleMethodHandle::copyWithExtendI($MethodType* mt, $LambdaForm* lf, int32_t narg) {
	$useLocalObjectStack();
	try {
		$init($LambdaForm$BasicType);
		return $cast($BoundMethodHandle, $$nc($$nc($nc(SimpleMethodHandle::BMH_SPECIES)->extendWith($LambdaForm$BasicType::I_TYPE_NUM))->factory())->invokeBasic($$new($ObjectArray, {mt, lf, $$of(narg)})));
	} catch ($Throwable& ex) {
		$throw($($MethodHandleStatics::uncaughtException(ex)));
	}
	$shouldNotReachHere();
}

$BoundMethodHandle* SimpleMethodHandle::copyWithExtendJ($MethodType* mt, $LambdaForm* lf, int64_t narg) {
	$useLocalObjectStack();
	try {
		$init($LambdaForm$BasicType);
		return $cast($BoundMethodHandle, $$nc($$nc($nc(SimpleMethodHandle::BMH_SPECIES)->extendWith($LambdaForm$BasicType::J_TYPE_NUM))->factory())->invokeBasic($$new($ObjectArray, {mt, lf, $$of(narg)})));
	} catch ($Throwable& ex) {
		$throw($($MethodHandleStatics::uncaughtException(ex)));
	}
	$shouldNotReachHere();
}

$BoundMethodHandle* SimpleMethodHandle::copyWithExtendF($MethodType* mt, $LambdaForm* lf, float narg) {
	$useLocalObjectStack();
	try {
		$init($LambdaForm$BasicType);
		return $cast($BoundMethodHandle, $$nc($$nc($nc(SimpleMethodHandle::BMH_SPECIES)->extendWith($LambdaForm$BasicType::F_TYPE_NUM))->factory())->invokeBasic($$new($ObjectArray, {mt, lf, $$of(narg)})));
	} catch ($Throwable& ex) {
		$throw($($MethodHandleStatics::uncaughtException(ex)));
	}
	$shouldNotReachHere();
}

$BoundMethodHandle* SimpleMethodHandle::copyWithExtendD($MethodType* mt, $LambdaForm* lf, double narg) {
	$useLocalObjectStack();
	try {
		$init($LambdaForm$BasicType);
		return $cast($BoundMethodHandle, $$nc($$nc($nc(SimpleMethodHandle::BMH_SPECIES)->extendWith($LambdaForm$BasicType::D_TYPE_NUM))->factory())->invokeBasic($$new($ObjectArray, {mt, lf, $$of(narg)})));
	} catch ($Throwable& ex) {
		$throw($($MethodHandleStatics::uncaughtException(ex)));
	}
	$shouldNotReachHere();
}

SimpleMethodHandle::SimpleMethodHandle() {
}

$Class* SimpleMethodHandle::load$($String* name, bool initialize) {
	$CompoundAttribute BMH_SPECIESfieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"BMH_SPECIES", "Ljava/lang/invoke/BoundMethodHandle$SpeciesData;", nullptr, $STATIC, $staticField(SimpleMethodHandle, BMH_SPECIES), BMH_SPECIESfieldAnnotations$$},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;)V", nullptr, $PRIVATE, $method(SimpleMethodHandle, init$, void, $MethodType*, $LambdaForm*)},
		{"copyWith", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;)Ljava/lang/invoke/BoundMethodHandle;", nullptr, 0, $virtualMethod(SimpleMethodHandle, copyWith, $BoundMethodHandle*, $MethodType*, $LambdaForm*)},
		{"copyWithExtendD", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;D)Ljava/lang/invoke/BoundMethodHandle;", nullptr, $FINAL, $virtualMethod(SimpleMethodHandle, copyWithExtendD, $BoundMethodHandle*, $MethodType*, $LambdaForm*, double)},
		{"copyWithExtendF", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;F)Ljava/lang/invoke/BoundMethodHandle;", nullptr, $FINAL, $virtualMethod(SimpleMethodHandle, copyWithExtendF, $BoundMethodHandle*, $MethodType*, $LambdaForm*, float)},
		{"copyWithExtendI", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;I)Ljava/lang/invoke/BoundMethodHandle;", nullptr, $FINAL, $virtualMethod(SimpleMethodHandle, copyWithExtendI, $BoundMethodHandle*, $MethodType*, $LambdaForm*, int32_t)},
		{"copyWithExtendJ", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;J)Ljava/lang/invoke/BoundMethodHandle;", nullptr, $FINAL, $virtualMethod(SimpleMethodHandle, copyWithExtendJ, $BoundMethodHandle*, $MethodType*, $LambdaForm*, int64_t)},
		{"copyWithExtendL", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;Ljava/lang/Object;)Ljava/lang/invoke/BoundMethodHandle;", nullptr, $FINAL, $virtualMethod(SimpleMethodHandle, copyWithExtendL, $BoundMethodHandle*, $MethodType*, $LambdaForm*, Object$*)},
		{"internalProperties", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(SimpleMethodHandle, internalProperties, $Object*)},
		{"make", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;)Ljava/lang/invoke/BoundMethodHandle;", nullptr, $STATIC, $staticMethod(SimpleMethodHandle, make, $BoundMethodHandle*, $MethodType*, $LambdaForm*)},
		{"speciesData", "()Ljava/lang/invoke/BoundMethodHandle$SpeciesData;", nullptr, 0, $virtualMethod(SimpleMethodHandle, speciesData, $BoundMethodHandle$SpeciesData*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.SimpleMethodHandle",
		"java.lang.invoke.BoundMethodHandle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SimpleMethodHandle, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleMethodHandle);
	});
	return class$;
}

$Class* SimpleMethodHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java