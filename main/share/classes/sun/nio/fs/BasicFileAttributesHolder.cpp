#include <sun/nio/fs/BasicFileAttributesHolder.h>

#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;

namespace sun {
	namespace nio {
		namespace fs {

$MethodInfo _BasicFileAttributesHolder_MethodInfo_[] = {
	{"get", "()Ljava/nio/file/attribute/BasicFileAttributes;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BasicFileAttributesHolder, get, $BasicFileAttributes*)},
	{"invalidate", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BasicFileAttributesHolder, invalidate, void)},
	{}
};

$ClassInfo _BasicFileAttributesHolder_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.nio.fs.BasicFileAttributesHolder",
	nullptr,
	nullptr,
	nullptr,
	_BasicFileAttributesHolder_MethodInfo_
};

$Object* allocate$BasicFileAttributesHolder($Class* clazz) {
	return $of($alloc(BasicFileAttributesHolder));
}

$Class* BasicFileAttributesHolder::load$($String* name, bool initialize) {
	$loadClass(BasicFileAttributesHolder, name, initialize, &_BasicFileAttributesHolder_ClassInfo_, allocate$BasicFileAttributesHolder);
	return class$;
}

$Class* BasicFileAttributesHolder::class$ = nullptr;

		} // fs
	} // nio
} // sun