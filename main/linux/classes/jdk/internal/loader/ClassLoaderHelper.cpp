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

$MethodInfo _ClassLoaderHelper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ClassLoaderHelper, init$, void)},
	{"mapAlternativeName", "(Ljava/io/File;)Ljava/io/File;", nullptr, $STATIC, $staticMethod(ClassLoaderHelper, mapAlternativeName, $File*, $File*)},
	{"parsePath", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $STATIC, $staticMethod(ClassLoaderHelper, parsePath, $StringArray*, $String*)},
	{}
};

$ClassInfo _ClassLoaderHelper_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.loader.ClassLoaderHelper",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ClassLoaderHelper_MethodInfo_
};

$Object* allocate$ClassLoaderHelper($Class* clazz) {
	return $of($alloc(ClassLoaderHelper));
}

void ClassLoaderHelper::init$() {
}

$File* ClassLoaderHelper::mapAlternativeName($File* lib) {
	return nullptr;
}

$StringArray* ClassLoaderHelper::parsePath($String* ldPath) {
	$useLocalCurrentObjectStackCache();
	$init($File);
	char16_t ps = $File::pathSeparatorChar;
	$var($ArrayList, paths, $new($ArrayList));
	int32_t pathStart = 0;
	int32_t pathEnd = 0;
	while ((pathEnd = $nc(ldPath)->indexOf((int32_t)ps, pathStart)) >= 0) {
		paths->add((pathStart < pathEnd) ? $(ldPath->substring(pathStart, pathEnd)) : "."_s);
		pathStart = pathEnd + 1;
	}
	int32_t ldLen = $nc(ldPath)->length();
	paths->add((pathStart < ldLen) ? $(ldPath->substring(pathStart, ldLen)) : "."_s);
	return $fcast($StringArray, paths->toArray($$new($StringArray, paths->size())));
}

ClassLoaderHelper::ClassLoaderHelper() {
}

$Class* ClassLoaderHelper::load$($String* name, bool initialize) {
	$loadClass(ClassLoaderHelper, name, initialize, &_ClassLoaderHelper_ClassInfo_, allocate$ClassLoaderHelper);
	return class$;
}

$Class* ClassLoaderHelper::class$ = nullptr;

		} // loader
	} // internal
} // jdk