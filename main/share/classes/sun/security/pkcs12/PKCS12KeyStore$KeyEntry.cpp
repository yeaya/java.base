#include <sun/security/pkcs12/PKCS12KeyStore$KeyEntry.h>

#include <sun/security/pkcs12/PKCS12KeyStore$Entry.h>
#include <sun/security/pkcs12/PKCS12KeyStore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PKCS12KeyStore$Entry = ::sun::security::pkcs12::PKCS12KeyStore$Entry;

namespace sun {
	namespace security {
		namespace pkcs12 {

$MethodInfo _PKCS12KeyStore$KeyEntry_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PKCS12KeyStore$KeyEntry::*)()>(&PKCS12KeyStore$KeyEntry::init$))},
	{}
};

$InnerClassInfo _PKCS12KeyStore$KeyEntry_InnerClassesInfo_[] = {
	{"sun.security.pkcs12.PKCS12KeyStore$KeyEntry", "sun.security.pkcs12.PKCS12KeyStore", "KeyEntry", $PRIVATE | $STATIC},
	{"sun.security.pkcs12.PKCS12KeyStore$Entry", "sun.security.pkcs12.PKCS12KeyStore", "Entry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _PKCS12KeyStore$KeyEntry_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.pkcs12.PKCS12KeyStore$KeyEntry",
	"sun.security.pkcs12.PKCS12KeyStore$Entry",
	nullptr,
	nullptr,
	_PKCS12KeyStore$KeyEntry_MethodInfo_,
	nullptr,
	nullptr,
	_PKCS12KeyStore$KeyEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.pkcs12.PKCS12KeyStore"
};

$Object* allocate$PKCS12KeyStore$KeyEntry($Class* clazz) {
	return $of($alloc(PKCS12KeyStore$KeyEntry));
}

void PKCS12KeyStore$KeyEntry::init$() {
	$PKCS12KeyStore$Entry::init$();
}

PKCS12KeyStore$KeyEntry::PKCS12KeyStore$KeyEntry() {
}

$Class* PKCS12KeyStore$KeyEntry::load$($String* name, bool initialize) {
	$loadClass(PKCS12KeyStore$KeyEntry, name, initialize, &_PKCS12KeyStore$KeyEntry_ClassInfo_, allocate$PKCS12KeyStore$KeyEntry);
	return class$;
}

$Class* PKCS12KeyStore$KeyEntry::class$ = nullptr;

		} // pkcs12
	} // security
} // sun