#include <FilePermissionCollection.h>
#include <java/io/FilePermission.h>
#include <java/security/PermissionCollection.h>
#include <java/security/SecurityPermission.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

using $FilePermission = ::java::io::FilePermission;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $PermissionCollection = ::java::security::PermissionCollection;
using $SecurityPermission = ::java::security::SecurityPermission;
using $Enumeration = ::java::util::Enumeration;

void FilePermissionCollection::init$() {
}

void FilePermissionCollection::main($StringArray* args) {
	$useLocalObjectStack();
	int32_t testFail = 0;
	$var($FilePermission, perm, $new($FilePermission, "/tmp/foo"_s, "read"_s));
	$var($PermissionCollection, perms, perm->newPermissionCollection());
	$nc($System::out)->println("test 1: add throws IllegalArgExc for wrong perm type"_s);
	try {
		$nc(perms)->add($$new($SecurityPermission, "createAccessControlContext"_s));
		$System::out->println("Expected IllegalArgumentException"_s);
		++testFail;
	} catch ($IllegalArgumentException& iae) {
	}
	$System::out->println("test 2: implies returns false for wrong perm type"_s);
	if ($nc(perms)->implies($$new($SecurityPermission, "getPolicy"_s))) {
		$System::out->println("Expected false, returned true"_s);
		++testFail;
	}
	$System::out->println("test 3: implies returns true for match on name and action"_s);
	perms->add($$new($FilePermission, "/tmp/foo"_s, "read"_s));
	if (!perms->implies($$new($FilePermission, "/tmp/foo"_s, "read"_s))) {
		$System::out->println("Expected true, returned false"_s);
		++testFail;
	}
	$System::out->println("test 4: implies returns false for match on name but not action"_s);
	if (perms->implies($$new($FilePermission, "/tmp/foo"_s, "write"_s))) {
		$System::out->println("Expected false, returned true"_s);
		++testFail;
	}
	$System::out->println("test 5: implies returns true for match on name and subset of actions"_s);
	perms->add($$new($FilePermission, "/tmp/bar"_s, "read, write"_s));
	if (!perms->implies($$new($FilePermission, "/tmp/bar"_s, "write"_s))) {
		$System::out->println("Expected true, returned false"_s);
		++testFail;
	}
	$System::out->println("test 6: implies returns true for aggregate match on name and action"_s);
	perms->add($$new($FilePermission, "/tmp/baz"_s, "read"_s));
	perms->add($$new($FilePermission, "/tmp/baz"_s, "write"_s));
	if (!perms->implies($$new($FilePermission, "/tmp/baz"_s, "read"_s))) {
		$System::out->println("Expected true, returned false"_s);
		++testFail;
	}
	if (!perms->implies($$new($FilePermission, "/tmp/baz"_s, "write,read"_s))) {
		$System::out->println("Expected true, returned false"_s);
		++testFail;
	}
	$System::out->println("test 7: implies returns true for wildcard and match on action"_s);
	perms->add($$new($FilePermission, "/usr/tmp/*"_s, "read"_s));
	if (!perms->implies($$new($FilePermission, "/usr/tmp/foo"_s, "read"_s))) {
		$System::out->println("Expected true, returned false"_s);
		++testFail;
	}
	$System::out->println("test 8: implies returns false for non-match on wildcard"_s);
	if (perms->implies($$new($FilePermission, "/usr/tmp/bar/foo"_s, "read"_s))) {
		$System::out->println("Expected false, returned true"_s);
		++testFail;
	}
	$System::out->println("test 9: implies returns true for deep wildcard match"_s);
	perms->add($$new($FilePermission, "/usr/tmp/-"_s, "read"_s));
	if (!perms->implies($$new($FilePermission, "/usr/tmp/bar/foo"_s, "read"_s))) {
		$System::out->println("Expected true, returned false"_s);
		++testFail;
	}
	perms->add($$new($FilePermission, "."_s, "read"_s));
	$System::out->println("test 11: implies returns true for all wildcard and match on action"_s);
	perms->add($$new($FilePermission, "<<ALL FILES>>"_s, "read"_s));
	if (!perms->implies($$new($FilePermission, "/tmp/foobar"_s, "read"_s))) {
		$System::out->println("Expected true, returned false"_s);
		++testFail;
	}
	$System::out->println("test 12: implies returns false for wildcard and non-match on action"_s);
	if (perms->implies($$new($FilePermission, "/tmp/foobar"_s, "write"_s))) {
		$System::out->println("Expected false, returned true"_s);
		++testFail;
	}
	$System::out->println("test 13: elements returns correct number of perms"_s);
	int32_t numPerms = 0;
	$var($Enumeration, e, perms->elements());
	while ($nc(e)->hasMoreElements()) {
		++numPerms;
		$System::out->println($(e->nextElement()));
	}
	if (numPerms != 7) {
		$System::out->println($$str({"Expected 7, got "_s, $$str(numPerms)}));
		++testFail;
	}
	if (testFail > 0) {
		$throwNew($Exception, $$str({$$str(testFail), " test(s) failed"_s}));
	}
}

FilePermissionCollection::FilePermissionCollection() {
}

$Class* FilePermissionCollection::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FilePermissionCollection, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(FilePermissionCollection, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"FilePermissionCollection",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FilePermissionCollection, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FilePermissionCollection);
	});
	return class$;
}

$Class* FilePermissionCollection::class$ = nullptr;