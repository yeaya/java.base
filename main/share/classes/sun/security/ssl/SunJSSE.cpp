#include <sun/security/ssl/SunJSSE.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <sun/security/util/SecurityConstants.h>
#include <jcpp.h>

#undef PROVIDER_VER

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace sun {
	namespace security {
		namespace ssl {

class SunJSSE$$Lambda$lambda$registerAlgorithms$0 : public $PrivilegedAction {
	$class(SunJSSE$$Lambda$lambda$registerAlgorithms$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(SunJSSE* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $nc(inst$)->lambda$registerAlgorithms$0();
	}
	SunJSSE* inst$ = nullptr;
};
$Class* SunJSSE$$Lambda$lambda$registerAlgorithms$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SunJSSE$$Lambda$lambda$registerAlgorithms$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/ssl/SunJSSE;)V", nullptr, $PUBLIC, $method(SunJSSE$$Lambda$lambda$registerAlgorithms$0, init$, void, SunJSSE*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SunJSSE$$Lambda$lambda$registerAlgorithms$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.security.ssl.SunJSSE$$Lambda$lambda$registerAlgorithms$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SunJSSE$$Lambda$lambda$registerAlgorithms$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunJSSE$$Lambda$lambda$registerAlgorithms$0);
	});
	return class$;
}
$Class* SunJSSE$$Lambda$lambda$registerAlgorithms$0::class$ = nullptr;

$String* SunJSSE::info = nullptr;

void SunJSSE::init$() {
	$init($SecurityConstants);
	$Provider::init$("SunJSSE"_s, $SecurityConstants::PROVIDER_VER, SunJSSE::info);
	registerAlgorithms();
}

void SunJSSE::registerAlgorithms() {
	$beforeCallerSensitive();
	$AccessController::doPrivileged($cast($PrivilegedAction, $$new(SunJSSE$$Lambda$lambda$registerAlgorithms$0, this)));
}

void SunJSSE::ps($String* type, $String* algo, $String* cn, $List* a, $HashMap* attrs) {
	putService($$new($Provider$Service, this, type, algo, cn, a, attrs));
}

void SunJSSE::doRegister() {
	$useLocalObjectStack();
	ps("Signature"_s, "MD5andSHA1withRSA"_s, "sun.security.ssl.RSASignature"_s, nullptr, nullptr);
	ps("KeyManagerFactory"_s, "SunX509"_s, "sun.security.ssl.KeyManagerFactoryImpl$SunX509"_s, nullptr, nullptr);
	ps("KeyManagerFactory"_s, "NewSunX509"_s, "sun.security.ssl.KeyManagerFactoryImpl$X509"_s, $($List::of("PKIX"_s)), nullptr);
	ps("TrustManagerFactory"_s, "SunX509"_s, "sun.security.ssl.TrustManagerFactoryImpl$SimpleFactory"_s, nullptr, nullptr);
	ps("TrustManagerFactory"_s, "PKIX"_s, "sun.security.ssl.TrustManagerFactoryImpl$PKIXFactory"_s, $($List::of("SunPKIX"_s, "X509"_s, "X.509"_s)), nullptr);
	ps("SSLContext"_s, "TLSv1"_s, "sun.security.ssl.SSLContextImpl$TLS10Context"_s, $($List::of("SSLv3"_s)), nullptr);
	ps("SSLContext"_s, "TLSv1.1"_s, "sun.security.ssl.SSLContextImpl$TLS11Context"_s, nullptr, nullptr);
	ps("SSLContext"_s, "TLSv1.2"_s, "sun.security.ssl.SSLContextImpl$TLS12Context"_s, nullptr, nullptr);
	ps("SSLContext"_s, "TLSv1.3"_s, "sun.security.ssl.SSLContextImpl$TLS13Context"_s, nullptr, nullptr);
	ps("SSLContext"_s, "TLS"_s, "sun.security.ssl.SSLContextImpl$TLSContext"_s, $($List::of("SSL"_s)), nullptr);
	ps("SSLContext"_s, "DTLSv1.0"_s, "sun.security.ssl.SSLContextImpl$DTLS10Context"_s, nullptr, nullptr);
	ps("SSLContext"_s, "DTLSv1.2"_s, "sun.security.ssl.SSLContextImpl$DTLS12Context"_s, nullptr, nullptr);
	ps("SSLContext"_s, "DTLS"_s, "sun.security.ssl.SSLContextImpl$DTLSContext"_s, nullptr, nullptr);
	ps("SSLContext"_s, "Default"_s, "sun.security.ssl.SSLContextImpl$DefaultSSLContext"_s, nullptr, nullptr);
	ps("KeyStore"_s, "PKCS12"_s, "sun.security.pkcs12.PKCS12KeyStore"_s, nullptr, nullptr);
}

$Void* SunJSSE::lambda$registerAlgorithms$0() {
	doRegister();
	return nullptr;
}

SunJSSE::SunJSSE() {
}

void SunJSSE::clinit$($Class* clazz) {
	$assignStatic(SunJSSE::info, "Sun JSSE provider(PKCS12, SunX509/PKIX key/trust factories, SSLv3/TLSv1/TLSv1.1/TLSv1.2/TLSv1.3/DTLSv1.0/DTLSv1.2)"_s);
}

$Class* SunJSSE::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.security.ssl.SunJSSE$$Lambda$lambda$registerAlgorithms$0")) {
			return SunJSSE$$Lambda$lambda$registerAlgorithms$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SunJSSE, serialVersionUID)},
		{"info", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SunJSSE, info)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SunJSSE, init$, void)},
		{"doRegister", "()V", nullptr, $PRIVATE, $method(SunJSSE, doRegister, void)},
		{"lambda$registerAlgorithms$0", "()Ljava/lang/Void;", nullptr, $PRIVATE | $SYNTHETIC, $method(SunJSSE, lambda$registerAlgorithms$0, $Void*)},
		{"ps", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/util/HashMap;)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;)V", $PRIVATE, $method(SunJSSE, ps, void, $String*, $String*, $String*, $List*, $HashMap*)},
		{"registerAlgorithms", "()V", nullptr, $PRIVATE, $method(SunJSSE, registerAlgorithms, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.ssl.SunJSSE",
		"java.security.Provider",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SunJSSE, name, initialize, &classInfo$$, SunJSSE::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(SunJSSE));
	});
	return class$;
}

$Class* SunJSSE::class$ = nullptr;

		} // ssl
	} // security
} // sun