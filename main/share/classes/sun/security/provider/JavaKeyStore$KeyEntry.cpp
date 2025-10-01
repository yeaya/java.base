#include <sun/security/provider/JavaKeyStore$KeyEntry.h>

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
#include <sun/security/provider/JavaKeyStore.h>
#include <jcpp.h>

using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Certificate = ::java::security::cert::Certificate;
using $Date = ::java::util::Date;
using $JavaKeyStore = ::sun::security::provider::JavaKeyStore;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _JavaKeyStore$KeyEntry_FieldInfo_[] = {
	{"date", "Ljava/util/Date;", nullptr, 0, $field(JavaKeyStore$KeyEntry, date)},
	{"protectedPrivKey", "[B", nullptr, 0, $field(JavaKeyStore$KeyEntry, protectedPrivKey)},
	{"chain", "[Ljava/security/cert/Certificate;", nullptr, 0, $field(JavaKeyStore$KeyEntry, chain)},
	{}
};

$MethodInfo _JavaKeyStore$KeyEntry_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(JavaKeyStore$KeyEntry::*)()>(&JavaKeyStore$KeyEntry::init$))},
	{}
};

$InnerClassInfo _JavaKeyStore$KeyEntry_InnerClassesInfo_[] = {
	{"sun.security.provider.JavaKeyStore$KeyEntry", "sun.security.provider.JavaKeyStore", "KeyEntry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JavaKeyStore$KeyEntry_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.JavaKeyStore$KeyEntry",
	"java.lang.Object",
	nullptr,
	_JavaKeyStore$KeyEntry_FieldInfo_,
	_JavaKeyStore$KeyEntry_MethodInfo_,
	nullptr,
	nullptr,
	_JavaKeyStore$KeyEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.JavaKeyStore"
};

$Object* allocate$JavaKeyStore$KeyEntry($Class* clazz) {
	return $of($alloc(JavaKeyStore$KeyEntry));
}

void JavaKeyStore$KeyEntry::init$() {
}

JavaKeyStore$KeyEntry::JavaKeyStore$KeyEntry() {
}

$Class* JavaKeyStore$KeyEntry::load$($String* name, bool initialize) {
	$loadClass(JavaKeyStore$KeyEntry, name, initialize, &_JavaKeyStore$KeyEntry_ClassInfo_, allocate$JavaKeyStore$KeyEntry);
	return class$;
}

$Class* JavaKeyStore$KeyEntry::class$ = nullptr;

		} // provider
	} // security
} // sun