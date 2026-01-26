#include <jdk/internal/org/xml/sax/XMLReader.h>

#include <jdk/internal/org/xml/sax/ContentHandler.h>
#include <jdk/internal/org/xml/sax/DTDHandler.h>
#include <jdk/internal/org/xml/sax/EntityResolver.h>
#include <jdk/internal/org/xml/sax/ErrorHandler.h>
#include <jdk/internal/org/xml/sax/InputSource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ContentHandler = ::jdk::internal::org::xml::sax::ContentHandler;
using $DTDHandler = ::jdk::internal::org::xml::sax::DTDHandler;
using $EntityResolver = ::jdk::internal::org::xml::sax::EntityResolver;
using $ErrorHandler = ::jdk::internal::org::xml::sax::ErrorHandler;
using $InputSource = ::jdk::internal::org::xml::sax::InputSource;

namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {

$MethodInfo _XMLReader_MethodInfo_[] = {
	{"getContentHandler", "()Ljdk/internal/org/xml/sax/ContentHandler;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLReader, getContentHandler, $ContentHandler*)},
	{"getDTDHandler", "()Ljdk/internal/org/xml/sax/DTDHandler;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLReader, getDTDHandler, $DTDHandler*)},
	{"getEntityResolver", "()Ljdk/internal/org/xml/sax/EntityResolver;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLReader, getEntityResolver, $EntityResolver*)},
	{"getErrorHandler", "()Ljdk/internal/org/xml/sax/ErrorHandler;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLReader, getErrorHandler, $ErrorHandler*)},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLReader, getFeature, bool, $String*), "jdk.internal.org.xml.sax.SAXNotRecognizedException,jdk.internal.org.xml.sax.SAXNotSupportedException"},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLReader, getProperty, $Object*, $String*), "jdk.internal.org.xml.sax.SAXNotRecognizedException,jdk.internal.org.xml.sax.SAXNotSupportedException"},
	{"parse", "(Ljdk/internal/org/xml/sax/InputSource;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLReader, parse, void, $InputSource*), "java.io.IOException,jdk.internal.org.xml.sax.SAXException"},
	{"parse", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLReader, parse, void, $String*), "java.io.IOException,jdk.internal.org.xml.sax.SAXException"},
	{"setContentHandler", "(Ljdk/internal/org/xml/sax/ContentHandler;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLReader, setContentHandler, void, $ContentHandler*)},
	{"setDTDHandler", "(Ljdk/internal/org/xml/sax/DTDHandler;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLReader, setDTDHandler, void, $DTDHandler*)},
	{"setEntityResolver", "(Ljdk/internal/org/xml/sax/EntityResolver;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLReader, setEntityResolver, void, $EntityResolver*)},
	{"setErrorHandler", "(Ljdk/internal/org/xml/sax/ErrorHandler;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLReader, setErrorHandler, void, $ErrorHandler*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLReader, setFeature, void, $String*, bool), "jdk.internal.org.xml.sax.SAXNotRecognizedException,jdk.internal.org.xml.sax.SAXNotSupportedException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLReader, setProperty, void, $String*, Object$*), "jdk.internal.org.xml.sax.SAXNotRecognizedException,jdk.internal.org.xml.sax.SAXNotSupportedException"},
	{}
};

$ClassInfo _XMLReader_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.org.xml.sax.XMLReader",
	nullptr,
	nullptr,
	nullptr,
	_XMLReader_MethodInfo_
};

$Object* allocate$XMLReader($Class* clazz) {
	return $of($alloc(XMLReader));
}

$Class* XMLReader::load$($String* name, bool initialize) {
	$loadClass(XMLReader, name, initialize, &_XMLReader_ClassInfo_, allocate$XMLReader);
	return class$;
}

$Class* XMLReader::class$ = nullptr;

				} // sax
			} // xml
		} // org
	} // internal
} // jdk