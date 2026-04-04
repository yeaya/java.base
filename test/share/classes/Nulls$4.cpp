#include <Nulls$4.h>
#include <Nulls.h>
#include <java/nio/file/SimpleFileVisitor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SimpleFileVisitor = ::java::nio::file::SimpleFileVisitor;

void Nulls$4::init$() {
	$SimpleFileVisitor::init$();
}

Nulls$4::Nulls$4() {
}

$Class* Nulls$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Nulls$4, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Nulls",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Nulls$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Nulls$4",
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
	$loadClass(Nulls$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Nulls$4);
	});
	return class$;
}

$Class* Nulls$4::class$ = nullptr;