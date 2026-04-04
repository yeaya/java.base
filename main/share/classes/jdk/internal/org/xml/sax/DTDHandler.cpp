#include <jdk/internal/org/xml/sax/DTDHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {

void DTDHandler::startDTD($String* name, $String* publicId, $String* systemId) {
}

void DTDHandler::startInternalSub() {
}

$Class* DTDHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"notationDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTDHandler, notationDecl, void, $String*, $String*, $String*), "jdk.internal.org.xml.sax.SAXException"},
		{"startDTD", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DTDHandler, startDTD, void, $String*, $String*, $String*), "jdk.internal.org.xml.sax.SAXException"},
		{"startInternalSub", "()V", nullptr, $PUBLIC, $virtualMethod(DTDHandler, startInternalSub, void), "jdk.internal.org.xml.sax.SAXException"},
		{"unparsedEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTDHandler, unparsedEntityDecl, void, $String*, $String*, $String*, $String*), "jdk.internal.org.xml.sax.SAXException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.org.xml.sax.DTDHandler",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DTDHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DTDHandler);
	});
	return class$;
}

$Class* DTDHandler::class$ = nullptr;

				} // sax
			} // xml
		} // org
	} // internal
} // jdk