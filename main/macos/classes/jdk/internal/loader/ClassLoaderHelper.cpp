#include <jdk/internal/loader/ClassLoaderHelper.h>
#include <java/io/File.h>
#include <java/util/ArrayList.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;

namespace jdk {
	namespace internal {
		namespace loader {

void ClassLoaderHelper::init$() {
}

$File* ClassLoaderHelper::mapAlternativeName($File* lib) {
	$useLocalObjectStack();
	$var($String, name, $nc(lib)->toString());
	int32_t index = $nc(name)->lastIndexOf(u'.');
	if (index < 0) {
		return nullptr;
	}
	return $new($File, $$str({$(name->substring(0, index)), ".jnilib"_s}));
}

$StringArray* ClassLoaderHelper::parsePath($String* ldPath) {
	$useLocalObjectStack();
	$init($File);
	char16_t ps = $File::pathSeparatorChar;
	$var($ArrayList, paths, $new($ArrayList));
	int32_t pathStart = 0;
	int32_t pathEnd = 0;
	while ((pathEnd = $nc(ldPath)->indexOf(ps, pathStart)) >= 0) {
		paths->add((pathStart < pathEnd) ? $(ldPath->substring(pathStart, pathEnd)) : "."_s);
		pathStart = pathEnd + 1;
	}
	int32_t ldLen = ldPath->length();
	paths->add((pathStart < ldLen) ? $(ldPath->substring(pathStart, ldLen)) : "."_s);
	return $cast($StringArray, paths->toArray($$new($StringArray, paths->size())));
}

ClassLoaderHelper::ClassLoaderHelper() {
}

$Class* ClassLoaderHelper::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ClassLoaderHelper, init$, void)},
		{"mapAlternativeName", "(Ljava/io/File;)Ljava/io/File;", nullptr, $STATIC, $staticMethod(ClassLoaderHelper, mapAlternativeName, $File*, $File*)},
		{"parsePath", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $STATIC, $staticMethod(ClassLoaderHelper, parsePath, $StringArray*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.loader.ClassLoaderHelper",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ClassLoaderHelper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassLoaderHelper);
	});
	return class$;
}

$Class* ClassLoaderHelper::class$ = nullptr;

		} // loader
	} // internal
} // jdk