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

$FieldInfo _SocketPermissionCollection$1_FieldInfo_[] = {
	{"this$0", "Ljava/net/SocketPermissionCollection;", nullptr, $FINAL | $SYNTHETIC, $field(SocketPermissionCollection$1, this$0)},
	{"val$sp", "Ljava/net/SocketPermission;", nullptr, $FINAL | $SYNTHETIC, $field(SocketPermissionCollection$1, val$sp)},
	{}
};

$MethodInfo _SocketPermissionCollection$1_MethodInfo_[] = {
	{"<init>", "(Ljava/net/SocketPermissionCollection;Ljava/net/SocketPermission;)V", nullptr, 0, $method(SocketPermissionCollection$1, init$, void, $SocketPermissionCollection*, $SocketPermission*)},
	{"apply", "(Ljava/net/SocketPermission;Ljava/net/SocketPermission;)Ljava/net/SocketPermission;", nullptr, $PUBLIC, $virtualMethod(SocketPermissionCollection$1, apply, $SocketPermission*, $SocketPermission*, $SocketPermission*)},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(SocketPermissionCollection$1, apply, $Object*, Object$*, Object$*)},
	{}
};

$EnclosingMethodInfo _SocketPermissionCollection$1_EnclosingMethodInfo_ = {
	"java.net.SocketPermissionCollection",
	"add",
	"(Ljava/security/Permission;)V"
};

$InnerClassInfo _SocketPermissionCollection$1_InnerClassesInfo_[] = {
	{"java.net.SocketPermissionCollection$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SocketPermissionCollection$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.SocketPermissionCollection$1",
	"java.lang.Object",
	"java.util.function.BiFunction",
	_SocketPermissionCollection$1_FieldInfo_,
	_SocketPermissionCollection$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/function/BiFunction<Ljava/net/SocketPermission;Ljava/net/SocketPermission;Ljava/net/SocketPermission;>;",
	&_SocketPermissionCollection$1_EnclosingMethodInfo_,
	_SocketPermissionCollection$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.SocketPermissionCollection"
};

$Object* allocate$SocketPermissionCollection$1($Class* clazz) {
	return $of($alloc(SocketPermissionCollection$1));
}

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
	$loadClass(SocketPermissionCollection$1, name, initialize, &_SocketPermissionCollection$1_ClassInfo_, allocate$SocketPermissionCollection$1);
	return class$;
}

$Class* SocketPermissionCollection$1::class$ = nullptr;

	} // net
} // java