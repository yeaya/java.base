#ifndef _jdk_internal_util_xml_impl_ParserSAX_h_
#define _jdk_internal_util_xml_impl_ParserSAX_h_
//$ class jdk.internal.util.xml.impl.ParserSAX
//$ extends jdk.internal.util.xml.impl.Parser
//$ implements jdk.internal.org.xml.sax.XMLReader,jdk.internal.org.xml.sax.Locator

#include <java/lang/Array.h>
#include <jdk/internal/org/xml/sax/Locator.h>
#include <jdk/internal/org/xml/sax/XMLReader.h>
#include <jdk/internal/util/xml/impl/Parser.h>

#pragma push_macro("FEATURE_NS")
#undef FEATURE_NS
#pragma push_macro("FEATURE_PREF")
#undef FEATURE_PREF

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

class ParserSAX : public ::jdk::internal::util::xml::impl::Parser, public ::jdk::internal::org::xml::sax::XMLReader, public ::jdk::internal::org::xml::sax::Locator {
	$class(ParserSAX, 0, ::jdk::internal::util::xml::impl::Parser, ::jdk::internal::org::xml::sax::XMLReader, ::jdk::internal::org::xml::sax::Locator)
public:
	ParserSAX();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void bflash() override;
	virtual void bflash_ws() override;
	virtual void comm($chars* text, int32_t length) override;
	virtual void docType($String* name, $String* pubid, $String* sysid) override;
	virtual int32_t getColumnNumber() override;
	virtual ::jdk::internal::org::xml::sax::ContentHandler* getContentHandler() override;
	virtual ::jdk::internal::org::xml::sax::DTDHandler* getDTDHandler() override;
	virtual ::jdk::internal::org::xml::sax::EntityResolver* getEntityResolver() override;
	virtual ::jdk::internal::org::xml::sax::ErrorHandler* getErrorHandler() override;
	virtual bool getFeature($String* name) override;
	virtual int32_t getLineNumber() override;
	virtual $Object* getProperty($String* name) override;
	virtual $String* getPublicId() override;
	virtual $String* getSystemId() override;
	virtual void newPrefix() override;
	virtual void notDecl($String* name, $String* pubid, $String* sysid) override;
	virtual void panic($String* msg) override;
	virtual void parse($String* systemId) override;
	virtual void parse(::jdk::internal::org::xml::sax::InputSource* is) override;
	void parse(::java::io::InputStream* src, ::jdk::internal::org::xml::sax::helpers::DefaultHandler* handler);
	void parse(::jdk::internal::org::xml::sax::InputSource* is, ::jdk::internal::org::xml::sax::helpers::DefaultHandler* handler);
	void parse();
	virtual void pi($String* target, $String* body) override;
	virtual ::jdk::internal::org::xml::sax::InputSource* resolveEnt($String* name, $String* pubid, $String* sysid) override;
	virtual void setContentHandler(::jdk::internal::org::xml::sax::ContentHandler* handler) override;
	virtual void setDTDHandler(::jdk::internal::org::xml::sax::DTDHandler* handler) override;
	virtual void setEntityResolver(::jdk::internal::org::xml::sax::EntityResolver* resolver) override;
	virtual void setErrorHandler(::jdk::internal::org::xml::sax::ErrorHandler* handler) override;
	virtual void setFeature($String* name, bool value) override;
	virtual void setProperty($String* name, Object$* value) override;
	virtual void skippedEnt($String* name) override;
	virtual void startInternalSub() override;
	virtual $String* toString() override;
	virtual void unparsedEntDecl($String* name, $String* pubid, $String* sysid, $String* notation) override;
	static $String* FEATURE_NS;
	static $String* FEATURE_PREF;
	bool mFNamespaces = false;
	bool mFPrefixes = false;
	::jdk::internal::org::xml::sax::helpers::DefaultHandler* mHand = nullptr;
	::jdk::internal::org::xml::sax::ContentHandler* mHandCont = nullptr;
	::jdk::internal::org::xml::sax::DTDHandler* mHandDtd = nullptr;
	::jdk::internal::org::xml::sax::ErrorHandler* mHandErr = nullptr;
	::jdk::internal::org::xml::sax::EntityResolver* mHandEnt = nullptr;
};

				} // impl
			} // xml
		} // util
	} // internal
} // jdk

#pragma pop_macro("FEATURE_NS")
#pragma pop_macro("FEATURE_PREF")

#endif // _jdk_internal_util_xml_impl_ParserSAX_h_