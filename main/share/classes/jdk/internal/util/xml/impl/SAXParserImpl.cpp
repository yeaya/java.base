#include <jdk/internal/util/xml/impl/SAXParserImpl.h>

#include <java/io/InputStream.h>
#include <jdk/internal/org/xml/sax/InputSource.h>
#include <jdk/internal/org/xml/sax/XMLReader.h>
#include <jdk/internal/org/xml/sax/helpers/DefaultHandler.h>
#include <jdk/internal/util/xml/SAXParser.h>
#include <jdk/internal/util/xml/impl/ParserSAX.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InputSource = ::jdk::internal::org::xml::sax::InputSource;
using $XMLReader = ::jdk::internal::org::xml::sax::XMLReader;
using $DefaultHandler = ::jdk::internal::org::xml::sax::helpers::DefaultHandler;
using $SAXParser = ::jdk::internal::util::xml::SAXParser;
using $ParserSAX = ::jdk::internal::util::xml::impl::ParserSAX;

namespace jdk {
	namespace internal {
		namespace util {
			namespace xml {
				namespace impl {

$FieldInfo _SAXParserImpl_FieldInfo_[] = {
	{"parser", "Ljdk/internal/util/xml/impl/ParserSAX;", nullptr, $PRIVATE, $field(SAXParserImpl, parser)},
	{}
};

$MethodInfo _SAXParserImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SAXParserImpl::*)()>(&SAXParserImpl::init$))},
	{"getXMLReader", "()Ljdk/internal/org/xml/sax/XMLReader;", nullptr, $PUBLIC, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"isNamespaceAware", "()Z", nullptr, $PUBLIC},
	{"isValidating", "()Z", nullptr, $PUBLIC},
	{"parse", "(Ljava/io/InputStream;Ljdk/internal/org/xml/sax/helpers/DefaultHandler;)V", nullptr, $PUBLIC, nullptr, "jdk.internal.org.xml.sax.SAXException,java.io.IOException"},
	{"parse", "(Ljdk/internal/org/xml/sax/InputSource;Ljdk/internal/org/xml/sax/helpers/DefaultHandler;)V", nullptr, $PUBLIC, nullptr, "jdk.internal.org.xml.sax.SAXException,java.io.IOException"},
	{}
};

$ClassInfo _SAXParserImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.util.xml.impl.SAXParserImpl",
	"jdk.internal.util.xml.SAXParser",
	nullptr,
	_SAXParserImpl_FieldInfo_,
	_SAXParserImpl_MethodInfo_
};

$Object* allocate$SAXParserImpl($Class* clazz) {
	return $of($alloc(SAXParserImpl));
}

void SAXParserImpl::init$() {
	$SAXParser::init$();
	$set(this, parser, $new($ParserSAX));
}

$XMLReader* SAXParserImpl::getXMLReader() {
	return this->parser;
}

bool SAXParserImpl::isNamespaceAware() {
	return $nc(this->parser)->mIsNSAware;
}

bool SAXParserImpl::isValidating() {
	return false;
}

void SAXParserImpl::parse($InputStream* src, $DefaultHandler* handler) {
	$nc(this->parser)->parse(src, handler);
}

void SAXParserImpl::parse($InputSource* is, $DefaultHandler* handler) {
	$nc(this->parser)->parse(is, handler);
}

SAXParserImpl::SAXParserImpl() {
}

$Class* SAXParserImpl::load$($String* name, bool initialize) {
	$loadClass(SAXParserImpl, name, initialize, &_SAXParserImpl_ClassInfo_, allocate$SAXParserImpl);
	return class$;
}

$Class* SAXParserImpl::class$ = nullptr;

				} // impl
			} // xml
		} // util
	} // internal
} // jdk