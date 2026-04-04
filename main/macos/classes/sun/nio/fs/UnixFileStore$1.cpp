#include <sun/nio/fs/UnixFileStore$1.h>
#include <java/util/Properties.h>
#include <sun/nio/fs/UnixFileStore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnixFileStore = ::sun::nio::fs::UnixFileStore;

namespace sun {
	namespace nio {
		namespace fs {

void UnixFileStore$1::init$($UnixFileStore* this$0) {
	$set(this, this$0, this$0);
}

$Object* UnixFileStore$1::run() {
	return $of($UnixFileStore::loadProperties());
}

UnixFileStore$1::UnixFileStore$1() {
}

$Class* UnixFileStore$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/fs/UnixFileStore;", nullptr, $FINAL | $SYNTHETIC, $field(UnixFileStore$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/fs/UnixFileStore;)V", nullptr, 0, $method(UnixFileStore$1, init$, void, $UnixFileStore*)},
		{"run", "()Ljava/util/Properties;", nullptr, $PUBLIC, $virtualMethod(UnixFileStore$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.fs.UnixFileStore",
		"checkIfFeaturePresent",
		"(Ljava/lang/String;)Lsun/nio/fs/UnixFileStore$FeatureStatus;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.UnixFileStore$1", nullptr, nullptr, 0},
		{"sun.nio.fs.UnixFileStore$FeatureStatus", "sun.nio.fs.UnixFileStore", "FeatureStatus", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.UnixFileStore$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/Properties;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.UnixFileStore"
	};
	$loadClass(UnixFileStore$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnixFileStore$1);
	});
	return class$;
}

$Class* UnixFileStore$1::class$ = nullptr;

		} // fs
	} // nio
} // sun