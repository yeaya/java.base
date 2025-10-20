#include <EmptySet.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/attribute/AclEntry$Builder.h>
#include <java/nio/file/attribute/AclEntry.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AclEntry = ::java::nio::file::attribute::AclEntry;
using $AclEntry$Builder = ::java::nio::file::attribute::AclEntry$Builder;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;

$MethodInfo _EmptySet_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(EmptySet::*)()>(&EmptySet::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&EmptySet::main))},
	{}
};

$ClassInfo _EmptySet_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"EmptySet",
	"java.lang.Object",
	nullptr,
	nullptr,
	_EmptySet_MethodInfo_
};

$Object* allocate$EmptySet($Class* clazz) {
	return $of($alloc(EmptySet));
}

void EmptySet::init$() {
}

void EmptySet::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Set, flags, $new($HashSet));
	$nc($($AclEntry::newBuilder()))->setFlags(flags);
	$var($Set, perms, $new($HashSet));
	$nc($($AclEntry::newBuilder()))->setPermissions(perms);
}

EmptySet::EmptySet() {
}

$Class* EmptySet::load$($String* name, bool initialize) {
	$loadClass(EmptySet, name, initialize, &_EmptySet_ClassInfo_, allocate$EmptySet);
	return class$;
}

$Class* EmptySet::class$ = nullptr;