#ifndef _jdk_internal_util_xml_PropertiesDefaultHandler_h_
#define _jdk_internal_util_xml_PropertiesDefaultHandler_h_
//$ class jdk.internal.util.xml.PropertiesDefaultHandler
//$ extends jdk.internal.org.xml.sax.helpers.DefaultHandler

#include <java/lang/Array.h>
#include <jdk/internal/org/xml/sax/helpers/DefaultHandler.h>

#pragma push_macro("ALLOWED_COMMENT")
#undef ALLOWED_COMMENT
#pragma push_macro("ALLOWED_ELEMENTS")
#undef ALLOWED_ELEMENTS
#pragma push_macro("ATTR_KEY")
#undef ATTR_KEY
#pragma push_macro("ELEMENT_COMMENT")
#undef ELEMENT_COMMENT
#pragma push_macro("ELEMENT_ENTRY")
#undef ELEMENT_ENTRY
#pragma push_macro("ELEMENT_ROOT")
#undef ELEMENT_ROOT
#pragma push_macro("EXTERNAL_XML_VERSION")
#undef EXTERNAL_XML_VERSION
#pragma push_macro("PROPS_DTD")
#undef PROPS_DTD
#pragma push_macro("PROPS_DTD_DECL")
#undef PROPS_DTD_DECL
#pragma push_macro("PROPS_DTD_URI")
#undef PROPS_DTD_URI

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}
namespace java {
	namespace util {
		class Properties;
	}
}
namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {
					class Attributes;
					class InputSource;
					class SAXParseException;
				}
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace util {
			namespace xml {

class $export PropertiesDefaultHandler : public ::jdk::internal::org::xml::sax::helpers::DefaultHandler {
	$class(PropertiesDefaultHandler, 0, ::jdk::internal::org::xml::sax::helpers::DefaultHandler)
public:
	PropertiesDefaultHandler();
	void init$();
	virtual void characters($chars* ch, int32_t start, int32_t length) override;
	virtual void endElement($String* uri, $String* localName, $String* qName) override;
	virtual void error(::jdk::internal::org::xml::sax::SAXParseException* x) override;
	virtual void fatalError(::jdk::internal::org::xml::sax::SAXParseException* x) override;
	virtual void load(::java::util::Properties* props, ::java::io::InputStream* in);
	virtual ::jdk::internal::org::xml::sax::InputSource* resolveEntity($String* pubid, $String* sysid) override;
	virtual void startDTD($String* name, $String* publicId, $String* systemId) override;
	virtual void startElement($String* uri, $String* localName, $String* qName, ::jdk::internal::org::xml::sax::Attributes* attributes) override;
	virtual void startInternalSub() override;
	virtual void store(::java::util::Properties* props, ::java::io::OutputStream* os, $String* comment, ::java::nio::charset::Charset* charset);
	virtual void warning(::jdk::internal::org::xml::sax::SAXParseException* x) override;
	static $String* ELEMENT_ROOT;
	static $String* ELEMENT_COMMENT;
	static $String* ELEMENT_ENTRY;
	static $String* ATTR_KEY;
	static $String* PROPS_DTD_DECL;
	static $String* PROPS_DTD_URI;
	static $String* PROPS_DTD;
	static $String* EXTERNAL_XML_VERSION;
	::java::util::Properties* properties = nullptr;
	static $String* ALLOWED_ELEMENTS;
	static $String* ALLOWED_COMMENT;
	::java::lang::StringBuilder* buf = nullptr;
	bool sawRoot = false;
	bool sawComment = false;
	bool validEntry = false;
	$String* key = nullptr;
	$String* rootElm = nullptr;
};

			} // xml
		} // util
	} // internal
} // jdk

#pragma pop_macro("ALLOWED_COMMENT")
#pragma pop_macro("ALLOWED_ELEMENTS")
#pragma pop_macro("ATTR_KEY")
#pragma pop_macro("ELEMENT_COMMENT")
#pragma pop_macro("ELEMENT_ENTRY")
#pragma pop_macro("ELEMENT_ROOT")
#pragma pop_macro("EXTERNAL_XML_VERSION")
#pragma pop_macro("PROPS_DTD")
#pragma pop_macro("PROPS_DTD_DECL")
#pragma pop_macro("PROPS_DTD_URI")

#endif // _jdk_internal_util_xml_PropertiesDefaultHandler_h_