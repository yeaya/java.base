#include <java/lang/Terminator.h>
#include <java/lang/Terminator$1.h>
#include <jdk/internal/misc/Signal$Handler.h>
#include <jdk/internal/misc/Signal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Terminator$1 = ::java::lang::Terminator$1;
using $Signal = ::jdk::internal::misc::Signal;
using $Signal$Handler = ::jdk::internal::misc::Signal$Handler;

namespace java {
	namespace lang {

$Signal$Handler* Terminator::handler = nullptr;

void Terminator::init$() {
}

void Terminator::setup() {
	$init(Terminator);
	$useLocalObjectStack();
	if (Terminator::handler != nullptr) {
		return;
	}
	$var($Signal$Handler, sh, $new($Terminator$1));
	$assignStatic(Terminator::handler, sh);
	try {
		$Signal::handle($$new($Signal, "INT"_s), sh);
	} catch ($IllegalArgumentException& e) {
	}
	try {
		$Signal::handle($$new($Signal, "TERM"_s), sh);
	} catch ($IllegalArgumentException& e) {
	}
}

void Terminator::teardown() {
	$init(Terminator);
}

void Terminator::clinit$($Class* clazz) {
	$assignStatic(Terminator::handler, nullptr);
}

Terminator::Terminator() {
}

$Class* Terminator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"handler", "Ljdk/internal/misc/Signal$Handler;", nullptr, $PRIVATE | $STATIC, $staticField(Terminator, handler)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Terminator, init$, void)},
		{"setup", "()V", nullptr, $STATIC, $staticMethod(Terminator, setup, void)},
		{"teardown", "()V", nullptr, $STATIC, $staticMethod(Terminator, teardown, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.Terminator$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.Terminator",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.Terminator$1"
	};
	$loadClass(Terminator, name, initialize, &classInfo$$, Terminator::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Terminator);
	});
	return class$;
}

$Class* Terminator::class$ = nullptr;

	} // lang
} // java