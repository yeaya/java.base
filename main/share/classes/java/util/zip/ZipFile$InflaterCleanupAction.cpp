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

$FieldInfo _ZipFile$InflaterCleanupAction_FieldInfo_[] = {
	{"inf", "Ljava/util/zip/Inflater;", nullptr, $PRIVATE | $FINAL, $field(ZipFile$InflaterCleanupAction, inf)},
	{"res", "Ljava/util/zip/ZipFile$CleanableResource;", nullptr, $PRIVATE | $FINAL, $field(ZipFile$InflaterCleanupAction, res)},
	{}
};

$MethodInfo _ZipFile$InflaterCleanupAction_MethodInfo_[] = {
	{"<init>", "(Ljava/util/zip/Inflater;Ljava/util/zip/ZipFile$CleanableResource;)V", nullptr, 0, $method(ZipFile$InflaterCleanupAction, init$, void, $Inflater*, $ZipFile$CleanableResource*)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ZipFile$InflaterCleanupAction, run, void)},
	{}
};

$InnerClassInfo _ZipFile$InflaterCleanupAction_InnerClassesInfo_[] = {
	{"java.util.zip.ZipFile$InflaterCleanupAction", "java.util.zip.ZipFile", "InflaterCleanupAction", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ZipFile$InflaterCleanupAction_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.zip.ZipFile$InflaterCleanupAction",
	"java.lang.Object",
	"java.lang.Runnable",
	_ZipFile$InflaterCleanupAction_FieldInfo_,
	_ZipFile$InflaterCleanupAction_MethodInfo_,
	nullptr,
	nullptr,
	_ZipFile$InflaterCleanupAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.zip.ZipFile"
};

$Object* allocate$ZipFile$InflaterCleanupAction($Class* clazz) {
	return $of($alloc(ZipFile$InflaterCleanupAction));
}

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
	$loadClass(ZipFile$InflaterCleanupAction, name, initialize, &_ZipFile$InflaterCleanupAction_ClassInfo_, allocate$ZipFile$InflaterCleanupAction);
	return class$;
}

$Class* ZipFile$InflaterCleanupAction::class$ = nullptr;

		} // zip
	} // util
} // java