#ifndef _java_text_AttributedString$AttributeMap_h_
#define _java_text_AttributedString$AttributeMap_h_
//$ class java.text.AttributedString$AttributeMap
//$ extends java.util.AbstractMap

#include <java/util/AbstractMap.h>

namespace java {
	namespace text {
		class AttributedString;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace text {

class AttributedString$AttributeMap : public ::java::util::AbstractMap {
	$class(AttributedString$AttributeMap, $NO_CLASS_INIT, ::java::util::AbstractMap)
public:
	AttributedString$AttributeMap();
	void init$(::java::text::AttributedString* this$0, int32_t runIndex, int32_t beginIndex, int32_t endIndex);
	virtual ::java::util::Set* entrySet() override;
	virtual $Object* get(Object$* key) override;
	using ::java::util::AbstractMap::remove;
	::java::text::AttributedString* this$0 = nullptr;
	int32_t runIndex = 0;
	int32_t beginIndex = 0;
	int32_t endIndex = 0;
};

	} // text
} // java

#endif // _java_text_AttributedString$AttributeMap_h_