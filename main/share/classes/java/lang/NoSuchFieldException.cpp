#include <java/lang/NoSuchFieldException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;

namespace java {
	namespace lang {

$FieldInfo _NoSuchFieldException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoSuchFieldException, serialVersionUID)},
	{}
};

$MethodInfo _NoSuchFieldException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NoSuchFieldException::*)()>(&NoSuchFieldException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NoSuchFieldException::*)($String*)>(&NoSuchFieldException::init$))},
	{}
};

$ClassInfo _NoSuchFieldException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.NoSuchFieldException",
	"java.lang.ReflectiveOperationException",
	nullptr,
	_NoSuchFieldException_FieldInfo_,
	_NoSuchFieldException_MethodInfo_
};

$Object* allocate$NoSuchFieldException($Class* clazz) {
	return $of($alloc(NoSuchFieldException));
}

void NoSuchFieldException::init$() {
	$ReflectiveOperationException::init$();
}

void NoSuchFieldException::init$($String* s) {
	$ReflectiveOperationException::init$(s);
}

NoSuchFieldException::NoSuchFieldException() {
}

NoSuchFieldException::NoSuchFieldException(const NoSuchFieldException& e) {
}

NoSuchFieldException NoSuchFieldException::wrapper$() {
	$pendingException(this);
	return *this;
}

void NoSuchFieldException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* NoSuchFieldException::load$($String* name, bool initialize) {
	$loadClass(NoSuchFieldException, name, initialize, &_NoSuchFieldException_ClassInfo_, allocate$NoSuchFieldException);
	return class$;
}

$Class* NoSuchFieldException::class$ = nullptr;

	} // lang
} // java