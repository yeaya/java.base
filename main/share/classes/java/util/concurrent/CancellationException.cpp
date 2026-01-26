#include <java/util/concurrent/CancellationException.h>

#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _CancellationException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CancellationException, serialVersionUID)},
	{}
};

$MethodInfo _CancellationException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CancellationException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CancellationException, init$, void, $String*)},
	{}
};

$ClassInfo _CancellationException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.CancellationException",
	"java.lang.IllegalStateException",
	nullptr,
	_CancellationException_FieldInfo_,
	_CancellationException_MethodInfo_
};

$Object* allocate$CancellationException($Class* clazz) {
	return $of($alloc(CancellationException));
}

void CancellationException::init$() {
	$IllegalStateException::init$();
}

void CancellationException::init$($String* message) {
	$IllegalStateException::init$(message);
}

CancellationException::CancellationException() {
}

CancellationException::CancellationException(const CancellationException& e) : $IllegalStateException(e) {
}

void CancellationException::throw$() {
	throw *this;
}

$Class* CancellationException::load$($String* name, bool initialize) {
	$loadClass(CancellationException, name, initialize, &_CancellationException_ClassInfo_, allocate$CancellationException);
	return class$;
}

$Class* CancellationException::class$ = nullptr;

		} // concurrent
	} // util
} // java