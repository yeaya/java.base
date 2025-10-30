#include <java/lang/InstantiationException.h>

#include <java/lang/ReflectiveOperationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;

namespace java {
	namespace lang {

$FieldInfo _InstantiationException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InstantiationException, serialVersionUID)},
	{}
};

$MethodInfo _InstantiationException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InstantiationException::*)()>(&InstantiationException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InstantiationException::*)($String*)>(&InstantiationException::init$))},
	{}
};

$ClassInfo _InstantiationException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.InstantiationException",
	"java.lang.ReflectiveOperationException",
	nullptr,
	_InstantiationException_FieldInfo_,
	_InstantiationException_MethodInfo_
};

$Object* allocate$InstantiationException($Class* clazz) {
	return $of($alloc(InstantiationException));
}

void InstantiationException::init$() {
	$ReflectiveOperationException::init$();
}

void InstantiationException::init$($String* s) {
	$ReflectiveOperationException::init$(s);
}

InstantiationException::InstantiationException() {
}

InstantiationException::InstantiationException(const InstantiationException& e) : $ReflectiveOperationException(e) {
}

void InstantiationException::throw$() {
	throw *this;
}

$Class* InstantiationException::load$($String* name, bool initialize) {
	$loadClass(InstantiationException, name, initialize, &_InstantiationException_ClassInfo_, allocate$InstantiationException);
	return class$;
}

$Class* InstantiationException::class$ = nullptr;

	} // lang
} // java