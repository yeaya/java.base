#include <WinMaxPath.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/FileOutputStream.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $FileNotFoundException = ::java::io::FileNotFoundException;
using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

void WinMaxPath::init$() {
}

void WinMaxPath::main($StringArray* args) {
	$useLocalObjectStack();
	$var($String, osName, $System::getProperty("os.name"_s));
	if (!$nc(osName)->startsWith("Windows"_s)) {
		return;
	}
	try {
		$var($chars, as, $new($chars, 65000));
		$Arrays::fill(as, u'a');
		$var($FileOutputStream, out, $new($FileOutputStream, $$new($String, as)));
		out->close();
	} catch ($FileNotFoundException& x) {
	}
}

WinMaxPath::WinMaxPath() {
}

$Class* WinMaxPath::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WinMaxPath, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(WinMaxPath, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"WinMaxPath",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(WinMaxPath, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WinMaxPath);
	});
	return class$;
}

$Class* WinMaxPath::class$ = nullptr;