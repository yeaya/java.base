#include <java/lang/invoke/BoundMethodHandle.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Error.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/BoundMethodHandle$1.h>
#include <java/lang/invoke/BoundMethodHandle$Specializer.h>
#include <java/lang/invoke/BoundMethodHandle$SpeciesData.h>
#include <java/lang/invoke/BoundMethodHandle$Species_L.h>
#include <java/lang/invoke/ClassSpecializer$SpeciesData.h>
#include <java/lang/invoke/DelegatingMethodHandle.h>
#include <java/lang/invoke/LambdaForm$BasicType.h>
#include <java/lang/invoke/LambdaForm$Name.h>
#include <java/lang/invoke/LambdaForm$NamedFunction.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/LambdaFormEditor.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/MethodTypeForm.h>
#include <java/lang/invoke/SimpleMethodHandle.h>
#include <java/util/List.h>
#include <sun/invoke/util/ValueConversions.h>
#include <jcpp.h>

#undef BMH_SPECIES
#undef D_TYPE_NUM
#undef FIELD_COUNT_THRESHOLD
#undef FORM_EXPRESSION_THRESHOLD
#undef F_TYPE_NUM
#undef I_TYPE_NUM
#undef J_TYPE_NUM
#undef LF_REBIND
#undef SPECIALIZER

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoundMethodHandle$1 = ::java::lang::invoke::BoundMethodHandle$1;
using $BoundMethodHandle$Specializer = ::java::lang::invoke::BoundMethodHandle$Specializer;
using $BoundMethodHandle$SpeciesData = ::java::lang::invoke::BoundMethodHandle$SpeciesData;
using $BoundMethodHandle$Species_L = ::java::lang::invoke::BoundMethodHandle$Species_L;
using $DelegatingMethodHandle = ::java::lang::invoke::DelegatingMethodHandle;
using $LambdaForm = ::java::lang::invoke::LambdaForm;
using $LambdaForm$BasicType = ::java::lang::invoke::LambdaForm$BasicType;
using $LambdaFormEditor = ::java::lang::invoke::LambdaFormEditor;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $MethodTypeForm = ::java::lang::invoke::MethodTypeForm;
using $SimpleMethodHandle = ::java::lang::invoke::SimpleMethodHandle;
using $List = ::java::util::List;
using $ValueConversions = ::sun::invoke::util::ValueConversions;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _BoundMethodHandle_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(BoundMethodHandle, $assertionsDisabled)},
	{"FIELD_COUNT_THRESHOLD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BoundMethodHandle, FIELD_COUNT_THRESHOLD)},
	{"FORM_EXPRESSION_THRESHOLD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BoundMethodHandle, FORM_EXPRESSION_THRESHOLD)},
	{"SPECIALIZER", "Ljava/lang/invoke/BoundMethodHandle$Specializer;", nullptr, $STATIC | $FINAL, $staticField(BoundMethodHandle, SPECIALIZER)},
	{}
};

$MethodInfo _BoundMethodHandle_MethodInfo_[] = {
	{"copyWith", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;)Ljava/lang/invoke/BoundMethodHandle;", nullptr, $ABSTRACT},
	{"<init>", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;)V", nullptr, 0, $method(BoundMethodHandle, init$, void, $MethodType*, $LambdaForm*)},
	{"arg", "(I)Ljava/lang/Object;", nullptr, $FINAL, $method(BoundMethodHandle, arg, $Object*, int32_t)},
	{"bindArgumentD", "(ID)Ljava/lang/invoke/BoundMethodHandle;", nullptr, 0, $virtualMethod(BoundMethodHandle, bindArgumentD, BoundMethodHandle*, int32_t, double)},
	{"bindArgumentF", "(IF)Ljava/lang/invoke/BoundMethodHandle;", nullptr, 0, $virtualMethod(BoundMethodHandle, bindArgumentF, BoundMethodHandle*, int32_t, float)},
	{"bindArgumentI", "(II)Ljava/lang/invoke/BoundMethodHandle;", nullptr, 0, $virtualMethod(BoundMethodHandle, bindArgumentI, BoundMethodHandle*, int32_t, int32_t)},
	{"bindArgumentJ", "(IJ)Ljava/lang/invoke/BoundMethodHandle;", nullptr, 0, $virtualMethod(BoundMethodHandle, bindArgumentJ, BoundMethodHandle*, int32_t, int64_t)},
	{"bindArgumentL", "(ILjava/lang/Object;)Ljava/lang/invoke/BoundMethodHandle;", nullptr, 0, $virtualMethod(BoundMethodHandle, bindArgumentL, BoundMethodHandle*, int32_t, Object$*)},
	{"bindSingle", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;Ljava/lang/invoke/LambdaForm$BasicType;Ljava/lang/Object;)Ljava/lang/invoke/BoundMethodHandle;", nullptr, $STATIC, $staticMethod(BoundMethodHandle, bindSingle, BoundMethodHandle*, $MethodType*, $LambdaForm*, $LambdaForm$BasicType*, Object$*)},
	{"bindSingle", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;Ljava/lang/Object;)Ljava/lang/invoke/BoundMethodHandle;", nullptr, $STATIC, $staticMethod(BoundMethodHandle, bindSingle, BoundMethodHandle*, $MethodType*, $LambdaForm*, Object$*)},
	{"copyWithExtendD", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;D)Ljava/lang/invoke/BoundMethodHandle;", nullptr, $ABSTRACT, $virtualMethod(BoundMethodHandle, copyWithExtendD, BoundMethodHandle*, $MethodType*, $LambdaForm*, double)},
	{"copyWithExtendF", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;F)Ljava/lang/invoke/BoundMethodHandle;", nullptr, $ABSTRACT, $virtualMethod(BoundMethodHandle, copyWithExtendF, BoundMethodHandle*, $MethodType*, $LambdaForm*, float)},
	{"copyWithExtendI", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;I)Ljava/lang/invoke/BoundMethodHandle;", nullptr, $ABSTRACT, $virtualMethod(BoundMethodHandle, copyWithExtendI, BoundMethodHandle*, $MethodType*, $LambdaForm*, int32_t)},
	{"copyWithExtendJ", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;J)Ljava/lang/invoke/BoundMethodHandle;", nullptr, $ABSTRACT, $virtualMethod(BoundMethodHandle, copyWithExtendJ, BoundMethodHandle*, $MethodType*, $LambdaForm*, int64_t)},
	{"copyWithExtendL", "(Ljava/lang/invoke/MethodType;Ljava/lang/invoke/LambdaForm;Ljava/lang/Object;)Ljava/lang/invoke/BoundMethodHandle;", nullptr, $ABSTRACT, $virtualMethod(BoundMethodHandle, copyWithExtendL, BoundMethodHandle*, $MethodType*, $LambdaForm*, Object$*)},
	{"editor", "()Ljava/lang/invoke/LambdaFormEditor;", nullptr, 0, $virtualMethod(BoundMethodHandle, editor, $LambdaFormEditor*)},
	{"fieldCount", "()I", nullptr, $FINAL, $method(BoundMethodHandle, fieldCount, int32_t)},
	{"internalProperties", "()Ljava/lang/Object;", nullptr, 0, $virtualMethod(BoundMethodHandle, internalProperties, $Object*)},
	{"internalValues", "()Ljava/lang/String;", nullptr, $FINAL, $virtualMethod(BoundMethodHandle, internalValues, $Object*)},
	{"makeReinvoker", "(Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/BoundMethodHandle;", nullptr, $STATIC, $staticMethod(BoundMethodHandle, makeReinvoker, BoundMethodHandle*, $MethodHandle*)},
	{"rebind", "()Ljava/lang/invoke/BoundMethodHandle;", nullptr, 0, $virtualMethod(BoundMethodHandle, rebind, BoundMethodHandle*)},
	{"speciesData", "()Ljava/lang/invoke/BoundMethodHandle$SpeciesData;", nullptr, $ABSTRACT, $virtualMethod(BoundMethodHandle, speciesData, $BoundMethodHandle$SpeciesData*)},
	{"speciesDataFor", "(Ljava/lang/invoke/LambdaForm;)Ljava/lang/invoke/BoundMethodHandle$SpeciesData;", nullptr, $STATIC, $staticMethod(BoundMethodHandle, speciesDataFor, $BoundMethodHandle$SpeciesData*, $LambdaForm*)},
	{"speciesData_L", "()Ljava/lang/invoke/BoundMethodHandle$SpeciesData;", nullptr, $STATIC, $staticMethod(BoundMethodHandle, speciesData_L, $BoundMethodHandle$SpeciesData*)},
	{"speciesData_LL", "()Ljava/lang/invoke/BoundMethodHandle$SpeciesData;", nullptr, $STATIC, $staticMethod(BoundMethodHandle, speciesData_LL, $BoundMethodHandle$SpeciesData*)},
	{"speciesData_LLL", "()Ljava/lang/invoke/BoundMethodHandle$SpeciesData;", nullptr, $STATIC, $staticMethod(BoundMethodHandle, speciesData_LLL, $BoundMethodHandle$SpeciesData*)},
	{"speciesData_LLLL", "()Ljava/lang/invoke/BoundMethodHandle$SpeciesData;", nullptr, $STATIC, $staticMethod(BoundMethodHandle, speciesData_LLLL, $BoundMethodHandle$SpeciesData*)},
	{"speciesData_LLLLL", "()Ljava/lang/invoke/BoundMethodHandle$SpeciesData;", nullptr, $STATIC, $staticMethod(BoundMethodHandle, speciesData_LLLLL, $BoundMethodHandle$SpeciesData*)},
	{"tooComplex", "()Z", nullptr, $PRIVATE, $method(BoundMethodHandle, tooComplex, bool)},
	{}
};

$InnerClassInfo _BoundMethodHandle_InnerClassesInfo_[] = {
	{"java.lang.invoke.BoundMethodHandle$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"java.lang.invoke.BoundMethodHandle$Specializer", "java.lang.invoke.BoundMethodHandle", "Specializer", $STATIC | $FINAL},
	{"java.lang.invoke.BoundMethodHandle$SpeciesData", "java.lang.invoke.BoundMethodHandle", "SpeciesData", $STATIC | $FINAL},
	{"java.lang.invoke.BoundMethodHandle$Species_L", "java.lang.invoke.BoundMethodHandle", "Species_L", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _BoundMethodHandle_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.lang.invoke.BoundMethodHandle",
	"java.lang.invoke.MethodHandle",
	nullptr,
	_BoundMethodHandle_FieldInfo_,
	_BoundMethodHandle_MethodInfo_,
	nullptr,
	nullptr,
	_BoundMethodHandle_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.invoke.BoundMethodHandle$1,java.lang.invoke.BoundMethodHandle$Specializer,java.lang.invoke.BoundMethodHandle$Specializer$Factory,java.lang.invoke.BoundMethodHandle$SpeciesData,java.lang.invoke.BoundMethodHandle$Species_L"
};

$Object* allocate$BoundMethodHandle($Class* clazz) {
	return $of($alloc(BoundMethodHandle));
}

bool BoundMethodHandle::$assertionsDisabled = false;
$BoundMethodHandle$Specializer* BoundMethodHandle::SPECIALIZER = nullptr;

void BoundMethodHandle::init$($MethodType* type, $LambdaForm* form) {
	$MethodHandle::init$(type, form);
	bool var$0 = !BoundMethodHandle::$assertionsDisabled;
	if (var$0) {
		var$0 = !(speciesData() == speciesDataFor(form));
	}
	if (var$0) {
		$throwNew($AssertionError);
	}
}

BoundMethodHandle* BoundMethodHandle::bindSingle($MethodType* type, $LambdaForm* form, $LambdaForm$BasicType* xtype, Object$* x) {
	$init(BoundMethodHandle);
	$useLocalCurrentObjectStackCache();
	try {
		$init($BoundMethodHandle$1);

		$var(BoundMethodHandle, var$0, nullptr)
		switch ($nc($BoundMethodHandle$1::$SwitchMap$java$lang$invoke$LambdaForm$BasicType)->get($nc((xtype))->ordinal())) {
		case 1:
			{
				$assign(var$0, bindSingle(type, form, x));
				break;
			}
		case 2:
			{
				$init($LambdaForm$BasicType);
				$assign(var$0, $cast(BoundMethodHandle, $nc($($nc($($nc(($cast($BoundMethodHandle$SpeciesData, $($nc(BoundMethodHandle::SPECIALIZER)->topSpecies()))))->extendWith($LambdaForm$BasicType::I_TYPE_NUM)))->factory()))->invokeBasic($$new($ObjectArray, {$of(type), $of(form), $$of($ValueConversions::widenSubword(x))}))));
				break;
			}
		case 3:
			{
				$init($LambdaForm$BasicType);
				$assign(var$0, $cast(BoundMethodHandle, $nc($($nc($($nc(($cast($BoundMethodHandle$SpeciesData, $($nc(BoundMethodHandle::SPECIALIZER)->topSpecies()))))->extendWith($LambdaForm$BasicType::J_TYPE_NUM)))->factory()))->invokeBasic($$new($ObjectArray, {$of(type), $of(form), $$of($nc(($cast($Long, x)))->longValue())}))));
				break;
			}
		case 4:
			{
				$init($LambdaForm$BasicType);
				$assign(var$0, $cast(BoundMethodHandle, $nc($($nc($($nc(($cast($BoundMethodHandle$SpeciesData, $($nc(BoundMethodHandle::SPECIALIZER)->topSpecies()))))->extendWith($LambdaForm$BasicType::F_TYPE_NUM)))->factory()))->invokeBasic($$new($ObjectArray, {$of(type), $of(form), $$of($nc(($cast($Float, x)))->floatValue())}))));
				break;
			}
		case 5:
			{
				$init($LambdaForm$BasicType);
				$assign(var$0, $cast(BoundMethodHandle, $nc($($nc($($nc(($cast($BoundMethodHandle$SpeciesData, $($nc(BoundMethodHandle::SPECIALIZER)->topSpecies()))))->extendWith($LambdaForm$BasicType::D_TYPE_NUM)))->factory()))->invokeBasic($$new($ObjectArray, {$of(type), $of(form), $$of($nc(($cast($Double, x)))->doubleValue())}))));
				break;
			}
		default:
			{
				$throw($($MethodHandleStatics::newInternalError($$str({"unexpected xtype: "_s, xtype}))));
			}
		}
		return var$0;
	} catch ($Throwable& t) {
		$throw($($MethodHandleStatics::uncaughtException(t)));
	}
	$shouldNotReachHere();
}

$LambdaFormEditor* BoundMethodHandle::editor() {
	return $nc(this->form)->editor();
}

BoundMethodHandle* BoundMethodHandle::bindSingle($MethodType* type, $LambdaForm* form, Object$* x) {
	$init(BoundMethodHandle);
	return $BoundMethodHandle$Species_L::make(type, form, x);
}

BoundMethodHandle* BoundMethodHandle::bindArgumentL(int32_t pos, Object$* value) {
	return $nc($(editor()))->bindArgumentL(this, pos, value);
}

BoundMethodHandle* BoundMethodHandle::bindArgumentI(int32_t pos, int32_t value) {
	return $nc($(editor()))->bindArgumentI(this, pos, value);
}

BoundMethodHandle* BoundMethodHandle::bindArgumentJ(int32_t pos, int64_t value) {
	return $nc($(editor()))->bindArgumentJ(this, pos, value);
}

BoundMethodHandle* BoundMethodHandle::bindArgumentF(int32_t pos, float value) {
	return $nc($(editor()))->bindArgumentF(this, pos, value);
}

BoundMethodHandle* BoundMethodHandle::bindArgumentD(int32_t pos, double value) {
	return $nc($(editor()))->bindArgumentD(this, pos, value);
}

BoundMethodHandle* BoundMethodHandle::rebind() {
	if (!tooComplex()) {
		return this;
	}
	return makeReinvoker(this);
}

bool BoundMethodHandle::tooComplex() {
	bool var$0 = fieldCount() > BoundMethodHandle::FIELD_COUNT_THRESHOLD;
	return (var$0 || $nc(this->form)->expressionCount() > BoundMethodHandle::FORM_EXPRESSION_THRESHOLD);
}

BoundMethodHandle* BoundMethodHandle::makeReinvoker($MethodHandle* target) {
	$init(BoundMethodHandle);
	$useLocalCurrentObjectStackCache();
	$init($BoundMethodHandle$Species_L);
	$var($LambdaForm, form, $DelegatingMethodHandle::makeReinvokerForm(target, $MethodTypeForm::LF_REBIND, $BoundMethodHandle$Species_L::BMH_SPECIES, $($nc($BoundMethodHandle$Species_L::BMH_SPECIES)->getterFunction(0))));
	return $BoundMethodHandle$Species_L::make($($nc(target)->type()), form, target);
}

$BoundMethodHandle$SpeciesData* BoundMethodHandle::speciesDataFor($LambdaForm* form) {
	$init(BoundMethodHandle);
	$var($Object, c, $nc($nc($nc(form)->names)->get(0))->constraint);
	if ($instanceOf($BoundMethodHandle$SpeciesData, c)) {
		return $cast($BoundMethodHandle$SpeciesData, c);
	}
	return $cast($BoundMethodHandle$SpeciesData, $nc(BoundMethodHandle::SPECIALIZER)->topSpecies());
}

int32_t BoundMethodHandle::fieldCount() {
	return $nc($(speciesData()))->fieldCount();
}

$Object* BoundMethodHandle::internalProperties() {
	return $of($str({"\n& BMH="_s, $($cast($String, internalValues()))}));
}

$Object* BoundMethodHandle::internalValues() {
	$useLocalCurrentObjectStackCache();
	int32_t count = fieldCount();
	if (count == 1) {
		return $of($str({"["_s, $(arg(0)), "]"_s}));
	}
	$var($StringBuilder, sb, $new($StringBuilder, "["_s));
	for (int32_t i = 0; i < count; ++i) {
		sb->append("\n  "_s)->append(i)->append(": ( "_s)->append($(arg(i)))->append(" )"_s);
	}
	return $of(sb->append("\n]"_s)->toString());
}

$Object* BoundMethodHandle::arg(int32_t i) {
	$useLocalCurrentObjectStackCache();
	try {
		$Class* fieldType = $cast($Class, $nc($($nc($(speciesData()))->fieldTypes()))->get(i));
		$init($BoundMethodHandle$1);
		switch ($nc($BoundMethodHandle$1::$SwitchMap$java$lang$invoke$LambdaForm$BasicType)->get($nc(($($LambdaForm$BasicType::basicType(fieldType))))->ordinal())) {
		case 1:
			{
				return $of($nc($($nc($(speciesData()))->getter(i)))->invokeBasic($$new($ObjectArray, {$of(this)})));
			}
		case 2:
			{
				return $of($Integer::valueOf($intValue($nc($($nc($(speciesData()))->getter(i)))->invokeBasic($$new($ObjectArray, {$of(this)})))));
			}
		case 3:
			{
				return $of($Long::valueOf($longValue($nc($($nc($(speciesData()))->getter(i)))->invokeBasic($$new($ObjectArray, {$of(this)})))));
			}
		case 4:
			{
				return $of($Float::valueOf($floatValue($nc($($nc($(speciesData()))->getter(i)))->invokeBasic($$new($ObjectArray, {$of(this)})))));
			}
		case 5:
			{
				return $of($Double::valueOf($doubleValue($nc($($nc($(speciesData()))->getter(i)))->invokeBasic($$new($ObjectArray, {$of(this)})))));
			}
		}
	} catch ($Throwable& ex) {
		$throw($($MethodHandleStatics::uncaughtException(ex)));
	}
	$throwNew($InternalError, $$str({"unexpected type: "_s, $cast($String, $($nc($(speciesData()))->key())), "."_s, $$str(i)}));
	$shouldNotReachHere();
}

$BoundMethodHandle$SpeciesData* BoundMethodHandle::speciesData_L() {
	$init(BoundMethodHandle);
	$init($BoundMethodHandle$Species_L);
	return $BoundMethodHandle$Species_L::BMH_SPECIES;
}

$BoundMethodHandle$SpeciesData* BoundMethodHandle::speciesData_LL() {
	$init(BoundMethodHandle);
	return $cast($BoundMethodHandle$SpeciesData, $nc(BoundMethodHandle::SPECIALIZER)->findSpecies("LL"_s));
}

$BoundMethodHandle$SpeciesData* BoundMethodHandle::speciesData_LLL() {
	$init(BoundMethodHandle);
	return $cast($BoundMethodHandle$SpeciesData, $nc(BoundMethodHandle::SPECIALIZER)->findSpecies("LLL"_s));
}

$BoundMethodHandle$SpeciesData* BoundMethodHandle::speciesData_LLLL() {
	$init(BoundMethodHandle);
	return $cast($BoundMethodHandle$SpeciesData, $nc(BoundMethodHandle::SPECIALIZER)->findSpecies("LLLL"_s));
}

$BoundMethodHandle$SpeciesData* BoundMethodHandle::speciesData_LLLLL() {
	$init(BoundMethodHandle);
	return $cast($BoundMethodHandle$SpeciesData, $nc(BoundMethodHandle::SPECIALIZER)->findSpecies("LLLLL"_s));
}

void clinit$BoundMethodHandle($Class* class$) {
	BoundMethodHandle::$assertionsDisabled = !BoundMethodHandle::class$->desiredAssertionStatus();
	$assignStatic(BoundMethodHandle::SPECIALIZER, $new($BoundMethodHandle$Specializer));
	{
		$init($SimpleMethodHandle);
		$assignStatic($SimpleMethodHandle::BMH_SPECIES, $cast($BoundMethodHandle$SpeciesData, $nc(BoundMethodHandle::SPECIALIZER)->findSpecies(""_s)));
		$init($BoundMethodHandle$Species_L);
		$assignStatic($BoundMethodHandle$Species_L::BMH_SPECIES, $cast($BoundMethodHandle$SpeciesData, $nc(BoundMethodHandle::SPECIALIZER)->findSpecies("L"_s)));
	}
}

BoundMethodHandle::BoundMethodHandle() {
}

$Class* BoundMethodHandle::load$($String* name, bool initialize) {
	$loadClass(BoundMethodHandle, name, initialize, &_BoundMethodHandle_ClassInfo_, clinit$BoundMethodHandle, allocate$BoundMethodHandle);
	return class$;
}

$Class* BoundMethodHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java