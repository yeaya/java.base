#include <java/text/Normalizer$Form.h>

#include <java/lang/Enum.h>
#include <java/text/Normalizer.h>
#include <jcpp.h>

#undef NFC
#undef NFD
#undef NFKC
#undef NFKD

using $Normalizer$FormArray = $Array<::java::text::Normalizer$Form>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace text {

$FieldInfo _Normalizer$Form_FieldInfo_[] = {
	{"NFD", "Ljava/text/Normalizer$Form;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Normalizer$Form, NFD)},
	{"NFC", "Ljava/text/Normalizer$Form;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Normalizer$Form, NFC)},
	{"NFKD", "Ljava/text/Normalizer$Form;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Normalizer$Form, NFKD)},
	{"NFKC", "Ljava/text/Normalizer$Form;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Normalizer$Form, NFKC)},
	{"$VALUES", "[Ljava/text/Normalizer$Form;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Normalizer$Form, $VALUES)},
	{}
};

$MethodInfo _Normalizer$Form_MethodInfo_[] = {
	{"$values", "()[Ljava/text/Normalizer$Form;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Normalizer$Form, $values, $Normalizer$FormArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(Normalizer$Form, init$, void, $String*, int32_t)},
	{"valueOf", "(Ljava/lang/String;)Ljava/text/Normalizer$Form;", nullptr, $PUBLIC | $STATIC, $staticMethod(Normalizer$Form, valueOf, Normalizer$Form*, $String*)},
	{"values", "()[Ljava/text/Normalizer$Form;", nullptr, $PUBLIC | $STATIC, $staticMethod(Normalizer$Form, values, $Normalizer$FormArray*)},
	{}
};

$InnerClassInfo _Normalizer$Form_InnerClassesInfo_[] = {
	{"java.text.Normalizer$Form", "java.text.Normalizer", "Form", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Normalizer$Form_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.text.Normalizer$Form",
	"java.lang.Enum",
	nullptr,
	_Normalizer$Form_FieldInfo_,
	_Normalizer$Form_MethodInfo_,
	"Ljava/lang/Enum<Ljava/text/Normalizer$Form;>;",
	nullptr,
	_Normalizer$Form_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.text.Normalizer"
};

$Object* allocate$Normalizer$Form($Class* clazz) {
	return $of($alloc(Normalizer$Form));
}

Normalizer$Form* Normalizer$Form::NFD = nullptr;
Normalizer$Form* Normalizer$Form::NFC = nullptr;
Normalizer$Form* Normalizer$Form::NFKD = nullptr;
Normalizer$Form* Normalizer$Form::NFKC = nullptr;
$Normalizer$FormArray* Normalizer$Form::$VALUES = nullptr;

$Normalizer$FormArray* Normalizer$Form::$values() {
	$init(Normalizer$Form);
	return $new($Normalizer$FormArray, {
		Normalizer$Form::NFD,
		Normalizer$Form::NFC,
		Normalizer$Form::NFKD,
		Normalizer$Form::NFKC
	});
}

$Normalizer$FormArray* Normalizer$Form::values() {
	$init(Normalizer$Form);
	return $cast($Normalizer$FormArray, Normalizer$Form::$VALUES->clone());
}

Normalizer$Form* Normalizer$Form::valueOf($String* name) {
	$init(Normalizer$Form);
	return $cast(Normalizer$Form, $Enum::valueOf(Normalizer$Form::class$, name));
}

void Normalizer$Form::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Normalizer$Form($Class* class$) {
	$assignStatic(Normalizer$Form::NFD, $new(Normalizer$Form, "NFD"_s, 0));
	$assignStatic(Normalizer$Form::NFC, $new(Normalizer$Form, "NFC"_s, 1));
	$assignStatic(Normalizer$Form::NFKD, $new(Normalizer$Form, "NFKD"_s, 2));
	$assignStatic(Normalizer$Form::NFKC, $new(Normalizer$Form, "NFKC"_s, 3));
	$assignStatic(Normalizer$Form::$VALUES, Normalizer$Form::$values());
}

Normalizer$Form::Normalizer$Form() {
}

$Class* Normalizer$Form::load$($String* name, bool initialize) {
	$loadClass(Normalizer$Form, name, initialize, &_Normalizer$Form_ClassInfo_, clinit$Normalizer$Form, allocate$Normalizer$Form);
	return class$;
}

$Class* Normalizer$Form::class$ = nullptr;

	} // text
} // java