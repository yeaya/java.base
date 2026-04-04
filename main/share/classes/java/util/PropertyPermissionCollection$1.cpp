#include <java/util/PropertyPermissionCollection$1.h>
#include <java/util/PropertyPermission.h>
#include <java/util/PropertyPermissionCollection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PropertyPermission = ::java::util::PropertyPermission;
using $PropertyPermissionCollection = ::java::util::PropertyPermissionCollection;

namespace java {
	namespace util {

void PropertyPermissionCollection$1::init$($PropertyPermissionCollection* this$0, $String* val$propName) {
	$set(this, this$0, this$0);
	$set(this, val$propName, val$propName);
}

$PropertyPermission* PropertyPermissionCollection$1::apply($PropertyPermission* existingVal, $PropertyPermission* newVal) {
	int32_t oldMask = $nc(existingVal)->getMask();
	int32_t newMask = $nc(newVal)->getMask();
	if (oldMask != newMask) {
		int32_t effective = oldMask | newMask;
		if (effective == newMask) {
			return newVal;
		}
		if (effective != oldMask) {
			return $new($PropertyPermission, this->val$propName, effective);
		}
	}
	return existingVal;
}

$Object* PropertyPermissionCollection$1::apply(Object$* existingVal, Object$* newVal) {
	return $of(this->apply($cast($PropertyPermission, existingVal), $cast($PropertyPermission, newVal)));
}

PropertyPermissionCollection$1::PropertyPermissionCollection$1() {
}

$Class* PropertyPermissionCollection$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/PropertyPermissionCollection;", nullptr, $FINAL | $SYNTHETIC, $field(PropertyPermissionCollection$1, this$0)},
		{"val$propName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(PropertyPermissionCollection$1, val$propName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/PropertyPermissionCollection;Ljava/lang/String;)V", nullptr, 0, $method(PropertyPermissionCollection$1, init$, void, $PropertyPermissionCollection*, $String*)},
		{"apply", "(Ljava/util/PropertyPermission;Ljava/util/PropertyPermission;)Ljava/util/PropertyPermission;", nullptr, $PUBLIC, $virtualMethod(PropertyPermissionCollection$1, apply, $PropertyPermission*, $PropertyPermission*, $PropertyPermission*)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(PropertyPermissionCollection$1, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.PropertyPermissionCollection",
		"add",
		"(Ljava/security/Permission;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.PropertyPermissionCollection$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.PropertyPermissionCollection$1",
		"java.lang.Object",
		"java.util.function.BiFunction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/function/BiFunction<Ljava/util/PropertyPermission;Ljava/util/PropertyPermission;Ljava/util/PropertyPermission;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.PropertyPermissionCollection"
	};
	$loadClass(PropertyPermissionCollection$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PropertyPermissionCollection$1);
	});
	return class$;
}

$Class* PropertyPermissionCollection$1::class$ = nullptr;

	} // util
} // java