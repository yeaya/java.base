#include <java/lang/ThreadDeath.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void ThreadDeath::init$() {
	$Error::init$();
}

ThreadDeath::ThreadDeath() {
}

ThreadDeath::ThreadDeath(const ThreadDeath& e) : $Error(e) {
}

void ThreadDeath::throw$() {
	throw *this;
}

$Class* ThreadDeath::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ThreadDeath, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ThreadDeath, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.ThreadDeath",
		"java.lang.Error",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ThreadDeath, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ThreadDeath);
	});
	return class$;
}

$Class* ThreadDeath::class$ = nullptr;

	} // lang
} // java