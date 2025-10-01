#include <java/time/format/DateTimeFormatterBuilder$OffsetIdPrinterParser.h>

#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/DateTimeException.h>
#include <java/time/format/DateTimeFormatterBuilder.h>
#include <java/time/format/DateTimeParseContext.h>
#include <java/time/format/DateTimePrintContext.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/TemporalField.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef INSTANCE_ID_ZERO
#undef INSTANCE_ID_Z
#undef OFFSET_SECONDS
#undef PATTERNS

using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateTimeException = ::java::time::DateTimeException;
using $DateTimeFormatterBuilder = ::java::time::format::DateTimeFormatterBuilder;
using $DateTimeFormatterBuilder$DateTimePrinterParser = ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser;
using $DateTimeParseContext = ::java::time::format::DateTimeParseContext;
using $DateTimePrintContext = ::java::time::format::DateTimePrintContext;
using $ChronoField = ::java::time::temporal::ChronoField;
using $TemporalField = ::java::time::temporal::TemporalField;
using $Objects = ::java::util::Objects;

namespace java {
	namespace time {
		namespace format {

$FieldInfo _DateTimeFormatterBuilder$OffsetIdPrinterParser_FieldInfo_[] = {
	{"PATTERNS", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DateTimeFormatterBuilder$OffsetIdPrinterParser, PATTERNS)},
	{"INSTANCE_ID_Z", "Ljava/time/format/DateTimeFormatterBuilder$OffsetIdPrinterParser;", nullptr, $STATIC | $FINAL, $staticField(DateTimeFormatterBuilder$OffsetIdPrinterParser, INSTANCE_ID_Z)},
	{"INSTANCE_ID_ZERO", "Ljava/time/format/DateTimeFormatterBuilder$OffsetIdPrinterParser;", nullptr, $STATIC | $FINAL, $staticField(DateTimeFormatterBuilder$OffsetIdPrinterParser, INSTANCE_ID_ZERO)},
	{"noOffsetText", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DateTimeFormatterBuilder$OffsetIdPrinterParser, noOffsetText)},
	{"type", "I", nullptr, $PRIVATE | $FINAL, $field(DateTimeFormatterBuilder$OffsetIdPrinterParser, type)},
	{"style", "I", nullptr, $PRIVATE | $FINAL, $field(DateTimeFormatterBuilder$OffsetIdPrinterParser, style)},
	{}
};

$MethodInfo _DateTimeFormatterBuilder$OffsetIdPrinterParser_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(DateTimeFormatterBuilder$OffsetIdPrinterParser::*)($String*,$String*)>(&DateTimeFormatterBuilder$OffsetIdPrinterParser::init$))},
	{"checkPattern", "(Ljava/lang/String;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(DateTimeFormatterBuilder$OffsetIdPrinterParser::*)($String*)>(&DateTimeFormatterBuilder$OffsetIdPrinterParser::checkPattern))},
	{"format", "(Ljava/time/format/DateTimePrintContext;Ljava/lang/StringBuilder;)Z", nullptr, $PUBLIC},
	{"formatZeroPad", "(ZILjava/lang/StringBuilder;)V", nullptr, $PRIVATE, $method(static_cast<void(DateTimeFormatterBuilder$OffsetIdPrinterParser::*)(bool,int32_t,$StringBuilder*)>(&DateTimeFormatterBuilder$OffsetIdPrinterParser::formatZeroPad))},
	{"isColon", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(DateTimeFormatterBuilder$OffsetIdPrinterParser::*)()>(&DateTimeFormatterBuilder$OffsetIdPrinterParser::isColon))},
	{"isPaddedHour", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(DateTimeFormatterBuilder$OffsetIdPrinterParser::*)()>(&DateTimeFormatterBuilder$OffsetIdPrinterParser::isPaddedHour))},
	{"parse", "(Ljava/time/format/DateTimeParseContext;Ljava/lang/CharSequence;I)I", nullptr, $PUBLIC},
	{"parseDigits", "(Ljava/lang/CharSequence;ZI[I)Z", nullptr, $PRIVATE, $method(static_cast<bool(DateTimeFormatterBuilder$OffsetIdPrinterParser::*)($CharSequence*,bool,int32_t,$ints*)>(&DateTimeFormatterBuilder$OffsetIdPrinterParser::parseDigits))},
	{"parseHour", "(Ljava/lang/CharSequence;Z[I)V", nullptr, $PRIVATE, $method(static_cast<void(DateTimeFormatterBuilder$OffsetIdPrinterParser::*)($CharSequence*,bool,$ints*)>(&DateTimeFormatterBuilder$OffsetIdPrinterParser::parseHour))},
	{"parseMinute", "(Ljava/lang/CharSequence;ZZ[I)V", nullptr, $PRIVATE, $method(static_cast<void(DateTimeFormatterBuilder$OffsetIdPrinterParser::*)($CharSequence*,bool,bool,$ints*)>(&DateTimeFormatterBuilder$OffsetIdPrinterParser::parseMinute))},
	{"parseOptionalMinuteSecond", "(Ljava/lang/CharSequence;Z[I)V", nullptr, $PRIVATE, $method(static_cast<void(DateTimeFormatterBuilder$OffsetIdPrinterParser::*)($CharSequence*,bool,$ints*)>(&DateTimeFormatterBuilder$OffsetIdPrinterParser::parseOptionalMinuteSecond))},
	{"parseSecond", "(Ljava/lang/CharSequence;ZZ[I)V", nullptr, $PRIVATE, $method(static_cast<void(DateTimeFormatterBuilder$OffsetIdPrinterParser::*)($CharSequence*,bool,bool,$ints*)>(&DateTimeFormatterBuilder$OffsetIdPrinterParser::parseSecond))},
	{"parseVariableWidthDigits", "(Ljava/lang/CharSequence;II[I)V", nullptr, $PRIVATE, $method(static_cast<void(DateTimeFormatterBuilder$OffsetIdPrinterParser::*)($CharSequence*,int32_t,int32_t,$ints*)>(&DateTimeFormatterBuilder$OffsetIdPrinterParser::parseVariableWidthDigits))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DateTimeFormatterBuilder$OffsetIdPrinterParser_InnerClassesInfo_[] = {
	{"java.time.format.DateTimeFormatterBuilder$OffsetIdPrinterParser", "java.time.format.DateTimeFormatterBuilder", "OffsetIdPrinterParser", $STATIC | $FINAL},
	{"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser", "java.time.format.DateTimeFormatterBuilder", "DateTimePrinterParser", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DateTimeFormatterBuilder$OffsetIdPrinterParser_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.time.format.DateTimeFormatterBuilder$OffsetIdPrinterParser",
	"java.lang.Object",
	"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser",
	_DateTimeFormatterBuilder$OffsetIdPrinterParser_FieldInfo_,
	_DateTimeFormatterBuilder$OffsetIdPrinterParser_MethodInfo_,
	nullptr,
	nullptr,
	_DateTimeFormatterBuilder$OffsetIdPrinterParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.format.DateTimeFormatterBuilder"
};

$Object* allocate$DateTimeFormatterBuilder$OffsetIdPrinterParser($Class* clazz) {
	return $of($alloc(DateTimeFormatterBuilder$OffsetIdPrinterParser));
}

$StringArray* DateTimeFormatterBuilder$OffsetIdPrinterParser::PATTERNS = nullptr;
DateTimeFormatterBuilder$OffsetIdPrinterParser* DateTimeFormatterBuilder$OffsetIdPrinterParser::INSTANCE_ID_Z = nullptr;
DateTimeFormatterBuilder$OffsetIdPrinterParser* DateTimeFormatterBuilder$OffsetIdPrinterParser::INSTANCE_ID_ZERO = nullptr;

void DateTimeFormatterBuilder$OffsetIdPrinterParser::init$($String* pattern, $String* noOffsetText) {
	$Objects::requireNonNull($of(pattern), "pattern"_s);
	$Objects::requireNonNull($of(noOffsetText), "noOffsetText"_s);
	this->type = checkPattern(pattern);
	this->style = this->type % 11;
	$set(this, noOffsetText, noOffsetText);
}

int32_t DateTimeFormatterBuilder$OffsetIdPrinterParser::checkPattern($String* pattern) {
	for (int32_t i = 0; i < $nc(DateTimeFormatterBuilder$OffsetIdPrinterParser::PATTERNS)->length; ++i) {
		if ($nc($nc(DateTimeFormatterBuilder$OffsetIdPrinterParser::PATTERNS)->get(i))->equals(pattern)) {
			return i;
		}
	}
	$throwNew($IllegalArgumentException, $$str({"Invalid zone offset pattern: "_s, pattern}));
}

bool DateTimeFormatterBuilder$OffsetIdPrinterParser::isPaddedHour() {
	return this->type < 11;
}

bool DateTimeFormatterBuilder$OffsetIdPrinterParser::isColon() {
	return this->style > 0 && (this->style % 2) == 0;
}

bool DateTimeFormatterBuilder$OffsetIdPrinterParser::format($DateTimePrintContext* context, $StringBuilder* buf) {
	$init($ChronoField);
	$var($Long, offsetSecs, $nc(context)->getValue(static_cast<$TemporalField*>($ChronoField::OFFSET_SECONDS)));
	if (offsetSecs == nullptr) {
		return false;
	}
	int32_t totalSecs = $Math::toIntExact($nc(offsetSecs)->longValue());
	if (totalSecs == 0) {
		$nc(buf)->append(this->noOffsetText);
	} else {
		int32_t absHours = $Math::abs((totalSecs / 3600) % 100);
		int32_t absMinutes = $Math::abs((totalSecs / 60) % 60);
		int32_t absSeconds = $Math::abs(totalSecs % 60);
		int32_t bufPos = $nc(buf)->length();
		int32_t output = absHours;
		buf->append(totalSecs < 0 ? "-"_s : "+"_s);
		if (isPaddedHour() || absHours >= 10) {
			formatZeroPad(false, absHours, buf);
		} else {
			buf->append((char16_t)(absHours + u'0'));
		}
		if ((this->style >= 3 && this->style <= 8) || (this->style >= 9 && absSeconds > 0) || (this->style >= 1 && absMinutes > 0)) {
			formatZeroPad(isColon(), absMinutes, buf);
			output += absMinutes;
			if (this->style == 7 || this->style == 8 || (this->style >= 5 && absSeconds > 0)) {
				formatZeroPad(isColon(), absSeconds, buf);
				output += absSeconds;
			}
		}
		if (output == 0) {
			buf->setLength(bufPos);
			buf->append(this->noOffsetText);
		}
	}
	return true;
}

void DateTimeFormatterBuilder$OffsetIdPrinterParser::formatZeroPad(bool colon, int32_t value, $StringBuilder* buf) {
	$nc(buf)->append(colon ? ":"_s : ""_s)->append((char16_t)(value / 10 + u'0'))->append((char16_t)(value % 10 + u'0'));
}

int32_t DateTimeFormatterBuilder$OffsetIdPrinterParser::parse($DateTimeParseContext* context, $CharSequence* text, int32_t position) {
	int32_t length = $nc(text)->length();
	int32_t noOffsetLen = $nc(this->noOffsetText)->length();
	if (noOffsetLen == 0) {
		if (position == length) {
			$init($ChronoField);
			return $nc(context)->setParsedField($ChronoField::OFFSET_SECONDS, 0, position, position);
		}
	} else {
		if (position == length) {
			return ~position;
		}
		if ($nc(context)->subSequenceEquals(text, position, this->noOffsetText, 0, noOffsetLen)) {
			$init($ChronoField);
			return context->setParsedField($ChronoField::OFFSET_SECONDS, 0, position, position + noOffsetLen);
		}
	}
	char16_t sign = text->charAt(position);
	if (sign == u'+' || sign == u'-') {
		int32_t negative = (sign == u'-' ? -1 : 1);
		bool isColon = this->isColon();
		bool paddedHour = isPaddedHour();
		$var($ints, array, $new($ints, 4));
		array->set(0, position + 1);
		int32_t parseType = this->type;
		if (!$nc(context)->isStrict()) {
			if (paddedHour) {
				if (isColon || (parseType == 0 && length > position + 3 && text->charAt(position + 3) == u':')) {
					isColon = true;
					parseType = 10;
				} else {
					parseType = 9;
				}
			} else {
				bool var$3 = isColon;
				if (!var$3) {
					bool var$4 = parseType == 11 && length > position + 3;
					if (var$4) {
						bool var$5 = text->charAt(position + 2) == u':';
						var$4 = (var$5 || text->charAt(position + 3) == u':');
					}
					var$3 = (var$4);
				}
				if (var$3) {
					isColon = true;
					parseType = 21;
				} else {
					parseType = 20;
				}
			}
		}
		switch (parseType) {
		case 0:
			{}
		case 11:
			{
				parseHour(text, paddedHour, array);
				break;
			}
		case 1:
			{}
		case 2:
			{}
		case 13:
			{
				parseHour(text, paddedHour, array);
				parseMinute(text, isColon, false, array);
				break;
			}
		case 3:
			{}
		case 4:
			{}
		case 15:
			{
				parseHour(text, paddedHour, array);
				parseMinute(text, isColon, true, array);
				break;
			}
		case 5:
			{}
		case 6:
			{}
		case 17:
			{
				parseHour(text, paddedHour, array);
				parseMinute(text, isColon, true, array);
				parseSecond(text, isColon, false, array);
				break;
			}
		case 7:
			{}
		case 8:
			{}
		case 19:
			{
				parseHour(text, paddedHour, array);
				parseMinute(text, isColon, true, array);
				parseSecond(text, isColon, true, array);
				break;
			}
		case 9:
			{}
		case 10:
			{}
		case 21:
			{
				parseHour(text, paddedHour, array);
				parseOptionalMinuteSecond(text, isColon, array);
				break;
			}
		case 12:
			{
				parseVariableWidthDigits(text, 1, 4, array);
				break;
			}
		case 14:
			{
				parseVariableWidthDigits(text, 3, 4, array);
				break;
			}
		case 16:
			{
				parseVariableWidthDigits(text, 3, 6, array);
				break;
			}
		case 18:
			{
				parseVariableWidthDigits(text, 5, 6, array);
				break;
			}
		case 20:
			{
				parseVariableWidthDigits(text, 1, 6, array);
				break;
			}
		}
		if (array->get(0) > 0) {
			if (array->get(1) > 23 || array->get(2) > 59 || array->get(3) > 59) {
				$throwNew($DateTimeException, "Value out of range: Hour[0-23], Minute[0-59], Second[0-59]"_s);
			}
			int64_t offsetSecs = negative * (array->get(1) * (int64_t)3600 + array->get(2) * (int64_t)60 + array->get(3));
			$init($ChronoField);
			return $nc(context)->setParsedField($ChronoField::OFFSET_SECONDS, offsetSecs, position, array->get(0));
		}
	}
	if (noOffsetLen == 0) {
		$init($ChronoField);
		return $nc(context)->setParsedField($ChronoField::OFFSET_SECONDS, 0, position, position);
	}
	return ~position;
}

void DateTimeFormatterBuilder$OffsetIdPrinterParser::parseHour($CharSequence* parseText, bool paddedHour, $ints* array) {
	if (paddedHour) {
		if (!parseDigits(parseText, false, 1, array)) {
			$nc(array)->set(0, ~array->get(0));
		}
	} else {
		parseVariableWidthDigits(parseText, 1, 2, array);
	}
}

void DateTimeFormatterBuilder$OffsetIdPrinterParser::parseMinute($CharSequence* parseText, bool isColon, bool mandatory, $ints* array) {
	if (!parseDigits(parseText, isColon, 2, array)) {
		if (mandatory) {
			$nc(array)->set(0, ~array->get(0));
		}
	}
}

void DateTimeFormatterBuilder$OffsetIdPrinterParser::parseSecond($CharSequence* parseText, bool isColon, bool mandatory, $ints* array) {
	if (!parseDigits(parseText, isColon, 3, array)) {
		if (mandatory) {
			$nc(array)->set(0, ~array->get(0));
		}
	}
}

void DateTimeFormatterBuilder$OffsetIdPrinterParser::parseOptionalMinuteSecond($CharSequence* parseText, bool isColon, $ints* array) {
	if (parseDigits(parseText, isColon, 2, array)) {
		parseDigits(parseText, isColon, 3, array);
	}
}

bool DateTimeFormatterBuilder$OffsetIdPrinterParser::parseDigits($CharSequence* parseText, bool isColon, int32_t arrayIndex, $ints* array) {
	int32_t pos = $nc(array)->get(0);
	if (pos < 0) {
		return true;
	}
	if (isColon && arrayIndex != 1) {
		bool var$0 = pos + 1 > $nc(parseText)->length();
		if (var$0 || $nc(parseText)->charAt(pos) != u':') {
			return false;
		}
		++pos;
	}
	if (pos + 2 > $nc(parseText)->length()) {
		return false;
	}
	char16_t ch1 = $nc(parseText)->charAt(pos++);
	char16_t ch2 = parseText->charAt(pos++);
	if (ch1 < u'0' || ch1 > u'9' || ch2 < u'0' || ch2 > u'9') {
		return false;
	}
	int32_t value = (ch1 - 48) * 10 + (ch2 - 48);
	if (value < 0 || value > 59) {
		return false;
	}
	array->set(arrayIndex, value);
	array->set(0, pos);
	return true;
}

void DateTimeFormatterBuilder$OffsetIdPrinterParser::parseVariableWidthDigits($CharSequence* parseText, int32_t minDigits, int32_t maxDigits, $ints* array) {
	int32_t pos = $nc(array)->get(0);
	int32_t available = 0;
	$var($chars, chars, $new($chars, maxDigits));
	for (int32_t i = 0; i < maxDigits; ++i) {
		if (pos + 1 > $nc(parseText)->length()) {
			break;
		}
		char16_t ch = $nc(parseText)->charAt(pos++);
		if (ch < u'0' || ch > u'9') {
			--pos;
			break;
		}
		chars->set(i, ch);
		++available;
	}
	if (available < minDigits) {
		array->set(0, ~array->get(0));
		return;
	}
	switch (available) {
	case 1:
		{
			array->set(1, (chars->get(0) - 48));
			break;
		}
	case 2:
		{
			array->set(1, ((chars->get(0) - 48) * 10 + (chars->get(1) - 48)));
			break;
		}
	case 3:
		{
			array->set(1, (chars->get(0) - 48));
			array->set(2, ((chars->get(1) - 48) * 10 + (chars->get(2) - 48)));
			break;
		}
	case 4:
		{
			array->set(1, ((chars->get(0) - 48) * 10 + (chars->get(1) - 48)));
			array->set(2, ((chars->get(2) - 48) * 10 + (chars->get(3) - 48)));
			break;
		}
	case 5:
		{
			array->set(1, (chars->get(0) - 48));
			array->set(2, ((chars->get(1) - 48) * 10 + (chars->get(2) - 48)));
			array->set(3, ((chars->get(3) - 48) * 10 + (chars->get(4) - 48)));
			break;
		}
	case 6:
		{
			array->set(1, ((chars->get(0) - 48) * 10 + (chars->get(1) - 48)));
			array->set(2, ((chars->get(2) - 48) * 10 + (chars->get(3) - 48)));
			array->set(3, ((chars->get(4) - 48) * 10 + (chars->get(5) - 48)));
			break;
		}
	}
	array->set(0, pos);
}

$String* DateTimeFormatterBuilder$OffsetIdPrinterParser::toString() {
	$var($String, converted, $nc(this->noOffsetText)->replace(static_cast<$CharSequence*>("\'"_s), static_cast<$CharSequence*>("\'\'"_s)));
	return $str({"Offset("_s, $nc(DateTimeFormatterBuilder$OffsetIdPrinterParser::PATTERNS)->get(this->type), ",\'"_s, converted, "\')"_s});
}

void clinit$DateTimeFormatterBuilder$OffsetIdPrinterParser($Class* class$) {
	$assignStatic(DateTimeFormatterBuilder$OffsetIdPrinterParser::PATTERNS, $new($StringArray, {
		"+HH"_s,
		"+HHmm"_s,
		"+HH:mm"_s,
		"+HHMM"_s,
		"+HH:MM"_s,
		"+HHMMss"_s,
		"+HH:MM:ss"_s,
		"+HHMMSS"_s,
		"+HH:MM:SS"_s,
		"+HHmmss"_s,
		"+HH:mm:ss"_s,
		"+H"_s,
		"+Hmm"_s,
		"+H:mm"_s,
		"+HMM"_s,
		"+H:MM"_s,
		"+HMMss"_s,
		"+H:MM:ss"_s,
		"+HMMSS"_s,
		"+H:MM:SS"_s,
		"+Hmmss"_s,
		"+H:mm:ss"_s
	}));
	$assignStatic(DateTimeFormatterBuilder$OffsetIdPrinterParser::INSTANCE_ID_Z, $new(DateTimeFormatterBuilder$OffsetIdPrinterParser, "+HH:MM:ss"_s, "Z"_s));
	$assignStatic(DateTimeFormatterBuilder$OffsetIdPrinterParser::INSTANCE_ID_ZERO, $new(DateTimeFormatterBuilder$OffsetIdPrinterParser, "+HH:MM:ss"_s, "0"_s));
}

DateTimeFormatterBuilder$OffsetIdPrinterParser::DateTimeFormatterBuilder$OffsetIdPrinterParser() {
}

$Class* DateTimeFormatterBuilder$OffsetIdPrinterParser::load$($String* name, bool initialize) {
	$loadClass(DateTimeFormatterBuilder$OffsetIdPrinterParser, name, initialize, &_DateTimeFormatterBuilder$OffsetIdPrinterParser_ClassInfo_, clinit$DateTimeFormatterBuilder$OffsetIdPrinterParser, allocate$DateTimeFormatterBuilder$OffsetIdPrinterParser);
	return class$;
}

$Class* DateTimeFormatterBuilder$OffsetIdPrinterParser::class$ = nullptr;

		} // format
	} // time
} // java