#include <sun/security/provider/NativePRNG.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace provider {

$MethodInfo _NativePRNG_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NativePRNG::*)()>(&NativePRNG::init$))},
	{"isAvailable", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&NativePRNG::isAvailable))},
	{}
};

$InnerClassInfo _NativePRNG_InnerClassesInfo_[] = {
	{"sun.security.provider.NativePRNG$Blocking", "sun.security.provider.NativePRNG", "Blocking", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.provider.NativePRNG$NonBlocking", "sun.security.provider.NativePRNG", "NonBlocking", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _NativePRNG_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.NativePRNG",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NativePRNG_MethodInfo_,
	nullptr,
	nullptr,
	_NativePRNG_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.provider.NativePRNG$Blocking,sun.security.provider.NativePRNG$NonBlocking"
};

$Object* allocate$NativePRNG($Class* clazz) {
	return $of($alloc(NativePRNG));
}

void NativePRNG::init$() {
}

bool NativePRNG::isAvailable() {
	return false;
}

NativePRNG::NativePRNG() {
}

$Class* NativePRNG::load$($String* name, bool initialize) {
	$loadClass(NativePRNG, name, initialize, &_NativePRNG_ClassInfo_, allocate$NativePRNG);
	return class$;
}

$Class* NativePRNG::class$ = nullptr;

		} // provider
	} // security
} // sun