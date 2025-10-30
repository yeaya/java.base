#include <jdk/internal/org/xml/sax/ContentHandler.h>

#include <jdk/internal/org/xml/sax/Attributes.h>
#include <jdk/internal/org/xml/sax/Locator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attributes = ::jdk::internal::org::xml::sax::Attributes;
using $Locator = ::jdk::internal::org::xml::sax::Locator;

namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {

$MethodInfo _ContentHandler_MethodInfo_[] = {
	{"characters", "([CII)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"endDocument", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"endPrefixMapping", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"setDocumentLocator", "(Ljdk/internal/org/xml/sax/Locator;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"skippedEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"startDocument", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljdk/internal/org/xml/sax/Attributes;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{}
};

$ClassInfo _ContentHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.org.xml.sax.ContentHandler",
	nullptr,
	nullptr,
	nullptr,
	_ContentHandler_MethodInfo_
};

$Object* allocate$ContentHandler($Class* clazz) {
	return $of($alloc(ContentHandler));
}

$Class* ContentHandler::load$($String* name, bool initialize) {
	$loadClass(ContentHandler, name, initialize, &_ContentHandler_ClassInfo_, allocate$ContentHandler);
	return class$;
}

$Class* ContentHandler::class$ = nullptr;

				} // sax
			} // xml
		} // org
	} // internal
} // jdk