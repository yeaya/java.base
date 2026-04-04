#include <java/util/concurrent/BrokenBarrierException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

void BrokenBarrierException::init$() {
	$Exception::init$();
}

void BrokenBarrierException::init$($String* message) {
	$Exception::init$(message);
}

BrokenBarrierException::BrokenBarrierException() {
}

BrokenBarrierException::BrokenBarrierException(const BrokenBarrierException& e) : $Exception(e) {
}

void BrokenBarrierException::throw$() {
	throw *this;
}

$Class* BrokenBarrierException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BrokenBarrierException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BrokenBarrierException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(BrokenBarrierException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.concurrent.BrokenBarrierException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BrokenBarrierException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BrokenBarrierException);
	});
	return class$;
}

$Class* BrokenBarrierException::class$ = nullptr;

		} // concurrent
	} // util
} // java