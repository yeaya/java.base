#ifndef _jdk_internal_util_xml_XMLStreamWriter_h_
#define _jdk_internal_util_xml_XMLStreamWriter_h_
//$ interface jdk.internal.util.xml.XMLStreamWriter
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_CHARSET")
#undef DEFAULT_CHARSET
#pragma push_macro("DEFAULT_ENCODING")
#undef DEFAULT_ENCODING
#pragma push_macro("DEFAULT_XML_VERSION")
#undef DEFAULT_XML_VERSION

namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace util {
			namespace xml {

class $export XMLStreamWriter : public ::java::lang::Object {
	$interface(XMLStreamWriter, 0, ::java::lang::Object)
public:
	virtual void close() {}
	virtual void flush() {}
	virtual void writeAttribute($String* localName, $String* value) {}
	virtual void writeCData($String* data) {}
	virtual void writeCharacters($String* text) {}
	virtual void writeCharacters($chars* text, int32_t start, int32_t len) {}
	virtual void writeDTD($String* dtd) {}
	virtual void writeEmptyElement($String* localName) {}
	virtual void writeEndDocument() {}
	virtual void writeEndElement() {}
	virtual void writeStartDocument() {}
	virtual void writeStartDocument($String* version) {}
	virtual void writeStartDocument($String* encoding, $String* version) {}
	virtual void writeStartElement($String* localName) {}
	static $String* DEFAULT_XML_VERSION;
	static $String* DEFAULT_ENCODING;
	static ::java::nio::charset::Charset* DEFAULT_CHARSET;
};

			} // xml
		} // util
	} // internal
} // jdk

#pragma pop_macro("DEFAULT_CHARSET")
#pragma pop_macro("DEFAULT_ENCODING")
#pragma pop_macro("DEFAULT_XML_VERSION")

#endif // _jdk_internal_util_xml_XMLStreamWriter_h_