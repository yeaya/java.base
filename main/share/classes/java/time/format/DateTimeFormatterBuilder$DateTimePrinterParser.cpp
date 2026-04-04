#include <java/time/format/DateTimeFormatterBuilder$DateTimePrinterParser.h>
#include <java/lang/CharSequence.h>
#include <java/time/format/DateTimeFormatterBuilder.h>
#include <java/time/format/DateTimeParseContext.h>
#include <java/time/format/DateTimePrintContext.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateTimeParseContext = ::java::time::format::DateTimeParseContext;
using $DateTimePrintContext = ::java::time::format::DateTimePrintContext;

namespace java {
	namespace time {
		namespace format {

$Class* DateTimeFormatterBuilder$DateTimePrinterParser::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"format", "(Ljava/time/format/DateTimePrintContext;Ljava/lang/StringBuilder;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DateTimeFormatterBuilder$DateTimePrinterParser, format, bool, $DateTimePrintContext*, $StringBuilder*)},
		{"parse", "(Ljava/time/format/DateTimeParseContext;Ljava/lang/CharSequence;I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DateTimeFormatterBuilder$DateTimePrinterParser, parse, int32_t, $DateTimeParseContext*, $CharSequence*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser", "java.time.format.DateTimeFormatterBuilder", "DateTimePrinterParser", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.time.format.DateTimeFormatterBuilder"
	};
	$loadClass(DateTimeFormatterBuilder$DateTimePrinterParser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DateTimeFormatterBuilder$DateTimePrinterParser);
	});
	return class$;
}

$Class* DateTimeFormatterBuilder$DateTimePrinterParser::class$ = nullptr;

		} // format
	} // time
} // java