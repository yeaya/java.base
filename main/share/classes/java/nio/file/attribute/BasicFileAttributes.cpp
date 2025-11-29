#include <java/nio/file/attribute/BasicFileAttributes.h>

#include <java/nio/file/attribute/FileTime.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$MethodInfo _BasicFileAttributes_MethodInfo_[] = {
	{"creationTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC | $ABSTRACT},
	{"fileKey", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"isDirectory", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isOther", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isRegularFile", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isSymbolicLink", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"lastAccessTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC | $ABSTRACT},
	{"lastModifiedTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC | $ABSTRACT},
	{"size", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _BasicFileAttributes_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.file.attribute.BasicFileAttributes",
	nullptr,
	nullptr,
	nullptr,
	_BasicFileAttributes_MethodInfo_
};

$Object* allocate$BasicFileAttributes($Class* clazz) {
	return $of($alloc(BasicFileAttributes));
}

$Class* BasicFileAttributes::load$($String* name, bool initialize) {
	$loadClass(BasicFileAttributes, name, initialize, &_BasicFileAttributes_ClassInfo_, allocate$BasicFileAttributes);
	return class$;
}

$Class* BasicFileAttributes::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java