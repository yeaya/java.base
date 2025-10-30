#include <java/security/AllPermission.h>

#include <java/security/AllPermissionCollection.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AllPermissionCollection = ::java::security::AllPermissionCollection;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;

namespace java {
	namespace security {

$FieldInfo _AllPermission_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AllPermission, serialVersionUID)},
	{}
};

$MethodInfo _AllPermission_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AllPermission::*)()>(&AllPermission::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AllPermission::*)($String*,$String*)>(&AllPermission::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getActions", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC},
	{"newPermissionCollection", "()Ljava/security/PermissionCollection;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AllPermission_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.security.AllPermission",
	"java.security.Permission",
	nullptr,
	_AllPermission_FieldInfo_,
	_AllPermission_MethodInfo_
};

$Object* allocate$AllPermission($Class* clazz) {
	return $of($alloc(AllPermission));
}

void AllPermission::init$() {
	$Permission::init$("<all permissions>"_s);
}

void AllPermission::init$($String* name, $String* actions) {
	AllPermission::init$();
}

bool AllPermission::implies($Permission* p) {
	return true;
}

bool AllPermission::equals(Object$* obj) {
	return ($instanceOf(AllPermission, obj));
}

int32_t AllPermission::hashCode() {
	return 1;
}

$String* AllPermission::getActions() {
	return "<all actions>"_s;
}

$PermissionCollection* AllPermission::newPermissionCollection() {
	return $new($AllPermissionCollection);
}

AllPermission::AllPermission() {
}

$Class* AllPermission::load$($String* name, bool initialize) {
	$loadClass(AllPermission, name, initialize, &_AllPermission_ClassInfo_, allocate$AllPermission);
	return class$;
}

$Class* AllPermission::class$ = nullptr;

	} // security
} // java