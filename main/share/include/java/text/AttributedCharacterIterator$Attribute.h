#ifndef _java_text_AttributedCharacterIterator$Attribute_h_
#define _java_text_AttributedCharacterIterator$Attribute_h_
//$ class java.text.AttributedCharacterIterator$Attribute
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

#pragma push_macro("INPUT_METHOD_SEGMENT")
#undef INPUT_METHOD_SEGMENT
#pragma push_macro("LANGUAGE")
#undef LANGUAGE
#pragma push_macro("READING")
#undef READING

namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace text {

class $import AttributedCharacterIterator$Attribute : public ::java::io::Serializable {
	$class(AttributedCharacterIterator$Attribute, 0, ::java::io::Serializable)
public:
	AttributedCharacterIterator$Attribute();
	void init$($String* name);
	virtual bool equals(Object$* obj) override;
	virtual $String* getName();
	virtual int32_t hashCode() override;
	virtual $Object* readResolve();
	virtual $String* toString() override;
	$String* name = nullptr;
	static ::java::util::Map* instanceMap;
	static ::java::text::AttributedCharacterIterator$Attribute* LANGUAGE;
	static ::java::text::AttributedCharacterIterator$Attribute* READING;
	static ::java::text::AttributedCharacterIterator$Attribute* INPUT_METHOD_SEGMENT;
	static const int64_t serialVersionUID = (int64_t)0x811E7426CD47175C;
};

	} // text
} // java

#pragma pop_macro("INPUT_METHOD_SEGMENT")
#pragma pop_macro("LANGUAGE")
#pragma pop_macro("READING")

#endif // _java_text_AttributedCharacterIterator$Attribute_h_