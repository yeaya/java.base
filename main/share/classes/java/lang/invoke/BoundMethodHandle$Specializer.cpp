#include <java/lang/invoke/BoundMethodHandle$Specializer.h>

#include <java/lang/AssertionError.h>
#include <java/lang/InternalError.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/invoke/BoundMethodHandle$Specializer$Factory.h>
#include <java/lang/invoke/BoundMethodHandle$SpeciesData.h>
#include <java/lang/invoke/BoundMethodHandle.h>
#include <java/lang/invoke/ClassSpecializer$Factory.h>
#include <java/lang/invoke/ClassSpecializer$SpeciesData.h>
#include <java/lang/invoke/ClassSpecializer.h>
#include <java/lang/invoke/LambdaForm$BasicType.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef BMH
#undef BMH_TRANSFORMS
#undef IMPL_LOOKUP
#undef SPECIES_DATA_ACCESSOR
#undef TN_COPY_NO_EXTEND
#undef TYPE
#undef TYPE_LIMIT
#undef V_TYPE_NUM

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Void = ::java::lang::Void;
using $BoundMethodHandle = ::java::lang::invoke::BoundMethodHandle;
using $BoundMethodHandle$Specializer$Factory = ::java::lang::invoke::BoundMethodHandle$Specializer$Factory;
using $BoundMethodHandle$SpeciesData = ::java::lang::invoke::BoundMethodHandle$SpeciesData;
using $ClassSpecializer = ::java::lang::invoke::ClassSpecializer;
using $ClassSpecializer$Factory = ::java::lang::invoke::ClassSpecializer$Factory;
using $ClassSpecializer$SpeciesData = ::java::lang::invoke::ClassSpecializer$SpeciesData;
using $LambdaForm = ::java::lang::invoke::LambdaForm;
using $LambdaForm$BasicType = ::java::lang::invoke::LambdaForm$BasicType;
using $MemberName = ::java::lang::invoke::MemberName;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $List = ::java::util::List;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _BoundMethodHandle$Specializer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(BoundMethodHandle$Specializer, $assertionsDisabled)},
	{"SPECIES_DATA_ACCESSOR", "Ljava/lang/invoke/MemberName;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BoundMethodHandle$Specializer, SPECIES_DATA_ACCESSOR)},
	{"BMH_TRANSFORMS", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/invoke/MemberName;>;", $STATIC | $FINAL, $staticField(BoundMethodHandle$Specializer, BMH_TRANSFORMS)},
	{"TN_COPY_NO_EXTEND", "I", nullptr, $STATIC | $FINAL, $staticField(BoundMethodHandle$Specializer, TN_COPY_NO_EXTEND)},
	{}
};

$MethodInfo _BoundMethodHandle$Specializer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(BoundMethodHandle$Specializer, init$, void)},
	{"makeFactory", "()Ljava/lang/invoke/BoundMethodHandle$Specializer$Factory;", nullptr, $PROTECTED, $virtualMethod(BoundMethodHandle$Specializer, makeFactory, $ClassSpecializer$Factory*)},
	{"newSpeciesData", "(Ljava/lang/String;)Ljava/lang/invoke/BoundMethodHandle$SpeciesData;", nullptr, $PROTECTED, $method(BoundMethodHandle$Specializer, newSpeciesData, $BoundMethodHandle$SpeciesData*, $String*)},
	{"newSpeciesData", "(Ljava/lang/Object;)Ljava/lang/invoke/ClassSpecializer$SpeciesData;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC, $virtualMethod(BoundMethodHandle$Specializer, newSpeciesData, $ClassSpecializer$SpeciesData*, Object$*)},
	{"topSpeciesKey", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(BoundMethodHandle$Specializer, topSpeciesKey, $Object*)},
	{}
};

$InnerClassInfo _BoundMethodHandle$Specializer_InnerClassesInfo_[] = {
	{"java.lang.invoke.BoundMethodHandle$Specializer", "java.lang.invoke.BoundMethodHandle", "Specializer", $STATIC | $FINAL},
	{"java.lang.invoke.BoundMethodHandle$Specializer$Factory", "java.lang.invoke.BoundMethodHandle$Specializer", "Factory", 0},
	{"java.lang.invoke.BoundMethodHandle$SpeciesData", "java.lang.invoke.BoundMethodHandle", "SpeciesData", $STATIC | $FINAL},
	{}
};

$ClassInfo _BoundMethodHandle$Specializer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.BoundMethodHandle$Specializer",
	"java.lang.invoke.ClassSpecializer",
	nullptr,
	_BoundMethodHandle$Specializer_FieldInfo_,
	_BoundMethodHandle$Specializer_MethodInfo_,
	"Ljava/lang/invoke/ClassSpecializer<Ljava/lang/invoke/BoundMethodHandle;Ljava/lang/String;Ljava/lang/invoke/BoundMethodHandle$SpeciesData;>;",
	nullptr,
	_BoundMethodHandle$Specializer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.BoundMethodHandle"
};

$Object* allocate$BoundMethodHandle$Specializer($Class* clazz) {
	return $of($alloc(BoundMethodHandle$Specializer));
}

bool BoundMethodHandle$Specializer::$assertionsDisabled = false;
$MemberName* BoundMethodHandle$Specializer::SPECIES_DATA_ACCESSOR = nullptr;
$List* BoundMethodHandle$Specializer::BMH_TRANSFORMS = nullptr;
int32_t BoundMethodHandle$Specializer::TN_COPY_NO_EXTEND = 0;

