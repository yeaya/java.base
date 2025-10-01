#ifndef _java_text_AttributeEntry_h_
#define _java_text_AttributeEntry_h_
//$ class java.text.AttributeEntry
//$ extends java.util.Map$Entry

#include <java/util/Map$Entry.h>

namespace java {
	namespace text {
		class AttributedCharacterIterator$Attribute;
	}
}

namespace java {
	namespace text {

class AttributeEntry : public ::java::util::Map$Entry {
	$class(AttributeEntry, $NO_CLASS_INIT, ::java::util::Map$Entry)
public:
	AttributeEntry();
	void init$(::java::text::AttributedCharacterIterator$Attribute* key, Object$* value);
	virtual bool equals(Object$* o) override;
	virtual $Object* getKey() override;
	virtual $Object* getValue() override;
	virtual int32_t hashCode() override;
	virtual $Object* setValue(Object$* newValue) override;
	virtual $String* toString() override;
	::java::text::AttributedCharacterIterator$Attribute* key = nullptr;
	$Object* value = nullptr;
};

	} // text
} // java

#endif // _java_text_AttributeEntry_h_