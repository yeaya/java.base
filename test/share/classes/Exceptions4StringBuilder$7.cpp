#include <Exceptions4StringBuilder$7.h>
#include <Exceptions4StringBuilder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Exceptions4StringBuilder$7::init$() {
}

void Exceptions4StringBuilder$7::run() {
	$var($StringBuilder, sb, $new($StringBuilder, "banach"_s));
	sb->replace(7, 8, " "_s);
}

Exceptions4StringBuilder$7::Exceptions4StringBuilder$7() {
}

$Class* Exceptions4StringBuilder$7::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Exceptions4StringBuilder$7, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Exceptions4StringBuilder$7, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Exceptions4StringBuilder",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Exceptions4StringBuilder$7", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Exceptions4StringBuilder$7",
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
	$loadClass(Exceptions4StringBuilder$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Exceptions4StringBuilder$7);
	});
	return class$;
}

$Class* Exceptions4StringBuilder$7::class$ = nullptr;