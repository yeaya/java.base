#include <java/util/Formatter$BigDecimalLayoutForm.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Formatter.h>
#include <jcpp.h>

#undef SCIENTIFIC
#undef DECIMAL_FLOAT

using $Formatter$BigDecimalLayoutFormArray = $Array<::java::util::Formatter$BigDecimalLayoutForm>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Formatter = ::java::util::Formatter;

namespace java {
	namespace util {

$FieldInfo _Formatter$BigDecimalLayoutForm_FieldInfo_[] = {
	{"SCIENTIFIC", "Ljava/util/Formatter$BigDecimalLayoutForm;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Formatter$BigDecimalLayoutForm, SCIENTIFIC)},
	{"DECIMAL_FLOAT", "Ljava/util/Formatter$BigDecimalLayoutForm;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Formatter$BigDecimalLayoutForm, DECIMAL_FLOAT)},
	{"$VALUES", "[Ljava/util/Formatter$BigDecimalLayoutForm;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Formatter$BigDecimalLayoutForm, $VALUES)},
	{}
};

$MethodInfo _Formatter$BigDecimalLayoutForm_MethodInfo_[] = {
	{"$values", "()[Ljava/util/Formatter$BigDecimalLayoutForm;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Formatter$BigDecimalLayoutFormArray*(*)()>(&Formatter$BigDecimalLayoutForm::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Formatter$BigDecimalLayoutForm::*)($String*,int32_t)>(&Formatter$BigDecimalLayoutForm::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/util/Formatter$BigDecimalLayoutForm;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Formatter$BigDecimalLayoutForm*(*)($String*)>(&Formatter$BigDecimalLayoutForm::valueOf))},
	{"values", "()[Ljava/util/Formatter$BigDecimalLayoutForm;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Formatter$BigDecimalLayoutFormArray*(*)()>(&Formatter$BigDecimalLayoutForm::values))},
	{}
};

$InnerClassInfo _Formatter$BigDecimalLayoutForm_InnerClassesInfo_[] = {
	{"java.util.Formatter$BigDecimalLayoutForm", "java.util.Formatter", "BigDecimalLayoutForm", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Formatter$BigDecimalLayoutForm_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.util.Formatter$BigDecimalLayoutForm",
	"java.lang.Enum",
	nullptr,
	_Formatter$BigDecimalLayoutForm_FieldInfo_,
	_Formatter$BigDecimalLayoutForm_MethodInfo_,
	"Ljava/lang/Enum<Ljava/util/Formatter$BigDecimalLayoutForm;>;",
	nullptr,
	_Formatter$BigDecimalLayoutForm_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Formatter"
};

$Object* allocate$Formatter$BigDecimalLayoutForm($Class* clazz) {
	return $of($alloc(Formatter$BigDecimalLayoutForm));
}


Formatter$BigDecimalLayoutForm* Formatter$BigDecimalLayoutForm::SCIENTIFIC = nullptr;

Formatter$BigDecimalLayoutForm* Formatter$BigDecimalLayoutForm::DECIMAL_FLOAT = nullptr;
$Formatter$BigDecimalLayoutFormArray* Formatter$BigDecimalLayoutForm::$VALUES = nullptr;

$Formatter$BigDecimalLayoutFormArray* Formatter$BigDecimalLayoutForm::$values() {
	$init(Formatter$BigDecimalLayoutForm);
	return $new($Formatter$BigDecimalLayoutFormArray, {
		Formatter$BigDecimalLayoutForm::SCIENTIFIC,
		Formatter$BigDecimalLayoutForm::DECIMAL_FLOAT
	});
}

$Formatter$BigDecimalLayoutFormArray* Formatter$BigDecimalLayoutForm::values() {
	$init(Formatter$BigDecimalLayoutForm);
	return $cast($Formatter$BigDecimalLayoutFormArray, Formatter$BigDecimalLayoutForm::$VALUES->clone());
}

Formatter$BigDecimalLayoutForm* Formatter$BigDecimalLayoutForm::valueOf($String* name) {
	$init(Formatter$BigDecimalLayoutForm);
	return $cast(Formatter$BigDecimalLayoutForm, $Enum::valueOf(Formatter$BigDecimalLayoutForm::class$, name));
}

void Formatter$BigDecimalLayoutForm::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Formatter$BigDecimalLayoutForm($Class* class$) {
	$assignStatic(Formatter$BigDecimalLayoutForm::SCIENTIFIC, $new(Formatter$BigDecimalLayoutForm, "SCIENTIFIC"_s, 0));
	$assignStatic(Formatter$BigDecimalLayoutForm::DECIMAL_FLOAT, $new(Formatter$BigDecimalLayoutForm, "DECIMAL_FLOAT"_s, 1));
	$assignStatic(Formatter$BigDecimalLayoutForm::$VALUES, Formatter$BigDecimalLayoutForm::$values());
}

Formatter$BigDecimalLayoutForm::Formatter$BigDecimalLayoutForm() {
}

$Class* Formatter$BigDecimalLayoutForm::load$($String* name, bool initialize) {
	$loadClass(Formatter$BigDecimalLayoutForm, name, initialize, &_Formatter$BigDecimalLayoutForm_ClassInfo_, clinit$Formatter$BigDecimalLayoutForm, allocate$Formatter$BigDecimalLayoutForm);
	return class$;
}

$Class* Formatter$BigDecimalLayoutForm::class$ = nullptr;

	} // util
} // java