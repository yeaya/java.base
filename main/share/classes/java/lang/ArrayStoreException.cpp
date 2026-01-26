#include <java/lang/ArrayStoreException.h>

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
	{"<init>", "()V", nullptr, $PUBLIC, $method(ArrayStoreException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ArrayStoreException, init$, void, $String*)},
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

ArrayStoreException::ArrayStoreException(const ArrayStoreException& e) : $RuntimeException(e) {
}

void ArrayStoreException::throw$() {
	throw *this;
}

$Class* ArrayStoreException::load$($String* name, bool initialize) {
	$loadClass(ArrayStoreException, name, initialize, &_ArrayStoreException_ClassInfo_, allocate$ArrayStoreException);
	return class$;
}

$Class* ArrayStoreException::class$ = nullptr;

	} // lang
} // java