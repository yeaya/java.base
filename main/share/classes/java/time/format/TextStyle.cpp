#include <java/time/format/TextStyle.h>

#include <java/lang/Enum.h>
#include <java/util/Calendar.h>
#include <jcpp.h>

#undef FULL
#undef FULL_STANDALONE
#undef LONG_FORMAT
#undef LONG_STANDALONE
#undef NARROW
#undef NARROW_FORMAT
#undef NARROW_STANDALONE
#undef SHORT
#undef SHORT_FORMAT
#undef SHORT_STANDALONE

using $TextStyleArray = $Array<::java::time::format::TextStyle>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Calendar = ::java::util::Calendar;

namespace java {
	namespace time {
		namespace format {

$FieldInfo _TextStyle_FieldInfo_[] = {
	{"FULL", "Ljava/time/format/TextStyle;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TextStyle, FULL)},
	{"FULL_STANDALONE", "Ljava/time/format/TextStyle;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TextStyle, FULL_STANDALONE)},
	{"SHORT", "Ljava/time/format/TextStyle;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TextStyle, SHORT)},
	{"SHORT_STANDALONE", "Ljava/time/format/TextStyle;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TextStyle, SHORT_STANDALONE)},
	{"NARROW", "Ljava/time/format/TextStyle;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TextStyle, NARROW)},
	{"NARROW_STANDALONE", "Ljava/time/format/TextStyle;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TextStyle, NARROW_STANDALONE)},
	{"$VALUES", "[Ljava/time/format/TextStyle;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(TextStyle, $VALUES)},
	{"calendarStyle", "I", nullptr, $PRIVATE | $FINAL, $field(TextStyle, calendarStyle)},
	{"zoneNameStyleIndex", "I", nullptr, $PRIVATE | $FINAL, $field(TextStyle, zoneNameStyleIndex$)},
	{}
};

$MethodInfo _TextStyle_MethodInfo_[] = {
	{"$values", "()[Ljava/time/format/TextStyle;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TextStyle, $values, $TextStyleArray*)},
	{"<init>", "(Ljava/lang/String;III)V", "(II)V", $PRIVATE, $method(TextStyle, init$, void, $String*, int32_t, int32_t, int32_t)},
	{"asNormal", "()Ljava/time/format/TextStyle;", nullptr, $PUBLIC, $method(TextStyle, asNormal, TextStyle*)},
	{"asStandalone", "()Ljava/time/format/TextStyle;", nullptr, $PUBLIC, $method(TextStyle, asStandalone, TextStyle*)},
	{"isStandalone", "()Z", nullptr, $PUBLIC, $method(TextStyle, isStandalone, bool)},
	{"toCalendarStyle", "()I", nullptr, 0, $method(TextStyle, toCalendarStyle, int32_t)},
	{"valueOf", "(Ljava/lang/String;)Ljava/time/format/TextStyle;", nullptr, $PUBLIC | $STATIC, $staticMethod(TextStyle, valueOf, TextStyle*, $String*)},
	{"values", "()[Ljava/time/format/TextStyle;", nullptr, $PUBLIC | $STATIC, $staticMethod(TextStyle, values, $TextStyleArray*)},
	{"zoneNameStyleIndex", "()I", nullptr, 0, $method(TextStyle, zoneNameStyleIndex, int32_t)},
	{}
};

$ClassInfo _TextStyle_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.time.format.TextStyle",
	"java.lang.Enum",
	nullptr,
	_TextStyle_FieldInfo_,
	_TextStyle_MethodInfo_,
	"Ljava/lang/Enum<Ljava/time/format/TextStyle;>;"
};

$Object* allocate$TextStyle($Class* clazz) {
	return $of($alloc(TextStyle));
}

TextStyle* TextStyle::FULL = nullptr;
TextStyle* TextStyle::FULL_STANDALONE = nullptr;
TextStyle* TextStyle::SHORT = nullptr;
TextStyle* TextStyle::SHORT_STANDALONE = nullptr;
TextStyle* TextStyle::NARROW = nullptr;
TextStyle* TextStyle::NARROW_STANDALONE = nullptr;
$TextStyleArray* TextStyle::$VALUES = nullptr;

$TextStyleArray* TextStyle::$values() {
	$init(TextStyle);
	return $new($TextStyleArray, {
		TextStyle::FULL,
		TextStyle::FULL_STANDALONE,
		TextStyle::SHORT,
		TextStyle::SHORT_STANDALONE,
		TextStyle::NARROW,
		TextStyle::NARROW_STANDALONE
	});
}

$TextStyleArray* TextStyle::values() {
	$init(TextStyle);
	return $cast($TextStyleArray, TextStyle::$VALUES->clone());
}

TextStyle* TextStyle::valueOf($String* name) {
	$init(TextStyle);
	return $cast(TextStyle, $Enum::valueOf(TextStyle::class$, name));
}

void TextStyle::init$($String* $enum$name, int32_t $enum$ordinal, int32_t calendarStyle, int32_t zoneNameStyleIndex) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->calendarStyle = calendarStyle;
	this->zoneNameStyleIndex$ = zoneNameStyleIndex;
}

bool TextStyle::isStandalone() {
	return ((int32_t)(ordinal() & (uint32_t)1)) == 1;
}

TextStyle* TextStyle::asStandalone() {
	return $(TextStyle::values())->get(ordinal() | 1);
}

TextStyle* TextStyle::asNormal() {
	return $(TextStyle::values())->get((int32_t)(ordinal() & (uint32_t)~1));
}

int32_t TextStyle::toCalendarStyle() {
	return this->calendarStyle;
}

int32_t TextStyle::zoneNameStyleIndex() {
	return this->zoneNameStyleIndex$;
}

void clinit$TextStyle($Class* class$) {
	$assignStatic(TextStyle::FULL, $new(TextStyle, "FULL"_s, 0, $Calendar::LONG_FORMAT, 0));
	$assignStatic(TextStyle::FULL_STANDALONE, $new(TextStyle, "FULL_STANDALONE"_s, 1, $Calendar::LONG_STANDALONE, 0));
	$assignStatic(TextStyle::SHORT, $new(TextStyle, "SHORT"_s, 2, $Calendar::SHORT_FORMAT, 1));
	$assignStatic(TextStyle::SHORT_STANDALONE, $new(TextStyle, "SHORT_STANDALONE"_s, 3, $Calendar::SHORT_STANDALONE, 1));
	$assignStatic(TextStyle::NARROW, $new(TextStyle, "NARROW"_s, 4, $Calendar::NARROW_FORMAT, 1));
	$assignStatic(TextStyle::NARROW_STANDALONE, $new(TextStyle, "NARROW_STANDALONE"_s, 5, $Calendar::NARROW_STANDALONE, 1));
	$assignStatic(TextStyle::$VALUES, TextStyle::$values());
}

TextStyle::TextStyle() {
}

$Class* TextStyle::load$($String* name, bool initialize) {
	$loadClass(TextStyle, name, initialize, &_TextStyle_ClassInfo_, clinit$TextStyle, allocate$TextStyle);
	return class$;
}

$Class* TextStyle::class$ = nullptr;

		} // format
	} // time
} // java