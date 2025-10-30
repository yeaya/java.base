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

$FieldInfo _Package$1PackageInfoProxy_FieldInfo_[] = {
	{"this$0", "Ljava/lang/Package;", nullptr, $FINAL | $SYNTHETIC, $field(Package$1PackageInfoProxy, this$0)},
	{}
};

$MethodInfo _Package$1PackageInfoProxy_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Package;)V", nullptr, 0, $method(static_cast<void(Package$1PackageInfoProxy::*)($Package*)>(&Package$1PackageInfoProxy::init$))},
	{}
};

$EnclosingMethodInfo _Package$1PackageInfoProxy_EnclosingMethodInfo_ = {
	"java.lang.Package",
	"getPackageInfo",
	"()Ljava/lang/Class;"
};

$InnerClassInfo _Package$1PackageInfoProxy_InnerClassesInfo_[] = {
	{"java.lang.Package$1PackageInfoProxy", nullptr, "PackageInfoProxy", 0},
	{}
};

$ClassInfo _Package$1PackageInfoProxy_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.Package$1PackageInfoProxy",
	"java.lang.Object",
	nullptr,
	_Package$1PackageInfoProxy_FieldInfo_,
	_Package$1PackageInfoProxy_MethodInfo_,
	nullptr,
	&_Package$1PackageInfoProxy_EnclosingMethodInfo_,
	_Package$1PackageInfoProxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Package"
};

$Object* allocate$Package$1PackageInfoProxy($Class* clazz) {
	return $of($alloc(Package$1PackageInfoProxy));
}

void Package$1PackageInfoProxy::init$($Package* this$0) {
	$set(this, this$0, this$0);
}

Package$1PackageInfoProxy::Package$1PackageInfoProxy() {
}

$Class* Package$1PackageInfoProxy::load$($String* name, bool initialize) {
	$loadClass(Package$1PackageInfoProxy, name, initialize, &_Package$1PackageInfoProxy_ClassInfo_, allocate$Package$1PackageInfoProxy);
	return class$;
}

$Class* Package$1PackageInfoProxy::class$ = nullptr;

	} // lang
} // java