#ifndef _java_time_format_DateTimeFormatterBuilder$PrefixTree$CI_h_
#define _java_time_format_DateTimeFormatterBuilder$PrefixTree$CI_h_
//$ class java.time.format.DateTimeFormatterBuilder$PrefixTree$CI
//$ extends java.time.format.DateTimeFormatterBuilder$PrefixTree

#include <java/time/format/DateTimeFormatterBuilder$PrefixTree.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}

namespace java {
	namespace time {
		namespace format {

class DateTimeFormatterBuilder$PrefixTree$CI : public ::java::time::format::DateTimeFormatterBuilder$PrefixTree {
	$class(DateTimeFormatterBuilder$PrefixTree$CI, $NO_CLASS_INIT, ::java::time::format::DateTimeFormatterBuilder$PrefixTree)
public:
	DateTimeFormatterBuilder$PrefixTree$CI();
	void init$($String* k, $String* v, ::java::time::format::DateTimeFormatterBuilder$PrefixTree* child);
	virtual bool isEqual(char16_t c1, char16_t c2) override;
	virtual ::java::time::format::DateTimeFormatterBuilder$PrefixTree$CI* newNode($String* k, $String* v, ::java::time::format::DateTimeFormatterBuilder$PrefixTree* child) override;
	virtual bool prefixOf(::java::lang::CharSequence* text, int32_t off, int32_t end) override;
};

		} // format
	} // time
} // java

#endif // _java_time_format_DateTimeFormatterBuilder$PrefixTree$CI_h_