#include <java/time/format/DateTimeFormatterBuilder$PadPrinterParserDecorator.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/DateTimeException.h>
#include <java/time/format/DateTimeFormatterBuilder$DateTimePrinterParser.h>
#include <java/time/format/DateTimeFormatterBuilder.h>
#include <java/time/format/DateTimeParseContext.h>
#include <java/time/format/DateTimePrintContext.h>
#include <jcpp.h>

using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateTimeException = ::java::time::DateTimeException;
using $DateTimeFormatterBuilder = ::java::time::format::DateTimeFormatterBuilder;
using $DateTimeFormatterBuilder$DateTimePrinterParser = ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser;
using $DateTimeParseContext = ::java::time::format::DateTimeParseContext;
using $DateTimePrintContext = ::java::time::format::DateTimePrintContext;

namespace java {
	namespace time {
		namespace format {

$FieldInfo _DateTimeFormatterBuilder$PadPrinterParserDecorator_FieldInfo_[] = {
	{"printerParser", "Ljava/time/format/DateTimeFormatterBuilder$DateTimePrinterParser;", nullptr, $PRIVATE | $FINAL, $field(DateTimeFormatterBuilder$PadPrinterParserDecorator, printerParser)},
	{"padWidth", "I", nullptr, $PRIVATE | $FINAL, $field(DateTimeFormatterBuilder$PadPrinterParserDecorator, padWidth)},
	{"padChar", "C", nullptr, $PRIVATE | $FINAL, $field(DateTimeFormatterBuilder$PadPrinterParserDecorator, padChar)},
	{}
};

$MethodInfo _DateTimeFormatterBuilder$PadPrinterParserDecorator_MethodInfo_[] = {
	{"<init>", "(Ljava/time/format/DateTimeFormatterBuilder$DateTimePrinterParser;IC)V", nullptr, 0, $method(static_cast<void(DateTimeFormatterBuilder$PadPrinterParserDecorator::*)($DateTimeFormatterBuilder$DateTimePrinterParser*,int32_t,char16_t)>(&DateTimeFormatterBuilder$PadPrinterParserDecorator::init$))},
	{"format", "(Ljava/time/format/DateTimePrintContext;Ljava/lang/StringBuilder;)Z", nullptr, $PUBLIC},
	{"parse", "(Ljava/time/format/DateTimeParseContext;Ljava/lang/CharSequence;I)I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DateTimeFormatterBuilder$PadPrinterParserDecorator_InnerClassesInfo_[] = {
	{"java.time.format.DateTimeFormatterBuilder$PadPrinterParserDecorator", "java.time.format.DateTimeFormatterBuilder", "PadPrinterParserDecorator", $STATIC | $FINAL},
	{"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser", "java.time.format.DateTimeFormatterBuilder", "DateTimePrinterParser", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DateTimeFormatterBuilder$PadPrinterParserDecorator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.time.format.DateTimeFormatterBuilder$PadPrinterParserDecorator",
	"java.lang.Object",
	"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser",
	_DateTimeFormatterBuilder$PadPrinterParserDecorator_FieldInfo_,
	_DateTimeFormatterBuilder$PadPrinterParserDecorator_MethodInfo_,
	nullptr,
	nullptr,
	_DateTimeFormatterBuilder$PadPrinterParserDecorator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.format.DateTimeFormatterBuilder"
};

$Object* allocate$DateTimeFormatterBuilder$PadPrinterParserDecorator($Class* clazz) {
	return $of($alloc(DateTimeFormatterBuilder$PadPrinterParserDecorator));
}

void DateTimeFormatterBuilder$PadPrinterParserDecorator::init$($DateTimeFormatterBuilder$DateTimePrinterParser* printerParser, int32_t padWidth, char16_t padChar) {
	$set(this, printerParser, printerParser);
	this->padWidth = padWidth;
	this->padChar = padChar;
}

bool DateTimeFormatterBuilder$PadPrinterParserDecorator::format($DateTimePrintContext* context, $StringBuilder* buf) {
	int32_t preLen = $nc(buf)->length();
	if ($nc(this->printerParser)->format(context, buf) == false) {
		return false;
	}
	int32_t len = buf->length() - preLen;
	if (len > this->padWidth) {
		$throwNew($DateTimeException, $$str({"Cannot print as output of "_s, $$str(len), " characters exceeds pad width of "_s, $$str(this->padWidth)}));
	}
	for (int32_t i = 0; i < this->padWidth - len; ++i) {
		buf->insert(preLen, this->padChar);
	}
	return true;
}

int32_t DateTimeFormatterBuilder$PadPrinterParserDecorator::parse($DateTimeParseContext* context, $CharSequence* text$renamed, int32_t position) {
	$var($CharSequence, text, text$renamed);
	bool strict = $nc(context)->isStrict();
	if (position > $nc(text)->length()) {
		$throwNew($IndexOutOfBoundsException);
	}
	if (position == $nc(text)->length()) {
		return ~position;
	}
	int32_t endPos = position + this->padWidth;
	if (endPos > $nc(text)->length()) {
		if (strict) {
			return ~position;
		}
		endPos = text->length();
	}
	int32_t pos = position;
	while (pos < endPos && context->charEquals($nc(text)->charAt(pos), this->padChar)) {
		++pos;
	}
	$assign(text, $nc(text)->subSequence(0, endPos));
	int32_t resultPos = $nc(this->printerParser)->parse(context, text, pos);
	if (resultPos != endPos && strict) {
		return ~(position + pos);
	}
	return resultPos;
}

$String* DateTimeFormatterBuilder$PadPrinterParserDecorator::toString() {
	return $str({"Pad("_s, this->printerParser, ","_s, $$str(this->padWidth), (this->padChar == u' ' ? ")"_s : $$str({",\'"_s, $$str(this->padChar), "\')"_s}))});
}

DateTimeFormatterBuilder$PadPrinterParserDecorator::DateTimeFormatterBuilder$PadPrinterParserDecorator() {
}

$Class* DateTimeFormatterBuilder$PadPrinterParserDecorator::load$($String* name, bool initialize) {
	$loadClass(DateTimeFormatterBuilder$PadPrinterParserDecorator, name, initialize, &_DateTimeFormatterBuilder$PadPrinterParserDecorator_ClassInfo_, allocate$DateTimeFormatterBuilder$PadPrinterParserDecorator);
	return class$;
}

$Class* DateTimeFormatterBuilder$PadPrinterParserDecorator::class$ = nullptr;

		} // format
	} // time
} // java