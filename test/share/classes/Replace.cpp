#include <Replace.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

void Replace::init$() {
}

void Replace::main($StringArray* arg) {
	$var($StringBuffer, sb, $new($StringBuffer));
	for (int32_t i = 0; i < 200; ++i) {
		sb->replace(i, i + 1, "a"_s);
	}
}

Replace::Replace() {
}

$Class* Replace::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Replace, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Replace, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Replace",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Replace, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Replace);
	});
	return class$;
}

$Class* Replace::class$ = nullptr;