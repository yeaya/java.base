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

$FieldInfo _JrtFileSystemProvider$1_FieldInfo_[] = {
	{"val$urls", "[Ljava/net/URL;", nullptr, $FINAL | $SYNTHETIC, $field(JrtFileSystemProvider$1, val$urls)},
	{}
};

$MethodInfo _JrtFileSystemProvider$1_MethodInfo_[] = {
	{"<init>", "([Ljava/net/URL;)V", "()V", 0, $method(static_cast<void(JrtFileSystemProvider$1::*)($URLArray*)>(&JrtFileSystemProvider$1::init$))},
	{"run", "()Ljava/net/URLClassLoader;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JrtFileSystemProvider$1_EnclosingMethodInfo_ = {
	"jdk.internal.jrtfs.JrtFileSystemProvider",
	"newJrtFsLoader",
	"(Ljava/nio/file/Path;)Ljava/net/URLClassLoader;"
};

$InnerClassInfo _JrtFileSystemProvider$1_InnerClassesInfo_[] = {
	{"jdk.internal.jrtfs.JrtFileSystemProvider$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JrtFileSystemProvider$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.jrtfs.JrtFileSystemProvider$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_JrtFileSystemProvider$1_FieldInfo_,
	_JrtFileSystemProvider$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/URLClassLoader;>;",
	&_JrtFileSystemProvider$1_EnclosingMethodInfo_,
	_JrtFileSystemProvider$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.jrtfs.JrtFileSystemProvider"
};

$Object* allocate$JrtFileSystemProvider$1($Class* clazz) {
	return $of($alloc(JrtFileSystemProvider$1));
}

void JrtFileSystemProvider$1::init$($URLArray* val$urls) {
	$set(this, val$urls, val$urls);
}

$Object* JrtFileSystemProvider$1::run() {
	return $of($new($JrtFileSystemProvider$JrtFsLoader, this->val$urls));
}

JrtFileSystemProvider$1::JrtFileSystemProvider$1() {
}

$Class* JrtFileSystemProvider$1::load$($String* name, bool initialize) {
	$loadClass(JrtFileSystemProvider$1, name, initialize, &_JrtFileSystemProvider$1_ClassInfo_, allocate$JrtFileSystemProvider$1);
	return class$;
}

$Class* JrtFileSystemProvider$1::class$ = nullptr;

		} // jrtfs
	} // internal
} // jdk