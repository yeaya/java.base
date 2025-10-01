#ifndef _java_time_format_DateTimeFormatterBuilder$PrefixTree$LENIENT_h_
#define _java_time_format_DateTimeFormatterBuilder$PrefixTree$LENIENT_h_
//$ class java.time.format.DateTimeFormatterBuilder$PrefixTree$LENIENT
//$ extends java.time.format.DateTimeFormatterBuilder$PrefixTree$CI

#include <java/time/format/DateTimeFormatterBuilder$PrefixTree$CI.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace text {
		class ParsePosition;
	}
}
namespace java {
	namespace time {
		namespace format {
			class DateTimeFormatterBuilder$PrefixTree;
		}
	}
}

namespace java {
	namespace time {
		namespace format {

class DateTimeFormatterBuilder$PrefixTree$LENIENT : public ::java::time::format::DateTimeFormatterBuilder$PrefixTree$CI {
	$class(DateTimeFormatterBuilder$PrefixTree$LENIENT, $NO_CLASS_INIT, ::java::time::format::DateTimeFormatterBuilder$PrefixTree$CI)
public:
	DateTimeFormatterBuilder$PrefixTree$LENIENT();
	void init$($String* k, $String* v, ::java::time::format::DateTimeFormatterBuilder$PrefixTree* child);
	bool isLenientChar(char16_t c);
	using ::java::time::format::DateTimeFormatterBuilder$PrefixTree$CI::match;
	virtual $String* match(::java::lang::CharSequence* text, ::java::text::ParsePosition* pos) override;
	virtual ::java::time::format::DateTimeFormatterBuilder$PrefixTree$CI* newNode($String* k, $String* v, ::java::time::format::DateTimeFormatterBuilder$PrefixTree* child) override;
	virtual $String* toKey($String* k) override;
};

		} // format
	} // time
} // java

#endif // _java_time_format_DateTimeFormatterBuilder$PrefixTree$LENIENT_h_