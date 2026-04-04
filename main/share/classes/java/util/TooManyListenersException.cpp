#include <java/util/TooManyListenersException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TooManyListenersException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TooManyListenersException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TooManyListenersException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.TooManyListenersException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TooManyListenersException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TooManyListenersException);
	});
	return class$;
}

$Class* TooManyListenersException::class$ = nullptr;

	} // util
} // java