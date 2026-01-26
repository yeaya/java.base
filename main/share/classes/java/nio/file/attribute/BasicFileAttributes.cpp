#include <java/nio/file/attribute/BasicFileAttributes.h>

#include <java/nio/file/attribute/FileTime.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileTime = ::java::nio::file::attribute::FileTime;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$MethodInfo _BasicFileAttributes_MethodInfo_[] = {
	{"creationTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BasicFileAttributes, creationTime, $FileTime*)},
	{"fileKey", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BasicFileAttributes, fileKey, $Object*)},
	{"isDirectory", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BasicFileAttributes, isDirectory, bool)},
	{"isOther", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BasicFileAttributes, isOther, bool)},
	{"isRegularFile", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BasicFileAttributes, isRegularFile, bool)},
	{"isSymbolicLink", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BasicFileAttributes, isSymbolicLink, bool)},
	{"lastAccessTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BasicFileAttributes, lastAccessTime, $FileTime*)},
	{"lastModifiedTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BasicFileAttributes, lastModifiedTime, $FileTime*)},
	{"size", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BasicFileAttributes, size, int64_t)},
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