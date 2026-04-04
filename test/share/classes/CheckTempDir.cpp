#include <CheckTempDir.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void CheckTempDir::init$() {
}

void CheckTempDir::main($StringArray* args) {
	$useLocalObjectStack();
	$var($String, tmpdir, nullptr);
	if (($assign(tmpdir, $System::getProperty("java.io.tmpdir"_s))) == nullptr) {
		$throwNew($RuntimeException, "java.io.tmpdir is not initialized"_s);
	} else {
		$nc($System::out)->println($$str({"checked tmpdir is not null: "_s, tmpdir}));
	}
}

CheckTempDir::CheckTempDir() {
}

$Class* CheckTempDir::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CheckTempDir, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CheckTempDir, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"CheckTempDir",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CheckTempDir, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CheckTempDir);
	});
	return class$;
}

$Class* CheckTempDir::class$ = nullptr;