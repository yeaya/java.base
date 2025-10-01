#ifndef _jdk_internal_org_xml_sax_ErrorHandler_h_
#define _jdk_internal_org_xml_sax_ErrorHandler_h_
//$ interface jdk.internal.org.xml.sax.ErrorHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {
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

class $export ErrorHandler : public ::java::lang::Object {
	$interface(ErrorHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void error(::jdk::internal::org::xml::sax::SAXParseException* exception) {}
	virtual void fatalError(::jdk::internal::org::xml::sax::SAXParseException* exception) {}
	virtual void warning(::jdk::internal::org::xml::sax::SAXParseException* exception) {}
};

				} // sax
			} // xml
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_xml_sax_ErrorHandler_h_