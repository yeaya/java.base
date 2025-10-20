#include <jdk/internal/loader/ClassLoaderHelper.h>

#include <java/io/File.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ClassLoaderHelper::*)()>(&ClassLoaderHelper::init$))},
	{"mapAlternativeName", "(Ljava/io/File;)Ljava/io/File;", nullptr, $STATIC, $method(static_cast<$File*(*)($File*)>(&ClassLoaderHelper::mapAlternativeName))},
	{"parsePath", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)($String*)>(&ClassLoaderHelper::parsePath))},
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