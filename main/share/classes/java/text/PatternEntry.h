#ifndef _java_text_PatternEntry_h_
#define _java_text_PatternEntry_h_
//$ class java.text.PatternEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("RESET")
#undef RESET
#pragma push_macro("UNSET")
#undef UNSET

namespace java {
	namespace lang {
		class StringBuffer;
	}
}

namespace java {
	namespace text {

class PatternEntry : public ::java::lang::Object {
	$class(PatternEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PatternEntry();
	void init$(int32_t strength, ::java::lang::StringBuffer* chars, ::java::lang::StringBuffer* extension);
	virtual void addToBuffer(::java::lang::StringBuffer* toAddTo, bool showExtension, bool showWhiteSpace, ::java::text::PatternEntry* lastEntry);
	static void appendQuoted($String* chars, ::java::lang::StringBuffer* toAddTo);
	virtual void appendQuotedChars(::java::lang::StringBuffer* toAddTo);
	virtual void appendQuotedExtension(::java::lang::StringBuffer* toAddTo);
	virtual bool equals(Object$* obj) override;
	$String* getChars();
	$String* getExtension();
	int32_t getStrength();
	virtual int32_t hashCode() override;
	static bool isSpecialChar(char16_t ch);
	virtual $String* toString() override;
	static const int32_t RESET = (-2);
	static const int32_t UNSET = (-1);
	int32_t strength = 0;
	$String* chars = nullptr;
	$String* extension = nullptr;
};

	} // text
} // java

#pragma pop_macro("RESET")
#pragma pop_macro("UNSET")

#endif // _java_text_PatternEntry_h_