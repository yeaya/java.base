#include <java/time/format/DateTimeFormatterBuilder$StringLiteralPrinterParser.h>

#include <java/lang/CharSequence.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/time/format/DateTimeFormatterBuilder.h>
#include <java/time/format/DateTimeParseContext.h>
#include <java/time/format/DateTimePrintContext.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateTimeParseContext = ::java::time::format::DateTimeParseContext;
using $DateTimePrintContext = ::java::time::format::DateTimePrintContext;

namespace java {
	namespace time {
		namespace format {

$FieldInfo _DateTimeFormatterBuilder$StringLiteralPrinterParser_FieldInfo_[] = {
	{"literal", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DateTimeFormatterBuilder$StringLiteralPrinterParser, literal)},
	{}
};

$MethodInfo _DateTimeFormatterBuilder$StringLiteralPrinterParser_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(DateTimeFormatterBuilder$StringLiteralPrinterParser::*)($String*)>(&DateTimeFormatterBuilder$StringLiteralPrinterParser::init$))},
	{"format", "(Ljava/time/format/DateTimePrintContext;Ljava/lang/StringBuilder;)Z", nullptr, $PUBLIC},
	{"parse", "(Ljava/time/format/DateTimeParseContext;Ljava/lang/CharSequence;I)I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DateTimeFormatterBuilder$StringLiteralPrinterParser_InnerClassesInfo_[] = {
	{"java.time.format.DateTimeFormatterBuilder$StringLiteralPrinterParser", "java.time.format.DateTimeFormatterBuilder", "StringLiteralPrinterParser", $STATIC | $FINAL},
	{"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser", "java.time.format.DateTimeFormatterBuilder", "DateTimePrinterParser", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DateTimeFormatterBuilder$StringLiteralPrinterParser_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.time.format.DateTimeFormatterBuilder$StringLiteralPrinterParser",
	"java.lang.Object",
	"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser",
	_DateTimeFormatterBuilder$StringLiteralPrinterParser_FieldInfo_,
	_DateTimeFormatterBuilder$StringLiteralPrinterParser_MethodInfo_,
	nullptr,
	nullptr,
	_DateTimeFormatterBuilder$StringLiteralPrinterParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.format.DateTimeFormatterBuilder"
};

$Object* allocate$DateTimeFormatterBuilder$StringLiteralPrinterParser($Class* clazz) {
	return $of($alloc(DateTimeFormatterBuilder$StringLiteralPrinterParser));
}

void DateTimeFormatterBuilder$StringLiteralPrinterParser::init$($String* literal) {
	$set(this, literal, literal);
}

bool DateTimeFormatterBuilder$StringLiteralPrinterParser::format($DateTimePrintContext* context, $StringBuilder* buf) {
	$nc(buf)->append(this->literal);
	return true;
}

int32_t DateTimeFormatterBuilder$StringLiteralPrinterParser::parse($DateTimeParseContext* context, $CharSequence* text, int32_t position) {
	int32_t length = $nc(text)->length();
	if (position > length || position < 0) {
		$throwNew($IndexOutOfBoundsException);
	}
	if ($nc(context)->subSequenceEquals(text, position, this->literal, 0, $nc(this->literal)->length()) == false) {
		return ~position;
	}
	return position + $nc(this->literal)->length();
}

$String* DateTimeFormatterBuilder$StringLiteralPrinterParser::toString() {
	$var($String, converted, $nc(this->literal)->replace(static_cast<$CharSequence*>("\'"_s), static_cast<$CharSequence*>("\'\'"_s)));
	return $str({"\'"_s, converted, "\'"_s});
}

DateTimeFormatterBuilder$StringLiteralPrinterParser::DateTimeFormatterBuilder$StringLiteralPrinterParser() {
}

$Class* DateTimeFormatterBuilder$StringLiteralPrinterParser::load$($String* name, bool initialize) {
	$loadClass(DateTimeFormatterBuilder$StringLiteralPrinterParser, name, initialize, &_DateTimeFormatterBuilder$StringLiteralPrinterParser_ClassInfo_, allocate$DateTimeFormatterBuilder$StringLiteralPrinterParser);
	return class$;
}

$Class* DateTimeFormatterBuilder$StringLiteralPrinterParser::class$ = nullptr;

		} // format
	} // time
} // java