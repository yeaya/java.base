#include <sun/security/util/UntrustedCertificates$1.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/IOException.h>
#include <java/util/Properties.h>
#include <jdk/internal/util/StaticProperty.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/UntrustedCertificates.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StaticProperty = ::jdk::internal::util::StaticProperty;
using $UntrustedCertificates = ::sun::security::util::UntrustedCertificates;

namespace sun {
	namespace security {
		namespace util {

void UntrustedCertificates$1::init$() {
}

$Object* UntrustedCertificates$1::run() {
	$useLocalObjectStack();
	$var($File, f, $new($File, $($StaticProperty::javaHome()), "lib/security/blocked.certs"_s));
	try {
		$var($FileInputStream, fin, $new($FileInputStream, f));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$init($UntrustedCertificates);
				$nc($UntrustedCertificates::props)->load(fin);
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
	} catch ($IOException& fnfe) {
		$init($UntrustedCertificates);
		if ($UntrustedCertificates::debug != nullptr) {
			$UntrustedCertificates::debug->println("Error parsing blocked.certs"_s);
		}
	}
	return nullptr;
}

UntrustedCertificates$1::UntrustedCertificates$1() {
}

$Class* UntrustedCertificates$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(UntrustedCertificates$1, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(UntrustedCertificates$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.util.UntrustedCertificates",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.UntrustedCertificates$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.util.UntrustedCertificates$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.util.UntrustedCertificates"
	};
	$loadClass(UntrustedCertificates$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UntrustedCertificates$1);
	});
	return class$;
}

$Class* UntrustedCertificates$1::class$ = nullptr;

		} // util
	} // security
} // sun