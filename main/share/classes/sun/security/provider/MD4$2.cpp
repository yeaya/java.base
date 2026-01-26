#include <sun/security/provider/MD4$2.h>

#include <java/security/Provider.h>
#include <sun/security/provider/MD4.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Provider = ::java::security::Provider;
using $MD4 = ::sun::security::provider::MD4;

namespace sun {
	namespace security {
		namespace provider {

$MethodInfo _MD4$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(MD4$2, init$, void)},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(MD4$2, run, $Object*)},
	{}
};

$EnclosingMethodInfo _MD4$2_EnclosingMethodInfo_ = {
	"sun.security.provider.MD4",
	nullptr,
	nullptr
};

$InnerClassInfo _MD4$2_InnerClassesInfo_[] = {
	{"sun.security.provider.MD4$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MD4$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.MD4$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_MD4$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_MD4$2_EnclosingMethodInfo_,
	_MD4$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.MD4"
};

$Object* allocate$MD4$2($Class* clazz) {
	return $of($alloc(MD4$2));
}

void MD4$2::init$() {
}

$Object* MD4$2::run() {
	$init($MD4);
	$nc($MD4::md4Provider)->put("MessageDigest.MD4"_s, "sun.security.provider.MD4"_s);
	return $of(nullptr);
}

MD4$2::MD4$2() {
}

$Class* MD4$2::load$($String* name, bool initialize) {
	$loadClass(MD4$2, name, initialize, &_MD4$2_ClassInfo_, allocate$MD4$2);
	return class$;
}

$Class* MD4$2::class$ = nullptr;

		} // provider
	} // security
} // sun