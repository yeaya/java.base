#include <java/lang/ArrayStoreException.h>

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

$FieldInfo _ArrayStoreException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ArrayStoreException, serialVersionUID)},
	{}
};

$MethodInfo _ArrayStoreException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ArrayStoreException::*)()>(&ArrayStoreException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ArrayStoreException::*)($String*)>(&ArrayStoreException::init$))},
	{}
};

$ClassInfo _ArrayStoreException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.ArrayStoreException",
	"java.lang.RuntimeException",
	nullptr,
	_ArrayStoreException_FieldInfo_,
	_ArrayStoreException_MethodInfo_
};

$Object* allocate$ArrayStoreException($Class* clazz) {
	return $of($alloc(ArrayStoreException));
}

void ArrayStoreException::init$() {
	$RuntimeException::init$();
}

void ArrayStoreException::init$($String* s) {
	$RuntimeException::init$(s);
}

ArrayStoreException::ArrayStoreException() {
}

ArrayStoreException::ArrayStoreException(const ArrayStoreException& e) {
}

ArrayStoreException ArrayStoreException::wrapper$() {
	$pendingException(this);
	return *this;
}

void ArrayStoreException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* ArrayStoreException::load$($String* name, bool initialize) {
	$loadClass(ArrayStoreException, name, initialize, &_ArrayStoreException_ClassInfo_, allocate$ArrayStoreException);
	return class$;
}

$Class* ArrayStoreException::class$ = nullptr;

	} // lang
} // java