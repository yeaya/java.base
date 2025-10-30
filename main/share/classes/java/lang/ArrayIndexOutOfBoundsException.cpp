#include <java/lang/ArrayIndexOutOfBoundsException.h>

#include <java/lang/IndexOutOfBoundsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _ArrayIndexOutOfBoundsException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ArrayIndexOutOfBoundsException, serialVersionUID)},
	{}
};

$MethodInfo _ArrayIndexOutOfBoundsException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ArrayIndexOutOfBoundsException::*)()>(&ArrayIndexOutOfBoundsException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ArrayIndexOutOfBoundsException::*)($String*)>(&ArrayIndexOutOfBoundsException::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ArrayIndexOutOfBoundsException::*)(int32_t)>(&ArrayIndexOutOfBoundsException::init$))},
	{}
};

$ClassInfo _ArrayIndexOutOfBoundsException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.ArrayIndexOutOfBoundsException",
	"java.lang.IndexOutOfBoundsException",
	nullptr,
	_ArrayIndexOutOfBoundsException_FieldInfo_,
	_ArrayIndexOutOfBoundsException_MethodInfo_
};

$Object* allocate$ArrayIndexOutOfBoundsException($Class* clazz) {
	return $of($alloc(ArrayIndexOutOfBoundsException));
}

void ArrayIndexOutOfBoundsException::init$() {
	$IndexOutOfBoundsException::init$();
}

void ArrayIndexOutOfBoundsException::init$($String* s) {
	$IndexOutOfBoundsException::init$(s);
}

void ArrayIndexOutOfBoundsException::init$(int32_t index) {
	$useLocalCurrentObjectStackCache();
	$IndexOutOfBoundsException::init$($$str({"Array index out of range: "_s, $$str(index)}));
}

ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException() {
}

ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(const ArrayIndexOutOfBoundsException& e) : $IndexOutOfBoundsException(e) {
}

void ArrayIndexOutOfBoundsException::throw$() {
	throw *this;
}

$Class* ArrayIndexOutOfBoundsException::load$($String* name, bool initialize) {
	$loadClass(ArrayIndexOutOfBoundsException, name, initialize, &_ArrayIndexOutOfBoundsException_ClassInfo_, allocate$ArrayIndexOutOfBoundsException);
	return class$;
}

$Class* ArrayIndexOutOfBoundsException::class$ = nullptr;

	} // lang
} // java