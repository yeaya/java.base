#include <sun/nio/fs/UnixFileAttributes$UnixAsBasicFileAttributes.h>

#include <java/nio/file/attribute/FileTime.h>
#include <sun/nio/fs/UnixFileAttributes.h>
#include <sun/nio/fs/UnixFileKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $FileTime = ::java::nio::file::attribute::FileTime;
using $UnixFileAttributes = ::sun::nio::fs::UnixFileAttributes;
using $UnixFileKey = ::sun::nio::fs::UnixFileKey;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _UnixFileAttributes$UnixAsBasicFileAttributes_FieldInfo_[] = {
	{"attrs", "Lsun/nio/fs/UnixFileAttributes;", nullptr, $PRIVATE | $FINAL, $field(UnixFileAttributes$UnixAsBasicFileAttributes, attrs)},
	{}
};

$MethodInfo _UnixFileAttributes$UnixAsBasicFileAttributes_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/UnixFileAttributes;)V", nullptr, $PRIVATE, $method(static_cast<void(UnixFileAttributes$UnixAsBasicFileAttributes::*)($UnixFileAttributes*)>(&UnixFileAttributes$UnixAsBasicFileAttributes::init$))},
	{"creationTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC},
	{"fileKey", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isDirectory", "()Z", nullptr, $PUBLIC},
	{"isOther", "()Z", nullptr, $PUBLIC},
	{"isRegularFile", "()Z", nullptr, $PUBLIC},
	{"isSymbolicLink", "()Z", nullptr, $PUBLIC},
	{"lastAccessTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC},
	{"lastModifiedTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC},
	{"size", "()J", nullptr, $PUBLIC},
	{"unwrap", "()Lsun/nio/fs/UnixFileAttributes;", nullptr, 0},
	{"wrap", "(Lsun/nio/fs/UnixFileAttributes;)Lsun/nio/fs/UnixFileAttributes$UnixAsBasicFileAttributes;", nullptr, $STATIC, $method(static_cast<UnixFileAttributes$UnixAsBasicFileAttributes*(*)($UnixFileAttributes*)>(&UnixFileAttributes$UnixAsBasicFileAttributes::wrap))},
	{}
};

$InnerClassInfo _UnixFileAttributes$UnixAsBasicFileAttributes_InnerClassesInfo_[] = {
	{"sun.nio.fs.UnixFileAttributes$UnixAsBasicFileAttributes", "sun.nio.fs.UnixFileAttributes", "UnixAsBasicFileAttributes", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _UnixFileAttributes$UnixAsBasicFileAttributes_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.UnixFileAttributes$UnixAsBasicFileAttributes",
	"java.lang.Object",
	"java.nio.file.attribute.BasicFileAttributes",
	_UnixFileAttributes$UnixAsBasicFileAttributes_FieldInfo_,
	_UnixFileAttributes$UnixAsBasicFileAttributes_MethodInfo_,
	nullptr,
	nullptr,
	_UnixFileAttributes$UnixAsBasicFileAttributes_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.UnixFileAttributes"
};

$Object* allocate$UnixFileAttributes$UnixAsBasicFileAttributes($Class* clazz) {
	return $of($alloc(UnixFileAttributes$UnixAsBasicFileAttributes));
}

void UnixFileAttributes$UnixAsBasicFileAttributes::init$($UnixFileAttributes* attrs) {
	$set(this, attrs, attrs);
}

UnixFileAttributes$UnixAsBasicFileAttributes* UnixFileAttributes$UnixAsBasicFileAttributes::wrap($UnixFileAttributes* attrs) {
	$init(UnixFileAttributes$UnixAsBasicFileAttributes);
	return $new(UnixFileAttributes$UnixAsBasicFileAttributes, attrs);
}

$UnixFileAttributes* UnixFileAttributes$UnixAsBasicFileAttributes::unwrap() {
	return this->attrs;
}

$FileTime* UnixFileAttributes$UnixAsBasicFileAttributes::lastModifiedTime() {
	return $nc(this->attrs)->lastModifiedTime();
}

$FileTime* UnixFileAttributes$UnixAsBasicFileAttributes::lastAccessTime() {
	return $nc(this->attrs)->lastAccessTime();
}

$FileTime* UnixFileAttributes$UnixAsBasicFileAttributes::creationTime() {
	return $nc(this->attrs)->creationTime();
}

bool UnixFileAttributes$UnixAsBasicFileAttributes::isRegularFile() {
	return $nc(this->attrs)->isRegularFile();
}

bool UnixFileAttributes$UnixAsBasicFileAttributes::isDirectory() {
	return $nc(this->attrs)->isDirectory();
}

bool UnixFileAttributes$UnixAsBasicFileAttributes::isSymbolicLink() {
	return $nc(this->attrs)->isSymbolicLink();
}

bool UnixFileAttributes$UnixAsBasicFileAttributes::isOther() {
	return $nc(this->attrs)->isOther();
}

int64_t UnixFileAttributes$UnixAsBasicFileAttributes::size() {
	return $nc(this->attrs)->size();
}

$Object* UnixFileAttributes$UnixAsBasicFileAttributes::fileKey() {
	return $of($nc(this->attrs)->fileKey());
}

UnixFileAttributes$UnixAsBasicFileAttributes::UnixFileAttributes$UnixAsBasicFileAttributes() {
}

$Class* UnixFileAttributes$UnixAsBasicFileAttributes::load$($String* name, bool initialize) {
	$loadClass(UnixFileAttributes$UnixAsBasicFileAttributes, name, initialize, &_UnixFileAttributes$UnixAsBasicFileAttributes_ClassInfo_, allocate$UnixFileAttributes$UnixAsBasicFileAttributes);
	return class$;
}

$Class* UnixFileAttributes$UnixAsBasicFileAttributes::class$ = nullptr;

		} // fs
	} // nio
} // sun