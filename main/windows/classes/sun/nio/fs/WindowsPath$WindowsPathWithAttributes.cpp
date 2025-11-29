#include <sun/nio/fs/WindowsPath$WindowsPathWithAttributes.h>

#include <java/lang/ref/WeakReference.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <sun/nio/fs/WindowsFileSystem.h>
#include <sun/nio/fs/WindowsPath.h>
#include <sun/nio/fs/WindowsPathType.h>
#include <jcpp.h>

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $FileSystem = ::java::nio::file::FileSystem;
using $Path = ::java::nio::file::Path;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $WindowsFileSystem = ::sun::nio::fs::WindowsFileSystem;
using $WindowsPath = ::sun::nio::fs::WindowsPath;
using $WindowsPathType = ::sun::nio::fs::WindowsPathType;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _WindowsPath$WindowsPathWithAttributes_FieldInfo_[] = {
	{"ref", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/nio/file/attribute/BasicFileAttributes;>;", $FINAL, $field(WindowsPath$WindowsPathWithAttributes, ref)},
	{}
};

$MethodInfo _WindowsPath$WindowsPathWithAttributes_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Lsun/nio/fs/WindowsFileSystem;Lsun/nio/fs/WindowsPathType;Ljava/lang/String;Ljava/lang/String;Ljava/nio/file/attribute/BasicFileAttributes;)V", nullptr, 0, $method(static_cast<void(WindowsPath$WindowsPathWithAttributes::*)($WindowsFileSystem*,$WindowsPathType*,$String*,$String*,$BasicFileAttributes*)>(&WindowsPath$WindowsPathWithAttributes::init$))},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"get", "()Ljava/nio/file/attribute/BasicFileAttributes;", nullptr, $PUBLIC},
	{"getFileSystem", "()Ljava/nio/file/FileSystem;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getName", "(I)Ljava/nio/file/Path;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getParent", "()Ljava/nio/file/Path;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getRoot", "()Ljava/nio/file/Path;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"invalidate", "()V", nullptr, $PUBLIC},
	{"normalize", "()Ljava/nio/file/Path;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"relativize", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"resolve", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"subpath", "(II)Ljava/nio/file/Path;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toAbsolutePath", "()Ljava/nio/file/Path;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toRealPath", "([Ljava/nio/file/LinkOption;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsPath$WindowsPathWithAttributes_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsPath$WindowsPathWithAttributes", "sun.nio.fs.WindowsPath", "WindowsPathWithAttributes", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WindowsPath$WindowsPathWithAttributes_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsPath$WindowsPathWithAttributes",
	"sun.nio.fs.WindowsPath",
	"sun.nio.fs.BasicFileAttributesHolder",
	_WindowsPath$WindowsPathWithAttributes_FieldInfo_,
	_WindowsPath$WindowsPathWithAttributes_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsPath$WindowsPathWithAttributes_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsPath"
};

$Object* allocate$WindowsPath$WindowsPathWithAttributes($Class* clazz) {
	return $of($alloc(WindowsPath$WindowsPathWithAttributes));
}

bool WindowsPath$WindowsPathWithAttributes::equals(Object$* obj) {
	 return this->$WindowsPath::equals(obj);
}

int32_t WindowsPath$WindowsPathWithAttributes::hashCode() {
	 return this->$WindowsPath::hashCode();
}

$String* WindowsPath$WindowsPathWithAttributes::toString() {
	 return this->$WindowsPath::toString();
}

$Object* WindowsPath$WindowsPathWithAttributes::clone() {
	 return this->$WindowsPath::clone();
}

void WindowsPath$WindowsPathWithAttributes::finalize() {
	this->$WindowsPath::finalize();
}

void WindowsPath$WindowsPathWithAttributes::init$($WindowsFileSystem* fs, $WindowsPathType* type, $String* root, $String* path, $BasicFileAttributes* attrs) {
	$WindowsPath::init$(fs, type, root, path);
	$set(this, ref, $new($WeakReference, attrs));
}

$BasicFileAttributes* WindowsPath$WindowsPathWithAttributes::get() {
	return $cast($BasicFileAttributes, $nc(this->ref)->get());
}

void WindowsPath$WindowsPathWithAttributes::invalidate() {
	$nc(this->ref)->clear();
}

$WindowsPath* WindowsPath$WindowsPathWithAttributes::toRealPath($LinkOptionArray* options) {
	return $WindowsPath::toRealPath(options);
}

$WindowsPath* WindowsPath$WindowsPathWithAttributes::toAbsolutePath() {
	return $WindowsPath::toAbsolutePath();
}

$WindowsPath* WindowsPath$WindowsPathWithAttributes::relativize($Path* obj) {
	return $WindowsPath::relativize(obj);
}

$WindowsPath* WindowsPath$WindowsPathWithAttributes::resolve($Path* obj) {
	return $WindowsPath::resolve(obj);
}

$WindowsPath* WindowsPath$WindowsPathWithAttributes::normalize() {
	return $WindowsPath::normalize();
}

$WindowsPath* WindowsPath$WindowsPathWithAttributes::subpath(int32_t beginIndex, int32_t endIndex) {
	return $WindowsPath::subpath(beginIndex, endIndex);
}

$WindowsPath* WindowsPath$WindowsPathWithAttributes::getName(int32_t index) {
	return $WindowsPath::getName(index);
}

$WindowsPath* WindowsPath$WindowsPathWithAttributes::getParent() {
	return $WindowsPath::getParent();
}

$WindowsPath* WindowsPath$WindowsPathWithAttributes::getRoot() {
	return $WindowsPath::getRoot();
}

$FileSystem* WindowsPath$WindowsPathWithAttributes::getFileSystem() {
	return $WindowsPath::getFileSystem();
}

int32_t WindowsPath$WindowsPathWithAttributes::compareTo(Object$* obj) {
	return $WindowsPath::compareTo($cast($Path, obj));
}

WindowsPath$WindowsPathWithAttributes::WindowsPath$WindowsPathWithAttributes() {
}

$Class* WindowsPath$WindowsPathWithAttributes::load$($String* name, bool initialize) {
	$loadClass(WindowsPath$WindowsPathWithAttributes, name, initialize, &_WindowsPath$WindowsPathWithAttributes_ClassInfo_, allocate$WindowsPath$WindowsPathWithAttributes);
	return class$;
}

$Class* WindowsPath$WindowsPathWithAttributes::class$ = nullptr;

		} // fs
	} // nio
} // sun