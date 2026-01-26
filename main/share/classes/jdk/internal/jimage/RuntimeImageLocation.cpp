#include <jdk/internal/jimage/RuntimeImageLocation.h>

#include <jdk/internal/jimage/ImageLocation.h>
#include <jdk/internal/jimage/ImageStrings.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageLocation = ::jdk::internal::jimage::ImageLocation;
using $ImageStrings = ::jdk::internal::jimage::ImageStrings;

namespace jdk {
	namespace internal {
		namespace jimage {

$FieldInfo _RuntimeImageLocation_FieldInfo_[] = {
	{"location", "J", nullptr, $PUBLIC, $field(RuntimeImageLocation, location)},
	{"size", "J", nullptr, $PUBLIC, $field(RuntimeImageLocation, size)},
	{"module", "Ljava/lang/String;", nullptr, $PUBLIC, $field(RuntimeImageLocation, module)},
	{"parent", "Ljava/lang/String;", nullptr, $PUBLIC, $field(RuntimeImageLocation, parent)},
	{"base", "Ljava/lang/String;", nullptr, $PUBLIC, $field(RuntimeImageLocation, base)},
	{"extension", "Ljava/lang/String;", nullptr, $PUBLIC, $field(RuntimeImageLocation, extension)},
	{"children", "[Ljava/lang/String;", nullptr, $PUBLIC, $field(RuntimeImageLocation, children)},
	{}
};

$MethodInfo _RuntimeImageLocation_MethodInfo_[] = {
	{"<init>", "([JLjdk/internal/jimage/ImageStrings;)V", nullptr, $PUBLIC, $method(RuntimeImageLocation, init$, void, $longs*, $ImageStrings*)},
	{"buildName", "(ZZZ)Ljava/lang/String;", nullptr, 0, $virtualMethod(RuntimeImageLocation, buildName, $String*, bool, bool, bool)},
	{"getBase", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RuntimeImageLocation, getBase, $String*)},
	{"getCompressedSize", "()J", nullptr, $PUBLIC, $virtualMethod(RuntimeImageLocation, getCompressedSize, int64_t)},
	{"getExtension", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RuntimeImageLocation, getExtension, $String*)},
	{"getFullName", "(Z)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RuntimeImageLocation, getFullName, $String*, bool)},
	{"getModule", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RuntimeImageLocation, getModule, $String*)},
	{"getParent", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RuntimeImageLocation, getParent, $String*)},
	{"getUncompressedSize", "()J", nullptr, $PUBLIC, $virtualMethod(RuntimeImageLocation, getUncompressedSize, int64_t)},
	{}
};

$ClassInfo _RuntimeImageLocation_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.jimage.RuntimeImageLocation",
	"jdk.internal.jimage.ImageLocation",
	nullptr,
	_RuntimeImageLocation_FieldInfo_,
	_RuntimeImageLocation_MethodInfo_
};

$Object* allocate$RuntimeImageLocation($Class* clazz) {
	return $of($alloc(RuntimeImageLocation));
}

void RuntimeImageLocation::init$($longs* attributes, $ImageStrings* strings) {
	$ImageLocation::init$(attributes, strings);
	this->location = 0;
}

int64_t RuntimeImageLocation::getCompressedSize() {
	return this->size;
}

int64_t RuntimeImageLocation::getUncompressedSize() {
	return this->size;
}

$String* RuntimeImageLocation::getFullName(bool modulesPrefix) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, builder, $new($StringBuilder));
	if (this->module != nullptr) {
		if (modulesPrefix) {
			builder->append("/modules"_s);
		}
		builder->append(u'/');
		builder->append(this->module);
		builder->append(u'/');
	}
	if (this->parent != nullptr) {
		builder->append(this->parent);
		builder->append(u'/');
	}
	builder->append($(getBase()));
	if (this->extension != nullptr && !$nc(this->extension)->isEmpty()) {
		builder->append(u'.');
		builder->append(this->extension);
	}
	return builder->toString();
}

$String* RuntimeImageLocation::getModule() {
	return this->module;
}

$String* RuntimeImageLocation::buildName(bool includeModule, bool includeParent, bool includeName) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, builder, $new($StringBuilder));
	if (includeModule && getModuleOffset() != 0) {
		builder->append("/modules/"_s);
		builder->append($(getModule()));
	}
	if (includeParent && getParentOffset() != 0) {
		builder->append(u'/');
		builder->append($(getParent()));
	}
	if (includeName) {
		if (includeModule || includeParent) {
			builder->append(u'/');
		}
		builder->append($(getBase()));
		if (getExtensionOffset() != 0) {
			builder->append(u'.');
			builder->append($(getExtension()));
		}
	}
	return builder->toString();
}

$String* RuntimeImageLocation::getParent() {
	return this->parent;
}

$String* RuntimeImageLocation::getBase() {
	return this->base;
}

$String* RuntimeImageLocation::getExtension() {
	return this->extension;
}

RuntimeImageLocation::RuntimeImageLocation() {
}

$Class* RuntimeImageLocation::load$($String* name, bool initialize) {
	$loadClass(RuntimeImageLocation, name, initialize, &_RuntimeImageLocation_ClassInfo_, allocate$RuntimeImageLocation);
	return class$;
}

$Class* RuntimeImageLocation::class$ = nullptr;

		} // jimage
	} // internal
} // jdk