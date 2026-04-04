#include <Exceptions4StringBuilder$6.h>
#include <Exceptions4StringBuilder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Exceptions4StringBuilder$6::init$() {
}

void Exceptions4StringBuilder$6::run() {
	$var($StringBuilder, sb, $new($StringBuilder, "hilbert"_s));
	sb->replace(-1, 2, " "_s);
}

Exceptions4StringBuilder$6::Exceptions4StringBuilder$6() {
}

$Class* Exceptions4StringBuilder$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Exceptions4StringBuilder$6, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Exceptions4StringBuilder$6, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Exceptions4StringBuilder",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Exceptions4StringBuilder$6", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Exceptions4StringBuilder$6",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Exceptions4StringBuilder"
	};
	$loadClass(Exceptions4StringBuilder$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Exceptions4StringBuilder$6);
	});
	return class$;
}

$Class* Exceptions4StringBuilder$6::class$ = nullptr;