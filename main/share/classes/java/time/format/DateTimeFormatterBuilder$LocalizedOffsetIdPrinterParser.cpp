#include <java/time/format/DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Math.h>
#include <java/time/format/DateTimeFormatterBuilder.h>
#include <java/time/format/DateTimeParseContext.h>
#include <java/time/format/DateTimePrintContext.h>
#include <java/time/format/DateTimeTextProvider.h>
#include <java/time/format/TextStyle.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/TemporalField.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef FULL
#undef OFFSET_SECONDS

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateTimeFormatterBuilder = ::java::time::format::DateTimeFormatterBuilder;
using $DateTimeFormatterBuilder$DateTimePrinterParser = ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser;
using $DateTimeParseContext = ::java::time::format::DateTimeParseContext;
using $DateTimePrintContext = ::java::time::format::DateTimePrintContext;
using $DateTimeTextProvider = ::java::time::format::DateTimeTextProvider;
using $TextStyle = ::java::time::format::TextStyle;
using $ChronoField = ::java::time::temporal::ChronoField;
using $TemporalField = ::java::time::temporal::TemporalField;
using $Locale = ::java::util::Locale;

namespace java {
	namespace time {
		namespace format {

$FieldInfo _DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser_FieldInfo_[] = {
	{"style", "Ljava/time/format/TextStyle;", nullptr, $PRIVATE | $FINAL, $field(DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser, style)},
	{}
};

$MethodInfo _DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser_MethodInfo_[] = {
	{"<init>", "(Ljava/time/format/TextStyle;)V", nullptr, 0, $method(static_cast<void(DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser::*)($TextStyle*)>(&DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser::init$))},
	{"appendHMS", "(Ljava/lang/StringBuilder;I)Ljava/lang/StringBuilder;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$StringBuilder*(*)($StringBuilder*,int32_t)>(&DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser::appendHMS))},
	{"format", "(Ljava/time/format/DateTimePrintContext;Ljava/lang/StringBuilder;)Z", nullptr, $PUBLIC},
	{"getDigit", "(Ljava/lang/CharSequence;I)I", nullptr, 0, $method(static_cast<int32_t(DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser::*)($CharSequence*,int32_t)>(&DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser::getDigit))},
	{"parse", "(Ljava/time/format/DateTimeParseContext;Ljava/lang/CharSequence;I)I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser_InnerClassesInfo_[] = {
	{"java.time.format.DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser", "java.time.format.DateTimeFormatterBuilder", "LocalizedOffsetIdPrinterParser", $STATIC | $FINAL},
	{"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser", "java.time.format.DateTimeFormatterBuilder", "DateTimePrinterParser", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.time.format.DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser",
	"java.lang.Object",
	"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser",
	_DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser_FieldInfo_,
	_DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser_MethodInfo_,
	nullptr,
	nullptr,
	_DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.format.DateTimeFormatterBuilder"
};

$Object* allocate$DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser($Class* clazz) {
	return $of($alloc(DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser));
}

void DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser::init$($TextStyle* style) {
	$set(this, style, style);
}

$StringBuilder* DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser::appendHMS($StringBuilder* buf, int32_t t) {
	$init(DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser);
	return $nc(buf)->append((char16_t)(t / 10 + u'0'))->append((char16_t)(t % 10 + u'0'));
}

bool DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser::format($DateTimePrintContext* context, $StringBuilder* buf) {
	$useLocalCurrentObjectStackCache();
	$init($ChronoField);
	$var($Long, offsetSecs, $nc(context)->getValue(static_cast<$TemporalField*>($ChronoField::OFFSET_SECONDS)));
	if (offsetSecs == nullptr) {
		return false;
	}
	$var($String, key, "timezone.gmtZeroFormat"_s);
	$var($String, gmtText, $cast($String, $DateTimeTextProvider::getLocalizedResource(key, $(context->getLocale()))));
	if (gmtText == nullptr) {
		$assign(gmtText, "GMT"_s);
	}
	$nc(buf)->append(gmtText);
	int32_t totalSecs = $Math::toIntExact($nc(offsetSecs)->longValue());
	if (totalSecs != 0) {
		int32_t absHours = $Math::abs((totalSecs / 3600) % 100);
		int32_t absMinutes = $Math::abs((totalSecs / 60) % 60);
		int32_t absSeconds = $Math::abs(totalSecs % 60);
		buf->append(totalSecs < 0 ? "-"_s : "+"_s);
		$init($TextStyle);
		if (this->style == $TextStyle::FULL) {
			appendHMS(buf, absHours);
			buf->append(u':');
			appendHMS(buf, absMinutes);
			if (absSeconds != 0) {
				buf->append(u':');
				appendHMS(buf, absSeconds);
			}
		} else {
			if (absHours >= 10) {
				buf->append((char16_t)(absHours / 10 + u'0'));
			}
			buf->append((char16_t)(absHours % 10 + u'0'));
			if (absMinutes != 0 || absSeconds != 0) {
				buf->append(u':');
				appendHMS(buf, absMinutes);
				if (absSeconds != 0) {
					buf->append(u':');
					appendHMS(buf, absSeconds);
				}
			}
		}
	}
	return true;
}

int32_t DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser::getDigit($CharSequence* text, int32_t position) {
	char16_t c = $nc(text)->charAt(position);
	if (c < u'0' || c > u'9') {
		return -1;
	}
	return c - u'0';
}

int32_t DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser::parse($DateTimeParseContext* context, $CharSequence* text, int32_t position) {
	$useLocalCurrentObjectStackCache();
	int32_t pos = position;
	int32_t end = $nc(text)->length();
	$var($String, key, "timezone.gmtZeroFormat"_s);
	$var($String, gmtText, $cast($String, $DateTimeTextProvider::getLocalizedResource(key, $($nc(context)->getLocale()))));
	if (gmtText == nullptr) {
		$assign(gmtText, "GMT"_s);
	}
	if (!$nc(context)->subSequenceEquals(text, pos, gmtText, 0, $nc(gmtText)->length())) {
		return ~position;
	}
	pos += $nc(gmtText)->length();
	int32_t negative = 0;
	if (pos == end) {
		$init($ChronoField);
		return $nc(context)->setParsedField($ChronoField::OFFSET_SECONDS, 0, position, pos);
	}
	char16_t sign = text->charAt(pos);
	if (sign == u'+') {
		negative = 1;
	} else if (sign == u'-') {
		negative = -1;
	} else {
		$init($ChronoField);
		return $nc(context)->setParsedField($ChronoField::OFFSET_SECONDS, 0, position, pos);
	}
	++pos;
	int32_t h = 0;
	int32_t m = 0;
	int32_t s = 0;
	$init($TextStyle);
	if (this->style == $TextStyle::FULL) {
		int32_t h1 = getDigit(text, pos++);
		int32_t h2 = getDigit(text, pos++);
		if (h1 < 0 || h2 < 0 || text->charAt(pos++) != u':') {
			return ~position;
		}
		h = h1 * 10 + h2;
		int32_t m1 = getDigit(text, pos++);
		int32_t m2 = getDigit(text, pos++);
		if (m1 < 0 || m2 < 0) {
			return ~position;
		}
		m = m1 * 10 + m2;
		if (pos + 2 < end && text->charAt(pos) == u':') {
			int32_t s1 = getDigit(text, pos + 1);
			int32_t s2 = getDigit(text, pos + 2);
			if (s1 >= 0 && s2 >= 0) {
				s = s1 * 10 + s2;
				pos += 3;
			}
		}
	} else {
		h = getDigit(text, pos++);
		if (h < 0) {
			return ~position;
		}
		if (pos < end) {
			int32_t h2 = getDigit(text, pos);
			if (h2 >= 0) {
				h = h * 10 + h2;
				++pos;
			}
			if (pos + 2 < end && text->charAt(pos) == u':') {
				if (pos + 2 < end && text->charAt(pos) == u':') {
					int32_t m1 = getDigit(text, pos + 1);
					int32_t m2 = getDigit(text, pos + 2);
					if (m1 >= 0 && m2 >= 0) {
						m = m1 * 10 + m2;
						pos += 3;
						if (pos + 2 < end && text->charAt(pos) == u':') {
							int32_t s1 = getDigit(text, pos + 1);
							int32_t s2 = getDigit(text, pos + 2);
							if (s1 >= 0 && s2 >= 0) {
								s = s1 * 10 + s2;
								pos += 3;
							}
						}
					}
				}
			}
		}
	}
	int64_t offsetSecs = negative * (h * (int64_t)3600 + m * (int64_t)60 + s);
	$init($ChronoField);
	return $nc(context)->setParsedField($ChronoField::OFFSET_SECONDS, offsetSecs, position, pos);
}

$String* DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser::toString() {
	return $str({"LocalizedOffset("_s, this->style, ")"_s});
}

DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser::DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser() {
}

$Class* DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser::load$($String* name, bool initialize) {
	$loadClass(DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser, name, initialize, &_DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser_ClassInfo_, allocate$DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser);
	return class$;
}

$Class* DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser::class$ = nullptr;

		} // format
	} // time
} // java