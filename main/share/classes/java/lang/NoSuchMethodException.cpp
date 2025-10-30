#include <java/lang/NoSuchMethodException.h>

#include <java/lang/ReflectiveOperationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;

namespace java {
	namespace lang {

$FieldInfo _NoSuchMethodException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoSuchMethodException, serialVersionUID)},
	{}
};

$MethodInfo _NoSuchMethodException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NoSuchMethodException::*)()>(&NoSuchMethodException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NoSuchMethodException::*)($String*)>(&NoSuchMethodException::init$))},
	{}
};

$ClassInfo _NoSuchMethodException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.NoSuchMethodException",
	"java.lang.ReflectiveOperationException",
	nullptr,
	_NoSuchMethodException_FieldInfo_,
	_NoSuchMethodException_MethodInfo_
};

$Object* allocate$NoSuchMethodException($Class* clazz) {
	return $of($alloc(NoSuchMethodException));
}

void NoSuchMethodException::init$() {
	$ReflectiveOperationException::init$();
}

void NoSuchMethodException::init$($String* s) {
	$ReflectiveOperationException::init$(s);
}

NoSuchMethodException::NoSuchMethodException() {
}

NoSuchMethodException::NoSuchMethodException(const NoSuchMethodException& e) : $ReflectiveOperationException(e) {
}

void NoSuchMethodException::throw$() {
	throw *this;
}

$Class* NoSuchMethodException::load$($String* name, bool initialize) {
	$loadClass(NoSuchMethodException, name, initialize, &_NoSuchMethodException_ClassInfo_, allocate$NoSuchMethodException);
	return class$;
}

$Class* NoSuchMethodException::class$ = nullptr;

	} // lang
} // java