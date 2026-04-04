#include <jdk/internal/org/xml/sax/ErrorHandler.h>
#include <jdk/internal/org/xml/sax/SAXParseException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SAXParseException = ::jdk::internal::org::xml::sax::SAXParseException;

namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {

$Class* ErrorHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"error", "(Ljdk/internal/org/xml/sax/SAXParseException;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ErrorHandler, error, void, $SAXParseException*), "jdk.internal.org.xml.sax.SAXException"},
		{"fatalError", "(Ljdk/internal/org/xml/sax/SAXParseException;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ErrorHandler, fatalError, void, $SAXParseException*), "jdk.internal.org.xml.sax.SAXException"},
		{"warning", "(Ljdk/internal/org/xml/sax/SAXParseException;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ErrorHandler, warning, void, $SAXParseException*), "jdk.internal.org.xml.sax.SAXException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.org.xml.sax.ErrorHandler",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ErrorHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ErrorHandler);
	});
	return class$;
}

$Class* ErrorHandler::class$ = nullptr;

				} // sax
			} // xml
		} // org
	} // internal
} // jdk