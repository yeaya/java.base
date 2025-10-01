#include <java/security/BasicPermission.h>

#include <java/io/ObjectInputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/BasicPermissionCollection.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <jcpp.h>

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $BasicPermissionCollection = ::java::security::BasicPermissionCollection;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;

namespace java {
	namespace security {

$FieldInfo _BasicPermission_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicPermission, serialVersionUID)},
	{"wildcard", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(BasicPermission, wildcard)},
	{"path", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(BasicPermission, path)},
	{"exitVM", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(BasicPermission, exitVM)},
	{}
};

$MethodInfo _BasicPermission_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicPermission::*)($String*)>(&BasicPermission::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicPermission::*)($String*,$String*)>(&BasicPermission::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getActions", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCanonicalName", "()Ljava/lang/String;", nullptr, $FINAL, $method(static_cast<$String*(BasicPermission::*)()>(&BasicPermission::getCanonicalName))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC},
	{"init", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicPermission::*)($String*)>(&BasicPermission::init))},
	{"newPermissionCollection", "()Ljava/security/PermissionCollection;", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicPermission::*)($ObjectInputStream*)>(&BasicPermission::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{}
};

$ClassInfo _BasicPermission_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.security.BasicPermission",
	"java.security.Permission",
	nullptr,
	_BasicPermission_FieldInfo_,
	_BasicPermission_MethodInfo_
};

$Object* allocate$BasicPermission($Class* clazz) {
	return $of($alloc(BasicPermission));
}

void BasicPermission::init($String* name) {
	if (name == nullptr) {
		$throwNew($NullPointerException, "name can\'t be null"_s);
	}
	int32_t len = $nc(name)->length();
	if (len == 0) {
		$throwNew($IllegalArgumentException, "name can\'t be empty"_s);
	}
	char16_t last = name->charAt(len - 1);
	if (last == u'*' && (len == 1 || name->charAt(len - 2) == u'.')) {
		this->wildcard = true;
		if (len == 1) {
			$set(this, path, ""_s);
		} else {
			$set(this, path, name->substring(0, len - 1));
		}
	} else if ($nc(name)->equals("exitVM"_s)) {
		this->wildcard = true;
		$set(this, path, "exitVM."_s);
		this->exitVM = true;
	} else {
		$set(this, path, name);
	}
}

void BasicPermission::init$($String* name) {
	$Permission::init$(name);
	init(name);
}

void BasicPermission::init$($String* name, $String* actions) {
	$Permission::init$(name);
	init(name);
}

bool BasicPermission::implies($Permission* p) {
	bool var$0 = (p == nullptr);
	if (!var$0) {
		var$0 = ($nc($of(p))->getClass() != $of(this)->getClass());
	}
	if (var$0) {
		return false;
	}
	$var(BasicPermission, that, $cast(BasicPermission, p));
	if (this->wildcard) {
		if ($nc(that)->wildcard) {
			return $nc(that->path)->startsWith(this->path);
		} else {
			int32_t var$2 = $nc(that->path)->length();
			bool var$1 = (var$2 > $nc(this->path)->length());
			return var$1 && $nc(that->path)->startsWith(this->path);
		}
	} else if ($nc(that)->wildcard) {
		return false;
	} else {
		return $nc(this->path)->equals(that->path);
	}
}

bool BasicPermission::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	bool var$0 = (obj == nullptr);
	if (!var$0) {
		var$0 = ($nc($of(obj))->getClass() != $of(this)->getClass());
	}
	if (var$0) {
		return false;
	}
	$var(BasicPermission, bp, $cast(BasicPermission, obj));
	return $nc($(getName()))->equals($($nc(bp)->getName()));
}

int32_t BasicPermission::hashCode() {
	return $nc($(this->getName()))->hashCode();
}

$String* BasicPermission::getActions() {
	return ""_s;
}

$PermissionCollection* BasicPermission::newPermissionCollection() {
	return $new($BasicPermissionCollection, $of(this)->getClass());
}

void BasicPermission::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	init($(getName()));
}

$String* BasicPermission::getCanonicalName() {
	return this->exitVM ? "exitVM.*"_s : getName();
}

BasicPermission::BasicPermission() {
}

$Class* BasicPermission::load$($String* name, bool initialize) {
	$loadClass(BasicPermission, name, initialize, &_BasicPermission_ClassInfo_, allocate$BasicPermission);
	return class$;
}

$Class* BasicPermission::class$ = nullptr;

	} // security
} // java