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
using $Enumeration = ::java::util::Enumeration;

namespace java {
	namespace security {

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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Policy$UnsupportedEmptyCollection, serialVersionUID)},
		{"perms", "Ljava/security/Permissions;", nullptr, $PRIVATE, $field(Policy$UnsupportedEmptyCollection, perms)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Policy$UnsupportedEmptyCollection, init$, void)},
		{"add", "(Ljava/security/Permission;)V", nullptr, $PUBLIC, $virtualMethod(Policy$UnsupportedEmptyCollection, add, void, $Permission*)},
		{"elements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/security/Permission;>;", $PUBLIC, $virtualMethod(Policy$UnsupportedEmptyCollection, elements, $Enumeration*)},
		{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC, $virtualMethod(Policy$UnsupportedEmptyCollection, implies, bool, $Permission*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.Policy$UnsupportedEmptyCollection", "java.security.Policy", "UnsupportedEmptyCollection", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.security.Policy$UnsupportedEmptyCollection",
		"java.security.PermissionCollection",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.security.Policy"
	};
	$loadClass(Policy$UnsupportedEmptyCollection, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Policy$UnsupportedEmptyCollection);
	});
	return class$;
}

$Class* Policy$UnsupportedEmptyCollection::class$ = nullptr;

	} // security
} // java