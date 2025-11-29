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

$FieldInfo _DateTimeFormatterBuilder$CharLiteralPrinterParser_FieldInfo_[] = {
	{"literal", "C", nullptr, $PRIVATE | $FINAL, $field(DateTimeFormatterBuilder$CharLiteralPrinterParser, literal)},
	{}
};

$MethodInfo _DateTimeFormatterBuilder$CharLiteralPrinterParser_MethodInfo_[] = {
	{"<init>", "(C)V", nullptr, 0, $method(static_cast<void(DateTimeFormatterBuilder$CharLiteralPrinterParser::*)(char16_t)>(&DateTimeFormatterBuilder$CharLiteralPrinterParser::init$))},
	{"format", "(Ljava/time/format/DateTimePrintContext;Ljava/lang/StringBuilder;)Z", nullptr, $PUBLIC},
	{"parse", "(Ljava/time/format/DateTimeParseContext;Ljava/lang/CharSequence;I)I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DateTimeFormatterBuilder$CharLiteralPrinterParser_InnerClassesInfo_[] = {
	{"java.time.format.DateTimeFormatterBuilder$CharLiteralPrinterParser", "java.time.format.DateTimeFormatterBuilder", "CharLiteralPrinterParser", $STATIC | $FINAL},
	{"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser", "java.time.format.DateTimeFormatterBuilder", "DateTimePrinterParser", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DateTimeFormatterBuilder$CharLiteralPrinterParser_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.time.format.DateTimeFormatterBuilder$CharLiteralPrinterParser",
	"java.lang.Object",
	"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser",
	_DateTimeFormatterBuilder$CharLiteralPrinterParser_FieldInfo_,
	_DateTimeFormatterBuilder$CharLiteralPrinterParser_MethodInfo_,
	nullptr,
	nullptr,
	_DateTimeFormatterBuilder$CharLiteralPrinterParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.format.DateTimeFormatterBuilder"
};

$Object* allocate$DateTimeFormatterBuilder$CharLiteralPrinterParser($Class* clazz) {
	return $of($alloc(DateTimeFormatterBuilder$CharLiteralPrinterParser));
}

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
			var$0 = (var$1);
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
	$loadClass(DateTimeFormatterBuilder$CharLiteralPrinterParser, name, initialize, &_DateTimeFormatterBuilder$CharLiteralPrinterParser_ClassInfo_, allocate$DateTimeFormatterBuilder$CharLiteralPrinterParser);
	return class$;
}

$Class* DateTimeFormatterBuilder$CharLiteralPrinterParser::class$ = nullptr;

		} // format
	} // time
} // java