#include <sun/security/provider/NativePRNG$Blocking.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/SecureRandomSpi.h>
#include <sun/security/provider/NativePRNG$RandomIO.h>
#include <sun/security/provider/NativePRNG$Variant.h>
#include <sun/security/provider/NativePRNG.h>
#include <jcpp.h>

#undef BLOCKING
#undef INSTANCE

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

$FieldInfo _NativePRNG$Blocking_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NativePRNG$Blocking, serialVersionUID)},
	{"INSTANCE", "Lsun/security/provider/NativePRNG$RandomIO;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NativePRNG$Blocking, INSTANCE)},
	{}
};

$MethodInfo _NativePRNG$Blocking_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NativePRNG$Blocking::*)()>(&NativePRNG$Blocking::init$))},
	{"engineGenerateSeed", "(I)[B", nullptr, $PROTECTED},
	{"engineNextBytes", "([B)V", nullptr, $PROTECTED},
	{"engineSetSeed", "([B)V", nullptr, $PROTECTED},
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
	"java.security.SecureRandomSpi",
	nullptr,
	_NativePRNG$Blocking_FieldInfo_,
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

$NativePRNG$RandomIO* NativePRNG$Blocking::INSTANCE = nullptr;

bool NativePRNG$Blocking::isAvailable() {
	$init(NativePRNG$Blocking);
	return NativePRNG$Blocking::INSTANCE != nullptr;
}

void NativePRNG$Blocking::init$() {
	$SecureRandomSpi::init$();
	if (NativePRNG$Blocking::INSTANCE == nullptr) {
		$throwNew($AssertionError, $of("NativePRNG$Blocking not available"_s));
	}
}

void NativePRNG$Blocking::engineSetSeed($bytes* seed) {
	$nc(NativePRNG$Blocking::INSTANCE)->implSetSeed(seed);
}

void NativePRNG$Blocking::engineNextBytes($bytes* bytes) {
	$nc(NativePRNG$Blocking::INSTANCE)->implNextBytes(bytes);
}

$bytes* NativePRNG$Blocking::engineGenerateSeed(int32_t numBytes) {
	return $nc(NativePRNG$Blocking::INSTANCE)->implGenerateSeed(numBytes);
}

void clinit$NativePRNG$Blocking($Class* class$) {
	$init($NativePRNG$Variant);
	$assignStatic(NativePRNG$Blocking::INSTANCE, $NativePRNG::initIO($NativePRNG$Variant::BLOCKING));
}

NativePRNG$Blocking::NativePRNG$Blocking() {
}

$Class* NativePRNG$Blocking::load$($String* name, bool initialize) {
	$loadClass(NativePRNG$Blocking, name, initialize, &_NativePRNG$Blocking_ClassInfo_, clinit$NativePRNG$Blocking, allocate$NativePRNG$Blocking);
	return class$;
}

$Class* NativePRNG$Blocking::class$ = nullptr;

		} // provider
	} // security
} // sun