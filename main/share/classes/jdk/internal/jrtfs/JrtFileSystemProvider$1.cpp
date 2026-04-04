#include <jdk/internal/jrtfs/JrtFileSystemProvider$1.h>
#include <java/net/URL.h>
#include <jdk/internal/jrtfs/JrtFileSystemProvider$JrtFsLoader.h>
#include <jdk/internal/jrtfs/JrtFileSystemProvider.h>
#include <jcpp.h>

using $URLArray = $Array<::java::net::URL>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JrtFileSystemProvider$JrtFsLoader = ::jdk::internal::jrtfs::JrtFileSystemProvider$JrtFsLoader;

namespace jdk {
	namespace internal {
		namespace jrtfs {

void JrtFileSystemProvider$1::init$($URLArray* val$urls) {
	$set(this, val$urls, val$urls);
}

$Object* JrtFileSystemProvider$1::run() {
	return $of($new($JrtFileSystemProvider$JrtFsLoader, this->val$urls));
}

JrtFileSystemProvider$1::JrtFileSystemProvider$1() {
}

$Class* JrtFileSystemProvider$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$urls", "[Ljava/net/URL;", nullptr, $FINAL | $SYNTHETIC, $field(JrtFileSystemProvider$1, val$urls)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/net/URL;)V", "()V", 0, $method(JrtFileSystemProvider$1, init$, void, $URLArray*)},
		{"run", "()Ljava/net/URLClassLoader;", nullptr, $PUBLIC, $virtualMethod(JrtFileSystemProvider$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.jrtfs.JrtFileSystemProvider",
		"newJrtFsLoader",
		"(Ljava/nio/file/Path;)Ljava/net/URLClassLoader;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.jrtfs.JrtFileSystemProvider$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.jrtfs.JrtFileSystemProvider$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/URLClassLoader;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.jrtfs.JrtFileSystemProvider"
	};
	$loadClass(JrtFileSystemProvider$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JrtFileSystemProvider$1);
	});
	return class$;
}

$Class* JrtFileSystemProvider$1::class$ = nullptr;

		} // jrtfs
	} // internal
} // jdk