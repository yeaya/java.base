#include <java/security/AllPermissionCollection.h>
#include <java/lang/SecurityException.h>
#include <java/security/AllPermission.h>
#include <java/security/AllPermissionCollection$1.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $AllPermission = ::java::security::AllPermission;
using $AllPermissionCollection$1 = ::java::security::AllPermissionCollection$1;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $Enumeration = ::java::util::Enumeration;

namespace java {
	namespace security {

void AllPermissionCollection::init$() {
	$PermissionCollection::init$();
	this->all_allowed = false;
}

void AllPermissionCollection::add($Permission* permission) {
	if (!($instanceOf($AllPermission, permission))) {
		$throwNew($IllegalArgumentException, $$str({"invalid permission: "_s, permission}));
	}
	if (isReadOnly()) {
		$throwNew($SecurityException, "attempt to add a Permission to a readonly PermissionCollection"_s);
	}
	this->all_allowed = true;
}

bool AllPermissionCollection::implies($Permission* permission) {
	return this->all_allowed;
}

$Enumeration* AllPermissionCollection::elements() {
	return $new($AllPermissionCollection$1, this);
}

AllPermissionCollection::AllPermissionCollection() {
}

$Class* AllPermissionCollection::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AllPermissionCollection, serialVersionUID)},
		{"all_allowed", "Z", nullptr, $PRIVATE, $field(AllPermissionCollection, all_allowed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AllPermissionCollection, init$, void)},
		{"add", "(Ljava/security/Permission;)V", nullptr, $PUBLIC, $virtualMethod(AllPermissionCollection, add, void, $Permission*)},
		{"elements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/security/Permission;>;", $PUBLIC, $virtualMethod(AllPermissionCollection, elements, $Enumeration*)},
		{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC, $virtualMethod(AllPermissionCollection, implies, bool, $Permission*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.AllPermissionCollection$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.security.AllPermissionCollection",
		"java.security.PermissionCollection",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.security.AllPermissionCollection$1"
	};
	$loadClass(AllPermissionCollection, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AllPermissionCollection);
	});
	return class$;
}

$Class* AllPermissionCollection::class$ = nullptr;

	} // security
} // java