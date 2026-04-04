#include <java/util/zip/ZipFile$InflaterCleanupAction.h>
#include <java/util/zip/Inflater.h>
#include <java/util/zip/ZipFile$CleanableResource.h>
#include <java/util/zip/ZipFile.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Inflater = ::java::util::zip::Inflater;
using $ZipFile$CleanableResource = ::java::util::zip::ZipFile$CleanableResource;

namespace java {
	namespace util {
		namespace zip {

void ZipFile$InflaterCleanupAction::init$($Inflater* inf, $ZipFile$CleanableResource* res) {
	$set(this, inf, inf);
	$set(this, res, res);
}

void ZipFile$InflaterCleanupAction::run() {
	$nc(this->res)->releaseInflater(this->inf);
}

ZipFile$InflaterCleanupAction::ZipFile$InflaterCleanupAction() {
}

$Class* ZipFile$InflaterCleanupAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inf", "Ljava/util/zip/Inflater;", nullptr, $PRIVATE | $FINAL, $field(ZipFile$InflaterCleanupAction, inf)},
		{"res", "Ljava/util/zip/ZipFile$CleanableResource;", nullptr, $PRIVATE | $FINAL, $field(ZipFile$InflaterCleanupAction, res)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/zip/Inflater;Ljava/util/zip/ZipFile$CleanableResource;)V", nullptr, 0, $method(ZipFile$InflaterCleanupAction, init$, void, $Inflater*, $ZipFile$CleanableResource*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ZipFile$InflaterCleanupAction, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.zip.ZipFile$InflaterCleanupAction", "java.util.zip.ZipFile", "InflaterCleanupAction", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.zip.ZipFile$InflaterCleanupAction",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.zip.ZipFile"
	};
	$loadClass(ZipFile$InflaterCleanupAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ZipFile$InflaterCleanupAction);
	});
	return class$;
}

$Class* ZipFile$InflaterCleanupAction::class$ = nullptr;

		} // zip
	} // util
} // java