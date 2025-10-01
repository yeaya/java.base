#include <java/lang/IllegalAccessException.h>

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

$FieldInfo _IllegalAccessException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalAccessException, serialVersionUID)},
	{}
};

$MethodInfo _IllegalAccessException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IllegalAccessException::*)()>(&IllegalAccessException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(IllegalAccessException::*)($String*)>(&IllegalAccessException::init$))},
	{}
};

$ClassInfo _IllegalAccessException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.IllegalAccessException",
	"java.lang.ReflectiveOperationException",
	nullptr,
	_IllegalAccessException_FieldInfo_,
	_IllegalAccessException_MethodInfo_
};

$Object* allocate$IllegalAccessException($Class* clazz) {
	return $of($alloc(IllegalAccessException));
}

void IllegalAccessException::init$() {
	$ReflectiveOperationException::init$();
}

void IllegalAccessException::init$($String* s) {
	$ReflectiveOperationException::init$(s);
}

IllegalAccessException::IllegalAccessException() {
}

IllegalAccessException::IllegalAccessException(const IllegalAccessException& e) {
}

IllegalAccessException IllegalAccessException::wrapper$() {
	$pendingException(this);
	return *this;
}

void IllegalAccessException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* IllegalAccessException::load$($String* name, bool initialize) {
	$loadClass(IllegalAccessException, name, initialize, &_IllegalAccessException_ClassInfo_, allocate$IllegalAccessException);
	return class$;
}

$Class* IllegalAccessException::class$ = nullptr;

	} // lang
} // java