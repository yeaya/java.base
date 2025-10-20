#include <sun/security/util/AnchorCertificates$1.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/KeyStore.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/AbstractSet.h>
#include <java/util/Enumeration.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/util/AnchorCertificates.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/FilePaths.h>
#include <sun/security/x509/X509CertImpl.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $InputStream = ::java::io::InputStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $KeyStore = ::java::security::KeyStore;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Certificate = ::java::security::cert::Certificate;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $AbstractSet = ::java::util::AbstractSet;
using $Enumeration = ::java::util::Enumeration;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;
using $X500Principal = ::javax::security::auth::x500::X500Principal;
using $AnchorCertificates = ::sun::security::util::AnchorCertificates;
using $Debug = ::sun::security::util::Debug;
using $FilePaths = ::sun::security::util::FilePaths;
using $X509CertImpl = ::sun::security::x509::X509CertImpl;

namespace sun {
	namespace security {
		namespace util {

$MethodInfo _AnchorCertificates$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AnchorCertificates$1::*)()>(&AnchorCertificates$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AnchorCertificates$1_EnclosingMethodInfo_ = {
	"sun.security.util.AnchorCertificates",
	nullptr,
	nullptr
};

$InnerClassInfo _AnchorCertificates$1_InnerClassesInfo_[] = {
	{"sun.security.util.AnchorCertificates$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AnchorCertificates$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.util.AnchorCertificates$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_AnchorCertificates$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_AnchorCertificates$1_EnclosingMethodInfo_,
	_AnchorCertificates$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.AnchorCertificates"
};

$Object* allocate$AnchorCertificates$1($Class* clazz) {
	return $of($alloc(AnchorCertificates$1));
}

void AnchorCertificates$1::init$() {
}

$Object* AnchorCertificates$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($File, f, $new($File, $($FilePaths::cacerts())));
	try {
		$var($KeyStore, cacerts, nullptr);
		$assign(cacerts, $KeyStore::getInstance("JKS"_s));
		{
			$var($FileInputStream, fis, $new($FileInputStream, f));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$nc(cacerts)->load(fis, nullptr);
						$init($AnchorCertificates);
						$assignStatic($AnchorCertificates::certs, $new($HashSet));
						$assignStatic($AnchorCertificates::certIssuers, $new($HashSet));
						$var($Enumeration, list, cacerts->aliases());
						while ($nc(list)->hasMoreElements()) {
							$var($String, alias, $cast($String, list->nextElement()));
							if ($nc(alias)->contains(" [jdk"_s)) {
								$var($X509Certificate, cert, $cast($X509Certificate, cacerts->getCertificate(alias)));
								$nc($AnchorCertificates::certs)->add($($X509CertImpl::getFingerprint("SHA-256"_s, cert)));
								$nc($AnchorCertificates::certIssuers)->add($($nc(cert)->getSubjectX500Principal()));
							}
						}
					} catch ($Throwable&) {
						$var($Throwable, t$, $catch());
						try {
							fis->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} /*finally*/ {
					fis->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$init($AnchorCertificates);
		if ($AnchorCertificates::debug != nullptr) {
			$nc($AnchorCertificates::debug)->println("Error parsing cacerts"_s);
			e->printStackTrace();
		}
	}
	return $of(nullptr);
}

AnchorCertificates$1::AnchorCertificates$1() {
}

$Class* AnchorCertificates$1::load$($String* name, bool initialize) {
	$loadClass(AnchorCertificates$1, name, initialize, &_AnchorCertificates$1_ClassInfo_, allocate$AnchorCertificates$1);
	return class$;
}

$Class* AnchorCertificates$1::class$ = nullptr;

		} // util
	} // security
} // sun