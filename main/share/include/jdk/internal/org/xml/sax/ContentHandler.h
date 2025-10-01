#ifndef _jdk_internal_org_xml_sax_ContentHandler_h_
#define _jdk_internal_org_xml_sax_ContentHandler_h_
//$ interface jdk.internal.org.xml.sax.ContentHandler
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {
					class Attributes;
					class Locator;
				}
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {

class $import ContentHandler : public ::java::lang::Object {
	$interface(ContentHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void characters($chars* ch, int32_t start, int32_t length) {}
	virtual void endDocument() {}
	virtual void endElement($String* uri, $String* localName, $String* qName) {}
	virtual void endPrefixMapping($String* prefix) {}
	virtual void ignorableWhitespace($chars* ch, int32_t start, int32_t length) {}
	virtual void processingInstruction($String* target, $String* data) {}
	virtual void setDocumentLocator(::jdk::internal::org::xml::sax::Locator* locator) {}
	virtual void skippedEntity($String* name) {}
	virtual void startDocument() {}
	virtual void startElement($String* uri, $String* localName, $String* qName, ::jdk::internal::org::xml::sax::Attributes* atts) {}
	virtual void startPrefixMapping($String* prefix, $String* uri) {}
};

				} // sax
			} // xml
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_xml_sax_ContentHandler_h_