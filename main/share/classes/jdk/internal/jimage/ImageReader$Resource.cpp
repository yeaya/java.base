#include <jdk/internal/jimage/ImageReader$Resource.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <jdk/internal/jimage/ImageLocation.h>
#include <jdk/internal/jimage/ImageReader$Directory.h>
#include <jdk/internal/jimage/ImageReader$Node.h>
#include <jdk/internal/jimage/ImageReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $ImageLocation = ::jdk::internal::jimage::ImageLocation;
using $ImageReader$Directory = ::jdk::internal::jimage::ImageReader$Directory;
using $ImageReader$Node = ::jdk::internal::jimage::ImageReader$Node;

namespace jdk {
	namespace internal {
		namespace jimage {

void ImageReader$Resource::init$($ImageLocation* loc, $BasicFileAttributes* fileAttrs) {
	$ImageReader$Node::init$($($nc(loc)->getFullName(true)), fileAttrs);
	$set(this, loc, loc);
}

ImageReader$Resource* ImageReader$Resource::create($ImageReader$Directory* parent, $ImageLocation* loc, $BasicFileAttributes* fileAttrs) {
	$init(ImageReader$Resource);
	$var(ImageReader$Resource, rs, $new(ImageReader$Resource, loc, fileAttrs));
	$nc(parent)->addChild(rs);
	return rs;
}

bool ImageReader$Resource::isCompleted() {
	return true;
}

bool ImageReader$Resource::isResource() {
	return true;
}

$ImageLocation* ImageReader$Resource::getLocation() {
	return this->loc;
}

int64_t ImageReader$Resource::size() {
	return $nc(this->loc)->getUncompressedSize();
}

int64_t ImageReader$Resource::compressedSize() {
	return $nc(this->loc)->getCompressedSize();
}

$String* ImageReader$Resource::extension() {
	return $nc(this->loc)->getExtension();
}

int64_t ImageReader$Resource::contentOffset() {
	return $nc(this->loc)->getContentOffset();
}

ImageReader$Resource::ImageReader$Resource() {
}

$Class* ImageReader$Resource::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"loc", "Ljdk/internal/jimage/ImageLocation;", nullptr, $PRIVATE | $FINAL, $field(ImageReader$Resource, loc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/jimage/ImageLocation;Ljava/nio/file/attribute/BasicFileAttributes;)V", nullptr, $PRIVATE, $method(ImageReader$Resource, init$, void, $ImageLocation*, $BasicFileAttributes*)},
		{"compressedSize", "()J", nullptr, $PUBLIC, $virtualMethod(ImageReader$Resource, compressedSize, int64_t)},
		{"contentOffset", "()J", nullptr, $PUBLIC, $virtualMethod(ImageReader$Resource, contentOffset, int64_t)},
		{"create", "(Ljdk/internal/jimage/ImageReader$Directory;Ljdk/internal/jimage/ImageLocation;Ljava/nio/file/attribute/BasicFileAttributes;)Ljdk/internal/jimage/ImageReader$Resource;", nullptr, $STATIC, $staticMethod(ImageReader$Resource, create, ImageReader$Resource*, $ImageReader$Directory*, $ImageLocation*, $BasicFileAttributes*)},
		{"extension", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ImageReader$Resource, extension, $String*)},
		{"getLocation", "()Ljdk/internal/jimage/ImageLocation;", nullptr, $PUBLIC, $virtualMethod(ImageReader$Resource, getLocation, $ImageLocation*)},
		{"isCompleted", "()Z", nullptr, $PUBLIC, $virtualMethod(ImageReader$Resource, isCompleted, bool)},
		{"isResource", "()Z", nullptr, $PUBLIC, $virtualMethod(ImageReader$Resource, isResource, bool)},
		{"size", "()J", nullptr, $PUBLIC, $virtualMethod(ImageReader$Resource, size, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.jimage.ImageReader$Resource", "jdk.internal.jimage.ImageReader", "Resource", $STATIC},
		{"jdk.internal.jimage.ImageReader$Node", "jdk.internal.jimage.ImageReader", "Node", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.jimage.ImageReader$Resource",
		"jdk.internal.jimage.ImageReader$Node",
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
	$loadClass(ImageReader$Resource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageReader$Resource);
	});
	return class$;
}

$Class* ImageReader$Resource::class$ = nullptr;

		} // jimage
	} // internal
} // jdk