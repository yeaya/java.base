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

$ImageReader* SystemModuleFinders$SystemImage::READER = nullptr;

void SystemModuleFinders$SystemImage::init$() {
}

$ImageReader* SystemModuleFinders$SystemImage::reader() {
	$init(SystemModuleFinders$SystemImage);
	return SystemModuleFinders$SystemImage::READER;
}

void SystemModuleFinders$SystemImage::clinit$($Class* clazz) {
	$assignStatic(SystemModuleFinders$SystemImage::READER, $ImageReaderFactory::getImageReader());
}

SystemModuleFinders$SystemImage::SystemModuleFinders$SystemImage() {
}

$Class* SystemModuleFinders$SystemImage::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"READER", "Ljdk/internal/jimage/ImageReader;", nullptr, $STATIC | $FINAL, $staticField(SystemModuleFinders$SystemImage, READER)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SystemModuleFinders$SystemImage, init$, void)},
		{"reader", "()Ljdk/internal/jimage/ImageReader;", nullptr, $STATIC, $staticMethod(SystemModuleFinders$SystemImage, reader, $ImageReader*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.module.SystemModuleFinders$SystemImage", "jdk.internal.module.SystemModuleFinders", "SystemImage", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.module.SystemModuleFinders$SystemImage",
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
		"jdk.internal.module.SystemModuleFinders"
	};
	$loadClass(SystemModuleFinders$SystemImage, name, initialize, &classInfo$$, SystemModuleFinders$SystemImage::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SystemModuleFinders$SystemImage);
	});
	return class$;
}

$Class* SystemModuleFinders$SystemImage::class$ = nullptr;

		} // module
	} // internal
} // jdk