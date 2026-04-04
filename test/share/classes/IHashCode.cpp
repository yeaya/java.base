#include <IHashCode.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void IHashCode::init$() {
}

void IHashCode::main($StringArray* argv) {
	$useLocalObjectStack();
	int32_t test = $System::identityHashCode(nullptr);
	if (test != 0) {
		$throwNew($RuntimeException, $$str({"identityHashCode(null) is "_s, $$str(test)}));
	}
}

IHashCode::IHashCode() {
}

$Class* IHashCode::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IHashCode, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(IHashCode, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"IHashCode",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(IHashCode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IHashCode);
	});
	return class$;
}

$Class* IHashCode::class$ = nullptr;