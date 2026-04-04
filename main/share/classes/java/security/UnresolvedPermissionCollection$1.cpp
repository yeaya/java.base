#include <java/security/UnresolvedPermissionCollection$1.h>
#include <java/security/UnresolvedPermission.h>
#include <java/security/UnresolvedPermissionCollection.h>
#include <java/util/List.h>
#include <java/util/concurrent/CopyOnWriteArrayList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnresolvedPermission = ::java::security::UnresolvedPermission;
using $UnresolvedPermissionCollection = ::java::security::UnresolvedPermissionCollection;
using $List = ::java::util::List;
using $CopyOnWriteArrayList = ::java::util::concurrent::CopyOnWriteArrayList;

namespace java {
	namespace security {

void UnresolvedPermissionCollection$1::init$($UnresolvedPermissionCollection* this$0, $UnresolvedPermission* val$unresolvedPermission) {
	$set(this, this$0, this$0);
	$set(this, val$unresolvedPermission, val$unresolvedPermission);
}

$List* UnresolvedPermissionCollection$1::apply($String* key, $List* oldValue) {
	if (oldValue == nullptr) {
		$var($List, v, $new($CopyOnWriteArrayList));
		v->add(this->val$unresolvedPermission);
		return v;
	} else {
		oldValue->add(this->val$unresolvedPermission);
		return oldValue;
	}
}

$Object* UnresolvedPermissionCollection$1::apply(Object$* key, Object$* oldValue) {
	return this->apply($cast($String, key), $cast($List, oldValue));
}

UnresolvedPermissionCollection$1::UnresolvedPermissionCollection$1() {
}

$Class* UnresolvedPermissionCollection$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/security/UnresolvedPermissionCollection;", nullptr, $FINAL | $SYNTHETIC, $field(UnresolvedPermissionCollection$1, this$0)},
		{"val$unresolvedPermission", "Ljava/security/UnresolvedPermission;", nullptr, $FINAL | $SYNTHETIC, $field(UnresolvedPermissionCollection$1, val$unresolvedPermission)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/UnresolvedPermissionCollection;Ljava/security/UnresolvedPermission;)V", nullptr, 0, $method(UnresolvedPermissionCollection$1, init$, void, $UnresolvedPermissionCollection*, $UnresolvedPermission*)},
		{"apply", "(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;", "(Ljava/lang/String;Ljava/util/List<Ljava/security/UnresolvedPermission;>;)Ljava/util/List<Ljava/security/UnresolvedPermission;>;", $PUBLIC, $virtualMethod(UnresolvedPermissionCollection$1, apply, $List*, $String*, $List*)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(UnresolvedPermissionCollection$1, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.security.UnresolvedPermissionCollection",
		"add",
		"(Ljava/security/Permission;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.UnresolvedPermissionCollection$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.security.UnresolvedPermissionCollection$1",
		"java.lang.Object",
		"java.util.function.BiFunction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/function/BiFunction<Ljava/lang/String;Ljava/util/List<Ljava/security/UnresolvedPermission;>;Ljava/util/List<Ljava/security/UnresolvedPermission;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.security.UnresolvedPermissionCollection"
	};
	$loadClass(UnresolvedPermissionCollection$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnresolvedPermissionCollection$1);
	});
	return class$;
}

$Class* UnresolvedPermissionCollection$1::class$ = nullptr;

	} // security
} // java