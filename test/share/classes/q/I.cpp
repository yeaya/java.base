#include <q/I.h>
#include <java/nio/file/Path.h>
#include <jcpp.h>

#undef I

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;

namespace q {

void I::init$() {
}

$String* I::filename($Path* file) {
	return $nc(file)->toString();
}

I::I() {
}

$Class* I::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(I, init$, void)},
		{"filename", "(Ljava/nio/file/Path;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(I, filename, $String*, $Path*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"q.I",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(I, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(I);
	});
	return class$;
}

$Class* I::class$ = nullptr;

} // q