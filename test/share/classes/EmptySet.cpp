#include <EmptySet.h>
#include <java/nio/file/attribute/AclEntry$Builder.h>
#include <java/nio/file/attribute/AclEntry.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AclEntry = ::java::nio::file::attribute::AclEntry;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;

void EmptySet::init$() {
}

void EmptySet::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Set, flags, $new($HashSet));
	$$nc($AclEntry::newBuilder())->setFlags(flags);
	$var($Set, perms, $new($HashSet));
	$$nc($AclEntry::newBuilder())->setPermissions(perms);
}

EmptySet::EmptySet() {
}

$Class* EmptySet::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(EmptySet, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(EmptySet, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"EmptySet",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(EmptySet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EmptySet);
	});
	return class$;
}

$Class* EmptySet::class$ = nullptr;