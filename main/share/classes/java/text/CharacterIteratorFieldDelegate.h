#ifndef _java_text_CharacterIteratorFieldDelegate_h_
#define _java_text_CharacterIteratorFieldDelegate_h_
//$ class java.text.CharacterIteratorFieldDelegate
//$ extends java.text.Format$FieldDelegate

#include <java/text/Format$FieldDelegate.h>

namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace java {
	namespace text {
		class AttributedCharacterIterator;
		class Format$Field;
	}
}
namespace java {
	namespace util {
		class ArrayList;
	}
}

namespace java {
	namespace text {

class CharacterIteratorFieldDelegate : public ::java::text::Format$FieldDelegate {
	$class(CharacterIteratorFieldDelegate, $NO_CLASS_INIT, ::java::text::Format$FieldDelegate)
public:
	CharacterIteratorFieldDelegate();
	void init$();
	virtual void formatted(::java::text::Format$Field* attr, Object$* value, int32_t start, int32_t end, ::java::lang::StringBuffer* buffer) override;
	virtual void formatted(int32_t fieldID, ::java::text::Format$Field* attr, Object$* value, int32_t start, int32_t end, ::java::lang::StringBuffer* buffer) override;
	virtual ::java::text::AttributedCharacterIterator* getIterator($String* string);
	::java::util::ArrayList* attributedStrings = nullptr;
	int32_t size = 0;
};

	} // text
} // java

#endif // _java_text_CharacterIteratorFieldDelegate_h_