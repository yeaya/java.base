#include <sun/security/util/LazyCodeSourcePermissionCollection.h>

#include <java/io/File.h>
#include <java/io/FilePermission.h>
#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/security/CodeSource.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/util/Enumeration.h>
#include <sun/security/util/SecurityConstants.h>
#include <jcpp.h>

#undef FILE_READ_ACTION

using $File = ::java::io::File;
using $FilePermission = ::java::io::FilePermission;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $CodeSource = ::java::security::CodeSource;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $Enumeration = ::java::util::Enumeration;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _LazyCodeSourcePermissionCollection_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LazyCodeSourcePermissionCollection, serialVersionUID)},
	{"perms", "Ljava/security/PermissionCollection;", nullptr, $PRIVATE | $FINAL, $field(LazyCodeSourcePermissionCollection, perms)},
	{"cs", "Ljava/security/CodeSource;", nullptr, $PRIVATE | $FINAL, $field(LazyCodeSourcePermissionCollection, cs)},
	{"permissionAdded", "Z", nullptr, $PRIVATE | $VOLATILE, $field(LazyCodeSourcePermissionCollection, permissionAdded)},
	{}
};

$MethodInfo _LazyCodeSourcePermissionCollection_MethodInfo_[] = {
	{"<init>", "(Ljava/security/PermissionCollection;Ljava/security/CodeSource;)V", nullptr, $PUBLIC, $method(static_cast<void(LazyCodeSourcePermissionCollection::*)($PermissionCollection*,$CodeSource*)>(&LazyCodeSourcePermissionCollection::init$))},
	{"add", "(Ljava/security/Permission;)V", nullptr, $PUBLIC},
	{"elements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/security/Permission;>;", $PUBLIC},
	{"ensureAdded", "()V", nullptr, $PRIVATE, $method(static_cast<void(LazyCodeSourcePermissionCollection::*)()>(&LazyCodeSourcePermissionCollection::ensureAdded))},
	{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(LazyCodeSourcePermissionCollection::*)()>(&LazyCodeSourcePermissionCollection::writeReplace))},
	{}
};

$ClassInfo _LazyCodeSourcePermissionCollection_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.util.LazyCodeSourcePermissionCollection",
	"java.security.PermissionCollection",
	nullptr,
	_LazyCodeSourcePermissionCollection_FieldInfo_,
	_LazyCodeSourcePermissionCollection_MethodInfo_
};

$Object* allocate$LazyCodeSourcePermissionCollection($Class* clazz) {
	return $of($alloc(LazyCodeSourcePermissionCollection));
}

void LazyCodeSourcePermissionCollection::init$($PermissionCollection* perms, $CodeSource* cs) {
	$PermissionCollection::init$();
	$set(this, perms, perms);
	$set(this, cs, cs);
}

void LazyCodeSourcePermissionCollection::ensureAdded() {
	if (!this->permissionAdded) {
		$synchronized(this->perms) {
			if (this->permissionAdded) {
				return;
			}
			$var($URL, location, $nc(this->cs)->getLocation());
			if (location != nullptr) {
				try {
					$var($Permission, p, $nc($(location->openConnection()))->getPermission());
					if (p != nullptr) {
						if ($instanceOf($FilePermission, p)) {
							$var($String, path, p->getName());
							$init($File);
							if ($nc(path)->endsWith($File::separator)) {
								$plusAssign(path, "-"_s);
								$init($SecurityConstants);
								$assign(p, $new($FilePermission, path, $SecurityConstants::FILE_READ_ACTION));
							}
						}
						$nc(this->perms)->add(p);
					}
				} catch ($IOException&) {
					$catch();
				}
			}
			if (isReadOnly()) {
				$nc(this->perms)->setReadOnly();
			}
			this->permissionAdded = true;
		}
	}
}

void LazyCodeSourcePermissionCollection::add($Permission* permission) {
	if (isReadOnly()) {
		$throwNew($SecurityException, "attempt to add a Permission to a readonly PermissionCollection"_s);
	}
	$nc(this->perms)->add(permission);
}

bool LazyCodeSourcePermissionCollection::implies($Permission* permission) {
	ensureAdded();
	return $nc(this->perms)->implies(permission);
}

$Enumeration* LazyCodeSourcePermissionCollection::elements() {
	ensureAdded();
	return $nc(this->perms)->elements();
}

$String* LazyCodeSourcePermissionCollection::toString() {
	ensureAdded();
	return $nc(this->perms)->toString();
}

$Object* LazyCodeSourcePermissionCollection::writeReplace() {
	ensureAdded();
	return $of(this->perms);
}

LazyCodeSourcePermissionCollection::LazyCodeSourcePermissionCollection() {
}

$Class* LazyCodeSourcePermissionCollection::load$($String* name, bool initialize) {
	$loadClass(LazyCodeSourcePermissionCollection, name, initialize, &_LazyCodeSourcePermissionCollection_ClassInfo_, allocate$LazyCodeSourcePermissionCollection);
	return class$;
}

$Class* LazyCodeSourcePermissionCollection::class$ = nullptr;

		} // util
	} // security
} // sun