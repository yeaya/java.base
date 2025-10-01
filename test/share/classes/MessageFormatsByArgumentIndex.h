#ifndef _MessageFormatsByArgumentIndex_h_
#define _MessageFormatsByArgumentIndex_h_
//$ class MessageFormatsByArgumentIndex
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace text {
		class Format;
	}
}

class $export MessageFormatsByArgumentIndex : public ::java::lang::Object {
	$class(MessageFormatsByArgumentIndex, 0, ::java::lang::Object)
public:
	MessageFormatsByArgumentIndex();
	void init$();
	static void checkPattern($String* actual, $String* expected);
	static void checkSubformat($Array<::java::text::Format>* subformats, int32_t index, ::java::text::Format* expected);
	static void checkSubformatLength($Array<::java::text::Format>* subformats, int32_t expected);
	static void main($StringArray* args);
	static $String* choicePattern;
};

#endif // _MessageFormatsByArgumentIndex_h_