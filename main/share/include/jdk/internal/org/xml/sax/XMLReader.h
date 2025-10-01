#ifndef _jdk_internal_org_xml_sax_XMLReader_h_
#define _jdk_internal_org_xml_sax_XMLReader_h_
//$ interface jdk.internal.org.xml.sax.XMLReader
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {
					class ContentHandler;
					class DTDHandler;
					class EntityResolver;
					class ErrorHandler;
					class InputSource;
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

class $import XMLReader : public ::java::lang::Object {
	$interface(XMLReader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::jdk::internal::org::xml::sax::ContentHandler* getContentHandler() {return nullptr;}
	virtual ::jdk::internal::org::xml::sax::DTDHandler* getDTDHandler() {return nullptr;}
	virtual ::jdk::internal::org::xml::sax::EntityResolver* getEntityResolver() {return nullptr;}
	virtual ::jdk::internal::org::xml::sax::ErrorHandler* getErrorHandler() {return nullptr;}
	virtual bool getFeature($String* name) {return false;}
	virtual $Object* getProperty($String* name) {return nullptr;}
	virtual void parse(::jdk::internal::org::xml::sax::InputSource* input) {}
	virtual void parse($String* systemId) {}
	virtual void setContentHandler(::jdk::internal::org::xml::sax::ContentHandler* handler) {}
	virtual void setDTDHandler(::jdk::internal::org::xml::sax::DTDHandler* handler) {}
	virtual void setEntityResolver(::jdk::internal::org::xml::sax::EntityResolver* resolver) {}
	virtual void setErrorHandler(::jdk::internal::org::xml::sax::ErrorHandler* handler) {}
	virtual void setFeature($String* name, bool value) {}
	virtual void setProperty($String* name, Object$* value) {}
};

				} // sax
			} // xml
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_xml_sax_XMLReader_h_