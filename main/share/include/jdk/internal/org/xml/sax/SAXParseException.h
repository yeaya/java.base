#ifndef _jdk_internal_org_xml_sax_SAXParseException_h_
#define _jdk_internal_org_xml_sax_SAXParseException_h_
//$ class jdk.internal.org.xml.sax.SAXParseException
//$ extends jdk.internal.org.xml.sax.SAXException

#include <jdk/internal/org/xml/sax/SAXException.h>

namespace java {
	namespace lang {
		class Exception;
	}
}
namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {
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

class $import SAXParseException : public ::jdk::internal::org::xml::sax::SAXException {
	$class(SAXParseException, $NO_CLASS_INIT, ::jdk::internal::org::xml::sax::SAXException)
public:
	SAXParseException();
	void init$($String* message, ::jdk::internal::org::xml::sax::Locator* locator);
	void init$($String* message, ::jdk::internal::org::xml::sax::Locator* locator, ::java::lang::Exception* e);
	void init$($String* message, $String* publicId, $String* systemId, int32_t lineNumber, int32_t columnNumber);
	void init$($String* message, $String* publicId, $String* systemId, int32_t lineNumber, int32_t columnNumber, ::java::lang::Exception* e);
	virtual int32_t getColumnNumber();
	virtual int32_t getLineNumber();
	virtual $String* getPublicId();
	virtual $String* getSystemId();
	void init($String* publicId, $String* systemId, int32_t lineNumber, int32_t columnNumber);
	virtual $String* toString() override;
	$String* publicId = nullptr;
	$String* systemId = nullptr;
	int32_t lineNumber = 0;
	int32_t columnNumber = 0;
	static const int64_t serialVersionUID = (int64_t)0xB193069484371E28;
	SAXParseException(const SAXParseException& e);
	SAXParseException wrapper$();
	virtual void throwWrapper$() override;
};

				} // sax
			} // xml
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_xml_sax_SAXParseException_h_