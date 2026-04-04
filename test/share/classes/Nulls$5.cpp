#include <Nulls$5.h>
#include <Nulls.h>
#include <java/nio/file/SimpleFileVisitor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SimpleFileVisitor = ::java::nio::file::SimpleFileVisitor;

void Nulls$5::init$() {
	$SimpleFileVisitor::init$();
}

Nulls$5::Nulls$5() {
}

$Class* Nulls$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Nulls$5, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Nulls",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Nulls$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Nulls$5",
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
	$loadClass(Nulls$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Nulls$5);
	});
	return class$;
}

$Class* Nulls$5::class$ = nullptr;