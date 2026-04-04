#include <sun/nio/fs/BasicFileAttributesHolder.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;

namespace sun {
	namespace nio {
		namespace fs {

$Class* BasicFileAttributesHolder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"get", "()Ljava/nio/file/attribute/BasicFileAttributes;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BasicFileAttributesHolder, get, $BasicFileAttributes*)},
		{"invalidate", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BasicFileAttributesHolder, invalidate, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.nio.fs.BasicFileAttributesHolder",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicFileAttributesHolder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicFileAttributesHolder);
	});
	return class$;
}

$Class* BasicFileAttributesHolder::class$ = nullptr;

		} // fs
	} // nio
} // sun