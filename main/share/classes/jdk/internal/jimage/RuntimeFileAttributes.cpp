#include <jdk/internal/jimage/RuntimeFileAttributes.h>

#include <java/nio/file/attribute/FileTime.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $FileTime = ::java::nio::file::attribute::FileTime;

namespace jdk {
	namespace internal {
		namespace jimage {

$MethodInfo _RuntimeFileAttributes_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RuntimeFileAttributes::*)()>(&RuntimeFileAttributes::init$))},
	{"creationTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC},
	{"fileKey", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isDirectory", "()Z", nullptr, $PUBLIC},
	{"isOther", "()Z", nullptr, $PUBLIC},
	{"isRegularFile", "()Z", nullptr, $PUBLIC},
	{"isSymbolicLink", "()Z", nullptr, $PUBLIC},
	{"lastAccessTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC},
	{"lastModifiedTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC},
	{"size", "()J", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RuntimeFileAttributes_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.jimage.RuntimeFileAttributes",
	"java.lang.Object",
	"java.nio.file.attribute.BasicFileAttributes",
	nullptr,
	_RuntimeFileAttributes_MethodInfo_
};

$Object* allocate$RuntimeFileAttributes($Class* clazz) {
	return $of($alloc(RuntimeFileAttributes));
}

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
	return $of(this);
}

RuntimeFileAttributes::RuntimeFileAttributes() {
}

$Class* RuntimeFileAttributes::load$($String* name, bool initialize) {
	$loadClass(RuntimeFileAttributes, name, initialize, &_RuntimeFileAttributes_ClassInfo_, allocate$RuntimeFileAttributes);
	return class$;
}

$Class* RuntimeFileAttributes::class$ = nullptr;

		} // jimage
	} // internal
} // jdk