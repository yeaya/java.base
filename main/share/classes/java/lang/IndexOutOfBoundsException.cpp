#include <java/lang/IndexOutOfBoundsException.h>

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

$FieldInfo _IndexOutOfBoundsException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IndexOutOfBoundsException, serialVersionUID)},
	{}
};

$MethodInfo _IndexOutOfBoundsException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IndexOutOfBoundsException::*)()>(&IndexOutOfBoundsException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(IndexOutOfBoundsException::*)($String*)>(&IndexOutOfBoundsException::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(IndexOutOfBoundsException::*)(int32_t)>(&IndexOutOfBoundsException::init$))},
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(IndexOutOfBoundsException::*)(int64_t)>(&IndexOutOfBoundsException::init$))},
	{}
};

$ClassInfo _IndexOutOfBoundsException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.IndexOutOfBoundsException",
	"java.lang.RuntimeException",
	nullptr,
	_IndexOutOfBoundsException_FieldInfo_,
	_IndexOutOfBoundsException_MethodInfo_
};

$Object* allocate$IndexOutOfBoundsException($Class* clazz) {
	return $of($alloc(IndexOutOfBoundsException));
}

void IndexOutOfBoundsException::init$() {
	$RuntimeException::init$();
}

void IndexOutOfBoundsException::init$($String* s) {
	$RuntimeException::init$(s);
}

void IndexOutOfBoundsException::init$(int32_t index) {
	$useLocalCurrentObjectStackCache();
	$RuntimeException::init$($$str({"Index out of range: "_s, $$str(index)}));
}

void IndexOutOfBoundsException::init$(int64_t index) {
	$useLocalCurrentObjectStackCache();
	$RuntimeException::init$($$str({"Index out of range: "_s, $$str(index)}));
}

IndexOutOfBoundsException::IndexOutOfBoundsException() {
}

IndexOutOfBoundsException::IndexOutOfBoundsException(const IndexOutOfBoundsException& e) {
}

IndexOutOfBoundsException IndexOutOfBoundsException::wrapper$() {
	$pendingException(this);
	return *this;
}

void IndexOutOfBoundsException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* IndexOutOfBoundsException::load$($String* name, bool initialize) {
	$loadClass(IndexOutOfBoundsException, name, initialize, &_IndexOutOfBoundsException_ClassInfo_, allocate$IndexOutOfBoundsException);
	return class$;
}

$Class* IndexOutOfBoundsException::class$ = nullptr;

	} // lang
} // java