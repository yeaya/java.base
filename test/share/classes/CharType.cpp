#include <CharType.h>
#include <CharType$CharMethod.h>
#include <CharType$H.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/reflect/Proxy.h>
#include <jcpp.h>

using $CharType$CharMethod = ::CharType$CharMethod;
using $CharType$H = ::CharType$H;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Proxy = ::java::lang::reflect::Proxy;

void CharType::init$() {
}

void CharType::main($StringArray* args) {
	$useLocalObjectStack();
	$load(CharType);
	$beforeCallerSensitive();
	$load($CharType$CharMethod);
	$var($ClassLoader, var$0, $CharType$CharMethod::class$->getClassLoader());
	$var($ClassArray, var$1, $new($ClassArray, {$CharType$CharMethod::class$}));
	$Proxy::newProxyInstance(var$0, var$1, $$new($CharType$H));
}

CharType::CharType() {
}

$Class* CharType::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CharType, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CharType, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"CharType$H", "CharType", "H", $STATIC},
		{"CharType$CharMethod", "CharType", "CharMethod", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"CharType",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"CharType$H,CharType$CharMethod"
	};
	$loadClass(CharType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CharType);
	});
	return class$;
}

$Class* CharType::class$ = nullptr;