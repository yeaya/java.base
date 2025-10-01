#include <jdk/internal/org/xml/sax/SAXNotRecognizedException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _SAXNotRecognizedException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(SAXNotRecognizedException, serialVersionUID)},
	{}
};

$MethodInfo _SAXNotRecognizedException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SAXNotRecognizedException::*)()>(&SAXNotRecognizedException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SAXNotRecognizedException::*)($String*)>(&SAXNotRecognizedException::init$))},
	{}
};

$ClassInfo _SAXNotRecognizedException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.xml.sax.SAXNotRecognizedException",
	"jdk.internal.org.xml.sax.SAXException",
	nullptr,
	_SAXNotRecognizedException_FieldInfo_,
	_SAXNotRecognizedException_MethodInfo_
};

$Object* allocate$SAXNotRecognizedException($Class* clazz) {
	return $of($alloc(SAXNotRecognizedException));
}

void SAXNotRecognizedException::init$() {
	$SAXException::init$();
}

void SAXNotRecognizedException::init$($String* message) {
	$SAXException::init$(message);
}

SAXNotRecognizedException::SAXNotRecognizedException() {
}

SAXNotRecognizedException::SAXNotRecognizedException(const SAXNotRecognizedException& e) {
}

SAXNotRecognizedException SAXNotRecognizedException::wrapper$() {
	$pendingException(this);
	return *this;
}

void SAXNotRecognizedException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* SAXNotRecognizedException::load$($String* name, bool initialize) {
	$loadClass(SAXNotRecognizedException, name, initialize, &_SAXNotRecognizedException_ClassInfo_, allocate$SAXNotRecognizedException);
	return class$;
}

$Class* SAXNotRecognizedException::class$ = nullptr;

				} // sax
			} // xml
		} // org
	} // internal
} // jdk