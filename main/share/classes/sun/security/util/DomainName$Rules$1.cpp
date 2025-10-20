#include <sun/security/util/DomainName$Rules$1.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileNotFoundException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/util/DomainName$Rules.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $DomainName$Rules = ::sun::security::util::DomainName$Rules;

namespace sun {
	namespace security {
		namespace util {

$MethodInfo _DomainName$Rules$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DomainName$Rules$1::*)()>(&DomainName$Rules$1::init$))},
	{"run", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DomainName$Rules$1_EnclosingMethodInfo_ = {
	"sun.security.util.DomainName$Rules",
	"getPubSuffixStream",
	"()Ljava/io/InputStream;"
};

$InnerClassInfo _DomainName$Rules$1_InnerClassesInfo_[] = {
	{"sun.security.util.DomainName$Rules", "sun.security.util.DomainName", "Rules", $PRIVATE | $STATIC},
	{"sun.security.util.DomainName$Rules$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DomainName$Rules$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.util.DomainName$Rules$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_DomainName$Rules$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/InputStream;>;",
	&_DomainName$Rules$1_EnclosingMethodInfo_,
	_DomainName$Rules$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.DomainName"
};

$Object* allocate$DomainName$Rules$1($Class* clazz) {
	return $of($alloc(DomainName$Rules$1));
}

void DomainName$Rules$1::init$() {
}

$Object* DomainName$Rules$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($File, f, $new($File, $($System::getProperty("java.home"_s)), "lib/security/public_suffix_list.dat"_s));
	try {
		return $of($new($FileInputStream, f));
	} catch ($FileNotFoundException&) {
		$var($FileNotFoundException, e, $catch());
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

DomainName$Rules$1::DomainName$Rules$1() {
}

$Class* DomainName$Rules$1::load$($String* name, bool initialize) {
	$loadClass(DomainName$Rules$1, name, initialize, &_DomainName$Rules$1_ClassInfo_, allocate$DomainName$Rules$1);
	return class$;
}

$Class* DomainName$Rules$1::class$ = nullptr;

		} // util
	} // security
} // sun