#ifndef _java_text_PatternEntry$Parser_h_
#define _java_text_PatternEntry$Parser_h_
//$ class java.text.PatternEntry$Parser
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace java {
	namespace text {
		class PatternEntry;
	}
}

namespace java {
	namespace text {

class PatternEntry$Parser : public ::java::lang::Object {
	$class(PatternEntry$Parser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PatternEntry$Parser();
	void init$($String* pattern);
	virtual ::java::text::PatternEntry* next();
	$String* pattern = nullptr;
	int32_t i = 0;
	::java::lang::StringBuffer* newChars = nullptr;
	::java::lang::StringBuffer* newExtension = nullptr;
};

	} // text
} // java

#endif // _java_text_PatternEntry$Parser_h_