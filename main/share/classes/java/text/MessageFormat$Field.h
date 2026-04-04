#ifndef _java_text_MessageFormat$Field_h_
#define _java_text_MessageFormat$Field_h_
//$ class java.text.MessageFormat$Field
//$ extends java.text.Format$Field

#include <java/text/Format$Field.h>

#pragma push_macro("ARGUMENT")
#undef ARGUMENT

namespace java {
	namespace text {

class $export MessageFormat$Field : public ::java::text::Format$Field {
	$class(MessageFormat$Field, 0, ::java::text::Format$Field)
public:
	MessageFormat$Field();
	static void clinit$(::java::lang::Class* clazz);
	void init$($String* name);
	virtual $Object* readResolve() override;
	static const int64_t serialVersionUID = (int64_t)0x6da23d2c7b46bfaa;
	static ::java::text::MessageFormat$Field* ARGUMENT;
};

	} // text
} // java

#pragma pop_macro("ARGUMENT")

#endif // _java_text_MessageFormat$Field_h_