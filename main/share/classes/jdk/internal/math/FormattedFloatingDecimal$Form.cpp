#include <jdk/internal/math/FormattedFloatingDecimal$Form.h>

#include <java/lang/Enum.h>
#include <jdk/internal/math/FormattedFloatingDecimal.h>
#include <jcpp.h>

#undef COMPATIBLE
#undef DECIMAL_FLOAT
#undef GENERAL
#undef SCIENTIFIC

using $FormattedFloatingDecimal$FormArray = $Array<::jdk::internal::math::FormattedFloatingDecimal$Form>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace math {

$FieldInfo _FormattedFloatingDecimal$Form_FieldInfo_[] = {
	{"SCIENTIFIC", "Ljdk/internal/math/FormattedFloatingDecimal$Form;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FormattedFloatingDecimal$Form, SCIENTIFIC)},
	{"COMPATIBLE", "Ljdk/internal/math/FormattedFloatingDecimal$Form;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FormattedFloatingDecimal$Form, COMPATIBLE)},
	{"DECIMAL_FLOAT", "Ljdk/internal/math/FormattedFloatingDecimal$Form;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FormattedFloatingDecimal$Form, DECIMAL_FLOAT)},
	{"GENERAL", "Ljdk/internal/math/FormattedFloatingDecimal$Form;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FormattedFloatingDecimal$Form, GENERAL)},
	{"$VALUES", "[Ljdk/internal/math/FormattedFloatingDecimal$Form;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(FormattedFloatingDecimal$Form, $VALUES)},
	{}
};

$MethodInfo _FormattedFloatingDecimal$Form_MethodInfo_[] = {
	{"$values", "()[Ljdk/internal/math/FormattedFloatingDecimal$Form;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FormattedFloatingDecimal$Form, $values, $FormattedFloatingDecimal$FormArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(FormattedFloatingDecimal$Form, init$, void, $String*, int32_t)},
	{"valueOf", "(Ljava/lang/String;)Ljdk/internal/math/FormattedFloatingDecimal$Form;", nullptr, $PUBLIC | $STATIC, $staticMethod(FormattedFloatingDecimal$Form, valueOf, FormattedFloatingDecimal$Form*, $String*)},
	{"values", "()[Ljdk/internal/math/FormattedFloatingDecimal$Form;", nullptr, $PUBLIC | $STATIC, $staticMethod(FormattedFloatingDecimal$Form, values, $FormattedFloatingDecimal$FormArray*)},
	{}
};

$InnerClassInfo _FormattedFloatingDecimal$Form_InnerClassesInfo_[] = {
	{"jdk.internal.math.FormattedFloatingDecimal$Form", "jdk.internal.math.FormattedFloatingDecimal", "Form", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _FormattedFloatingDecimal$Form_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"jdk.internal.math.FormattedFloatingDecimal$Form",
	"java.lang.Enum",
	nullptr,
	_FormattedFloatingDecimal$Form_FieldInfo_,
	_FormattedFloatingDecimal$Form_MethodInfo_,
	"Ljava/lang/Enum<Ljdk/internal/math/FormattedFloatingDecimal$Form;>;",
	nullptr,
	_FormattedFloatingDecimal$Form_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.math.FormattedFloatingDecimal"
};

$Object* allocate$FormattedFloatingDecimal$Form($Class* clazz) {
	return $of($alloc(FormattedFloatingDecimal$Form));
}

FormattedFloatingDecimal$Form* FormattedFloatingDecimal$Form::SCIENTIFIC = nullptr;
FormattedFloatingDecimal$Form* FormattedFloatingDecimal$Form::COMPATIBLE = nullptr;
FormattedFloatingDecimal$Form* FormattedFloatingDecimal$Form::DECIMAL_FLOAT = nullptr;
FormattedFloatingDecimal$Form* FormattedFloatingDecimal$Form::GENERAL = nullptr;
$FormattedFloatingDecimal$FormArray* FormattedFloatingDecimal$Form::$VALUES = nullptr;

$FormattedFloatingDecimal$FormArray* FormattedFloatingDecimal$Form::$values() {
	$init(FormattedFloatingDecimal$Form);
	return $new($FormattedFloatingDecimal$FormArray, {
		FormattedFloatingDecimal$Form::SCIENTIFIC,
		FormattedFloatingDecimal$Form::COMPATIBLE,
		FormattedFloatingDecimal$Form::DECIMAL_FLOAT,
		FormattedFloatingDecimal$Form::GENERAL
	});
}

$FormattedFloatingDecimal$FormArray* FormattedFloatingDecimal$Form::values() {
	$init(FormattedFloatingDecimal$Form);
	return $cast($FormattedFloatingDecimal$FormArray, FormattedFloatingDecimal$Form::$VALUES->clone());
}

FormattedFloatingDecimal$Form* FormattedFloatingDecimal$Form::valueOf($String* name) {
	$init(FormattedFloatingDecimal$Form);
	return $cast(FormattedFloatingDecimal$Form, $Enum::valueOf(FormattedFloatingDecimal$Form::class$, name));
}

void FormattedFloatingDecimal$Form::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$FormattedFloatingDecimal$Form($Class* class$) {
	$assignStatic(FormattedFloatingDecimal$Form::SCIENTIFIC, $new(FormattedFloatingDecimal$Form, "SCIENTIFIC"_s, 0));
	$assignStatic(FormattedFloatingDecimal$Form::COMPATIBLE, $new(FormattedFloatingDecimal$Form, "COMPATIBLE"_s, 1));
	$assignStatic(FormattedFloatingDecimal$Form::DECIMAL_FLOAT, $new(FormattedFloatingDecimal$Form, "DECIMAL_FLOAT"_s, 2));
	$assignStatic(FormattedFloatingDecimal$Form::GENERAL, $new(FormattedFloatingDecimal$Form, "GENERAL"_s, 3));
	$assignStatic(FormattedFloatingDecimal$Form::$VALUES, FormattedFloatingDecimal$Form::$values());
}

FormattedFloatingDecimal$Form::FormattedFloatingDecimal$Form() {
}

$Class* FormattedFloatingDecimal$Form::load$($String* name, bool initialize) {
	$loadClass(FormattedFloatingDecimal$Form, name, initialize, &_FormattedFloatingDecimal$Form_ClassInfo_, clinit$FormattedFloatingDecimal$Form, allocate$FormattedFloatingDecimal$Form);
	return class$;
}

$Class* FormattedFloatingDecimal$Form::class$ = nullptr;

		} // math
	} // internal
} // jdk