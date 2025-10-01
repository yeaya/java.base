#include <sun/security/internal/interfaces/TlsMasterSecret.h>

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

namespace sun {
	namespace security {
		namespace internal {
			namespace interfaces {
$CompoundAttribute _TlsMasterSecret_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _TlsMasterSecret_FieldAnnotations_serialVersionUID[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};


$FieldInfo _TlsMasterSecret_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(TlsMasterSecret, serialVersionUID), _TlsMasterSecret_FieldAnnotations_serialVersionUID},
	{}
};

$MethodInfo _TlsMasterSecret_MethodInfo_[] = {
	{"getMajorVersion", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getMinorVersion", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TlsMasterSecret_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.security.internal.interfaces.TlsMasterSecret",
	nullptr,
	"javax.crypto.SecretKey",
	_TlsMasterSecret_FieldInfo_,
	_TlsMasterSecret_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_TlsMasterSecret_Annotations_
};

$Object* allocate$TlsMasterSecret($Class* clazz) {
	return $of($alloc(TlsMasterSecret));
}

$Class* TlsMasterSecret::load$($String* name, bool initialize) {
	$loadClass(TlsMasterSecret, name, initialize, &_TlsMasterSecret_ClassInfo_, allocate$TlsMasterSecret);
	return class$;
}

$Class* TlsMasterSecret::class$ = nullptr;

			} // interfaces
		} // internal
	} // security
} // sun