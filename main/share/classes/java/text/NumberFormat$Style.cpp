#include <java/text/NumberFormat$Style.h>

#include <java/lang/Enum.h>
#include <java/text/NumberFormat.h>
#include <jcpp.h>

#undef LONG
#undef SHORT

using $NumberFormat$StyleArray = $Array<::java::text::NumberFormat$Style>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace text {

$FieldInfo _NumberFormat$Style_FieldInfo_[] = {
	{"SHORT", "Ljava/text/NumberFormat$Style;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumberFormat$Style, SHORT)},
	{"LONG", "Ljava/text/NumberFormat$Style;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumberFormat$Style, LONG)},
	{"$VALUES", "[Ljava/text/NumberFormat$Style;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(NumberFormat$Style, $VALUES)},
	{}
};

$MethodInfo _NumberFormat$Style_MethodInfo_[] = {
	{"$values", "()[Ljava/text/NumberFormat$Style;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(NumberFormat$Style, $values, $NumberFormat$StyleArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(NumberFormat$Style, init$, void, $String*, int32_t)},
	{"valueOf", "(Ljava/lang/String;)Ljava/text/NumberFormat$Style;", nullptr, $PUBLIC | $STATIC, $staticMethod(NumberFormat$Style, valueOf, NumberFormat$Style*, $String*)},
	{"values", "()[Ljava/text/NumberFormat$Style;", nullptr, $PUBLIC | $STATIC, $staticMethod(NumberFormat$Style, values, $NumberFormat$StyleArray*)},
	{}
};

$InnerClassInfo _NumberFormat$Style_InnerClassesInfo_[] = {
	{"java.text.NumberFormat$Style", "java.text.NumberFormat", "Style", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _NumberFormat$Style_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.text.NumberFormat$Style",
	"java.lang.Enum",
	nullptr,
	_NumberFormat$Style_FieldInfo_,
	_NumberFormat$Style_MethodInfo_,
	"Ljava/lang/Enum<Ljava/text/NumberFormat$Style;>;",
	nullptr,
	_NumberFormat$Style_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.text.NumberFormat"
};

$Object* allocate$NumberFormat$Style($Class* clazz) {
	return $of($alloc(NumberFormat$Style));
}

NumberFormat$Style* NumberFormat$Style::SHORT = nullptr;
NumberFormat$Style* NumberFormat$Style::LONG = nullptr;
$NumberFormat$StyleArray* NumberFormat$Style::$VALUES = nullptr;

$NumberFormat$StyleArray* NumberFormat$Style::$values() {
	$init(NumberFormat$Style);
	return $new($NumberFormat$StyleArray, {
		NumberFormat$Style::SHORT,
		NumberFormat$Style::LONG
	});
}

$NumberFormat$StyleArray* NumberFormat$Style::values() {
	$init(NumberFormat$Style);
	return $cast($NumberFormat$StyleArray, NumberFormat$Style::$VALUES->clone());
}

NumberFormat$Style* NumberFormat$Style::valueOf($String* name) {
	$init(NumberFormat$Style);
	return $cast(NumberFormat$Style, $Enum::valueOf(NumberFormat$Style::class$, name));
}

void NumberFormat$Style::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$NumberFormat$Style($Class* class$) {
	$assignStatic(NumberFormat$Style::SHORT, $new(NumberFormat$Style, "SHORT"_s, 0));
	$assignStatic(NumberFormat$Style::LONG, $new(NumberFormat$Style, "LONG"_s, 1));
	$assignStatic(NumberFormat$Style::$VALUES, NumberFormat$Style::$values());
}

NumberFormat$Style::NumberFormat$Style() {
}

$Class* NumberFormat$Style::load$($String* name, bool initialize) {
	$loadClass(NumberFormat$Style, name, initialize, &_NumberFormat$Style_ClassInfo_, clinit$NumberFormat$Style, allocate$NumberFormat$Style);
	return class$;
}

$Class* NumberFormat$Style::class$ = nullptr;

	} // text
} // java