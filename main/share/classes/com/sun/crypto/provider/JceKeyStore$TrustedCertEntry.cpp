#include <com/sun/crypto/provider/JceKeyStore$TrustedCertEntry.h>

#include <com/sun/crypto/provider/JceKeyStore.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/cert/Certificate.h>
#include <java/util/Date.h>
#include <jcpp.h>

using $JceKeyStore = ::com::sun::crypto::provider::JceKeyStore;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Certificate = ::java::security::cert::Certificate;
using $Date = ::java::util::Date;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _JceKeyStore$TrustedCertEntry_FieldInfo_[] = {
	{"date", "Ljava/util/Date;", nullptr, 0, $field(JceKeyStore$TrustedCertEntry, date)},
	{"cert", "Ljava/security/cert/Certificate;", nullptr, 0, $field(JceKeyStore$TrustedCertEntry, cert)},
	{}
};

$MethodInfo _JceKeyStore$TrustedCertEntry_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(JceKeyStore$TrustedCertEntry::*)()>(&JceKeyStore$TrustedCertEntry::init$))},
	{}
};

$InnerClassInfo _JceKeyStore$TrustedCertEntry_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.JceKeyStore$TrustedCertEntry", "com.sun.crypto.provider.JceKeyStore", "TrustedCertEntry", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _JceKeyStore$TrustedCertEntry_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.JceKeyStore$TrustedCertEntry",
	"java.lang.Object",
	nullptr,
	_JceKeyStore$TrustedCertEntry_FieldInfo_,
	_JceKeyStore$TrustedCertEntry_MethodInfo_,
	nullptr,
	nullptr,
	_JceKeyStore$TrustedCertEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.JceKeyStore"
};

$Object* allocate$JceKeyStore$TrustedCertEntry($Class* clazz) {
	return $of($alloc(JceKeyStore$TrustedCertEntry));
}

void JceKeyStore$TrustedCertEntry::init$() {
}

JceKeyStore$TrustedCertEntry::JceKeyStore$TrustedCertEntry() {
}

$Class* JceKeyStore$TrustedCertEntry::load$($String* name, bool initialize) {
	$loadClass(JceKeyStore$TrustedCertEntry, name, initialize, &_JceKeyStore$TrustedCertEntry_ClassInfo_, allocate$JceKeyStore$TrustedCertEntry);
	return class$;
}

$Class* JceKeyStore$TrustedCertEntry::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com