#ifndef _java_time_format_DateTimeFormatterBuilder$SettingsParser_h_
#define _java_time_format_DateTimeFormatterBuilder$SettingsParser_h_
//$ class java.time.format.DateTimeFormatterBuilder$SettingsParser
//$ extends java.lang.Enum
//$ implements java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <java/time/format/DateTimeFormatterBuilder$DateTimePrinterParser.h>

#pragma push_macro("INSENSITIVE")
#undef INSENSITIVE
#pragma push_macro("LENIENT")
#undef LENIENT
#pragma push_macro("SENSITIVE")
#undef SENSITIVE
#pragma push_macro("STRICT")
#undef STRICT

namespace java {
	namespace lang {
		class CharSequence;
		class StringBuilder;
	}
}
namespace java {
	namespace time {
		namespace format {
			class DateTimeParseContext;
			class DateTimePrintContext;
		}
	}
}

namespace java {
	namespace time {
		namespace format {

class $export DateTimeFormatterBuilder$SettingsParser : public ::java::lang::Enum, public ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser {
	$class(DateTimeFormatterBuilder$SettingsParser, 0, ::java::lang::Enum, ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser)
public:
	DateTimeFormatterBuilder$SettingsParser();
	static $Array<::java::time::format::DateTimeFormatterBuilder$SettingsParser>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool format(::java::time::format::DateTimePrintContext* context, ::java::lang::StringBuilder* buf) override;
	virtual int32_t parse(::java::time::format::DateTimeParseContext* context, ::java::lang::CharSequence* text, int32_t position) override;
	virtual $String* toString() override;
	static ::java::time::format::DateTimeFormatterBuilder$SettingsParser* valueOf($String* name);
	static $Array<::java::time::format::DateTimeFormatterBuilder$SettingsParser>* values();
	static ::java::time::format::DateTimeFormatterBuilder$SettingsParser* SENSITIVE;
	static ::java::time::format::DateTimeFormatterBuilder$SettingsParser* INSENSITIVE;
	static ::java::time::format::DateTimeFormatterBuilder$SettingsParser* STRICT;
	static ::java::time::format::DateTimeFormatterBuilder$SettingsParser* LENIENT;
	static $Array<::java::time::format::DateTimeFormatterBuilder$SettingsParser>* $VALUES;
};

		} // format
	} // time
} // java

#pragma pop_macro("INSENSITIVE")
#pragma pop_macro("LENIENT")
#pragma pop_macro("SENSITIVE")
#pragma pop_macro("STRICT")

#endif // _java_time_format_DateTimeFormatterBuilder$SettingsParser_h_