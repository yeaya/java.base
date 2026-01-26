#include <jdk/internal/util/xml/XMLStreamException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace util {
			namespace xml {

$FieldInfo _XMLStreamException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLStreamException, serialVersionUID)},
	{"nested", "Ljava/lang/Throwable;", nullptr, $PROTECTED, $field(XMLStreamException, nested)},
	{}
};

$MethodInfo _XMLStreamException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLStreamException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XMLStreamException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(XMLStreamException, init$, void, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(XMLStreamException, init$, void, $String*, $Throwable*)},
	{"getNestedException", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(XMLStreamException, getNestedException, $Throwable*)},
	{}
};

$ClassInfo _XMLStreamException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.util.xml.XMLStreamException",
	"java.lang.Exception",
	nullptr,
	_XMLStreamException_FieldInfo_,
	_XMLStreamException_MethodInfo_
};

$Object* allocate$XMLStreamException($Class* clazz) {
	return $of($alloc(XMLStreamException));
}

void XMLStreamException::init$() {
	$Exception::init$();
}

void XMLStreamException::init$($String* msg) {
	$Exception::init$(msg);
}

void XMLStreamException::init$($Throwable* th) {
	$Exception::init$(th);
	$set(this, nested, th);
}

void XMLStreamException::init$($String* msg, $Throwable* th) {
	$Exception::init$(msg, th);
	$set(this, nested, th);
}

$Throwable* XMLStreamException::getNestedException() {
	return this->nested;
}

XMLStreamException::XMLStreamException() {
}

XMLStreamException::XMLStreamException(const XMLStreamException& e) : $Exception(e) {
}

void XMLStreamException::throw$() {
	throw *this;
}

$Class* XMLStreamException::load$($String* name, bool initialize) {
	$loadClass(XMLStreamException, name, initialize, &_XMLStreamException_ClassInfo_, allocate$XMLStreamException);
	return class$;
}

$Class* XMLStreamException::class$ = nullptr;

			} // xml
		} // util
	} // internal
} // jdk