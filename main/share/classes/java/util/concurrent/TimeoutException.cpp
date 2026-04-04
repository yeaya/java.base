#include <java/util/concurrent/TimeoutException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

void TimeoutException::init$() {
	$Exception::init$();
}

void TimeoutException::init$($String* message) {
	$Exception::init$(message);
}

TimeoutException::TimeoutException() {
}

TimeoutException::TimeoutException(const TimeoutException& e) : $Exception(e) {
}

void TimeoutException::throw$() {
	throw *this;
}

$Class* TimeoutException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TimeoutException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeoutException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TimeoutException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.concurrent.TimeoutException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TimeoutException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeoutException);
	});
	return class$;
}

$Class* TimeoutException::class$ = nullptr;

		} // concurrent
	} // util
} // java