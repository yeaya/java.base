#include <sun/security/provider/NativePRNG$NonBlocking.h>

#include <sun/security/provider/NativePRNG.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace provider {

$MethodInfo _NativePRNG$NonBlocking_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(NativePRNG$NonBlocking, init$, void)},
	{"isAvailable", "()Z", nullptr, $STATIC, $staticMethod(NativePRNG$NonBlocking, isAvailable, bool)},
	{}
};

$InnerClassInfo _NativePRNG$NonBlocking_InnerClassesInfo_[] = {
	{"sun.security.provider.NativePRNG$NonBlocking", "sun.security.provider.NativePRNG", "NonBlocking", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _NativePRNG$NonBlocking_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.NativePRNG$NonBlocking",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NativePRNG$NonBlocking_MethodInfo_,
	nullptr,
	nullptr,
	_NativePRNG$NonBlocking_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.NativePRNG"
};

$Object* allocate$NativePRNG$NonBlocking($Class* clazz) {
	return $of($alloc(NativePRNG$NonBlocking));
}

void NativePRNG$NonBlocking::init$() {
}

bool NativePRNG$NonBlocking::isAvailable() {
	return false;
}

NativePRNG$NonBlocking::NativePRNG$NonBlocking() {
}

$Class* NativePRNG$NonBlocking::load$($String* name, bool initialize) {
	$loadClass(NativePRNG$NonBlocking, name, initialize, &_NativePRNG$NonBlocking_ClassInfo_, allocate$NativePRNG$NonBlocking);
	return class$;
}

$Class* NativePRNG$NonBlocking::class$ = nullptr;

		} // provider
	} // security
} // sun