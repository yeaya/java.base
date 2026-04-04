#include <java/lang/Package$1PackageInfoProxy.h>
#include <java/lang/Package.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Package = ::java::lang::Package;

namespace java {
	namespace lang {

void Package$1PackageInfoProxy::init$($Package* this$0) {
	$set(this, this$0, this$0);
}

Package$1PackageInfoProxy::Package$1PackageInfoProxy() {
}

$Class* Package$1PackageInfoProxy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/lang/Package;", nullptr, $FINAL | $SYNTHETIC, $field(Package$1PackageInfoProxy, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Package;)V", nullptr, 0, $method(Package$1PackageInfoProxy, init$, void, $Package*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.Package",
		"getPackageInfo",
		"()Ljava/lang/Class;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.Package$1PackageInfoProxy", nullptr, "PackageInfoProxy", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.Package$1PackageInfoProxy",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.Package"
	};
	$loadClass(Package$1PackageInfoProxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Package$1PackageInfoProxy);
	});
	return class$;
}

$Class* Package$1PackageInfoProxy::class$ = nullptr;

	} // lang
} // java