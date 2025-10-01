#include <sun/security/jca/GetInstance$Instance.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Provider.h>
#include <sun/security/jca/GetInstance.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Provider = ::java::security::Provider;
using $GetInstance = ::sun::security::jca::GetInstance;

namespace sun {
	namespace security {
		namespace jca {

$FieldInfo _GetInstance$Instance_FieldInfo_[] = {
	{"provider", "Ljava/security/Provider;", nullptr, $PUBLIC | $FINAL, $field(GetInstance$Instance, provider)},
	{"impl", "Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $field(GetInstance$Instance, impl)},
	{}
};

$MethodInfo _GetInstance$Instance_MethodInfo_[] = {
	{"<init>", "(Ljava/security/Provider;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(GetInstance$Instance::*)($Provider*,Object$*)>(&GetInstance$Instance::init$))},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $method(static_cast<$ObjectArray*(GetInstance$Instance::*)()>(&GetInstance$Instance::toArray))},
	{}
};

$InnerClassInfo _GetInstance$Instance_InnerClassesInfo_[] = {
	{"sun.security.jca.GetInstance$Instance", "sun.security.jca.GetInstance", "Instance", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _GetInstance$Instance_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.jca.GetInstance$Instance",
	"java.lang.Object",
	nullptr,
	_GetInstance$Instance_FieldInfo_,
	_GetInstance$Instance_MethodInfo_,
	nullptr,
	nullptr,
	_GetInstance$Instance_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.jca.GetInstance"
};

$Object* allocate$GetInstance$Instance($Class* clazz) {
	return $of($alloc(GetInstance$Instance));
}

void GetInstance$Instance::init$($Provider* provider, Object$* impl) {
	$set(this, provider, provider);
	$set(this, impl, impl);
}

$ObjectArray* GetInstance$Instance::toArray() {
	return $new($ObjectArray, {
		this->impl,
		$of(this->provider)
	});
}

GetInstance$Instance::GetInstance$Instance() {
}

$Class* GetInstance$Instance::load$($String* name, bool initialize) {
	$loadClass(GetInstance$Instance, name, initialize, &_GetInstance$Instance_ClassInfo_, allocate$GetInstance$Instance);
	return class$;
}

$Class* GetInstance$Instance::class$ = nullptr;

		} // jca
	} // security
} // sun