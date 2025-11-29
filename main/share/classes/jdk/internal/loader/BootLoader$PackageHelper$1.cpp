#include <jdk/internal/loader/BootLoader$PackageHelper$1.h>

#include <java/net/MalformedURLException.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <jdk/internal/loader/BootLoader$PackageHelper.h>
#include <jcpp.h>

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URI = ::java::net::URI;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;

namespace jdk {
	namespace internal {
		namespace loader {

$FieldInfo _BootLoader$PackageHelper$1_FieldInfo_[] = {
	{"val$location", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(BootLoader$PackageHelper$1, val$location)},
	{}
};

$MethodInfo _BootLoader$PackageHelper$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(BootLoader$PackageHelper$1::*)($String*)>(&BootLoader$PackageHelper$1::init$))},
	{"run", "()Ljava/net/URL;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BootLoader$PackageHelper$1_EnclosingMethodInfo_ = {
	"jdk.internal.loader.BootLoader$PackageHelper",
	"toFileURL",
	"(Ljava/lang/String;)Ljava/net/URL;"
};

$InnerClassInfo _BootLoader$PackageHelper$1_InnerClassesInfo_[] = {
	{"jdk.internal.loader.BootLoader$PackageHelper", "jdk.internal.loader.BootLoader", "PackageHelper", $STATIC},
	{"jdk.internal.loader.BootLoader$PackageHelper$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BootLoader$PackageHelper$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.loader.BootLoader$PackageHelper$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_BootLoader$PackageHelper$1_FieldInfo_,
	_BootLoader$PackageHelper$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/URL;>;",
	&_BootLoader$PackageHelper$1_EnclosingMethodInfo_,
	_BootLoader$PackageHelper$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.loader.BootLoader"
};

$Object* allocate$BootLoader$PackageHelper$1($Class* clazz) {
	return $of($alloc(BootLoader$PackageHelper$1));
}

void BootLoader$PackageHelper$1::init$($String* val$location) {
	$set(this, val$location, val$location);
}

$Object* BootLoader$PackageHelper$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($Path, path, $Path::of(this->val$location, $$new($StringArray, 0)));
	if ($Files::isRegularFile(path, $$new($LinkOptionArray, 0))) {
		try {
			return $of($nc($($nc(path)->toUri()))->toURL());
		} catch ($MalformedURLException& e) {
		}
	}
	return $of(nullptr);
}

BootLoader$PackageHelper$1::BootLoader$PackageHelper$1() {
}

$Class* BootLoader$PackageHelper$1::load$($String* name, bool initialize) {
	$loadClass(BootLoader$PackageHelper$1, name, initialize, &_BootLoader$PackageHelper$1_ClassInfo_, allocate$BootLoader$PackageHelper$1);
	return class$;
}

$Class* BootLoader$PackageHelper$1::class$ = nullptr;

		} // loader
	} // internal
} // jdk