#include <sun/security/ssl/Finished$T12VerifyDataGenerator.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/ProviderException.h>
#include <javax/crypto/KeyGenerator.h>
#include <javax/crypto/SecretKey.h>
#include <sun/security/internal/spec/TlsPrfParameterSpec.h>
#include <sun/security/ssl/CipherSuite$HashAlg.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/Finished.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $ProviderException = ::java::security::ProviderException;
using $KeyGenerator = ::javax::crypto::KeyGenerator;
using $SecretKey = ::javax::crypto::SecretKey;
using $TlsPrfParameterSpec = ::sun::security::internal::spec::TlsPrfParameterSpec;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $CipherSuite$HashAlg = ::sun::security::ssl::CipherSuite$HashAlg;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeHash = ::sun::security::ssl::HandshakeHash;

namespace sun {
	namespace security {
		namespace ssl {

void Finished$T12VerifyDataGenerator::init$() {
}

$bytes* Finished$T12VerifyDataGenerator::createVerifyData($HandshakeContext* context, bool isValidation) {
	$useLocalObjectStack();
	$CipherSuite* cipherSuite = $nc(context)->negotiatedCipherSuite;
	$var($HandshakeHash, handshakeHash, context->handshakeHash);
	$var($SecretKey, masterSecretKey, $nc(context->handshakeSession)->getMasterSecret());
	bool useClientLabel = ($nc(context->sslConfig)->isClientMode && !isValidation) || (!context->sslConfig->isClientMode && isValidation);
	$var($String, tlsLabel, nullptr);
	if (useClientLabel) {
		$assign(tlsLabel, "client finished"_s);
	} else {
		$assign(tlsLabel, "server finished"_s);
	}
	try {
		$var($bytes, seed, $nc(handshakeHash)->digest());
		$var($String, prfAlg, "SunTls12Prf"_s);
		$CipherSuite$HashAlg* hashAlg = $nc(cipherSuite)->hashAlg;
		$var($TlsPrfParameterSpec, spec, $new($TlsPrfParameterSpec, masterSecretKey, tlsLabel, seed, 12, $nc(hashAlg)->name$, $nc(hashAlg)->hashLength, $nc(hashAlg)->blockSize));
		$var($KeyGenerator, kg, $KeyGenerator::getInstance(prfAlg));
		$nc(kg)->init(spec);
		$var($SecretKey, prfKey, kg->generateKey());
		if (!"RAW"_s->equals($($nc(prfKey)->getFormat()))) {
			$throwNew($ProviderException, $$str({"Invalid PRF output, format must be RAW. Format received: "_s, $(prfKey->getFormat())}));
		}
		return prfKey->getEncoded();
	} catch ($GeneralSecurityException& e) {
		$throwNew($RuntimeException, "PRF failed"_s, e);
	}
	$shouldNotReachHere();
}

Finished$T12VerifyDataGenerator::Finished$T12VerifyDataGenerator() {
}

$Class* Finished$T12VerifyDataGenerator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Finished$T12VerifyDataGenerator, init$, void)},
		{"createVerifyData", "(Lsun/security/ssl/HandshakeContext;Z)[B", nullptr, $PUBLIC, $virtualMethod(Finished$T12VerifyDataGenerator, createVerifyData, $bytes*, $HandshakeContext*, bool), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.Finished$T12VerifyDataGenerator", "sun.security.ssl.Finished", "T12VerifyDataGenerator", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.Finished$VerifyDataGenerator", "sun.security.ssl.Finished", "VerifyDataGenerator", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.Finished$T12VerifyDataGenerator",
		"java.lang.Object",
		"sun.security.ssl.Finished$VerifyDataGenerator",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.Finished"
	};
	$loadClass(Finished$T12VerifyDataGenerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Finished$T12VerifyDataGenerator);
	});
	return class$;
}

$Class* Finished$T12VerifyDataGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun