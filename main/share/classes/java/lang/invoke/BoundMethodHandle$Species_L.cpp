#include <java/lang/invoke/BoundMethodHandle$Species_L.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Double.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/BoundMethodHandle$SpeciesData.h>
#include <java/lang/invoke/BoundMethodHandle.h>
#include <java/lang/invoke/LambdaForm$BasicType.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef BMH_SPECIES
#undef D_TYPE_NUM
#undef F_TYPE_NUM
#undef I_TYPE_NUM
#undef J_TYPE_NUM
#undef L_TYPE_NUM

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $BoundMethodHandle = ::java::lang::invoke::BoundMethodHandle;
using $BoundMethodHandle$SpeciesData = ::java::lang::invoke::BoundMethodHandle$SpeciesData;
using $ClassSpecializer$SpeciesData = ::java::lang::invoke::ClassSpecializer$SpeciesData;
using $LambdaForm = ::java::lang::invoke::LambdaForm;
using $LambdaForm$BasicType = ::java::lang::invoke::LambdaForm$BasicType;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _BoundMethodHandle$Species_L_FieldAnnotations_BMH_SPECIES[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$FieldInfo _BoundMethodHandle$Species_L_FieldInfo_[] = {
	{"argL0", "Ljava/lang/Object;", nullptr, $FINAL, $field(BoundMethodHandle$Species_L, argL0)},
	{"BMH_SPECIES", "Ljava/lang/invoke/BoundMethodHandle$SpeciesData;", nullptr, $STATIC, $staticField(BoundMethodHandle$Species_L, BMH_SPECIES), _BoundMethodHandle$Species_L_FieldAnnotations_BMH_SPECIES},
	{}
};

$MethodInfo _BoundMethodHandle$Species_L_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(BoundMethodHandle$Species_L::*)($MethodType*,$LambdaForm*,Object$*)>(&BoundMethodHandle$Species_L::init$))},
	{"copyWith", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;)Ljava/lang/invoke/BoundMethodHandle;", nullptr, $FINAL},
	{"copyWithExtendD", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;D)Ljava/lang/invoke/BoundMethodHandle;", nullptr, $FINAL},
	{"copyWithExtendF", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;F)Ljava/lang/invoke/BoundMethodHandle;", nullptr, $FINAL},
	{"copyWithExtendI", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;I)Ljava/lang/invoke/BoundMethodHandle;", nullptr, $FINAL},
	{"copyWithExtendJ", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;J)Ljava/lang/invoke/BoundMethodHandle;", nullptr, $FINAL},
	{"copyWithExtendL", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;Ljava/lang/Object;)Ljava/lang/invoke/BoundMethodHandle;", nullptr, $FINAL},
	{"internalValues", "()Ljava/lang/Object;", nullptr, $VOLATILE | $SYNTHETIC},
	{"make", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;Ljava/lang/Object;)Ljava/lang/invoke/BoundMethodHandle;", nullptr, $STATIC, $method(static_cast<$BoundMethodHandle*(*)($MethodType*,$LambdaForm*,Object$*)>(&BoundMethodHandle$Species_L::make))},
	{"speciesData", "()Ljava/lang/invoke/BoundMethodHandle$SpeciesData;", nullptr, 0},
	{}
};

