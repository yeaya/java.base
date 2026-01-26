#include <jdk/internal/util/xml/SAXParser.h>

#include <java/io/File.h>
#include <java/io/InputStream.h>
#include <java/lang/Package.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/URI.h>
#include <jdk/internal/org/xml/sax/ContentHandler.h>
#include <jdk/internal/org/xml/sax/DTDHandler.h>
#include <jdk/internal/org/xml/sax/EntityResolver.h>
#include <jdk/internal/org/xml/sax/ErrorHandler.h>
#include <jdk/internal/org/xml/sax/InputSource.h>
#include <jdk/internal/org/xml/sax/XMLReader.h>
#include <jdk/internal/org/xml/sax/helpers/DefaultHandler.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Package = ::java::lang::Package;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $URI = ::java::net::URI;
using $ContentHandler = ::jdk::internal::org::xml::sax::ContentHandler;
using $DTDHandler = ::jdk::internal::org::xml::sax::DTDHandler;
using $EntityResolver = ::jdk::internal::org::xml::sax::EntityResolver;
using $ErrorHandler = ::jdk::internal::org::xml::sax::ErrorHandler;
using $InputSource = ::jdk::internal::org::xml::sax::InputSource;
using $XMLReader = ::jdk::internal::org::xml::sax::XMLReader;
using $DefaultHandler = ::jdk::internal::org::xml::sax::helpers::DefaultHandler;

namespace jdk {
	namespace internal {
		namespace util {
			namespace xml {

$MethodInfo _SAXParser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(SAXParser, init$, void)},
	{"getXMLReader", "()Ljdk/internal/org/xml/sax/XMLReader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SAXParser, getXMLReader, $XMLReader*), "jdk.internal.org.xml.sax.SAXException"},
	{"isNamespaceAware", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SAXParser, isNamespaceAware, bool)},
	{"isValidating", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SAXParser, isValidating, bool)},
	{"isXIncludeAware", "()Z", nullptr, $PUBLIC, $virtualMethod(SAXParser, isXIncludeAware, bool)},
	{"parse", "(Ljava/io/InputStream;Ljdk/internal/org/xml/sax/helpers/DefaultHandler;)V", nullptr, $PUBLIC, $virtualMethod(SAXParser, parse, void, $InputStream*, $DefaultHandler*), "jdk.internal.org.xml.sax.SAXException,java.io.IOException"},
	{"parse", "(Ljava/lang/String;Ljdk/internal/org/xml/sax/helpers/DefaultHandler;)V", nullptr, $PUBLIC, $virtualMethod(SAXParser, parse, void, $String*, $DefaultHandler*), "jdk.internal.org.xml.sax.SAXException,java.io.IOException"},
	{"parse", "(Ljava/io/File;Ljdk/internal/org/xml/sax/helpers/DefaultHandler;)V", nullptr, $PUBLIC, $virtualMethod(SAXParser, parse, void, $File*, $DefaultHandler*), "jdk.internal.org.xml.sax.SAXException,java.io.IOException"},
	{"parse", "(Ljdk/internal/org/xml/sax/InputSource;Ljdk/internal/org/xml/sax/helpers/DefaultHandler;)V", nullptr, $PUBLIC, $virtualMethod(SAXParser, parse, void, $InputSource*, $DefaultHandler*), "jdk.internal.org.xml.sax.SAXException,java.io.IOException"},
	{}
};

$ClassInfo _SAXParser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"jdk.internal.util.xml.SAXParser",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SAXParser_MethodInfo_
};

$Object* allocate$SAXParser($Class* clazz) {
	return $of($alloc(SAXParser));
}

void SAXParser::init$() {
}

void SAXParser::parse($InputStream* is, $DefaultHandler* dh) {
	if (is == nullptr) {
		$throwNew($IllegalArgumentException, "InputStream cannot be null"_s);
	}
	$var($InputSource, input, $new($InputSource, is));
	this->parse(input, dh);
}

void SAXParser::parse($String* uri, $DefaultHandler* dh) {
	if (uri == nullptr) {
		$throwNew($IllegalArgumentException, "uri cannot be null"_s);
	}
	$var($InputSource, input, $new($InputSource, uri));
	this->parse(input, dh);
}

void SAXParser::parse($File* f, $DefaultHandler* dh) {
	$useLocalCurrentObjectStackCache();
	if (f == nullptr) {
		$throwNew($IllegalArgumentException, "File cannot be null"_s);
	}
	$var($InputSource, input, $new($InputSource, $($nc($($nc(f)->toURI()))->toASCIIString())));
	this->parse(input, dh);
}

void SAXParser::parse($InputSource* is, $DefaultHandler* dh) {
	if (is == nullptr) {
		$throwNew($IllegalArgumentException, "InputSource cannot be null"_s);
	}
	$var($XMLReader, reader, this->getXMLReader());
	if (dh != nullptr) {
		$nc(reader)->setContentHandler(dh);
		reader->setEntityResolver(dh);
		reader->setErrorHandler(dh);
		reader->setDTDHandler(dh);
	}
	$nc(reader)->parse(is);
}

bool SAXParser::isXIncludeAware() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({"This parser does not support specification \""_s, $($nc($($of(this)->getClass()->getPackage()))->getSpecificationTitle()), "\" version \""_s}));
	$var($String, var$0, $$concat(var$1, $($nc($($of(this)->getClass()->getPackage()))->getSpecificationVersion())));
	$throwNew($UnsupportedOperationException, $$concat(var$0, "\""_s));
	$shouldNotReachHere();
}

SAXParser::SAXParser() {
}

$Class* SAXParser::load$($String* name, bool initialize) {
	$loadClass(SAXParser, name, initialize, &_SAXParser_ClassInfo_, allocate$SAXParser);
	return class$;
}

$Class* SAXParser::class$ = nullptr;

			} // xml
		} // util
	} // internal
} // jdk