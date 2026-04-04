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
	$FieldInfo fieldInfos$$[] = {
		{"field", "Ljava/time/temporal/TemporalField;", nullptr, $PRIVATE | $FINAL, $field(DateTimeFormatterBuilder$DefaultValueParser, field)},
		{"value", "J", nullptr, $PRIVATE | $FINAL, $field(DateTimeFormatterBuilder$DefaultValueParser, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/time/temporal/TemporalField;J)V", nullptr, 0, $method(DateTimeFormatterBuilder$DefaultValueParser, init$, void, $TemporalField*, int64_t)},
		{"format", "(Ljava/time/format/DateTimePrintContext;Ljava/lang/StringBuilder;)Z", nullptr, $PUBLIC, $virtualMethod(DateTimeFormatterBuilder$DefaultValueParser, format, bool, $DateTimePrintContext*, $StringBuilder*)},
		{"parse", "(Ljava/time/format/DateTimeParseContext;Ljava/lang/CharSequence;I)I", nullptr, $PUBLIC, $virtualMethod(DateTimeFormatterBuilder$DefaultValueParser, parse, int32_t, $DateTimeParseContext*, $CharSequence*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.format.DateTimeFormatterBuilder$DefaultValueParser", "java.time.format.DateTimeFormatterBuilder", "DefaultValueParser", $STATIC},
		{"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser", "java.time.format.DateTimeFormatterBuilder", "DateTimePrinterParser", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.time.format.DateTimeFormatterBuilder$DefaultValueParser",
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
	$loadClass(DateTimeFormatterBuilder$DefaultValueParser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DateTimeFormatterBuilder$DefaultValueParser);
	});
	return class$;
}

$Class* DateTimeFormatterBuilder$DefaultValueParser::class$ = nullptr;

		} // format
	} // time
} // java