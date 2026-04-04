#include <CharType$H.h>
#include <CharType.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;

void CharType$H::init$() {
}

$Object* CharType$H::invoke(Object$* o, $Method* m, $ObjectArray* arr) {
	return nullptr;
}

CharType$H::CharType$H() {
}

$Class* CharType$H::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CharType$H, init$, void)},
		{"invoke", "(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CharType$H, invoke, $Object*, Object$*, $Method*, $ObjectArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"CharType$H", "CharType", "H", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"CharType$H",
		"java.lang.Object",
		"java.lang.reflect.InvocationHandler",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"CharType"
	};
	$loadClass(CharType$H, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CharType$H);
	});
	return class$;
}

$Class* CharType$H::class$ = nullptr;