#include <sun/security/provider/NativePRNG$NonBlocking.h>

#include <java/lang/AssertionError.h>
#include <java/security/SecureRandomSpi.h>
#include <sun/security/provider/NativePRNG$RandomIO.h>
#include <sun/security/provider/NativePRNG$Variant.h>
#include <sun/security/provider/NativePRNG.h>
#include <jcpp.h>

#undef INSTANCE
#undef NONBLOCKING

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecureRandomSpi = ::java::security::SecureRandomSpi;
using $NativePRNG = ::sun::security::provider::NativePRNG;
using $NativePRNG$RandomIO = ::sun::security::provider::NativePRNG$RandomIO;
using $NativePRNG$Variant = ::sun::security::provider::NativePRNG$Variant;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _NativePRNG$NonBlocking_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NativePRNG$NonBlocking, serialVersionUID)},
	{"INSTANCE", "Lsun/security/provider/NativePRNG$RandomIO;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NativePRNG$NonBlocking, INSTANCE)},
	{}
};

$MethodInfo _NativePRNG$NonBlocking_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NativePRNG$NonBlocking::*)()>(&NativePRNG$NonBlocking::init$))},
	{"engineGenerateSeed", "(I)[B", nullptr, $PROTECTED},
	{"engineNextBytes", "([B)V", nullptr, $PROTECTED},
	{"engineSetSeed", "([B)V", nullptr, $PROTECTED},
	{"isAvailable", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&NativePRNG$NonBlocking::isAvailable))},
	{}
};

$InnerClassInfo _NativePRNG$NonBlocking_InnerClassesInfo_[] = {
	{"sun.security.provider.NativePRNG$NonBlocking", "sun.security.provider.NativePRNG", "NonBlocking", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _NativePRNG$NonBlocking_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.NativePRNG$NonBlocking",
	"java.security.SecureRandomSpi",
	nullptr,
	_NativePRNG$NonBlocking_FieldInfo_,
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

$NativePRNG$RandomIO* NativePRNG$NonBlocking::INSTANCE = nullptr;

bool NativePRNG$NonBlocking::isAvailable() {
	$init(NativePRNG$NonBlocking);
	return NativePRNG$NonBlocking::INSTANCE != nullptr;
}

void NativePRNG$NonBlocking::init$() {
	$SecureRandomSpi::init$();
	if (NativePRNG$NonBlocking::INSTANCE == nullptr) {
		$throwNew($AssertionError, $of("NativePRNG$NonBlocking not available"_s));
	}
}

void NativePRNG$NonBlocking::engineSetSeed($bytes* seed) {
	$nc(NativePRNG$NonBlocking::INSTANCE)->implSetSeed(seed);
}

void NativePRNG$NonBlocking::engineNextBytes($bytes* bytes) {
	$nc(NativePRNG$NonBlocking::INSTANCE)->implNextBytes(bytes);
}

$bytes* NativePRNG$NonBlocking::engineGenerateSeed(int32_t numBytes) {
	return $nc(NativePRNG$NonBlocking::INSTANCE)->implGenerateSeed(numBytes);
}

void clinit$NativePRNG$NonBlocking($Class* class$) {
	$init($NativePRNG$Variant);
	$assignStatic(NativePRNG$NonBlocking::INSTANCE, $NativePRNG::initIO($NativePRNG$Variant::NONBLOCKING));
}

NativePRNG$NonBlocking::NativePRNG$NonBlocking() {
}

$Class* NativePRNG$NonBlocking::load$($String* name, bool initialize) {
	$loadClass(NativePRNG$NonBlocking, name, initialize, &_NativePRNG$NonBlocking_ClassInfo_, clinit$NativePRNG$NonBlocking, allocate$NativePRNG$NonBlocking);
	return class$;
}

$Class* NativePRNG$NonBlocking::class$ = nullptr;

		} // provider
	} // security
} // sun