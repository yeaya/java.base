#include <Exceptions4StringBuffer$4.h>
#include <Exceptions4StringBuffer.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

void Exceptions4StringBuffer$4::init$() {
}

void Exceptions4StringBuffer$4::run() {
	$new($StringBuffer, ($String*)nullptr);
}

Exceptions4StringBuffer$4::Exceptions4StringBuffer$4() {
}

$Class* Exceptions4StringBuffer$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Exceptions4StringBuffer$4, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Exceptions4StringBuffer$4, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Exceptions4StringBuffer",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Exceptions4StringBuffer$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Exceptions4StringBuffer$4",
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
	$loadClass(Exceptions4StringBuffer$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Exceptions4StringBuffer$4);
	});
	return class$;
}

$Class* Exceptions4StringBuffer$4::class$ = nullptr;