#include <java/io/InvalidClassException.h>

#include <java/io/ObjectStreamException.h>
#include <jcpp.h>

using $ObjectStreamException = ::java::io::ObjectStreamException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _InvalidClassException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidClassException, serialVersionUID)},
	{"classname", "Ljava/lang/String;", nullptr, $PUBLIC, $field(InvalidClassException, classname)},
	{}
};

$MethodInfo _InvalidClassException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidClassException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidClassException, init$, void, $String*, $String*)},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(InvalidClassException, getMessage, $String*)},
	{}
};

$ClassInfo _InvalidClassException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.InvalidClassException",
	"java.io.ObjectStreamException",
	nullptr,
	_InvalidClassException_FieldInfo_,
	_InvalidClassException_MethodInfo_
};

$Object* allocate$InvalidClassException($Class* clazz) {
	return $of($alloc(InvalidClassException));
}

void InvalidClassException::init$($String* reason) {
	$ObjectStreamException::init$(reason);
}

void InvalidClassException::init$($String* cname, $String* reason) {
	$ObjectStreamException::init$(reason);
	$set(this, classname, cname);
}

$String* InvalidClassException::getMessage() {
	if (this->classname == nullptr) {
		return $ObjectStreamException::getMessage();
	} else {
		return $str({this->classname, "; "_s, $($ObjectStreamException::getMessage())});
	}
}

InvalidClassException::InvalidClassException() {
}

InvalidClassException::InvalidClassException(const InvalidClassException& e) : $ObjectStreamException(e) {
}

void InvalidClassException::throw$() {
	throw *this;
}

$Class* InvalidClassException::load$($String* name, bool initialize) {
	$loadClass(InvalidClassException, name, initialize, &_InvalidClassException_ClassInfo_, allocate$InvalidClassException);
	return class$;
}

$Class* InvalidClassException::class$ = nullptr;

	} // io
} // java