#include <jdk/internal/org/xml/sax/SAXNotSupportedException.h>

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

$FieldInfo _SAXNotSupportedException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(SAXNotSupportedException, serialVersionUID)},
	{}
};

$MethodInfo _SAXNotSupportedException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SAXNotSupportedException::*)()>(&SAXNotSupportedException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SAXNotSupportedException::*)($String*)>(&SAXNotSupportedException::init$))},
	{}
};

$ClassInfo _SAXNotSupportedException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.xml.sax.SAXNotSupportedException",
	"jdk.internal.org.xml.sax.SAXException",
	nullptr,
	_SAXNotSupportedException_FieldInfo_,
	_SAXNotSupportedException_MethodInfo_
};

$Object* allocate$SAXNotSupportedException($Class* clazz) {
	return $of($alloc(SAXNotSupportedException));
}

void SAXNotSupportedException::init$() {
	$SAXException::init$();
}

void SAXNotSupportedException::init$($String* message) {
	$SAXException::init$(message);
}

SAXNotSupportedException::SAXNotSupportedException() {
}

SAXNotSupportedException::SAXNotSupportedException(const SAXNotSupportedException& e) {
}

SAXNotSupportedException SAXNotSupportedException::wrapper$() {
	$pendingException(this);
	return *this;
}

void SAXNotSupportedException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* SAXNotSupportedException::load$($String* name, bool initialize) {
	$loadClass(SAXNotSupportedException, name, initialize, &_SAXNotSupportedException_ClassInfo_, allocate$SAXNotSupportedException);
	return class$;
}

$Class* SAXNotSupportedException::class$ = nullptr;

				} // sax
			} // xml
		} // org
	} // internal
} // jdk