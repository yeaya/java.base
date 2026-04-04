#include <Sanity.h>
#include <Sanity$1BlockLocal.h>
#include <Sanity$Nested.h>
#include <jcpp.h>

using $Sanity$1BlockLocal = ::Sanity$1BlockLocal;
using $Sanity$Nested = ::Sanity$Nested;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Sanity::init$() {
}

void Sanity::main($StringArray* args) {
	$load(Sanity);
	$beforeCallerSensitive();
	$load($Sanity$Nested);
	if ($Sanity$Nested::class$->getDeclaringClass() != Sanity::class$) {
		$throwNew($Exception, "Not finding declaring class"_s);
	}
	{
	}
	;
	$load($Sanity$1BlockLocal);
	if ($Sanity$1BlockLocal::class$->getDeclaringClass() != nullptr) {
		$throwNew($Exception, "Finding declaring class for block local"_s);
	}
}

Sanity::Sanity() {
}

$Class* Sanity::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Sanity, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Sanity, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Sanity$Nested", "Sanity", "Nested", 0},
		{"Sanity$1BlockLocal", nullptr, "BlockLocal", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Sanity",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Sanity$Nested,Sanity$1BlockLocal"
	};
	$loadClass(Sanity, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Sanity);
	});
	return class$;
}

$Class* Sanity::class$ = nullptr;