#include <java/security/Policy$UnsupportedEmptyCollection.h>

#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/security/Permissions.h>
#include <java/security/Policy.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $Permissions = ::java::security::Permissions;
using $Policy = ::java::security::Policy;
using $Enumeration = ::java::util::Enumeration;

namespace java {
	namespace security {

$FieldInfo _Policy$UnsupportedEmptyCollection_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Policy$UnsupportedEmptyCollection, serialVersionUID)},
	{"perms", "Ljava/security/Permissions;", nullptr, $PRIVATE, $field(Policy$UnsupportedEmptyCollection, perms)},
	{}
};

$MethodInfo _Policy$UnsupportedEmptyCollection_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Policy$UnsupportedEmptyCollection::*)()>(&Policy$UnsupportedEmptyCollection::init$))},
	{"add", "(Ljava/security/Permission;)V", nullptr, $PUBLIC},
	{"elements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/security/Permission;>;", $PUBLIC},
	{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Policy$UnsupportedEmptyCollection_InnerClassesInfo_[] = {
	{"java.security.Policy$UnsupportedEmptyCollection", "java.security.Policy", "UnsupportedEmptyCollection", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Policy$UnsupportedEmptyCollection_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.Policy$UnsupportedEmptyCollection",
	"java.security.PermissionCollection",
	nullptr,
	_Policy$UnsupportedEmptyCollection_FieldInfo_,
	_Policy$UnsupportedEmptyCollection_MethodInfo_,
	nullptr,
	nullptr,
	_Policy$UnsupportedEmptyCollection_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.Policy"
};

$Object* allocate$Policy$UnsupportedEmptyCollection($Class* clazz) {
	return $of($alloc(Policy$UnsupportedEmptyCollection));
}

void Policy$UnsupportedEmptyCollection::init$() {
	$PermissionCollection::init$();
	$set(this, perms, $new($Permissions));
	$nc(this->perms)->setReadOnly();
}

void Policy$UnsupportedEmptyCollection::add($Permission* permission) {
	$nc(this->perms)->add(permission);
}

bool Policy$UnsupportedEmptyCollection::implies($Permission* permission) {
	return $nc(this->perms)->implies(permission);
}

$Enumeration* Policy$UnsupportedEmptyCollection::elements() {
	return $nc(this->perms)->elements();
}

Policy$UnsupportedEmptyCollection::Policy$UnsupportedEmptyCollection() {
}

$Class* Policy$UnsupportedEmptyCollection::load$($String* name, bool initialize) {
	$loadClass(Policy$UnsupportedEmptyCollection, name, initialize, &_Policy$UnsupportedEmptyCollection_ClassInfo_, allocate$Policy$UnsupportedEmptyCollection);
	return class$;
}

$Class* Policy$UnsupportedEmptyCollection::class$ = nullptr;

	} // security
} // java