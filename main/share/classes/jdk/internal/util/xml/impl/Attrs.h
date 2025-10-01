#ifndef _jdk_internal_util_xml_impl_Attrs_h_
#define _jdk_internal_util_xml_impl_Attrs_h_
//$ class jdk.internal.util.xml.impl.Attrs
//$ extends jdk.internal.org.xml.sax.Attributes

#include <java/lang/Array.h>
#include <jdk/internal/org/xml/sax/Attributes.h>

namespace jdk {
	namespace internal {
		namespace util {
			namespace xml {
				namespace impl {

class $export Attrs : public ::jdk::internal::org::xml::sax::Attributes {
	$class(Attrs, $NO_CLASS_INIT, ::jdk::internal::org::xml::sax::Attributes)
public:
	Attrs();
	void init$();
	virtual int32_t getIndex($String* uri, $String* localName) override;
	virtual int32_t getIndex($String* qName) override;
	virtual int32_t getIndexNullNS($String* uri, $String* localName);
	virtual int32_t getLength() override;
	virtual $String* getLocalName(int32_t index) override;
	virtual $String* getQName(int32_t index) override;
	virtual $String* getType(int32_t index) override;
	virtual $String* getType($String* uri, $String* localName) override;
	virtual $String* getType($String* qName) override;
	virtual $String* getURI(int32_t index) override;
	virtual $String* getValue(int32_t index) override;
	virtual $String* getValue($String* uri, $String* localName) override;
	virtual $String* getValue($String* qName) override;
	virtual bool isDeclared(int32_t index);
	virtual bool isDeclared($String* qName);
	virtual bool isDeclared($String* uri, $String* localName);
	virtual bool isSpecified(int32_t index);
	virtual bool isSpecified($String* uri, $String* localName);
	virtual bool isSpecified($String* qName);
	virtual void setLength(char16_t length);
	$StringArray* mItems = nullptr;
	char16_t mLength = 0;
	char16_t mAttrIdx = 0;
};

				} // impl
			} // xml
		} // util
	} // internal
} // jdk

#endif // _jdk_internal_util_xml_impl_Attrs_h_