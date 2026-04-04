#ifndef _java_text_Format$Field_h_
#define _java_text_Format$Field_h_
//$ class java.text.Format$Field
//$ extends java.text.AttributedCharacterIterator$Attribute

#include <java/text/AttributedCharacterIterator$Attribute.h>

namespace java {
	namespace text {

class $export Format$Field : public ::java::text::AttributedCharacterIterator$Attribute {
	$class(Format$Field, $NO_CLASS_INIT, ::java::text::AttributedCharacterIterator$Attribute)
public:
	Format$Field();
	void init$($String* name);
	static const int64_t serialVersionUID = (int64_t)0x03d7fbbd383b0f9b;
};

	} // text
} // java

#endif // _java_text_Format$Field_h_