#include <sun/security/jca/ProviderList$ServiceList$1.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/security/Provider$Service.h>
#include <java/util/NoSuchElementException.h>
#include <sun/security/jca/ProviderList$ServiceList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Provider$Service = ::java::security::Provider$Service;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $ProviderList$ServiceList = ::sun::security::jca::ProviderList$ServiceList;

namespace sun {
	namespace security {
		namespace jca {

void ProviderList$ServiceList$1::init$($ProviderList$ServiceList* this$1) {
	$set(this, this$1, this$1);
}

bool ProviderList$ServiceList$1::hasNext() {
	return this->this$1->tryGet(this->index) != nullptr;
}

$Object* ProviderList$ServiceList$1::next() {
	$var($Provider$Service, s, this->this$1->tryGet(this->index));
	if (s == nullptr) {
		$throwNew($NoSuchElementException);
	}
	++this->index;
	return s;
}

void ProviderList$ServiceList$1::remove() {
	$throwNew($UnsupportedOperationException);
}

ProviderList$ServiceList$1::ProviderList$ServiceList$1() {
}

$Class* ProviderList$ServiceList$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lsun/security/jca/ProviderList$ServiceList;", nullptr, $FINAL | $SYNTHETIC, $field(ProviderList$ServiceList$1, this$1)},
		{"index", "I", nullptr, 0, $field(ProviderList$ServiceList$1, index)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/jca/ProviderList$ServiceList;)V", nullptr, 0, $method(ProviderList$ServiceList$1, init$, void, $ProviderList$ServiceList*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(ProviderList$ServiceList$1, hasNext, bool)},
		{"next", "()Ljava/security/Provider$Service;", nullptr, $PUBLIC, $virtualMethod(ProviderList$ServiceList$1, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(ProviderList$ServiceList$1, remove, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.jca.ProviderList$ServiceList",
		"iterator",
		"()Ljava/util/Iterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.jca.ProviderList$ServiceList", "sun.security.jca.ProviderList", "ServiceList", $PRIVATE | $FINAL},
		{"sun.security.jca.ProviderList$ServiceList$1", nullptr, nullptr, 0},
		{"java.security.Provider$Service", "java.security.Provider", "Service", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.jca.ProviderList$ServiceList$1",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Ljava/security/Provider$Service;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.jca.ProviderList"
	};
	$loadClass(ProviderList$ServiceList$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProviderList$ServiceList$1);
	});
	return class$;
}

$Class* ProviderList$ServiceList$1::class$ = nullptr;

		} // jca
	} // security
} // sun