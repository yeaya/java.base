#include <java/nio/file/attribute/PosixFileAttributes.h>

#include <java/nio/file/attribute/GroupPrincipal.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$MethodInfo _PosixFileAttributes_MethodInfo_[] = {
	{"group", "()Ljava/nio/file/attribute/GroupPrincipal;", nullptr, $PUBLIC | $ABSTRACT},
	{"owner", "()Ljava/nio/file/attribute/UserPrincipal;", nullptr, $PUBLIC | $ABSTRACT},
	{"permissions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/nio/file/attribute/PosixFilePermission;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PosixFileAttributes_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.file.attribute.PosixFileAttributes",
	nullptr,
	"java.nio.file.attribute.BasicFileAttributes",
	nullptr,
	_PosixFileAttributes_MethodInfo_
};

$Object* allocate$PosixFileAttributes($Class* clazz) {
	return $of($alloc(PosixFileAttributes));
}

$Class* PosixFileAttributes::load$($String* name, bool initialize) {
	$loadClass(PosixFileAttributes, name, initialize, &_PosixFileAttributes_ClassInfo_, allocate$PosixFileAttributes);
	return class$;
}

$Class* PosixFileAttributes::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java