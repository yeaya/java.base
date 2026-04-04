#include <java/time/format/DateTimeFormatterBuilder$CharLiteralPrinterParser.h>
#include <java/lang/CharSequence.h>
#include <java/time/format/DateTimeFormatterBuilder.h>
#include <java/time/format/DateTimeParseContext.h>
#include <java/time/format/DateTimePrintContext.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateTimeParseContext = ::java::time::format::DateTimeParseContext;
using $DateTimePrintContext = ::java::time::format::DateTimePrintContext;

namespace java {
	namespace time {
		namespace format {

void DateTimeFormatterBuilder$CharLiteralPrinterParser::init$(char16_t literal) {
	this->literal = literal;
}

bool DateTimeFormatterBuilder$CharLiteralPrinterParser::format($DateTimePrintContext* context, $StringBuilder* buf) {
	$nc(buf)->append(this->literal);
	return true;
}

int32_t DateTimeFormatterBuilder$CharLiteralPrinterParser::parse($DateTimeParseContext* context, $CharSequence* text, int32_t position) {
	int32_t length = $nc(text)->length();
	if (position == length) {
		return ~position;
	}
	char16_t ch = text->charAt(position);
	if (ch != this->literal) {
		bool var$0 = $nc(context)->isCaseSensitive();
		if (!var$0) {
			char16_t var$2 = $Character::toUpperCase(ch);
			bool var$1 = var$2 != $Character::toUpperCase(this->literal);
			if (var$1) {
				char16_t var$3 = $Character::toLowerCase(ch);
				var$1 = var$3 != $Character::toLowerCase(this->literal);
			}
			var$0 = var$1;
		}
		if (var$0) {
			return ~position;
		}
	}
	return position + 1;
}

$String* DateTimeFormatterBuilder$CharLiteralPrinterParser::toString() {
	if (this->literal == u'\'') {
		return "\'\'"_s;
	}
	return $str({"\'"_s, $$str(this->literal), "\'"_s});
}

DateTimeFormatterBuilder$CharLiteralPrinterParser::DateTimeFormatterBuilder$CharLiteralPrinterParser() {
}

$Class* DateTimeFormatterBuilder$CharLiteralPrinterParser::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"literal", "C", nullptr, $PRIVATE | $FINAL, $field(DateTimeFormatterBuilder$CharLiteralPrinterParser, literal)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(C)V", nullptr, 0, $method(DateTimeFormatterBuilder$CharLiteralPrinterParser, init$, void, char16_t)},
		{"format", "(Ljava/time/format/DateTimePrintContext;Ljava/lang/StringBuilder;)Z", nullptr, $PUBLIC, $virtualMethod(DateTimeFormatterBuilder$CharLiteralPrinterParser, format, bool, $DateTimePrintContext*, $StringBuilder*)},
		{"parse", "(Ljava/time/format/DateTimeParseContext;Ljava/lang/CharSequence;I)I", nullptr, $PUBLIC, $virtualMethod(DateTimeFormatterBuilder$CharLiteralPrinterParser, parse, int32_t, $DateTimeParseContext*, $CharSequence*, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DateTimeFormatterBuilder$CharLiteralPrinterParser, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.format.DateTimeFormatterBuilder$CharLiteralPrinterParser", "java.time.format.DateTimeFormatterBuilder", "CharLiteralPrinterParser", $STATIC | $FINAL},
		{"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser", "java.time.format.DateTimeFormatterBuilder", "DateTimePrinterParser", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.time.format.DateTimeFormatterBuilder$CharLiteralPrinterParser",
		"java.lang.Object",
		"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.time.format.DateTimeFormatterBuilder"
	};
	$loadClass(DateTimeFormatterBuilder$CharLiteralPrinterParser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DateTimeFormatterBuilder$CharLiteralPrinterParser);
	});
	return class$;
}

$Class* DateTimeFormatterBuilder$CharLiteralPrinterParser::class$ = nullptr;

		} // format
	} // time
} // java