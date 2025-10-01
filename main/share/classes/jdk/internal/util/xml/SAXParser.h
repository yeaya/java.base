#ifndef _jdk_internal_util_xml_SAXParser_h_
#define _jdk_internal_util_xml_SAXParser_h_
//$ class jdk.internal.util.xml.SAXParser
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class File;
		class InputStream;
	}
}
namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {
					class InputSource;
					class XMLReader;
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
						class DefaultHandler;
					}
				}
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace util {
			namespace xml {

class $export SAXParser : public ::java::lang::Object {
	$class(SAXParser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SAXParser();
	void init$();
	virtual ::jdk::internal::org::xml::sax::XMLReader* getXMLReader() {return nullptr;}
	virtual bool isNamespaceAware() {return false;}
	virtual bool isValidating() {return false;}
	virtual bool isXIncludeAware();
	virtual void parse(::java::io::InputStream* is, ::jdk::internal::org::xml::sax::helpers::DefaultHandler* dh);
	virtual void parse($String* uri, ::jdk::internal::org::xml::sax::helpers::DefaultHandler* dh);
	virtual void parse(::java::io::File* f, ::jdk::internal::org::xml::sax::helpers::DefaultHandler* dh);
	virtual void parse(::jdk::internal::org::xml::sax::InputSource* is, ::jdk::internal::org::xml::sax::helpers::DefaultHandler* dh);
};

			} // xml
		} // util
	} // internal
} // jdk

#endif // _jdk_internal_util_xml_SAXParser_h_