#include <java/time/format/SignStyle.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ALWAYS
#undef EXCEEDS_PAD
#undef NEVER
#undef NORMAL
#undef NOT_NEGATIVE

using $SignStyleArray = $Array<::java::time::format::SignStyle>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace time {
		namespace format {

$FieldInfo _SignStyle_FieldInfo_[] = {
	{"NORMAL", "Ljava/time/format/SignStyle;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SignStyle, NORMAL)},
	{"ALWAYS", "Ljava/time/format/SignStyle;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SignStyle, ALWAYS)},
	{"NEVER", "Ljava/time/format/SignStyle;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SignStyle, NEVER)},
	{"NOT_NEGATIVE", "Ljava/time/format/SignStyle;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SignStyle, NOT_NEGATIVE)},
	{"EXCEEDS_PAD", "Ljava/time/format/SignStyle;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SignStyle, EXCEEDS_PAD)},
	{"$VALUES", "[Ljava/time/format/SignStyle;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(SignStyle, $VALUES)},
	{}
};

$MethodInfo _SignStyle_MethodInfo_[] = {
	{"$values", "()[Ljava/time/format/SignStyle;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SignStyle, $values, $SignStyleArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(SignStyle, init$, void, $String*, int32_t)},
	{"parse", "(ZZZ)Z", nullptr, 0, $method(SignStyle, parse, bool, bool, bool, bool)},
	{"valueOf", "(Ljava/lang/String;)Ljava/time/format/SignStyle;", nullptr, $PUBLIC | $STATIC, $staticMethod(SignStyle, valueOf, SignStyle*, $String*)},
	{"values", "()[Ljava/time/format/SignStyle;", nullptr, $PUBLIC | $STATIC, $staticMethod(SignStyle, values, $SignStyleArray*)},
	{}
};

$ClassInfo _SignStyle_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.time.format.SignStyle",
	"java.lang.Enum",
	nullptr,
	_SignStyle_FieldInfo_,
	_SignStyle_MethodInfo_,
	"Ljava/lang/Enum<Ljava/time/format/SignStyle;>;"
};

$Object* allocate$SignStyle($Class* clazz) {
	return $of($alloc(SignStyle));
}

SignStyle* SignStyle::NORMAL = nullptr;
SignStyle* SignStyle::ALWAYS = nullptr;
SignStyle* SignStyle::NEVER = nullptr;
SignStyle* SignStyle::NOT_NEGATIVE = nullptr;
SignStyle* SignStyle::EXCEEDS_PAD = nullptr;
$SignStyleArray* SignStyle::$VALUES = nullptr;

$SignStyleArray* SignStyle::$values() {
	$init(SignStyle);
	return $new($SignStyleArray, {
		SignStyle::NORMAL,
		SignStyle::ALWAYS,
		SignStyle::NEVER,
		SignStyle::NOT_NEGATIVE,
		SignStyle::EXCEEDS_PAD
	});
}

$SignStyleArray* SignStyle::values() {
	$init(SignStyle);
	return $cast($SignStyleArray, SignStyle::$VALUES->clone());
}

SignStyle* SignStyle::valueOf($String* name) {
	$init(SignStyle);
	return $cast(SignStyle, $Enum::valueOf(SignStyle::class$, name));
}

void SignStyle::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

bool SignStyle::parse(bool positive, bool strict, bool fixedWidth) {
	switch (ordinal()) {
	case 0:
		{
			return !positive || !strict;
		}
	case 1:
		{}
	case 4:
		{
			return true;
		}
	default:
		{
			return !strict && !fixedWidth;
		}
	}
}

void clinit$SignStyle($Class* class$) {
	$assignStatic(SignStyle::NORMAL, $new(SignStyle, "NORMAL"_s, 0));
	$assignStatic(SignStyle::ALWAYS, $new(SignStyle, "ALWAYS"_s, 1));
	$assignStatic(SignStyle::NEVER, $new(SignStyle, "NEVER"_s, 2));
	$assignStatic(SignStyle::NOT_NEGATIVE, $new(SignStyle, "NOT_NEGATIVE"_s, 3));
	$assignStatic(SignStyle::EXCEEDS_PAD, $new(SignStyle, "EXCEEDS_PAD"_s, 4));
	$assignStatic(SignStyle::$VALUES, SignStyle::$values());
}

SignStyle::SignStyle() {
}

$Class* SignStyle::load$($String* name, bool initialize) {
	$loadClass(SignStyle, name, initialize, &_SignStyle_ClassInfo_, clinit$SignStyle, allocate$SignStyle);
	return class$;
}

$Class* SignStyle::class$ = nullptr;

		} // format
	} // time
} // java