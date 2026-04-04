#include <jdk/internal/org/xml/sax/SAXNotRecognizedException.h>
#include <jdk/internal/org/xml/sax/SAXException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SAXException = ::jdk::internal::org::xml::sax::SAXException;

namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {

void SAXNotRecognizedException::init$() {
	$SAXException::init$();
}

void SAXNotRecognizedException::init$($String* message) {
	$SAXException::init$(message);
}

SAXNotRecognizedException::SAXNotRecognizedException() {
}

SAXNotRecognizedException::SAXNotRecognizedException(const SAXNotRecognizedException& e) : $SAXException(e) {
}

void SAXNotRecognizedException::throw$() {
	throw *this;
}

$Class* SAXNotRecognizedException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(SAXNotRecognizedException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SAXNotRecognizedException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SAXNotRecognizedException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.org.xml.sax.SAXNotRecognizedException",
		"jdk.internal.org.xml.sax.SAXException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SAXNotRecognizedException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SAXNotRecognizedException);
	});
	return class$;
}

$Class* SAXNotRecognizedException::class$ = nullptr;

				} // sax
			} // xml
		} // org
	} // internal
} // jdk