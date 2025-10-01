#ifndef _java_time_format_DateTimeFormatterBuilder$PrefixTree_h_
#define _java_time_format_DateTimeFormatterBuilder$PrefixTree_h_
//$ class java.time.format.DateTimeFormatterBuilder$PrefixTree
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
			class DateTimeParseContext;
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace time {
		namespace format {

class $import DateTimeFormatterBuilder$PrefixTree : public ::java::lang::Object {
	$class(DateTimeFormatterBuilder$PrefixTree, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DateTimeFormatterBuilder$PrefixTree();
	void init$($String* k, $String* v, ::java::time::format::DateTimeFormatterBuilder$PrefixTree* child);
	virtual bool add($String* k, $String* v);
	bool add0($String* k, $String* v);
	virtual ::java::time::format::DateTimeFormatterBuilder$PrefixTree* copyTree();
	virtual bool isEqual(char16_t c1, char16_t c2);
	virtual $String* match(::java::lang::CharSequence* text, int32_t off, int32_t end);
	virtual $String* match(::java::lang::CharSequence* text, ::java::text::ParsePosition* pos);
	virtual ::java::time::format::DateTimeFormatterBuilder$PrefixTree* newNode($String* k, $String* v, ::java::time::format::DateTimeFormatterBuilder$PrefixTree* child);
	static ::java::time::format::DateTimeFormatterBuilder$PrefixTree* newTree(::java::time::format::DateTimeParseContext* context);
	static ::java::time::format::DateTimeFormatterBuilder$PrefixTree* newTree(::java::util::Set* keys, ::java::time::format::DateTimeParseContext* context);
	int32_t prefixLength($String* k);
	virtual bool prefixOf(::java::lang::CharSequence* text, int32_t off, int32_t end);
	virtual $String* toKey($String* k);
	$String* key = nullptr;
	$String* value = nullptr;
	char16_t c0 = 0;
	::java::time::format::DateTimeFormatterBuilder$PrefixTree* child = nullptr;
	::java::time::format::DateTimeFormatterBuilder$PrefixTree* sibling = nullptr;
};

		} // format
	} // time
} // java

#endif // _java_time_format_DateTimeFormatterBuilder$PrefixTree_h_