#include <IsSynthetic$1.h>
#include <IsSynthetic.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void IsSynthetic$1::init$() {
}

IsSynthetic$1::IsSynthetic$1() {
}

$Class* IsSynthetic$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(IsSynthetic$1, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"IsSynthetic",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"IsSynthetic$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"IsSynthetic$1",
		"java.lang.Object",
		"java.lang.Cloneable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"IsSynthetic"
	};
	$loadClass(IsSynthetic$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IsSynthetic$1);
	});
	return class$;
}

$Class* IsSynthetic$1::class$ = nullptr;