#include <sun/security/provider/SeedGenerator.h>
#include <java/io/IOException.h>
#include <java/lang/InternalError.h>
#include <java/net/NetworkInterface.h>
#include <java/security/AccessController.h>
#include <java/security/MessageDigest.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/util/Enumeration.h>
#include <sun/security/provider/NativeSeedGenerator.h>
#include <sun/security/provider/SeedGenerator$1.h>
#include <sun/security/provider/SeedGenerator$ThreadedSeedGenerator.h>
#include <sun/security/provider/SeedGenerator$URLSeedGenerator.h>
#include <sun/security/provider/SunEntries.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

#undef URL_DEV_RANDOM
#undef URL_DEV_URANDOM

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NetworkInterface = ::java::net::NetworkInterface;
using $AccessController = ::java::security::AccessController;
using $MessageDigest = ::java::security::MessageDigest;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $Enumeration = ::java::util::Enumeration;
using $NativeSeedGenerator = ::sun::security::provider::NativeSeedGenerator;
using $SeedGenerator$1 = ::sun::security::provider::SeedGenerator$1;
using $SeedGenerator$ThreadedSeedGenerator = ::sun::security::provider::SeedGenerator$ThreadedSeedGenerator;
using $SeedGenerator$URLSeedGenerator = ::sun::security::provider::SeedGenerator$URLSeedGenerator;
using $SunEntries = ::sun::security::provider::SunEntries;
using $Debug = ::sun::security::util::Debug;

namespace sun {
	namespace security {
		namespace provider {

SeedGenerator* SeedGenerator::instance = nullptr;
$Debug* SeedGenerator::debug = nullptr;

void SeedGenerator::init$() {
}

void SeedGenerator::generateSeed($bytes* result) {
	$init(SeedGenerator);
	$nc(SeedGenerator::instance)->getSeedBytes(result);
}

$bytes* SeedGenerator::getSystemEntropy() {
	$init(SeedGenerator);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($MessageDigest, md, nullptr);
	try {
		$assign(md, $MessageDigest::getInstance("SHA"_s));
	} catch ($NoSuchAlgorithmException& nsae) {
		$throwNew($InternalError, "internal error: SHA-1 not available."_s, nsae);
	}
	int8_t b = (int8_t)$System::currentTimeMillis();
	$nc(md)->update(b);
	$AccessController::doPrivileged($$new($SeedGenerator$1, md));
	return md->digest();
}

void SeedGenerator::addNetworkAdapterInfo($MessageDigest* md) {
	$init(SeedGenerator);
	$useLocalObjectStack();
	try {
		$var($Enumeration, ifcs, $NetworkInterface::getNetworkInterfaces());
		while ($nc(ifcs)->hasMoreElements()) {
			$var($NetworkInterface, ifc, $cast($NetworkInterface, ifcs->nextElement()));
			$nc(md)->update($($$nc($nc(ifc)->toString())->getBytes()));
			if (!ifc->isVirtual()) {
				$var($bytes, bs, ifc->getHardwareAddress());
				if (bs != nullptr) {
					md->update(bs);
					break;
				}
			}
		}
	} catch ($Exception& ignore) {
	}
}

$bytes* SeedGenerator::longToByteArray(int64_t l) {
	$init(SeedGenerator);
	$var($bytes, retVal, $new($bytes, 8));
	for (int32_t i = 0; i < 8; ++i) {
		retVal->set(i, (int8_t)l);
		l >>= 8;
	}
	return retVal;
}

void SeedGenerator::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(SeedGenerator::debug, $Debug::getInstance("provider"_s));
	{
		$var($String, egdSource, $SunEntries::getSeedSource());
		bool var$0 = $nc(egdSource)->equals($SunEntries::URL_DEV_RANDOM);
		if (var$0 || egdSource->equals($SunEntries::URL_DEV_URANDOM)) {
			try {
				$assignStatic(SeedGenerator::instance, $new($NativeSeedGenerator, egdSource));
				if (SeedGenerator::debug != nullptr) {
					SeedGenerator::debug->println($$str({"Using operating system seed generator"_s, egdSource}));
				}
			} catch ($IOException& e) {
				if (SeedGenerator::debug != nullptr) {
					SeedGenerator::debug->println($$str({"Failed to use operating system seed generator: "_s, $(e->toString())}));
				}
			}
		} else if (!egdSource->isEmpty()) {
			try {
				$assignStatic(SeedGenerator::instance, $new($SeedGenerator$URLSeedGenerator, egdSource));
				if (SeedGenerator::debug != nullptr) {
					SeedGenerator::debug->println($$str({"Using URL seed generator reading from "_s, egdSource}));
				}
			} catch ($IOException& e) {
				if (SeedGenerator::debug != nullptr) {
					SeedGenerator::debug->println($$str({"Failed to create seed generator with "_s, egdSource, ": "_s, $(e->toString())}));
				}
			}
		}
		if (SeedGenerator::instance == nullptr) {
			if (SeedGenerator::debug != nullptr) {
				SeedGenerator::debug->println("Using default threaded seed generator"_s);
			}
			$assignStatic(SeedGenerator::instance, $new($SeedGenerator$ThreadedSeedGenerator));
		}
	}
}

SeedGenerator::SeedGenerator() {
}

$Class* SeedGenerator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Lsun/security/provider/SeedGenerator;", nullptr, $PRIVATE | $STATIC, $staticField(SeedGenerator, instance)},
		{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SeedGenerator, debug)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SeedGenerator, init$, void)},
		{"addNetworkAdapterInfo", "(Ljava/security/MessageDigest;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(SeedGenerator, addNetworkAdapterInfo, void, $MessageDigest*)},
		{"generateSeed", "([B)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SeedGenerator, generateSeed, void, $bytes*)},
		{"getSeedBytes", "([B)V", nullptr, $ABSTRACT, $virtualMethod(SeedGenerator, getSeedBytes, void, $bytes*)},
		{"getSystemEntropy", "()[B", nullptr, $STATIC, $staticMethod(SeedGenerator, getSystemEntropy, $bytes*)},
		{"longToByteArray", "(J)[B", nullptr, $PRIVATE | $STATIC, $staticMethod(SeedGenerator, longToByteArray, $bytes*, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.SeedGenerator$URLSeedGenerator", "sun.security.provider.SeedGenerator", "URLSeedGenerator", $STATIC},
		{"sun.security.provider.SeedGenerator$ThreadedSeedGenerator", "sun.security.provider.SeedGenerator", "ThreadedSeedGenerator", $PRIVATE | $STATIC},
		{"sun.security.provider.SeedGenerator$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"sun.security.provider.SeedGenerator",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.provider.SeedGenerator$URLSeedGenerator,sun.security.provider.SeedGenerator$URLSeedGenerator$1,sun.security.provider.SeedGenerator$ThreadedSeedGenerator,sun.security.provider.SeedGenerator$ThreadedSeedGenerator$BogusThread,sun.security.provider.SeedGenerator$ThreadedSeedGenerator$1,sun.security.provider.SeedGenerator$1"
	};
	$loadClass(SeedGenerator, name, initialize, &classInfo$$, SeedGenerator::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SeedGenerator);
	});
	return class$;
}

$Class* SeedGenerator::class$ = nullptr;

		} // provider
	} // security
} // sun