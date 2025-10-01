#include <java/io/InvalidObjectException.h>

#include <java/io/ObjectStreamException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ObjectStreamException = ::java::io::ObjectStreamException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _InvalidObjectException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidObjectException, serialVersionUID)},
	{}
};

$MethodInfo _InvalidObjectException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidObjectException::*)($String*)>(&InvalidObjectException::init$))},
	{}
};

$ClassInfo _InvalidObjectException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.InvalidObjectException",
	"java.io.ObjectStreamException",
	nullptr,
	_InvalidObjectException_FieldInfo_,
	_InvalidObjectException_MethodInfo_
};

$Object* allocate$InvalidObjectException($Class* clazz) {
	return $of($alloc(InvalidObjectException));
}

void InvalidObjectException::init$($String* reason) {
	$ObjectStreamException::init$(reason);
}

InvalidObjectException::InvalidObjectException() {
}

InvalidObjectException::InvalidObjectException(const InvalidObjectException& e) {
}

InvalidObjectException InvalidObjectException::wrapper$() {
	$pendingException(this);
	return *this;
}

void InvalidObjectException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* InvalidObjectException::load$($String* name, bool initialize) {
	$loadClass(InvalidObjectException, name, initialize, &_InvalidObjectException_ClassInfo_, allocate$InvalidObjectException);
	return class$;
}

$Class* InvalidObjectException::class$ = nullptr;

	} // io
} // java