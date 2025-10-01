#include <sun/security/util/FilePaths.h>

#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/util/StaticProperty.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StaticProperty = ::jdk::internal::util::StaticProperty;

namespace sun {
	namespace security {
		namespace util {

$MethodInfo _FilePaths_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FilePaths::*)()>(&FilePaths::init$))},
	{"cacerts", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)()>(&FilePaths::cacerts))},
	{}
};

$ClassInfo _FilePaths_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.FilePaths",
	"java.lang.Object",
	nullptr,
	nullptr,
	_FilePaths_MethodInfo_
};

$Object* allocate$FilePaths($Class* clazz) {
	return $of($alloc(FilePaths));
}

void FilePaths::init$() {
}

$String* FilePaths::cacerts() {
	$init($File);
	return $str({$($StaticProperty::javaHome()), $File::separator, "lib"_s, $File::separator, "security"_s, $File::separator, "cacerts"_s});
}

FilePaths::FilePaths() {
}

$Class* FilePaths::load$($String* name, bool initialize) {
	$loadClass(FilePaths, name, initialize, &_FilePaths_ClassInfo_, allocate$FilePaths);
	return class$;
}

$Class* FilePaths::class$ = nullptr;

		} // util
	} // security
} // sun