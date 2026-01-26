#include <sun/security/provider/JavaKeyStore$TrustedCertEntry.h>

#include <java/security/cert/Certificate.h>
#include <java/util/Date.h>
#include <sun/security/provider/JavaKeyStore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _JavaKeyStore$TrustedCertEntry_FieldInfo_[] = {
	{"date", "Ljava/util/Date;", nullptr, 0, $field(JavaKeyStore$TrustedCertEntry, date)},
	{"cert", "Ljava/security/cert/Certificate;", nullptr, 0, $field(JavaKeyStore$TrustedCertEntry, cert)},
	{}
};

$MethodInfo _JavaKeyStore$TrustedCertEntry_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(JavaKeyStore$TrustedCertEntry, init$, void)},
	{}
};

$InnerClassInfo _JavaKeyStore$TrustedCertEntry_InnerClassesInfo_[] = {
	{"sun.security.provider.JavaKeyStore$TrustedCertEntry", "sun.security.provider.JavaKeyStore", "TrustedCertEntry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JavaKeyStore$TrustedCertEntry_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.JavaKeyStore$TrustedCertEntry",
	"java.lang.Object",
	nullptr,
	_JavaKeyStore$TrustedCertEntry_FieldInfo_,
	_JavaKeyStore$TrustedCertEntry_MethodInfo_,
	nullptr,
	nullptr,
	_JavaKeyStore$TrustedCertEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.JavaKeyStore"
};

$Object* allocate$JavaKeyStore$TrustedCertEntry($Class* clazz) {
	return $of($alloc(JavaKeyStore$TrustedCertEntry));
}

void JavaKeyStore$TrustedCertEntry::init$() {
}

JavaKeyStore$TrustedCertEntry::JavaKeyStore$TrustedCertEntry() {
}

$Class* JavaKeyStore$TrustedCertEntry::load$($String* name, bool initialize) {
	$loadClass(JavaKeyStore$TrustedCertEntry, name, initialize, &_JavaKeyStore$TrustedCertEntry_ClassInfo_, allocate$JavaKeyStore$TrustedCertEntry);
	return class$;
}

$Class* JavaKeyStore$TrustedCertEntry::class$ = nullptr;

		} // provider
	} // security
} // sun