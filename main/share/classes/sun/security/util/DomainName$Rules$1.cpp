#include <sun/security/util/DomainName$Rules$1.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileNotFoundException.h>
#include <sun/security/util/DomainName$Rules.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace util {

void DomainName$Rules$1::init$() {
}

$Object* DomainName$Rules$1::run() {
	$useLocalObjectStack();
	$var($File, f, $new($File, $($System::getProperty("java.home"_s)), "lib/security/public_suffix_list.dat"_s));
	try {
		return $new($FileInputStream, f);
	} catch ($FileNotFoundException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

DomainName$Rules$1::DomainName$Rules$1() {
}

$Class* DomainName$Rules$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DomainName$Rules$1, init$, void)},
		{"run", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(DomainName$Rules$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.util.DomainName$Rules",
		"getPubSuffixStream",
		"()Ljava/io/InputStream;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.DomainName$Rules", "sun.security.util.DomainName", "Rules", $PRIVATE | $STATIC},
		{"sun.security.util.DomainName$Rules$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.util.DomainName$Rules$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/InputStream;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.util.DomainName"
	};
	$loadClass(DomainName$Rules$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DomainName$Rules$1);
	});
	return class$;
}

$Class* DomainName$Rules$1::class$ = nullptr;

		} // util
	} // security
} // sun