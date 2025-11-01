#ifndef _jdk_internal_org_xml_sax_helpers_DefaultHandler_h_
#define _jdk_internal_org_xml_sax_helpers_DefaultHandler_h_
//$ class jdk.internal.org.xml.sax.helpers.DefaultHandler
//$ extends jdk.internal.org.xml.sax.EntityResolver
//$ implements jdk.internal.org.xml.sax.DTDHandler,jdk.internal.org.xml.sax.ContentHandler,jdk.internal.org.xml.sax.ErrorHandler

#include <java/lang/Array.h>
#include <jdk/internal/org/xml/sax/ContentHandler.h>
#include <jdk/internal/org/xml/sax/DTDHandler.h>
#include <jdk/internal/org/xml/sax/EntityResolver.h>
#include <jdk/internal/org/xml/sax/ErrorHandler.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {
					class Attributes;
					class InputSource;
					class Locator;
					class SAXParseException;
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
					namespace helpers {

class $import DefaultHandler : public ::jdk::internal::org::xml::sax::EntityResolver, public ::jdk::internal::org::xml::sax::DTDHandler, public ::jdk::internal::org::xml::sax::ContentHandler, public ::jdk::internal::org::xml::sax::ErrorHandler {
	$class(DefaultHandler, $NO_CLASS_INIT, ::jdk::internal::org::xml::sax::EntityResolver, ::jdk::internal::org::xml::sax::DTDHandler, ::jdk::internal::org::xml::sax::ContentHandler, ::jdk::internal::org::xml::sax::ErrorHandler)
public:
	DefaultHandler();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void characters($chars* ch, int32_t start, int32_t length) override;
	virtual void endDocument() override;
	virtual void endElement($String* uri, $String* localName, $String* qName) override;
	virtual void endPrefixMapping($String* prefix) override;
	virtual void error(::jdk::internal::org::xml::sax::SAXParseException* e) override;
	virtual void fatalError(::jdk::internal::org::xml::sax::SAXParseException* e) override;
	virtual void ignorableWhitespace($chars* ch, int32_t start, int32_t length) override;
	virtual void notationDecl($String* name, $String* publicId, $String* systemId) override;
	virtual void processingInstruction($String* target, $String* data) override;
	virtual ::jdk::internal::org::xml::sax::InputSource* resolveEntity($String* publicId, $String* systemId) override;
	virtual void setDocumentLocator(::jdk::internal::org::xml::sax::Locator* locator) override;
	virtual void skippedEntity($String* name) override;
	virtual void startDocument() override;
	virtual void startElement($String* uri, $String* localName, $String* qName, ::jdk::internal::org::xml::sax::Attributes* attributes) override;
	virtual void startPrefixMapping($String* prefix, $String* uri) override;
	virtual $String* toString() override;
	virtual void unparsedEntityDecl($String* name, $String* publicId, $String* systemId, $String* notationName) override;
	virtual void warning(::jdk::internal::org::xml::sax::SAXParseException* e) override;
};

					} // helpers
				} // sax
			} // xml
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_xml_sax_helpers_DefaultHandler_h_