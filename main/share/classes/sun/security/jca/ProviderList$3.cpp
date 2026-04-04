#include <sun/security/jca/ProviderList$3.h>
#include <java/security/Provider.h>
#include <java/util/AbstractList.h>
#include <java/util/List.h>
#include <sun/security/jca/ProviderConfig.h>
#include <sun/security/jca/ProviderList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ProviderList = ::sun::security::jca::ProviderList;

namespace sun {
	namespace security {
		namespace jca {

void ProviderList$3::init$($ProviderList* this$0) {
	$set(this, this$0, this$0);
	$AbstractList::init$();
}

int32_t ProviderList$3::size() {
	return $nc(this->this$0->configs)->length;
}

$Object* ProviderList$3::get(int32_t index) {
	return $of(this->this$0->getProvider(index));
}

ProviderList$3::ProviderList$3() {
}

$Class* ProviderList$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/security/jca/ProviderList;", nullptr, $FINAL | $SYNTHETIC, $field(ProviderList$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/jca/ProviderList;)V", nullptr, 0, $method(ProviderList$3, init$, void, $ProviderList*)},
		{"get", "(I)Ljava/security/Provider;", nullptr, $PUBLIC, $virtualMethod(ProviderList$3, get, $Object*, int32_t)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(ProviderList$3, size, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.jca.ProviderList",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.jca.ProviderList$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.jca.ProviderList$3",
		"java.util.AbstractList",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/AbstractList<Ljava/security/Provider;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.jca.ProviderList"
	};
	$loadClass(ProviderList$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ProviderList$3));
	});
	return class$;
}

$Class* ProviderList$3::class$ = nullptr;

		} // jca
	} // security
} // sun