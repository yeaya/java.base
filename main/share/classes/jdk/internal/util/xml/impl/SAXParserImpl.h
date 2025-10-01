#ifndef _jdk_internal_util_xml_impl_SAXParserImpl_h_
#define _jdk_internal_util_xml_impl_SAXParserImpl_h_
//$ class jdk.internal.util.xml.impl.SAXParserImpl
//$ extends jdk.internal.util.xml.SAXParser

#include <jdk/internal/util/xml/SAXParser.h>

namespace java {
	namespace io {
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
				namespace impl {
					class ParserSAX;
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

class $export SAXParserImpl : public ::jdk::internal::util::xml::SAXParser {
	$class(SAXParserImpl, $NO_CLASS_INIT, ::jdk::internal::util::xml::SAXParser)
public:
	SAXParserImpl();
	void init$();
	virtual ::jdk::internal::org::xml::sax::XMLReader* getXMLReader() override;
	virtual bool isNamespaceAware() override;
	virtual bool isValidating() override;
	using ::jdk::internal::util::xml::SAXParser::parse;
	virtual void parse(::java::io::InputStream* src, ::jdk::internal::org::xml::sax::helpers::DefaultHandler* handler) override;
	virtual void parse(::jdk::internal::org::xml::sax::InputSource* is, ::jdk::internal::org::xml::sax::helpers::DefaultHandler* handler) override;
	::jdk::internal::util::xml::impl::ParserSAX* parser = nullptr;
};

				} // impl
			} // xml
		} // util
	} // internal
} // jdk

#endif // _jdk_internal_util_xml_impl_SAXParserImpl_h_