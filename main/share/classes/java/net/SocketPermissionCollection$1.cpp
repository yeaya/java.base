#include <java/net/SocketPermissionCollection$1.h>
#include <java/net/SocketPermission.h>
#include <java/net/SocketPermissionCollection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketPermission = ::java::net::SocketPermission;
using $SocketPermissionCollection = ::java::net::SocketPermissionCollection;

namespace java {
	namespace net {

void SocketPermissionCollection$1::init$($SocketPermissionCollection* this$0, $SocketPermission* val$sp) {
	$set(this, this$0, this$0);
	$set(this, val$sp, val$sp);
}

$SocketPermission* SocketPermissionCollection$1::apply($SocketPermission* existingVal, $SocketPermission* newVal) {
	int32_t oldMask = $nc(existingVal)->getMask();
	int32_t newMask = $nc(newVal)->getMask();
	if (oldMask != newMask) {
		int32_t effective = oldMask | newMask;
		if (effective == newMask) {
			return newVal;
		}
		if (effective != oldMask) {
			return $new($SocketPermission, $($nc(this->val$sp)->getName()), effective);
		}
	}
	return existingVal;
}

$Object* SocketPermissionCollection$1::apply(Object$* existingVal, Object$* newVal) {
	return $of(this->apply($cast($SocketPermission, existingVal), $cast($SocketPermission, newVal)));
}

SocketPermissionCollection$1::SocketPermissionCollection$1() {
}

$Class* SocketPermissionCollection$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/net/SocketPermissionCollection;", nullptr, $FINAL | $SYNTHETIC, $field(SocketPermissionCollection$1, this$0)},
		{"val$sp", "Ljava/net/SocketPermission;", nullptr, $FINAL | $SYNTHETIC, $field(SocketPermissionCollection$1, val$sp)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/SocketPermissionCollection;Ljava/net/SocketPermission;)V", nullptr, 0, $method(SocketPermissionCollection$1, init$, void, $SocketPermissionCollection*, $SocketPermission*)},
		{"apply", "(Ljava/net/SocketPermission;Ljava/net/SocketPermission;)Ljava/net/SocketPermission;", nullptr, $PUBLIC, $virtualMethod(SocketPermissionCollection$1, apply, $SocketPermission*, $SocketPermission*, $SocketPermission*)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(SocketPermissionCollection$1, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.net.SocketPermissionCollection",
		"add",
		"(Ljava/security/Permission;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.SocketPermissionCollection$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.SocketPermissionCollection$1",
		"java.lang.Object",
		"java.util.function.BiFunction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/function/BiFunction<Ljava/net/SocketPermission;Ljava/net/SocketPermission;Ljava/net/SocketPermission;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.SocketPermissionCollection"
	};
	$loadClass(SocketPermissionCollection$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SocketPermissionCollection$1);
	});
	return class$;
}

$Class* SocketPermissionCollection$1::class$ = nullptr;

	} // net
} // java