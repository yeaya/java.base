#include <javax/crypto/CryptoAllPermission.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <javax/crypto/CryptoAllPermissionCollection.h>
#include <javax/crypto/CryptoPermission.h>
#include <jcpp.h>

#undef ALG_NAME
#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $CryptoAllPermissionCollection = ::javax::crypto::CryptoAllPermissionCollection;
using $CryptoPermission = ::javax::crypto::CryptoPermission;

namespace javax {
	namespace crypto {

$FieldInfo _CryptoAllPermission_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CryptoAllPermission, serialVersionUID)},
	{"ALG_NAME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(CryptoAllPermission, ALG_NAME)},
	{"INSTANCE", "Ljavax/crypto/CryptoAllPermission;", nullptr, $STATIC | $FINAL, $staticField(CryptoAllPermission, INSTANCE)},
	{}
};

$MethodInfo _CryptoAllPermission_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CryptoAllPermission::*)()>(&CryptoAllPermission::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC},
	{"newPermissionCollection", "()Ljava/security/PermissionCollection;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CryptoAllPermission_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.crypto.CryptoAllPermission",
	"javax.crypto.CryptoPermission",
	nullptr,
	_CryptoAllPermission_FieldInfo_,
	_CryptoAllPermission_MethodInfo_
};

$Object* allocate$CryptoAllPermission($Class* clazz) {
	return $of($alloc(CryptoAllPermission));
}

$String* CryptoAllPermission::ALG_NAME = nullptr;
CryptoAllPermission* CryptoAllPermission::INSTANCE = nullptr;

void CryptoAllPermission::init$() {
	$CryptoPermission::init$(CryptoAllPermission::ALG_NAME);
}

bool CryptoAllPermission::implies($Permission* p) {
	return ($instanceOf($CryptoPermission, p));
}

bool CryptoAllPermission::equals(Object$* obj) {
	return ($equals(obj, CryptoAllPermission::INSTANCE));
}

int32_t CryptoAllPermission::hashCode() {
	return 1;
}

$PermissionCollection* CryptoAllPermission::newPermissionCollection() {
	return $new($CryptoAllPermissionCollection);
}

void clinit$CryptoAllPermission($Class* class$) {
	$assignStatic(CryptoAllPermission::ALG_NAME, "CryptoAllPermission"_s);
	$assignStatic(CryptoAllPermission::INSTANCE, $new(CryptoAllPermission));
}

CryptoAllPermission::CryptoAllPermission() {
}

$Class* CryptoAllPermission::load$($String* name, bool initialize) {
	$loadClass(CryptoAllPermission, name, initialize, &_CryptoAllPermission_ClassInfo_, clinit$CryptoAllPermission, allocate$CryptoAllPermission);
	return class$;
}

$Class* CryptoAllPermission::class$ = nullptr;

	} // crypto
} // javax