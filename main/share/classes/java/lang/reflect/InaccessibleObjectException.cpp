#include <java/lang/reflect/InaccessibleObjectException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {
		namespace reflect {

$FieldInfo _InaccessibleObjectException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InaccessibleObjectException, serialVersionUID)},
	{}
};

$MethodInfo _InaccessibleObjectException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(InaccessibleObjectException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InaccessibleObjectException, init$, void, $String*)},
	{}
};

$ClassInfo _InaccessibleObjectException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.reflect.InaccessibleObjectException",
	"java.lang.RuntimeException",
	nullptr,
	_InaccessibleObjectException_FieldInfo_,
	_InaccessibleObjectException_MethodInfo_
};

$Object* allocate$InaccessibleObjectException($Class* clazz) {
	return $of($alloc(InaccessibleObjectException));
}

void InaccessibleObjectException::init$() {
	$RuntimeException::init$();
}

void InaccessibleObjectException::init$($String* msg) {
	$RuntimeException::init$(msg);
}

InaccessibleObjectException::InaccessibleObjectException() {
}

InaccessibleObjectException::InaccessibleObjectException(const InaccessibleObjectException& e) : $RuntimeException(e) {
}

void InaccessibleObjectException::throw$() {
	throw *this;
}

$Class* InaccessibleObjectException::load$($String* name, bool initialize) {
	$loadClass(InaccessibleObjectException, name, initialize, &_InaccessibleObjectException_ClassInfo_, allocate$InaccessibleObjectException);
	return class$;
}

$Class* InaccessibleObjectException::class$ = nullptr;

		} // reflect
	} // lang
} // java