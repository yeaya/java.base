#include <apple/security/KeychainStore$TrustedCertEntry.h>

#include <apple/security/KeychainStore.h>
#include <java/security/cert/Certificate.h>
#include <java/util/Date.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace security {

$FieldInfo _KeychainStore$TrustedCertEntry_FieldInfo_[] = {
	{"date", "Ljava/util/Date;", nullptr, 0, $field(KeychainStore$TrustedCertEntry, date)},
	{"cert", "Ljava/security/cert/Certificate;", nullptr, 0, $field(KeychainStore$TrustedCertEntry, cert)},
	{"certRef", "J", nullptr, 0, $field(KeychainStore$TrustedCertEntry, certRef)},
	{}
};

$MethodInfo _KeychainStore$TrustedCertEntry_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(KeychainStore$TrustedCertEntry::*)()>(&KeychainStore$TrustedCertEntry::init$))},
	{}
};

$InnerClassInfo _KeychainStore$TrustedCertEntry_InnerClassesInfo_[] = {
	{"apple.security.KeychainStore$TrustedCertEntry", "apple.security.KeychainStore", "TrustedCertEntry", $STATIC},
	{}
};

$ClassInfo _KeychainStore$TrustedCertEntry_ClassInfo_ = {
	$ACC_SUPER,
	"apple.security.KeychainStore$TrustedCertEntry",
	"java.lang.Object",
	nullptr,
	_KeychainStore$TrustedCertEntry_FieldInfo_,
	_KeychainStore$TrustedCertEntry_MethodInfo_,
	nullptr,
	nullptr,
	_KeychainStore$TrustedCertEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.security.KeychainStore"
};

$Object* allocate$KeychainStore$TrustedCertEntry($Class* clazz) {
	return $of($alloc(KeychainStore$TrustedCertEntry));
}

void KeychainStore$TrustedCertEntry::init$() {
}

KeychainStore$TrustedCertEntry::KeychainStore$TrustedCertEntry() {
}

$Class* KeychainStore$TrustedCertEntry::load$($String* name, bool initialize) {
	$loadClass(KeychainStore$TrustedCertEntry, name, initialize, &_KeychainStore$TrustedCertEntry_ClassInfo_, allocate$KeychainStore$TrustedCertEntry);
	return class$;
}

$Class* KeychainStore$TrustedCertEntry::class$ = nullptr;

	} // security
} // apple