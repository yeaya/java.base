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
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;

namespace jdk {
	namespace internal {
		namespace loader {

void BootLoader$PackageHelper$1::init$($String* val$location) {
	$set(this, val$location, val$location);
}

$Object* BootLoader$PackageHelper$1::run() {
	$useLocalObjectStack();
	$var($Path, path, $Path::of(this->val$location, $$new($StringArray, 0)));
	if ($Files::isRegularFile(path, $$new($LinkOptionArray, 0))) {
		try {
			return $$nc($nc(path)->toUri())->toURL();
		} catch ($MalformedURLException& e) {
		}
	}
	return nullptr;
}

BootLoader$PackageHelper$1::BootLoader$PackageHelper$1() {
}

$Class* BootLoader$PackageHelper$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$location", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(BootLoader$PackageHelper$1, val$location)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(BootLoader$PackageHelper$1, init$, void, $String*)},
		{"run", "()Ljava/net/URL;", nullptr, $PUBLIC, $virtualMethod(BootLoader$PackageHelper$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.loader.BootLoader$PackageHelper",
		"toFileURL",
		"(Ljava/lang/String;)Ljava/net/URL;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.loader.BootLoader$PackageHelper", "jdk.internal.loader.BootLoader", "PackageHelper", $STATIC},
		{"jdk.internal.loader.BootLoader$PackageHelper$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.loader.BootLoader$PackageHelper$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/URL;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.loader.BootLoader"
	};
	$loadClass(BootLoader$PackageHelper$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BootLoader$PackageHelper$1);
	});
	return class$;
}

$Class* BootLoader$PackageHelper$1::class$ = nullptr;

		} // loader
	} // internal
} // jdk