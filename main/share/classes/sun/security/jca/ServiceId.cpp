#include <sun/security/jca/ServiceId.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace jca {

$FieldInfo _ServiceId_FieldInfo_[] = {
	{"type", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(ServiceId, type)},
	{"algorithm", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(ServiceId, algorithm)},
	{}
};

$MethodInfo _ServiceId_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ServiceId::*)($String*,$String*)>(&ServiceId::init$))},
	{}
};

$ClassInfo _ServiceId_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.jca.ServiceId",
	"java.lang.Object",
	nullptr,
	_ServiceId_FieldInfo_,
	_ServiceId_MethodInfo_
};

$Object* allocate$ServiceId($Class* clazz) {
	return $of($alloc(ServiceId));
}

void ServiceId::init$($String* type, $String* algorithm) {
	$set(this, type, type);
	$set(this, algorithm, algorithm);
}

ServiceId::ServiceId() {
}

$Class* ServiceId::load$($String* name, bool initialize) {
	$loadClass(ServiceId, name, initialize, &_ServiceId_ClassInfo_, allocate$ServiceId);
	return class$;
}

$Class* ServiceId::class$ = nullptr;

		} // jca
	} // security
} // sun