#include <sun/security/util/UntrustedCertificates$1.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/util/Properties.h>
#include <jdk/internal/util/StaticProperty.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/UntrustedCertificates.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Properties = ::java::util::Properties;
using $StaticProperty = ::jdk::internal::util::StaticProperty;
using $Debug = ::sun::security::util::Debug;
using $UntrustedCertificates = ::sun::security::util::UntrustedCertificates;

namespace sun {
	namespace security {
		namespace util {

$MethodInfo _UntrustedCertificates$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(UntrustedCertificates$1, init$, void)},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(UntrustedCertificates$1, run, $Object*)},
	{}
};

$EnclosingMethodInfo _UntrustedCertificates$1_EnclosingMethodInfo_ = {
	"sun.security.util.UntrustedCertificates",
	nullptr,
	nullptr
};

$InnerClassInfo _UntrustedCertificates$1_InnerClassesInfo_[] = {
	{"sun.security.util.UntrustedCertificates$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _UntrustedCertificates$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.util.UntrustedCertificates$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_UntrustedCertificates$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_UntrustedCertificates$1_EnclosingMethodInfo_,
	_UntrustedCertificates$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.UntrustedCertificates"
};

$Object* allocate$UntrustedCertificates$1($Class* clazz) {
	return $of($alloc(UntrustedCertificates$1));
}

void UntrustedCertificates$1::init$() {
}

$Object* UntrustedCertificates$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($File, f, $new($File, $($StaticProperty::javaHome()), "lib/security/blocked.certs"_s));
	try {
		$var($FileInputStream, fin, $new($FileInputStream, f));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$init($UntrustedCertificates);
					$nc($UntrustedCertificates::props)->load(static_cast<$InputStream*>(fin));
				} catch ($Throwable& t$) {
					try {
						fin->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				fin->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($IOException& fnfe) {
		$init($UntrustedCertificates);
		if ($UntrustedCertificates::debug != nullptr) {
			$nc($UntrustedCertificates::debug)->println("Error parsing blocked.certs"_s);
		}
	}
	return $of(nullptr);
}

UntrustedCertificates$1::UntrustedCertificates$1() {
}

$Class* UntrustedCertificates$1::load$($String* name, bool initialize) {
	$loadClass(UntrustedCertificates$1, name, initialize, &_UntrustedCertificates$1_ClassInfo_, allocate$UntrustedCertificates$1);
	return class$;
}

$Class* UntrustedCertificates$1::class$ = nullptr;

		} // util
	} // security
} // sun