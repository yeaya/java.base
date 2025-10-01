#ifndef _java_text_CompactNumberFormat$Patterns_h_
#define _java_text_CompactNumberFormat$Patterns_h_
//$ class java.text.CompactNumberFormat$Patterns
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace text {
		class CompactNumberFormat;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace text {

class CompactNumberFormat$Patterns : public ::java::lang::Object {
	$class(CompactNumberFormat$Patterns, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CompactNumberFormat$Patterns();
	void init$(::java::text::CompactNumberFormat* this$0);
	::java::text::CompactNumberFormat$Patterns* expandAffix();
	$String* get(double num);
	void lambda$expandAffix$0(::java::text::CompactNumberFormat$Patterns* ret, $String* key, $String* value);
	void put($String* count, $String* pattern);
	::java::text::CompactNumberFormat* this$0 = nullptr;
	::java::util::Map* patternsMap = nullptr;
};

	} // text
} // java

#endif // _java_text_CompactNumberFormat$Patterns_h_