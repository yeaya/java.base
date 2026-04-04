#include <sun/security/jca/GetInstance$Instance.h>
#include <java/security/Provider.h>
#include <sun/security/jca/GetInstance.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Provider = ::java::security::Provider;

namespace sun {
	namespace security {
		namespace jca {

void GetInstance$Instance::init$($Provider* provider, Object$* impl) {
	$set(this, provider, provider);
	$set(this, impl, impl);
}

$ObjectArray* GetInstance$Instance::toArray() {
	return $new($ObjectArray, {
		this->impl,
		this->provider
	});
}

GetInstance$Instance::GetInstance$Instance() {
}

$Class* GetInstance$Instance::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"provider", "Ljava/security/Provider;", nullptr, $PUBLIC | $FINAL, $field(GetInstance$Instance, provider)},
		{"impl", "Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $field(GetInstance$Instance, impl)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/Provider;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(GetInstance$Instance, init$, void, $Provider*, Object$*)},
		{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $method(GetInstance$Instance, toArray, $ObjectArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.jca.GetInstance$Instance", "sun.security.jca.GetInstance", "Instance", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.jca.GetInstance$Instance",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.jca.GetInstance"
	};
	$loadClass(GetInstance$Instance, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetInstance$Instance);
	});
	return class$;
}

$Class* GetInstance$Instance::class$ = nullptr;

		} // jca
	} // security
} // sun