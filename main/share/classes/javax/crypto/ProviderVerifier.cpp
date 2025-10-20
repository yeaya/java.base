#include <javax/crypto/ProviderVerifier.h>

#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/security/Provider.h>
#include <java/security/cert/Certificate.h>
#include <java/util/jar/JarEntry.h>
#include <java/util/jar/JarException.h>
#include <java/util/jar/JarFile.h>
#include <java/util/zip/ZipEntry.h>
#include <javax/crypto/CryptoPermissions.h>
#include <javax/crypto/ProviderVerifier$1.h>
#include <jcpp.h>

using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityException = ::java::lang::SecurityException;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Provider = ::java::security::Provider;
using $JarEntry = ::java::util::jar::JarEntry;
using $JarException = ::java::util::jar::JarException;
using $JarFile = ::java::util::jar::JarFile;
using $ZipEntry = ::java::util::zip::ZipEntry;
using $ZipFile = ::java::util::zip::ZipFile;
using $CryptoPermissions = ::javax::crypto::CryptoPermissions;
using $ProviderVerifier$1 = ::javax::crypto::ProviderVerifier$1;

namespace javax {
	namespace crypto {

$FieldInfo _ProviderVerifier_FieldInfo_[] = {
	{"jarURL", "Ljava/net/URL;", nullptr, $PRIVATE, $field(ProviderVerifier, jarURL)},
	{"provider", "Ljava/security/Provider;", nullptr, $PRIVATE, $field(ProviderVerifier, provider)},
	{"savePerms", "Z", nullptr, $PRIVATE, $field(ProviderVerifier, savePerms)},
	{"appPerms", "Ljavax/crypto/CryptoPermissions;", nullptr, $PRIVATE, $field(ProviderVerifier, appPerms)},
	{}
};

$MethodInfo _ProviderVerifier_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URL;Z)V", nullptr, 0, $method(static_cast<void(ProviderVerifier::*)($URL*,bool)>(&ProviderVerifier::init$))},
	{"<init>", "(Ljava/net/URL;Ljava/security/Provider;Z)V", nullptr, 0, $method(static_cast<void(ProviderVerifier::*)($URL*,$Provider*,bool)>(&ProviderVerifier::init$))},
	{"getPermissions", "()Ljavax/crypto/CryptoPermissions;", nullptr, 0, $method(static_cast<$CryptoPermissions*(ProviderVerifier::*)()>(&ProviderVerifier::getPermissions))},
	{"isTrustedCryptoProvider", "(Ljava/security/Provider;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Provider*)>(&ProviderVerifier::isTrustedCryptoProvider))},
	{"verify", "()V", nullptr, 0, $method(static_cast<void(ProviderVerifier::*)()>(&ProviderVerifier::verify)), "java.io.IOException"},
	{"verifyPolicySigned", "([Ljava/security/cert/Certificate;)V", nullptr, $STATIC, $method(static_cast<void(*)($CertificateArray*)>(&ProviderVerifier::verifyPolicySigned)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _ProviderVerifier_InnerClassesInfo_[] = {
	{"javax.crypto.ProviderVerifier$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProviderVerifier_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.crypto.ProviderVerifier",
	"java.lang.Object",
	nullptr,
	_ProviderVerifier_FieldInfo_,
	_ProviderVerifier_MethodInfo_,
	nullptr,
	nullptr,
	_ProviderVerifier_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.crypto.ProviderVerifier$1"
};

$Object* allocate$ProviderVerifier($Class* clazz) {
	return $of($alloc(ProviderVerifier));
}

void ProviderVerifier::init$($URL* jarURL, bool savePerms) {
	ProviderVerifier::init$(jarURL, nullptr, savePerms);
}

void ProviderVerifier::init$($URL* jarURL, $Provider* provider, bool savePerms) {
	$set(this, appPerms, nullptr);
	$set(this, jarURL, jarURL);
	$set(this, provider, provider);
	this->savePerms = savePerms;
}

void ProviderVerifier::verify() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (!this->savePerms) {
		return;
	}
	$var($URL, url, $nc($($nc(this->jarURL)->getProtocol()))->equalsIgnoreCase("jar"_s) ? this->jarURL : $new($URL, $$str({"jar:"_s, $($nc(this->jarURL)->toString()), "!/"_s})));
	$var($JarFile, jf, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($JarFile, tmp, $cast($JarFile, $AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($ProviderVerifier$1, this, url)))));
				$assign(jf, tmp);
			} catch ($PrivilegedActionException&) {
				$var($PrivilegedActionException, pae, $catch());
				$var($String, var$1, $str({"Cannot load "_s, $($nc(url)->toString())}));
				$throwNew($SecurityException, var$1, $(pae->getCause()));
			}
			if (jf != nullptr) {
				$var($JarEntry, je, jf->getJarEntry("cryptoPerms"_s));
				if (je == nullptr) {
					$throwNew($JarException, "Can not find cryptoPerms"_s);
				}
				try {
					$set(this, appPerms, $new($CryptoPermissions));
					$nc(this->appPerms)->load($(jf->getInputStream(je)));
				} catch ($Exception&) {
					$var($Exception, ex, $catch());
					$var($JarException, jex, $new($JarException, $$str({"Cannot load/parse"_s, $($nc(this->jarURL)->toString())})));
					jex->initCause(ex);
					$throw(jex);
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if (jf != nullptr) {
				jf->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ProviderVerifier::verifyPolicySigned($CertificateArray* certs) {
}

bool ProviderVerifier::isTrustedCryptoProvider($Provider* provider) {
	return false;
}

$CryptoPermissions* ProviderVerifier::getPermissions() {
	return this->appPerms;
}

ProviderVerifier::ProviderVerifier() {
}

$Class* ProviderVerifier::load$($String* name, bool initialize) {
	$loadClass(ProviderVerifier, name, initialize, &_ProviderVerifier_ClassInfo_, allocate$ProviderVerifier);
	return class$;
}

$Class* ProviderVerifier::class$ = nullptr;

	} // crypto
} // javax