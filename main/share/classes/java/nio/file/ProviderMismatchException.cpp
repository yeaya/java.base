#include <java/nio/file/ProviderMismatchException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _ProviderMismatchException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ProviderMismatchException, serialVersionUID)},
	{}
};

$MethodInfo _ProviderMismatchException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ProviderMismatchException::*)()>(&ProviderMismatchException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ProviderMismatchException::*)($String*)>(&ProviderMismatchException::init$))},
	{}
};

$ClassInfo _ProviderMismatchException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.file.ProviderMismatchException",
	"java.lang.IllegalArgumentException",
	nullptr,
	_ProviderMismatchException_FieldInfo_,
	_ProviderMismatchException_MethodInfo_
};

$Object* allocate$ProviderMismatchException($Class* clazz) {
	return $of($alloc(ProviderMismatchException));
}

void ProviderMismatchException::init$() {
	$IllegalArgumentException::init$();
}

void ProviderMismatchException::init$($String* msg) {
	$IllegalArgumentException::init$(msg);
}

ProviderMismatchException::ProviderMismatchException() {
}

ProviderMismatchException::ProviderMismatchException(const ProviderMismatchException& e) : $IllegalArgumentException(e) {
}

void ProviderMismatchException::throw$() {
	throw *this;
}

$Class* ProviderMismatchException::load$($String* name, bool initialize) {
	$loadClass(ProviderMismatchException, name, initialize, &_ProviderMismatchException_ClassInfo_, allocate$ProviderMismatchException);
	return class$;
}

$Class* ProviderMismatchException::class$ = nullptr;

		} // file
	} // nio
} // java