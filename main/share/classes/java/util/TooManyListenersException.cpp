#include <java/util/TooManyListenersException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

$FieldInfo _TooManyListenersException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TooManyListenersException, serialVersionUID)},
	{}
};

$MethodInfo _TooManyListenersException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TooManyListenersException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TooManyListenersException, init$, void, $String*)},
	{}
};

$ClassInfo _TooManyListenersException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.TooManyListenersException",
	"java.lang.Exception",
	nullptr,
	_TooManyListenersException_FieldInfo_,
	_TooManyListenersException_MethodInfo_
};

$Object* allocate$TooManyListenersException($Class* clazz) {
	return $of($alloc(TooManyListenersException));
}

void TooManyListenersException::init$() {
	$Exception::init$();
}

void TooManyListenersException::init$($String* s) {
	$Exception::init$(s);
}

TooManyListenersException::TooManyListenersException() {
}

TooManyListenersException::TooManyListenersException(const TooManyListenersException& e) : $Exception(e) {
}

void TooManyListenersException::throw$() {
	throw *this;
}

$Class* TooManyListenersException::load$($String* name, bool initialize) {
	$loadClass(TooManyListenersException, name, initialize, &_TooManyListenersException_ClassInfo_, allocate$TooManyListenersException);
	return class$;
}

$Class* TooManyListenersException::class$ = nullptr;

	} // util
} // java