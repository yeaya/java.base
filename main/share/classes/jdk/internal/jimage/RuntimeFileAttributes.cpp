#include <jdk/internal/jimage/RuntimeFileAttributes.h>
#include <java/nio/file/attribute/FileTime.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileTime = ::java::nio::file::attribute::FileTime;

namespace jdk {
	namespace internal {
		namespace jimage {

void RuntimeFileAttributes::init$() {
}

$FileTime* RuntimeFileAttributes::creationTime() {
	return $FileTime::fromMillis($System::currentTimeMillis());
}

bool RuntimeFileAttributes::isDirectory() {
	return false;
}

bool RuntimeFileAttributes::isOther() {
	return false;
}

bool RuntimeFileAttributes::isRegularFile() {
	return true;
}

$FileTime* RuntimeFileAttributes::lastAccessTime() {
	return $FileTime::fromMillis($System::currentTimeMillis());
}

$FileTime* RuntimeFileAttributes::lastModifiedTime() {
	return $FileTime::fromMillis($System::currentTimeMillis());
}

int64_t RuntimeFileAttributes::size() {
	return 0;
}

bool RuntimeFileAttributes::isSymbolicLink() {
	return false;
}

$Object* RuntimeFileAttributes::fileKey() {
	return this;
}

RuntimeFileAttributes::RuntimeFileAttributes() {
}

$Class* RuntimeFileAttributes::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RuntimeFileAttributes, init$, void)},
		{"creationTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC, $virtualMethod(RuntimeFileAttributes, creationTime, $FileTime*)},
		{"fileKey", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(RuntimeFileAttributes, fileKey, $Object*)},
		{"isDirectory", "()Z", nullptr, $PUBLIC, $virtualMethod(RuntimeFileAttributes, isDirectory, bool)},
		{"isOther", "()Z", nullptr, $PUBLIC, $virtualMethod(RuntimeFileAttributes, isOther, bool)},
		{"isRegularFile", "()Z", nullptr, $PUBLIC, $virtualMethod(RuntimeFileAttributes, isRegularFile, bool)},
		{"isSymbolicLink", "()Z", nullptr, $PUBLIC, $virtualMethod(RuntimeFileAttributes, isSymbolicLink, bool)},
		{"lastAccessTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC, $virtualMethod(RuntimeFileAttributes, lastAccessTime, $FileTime*)},
		{"lastModifiedTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC, $virtualMethod(RuntimeFileAttributes, lastModifiedTime, $FileTime*)},
		{"size", "()J", nullptr, $PUBLIC, $virtualMethod(RuntimeFileAttributes, size, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.jimage.RuntimeFileAttributes",
		"java.lang.Object",
		"java.nio.file.attribute.BasicFileAttributes",
		nullptr,
		methodInfos$$
	};
	$loadClass(RuntimeFileAttributes, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RuntimeFileAttributes);
	});
	return class$;
}

$Class* RuntimeFileAttributes::class$ = nullptr;

		} // jimage
	} // internal
} // jdk