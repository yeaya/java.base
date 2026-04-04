#include <NonLinking.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/NoClassDefFoundError.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/net/URLClassLoader.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <jcpp.h>

#undef CLASSNAME

using $URLArray = $Array<::java::net::URL>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoClassDefFoundError = ::java::lang::NoClassDefFoundError;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;
using $URLClassLoader = ::java::net::URLClassLoader;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;

void NonLinking::init$() {
}

void NonLinking::main($StringArray* args) {
	$useLocalObjectStack();
	$load(NonLinking);
	$beforeCallerSensitive();
	$var($Path, jarPath, $Paths::get("classes.jar"_s, $$new($StringArray, 0)));
	$var($URL, url, $$nc($nc(jarPath)->toUri())->toURL());
	$var($URLClassLoader, ucl1, $new($URLClassLoader, "UCL1"_s, $$new($URLArray, {url}), nullptr));
	{
		$var($String, s2074$, $nc(args)->get(0));
		int32_t tmp2074$ = -1;
		switch ($nc(s2074$)->hashCode()) {
		case 0x00316510:
			if (s2074$->equals("init"_s)) {
				tmp2074$ = 0;
			}
			break;
		case 0x0032c4e6:
			if (s2074$->equals("load"_s)) {
				tmp2074$ = 1;
			}
			break;
		}
		switch (tmp2074$) {
		case 0:
			try {
				$Class::forName("Container"_s, true, ucl1);
				$throwNew($RuntimeException, "Missed expected NoClassDefFoundError"_s);
			} catch ($NoClassDefFoundError& expected) {
				$var($String, CLASSNAME, "MissingClass"_s);
				$var($Throwable, cause, expected->getCause());
				if (!$$nc($nc(cause)->getMessage())->contains(CLASSNAME)) {
					$throwNew($RuntimeException, $$str({"Cause of NoClassDefFoundError does not contain \""_s, CLASSNAME, "\""_s}), cause);
				}
			}
			break;
		case 1:
			$Class::forName("Container"_s, false, ucl1);
			break;
		default:
			$throwNew($RuntimeException, $$str({"Unknown command: "_s, args->get(0)}));
		}
	}
}

NonLinking::NonLinking() {
}

$Class* NonLinking::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NonLinking, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NonLinking, main, void, $StringArray*), "java.lang.Throwable"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"NonLinking",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NonLinking, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NonLinking);
	});
	return class$;
}

$Class* NonLinking::class$ = nullptr;