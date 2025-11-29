#include <java/security/PublicKey.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;

namespace java {
	namespace security {

$CompoundAttribute _PublicKey_FieldAnnotations_serialVersionUID[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _PublicKey_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(PublicKey, serialVersionUID), _PublicKey_FieldAnnotations_serialVersionUID},
	{}
};

$ClassInfo _PublicKey_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.PublicKey",
	nullptr,
	"java.security.Key",
	_PublicKey_FieldInfo_
};

$Object* allocate$PublicKey($Class* clazz) {
	return $of($alloc(PublicKey));
}

$Class* PublicKey::load$($String* name, bool initialize) {
	$loadClass(PublicKey, name, initialize, &_PublicKey_ClassInfo_, allocate$PublicKey);
	return class$;
}

$Class* PublicKey::class$ = nullptr;

	} // security
} // java