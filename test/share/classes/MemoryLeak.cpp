#include <MemoryLeak.h>
#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;

void MemoryLeak::init$() {
}

void MemoryLeak::main($StringArray* args) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < 1100000; ++i) {
		$var($ThreadLocal, t, $new($ThreadLocal));
		t->set($$new($Object));
		t->set(nullptr);
	}
}

MemoryLeak::MemoryLeak() {
}

$Class* MemoryLeak::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MemoryLeak, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(MemoryLeak, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MemoryLeak",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MemoryLeak, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MemoryLeak);
	});
	return class$;
}

$Class* MemoryLeak::class$ = nullptr;