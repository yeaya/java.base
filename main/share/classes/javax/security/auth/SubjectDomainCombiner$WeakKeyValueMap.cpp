#include <javax/security/auth/SubjectDomainCombiner$WeakKeyValueMap.h>
#include <java/lang/ref/WeakReference.h>
#include <java/util/WeakHashMap.h>
#include <javax/security/auth/SubjectDomainCombiner.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $WeakHashMap = ::java::util::WeakHashMap;

namespace javax {
	namespace security {
		namespace auth {

void SubjectDomainCombiner$WeakKeyValueMap::init$() {
	$WeakHashMap::init$();
}

$Object* SubjectDomainCombiner$WeakKeyValueMap::getValue(Object$* key) {
	$var($WeakReference, wr, $cast($WeakReference, $WeakHashMap::get(key)));
	if (wr != nullptr) {
		return wr->get();
	}
	return nullptr;
}

$Object* SubjectDomainCombiner$WeakKeyValueMap::putValue(Object$* key, Object$* value) {
	$useLocalObjectStack();
	$var($WeakReference, wr, $cast($WeakReference, $WeakHashMap::put(key, $$new($WeakReference, value))));
	if (wr != nullptr) {
		return wr->get();
	}
	return nullptr;
}

SubjectDomainCombiner$WeakKeyValueMap::SubjectDomainCombiner$WeakKeyValueMap() {
}

$Class* SubjectDomainCombiner$WeakKeyValueMap::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SubjectDomainCombiner$WeakKeyValueMap, init$, void)},
		{"getValue", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TK;)TV;", $PUBLIC, $virtualMethod(SubjectDomainCombiner$WeakKeyValueMap, getValue, $Object*, Object$*)},
		{"putValue", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK;TV;)TV;", $PUBLIC, $virtualMethod(SubjectDomainCombiner$WeakKeyValueMap, putValue, $Object*, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.security.auth.SubjectDomainCombiner$WeakKeyValueMap", "javax.security.auth.SubjectDomainCombiner", "WeakKeyValueMap", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.security.auth.SubjectDomainCombiner$WeakKeyValueMap",
		"java.util.WeakHashMap",
		nullptr,
		nullptr,
		methodInfos$$,
		"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/WeakHashMap<TK;Ljava/lang/ref/WeakReference<TV;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.security.auth.SubjectDomainCombiner"
	};
	$loadClass(SubjectDomainCombiner$WeakKeyValueMap, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SubjectDomainCombiner$WeakKeyValueMap);
	});
	return class$;
}

$Class* SubjectDomainCombiner$WeakKeyValueMap::class$ = nullptr;

		} // auth
	} // security
} // javax