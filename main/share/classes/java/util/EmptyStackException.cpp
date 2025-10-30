#include <java/util/EmptyStackException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace util {

$FieldInfo _EmptyStackException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EmptyStackException, serialVersionUID)},
	{}
};

$MethodInfo _EmptyStackException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(EmptyStackException::*)()>(&EmptyStackException::init$))},
	{}
};

$ClassInfo _EmptyStackException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.EmptyStackException",
	"java.lang.RuntimeException",
	nullptr,
	_EmptyStackException_FieldInfo_,
	_EmptyStackException_MethodInfo_
};

$Object* allocate$EmptyStackException($Class* clazz) {
	return $of($alloc(EmptyStackException));
}

void EmptyStackException::init$() {
	$RuntimeException::init$();
}

EmptyStackException::EmptyStackException() {
}

EmptyStackException::EmptyStackException(const EmptyStackException& e) : $RuntimeException(e) {
}

void EmptyStackException::throw$() {
	throw *this;
}

$Class* EmptyStackException::load$($String* name, bool initialize) {
	$loadClass(EmptyStackException, name, initialize, &_EmptyStackException_ClassInfo_, allocate$EmptyStackException);
	return class$;
}

$Class* EmptyStackException::class$ = nullptr;

	} // util
} // java