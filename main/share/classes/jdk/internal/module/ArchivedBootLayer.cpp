#include <jdk/internal/module/ArchivedBootLayer.h>
#include <java/lang/ModuleLayer.h>
#include <jdk/internal/misc/CDS.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleLayer = ::java::lang::ModuleLayer;
using $CDS = ::jdk::internal::misc::CDS;

namespace jdk {
	namespace internal {
		namespace module {

ArchivedBootLayer* ArchivedBootLayer::archivedBootLayer = nullptr;

void ArchivedBootLayer::init$($ModuleLayer* bootLayer) {
	$set(this, bootLayer$, bootLayer);
}

$ModuleLayer* ArchivedBootLayer::bootLayer() {
	return this->bootLayer$;
}

ArchivedBootLayer* ArchivedBootLayer::get() {
	$init(ArchivedBootLayer);
	return ArchivedBootLayer::archivedBootLayer;
}

void ArchivedBootLayer::archive($ModuleLayer* layer) {
	$init(ArchivedBootLayer);
	$assignStatic(ArchivedBootLayer::archivedBootLayer, $new(ArchivedBootLayer, layer));
}

void ArchivedBootLayer::clinit$($Class* clazz) {
	{
		$CDS::initializeFromArchive(ArchivedBootLayer::class$);
	}
}

ArchivedBootLayer::ArchivedBootLayer() {
}

$Class* ArchivedBootLayer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"archivedBootLayer", "Ljdk/internal/module/ArchivedBootLayer;", nullptr, $PRIVATE | $STATIC, $staticField(ArchivedBootLayer, archivedBootLayer)},
		{"bootLayer", "Ljava/lang/ModuleLayer;", nullptr, $PRIVATE | $FINAL, $field(ArchivedBootLayer, bootLayer$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ModuleLayer;)V", nullptr, $PRIVATE, $method(ArchivedBootLayer, init$, void, $ModuleLayer*)},
		{"archive", "(Ljava/lang/ModuleLayer;)V", nullptr, $STATIC, $staticMethod(ArchivedBootLayer, archive, void, $ModuleLayer*)},
		{"bootLayer", "()Ljava/lang/ModuleLayer;", nullptr, 0, $virtualMethod(ArchivedBootLayer, bootLayer, $ModuleLayer*)},
		{"get", "()Ljdk/internal/module/ArchivedBootLayer;", nullptr, $STATIC, $staticMethod(ArchivedBootLayer, get, ArchivedBootLayer*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.module.ArchivedBootLayer",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ArchivedBootLayer, name, initialize, &classInfo$$, ArchivedBootLayer::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ArchivedBootLayer);
	});
	return class$;
}

$Class* ArchivedBootLayer::class$ = nullptr;

		} // module
	} // internal
} // jdk