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
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _SimpleMethodHandle_FieldAnnotations_BMH_SPECIES[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$FieldInfo _SimpleMethodHandle_FieldInfo_[] = {
	{"BMH_SPECIES", "Ljava/lang/invoke/BoundMethodHandle$SpeciesData;", nullptr, $STATIC, $staticField(SimpleMethodHandle, BMH_SPECIES), _SimpleMethodHandle_FieldAnnotations_BMH_SPECIES},
	{}
};

$MethodInfo _SimpleMethodHandle_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;)V", nullptr, $PRIVATE, $method(static_cast<void(SimpleMethodHandle::*)($MethodType*,$LambdaForm*)>(&SimpleMethodHandle::init$))},
	{"copyWith", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;)Ljava/lang/invoke/BoundMethodHandle;", nullptr, 0},
	{"copyWithExtendD", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;D)Ljava/lang/invoke/BoundMethodHandle;", nullptr, $FINAL},
	{"copyWithExtendF", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;F)Ljava/lang/invoke/BoundMethodHandle;", nullptr, $FINAL},
	{"copyWithExtendI", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;I)Ljava/lang/invoke/BoundMethodHandle;", nullptr, $FINAL},
	{"copyWithExtendJ", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;J)Ljava/lang/invoke/BoundMethodHandle;", nullptr, $FINAL},
	{"copyWithExtendL", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;Ljava/lang/Object;)Ljava/lang/invoke/BoundMethodHandle;", nullptr, $FINAL},
	{"internalProperties", "()Ljava/lang/String;", nullptr, 0},
	{"make", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;)Ljava/lang/invoke/BoundMethodHandle;", nullptr, $STATIC, $method(static_cast<$BoundMethodHandle*(*)($MethodType*,$LambdaForm*)>(&SimpleMethodHandle::make))},
	{"speciesData", "()Ljava/lang/invoke/BoundMethodHandle$SpeciesData;", nullptr, 0},
	{}
};

$ClassInfo _SimpleMethodHandle_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.SimpleMethodHandle",
	"java.lang.invoke.BoundMethodHandle",
	nullptr,
	_SimpleMethodHandle_FieldInfo_,
	_SimpleMethodHandle_MethodInfo_
};

$Object* allocate$SimpleMethodHandle($Class* clazz) {
	return $of($alloc(SimpleMethodHandle));
}

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
	$useLocalCurrentObjectStackCache();
	try {
		$init($LambdaForm$BasicType);
		return $cast($BoundMethodHandle, $nc($($nc($($nc(SimpleMethodHandle::BMH_SPECIES)->extendWith($LambdaForm$BasicType::I_TYPE_NUM)))->factory()))->invokeBasic($$new($ObjectArray, {$of(mt), $of(lf), $$of(narg)})));
	} catch ($Throwable& ex) {
		$throw($($MethodHandleStatics::uncaughtException(ex)));
	}
	$shouldNotReachHere();
}

$BoundMethodHandle* SimpleMethodHandle::copyWithExtendJ($MethodType* mt, $LambdaForm* lf, int64_t narg) {
	$useLocalCurrentObjectStackCache();
	try {
		$init($LambdaForm$BasicType);
		return $cast($BoundMethodHandle, $nc($($nc($($nc(SimpleMethodHandle::BMH_SPECIES)->extendWith($LambdaForm$BasicType::J_TYPE_NUM)))->factory()))->invokeBasic($$new($ObjectArray, {$of(mt), $of(lf), $$of(narg)})));
	} catch ($Throwable& ex) {
		$throw($($MethodHandleStatics::uncaughtException(ex)));
	}
	$shouldNotReachHere();
}

$BoundMethodHandle* SimpleMethodHandle::copyWithExtendF($MethodType* mt, $LambdaForm* lf, float narg) {
	$useLocalCurrentObjectStackCache();
	try {
		$init($LambdaForm$BasicType);
		return $cast($BoundMethodHandle, $nc($($nc($($nc(SimpleMethodHandle::BMH_SPECIES)->extendWith($LambdaForm$BasicType::F_TYPE_NUM)))->factory()))->invokeBasic($$new($ObjectArray, {$of(mt), $of(lf), $$of(narg)})));
	} catch ($Throwable& ex) {
		$throw($($MethodHandleStatics::uncaughtException(ex)));
	}
	$shouldNotReachHere();
}

$BoundMethodHandle* SimpleMethodHandle::copyWithExtendD($MethodType* mt, $LambdaForm* lf, double narg) {
	$useLocalCurrentObjectStackCache();
	try {
		$init($LambdaForm$BasicType);
		return $cast($BoundMethodHandle, $nc($($nc($($nc(SimpleMethodHandle::BMH_SPECIES)->extendWith($LambdaForm$BasicType::D_TYPE_NUM)))->factory()))->invokeBasic($$new($ObjectArray, {$of(mt), $of(lf), $$of(narg)})));
	} catch ($Throwable& ex) {
		$throw($($MethodHandleStatics::uncaughtException(ex)));
	}
	$shouldNotReachHere();
}

SimpleMethodHandle::SimpleMethodHandle() {
}

$Class* SimpleMethodHandle::load$($String* name, bool initialize) {
	$loadClass(SimpleMethodHandle, name, initialize, &_SimpleMethodHandle_ClassInfo_, allocate$SimpleMethodHandle);
	return class$;
}

$Class* SimpleMethodHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java