#include <sun/security/provider/NativePRNG.h>

#include <java/lang/AssertionError.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/SecureRandomSpi.h>
#include <sun/security/provider/NativePRNG$1.h>
#include <sun/security/provider/NativePRNG$RandomIO.h>
#include <sun/security/provider/NativePRNG$Variant.h>
#include <sun/security/provider/SunEntries.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

#undef INSTANCE
#undef MIXED
#undef NAME_RANDOM
#undef NAME_URANDOM

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $SecureRandomSpi = ::java::security::SecureRandomSpi;
using $NativePRNG$1 = ::sun::security::provider::NativePRNG$1;
using $NativePRNG$RandomIO = ::sun::security::provider::NativePRNG$RandomIO;
using $NativePRNG$Variant = ::sun::security::provider::NativePRNG$Variant;
using $SunEntries = ::sun::security::provider::SunEntries;
using $Debug = ::sun::security::util::Debug;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _NativePRNG_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NativePRNG, serialVersionUID)},
	{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NativePRNG, debug)},
	{"NAME_RANDOM", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NativePRNG, NAME_RANDOM)},
	{"NAME_URANDOM", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NativePRNG, NAME_URANDOM)},
	{"INSTANCE", "Lsun/security/provider/NativePRNG$RandomIO;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NativePRNG, INSTANCE)},
	{}
};

$MethodInfo _NativePRNG_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NativePRNG::*)()>(&NativePRNG::init$))},
	{"engineGenerateSeed", "(I)[B", nullptr, $PROTECTED},
	{"engineNextBytes", "([B)V", nullptr, $PROTECTED},
	{"engineSetSeed", "([B)V", nullptr, $PROTECTED},
	{"getEgdUrl", "()Ljava/net/URL;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$URL*(*)()>(&NativePRNG::getEgdUrl))},
	{"initIO", "(Lsun/security/provider/NativePRNG$Variant;)Lsun/security/provider/NativePRNG$RandomIO;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$NativePRNG$RandomIO*(*)($NativePRNG$Variant*)>(&NativePRNG::initIO))},
	{"isAvailable", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&NativePRNG::isAvailable))},
	{}
};

$InnerClassInfo _NativePRNG_InnerClassesInfo_[] = {
	{"sun.security.provider.NativePRNG$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"sun.security.provider.NativePRNG$RandomIO", "sun.security.provider.NativePRNG", "RandomIO", $PRIVATE | $STATIC},
	{"sun.security.provider.NativePRNG$NonBlocking", "sun.security.provider.NativePRNG", "NonBlocking", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.provider.NativePRNG$Blocking", "sun.security.provider.NativePRNG", "Blocking", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.provider.NativePRNG$Variant", "sun.security.provider.NativePRNG", "Variant", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{"sun.security.provider.NativePRNG$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NativePRNG_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.NativePRNG",
	"java.security.SecureRandomSpi",
	nullptr,
	_NativePRNG_FieldInfo_,
	_NativePRNG_MethodInfo_,
	nullptr,
	nullptr,
	_NativePRNG_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.provider.NativePRNG$2,sun.security.provider.NativePRNG$RandomIO,sun.security.provider.NativePRNG$RandomIO$1,sun.security.provider.NativePRNG$NonBlocking,sun.security.provider.NativePRNG$Blocking,sun.security.provider.NativePRNG$Variant,sun.security.provider.NativePRNG$1"
};

$Object* allocate$NativePRNG($Class* clazz) {
	return $of($alloc(NativePRNG));
}

$Debug* NativePRNG::debug = nullptr;
$String* NativePRNG::NAME_RANDOM = nullptr;
$String* NativePRNG::NAME_URANDOM = nullptr;
$NativePRNG$RandomIO* NativePRNG::INSTANCE = nullptr;

$URL* NativePRNG::getEgdUrl() {
	$init(NativePRNG);
	$useLocalCurrentObjectStackCache();
	$var($String, egdSource, $SunEntries::getSeedSource());
	$var($URL, egdUrl, nullptr);
	if ($nc(egdSource)->length() != 0) {
		if (NativePRNG::debug != nullptr) {
			$nc(NativePRNG::debug)->println($$str({"NativePRNG egdUrl: "_s, egdSource}));
		}
		try {
			$assign(egdUrl, $new($URL, egdSource));
			if (!$nc($(egdUrl->getProtocol()))->equalsIgnoreCase("file"_s)) {
				return nullptr;
			}
		} catch ($MalformedURLException& e) {
			return nullptr;
		}
	} else {
		$assign(egdUrl, nullptr);
	}
	return egdUrl;
}

$NativePRNG$RandomIO* NativePRNG::initIO($NativePRNG$Variant* v) {
	$init(NativePRNG);
	$beforeCallerSensitive();
	return $cast($NativePRNG$RandomIO, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($NativePRNG$1, v))));
}

bool NativePRNG::isAvailable() {
	$init(NativePRNG);
	return NativePRNG::INSTANCE != nullptr;
}

void NativePRNG::init$() {
	$SecureRandomSpi::init$();
	if (NativePRNG::INSTANCE == nullptr) {
		$throwNew($AssertionError, $of("NativePRNG not available"_s));
	}
}

void NativePRNG::engineSetSeed($bytes* seed) {
	$nc(NativePRNG::INSTANCE)->implSetSeed(seed);
}

void NativePRNG::engineNextBytes($bytes* bytes) {
	$nc(NativePRNG::INSTANCE)->implNextBytes(bytes);
}

$bytes* NativePRNG::engineGenerateSeed(int32_t numBytes) {
	return $nc(NativePRNG::INSTANCE)->implGenerateSeed(numBytes);
}

void clinit$NativePRNG($Class* class$) {
	$assignStatic(NativePRNG::NAME_RANDOM, "/dev/random"_s);
	$assignStatic(NativePRNG::NAME_URANDOM, "/dev/urandom"_s);
	$assignStatic(NativePRNG::debug, $Debug::getInstance("provider"_s));
	$init($NativePRNG$Variant);
	$assignStatic(NativePRNG::INSTANCE, NativePRNG::initIO($NativePRNG$Variant::MIXED));
}

NativePRNG::NativePRNG() {
}

$Class* NativePRNG::load$($String* name, bool initialize) {
	$loadClass(NativePRNG, name, initialize, &_NativePRNG_ClassInfo_, clinit$NativePRNG, allocate$NativePRNG);
	return class$;
}

$Class* NativePRNG::class$ = nullptr;

		} // provider
	} // security
} // sun