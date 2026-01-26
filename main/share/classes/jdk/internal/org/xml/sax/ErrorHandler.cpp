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

$MethodInfo _ErrorHandler_MethodInfo_[] = {
	{"error", "(Ljdk/internal/org/xml/sax/SAXParseException;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ErrorHandler, error, void, $SAXParseException*), "jdk.internal.org.xml.sax.SAXException"},
	{"fatalError", "(Ljdk/internal/org/xml/sax/SAXParseException;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ErrorHandler, fatalError, void, $SAXParseException*), "jdk.internal.org.xml.sax.SAXException"},
	{"warning", "(Ljdk/internal/org/xml/sax/SAXParseException;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ErrorHandler, warning, void, $SAXParseException*), "jdk.internal.org.xml.sax.SAXException"},
	{}
};

$ClassInfo _ErrorHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.org.xml.sax.ErrorHandler",
	nullptr,
	nullptr,
	nullptr,
	_ErrorHandler_MethodInfo_
};

$Object* allocate$ErrorHandler($Class* clazz) {
	return $of($alloc(ErrorHandler));
}

$Class* ErrorHandler::load$($String* name, bool initialize) {
	$loadClass(ErrorHandler, name, initialize, &_ErrorHandler_ClassInfo_, allocate$ErrorHandler);
	return class$;
}

$Class* ErrorHandler::class$ = nullptr;

				} // sax
			} // xml
		} // org
	} // internal
} // jdk