#include <java/nio/InvalidMarkException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {

$FieldInfo _InvalidMarkException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidMarkException, serialVersionUID)},
	{}
};

$MethodInfo _InvalidMarkException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InvalidMarkException::*)()>(&InvalidMarkException::init$))},
	{}
};

$ClassInfo _InvalidMarkException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.InvalidMarkException",
	"java.lang.IllegalStateException",
	nullptr,
	_InvalidMarkException_FieldInfo_,
	_InvalidMarkException_MethodInfo_
};

$Object* allocate$InvalidMarkException($Class* clazz) {
	return $of($alloc(InvalidMarkException));
}

void InvalidMarkException::init$() {
	$IllegalStateException::init$();
}

InvalidMarkException::InvalidMarkException() {
}

InvalidMarkException::InvalidMarkException(const InvalidMarkException& e) {
}

InvalidMarkException InvalidMarkException::wrapper$() {
	$pendingException(this);
	return *this;
}

void InvalidMarkException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* InvalidMarkException::load$($String* name, bool initialize) {
	$loadClass(InvalidMarkException, name, initialize, &_InvalidMarkException_ClassInfo_, allocate$InvalidMarkException);
	return class$;
}

$Class* InvalidMarkException::class$ = nullptr;

	} // nio
} // java