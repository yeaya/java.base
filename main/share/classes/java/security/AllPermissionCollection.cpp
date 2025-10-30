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

$FieldInfo _AllPermissionCollection_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AllPermissionCollection, serialVersionUID)},
	{"all_allowed", "Z", nullptr, $PRIVATE, $field(AllPermissionCollection, all_allowed)},
	{}
};

$MethodInfo _AllPermissionCollection_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AllPermissionCollection::*)()>(&AllPermissionCollection::init$))},
	{"add", "(Ljava/security/Permission;)V", nullptr, $PUBLIC},
	{"elements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/security/Permission;>;", $PUBLIC},
	{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AllPermissionCollection_InnerClassesInfo_[] = {
	{"java.security.AllPermissionCollection$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AllPermissionCollection_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.security.AllPermissionCollection",
	"java.security.PermissionCollection",
	nullptr,
	_AllPermissionCollection_FieldInfo_,
	_AllPermissionCollection_MethodInfo_,
	nullptr,
	nullptr,
	_AllPermissionCollection_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.security.AllPermissionCollection$1"
};

$Object* allocate$AllPermissionCollection($Class* clazz) {
	return $of($alloc(AllPermissionCollection));
}

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
	$loadClass(AllPermissionCollection, name, initialize, &_AllPermissionCollection_ClassInfo_, allocate$AllPermissionCollection);
	return class$;
}

$Class* AllPermissionCollection::class$ = nullptr;

	} // security
} // java