$InnerClassInfo _BoundMethodHandle$Species_L_InnerClassesInfo_[] = {
	{"java.lang.invoke.BoundMethodHandle$Species_L", "java.lang.invoke.BoundMethodHandle", "Species_L", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _BoundMethodHandle$Species_L_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.BoundMethodHandle$Species_L",
	"java.lang.invoke.BoundMethodHandle",
	nullptr,
	_BoundMethodHandle$Species_L_FieldInfo_,
	_BoundMethodHandle$Species_L_MethodInfo_,
	nullptr,
	nullptr,
	_BoundMethodHandle$Species_L_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.BoundMethodHandle"
};

$Object* allocate$BoundMethodHandle$Species_L($Class* clazz) {
	return $of($alloc(BoundMethodHandle$Species_L));
}

$BoundMethodHandle$SpeciesData* BoundMethodHandle$Species_L::BMH_SPECIES = nullptr;

void BoundMethodHandle$Species_L::init$($MethodType* mt, $LambdaForm* lf, Object$* argL0) {
	$BoundMethodHandle::init$(mt, lf);
	$set(this, argL0, argL0);
}

$BoundMethodHandle$SpeciesData* BoundMethodHandle$Species_L::speciesData() {
	return BoundMethodHandle$Species_L::BMH_SPECIES;
}

$BoundMethodHandle* BoundMethodHandle$Species_L::make($MethodType* mt, $LambdaForm* lf, Object$* argL0) {
	$init(BoundMethodHandle$Species_L);
	return $new(BoundMethodHandle$Species_L, mt, lf, argL0);
}

$BoundMethodHandle* BoundMethodHandle$Species_L::copyWith($MethodType* mt, $LambdaForm* lf) {
	return $new(BoundMethodHandle$Species_L, mt, lf, this->argL0);
}

$BoundMethodHandle* BoundMethodHandle$Species_L::copyWithExtendL($MethodType* mt, $LambdaForm* lf, Object$* narg) {
	try {
		$init($LambdaForm$BasicType);
		return $cast($BoundMethodHandle, $nc($($nc($($nc(BoundMethodHandle$Species_L::BMH_SPECIES)->extendWith($LambdaForm$BasicType::L_TYPE_NUM)))->factory()))->invokeBasic($$new($ObjectArray, {$of(mt), $of(lf), this->argL0, narg})));
	} catch ($Throwable&) {
		$var($Throwable, ex, $catch());
		$throw($($MethodHandleStatics::uncaughtException(ex)));
	}
	$shouldNotReachHere();
}

$BoundMethodHandle* BoundMethodHandle$Species_L::copyWithExtendI($MethodType* mt, $LambdaForm* lf, int32_t narg) {
	try {
		$init($LambdaForm$BasicType);
		return $cast($BoundMethodHandle, $nc($($nc($($nc(BoundMethodHandle$Species_L::BMH_SPECIES)->extendWith($LambdaForm$BasicType::I_TYPE_NUM)))->factory()))->invokeBasic($$new($ObjectArray, {$of(mt), $of(lf), this->argL0, $$of(narg)})));
	} catch ($Throwable&) {
		$var($Throwable, ex, $catch());
		$throw($($MethodHandleStatics::uncaughtException(ex)));
	}
	$shouldNotReachHere();
}

$BoundMethodHandle* BoundMethodHandle$Species_L::copyWithExtendJ($MethodType* mt, $LambdaForm* lf, int64_t narg) {
	try {
		$init($LambdaForm$BasicType);
		return $cast($BoundMethodHandle, $nc($($nc($($nc(BoundMethodHandle$Species_L::BMH_SPECIES)->extendWith($LambdaForm$BasicType::J_TYPE_NUM)))->factory()))->invokeBasic($$new($ObjectArray, {$of(mt), $of(lf), this->argL0, $$of(narg)})));
	} catch ($Throwable&) {
		$var($Throwable, ex, $catch());
		$throw($($MethodHandleStatics::uncaughtException(ex)));
	}
	$shouldNotReachHere();
}

$BoundMethodHandle* BoundMethodHandle$Species_L::copyWithExtendF($MethodType* mt, $LambdaForm* lf, float narg) {
	try {
		$init($LambdaForm$BasicType);
		return $cast($BoundMethodHandle, $nc($($nc($($nc(BoundMethodHandle$Species_L::BMH_SPECIES)->extendWith($LambdaForm$BasicType::F_TYPE_NUM)))->factory()))->invokeBasic($$new($ObjectArray, {$of(mt), $of(lf), this->argL0, $$of(narg)})));
	} catch ($Throwable&) {
		$var($Throwable, ex, $catch());
		$throw($($MethodHandleStatics::uncaughtException(ex)));
	}
	$shouldNotReachHere();
}

$BoundMethodHandle* BoundMethodHandle$Species_L::copyWithExtendD($MethodType* mt, $LambdaForm* lf, double narg) {
	try {
		$init($LambdaForm$BasicType);
		return $cast($BoundMethodHandle, $nc($($nc($($nc(BoundMethodHandle$Species_L::BMH_SPECIES)->extendWith($LambdaForm$BasicType::D_TYPE_NUM)))->factory()))->invokeBasic($$new($ObjectArray, {$of(mt), $of(lf), this->argL0, $$of(narg)})));
	} catch ($Throwable&) {
		$var($Throwable, ex, $catch());
		$throw($($MethodHandleStatics::uncaughtException(ex)));
	}
	$shouldNotReachHere();
}

$Object* BoundMethodHandle$Species_L::internalValues() {
	return $of($BoundMethodHandle::internalValues());
}

BoundMethodHandle$Species_L::BoundMethodHandle$Species_L() {
}

$Class* BoundMethodHandle$Species_L::load$($String* name, bool initialize) {
	$loadClass(BoundMethodHandle$Species_L, name, initialize, &_BoundMethodHandle$Species_L_ClassInfo_, allocate$BoundMethodHandle$Species_L);
	return class$;
}

$Class* BoundMethodHandle$Species_L::class$ = nullptr;

		} // invoke
	} // lang
} // java