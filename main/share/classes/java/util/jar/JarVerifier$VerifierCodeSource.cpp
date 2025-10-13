#include <java/util/jar/JarVerifier$VerifierCodeSource.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $CodeSigner = ::java::security::CodeSigner;
using $CodeSource = ::java::security::CodeSource;
using $Certificate = ::java::security::cert::Certificate;
using $JarVerifier = ::java::util::jar::JarVerifier;

namespace java {
	namespace util {
		namespace jar {

$FieldInfo _JarVerifier$VerifierCodeSource_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JarVerifier$VerifierCodeSource, serialVersionUID)},
	{"vlocation", "Ljava/net/URL;", nullptr, 0, $field(JarVerifier$VerifierCodeSource, vlocation)},
	{"vsigners", "[Ljava/security/CodeSigner;", nullptr, 0, $field(JarVerifier$VerifierCodeSource, vsigners)},
	{"vcerts", "[Ljava/security/cert/Certificate;", nullptr, 0, $field(JarVerifier$VerifierCodeSource, vcerts)},
	{"csdomain", "Ljava/lang/Object;", nullptr, 0, $field(JarVerifier$VerifierCodeSource, csdomain)},
	{}
};

$MethodInfo _JarVerifier$VerifierCodeSource_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/net/URL;[Ljava/security/CodeSigner;)V", nullptr, 0, $method(static_cast<void(JarVerifier$VerifierCodeSource::*)(Object$*,$URL*,$CodeSignerArray*)>(&JarVerifier$VerifierCodeSource::init$))},
	{"<init>", "(Ljava/lang/Object;Ljava/net/URL;[Ljava/security/cert/Certificate;)V", nullptr, 0, $method(static_cast<void(JarVerifier$VerifierCodeSource::*)(Object$*,$URL*,$CertificateArray*)>(&JarVerifier$VerifierCodeSource::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getPrivateCertificates", "()[Ljava/security/cert/Certificate;", nullptr, $PRIVATE, $method(static_cast<$CertificateArray*(JarVerifier$VerifierCodeSource::*)()>(&JarVerifier$VerifierCodeSource::getPrivateCertificates))},
	{"getPrivateSigners", "()[Ljava/security/CodeSigner;", nullptr, $PRIVATE, $method(static_cast<$CodeSignerArray*(JarVerifier$VerifierCodeSource::*)()>(&JarVerifier$VerifierCodeSource::getPrivateSigners))},
	{"isSameDomain", "(Ljava/lang/Object;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _JarVerifier$VerifierCodeSource_InnerClassesInfo_[] = {
	{"java.util.jar.JarVerifier$VerifierCodeSource", "java.util.jar.JarVerifier", "VerifierCodeSource", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JarVerifier$VerifierCodeSource_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.jar.JarVerifier$VerifierCodeSource",
	"java.security.CodeSource",
	nullptr,
	_JarVerifier$VerifierCodeSource_FieldInfo_,
	_JarVerifier$VerifierCodeSource_MethodInfo_,
	nullptr,
	nullptr,
	_JarVerifier$VerifierCodeSource_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.jar.JarVerifier"
};

$Object* allocate$JarVerifier$VerifierCodeSource($Class* clazz) {
	return $of($alloc(JarVerifier$VerifierCodeSource));
}

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
				if ($nc(that)->vsigners != this->vsigners || $nc(that)->vcerts != this->vcerts) {
					return false;
				}
				if ($nc(that)->vlocation != nullptr) {
					return $nc(that->vlocation)->equals(this->vlocation);
				} else if (this->vlocation != nullptr) {
					return $nc(this->vlocation)->equals(that->vlocation);
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
	$loadClass(JarVerifier$VerifierCodeSource, name, initialize, &_JarVerifier$VerifierCodeSource_ClassInfo_, allocate$JarVerifier$VerifierCodeSource);
	return class$;
}

$Class* JarVerifier$VerifierCodeSource::class$ = nullptr;

		} // jar
	} // util
} // java