#include <java/util/jar/JarVerifier$VerifierCodeSource.h>
#include <java/net/URL.h>
#include <java/security/CodeSigner.h>
#include <java/security/CodeSource.h>
#include <java/security/cert/Certificate.h>
#include <java/util/jar/JarVerifier.h>
#include <jcpp.h>

using $CodeSignerArray = $Array<::java::security::CodeSigner>;
using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $CodeSource = ::java::security::CodeSource;

namespace java {
	namespace util {
		namespace jar {

void JarVerifier$VerifierCodeSource::init$(Object$* csdomain, $URL* location, $CodeSignerArray* signers) {
	$CodeSource::init$(location, signers);
	$set(this, csdomain, csdomain);
	$set(this, vlocation, location);
	$set(this, vsigners, signers);
}

void JarVerifier$VerifierCodeSource::init$(Object$* csdomain, $URL* location, $CertificateArray* certs) {
	$CodeSource::init$(location, certs);
	$set(this, csdomain, csdomain);
	$set(this, vlocation, location);
	$set(this, vcerts, certs);
}

bool JarVerifier$VerifierCodeSource::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	{
		$var(JarVerifier$VerifierCodeSource, that, nullptr);
		bool var$0 = $instanceOf(JarVerifier$VerifierCodeSource, obj);
		if (var$0) {
			$assign(that, $cast(JarVerifier$VerifierCodeSource, obj));
			var$0 = true;
		}
		if (var$0) {
			if (isSameDomain($nc(that)->csdomain)) {
				if (that->vsigners != this->vsigners || that->vcerts != this->vcerts) {
					return false;
				}
				if (that->vlocation != nullptr) {
					return that->vlocation->equals(this->vlocation);
				} else if (this->vlocation != nullptr) {
					return this->vlocation->equals(that->vlocation);
				} else {
					return true;
				}
			}
		}
	}
	return $CodeSource::equals(obj);
}

bool JarVerifier$VerifierCodeSource::isSameDomain(Object$* csdomain) {
	return $equals(this->csdomain, csdomain);
}

$CodeSignerArray* JarVerifier$VerifierCodeSource::getPrivateSigners() {
	return this->vsigners;
}

$CertificateArray* JarVerifier$VerifierCodeSource::getPrivateCertificates() {
	return this->vcerts;
}

JarVerifier$VerifierCodeSource::JarVerifier$VerifierCodeSource() {
}

$Class* JarVerifier$VerifierCodeSource::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JarVerifier$VerifierCodeSource, serialVersionUID)},
		{"vlocation", "Ljava/net/URL;", nullptr, 0, $field(JarVerifier$VerifierCodeSource, vlocation)},
		{"vsigners", "[Ljava/security/CodeSigner;", nullptr, 0, $field(JarVerifier$VerifierCodeSource, vsigners)},
		{"vcerts", "[Ljava/security/cert/Certificate;", nullptr, 0, $field(JarVerifier$VerifierCodeSource, vcerts)},
		{"csdomain", "Ljava/lang/Object;", nullptr, 0, $field(JarVerifier$VerifierCodeSource, csdomain)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/net/URL;[Ljava/security/CodeSigner;)V", nullptr, 0, $method(JarVerifier$VerifierCodeSource, init$, void, Object$*, $URL*, $CodeSignerArray*)},
		{"<init>", "(Ljava/lang/Object;Ljava/net/URL;[Ljava/security/cert/Certificate;)V", nullptr, 0, $method(JarVerifier$VerifierCodeSource, init$, void, Object$*, $URL*, $CertificateArray*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(JarVerifier$VerifierCodeSource, equals, bool, Object$*)},
		{"getPrivateCertificates", "()[Ljava/security/cert/Certificate;", nullptr, $PRIVATE, $method(JarVerifier$VerifierCodeSource, getPrivateCertificates, $CertificateArray*)},
		{"getPrivateSigners", "()[Ljava/security/CodeSigner;", nullptr, $PRIVATE, $method(JarVerifier$VerifierCodeSource, getPrivateSigners, $CodeSignerArray*)},
		{"isSameDomain", "(Ljava/lang/Object;)Z", nullptr, 0, $virtualMethod(JarVerifier$VerifierCodeSource, isSameDomain, bool, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.jar.JarVerifier$VerifierCodeSource", "java.util.jar.JarVerifier", "VerifierCodeSource", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.jar.JarVerifier$VerifierCodeSource",
		"java.security.CodeSource",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.jar.JarVerifier"
	};
	$loadClass(JarVerifier$VerifierCodeSource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JarVerifier$VerifierCodeSource);
	});
	return class$;
}

$Class* JarVerifier$VerifierCodeSource::class$ = nullptr;

		} // jar
	} // util
} // java