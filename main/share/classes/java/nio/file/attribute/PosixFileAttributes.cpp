#include <java/nio/file/attribute/PosixFileAttributes.h>
#include <java/nio/file/attribute/GroupPrincipal.h>
#include <java/nio/file/attribute/UserPrincipal.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GroupPrincipal = ::java::nio::file::attribute::GroupPrincipal;
using $UserPrincipal = ::java::nio::file::attribute::UserPrincipal;
using $Set = ::java::util::Set;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$Class* PosixFileAttributes::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"group", "()Ljava/nio/file/attribute/GroupPrincipal;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PosixFileAttributes, group, $GroupPrincipal*)},
		{"owner", "()Ljava/nio/file/attribute/UserPrincipal;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PosixFileAttributes, owner, $UserPrincipal*)},
		{"permissions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/nio/file/attribute/PosixFilePermission;>;", $PUBLIC | $ABSTRACT, $virtualMethod(PosixFileAttributes, permissions, $Set*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.file.attribute.PosixFileAttributes",
		nullptr,
		"java.nio.file.attribute.BasicFileAttributes",
		nullptr,
		methodInfos$$
	};
	$loadClass(PosixFileAttributes, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PosixFileAttributes);
	});
	return class$;
}

$Class* PosixFileAttributes::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java