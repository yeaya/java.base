#include <ForceLoad.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Files = ::java::nio::file::Files;
using $Paths = ::java::nio::file::Paths;

void ForceLoad::init$() {
}

void ForceLoad::main($StringArray* args) {
	$useLocalObjectStack();
	$Files::probeContentType($($Paths::get("."_s, $$new($StringArray, 0))));
}

ForceLoad::ForceLoad() {
}

$Class* ForceLoad::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ForceLoad, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ForceLoad, main, void, $StringArray*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ForceLoad",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ForceLoad, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ForceLoad);
	});
	return class$;
}

$Class* ForceLoad::class$ = nullptr;