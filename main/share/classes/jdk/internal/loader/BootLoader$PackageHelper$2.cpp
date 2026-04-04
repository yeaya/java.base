#include <jdk/internal/loader/BootLoader$PackageHelper$2.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/util/jar/JarInputStream.h>
#include <java/util/jar/Manifest.h>
#include <jdk/internal/loader/BootLoader$PackageHelper.h>
#include <jcpp.h>

using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $JarInputStream = ::java::util::jar::JarInputStream;

namespace jdk {
	namespace internal {
		namespace loader {

void BootLoader$PackageHelper$2::init$($String* val$location) {
	$set(this, val$location, val$location);
}

$Object* BootLoader$PackageHelper$2::run() {
	$useLocalObjectStack();
	$var($Path, jar, $Path::of(this->val$location, $$new($StringArray, 0)));
	try {
		$var($InputStream, in, $Files::newInputStream(jar, $$new($OpenOptionArray, 0)));
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				$var($JarInputStream, jis, $new($JarInputStream, in, false));
				$var($Throwable, var$3, nullptr);
				$var($Object, var$5, nullptr);
				bool return$4 = false;
				try {
					try {
						$assign(var$5, jis->getManifest());
						return$4 = true;
						goto $finally1;
					} catch ($Throwable& t$) {
						try {
							jis->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable& var$6) {
					$assign(var$3, var$6);
				} $finally1: {
					jis->close();
				}
				if (var$3 != nullptr) {
					$throw(var$3);
				}
				if (return$4) {
					$assign(var$2, var$5);
					return$1 = true;
					goto $finally;
				}
			} catch ($Throwable& t$) {
				if (in != nullptr) {
					try {
						in->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
				}
				$throw(t$);
			}
		} catch ($Throwable& var$7) {
			$assign(var$0, var$7);
		} $finally: {
			if (in != nullptr) {
				in->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	} catch ($IOException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

BootLoader$PackageHelper$2::BootLoader$PackageHelper$2() {
}

$Class* BootLoader$PackageHelper$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$location", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(BootLoader$PackageHelper$2, val$location)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(BootLoader$PackageHelper$2, init$, void, $String*)},
		{"run", "()Ljava/util/jar/Manifest;", nullptr, $PUBLIC, $virtualMethod(BootLoader$PackageHelper$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.loader.BootLoader$PackageHelper",
		"getManifest",
		"(Ljava/lang/String;)Ljava/util/jar/Manifest;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.loader.BootLoader$PackageHelper", "jdk.internal.loader.BootLoader", "PackageHelper", $STATIC},
		{"jdk.internal.loader.BootLoader$PackageHelper$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.loader.BootLoader$PackageHelper$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/jar/Manifest;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.loader.BootLoader"
	};
	$loadClass(BootLoader$PackageHelper$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BootLoader$PackageHelper$2);
	});
	return class$;
}

$Class* BootLoader$PackageHelper$2::class$ = nullptr;

		} // loader
	} // internal
} // jdk