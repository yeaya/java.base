#include <e1/CrackM5Access.h>
#include <java/lang/Module.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;

namespace e1 {

void CrackM5Access::init$() {
}

void CrackM5Access::privateMethod() {
}

void CrackM5Access::packageMethod() {
}

void CrackM5Access::addReads($Module* m) {
	$load(CrackM5Access);
	$beforeCallerSensitive();
	$$nc(CrackM5Access::class$->getModule())->addReads(m);
}

CrackM5Access::CrackM5Access() {
}

$Class* CrackM5Access::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CrackM5Access, init$, void)},
		{"addReads", "(Ljava/lang/Module;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CrackM5Access, addReads, void, $Module*)},
		{"packageMethod", "()V", nullptr, $STATIC, $staticMethod(CrackM5Access, packageMethod, void)},
		{"privateMethod", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(CrackM5Access, privateMethod, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"e1.CrackM5Access",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CrackM5Access, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CrackM5Access);
	});
	return class$;
}

$Class* CrackM5Access::class$ = nullptr;

} // e1