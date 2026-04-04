#include <Exceptions4StringBuffer$6.h>
#include <Exceptions4StringBuffer.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

void Exceptions4StringBuffer$6::init$() {
}

void Exceptions4StringBuffer$6::run() {
	$var($StringBuffer, sb, $new($StringBuffer, "hilbert"_s));
	sb->replace(-1, 2, " "_s);
}

Exceptions4StringBuffer$6::Exceptions4StringBuffer$6() {
}

$Class* Exceptions4StringBuffer$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Exceptions4StringBuffer$6, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Exceptions4StringBuffer$6, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Exceptions4StringBuffer",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Exceptions4StringBuffer$6", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Exceptions4StringBuffer$6",
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
		"Exceptions4StringBuffer"
	};
	$loadClass(Exceptions4StringBuffer$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Exceptions4StringBuffer$6);
	});
	return class$;
}

$Class* Exceptions4StringBuffer$6::class$ = nullptr;