#include <sun/security/provider/NativePRNG$Blocking.h>

#include <sun/security/provider/NativePRNG.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NativePRNG = ::sun::security::provider::NativePRNG;

namespace sun {
	namespace security {
		namespace provider {

$MethodInfo _NativePRNG$Blocking_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NativePRNG$Blocking::*)()>(&NativePRNG$Blocking::init$))},
	{"isAvailable", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&NativePRNG$Blocking::isAvailable))},
	{}
};

$InnerClassInfo _NativePRNG$Blocking_InnerClassesInfo_[] = {
	{"sun.security.provider.NativePRNG$Blocking", "sun.security.provider.NativePRNG", "Blocking", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _NativePRNG$Blocking_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.NativePRNG$Blocking",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NativePRNG$Blocking_MethodInfo_,
	nullptr,
	nullptr,
	_NativePRNG$Blocking_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.NativePRNG"
};

$Object* allocate$NativePRNG$Blocking($Class* clazz) {
	return $of($alloc(NativePRNG$Blocking));
}

void NativePRNG$Blocking::init$() {
}

bool NativePRNG$Blocking::isAvailable() {
	return false;
}

NativePRNG$Blocking::NativePRNG$Blocking() {
}

$Class* NativePRNG$Blocking::load$($String* name, bool initialize) {
	$loadClass(NativePRNG$Blocking, name, initialize, &_NativePRNG$Blocking_ClassInfo_, allocate$NativePRNG$Blocking);
	return class$;
}

$Class* NativePRNG$Blocking::class$ = nullptr;

		} // provider
	} // security
} // sun