#include <javax/crypto/interfaces/PBEKey.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

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