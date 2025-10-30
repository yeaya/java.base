#include <sun/security/provider/SunEntries$1.h>

#include <java/security/Security.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Security = ::java::security::Security;

namespace sun {
	namespace security {
		namespace provider {

$MethodInfo _SunEntries$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SunEntries$1::*)()>(&SunEntries$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SunEntries$1_EnclosingMethodInfo_ = {
	"sun.security.provider.SunEntries",
	nullptr,
	nullptr
};

$InnerClassInfo _SunEntries$1_InnerClassesInfo_[] = {
	{"sun.security.provider.SunEntries$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SunEntries$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.SunEntries$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_SunEntries$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_SunEntries$1_EnclosingMethodInfo_,
	_SunEntries$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.SunEntries"
};

$Object* allocate$SunEntries$1($Class* clazz) {
	return $of($alloc(SunEntries$1));
}

void SunEntries$1::init$() {
}

$Object* SunEntries$1::run() {
	$var($String, egdSource, $System::getProperty("java.security.egd"_s, ""_s));
	if ($nc(egdSource)->length() != 0) {
		return $of(egdSource);
	}
	$assign(egdSource, $Security::getProperty("securerandom.source"_s));
	if (egdSource == nullptr) {
		return $of(""_s);
	}
	return $of(egdSource);
}

SunEntries$1::SunEntries$1() {
}

$Class* SunEntries$1::load$($String* name, bool initialize) {
	$loadClass(SunEntries$1, name, initialize, &_SunEntries$1_ClassInfo_, allocate$SunEntries$1);
	return class$;
}

$Class* SunEntries$1::class$ = nullptr;

		} // provider
	} // security
} // sun