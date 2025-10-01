#include <java/lang/NegativeArraySizeException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {

$FieldInfo _NegativeArraySizeException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NegativeArraySizeException, serialVersionUID)},
	{}
};

$MethodInfo _NegativeArraySizeException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NegativeArraySizeException::*)()>(&NegativeArraySizeException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NegativeArraySizeException::*)($String*)>(&NegativeArraySizeException::init$))},
	{}
};

$ClassInfo _NegativeArraySizeException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.NegativeArraySizeException",
	"java.lang.RuntimeException",
	nullptr,
	_NegativeArraySizeException_FieldInfo_,
	_NegativeArraySizeException_MethodInfo_
};

$Object* allocate$NegativeArraySizeException($Class* clazz) {
	return $of($alloc(NegativeArraySizeException));
}

void NegativeArraySizeException::init$() {
	$RuntimeException::init$();
}

void NegativeArraySizeException::init$($String* s) {
	$RuntimeException::init$(s);
}

NegativeArraySizeException::NegativeArraySizeException() {
}

NegativeArraySizeException::NegativeArraySizeException(const NegativeArraySizeException& e) {
}

NegativeArraySizeException NegativeArraySizeException::wrapper$() {
	$pendingException(this);
	return *this;
}

void NegativeArraySizeException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* NegativeArraySizeException::load$($String* name, bool initialize) {
	$loadClass(NegativeArraySizeException, name, initialize, &_NegativeArraySizeException_ClassInfo_, allocate$NegativeArraySizeException);
	return class$;
}

$Class* NegativeArraySizeException::class$ = nullptr;

	} // lang
} // java