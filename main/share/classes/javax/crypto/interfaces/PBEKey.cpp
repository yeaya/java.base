#include <javax/crypto/interfaces/PBEKey.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecretKey = ::javax::crypto::SecretKey;

namespace javax {
	namespace crypto {
		namespace interfaces {

$CompoundAttribute _PBEKey_FieldAnnotations_serialVersionUID[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _PBEKey_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(PBEKey, serialVersionUID), _PBEKey_FieldAnnotations_serialVersionUID},
	{}
};

$MethodInfo _PBEKey_MethodInfo_[] = {
	{"getIterationCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getPassword", "()[C", nullptr, $PUBLIC | $ABSTRACT},
	{"getSalt", "()[B", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PBEKey_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.crypto.interfaces.PBEKey",
	nullptr,
	"javax.crypto.SecretKey",
	_PBEKey_FieldInfo_,
	_PBEKey_MethodInfo_
};

$Object* allocate$PBEKey($Class* clazz) {
	return $of($alloc(PBEKey));
}

$Class* PBEKey::load$($String* name, bool initialize) {
	$loadClass(PBEKey, name, initialize, &_PBEKey_ClassInfo_, allocate$PBEKey);
	return class$;
}

$Class* PBEKey::class$ = nullptr;

		} // interfaces
	} // crypto
} // javax