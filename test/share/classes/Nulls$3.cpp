#include <Nulls$3.h>
#include <Nulls.h>
#include <java/nio/file/SimpleFileVisitor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SimpleFileVisitor = ::java::nio::file::SimpleFileVisitor;

void Nulls$3::init$() {
	$SimpleFileVisitor::init$();
}

Nulls$3::Nulls$3() {
}

$Class* Nulls$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Nulls$3, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Nulls",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Nulls$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Nulls$3",
		"java.nio.file.SimpleFileVisitor",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljava/nio/file/SimpleFileVisitor<Ljava/nio/file/Path;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Nulls"
	};
	$loadClass(Nulls$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Nulls$3);
	});
	return class$;
}

$Class* Nulls$3::class$ = nullptr;