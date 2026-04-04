#include <sun/security/util/FilePaths.h>
#include <java/io/File.h>
#include <jdk/internal/util/StaticProperty.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StaticProperty = ::jdk::internal::util::StaticProperty;

namespace sun {
	namespace security {
		namespace util {

void FilePaths::init$() {
}

$String* FilePaths::cacerts() {
	$init($File);
	return $str({$($StaticProperty::javaHome()), $File::separator, "lib"_s, $File::separator, "security"_s, $File::separator, "cacerts"_s});
}

FilePaths::FilePaths() {
}

$Class* FilePaths::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FilePaths, init$, void)},
		{"cacerts", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(FilePaths, cacerts, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.FilePaths",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FilePaths, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FilePaths);
	});
	return class$;
}

$Class* FilePaths::class$ = nullptr;

		} // util
	} // security
} // sun