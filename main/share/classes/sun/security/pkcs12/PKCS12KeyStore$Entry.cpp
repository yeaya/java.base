#include <sun/security/pkcs12/PKCS12KeyStore$Entry.h>

#include <java/util/Date.h>
#include <java/util/Set.h>
#include <sun/security/pkcs12/PKCS12KeyStore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace pkcs12 {

$FieldInfo _PKCS12KeyStore$Entry_FieldInfo_[] = {
	{"date", "Ljava/util/Date;", nullptr, 0, $field(PKCS12KeyStore$Entry, date)},
	{"alias", "Ljava/lang/String;", nullptr, 0, $field(PKCS12KeyStore$Entry, alias)},
	{"keyId", "[B", nullptr, 0, $field(PKCS12KeyStore$Entry, keyId)},
	{"attributes", "Ljava/util/Set;", "Ljava/util/Set<Ljava/security/KeyStore$Entry$Attribute;>;", 0, $field(PKCS12KeyStore$Entry, attributes)},
	{}
};

$MethodInfo _PKCS12KeyStore$Entry_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PKCS12KeyStore$Entry::*)()>(&PKCS12KeyStore$Entry::init$))},
	{}
};

$InnerClassInfo _PKCS12KeyStore$Entry_InnerClassesInfo_[] = {
	{"sun.security.pkcs12.PKCS12KeyStore$Entry", "sun.security.pkcs12.PKCS12KeyStore", "Entry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _PKCS12KeyStore$Entry_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.pkcs12.PKCS12KeyStore$Entry",
	"java.lang.Object",
	nullptr,
	_PKCS12KeyStore$Entry_FieldInfo_,
	_PKCS12KeyStore$Entry_MethodInfo_,
	nullptr,
	nullptr,
	_PKCS12KeyStore$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.pkcs12.PKCS12KeyStore"
};

$Object* allocate$PKCS12KeyStore$Entry($Class* clazz) {
	return $of($alloc(PKCS12KeyStore$Entry));
}

void PKCS12KeyStore$Entry::init$() {
}

PKCS12KeyStore$Entry::PKCS12KeyStore$Entry() {
}

$Class* PKCS12KeyStore$Entry::load$($String* name, bool initialize) {
	$loadClass(PKCS12KeyStore$Entry, name, initialize, &_PKCS12KeyStore$Entry_ClassInfo_, allocate$PKCS12KeyStore$Entry);
	return class$;
}

$Class* PKCS12KeyStore$Entry::class$ = nullptr;

		} // pkcs12
	} // security
} // sun