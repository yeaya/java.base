#include <java/time/format/DateTimeFormatterBuilder$CompositePrinterParser.h>

#include <java/lang/CharSequence.h>
#include <java/time/format/DateTimeFormatterBuilder$DateTimePrinterParser.h>
#include <java/time/format/DateTimeFormatterBuilder.h>
#include <java/time/format/DateTimeParseContext.h>
#include <java/time/format/DateTimePrintContext.h>
#include <java/util/List.h>
#include <jcpp.h>

using $DateTimeFormatterBuilder$DateTimePrinterParserArray = $Array<::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser>;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateTimeFormatterBuilder = ::java::time::format::DateTimeFormatterBuilder;
using $DateTimeFormatterBuilder$DateTimePrinterParser = ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser;
using $DateTimeParseContext = ::java::time::format::DateTimeParseContext;
using $DateTimePrintContext = ::java::time::format::DateTimePrintContext;
using $List = ::java::util::List;

namespace java {
	namespace time {
		namespace format {

$FieldInfo _DateTimeFormatterBuilder$CompositePrinterParser_FieldInfo_[] = {
	{"printerParsers", "[Ljava/time/format/DateTimeFormatterBuilder$DateTimePrinterParser;", nullptr, $PRIVATE | $FINAL, $field(DateTimeFormatterBuilder$CompositePrinterParser, printerParsers)},
	{"optional", "Z", nullptr, $PRIVATE | $FINAL, $field(DateTimeFormatterBuilder$CompositePrinterParser, optional)},
	{}
};

$MethodInfo _DateTimeFormatterBuilder$CompositePrinterParser_MethodInfo_[] = {
	{"<init>", "(Ljava/util/List;Z)V", "(Ljava/util/List<Ljava/time/format/DateTimeFormatterBuilder$DateTimePrinterParser;>;Z)V", 0, $method(static_cast<void(DateTimeFormatterBuilder$CompositePrinterParser::*)($List*,bool)>(&DateTimeFormatterBuilder$CompositePrinterParser::init$))},
	{"<init>", "([Ljava/time/format/DateTimeFormatterBuilder$DateTimePrinterParser;Z)V", nullptr, 0, $method(static_cast<void(DateTimeFormatterBuilder$CompositePrinterParser::*)($DateTimeFormatterBuilder$DateTimePrinterParserArray*,bool)>(&DateTimeFormatterBuilder$CompositePrinterParser::init$))},
	{"format", "(Ljava/time/format/DateTimePrintContext;Ljava/lang/StringBuilder;)Z", nullptr, $PUBLIC},
	{"parse", "(Ljava/time/format/DateTimeParseContext;Ljava/lang/CharSequence;I)I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"withOptional", "(Z)Ljava/time/format/DateTimeFormatterBuilder$CompositePrinterParser;", nullptr, $PUBLIC, $method(static_cast<DateTimeFormatterBuilder$CompositePrinterParser*(DateTimeFormatterBuilder$CompositePrinterParser::*)(bool)>(&DateTimeFormatterBuilder$CompositePrinterParser::withOptional))},
	{}
};

$InnerClassInfo _DateTimeFormatterBuilder$CompositePrinterParser_InnerClassesInfo_[] = {
	{"java.time.format.DateTimeFormatterBuilder$CompositePrinterParser", "java.time.format.DateTimeFormatterBuilder", "CompositePrinterParser", $STATIC | $FINAL},
	{"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser", "java.time.format.DateTimeFormatterBuilder", "DateTimePrinterParser", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DateTimeFormatterBuilder$CompositePrinterParser_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.time.format.DateTimeFormatterBuilder$CompositePrinterParser",
	"java.lang.Object",
	"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser",
	_DateTimeFormatterBuilder$CompositePrinterParser_FieldInfo_,
	_DateTimeFormatterBuilder$CompositePrinterParser_MethodInfo_,
	nullptr,
	nullptr,
	_DateTimeFormatterBuilder$CompositePrinterParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.format.DateTimeFormatterBuilder"
};

$Object* allocate$DateTimeFormatterBuilder$CompositePrinterParser($Class* clazz) {
	return $of($alloc(DateTimeFormatterBuilder$CompositePrinterParser));
}

void DateTimeFormatterBuilder$CompositePrinterParser::init$($List* printerParsers, bool optional) {
	$useLocalCurrentObjectStackCache();
	DateTimeFormatterBuilder$CompositePrinterParser::init$($fcast($DateTimeFormatterBuilder$DateTimePrinterParserArray, $($nc(printerParsers)->toArray($$new($DateTimeFormatterBuilder$DateTimePrinterParserArray, 0)))), optional);
}

void DateTimeFormatterBuilder$CompositePrinterParser::init$($DateTimeFormatterBuilder$DateTimePrinterParserArray* printerParsers, bool optional) {
	$set(this, printerParsers, printerParsers);
	this->optional = optional;
}

DateTimeFormatterBuilder$CompositePrinterParser* DateTimeFormatterBuilder$CompositePrinterParser::withOptional(bool optional) {
	if (optional == this->optional) {
		return this;
	}
	return $new(DateTimeFormatterBuilder$CompositePrinterParser, this->printerParsers, optional);
}

bool DateTimeFormatterBuilder$CompositePrinterParser::format($DateTimePrintContext* context, $StringBuilder* buf) {
	$useLocalCurrentObjectStackCache();
	int32_t length = $nc(buf)->length();
	if (this->optional) {
		$nc(context)->startOptional();
	}
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			{
				$var($DateTimeFormatterBuilder$DateTimePrinterParserArray, arr$, this->printerParsers);
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($DateTimeFormatterBuilder$DateTimePrinterParser, pp, arr$->get(i$));
					{
						if ($nc(pp)->format(context, buf) == false) {
							buf->setLength(length);
							var$2 = true;
							return$1 = true;
							goto $finally;
						}
					}
				}
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			if (this->optional) {
				$nc(context)->endOptional();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return true;
}

int32_t DateTimeFormatterBuilder$CompositePrinterParser::parse($DateTimeParseContext* context, $CharSequence* text, int32_t position) {
	$useLocalCurrentObjectStackCache();
	if (this->optional) {
		$nc(context)->startOptional();
		int32_t pos = position;
		{
			$var($DateTimeFormatterBuilder$DateTimePrinterParserArray, arr$, this->printerParsers);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($DateTimeFormatterBuilder$DateTimePrinterParser, pp, arr$->get(i$));
				{
					pos = $nc(pp)->parse(context, text, pos);
					if (pos < 0) {
						context->endOptional(false);
						return position;
					}
				}
			}
		}
		context->endOptional(true);
		return pos;
	} else {
		{
			$var($DateTimeFormatterBuilder$DateTimePrinterParserArray, arr$, this->printerParsers);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($DateTimeFormatterBuilder$DateTimePrinterParser, pp, arr$->get(i$));
				{
					position = $nc(pp)->parse(context, text, position);
					if (position < 0) {
						break;
					}
				}
			}
		}
		return position;
	}
}

$String* DateTimeFormatterBuilder$CompositePrinterParser::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	if (this->printerParsers != nullptr) {
		buf->append(this->optional ? "["_s : "("_s);
		{
			$var($DateTimeFormatterBuilder$DateTimePrinterParserArray, arr$, this->printerParsers);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($DateTimeFormatterBuilder$DateTimePrinterParser, pp, arr$->get(i$));
				{
					buf->append($of(pp));
				}
			}
		}
		buf->append(this->optional ? "]"_s : ")"_s);
	}
	return buf->toString();
}

DateTimeFormatterBuilder$CompositePrinterParser::DateTimeFormatterBuilder$CompositePrinterParser() {
}

$Class* DateTimeFormatterBuilder$CompositePrinterParser::load$($String* name, bool initialize) {
	$loadClass(DateTimeFormatterBuilder$CompositePrinterParser, name, initialize, &_DateTimeFormatterBuilder$CompositePrinterParser_ClassInfo_, allocate$DateTimeFormatterBuilder$CompositePrinterParser);
	return class$;
}

$Class* DateTimeFormatterBuilder$CompositePrinterParser::class$ = nullptr;

		} // format
	} // time
} // java