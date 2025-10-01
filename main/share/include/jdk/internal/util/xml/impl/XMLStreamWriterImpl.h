#ifndef _jdk_internal_util_xml_impl_XMLStreamWriterImpl_h_
#define _jdk_internal_util_xml_impl_XMLStreamWriterImpl_h_
//$ class jdk.internal.util.xml.impl.XMLStreamWriterImpl
//$ extends jdk.internal.util.xml.XMLStreamWriter

#include <java/lang/Array.h>
#include <jdk/internal/util/xml/XMLStreamWriter.h>

#pragma push_macro("AMPERSAND")
#undef AMPERSAND
#pragma push_macro("ELEMENT_STARTTAG_CLOSE")
#undef ELEMENT_STARTTAG_CLOSE
#pragma push_macro("CLOSE_START_TAG")
#undef CLOSE_START_TAG
#pragma push_macro("CLOSE_EMPTY_ELEMENT")
#undef CLOSE_EMPTY_ELEMENT
#pragma push_macro("ELEMENT_STARTTAG_OPEN")
#undef ELEMENT_STARTTAG_OPEN
#pragma push_macro("START_CDATA")
#undef START_CDATA
#pragma push_macro("END_CDATA")
#undef END_CDATA
#pragma push_macro("STATE_ELEMENT")
#undef STATE_ELEMENT
#pragma push_macro("STATE_XML_DECL")
#undef STATE_XML_DECL
#pragma push_macro("STATE_PROLOG")
#undef STATE_PROLOG
#pragma push_macro("ELEMENT_ENDTAG_OPEN")
#undef ELEMENT_ENDTAG_OPEN
#pragma push_macro("ELEMENT_ENDTAG_CLOSE")
#undef ELEMENT_ENDTAG_CLOSE
#pragma push_macro("OPEN_END_TAG")
#undef OPEN_END_TAG
#pragma push_macro("SPACE")
#undef SPACE
#pragma push_macro("CLOSE_END_TAG")
#undef CLOSE_END_TAG
#pragma push_macro("SEMICOLON")
#undef SEMICOLON
#pragma push_macro("ENCODING_PREFIX")
#undef ENCODING_PREFIX
#pragma push_macro("DOUBLEQUOT")
#undef DOUBLEQUOT
#pragma push_macro("OPEN_START_TAG")
#undef OPEN_START_TAG
#pragma push_macro("STATE_DTD_DECL")
#undef STATE_DTD_DECL

namespace java {
	namespace io {
		class OutputStream;
	}
}
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
				namespace impl {
					class XMLStreamWriterImpl$Element;
					class XMLWriter;
				}
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace util {
			namespace xml {
				namespace impl {

class $import XMLStreamWriterImpl : public ::jdk::internal::util::xml::XMLStreamWriter {
	$class(XMLStreamWriterImpl, 0, ::jdk::internal::util::xml::XMLStreamWriter)
public:
	XMLStreamWriterImpl();
	void init$(::java::io::OutputStream* os);
	void init$(::java::io::OutputStream* os, ::java::nio::charset::Charset* cs);
	::java::nio::charset::Charset* checkCharset(::java::nio::charset::Charset* charset);
	virtual void close() override;
	void closeStartTag();
	virtual void flush() override;
	::java::nio::charset::Charset* getCharset($String* encoding);
	void openStartTag();
	virtual void setDoIndent(bool doIndent);
	virtual void writeAttribute($String* localName, $String* value) override;
	virtual void writeCData($String* cdata) override;
	virtual void writeCharacters($String* data) override;
	virtual void writeCharacters($chars* data, int32_t start, int32_t len) override;
	virtual void writeDTD($String* dtd) override;
	virtual void writeEmptyElement($String* localName) override;
	virtual void writeEndDocument() override;
	virtual void writeEndElement() override;
	void writeLineSeparator();
	virtual void writeStartDocument() override;
	virtual void writeStartDocument($String* version) override;
	virtual void writeStartDocument($String* encoding, $String* version) override;
	virtual void writeStartDocument($String* encoding, $String* version, $String* standalone);
	virtual void writeStartElement($String* localName) override;
	void writeXMLContent($chars* content, int32_t start, int32_t length, bool escapeChars);
	void writeXMLContent($String* content);
	void writeXMLContent($String* content, bool escapeChars, bool escapeDoubleQuotes);
	static const int32_t STATE_XML_DECL = 1;
	static const int32_t STATE_PROLOG = 2;
	static const int32_t STATE_DTD_DECL = 3;
	static const int32_t STATE_ELEMENT = 4;
	static const int32_t ELEMENT_STARTTAG_OPEN = 10;
	static const int32_t ELEMENT_STARTTAG_CLOSE = 11;
	static const int32_t ELEMENT_ENDTAG_OPEN = 12;
	static const int32_t ELEMENT_ENDTAG_CLOSE = 13;
	static const char16_t CLOSE_START_TAG = ((char16_t)62);
	static const char16_t OPEN_START_TAG = ((char16_t)60);
	static $String* OPEN_END_TAG;
	static const char16_t CLOSE_END_TAG = ((char16_t)62);
	static $String* START_CDATA;
	static $String* END_CDATA;
	static $String* CLOSE_EMPTY_ELEMENT;
	static $String* ENCODING_PREFIX;
	static const char16_t SPACE = ((char16_t)32);
	static const char16_t AMPERSAND = ((char16_t)38);
	static const char16_t DOUBLEQUOT = ((char16_t)34);
	static const char16_t SEMICOLON = ((char16_t)59);
	int32_t _state = 0;
	::jdk::internal::util::xml::impl::XMLStreamWriterImpl$Element* _currentEle = nullptr;
	::jdk::internal::util::xml::impl::XMLWriter* _writer = nullptr;
	::java::nio::charset::Charset* _charset = nullptr;
	bool _escapeCharacters = false;
	bool _doIndent = false;
	$chars* _lineSep = nullptr;
};

				} // impl
			} // xml
		} // util
	} // internal
} // jdk

#pragma pop_macro("AMPERSAND")
#pragma pop_macro("ELEMENT_STARTTAG_CLOSE")
#pragma pop_macro("CLOSE_START_TAG")
#pragma pop_macro("CLOSE_EMPTY_ELEMENT")
#pragma pop_macro("ELEMENT_STARTTAG_OPEN")
#pragma pop_macro("START_CDATA")
#pragma pop_macro("END_CDATA")
#pragma pop_macro("STATE_ELEMENT")
#pragma pop_macro("STATE_XML_DECL")
#pragma pop_macro("STATE_PROLOG")
#pragma pop_macro("ELEMENT_ENDTAG_OPEN")
#pragma pop_macro("ELEMENT_ENDTAG_CLOSE")
#pragma pop_macro("OPEN_END_TAG")
#pragma pop_macro("SPACE")
#pragma pop_macro("CLOSE_END_TAG")
#pragma pop_macro("SEMICOLON")
#pragma pop_macro("ENCODING_PREFIX")
#pragma pop_macro("DOUBLEQUOT")
#pragma pop_macro("OPEN_START_TAG")
#pragma pop_macro("STATE_DTD_DECL")

#endif // _jdk_internal_util_xml_impl_XMLStreamWriterImpl_h_