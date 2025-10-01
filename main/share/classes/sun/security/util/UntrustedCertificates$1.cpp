#include <sun/security/util/UntrustedCertificates$1.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $NullPointerException = ::java::lang::NullPointerException;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Properties = ::java::util::Properties;
using $StaticProperty = ::jdk::internal::util::StaticProperty;
using $Debug = ::sun::security::util::Debug;
using $UntrustedCertificates = ::sun::security::util::UntrustedCertificates;

namespace sun {
	namespace security {
		namespace util {

$MethodInfo _UntrustedCertificates$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(UntrustedCertificates$1::*)()>(&UntrustedCertificates$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
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
	$var($File, f, $new($File, $($StaticProperty::javaHome()), "lib/security/blocked.certs"_s));
	try {
		$var($FileInputStream, fin, $new($FileInputStream, f));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$init($UntrustedCertificates);
					$nc($UntrustedCertificates::props)->load(static_cast<$InputStream*>(fin));
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						fin->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				fin->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($IOException&) {
		$var($IOException, fnfe, $catch());
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