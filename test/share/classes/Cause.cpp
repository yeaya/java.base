#include <Cause.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void Cause::init$() {
}

void Cause::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Exception, e, $new($Exception));
	$var($AssertionError, ae, $new($AssertionError, e));
	if (!$equals(ae->getCause(), e)) {
		$throwNew($Exception, "Cause not set."_s);
	}
	$assign(ae, $new($AssertionError, $of("gosh it\'s late"_s)));
	if (ae->getCause() != nullptr) {
		$throwNew($Exception, $$str({"Cause set erroneously: "_s, $(ae->getCause())}));
	}
}

Cause::Cause() {
}

$Class* Cause::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Cause, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Cause, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Cause",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Cause, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Cause);
	});
	return class$;
}

$Class* Cause::class$ = nullptr;