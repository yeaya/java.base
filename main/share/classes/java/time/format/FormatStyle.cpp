#include <java/time/format/FormatStyle.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef FULL
#undef LONG
#undef MEDIUM
#undef SHORT

using $FormatStyleArray = $Array<::java::time::format::FormatStyle>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace time {
		namespace format {

$FieldInfo _FormatStyle_FieldInfo_[] = {
	{"FULL", "Ljava/time/format/FormatStyle;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FormatStyle, FULL)},
	{"LONG", "Ljava/time/format/FormatStyle;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FormatStyle, LONG)},
	{"MEDIUM", "Ljava/time/format/FormatStyle;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FormatStyle, MEDIUM)},
	{"SHORT", "Ljava/time/format/FormatStyle;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FormatStyle, SHORT)},
	{"$VALUES", "[Ljava/time/format/FormatStyle;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(FormatStyle, $VALUES)},
	{}
};

$MethodInfo _FormatStyle_MethodInfo_[] = {
	{"$values", "()[Ljava/time/format/FormatStyle;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FormatStyle, $values, $FormatStyleArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(FormatStyle, init$, void, $String*, int32_t)},
	{"valueOf", "(Ljava/lang/String;)Ljava/time/format/FormatStyle;", nullptr, $PUBLIC | $STATIC, $staticMethod(FormatStyle, valueOf, FormatStyle*, $String*)},
	{"values", "()[Ljava/time/format/FormatStyle;", nullptr, $PUBLIC | $STATIC, $staticMethod(FormatStyle, values, $FormatStyleArray*)},
	{}
};

$ClassInfo _FormatStyle_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.time.format.FormatStyle",
	"java.lang.Enum",
	nullptr,
	_FormatStyle_FieldInfo_,
	_FormatStyle_MethodInfo_,
	"Ljava/lang/Enum<Ljava/time/format/FormatStyle;>;"
};

$Object* allocate$FormatStyle($Class* clazz) {
	return $of($alloc(FormatStyle));
}

FormatStyle* FormatStyle::FULL = nullptr;
FormatStyle* FormatStyle::LONG = nullptr;
FormatStyle* FormatStyle::MEDIUM = nullptr;
FormatStyle* FormatStyle::SHORT = nullptr;
$FormatStyleArray* FormatStyle::$VALUES = nullptr;

$FormatStyleArray* FormatStyle::$values() {
	$init(FormatStyle);
	return $new($FormatStyleArray, {
		FormatStyle::FULL,
		FormatStyle::LONG,
		FormatStyle::MEDIUM,
		FormatStyle::SHORT
	});
}

$FormatStyleArray* FormatStyle::values() {
	$init(FormatStyle);
	return $cast($FormatStyleArray, FormatStyle::$VALUES->clone());
}

FormatStyle* FormatStyle::valueOf($String* name) {
	$init(FormatStyle);
	return $cast(FormatStyle, $Enum::valueOf(FormatStyle::class$, name));
}

void FormatStyle::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$FormatStyle($Class* class$) {
	$assignStatic(FormatStyle::FULL, $new(FormatStyle, "FULL"_s, 0));
	$assignStatic(FormatStyle::LONG, $new(FormatStyle, "LONG"_s, 1));
	$assignStatic(FormatStyle::MEDIUM, $new(FormatStyle, "MEDIUM"_s, 2));
	$assignStatic(FormatStyle::SHORT, $new(FormatStyle, "SHORT"_s, 3));
	$assignStatic(FormatStyle::$VALUES, FormatStyle::$values());
}

FormatStyle::FormatStyle() {
}

$Class* FormatStyle::load$($String* name, bool initialize) {
	$loadClass(FormatStyle, name, initialize, &_FormatStyle_ClassInfo_, clinit$FormatStyle, allocate$FormatStyle);
	return class$;
}

$Class* FormatStyle::class$ = nullptr;

		} // format
	} // time
} // java