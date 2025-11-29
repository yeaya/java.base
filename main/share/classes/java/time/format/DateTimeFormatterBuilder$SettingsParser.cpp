#include <java/time/format/DateTimeFormatterBuilder$SettingsParser.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Enum.h>
#include <java/lang/IllegalStateException.h>
#include <java/time/format/DateTimeFormatterBuilder.h>
#include <java/time/format/DateTimeParseContext.h>
#include <java/time/format/DateTimePrintContext.h>
#include <jcpp.h>

#undef INSENSITIVE
#undef LENIENT
#undef SENSITIVE
#undef STRICT

using $DateTimeFormatterBuilder$SettingsParserArray = $Array<::java::time::format::DateTimeFormatterBuilder$SettingsParser>;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateTimeParseContext = ::java::time::format::DateTimeParseContext;
using $DateTimePrintContext = ::java::time::format::DateTimePrintContext;

namespace java {
	namespace time {
		namespace format {

$FieldInfo _DateTimeFormatterBuilder$SettingsParser_FieldInfo_[] = {
	{"SENSITIVE", "Ljava/time/format/DateTimeFormatterBuilder$SettingsParser;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DateTimeFormatterBuilder$SettingsParser, SENSITIVE)},
	{"INSENSITIVE", "Ljava/time/format/DateTimeFormatterBuilder$SettingsParser;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DateTimeFormatterBuilder$SettingsParser, INSENSITIVE)},
	{"STRICT", "Ljava/time/format/DateTimeFormatterBuilder$SettingsParser;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DateTimeFormatterBuilder$SettingsParser, STRICT)},
	{"LENIENT", "Ljava/time/format/DateTimeFormatterBuilder$SettingsParser;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DateTimeFormatterBuilder$SettingsParser, LENIENT)},
	{"$VALUES", "[Ljava/time/format/DateTimeFormatterBuilder$SettingsParser;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(DateTimeFormatterBuilder$SettingsParser, $VALUES)},
	{}
};

$MethodInfo _DateTimeFormatterBuilder$SettingsParser_MethodInfo_[] = {
	{"$values", "()[Ljava/time/format/DateTimeFormatterBuilder$SettingsParser;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$DateTimeFormatterBuilder$SettingsParserArray*(*)()>(&DateTimeFormatterBuilder$SettingsParser::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(DateTimeFormatterBuilder$SettingsParser::*)($String*,int32_t)>(&DateTimeFormatterBuilder$SettingsParser::init$))},
	{"format", "(Ljava/time/format/DateTimePrintContext;Ljava/lang/StringBuilder;)Z", nullptr, $PUBLIC},
	{"parse", "(Ljava/time/format/DateTimeParseContext;Ljava/lang/CharSequence;I)I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Ljava/time/format/DateTimeFormatterBuilder$SettingsParser;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DateTimeFormatterBuilder$SettingsParser*(*)($String*)>(&DateTimeFormatterBuilder$SettingsParser::valueOf))},
	{"values", "()[Ljava/time/format/DateTimeFormatterBuilder$SettingsParser;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DateTimeFormatterBuilder$SettingsParserArray*(*)()>(&DateTimeFormatterBuilder$SettingsParser::values))},
	{}
};

$InnerClassInfo _DateTimeFormatterBuilder$SettingsParser_InnerClassesInfo_[] = {
	{"java.time.format.DateTimeFormatterBuilder$SettingsParser", "java.time.format.DateTimeFormatterBuilder", "SettingsParser", $STATIC | $FINAL | $ENUM},
	{"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser", "java.time.format.DateTimeFormatterBuilder", "DateTimePrinterParser", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DateTimeFormatterBuilder$SettingsParser_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"java.time.format.DateTimeFormatterBuilder$SettingsParser",
	"java.lang.Enum",
	"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser",
	_DateTimeFormatterBuilder$SettingsParser_FieldInfo_,
	_DateTimeFormatterBuilder$SettingsParser_MethodInfo_,
	"Ljava/lang/Enum<Ljava/time/format/DateTimeFormatterBuilder$SettingsParser;>;Ljava/time/format/DateTimeFormatterBuilder$DateTimePrinterParser;",
	nullptr,
	_DateTimeFormatterBuilder$SettingsParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.format.DateTimeFormatterBuilder"
};

$Object* allocate$DateTimeFormatterBuilder$SettingsParser($Class* clazz) {
	return $of($alloc(DateTimeFormatterBuilder$SettingsParser));
}

bool DateTimeFormatterBuilder$SettingsParser::equals(Object$* other) {
	 return this->$Enum::equals(other);
}

int32_t DateTimeFormatterBuilder$SettingsParser::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* DateTimeFormatterBuilder$SettingsParser::clone() {
	 return this->$Enum::clone();
}

void DateTimeFormatterBuilder$SettingsParser::finalize() {
	this->$Enum::finalize();
}

DateTimeFormatterBuilder$SettingsParser* DateTimeFormatterBuilder$SettingsParser::SENSITIVE = nullptr;
DateTimeFormatterBuilder$SettingsParser* DateTimeFormatterBuilder$SettingsParser::INSENSITIVE = nullptr;
DateTimeFormatterBuilder$SettingsParser* DateTimeFormatterBuilder$SettingsParser::STRICT = nullptr;
DateTimeFormatterBuilder$SettingsParser* DateTimeFormatterBuilder$SettingsParser::LENIENT = nullptr;
$DateTimeFormatterBuilder$SettingsParserArray* DateTimeFormatterBuilder$SettingsParser::$VALUES = nullptr;

$DateTimeFormatterBuilder$SettingsParserArray* DateTimeFormatterBuilder$SettingsParser::$values() {
	$init(DateTimeFormatterBuilder$SettingsParser);
	return $new($DateTimeFormatterBuilder$SettingsParserArray, {
		DateTimeFormatterBuilder$SettingsParser::SENSITIVE,
		DateTimeFormatterBuilder$SettingsParser::INSENSITIVE,
		DateTimeFormatterBuilder$SettingsParser::STRICT,
		DateTimeFormatterBuilder$SettingsParser::LENIENT
	});
}

$DateTimeFormatterBuilder$SettingsParserArray* DateTimeFormatterBuilder$SettingsParser::values() {
	$init(DateTimeFormatterBuilder$SettingsParser);
	return $cast($DateTimeFormatterBuilder$SettingsParserArray, DateTimeFormatterBuilder$SettingsParser::$VALUES->clone());
}

DateTimeFormatterBuilder$SettingsParser* DateTimeFormatterBuilder$SettingsParser::valueOf($String* name) {
	$init(DateTimeFormatterBuilder$SettingsParser);
	return $cast(DateTimeFormatterBuilder$SettingsParser, $Enum::valueOf(DateTimeFormatterBuilder$SettingsParser::class$, name));
}

void DateTimeFormatterBuilder$SettingsParser::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

bool DateTimeFormatterBuilder$SettingsParser::format($DateTimePrintContext* context, $StringBuilder* buf) {
	return true;
}

int32_t DateTimeFormatterBuilder$SettingsParser::parse($DateTimeParseContext* context, $CharSequence* text, int32_t position) {
	switch (ordinal()) {
	case 0:
		{
			$nc(context)->setCaseSensitive(true);
			break;
		}
	case 1:
		{
			$nc(context)->setCaseSensitive(false);
			break;
		}
	case 2:
		{
			$nc(context)->setStrict(true);
			break;
		}
	case 3:
		{
			$nc(context)->setStrict(false);
			break;
		}
	}
	return position;
}

$String* DateTimeFormatterBuilder$SettingsParser::toString() {
	switch (ordinal()) {
	case 0:
		{
			return "ParseCaseSensitive(true)"_s;
		}
	case 1:
		{
			return "ParseCaseSensitive(false)"_s;
		}
	case 2:
		{
			return "ParseStrict(true)"_s;
		}
	case 3:
		{
			return "ParseStrict(false)"_s;
		}
	}
	$throwNew($IllegalStateException, "Unreachable"_s);
}

void clinit$DateTimeFormatterBuilder$SettingsParser($Class* class$) {
	$assignStatic(DateTimeFormatterBuilder$SettingsParser::SENSITIVE, $new(DateTimeFormatterBuilder$SettingsParser, "SENSITIVE"_s, 0));
	$assignStatic(DateTimeFormatterBuilder$SettingsParser::INSENSITIVE, $new(DateTimeFormatterBuilder$SettingsParser, "INSENSITIVE"_s, 1));
	$assignStatic(DateTimeFormatterBuilder$SettingsParser::STRICT, $new(DateTimeFormatterBuilder$SettingsParser, "STRICT"_s, 2));
	$assignStatic(DateTimeFormatterBuilder$SettingsParser::LENIENT, $new(DateTimeFormatterBuilder$SettingsParser, "LENIENT"_s, 3));
	$assignStatic(DateTimeFormatterBuilder$SettingsParser::$VALUES, DateTimeFormatterBuilder$SettingsParser::$values());
}

DateTimeFormatterBuilder$SettingsParser::DateTimeFormatterBuilder$SettingsParser() {
}

$Class* DateTimeFormatterBuilder$SettingsParser::load$($String* name, bool initialize) {
	$loadClass(DateTimeFormatterBuilder$SettingsParser, name, initialize, &_DateTimeFormatterBuilder$SettingsParser_ClassInfo_, clinit$DateTimeFormatterBuilder$SettingsParser, allocate$DateTimeFormatterBuilder$SettingsParser);
	return class$;
}

$Class* DateTimeFormatterBuilder$SettingsParser::class$ = nullptr;

		} // format
	} // time
} // java