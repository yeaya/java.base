#include <jdk/internal/module/SystemModuleFinders$SystemImage.h>

#include <jdk/internal/jimage/ImageReader.h>
#include <jdk/internal/jimage/ImageReaderFactory.h>
#include <jdk/internal/module/SystemModuleFinders.h>
#include <jcpp.h>

#undef READER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageReader = ::jdk::internal::jimage::ImageReader;
using $ImageReaderFactory = ::jdk::internal::jimage::ImageReaderFactory;

namespace jdk {
	namespace internal {
		namespace module {

$FieldInfo _SystemModuleFinders$SystemImage_FieldInfo_[] = {
	{"READER", "Ljdk/internal/jimage/ImageReader;", nullptr, $STATIC | $FINAL, $staticField(SystemModuleFinders$SystemImage, READER)},
	{}
};

$MethodInfo _SystemModuleFinders$SystemImage_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SystemModuleFinders$SystemImage::*)()>(&SystemModuleFinders$SystemImage::init$))},
	{"reader", "()Ljdk/internal/jimage/ImageReader;", nullptr, $STATIC, $method(static_cast<$ImageReader*(*)()>(&SystemModuleFinders$SystemImage::reader))},
	{}
};

$InnerClassInfo _SystemModuleFinders$SystemImage_InnerClassesInfo_[] = {
	{"jdk.internal.module.SystemModuleFinders$SystemImage", "jdk.internal.module.SystemModuleFinders", "SystemImage", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SystemModuleFinders$SystemImage_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.module.SystemModuleFinders$SystemImage",
	"java.lang.Object",
	nullptr,
	_SystemModuleFinders$SystemImage_FieldInfo_,
	_SystemModuleFinders$SystemImage_MethodInfo_,
	nullptr,
	nullptr,
	_SystemModuleFinders$SystemImage_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.module.SystemModuleFinders"
};

$Object* allocate$SystemModuleFinders$SystemImage($Class* clazz) {
	return $of($alloc(SystemModuleFinders$SystemImage));
}

$ImageReader* SystemModuleFinders$SystemImage::READER = nullptr;

void SystemModuleFinders$SystemImage::init$() {
}

$ImageReader* SystemModuleFinders$SystemImage::reader() {
	$init(SystemModuleFinders$SystemImage);
	return SystemModuleFinders$SystemImage::READER;
}

void clinit$SystemModuleFinders$SystemImage($Class* class$) {
	$assignStatic(SystemModuleFinders$SystemImage::READER, $ImageReaderFactory::getImageReader());
}

SystemModuleFinders$SystemImage::SystemModuleFinders$SystemImage() {
}

$Class* SystemModuleFinders$SystemImage::load$($String* name, bool initialize) {
	$loadClass(SystemModuleFinders$SystemImage, name, initialize, &_SystemModuleFinders$SystemImage_ClassInfo_, clinit$SystemModuleFinders$SystemImage, allocate$SystemModuleFinders$SystemImage);
	return class$;
}

$Class* SystemModuleFinders$SystemImage::class$ = nullptr;

		} // module
	} // internal
} // jdk