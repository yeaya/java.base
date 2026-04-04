#include <java/lang/Terminator$1.h>
#include <java/lang/Shutdown.h>
#include <java/lang/Terminator.h>
#include <jdk/internal/misc/Signal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Shutdown = ::java::lang::Shutdown;
using $Signal = ::jdk::internal::misc::Signal;

namespace java {
	namespace lang {

void Terminator$1::init$() {
}

void Terminator$1::handle($Signal* sig) {
	$Shutdown::exit($nc(sig)->getNumber() + 128);
}

Terminator$1::Terminator$1() {
}

$Class* Terminator$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Terminator$1, init$, void)},
		{"handle", "(Ljdk/internal/misc/Signal;)V", nullptr, $PUBLIC, $virtualMethod(Terminator$1, handle, void, $Signal*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.Terminator",
		"setup",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.Terminator$1", nullptr, nullptr, 0},
		{"jdk.internal.misc.Signal$Handler", "jdk.internal.misc.Signal", "Handler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.Terminator$1",
		"java.lang.Object",
		"jdk.internal.misc.Signal$Handler",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.Terminator"
	};
	$loadClass(Terminator$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Terminator$1);
	});
	return class$;
}

$Class* Terminator$1::class$ = nullptr;

	} // lang
} // java