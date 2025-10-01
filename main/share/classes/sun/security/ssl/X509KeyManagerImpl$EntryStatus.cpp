#include <sun/security/ssl/X509KeyManagerImpl$EntryStatus.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/cert/Certificate.h>
#include <sun/security/ssl/X509KeyManagerImpl$CheckResult.h>
#include <sun/security/ssl/X509KeyManagerImpl.h>
#include <jcpp.h>

using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $X509KeyManagerImpl = ::sun::security::ssl::X509KeyManagerImpl;
using $X509KeyManagerImpl$CheckResult = ::sun::security::ssl::X509KeyManagerImpl$CheckResult;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _X509KeyManagerImpl$EntryStatus_FieldInfo_[] = {
	{"builderIndex", "I", nullptr, $FINAL, $field(X509KeyManagerImpl$EntryStatus, builderIndex)},
	{"keyIndex", "I", nullptr, $FINAL, $field(X509KeyManagerImpl$EntryStatus, keyIndex)},
	{"alias", "Ljava/lang/String;", nullptr, $FINAL, $field(X509KeyManagerImpl$EntryStatus, alias)},
	{"checkResult", "Lsun/security/ssl/X509KeyManagerImpl$CheckResult;", nullptr, $FINAL, $field(X509KeyManagerImpl$EntryStatus, checkResult)},
	{}
};

$MethodInfo _X509KeyManagerImpl$EntryStatus_MethodInfo_[] = {
	{"<init>", "(IILjava/lang/String;[Ljava/security/cert/Certificate;Lsun/security/ssl/X509KeyManagerImpl$CheckResult;)V", nullptr, 0, $method(static_cast<void(X509KeyManagerImpl$EntryStatus::*)(int32_t,int32_t,$String*,$CertificateArray*,$X509KeyManagerImpl$CheckResult*)>(&X509KeyManagerImpl$EntryStatus::init$))},
	{"compareTo", "(Lsun/security/ssl/X509KeyManagerImpl$EntryStatus;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _X509KeyManagerImpl$EntryStatus_InnerClassesInfo_[] = {
	{"sun.security.ssl.X509KeyManagerImpl$EntryStatus", "sun.security.ssl.X509KeyManagerImpl", "EntryStatus", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _X509KeyManagerImpl$EntryStatus_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.X509KeyManagerImpl$EntryStatus",
	"java.lang.Object",
	"java.lang.Comparable",
	_X509KeyManagerImpl$EntryStatus_FieldInfo_,
	_X509KeyManagerImpl$EntryStatus_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Lsun/security/ssl/X509KeyManagerImpl$EntryStatus;>;",
	nullptr,
	_X509KeyManagerImpl$EntryStatus_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.X509KeyManagerImpl"
};

$Object* allocate$X509KeyManagerImpl$EntryStatus($Class* clazz) {
	return $of($alloc(X509KeyManagerImpl$EntryStatus));
}

void X509KeyManagerImpl$EntryStatus::init$(int32_t builderIndex, int32_t keyIndex, $String* alias, $CertificateArray* chain, $X509KeyManagerImpl$CheckResult* checkResult) {
	this->builderIndex = builderIndex;
	this->keyIndex = keyIndex;
	$set(this, alias, alias);
	$set(this, checkResult, checkResult);
}

int32_t X509KeyManagerImpl$EntryStatus::compareTo(X509KeyManagerImpl$EntryStatus* other) {
	int32_t result = this->checkResult->compareTo(static_cast<$Enum*>($nc(other)->checkResult));
	return (result == 0) ? (this->keyIndex - $nc(other)->keyIndex) : result;
}

$String* X509KeyManagerImpl$EntryStatus::toString() {
	$var($String, s, $str({this->alias, " (verified: "_s, this->checkResult, ")"_s}));
	if (this->builderIndex == 0) {
		return s;
	} else {
		return $str({"Builder #"_s, $$str(this->builderIndex), ", alias: "_s, s});
	}
}

int32_t X509KeyManagerImpl$EntryStatus::compareTo(Object$* other) {
	return this->compareTo($cast(X509KeyManagerImpl$EntryStatus, other));
}

X509KeyManagerImpl$EntryStatus::X509KeyManagerImpl$EntryStatus() {
}

$Class* X509KeyManagerImpl$EntryStatus::load$($String* name, bool initialize) {
	$loadClass(X509KeyManagerImpl$EntryStatus, name, initialize, &_X509KeyManagerImpl$EntryStatus_ClassInfo_, allocate$X509KeyManagerImpl$EntryStatus);
	return class$;
}

$Class* X509KeyManagerImpl$EntryStatus::class$ = nullptr;

		} // ssl
	} // security
} // sun