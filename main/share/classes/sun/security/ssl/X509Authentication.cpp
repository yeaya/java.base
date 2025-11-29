#include <sun/security/ssl/X509Authentication.h>

#include <java/lang/Enum.h>
#include <java/util/AbstractMap$SimpleImmutableEntry.h>
#include <java/util/Map$Entry.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLPossession.h>
#include <sun/security/ssl/SSLPossessionGenerator.h>
#include <sun/security/ssl/SignatureScheme.h>
#include <sun/security/ssl/X509Authentication$X509PossessionGenerator.h>
#include <jcpp.h>

#undef CERTIFICATE
#undef CERTIFICATE_REQUEST
#undef DSA
#undef EC
#undef EDDSA
#undef RSA
#undef RSASSA_PSS
#undef RSA_OR_PSS

using $Map$EntryArray = $Array<::java::util::Map$Entry>;
using $SSLHandshakeArray = $Array<::sun::security::ssl::SSLHandshake>;
using $X509AuthenticationArray = $Array<::sun::security::ssl::X509Authentication>;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap$SimpleImmutableEntry = ::java::util::AbstractMap$SimpleImmutableEntry;
using $Map$Entry = ::java::util::Map$Entry;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLPossession = ::sun::security::ssl::SSLPossession;
using $SSLPossessionGenerator = ::sun::security::ssl::SSLPossessionGenerator;
using $SignatureScheme = ::sun::security::ssl::SignatureScheme;
using $X509Authentication$X509PossessionGenerator = ::sun::security::ssl::X509Authentication$X509PossessionGenerator;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _X509Authentication_FieldInfo_[] = {
	{"RSA", "Lsun/security/ssl/X509Authentication;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(X509Authentication, RSA)},
	{"RSASSA_PSS", "Lsun/security/ssl/X509Authentication;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(X509Authentication, RSASSA_PSS)},
	{"RSA_OR_PSS", "Lsun/security/ssl/X509Authentication;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(X509Authentication, RSA_OR_PSS)},
	{"DSA", "Lsun/security/ssl/X509Authentication;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(X509Authentication, DSA)},
	{"EC", "Lsun/security/ssl/X509Authentication;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(X509Authentication, EC)},
	{"EDDSA", "Lsun/security/ssl/X509Authentication;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(X509Authentication, EDDSA)},
	{"$VALUES", "[Lsun/security/ssl/X509Authentication;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(X509Authentication, $VALUES)},
	{"keyType", "Ljava/lang/String;", nullptr, $FINAL, $field(X509Authentication, keyType)},
	{"possessionGenerator", "Lsun/security/ssl/SSLPossessionGenerator;", nullptr, $FINAL, $field(X509Authentication, possessionGenerator)},
	{}
};

$MethodInfo _X509Authentication_MethodInfo_[] = {
	{"$values", "()[Lsun/security/ssl/X509Authentication;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$X509AuthenticationArray*(*)()>(&X509Authentication::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Lsun/security/ssl/SSLPossessionGenerator;)V", "(Ljava/lang/String;Lsun/security/ssl/SSLPossessionGenerator;)V", $PRIVATE, $method(static_cast<void(X509Authentication::*)($String*,int32_t,$String*,$SSLPossessionGenerator*)>(&X509Authentication::init$))},
	{"createPossession", "(Lsun/security/ssl/HandshakeContext;)Lsun/security/ssl/SSLPossession;", nullptr, $PUBLIC},
	{"getHandshakeProducers", "(Lsun/security/ssl/HandshakeContext;)[Ljava/util/Map$Entry;", "(Lsun/security/ssl/HandshakeContext;)[Ljava/util/Map$Entry<Ljava/lang/Byte;Lsun/security/ssl/HandshakeProducer;>;", $PUBLIC},
	{"getRelatedHandshakers", "(Lsun/security/ssl/HandshakeContext;)[Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/ssl/X509Authentication;", nullptr, $PUBLIC | $STATIC, $method(static_cast<X509Authentication*(*)($String*)>(&X509Authentication::valueOf))},
	{"valueOf", "(Lsun/security/ssl/SignatureScheme;)Lsun/security/ssl/X509Authentication;", nullptr, $STATIC, $method(static_cast<X509Authentication*(*)($SignatureScheme*)>(&X509Authentication::valueOf))},
	{"values", "()[Lsun/security/ssl/X509Authentication;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$X509AuthenticationArray*(*)()>(&X509Authentication::values))},
	{}
};

$InnerClassInfo _X509Authentication_InnerClassesInfo_[] = {
	{"sun.security.ssl.X509Authentication$X509PossessionGenerator", "sun.security.ssl.X509Authentication", "X509PossessionGenerator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.X509Authentication$X509Credentials", "sun.security.ssl.X509Authentication", "X509Credentials", $STATIC | $FINAL},
	{"sun.security.ssl.X509Authentication$X509Possession", "sun.security.ssl.X509Authentication", "X509Possession", $STATIC | $FINAL},
	{}
};

$ClassInfo _X509Authentication_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.ssl.X509Authentication",
	"java.lang.Enum",
	"sun.security.ssl.SSLAuthentication",
	_X509Authentication_FieldInfo_,
	_X509Authentication_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/ssl/X509Authentication;>;Lsun/security/ssl/SSLAuthentication;",
	nullptr,
	_X509Authentication_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.X509Authentication$X509PossessionGenerator,sun.security.ssl.X509Authentication$X509Credentials,sun.security.ssl.X509Authentication$X509Possession"
};

$Object* allocate$X509Authentication($Class* clazz) {
	return $of($alloc(X509Authentication));
}

$String* X509Authentication::toString() {
	 return this->$Enum::toString();
}

bool X509Authentication::equals(Object$* other) {
	 return this->$Enum::equals(other);
}

int32_t X509Authentication::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* X509Authentication::clone() {
	 return this->$Enum::clone();
}

void X509Authentication::finalize() {
	this->$Enum::finalize();
}

X509Authentication* X509Authentication::RSA = nullptr;
X509Authentication* X509Authentication::RSASSA_PSS = nullptr;
X509Authentication* X509Authentication::RSA_OR_PSS = nullptr;
X509Authentication* X509Authentication::DSA = nullptr;
X509Authentication* X509Authentication::EC = nullptr;
X509Authentication* X509Authentication::EDDSA = nullptr;
$X509AuthenticationArray* X509Authentication::$VALUES = nullptr;

$X509AuthenticationArray* X509Authentication::$values() {
	$init(X509Authentication);
	return $new($X509AuthenticationArray, {
		X509Authentication::RSA,
		X509Authentication::RSASSA_PSS,
		X509Authentication::RSA_OR_PSS,
		X509Authentication::DSA,
		X509Authentication::EC,
		X509Authentication::EDDSA
	});
}

$X509AuthenticationArray* X509Authentication::values() {
	$init(X509Authentication);
	return $cast($X509AuthenticationArray, X509Authentication::$VALUES->clone());
}

X509Authentication* X509Authentication::valueOf($String* name) {
	$init(X509Authentication);
	return $cast(X509Authentication, $Enum::valueOf(X509Authentication::class$, name));
}

void X509Authentication::init$($String* $enum$name, int32_t $enum$ordinal, $String* keyType, $SSLPossessionGenerator* possessionGenerator) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, keyType, keyType);
	$set(this, possessionGenerator, possessionGenerator);
}

X509Authentication* X509Authentication::valueOf($SignatureScheme* signatureScheme) {
	$init(X509Authentication);
	{
		$var($X509AuthenticationArray, arr$, X509Authentication::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			X509Authentication* au = arr$->get(i$);
			{
				if ($nc($nc(au)->keyType)->equals($nc(signatureScheme)->keyAlgorithm)) {
					return au;
				}
			}
		}
	}
	return nullptr;
}

$SSLPossession* X509Authentication::createPossession($HandshakeContext* handshakeContext) {
	return $nc(this->possessionGenerator)->createPossession(handshakeContext);
}

$SSLHandshakeArray* X509Authentication::getRelatedHandshakers($HandshakeContext* handshakeContext) {
	if (!$nc($nc(handshakeContext)->negotiatedProtocol)->useTLS13PlusSpec()) {
		$init($SSLHandshake);
		return $new($SSLHandshakeArray, {
			$SSLHandshake::CERTIFICATE,
			$SSLHandshake::CERTIFICATE_REQUEST
		});
	}
	return $new($SSLHandshakeArray, 0);
}

$Map$EntryArray* X509Authentication::getHandshakeProducers($HandshakeContext* handshakeContext) {
	$useLocalCurrentObjectStackCache();
	if (!$nc($nc(handshakeContext)->negotiatedProtocol)->useTLS13PlusSpec()) {
		$init($SSLHandshake);
		return ($new($Map$EntryArray, {static_cast<$Map$Entry*>($$new($AbstractMap$SimpleImmutableEntry, $($Byte::valueOf($SSLHandshake::CERTIFICATE->id)), $SSLHandshake::CERTIFICATE))}));
	}
	return ($new($Map$EntryArray, 0));
}

void clinit$X509Authentication($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(X509Authentication::RSA, $new(X509Authentication, "RSA"_s, 0, "RSA"_s, $$new($X509Authentication$X509PossessionGenerator, $$new($StringArray, {"RSA"_s}))));
	$assignStatic(X509Authentication::RSASSA_PSS, $new(X509Authentication, "RSASSA_PSS"_s, 1, "RSASSA-PSS"_s, $$new($X509Authentication$X509PossessionGenerator, $$new($StringArray, {"RSASSA-PSS"_s}))));
	$assignStatic(X509Authentication::RSA_OR_PSS, $new(X509Authentication, "RSA_OR_PSS"_s, 2, "RSA_OR_PSS"_s, $$new($X509Authentication$X509PossessionGenerator, $$new($StringArray, {
		"RSA"_s,
		"RSASSA-PSS"_s
	}))));
	$assignStatic(X509Authentication::DSA, $new(X509Authentication, "DSA"_s, 3, "DSA"_s, $$new($X509Authentication$X509PossessionGenerator, $$new($StringArray, {"DSA"_s}))));
	$assignStatic(X509Authentication::EC, $new(X509Authentication, "EC"_s, 4, "EC"_s, $$new($X509Authentication$X509PossessionGenerator, $$new($StringArray, {"EC"_s}))));
	$assignStatic(X509Authentication::EDDSA, $new(X509Authentication, "EDDSA"_s, 5, "EdDSA"_s, $$new($X509Authentication$X509PossessionGenerator, $$new($StringArray, {"EdDSA"_s}))));
	$assignStatic(X509Authentication::$VALUES, X509Authentication::$values());
}

X509Authentication::X509Authentication() {
}

$Class* X509Authentication::load$($String* name, bool initialize) {
	$loadClass(X509Authentication, name, initialize, &_X509Authentication_ClassInfo_, clinit$X509Authentication, allocate$X509Authentication);
	return class$;
}

$Class* X509Authentication::class$ = nullptr;

		} // ssl
	} // security
} // sun