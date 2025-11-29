#include <java/time/format/DateTimeFormatterBuilder$DateTimePrinterParser.h>

#include <java/lang/CharSequence.h>
#include <java/time/format/DateTimeFormatterBuilder.h>
#include <java/time/format/DateTimeParseContext.h>
#include <java/time/format/DateTimePrintContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace time {
		namespace format {

$MethodInfo _DateTimeFormatterBuilder$DateTimePrinterParser_MethodInfo_[] = {
	{"format", "(Ljava/time/format/DateTimePrintContext;Ljava/lang/StringBuilder;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"parse", "(Ljava/time/format/DateTimeParseContext;Ljava/lang/CharSequence;I)I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _DateTimeFormatterBuilder$DateTimePrinterParser_InnerClassesInfo_[] = {
	{"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser", "java.time.format.DateTimeFormatterBuilder", "DateTimePrinterParser", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DateTimeFormatterBuilder$DateTimePrinterParser_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser",
	nullptr,
	nullptr,
	nullptr,
	_DateTimeFormatterBuilder$DateTimePrinterParser_MethodInfo_,
	nullptr,
	nullptr,
	_DateTimeFormatterBuilder$DateTimePrinterParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.format.DateTimeFormatterBuilder"
};

$Object* allocate$DateTimeFormatterBuilder$DateTimePrinterParser($Class* clazz) {
	return $of($alloc(DateTimeFormatterBuilder$DateTimePrinterParser));
}

$Class* DateTimeFormatterBuilder$DateTimePrinterParser::load$($String* name, bool initialize) {
	$loadClass(DateTimeFormatterBuilder$DateTimePrinterParser, name, initialize, &_DateTimeFormatterBuilder$DateTimePrinterParser_ClassInfo_, allocate$DateTimeFormatterBuilder$DateTimePrinterParser);
	return class$;
}

$Class* DateTimeFormatterBuilder$DateTimePrinterParser::class$ = nullptr;

		} // format
	} // time
} // java