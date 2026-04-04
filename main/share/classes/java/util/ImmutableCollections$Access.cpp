#include <java/util/ImmutableCollections$Access.h>
#include <java/util/ImmutableCollections$Access$1.h>
#include <java/util/ImmutableCollections.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImmutableCollections$Access$1 = ::java::util::ImmutableCollections$Access$1;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace java {
	namespace util {

void ImmutableCollections$Access::init$() {
}

void ImmutableCollections$Access::clinit$($Class* clazz) {
	{
		$SharedSecrets::setJavaUtilCollectionAccess($$new($ImmutableCollections$Access$1));
	}
}

ImmutableCollections$Access::ImmutableCollections$Access() {
}

$Class* ImmutableCollections$Access::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ImmutableCollections$Access, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.ImmutableCollections$Access", "java.util.ImmutableCollections", "Access", $STATIC},
		{"java.util.ImmutableCollections$Access$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.ImmutableCollections$Access",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.ImmutableCollections"
	};
	$loadClass(ImmutableCollections$Access, name, initialize, &classInfo$$, ImmutableCollections$Access::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ImmutableCollections$Access);
	});
	return class$;
}

$Class* ImmutableCollections$Access::class$ = nullptr;

	} // util
} // java