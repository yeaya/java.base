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

$FieldInfo _UnresolvedPermissionCollection$1_FieldInfo_[] = {
	{"this$0", "Ljava/security/UnresolvedPermissionCollection;", nullptr, $FINAL | $SYNTHETIC, $field(UnresolvedPermissionCollection$1, this$0)},
	{"val$unresolvedPermission", "Ljava/security/UnresolvedPermission;", nullptr, $FINAL | $SYNTHETIC, $field(UnresolvedPermissionCollection$1, val$unresolvedPermission)},
	{}
};

$MethodInfo _UnresolvedPermissionCollection$1_MethodInfo_[] = {
	{"<init>", "(Ljava/security/UnresolvedPermissionCollection;Ljava/security/UnresolvedPermission;)V", nullptr, 0, $method(static_cast<void(UnresolvedPermissionCollection$1::*)($UnresolvedPermissionCollection*,$UnresolvedPermission*)>(&UnresolvedPermissionCollection$1::init$))},
	{"apply", "(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;", "(Ljava/lang/String;Ljava/util/List<Ljava/security/UnresolvedPermission;>;)Ljava/util/List<Ljava/security/UnresolvedPermission;>;", $PUBLIC},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _UnresolvedPermissionCollection$1_EnclosingMethodInfo_ = {
	"java.security.UnresolvedPermissionCollection",
	"add",
	"(Ljava/security/Permission;)V"
};

$InnerClassInfo _UnresolvedPermissionCollection$1_InnerClassesInfo_[] = {
	{"java.security.UnresolvedPermissionCollection$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _UnresolvedPermissionCollection$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.UnresolvedPermissionCollection$1",
	"java.lang.Object",
	"java.util.function.BiFunction",
	_UnresolvedPermissionCollection$1_FieldInfo_,
	_UnresolvedPermissionCollection$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/function/BiFunction<Ljava/lang/String;Ljava/util/List<Ljava/security/UnresolvedPermission;>;Ljava/util/List<Ljava/security/UnresolvedPermission;>;>;",
	&_UnresolvedPermissionCollection$1_EnclosingMethodInfo_,
	_UnresolvedPermissionCollection$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.UnresolvedPermissionCollection"
};

$Object* allocate$UnresolvedPermissionCollection$1($Class* clazz) {
	return $of($alloc(UnresolvedPermissionCollection$1));
}

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
		$nc(oldValue)->add(this->val$unresolvedPermission);
		return oldValue;
	}
}

$Object* UnresolvedPermissionCollection$1::apply(Object$* key, Object$* oldValue) {
	return $of(this->apply($cast($String, key), $cast($List, oldValue)));
}

UnresolvedPermissionCollection$1::UnresolvedPermissionCollection$1() {
}

$Class* UnresolvedPermissionCollection$1::load$($String* name, bool initialize) {
	$loadClass(UnresolvedPermissionCollection$1, name, initialize, &_UnresolvedPermissionCollection$1_ClassInfo_, allocate$UnresolvedPermissionCollection$1);
	return class$;
}

$Class* UnresolvedPermissionCollection$1::class$ = nullptr;

	} // security
} // java