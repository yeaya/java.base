#include <IndexOfEmptyInEmpty.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void IndexOfEmptyInEmpty::init$() {
}

void IndexOfEmptyInEmpty::main($StringArray* args) {
	$useLocalObjectStack();
	int32_t result = $$new($String, ""_s)->indexOf(""_s);
	if (result != 0) {
		$throwNew($Exception, $$str({"new String(\"\").indexOf(\"\") must be 0, but got "_s, $$str(result)}));
	}
}

IndexOfEmptyInEmpty::IndexOfEmptyInEmpty() {
}

$Class* IndexOfEmptyInEmpty::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IndexOfEmptyInEmpty, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(IndexOfEmptyInEmpty, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"IndexOfEmptyInEmpty",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(IndexOfEmptyInEmpty, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IndexOfEmptyInEmpty);
	});
	return class$;
}

$Class* IndexOfEmptyInEmpty::class$ = nullptr;