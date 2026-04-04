#include <jdk/internal/util/xml/SAXParser.h>
#include <java/io/File.h>
#include <java/io/InputStream.h>
#include <java/lang/Package.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/URI.h>
#include <jdk/internal/org/xml/sax/InputSource.h>
#include <jdk/internal/org/xml/sax/XMLReader.h>
#include <jdk/internal/org/xml/sax/helpers/DefaultHandler.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $InputSource = ::jdk::internal::org::xml::sax::InputSource;
using $XMLReader = ::jdk::internal::org::xml::sax::XMLReader;
using $DefaultHandler = ::jdk::internal::org::xml::sax::helpers::DefaultHandler;

namespace jdk {
	namespace internal {
		namespace util {
			namespace xml {

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
	$useLocalObjectStack();
	if (f == nullptr) {
		$throwNew($IllegalArgumentException, "File cannot be null"_s);
	}
	$var($InputSource, input, $new($InputSource, $($$nc($nc(f)->toURI())->toASCIIString())));
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
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("This parser does not support specification \""_s);
	var$0->append($($$nc(this->getClass()->getPackage())->getSpecificationTitle()));
	var$0->append("\" version \""_s);
	var$0->append($($$nc(this->getClass()->getPackage())->getSpecificationVersion()));
	var$0->append("\""_s);
	$throwNew($UnsupportedOperationException, $$str(var$0));
	$shouldNotReachHere();
}

SAXParser::SAXParser() {
}

$Class* SAXParser::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
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
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"jdk.internal.util.xml.SAXParser",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SAXParser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SAXParser);
	});
	return class$;
}

$Class* SAXParser::class$ = nullptr;

			} // xml
		} // util
	} // internal
} // jdk