#include <java/time/format/DateTimeFormatterBuilder$DefaultValueParser.h>

#include <java/lang/CharSequence.h>
#include <java/time/format/DateTimeFormatterBuilder.h>
#include <java/time/format/DateTimeParseContext.h>
#include <java/time/format/DateTimePrintContext.h>
#include <java/time/temporal/TemporalField.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateTimeParseContext = ::java::time::format::DateTimeParseContext;
using $DateTimePrintContext = ::java::time::format::DateTimePrintContext;
using $TemporalField = ::java::time::temporal::TemporalField;

namespace java {
	namespace time {
		namespace format {

$FieldInfo _DateTimeFormatterBuilder$DefaultValueParser_FieldInfo_[] = {
	{"field", "Ljava/time/temporal/TemporalField;", nullptr, $PRIVATE | $FINAL, $field(DateTimeFormatterBuilder$DefaultValueParser, field)},
	{"value", "J", nullptr, $PRIVATE | $FINAL, $field(DateTimeFormatterBuilder$DefaultValueParser, value)},
	{}
};

$MethodInfo _DateTimeFormatterBuilder$DefaultValueParser_MethodInfo_[] = {
	{"<init>", "(Ljava/time/temporal/TemporalField;J)V", nullptr, 0, $method(static_cast<void(DateTimeFormatterBuilder$DefaultValueParser::*)($TemporalField*,int64_t)>(&DateTimeFormatterBuilder$DefaultValueParser::init$))},
	{"format", "(Ljava/time/format/DateTimePrintContext;Ljava/lang/StringBuilder;)Z", nullptr, $PUBLIC},
	{"parse", "(Ljava/time/format/DateTimeParseContext;Ljava/lang/CharSequence;I)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DateTimeFormatterBuilder$DefaultValueParser_InnerClassesInfo_[] = {
	{"java.time.format.DateTimeFormatterBuilder$DefaultValueParser", "java.time.format.DateTimeFormatterBuilder", "DefaultValueParser", $STATIC},
	{"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser", "java.time.format.DateTimeFormatterBuilder", "DateTimePrinterParser", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DateTimeFormatterBuilder$DefaultValueParser_ClassInfo_ = {
	$ACC_SUPER,
	"java.time.format.DateTimeFormatterBuilder$DefaultValueParser",
	"java.lang.Object",
	"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser",
	_DateTimeFormatterBuilder$DefaultValueParser_FieldInfo_,
	_DateTimeFormatterBuilder$DefaultValueParser_MethodInfo_,
	nullptr,
	nullptr,
	_DateTimeFormatterBuilder$DefaultValueParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.format.DateTimeFormatterBuilder"
};

$Object* allocate$DateTimeFormatterBuilder$DefaultValueParser($Class* clazz) {
	return $of($alloc(DateTimeFormatterBuilder$DefaultValueParser));
}

void DateTimeFormatterBuilder$DefaultValueParser::init$($TemporalField* field, int64_t value) {
	$set(this, field, field);
	this->value = value;
}

bool DateTimeFormatterBuilder$DefaultValueParser::format($DateTimePrintContext* context, $StringBuilder* buf) {
	return true;
}

int32_t DateTimeFormatterBuilder$DefaultValueParser::parse($DateTimeParseContext* context, $CharSequence* text, int32_t position) {
	if ($nc(context)->getParsed(this->field) == nullptr) {
		context->setParsedField(this->field, this->value, position, position);
	}
	return position;
}

DateTimeFormatterBuilder$DefaultValueParser::DateTimeFormatterBuilder$DefaultValueParser() {
}

$Class* DateTimeFormatterBuilder$DefaultValueParser::load$($String* name, bool initialize) {
	$loadClass(DateTimeFormatterBuilder$DefaultValueParser, name, initialize, &_DateTimeFormatterBuilder$DefaultValueParser_ClassInfo_, allocate$DateTimeFormatterBuilder$DefaultValueParser);
	return class$;
}

$Class* DateTimeFormatterBuilder$DefaultValueParser::class$ = nullptr;

		} // format
	} // time
} // java