void BoundMethodHandle$Specializer::init$() {
	$useLocalCurrentObjectStackCache();
	$load($BoundMethodHandle);
	$load($BoundMethodHandle$SpeciesData);
	$init($Void);
	$load($MethodType);
	$load($LambdaForm);
	$ClassSpecializer::init$($BoundMethodHandle::class$, $String::class$, $BoundMethodHandle$SpeciesData::class$, $($MethodType::methodType($Void::TYPE, $MethodType::class$, $$new($ClassArray, {$LambdaForm::class$}))), BoundMethodHandle$Specializer::SPECIES_DATA_ACCESSOR, "BMH_SPECIES"_s, BoundMethodHandle$Specializer::BMH_TRANSFORMS);
}

$Object* BoundMethodHandle$Specializer::topSpeciesKey() {
	return $of(""_s);
}

$BoundMethodHandle$SpeciesData* BoundMethodHandle$Specializer::newSpeciesData($String* key) {
	return $new($BoundMethodHandle$SpeciesData, this, key);
}

$ClassSpecializer$Factory* BoundMethodHandle$Specializer::makeFactory() {
	return $new($BoundMethodHandle$Specializer$Factory, this);
}

$ClassSpecializer$SpeciesData* BoundMethodHandle$Specializer::newSpeciesData(Object$* key) {
	return this->newSpeciesData($cast($String, key));
}

void clinit$BoundMethodHandle$Specializer($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$load($BoundMethodHandle);
	BoundMethodHandle$Specializer::$assertionsDisabled = !$BoundMethodHandle::class$->desiredAssertionStatus();
	{
		try {
			$init($MethodHandles$Lookup);
			$load($BoundMethodHandle$SpeciesData);
			$assignStatic(BoundMethodHandle$Specializer::SPECIES_DATA_ACCESSOR, $nc($MethodHandles$Lookup::IMPL_LOOKUP)->resolveOrFail((int8_t)5, $BoundMethodHandle::class$, "speciesData"_s, $($MethodType::methodType($BoundMethodHandle$SpeciesData::class$))));
		} catch ($ReflectiveOperationException& ex) {
			$throw($($MethodHandleStatics::newInternalError("Bootstrap link error"_s, ex)));
		}
	}
	$init($LambdaForm$BasicType);
	BoundMethodHandle$Specializer::TN_COPY_NO_EXTEND = $LambdaForm$BasicType::V_TYPE_NUM;
	{
		$Class* BMH = $BoundMethodHandle::class$;
		try {
			$init($MethodHandles$Lookup);
			$load($MethodType);
			$load($LambdaForm);
			$var($Object, var$0, $of($nc($MethodHandles$Lookup::IMPL_LOOKUP)->resolveOrFail((int8_t)5, BMH, "copyWithExtendL"_s, $($MethodType::methodType(BMH, $MethodType::class$, $$new($ClassArray, {
				$LambdaForm::class$,
				$Object::class$
			}))))));
			$init($Integer);
			$var($Object, var$1, $of($nc($MethodHandles$Lookup::IMPL_LOOKUP)->resolveOrFail((int8_t)5, BMH, "copyWithExtendI"_s, $($MethodType::methodType(BMH, $MethodType::class$, $$new($ClassArray, {
				$LambdaForm::class$,
				$Integer::TYPE
			}))))));
			$init($Long);
			$var($Object, var$2, $of($nc($MethodHandles$Lookup::IMPL_LOOKUP)->resolveOrFail((int8_t)5, BMH, "copyWithExtendJ"_s, $($MethodType::methodType(BMH, $MethodType::class$, $$new($ClassArray, {
				$LambdaForm::class$,
				$Long::TYPE
			}))))));
			$init($Float);
			$var($Object, var$3, $of($nc($MethodHandles$Lookup::IMPL_LOOKUP)->resolveOrFail((int8_t)5, BMH, "copyWithExtendF"_s, $($MethodType::methodType(BMH, $MethodType::class$, $$new($ClassArray, {
				$LambdaForm::class$,
				$Float::TYPE
			}))))));
			$init($Double);
			$var($Object, var$4, $of($nc($MethodHandles$Lookup::IMPL_LOOKUP)->resolveOrFail((int8_t)5, BMH, "copyWithExtendD"_s, $($MethodType::methodType(BMH, $MethodType::class$, $$new($ClassArray, {
				$LambdaForm::class$,
				$Double::TYPE
			}))))));
			$assignStatic(BoundMethodHandle$Specializer::BMH_TRANSFORMS, $List::of(var$0, var$1, var$2, var$3, var$4, $($nc($MethodHandles$Lookup::IMPL_LOOKUP)->resolveOrFail((int8_t)5, BMH, "copyWith"_s, $($MethodType::methodType(BMH, $MethodType::class$, $$new($ClassArray, {$LambdaForm::class$})))))));
		} catch ($ReflectiveOperationException& ex) {
			$throw($($MethodHandleStatics::newInternalError("Failed resolving copyWith methods"_s, ex)));
		}
		if (!BoundMethodHandle$Specializer::$assertionsDisabled && !($nc(BoundMethodHandle$Specializer::BMH_TRANSFORMS)->size() == $LambdaForm$BasicType::TYPE_LIMIT)) {
			$throwNew($AssertionError);
		}
	}
}

BoundMethodHandle$Specializer::BoundMethodHandle$Specializer() {
}

$Class* BoundMethodHandle$Specializer::load$($String* name, bool initialize) {
	$loadClass(BoundMethodHandle$Specializer, name, initialize, &_BoundMethodHandle$Specializer_ClassInfo_, clinit$BoundMethodHandle$Specializer, allocate$BoundMethodHandle$Specializer);
	return class$;
}

$Class* BoundMethodHandle$Specializer::class$ = nullptr;

		} // invoke
	} // lang
} // java