#include <jdk/internal/jimage/ImageReader$Node.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/nio/file/attribute/FileTime.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <jdk/internal/jimage/ImageLocation.h>
#include <jdk/internal/jimage/ImageReader.h>
#include <jcpp.h>

#undef MODULES_DIR
#undef PACKAGES_DIR
#undef ROOT_DIR

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $FileTime = ::java::nio::file::attribute::FileTime;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $ImageLocation = ::jdk::internal::jimage::ImageLocation;

namespace jdk {
	namespace internal {
		namespace jimage {

void ImageReader$Node::init$($String* name, $BasicFileAttributes* fileAttrs) {
	$set(this, name, $cast($String, $Objects::requireNonNull(name)));
	$set(this, fileAttrs, $cast($BasicFileAttributes, $Objects::requireNonNull(fileAttrs)));
}

bool ImageReader$Node::isCompleted() {
	return this->completed;
}

void ImageReader$Node::setCompleted(bool completed) {
	this->completed = completed;
}

void ImageReader$Node::setIsRootDir() {
	this->flags |= ImageReader$Node::ROOT_DIR;
}

bool ImageReader$Node::isRootDir() {
	return (this->flags & ImageReader$Node::ROOT_DIR) != 0;
}

void ImageReader$Node::setIsPackagesDir() {
	this->flags |= ImageReader$Node::PACKAGES_DIR;
}

bool ImageReader$Node::isPackagesDir() {
	return (this->flags & ImageReader$Node::PACKAGES_DIR) != 0;
}

void ImageReader$Node::setIsModulesDir() {
	this->flags |= ImageReader$Node::MODULES_DIR;
}

bool ImageReader$Node::isModulesDir() {
	return (this->flags & ImageReader$Node::MODULES_DIR) != 0;
}

$String* ImageReader$Node::getName() {
	return this->name;
}

$BasicFileAttributes* ImageReader$Node::getFileAttributes() {
	return this->fileAttrs;
}

ImageReader$Node* ImageReader$Node::resolveLink() {
	return resolveLink(false);
}

ImageReader$Node* ImageReader$Node::resolveLink(bool recursive) {
	return this;
}

bool ImageReader$Node::isLink() {
	return false;
}

bool ImageReader$Node::isDirectory() {
	return false;
}

$List* ImageReader$Node::getChildren() {
	$useLocalObjectStack();
	$throwNew($IllegalArgumentException, $$str({"not a directory: "_s, $(getNameString())}));
	$shouldNotReachHere();
}

bool ImageReader$Node::isResource() {
	return false;
}

$ImageLocation* ImageReader$Node::getLocation() {
	$useLocalObjectStack();
	$throwNew($IllegalArgumentException, $$str({"not a resource: "_s, $(getNameString())}));
	$shouldNotReachHere();
}

int64_t ImageReader$Node::size() {
	return 0;
}

int64_t ImageReader$Node::compressedSize() {
	return 0;
}

$String* ImageReader$Node::extension() {
	return nullptr;
}

int64_t ImageReader$Node::contentOffset() {
	return 0;
}

$FileTime* ImageReader$Node::creationTime() {
	return $nc(this->fileAttrs)->creationTime();
}

$FileTime* ImageReader$Node::lastAccessTime() {
	return $nc(this->fileAttrs)->lastAccessTime();
}

$FileTime* ImageReader$Node::lastModifiedTime() {
	return $nc(this->fileAttrs)->lastModifiedTime();
}

$String* ImageReader$Node::getNameString() {
	return this->name;
}

$String* ImageReader$Node::toString() {
	return getNameString();
}

int32_t ImageReader$Node::hashCode() {
	return $nc(this->name)->hashCode();
}

bool ImageReader$Node::equals(Object$* other) {
	if ($equals(this, other)) {
		return true;
	}
	if ($instanceOf(ImageReader$Node, other)) {
		return $nc(this->name)->equals($cast(ImageReader$Node, other)->name);
	}
	return false;
}

ImageReader$Node::ImageReader$Node() {
}

$Class* ImageReader$Node::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ROOT_DIR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ImageReader$Node, ROOT_DIR)},
		{"PACKAGES_DIR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ImageReader$Node, PACKAGES_DIR)},
		{"MODULES_DIR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ImageReader$Node, MODULES_DIR)},
		{"flags", "I", nullptr, $PRIVATE, $field(ImageReader$Node, flags)},
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ImageReader$Node, name)},
		{"fileAttrs", "Ljava/nio/file/attribute/BasicFileAttributes;", nullptr, $PRIVATE | $FINAL, $field(ImageReader$Node, fileAttrs)},
		{"completed", "Z", nullptr, $PRIVATE, $field(ImageReader$Node, completed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/nio/file/attribute/BasicFileAttributes;)V", nullptr, $PROTECTED, $method(ImageReader$Node, init$, void, $String*, $BasicFileAttributes*)},
		{"compressedSize", "()J", nullptr, $PUBLIC, $virtualMethod(ImageReader$Node, compressedSize, int64_t)},
		{"contentOffset", "()J", nullptr, $PUBLIC, $virtualMethod(ImageReader$Node, contentOffset, int64_t)},
		{"creationTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC | $FINAL, $method(ImageReader$Node, creationTime, $FileTime*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(ImageReader$Node, equals, bool, Object$*)},
		{"extension", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ImageReader$Node, extension, $String*)},
		{"getChildren", "()Ljava/util/List;", "()Ljava/util/List<Ljdk/internal/jimage/ImageReader$Node;>;", $PUBLIC, $virtualMethod(ImageReader$Node, getChildren, $List*)},
		{"getFileAttributes", "()Ljava/nio/file/attribute/BasicFileAttributes;", nullptr, $PUBLIC | $FINAL, $method(ImageReader$Node, getFileAttributes, $BasicFileAttributes*)},
		{"getLocation", "()Ljdk/internal/jimage/ImageLocation;", nullptr, $PUBLIC, $virtualMethod(ImageReader$Node, getLocation, $ImageLocation*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(ImageReader$Node, getName, $String*)},
		{"getNameString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(ImageReader$Node, getNameString, $String*)},
		{"hashCode", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(ImageReader$Node, hashCode, int32_t)},
		{"isCompleted", "()Z", nullptr, $PUBLIC, $virtualMethod(ImageReader$Node, isCompleted, bool)},
		{"isDirectory", "()Z", nullptr, $PUBLIC, $virtualMethod(ImageReader$Node, isDirectory, bool)},
		{"isLink", "()Z", nullptr, $PUBLIC, $virtualMethod(ImageReader$Node, isLink, bool)},
		{"isModulesDir", "()Z", nullptr, $PUBLIC | $FINAL, $method(ImageReader$Node, isModulesDir, bool)},
		{"isPackagesDir", "()Z", nullptr, $PUBLIC | $FINAL, $method(ImageReader$Node, isPackagesDir, bool)},
		{"isResource", "()Z", nullptr, $PUBLIC, $virtualMethod(ImageReader$Node, isResource, bool)},
		{"isRootDir", "()Z", nullptr, $PUBLIC | $FINAL, $method(ImageReader$Node, isRootDir, bool)},
		{"lastAccessTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC | $FINAL, $method(ImageReader$Node, lastAccessTime, $FileTime*)},
		{"lastModifiedTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC | $FINAL, $method(ImageReader$Node, lastModifiedTime, $FileTime*)},
		{"resolveLink", "()Ljdk/internal/jimage/ImageReader$Node;", nullptr, $PUBLIC | $FINAL, $method(ImageReader$Node, resolveLink, ImageReader$Node*)},
		{"resolveLink", "(Z)Ljdk/internal/jimage/ImageReader$Node;", nullptr, $PUBLIC, $virtualMethod(ImageReader$Node, resolveLink, ImageReader$Node*, bool)},
		{"setCompleted", "(Z)V", nullptr, $PUBLIC, $virtualMethod(ImageReader$Node, setCompleted, void, bool)},
		{"setIsModulesDir", "()V", nullptr, $PUBLIC | $FINAL, $method(ImageReader$Node, setIsModulesDir, void)},
		{"setIsPackagesDir", "()V", nullptr, $PUBLIC | $FINAL, $method(ImageReader$Node, setIsPackagesDir, void)},
		{"setIsRootDir", "()V", nullptr, $PUBLIC | $FINAL, $method(ImageReader$Node, setIsRootDir, void)},
		{"size", "()J", nullptr, $PUBLIC, $virtualMethod(ImageReader$Node, size, int64_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(ImageReader$Node, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.jimage.ImageReader$Node", "jdk.internal.jimage.ImageReader", "Node", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"jdk.internal.jimage.ImageReader$Node",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.jimage.ImageReader"
	};
	$loadClass(ImageReader$Node, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageReader$Node);
	});
	return class$;
}

$Class* ImageReader$Node::class$ = nullptr;

		} // jimage
	} // internal
} // jdk