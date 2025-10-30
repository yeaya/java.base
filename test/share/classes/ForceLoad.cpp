#include <ForceLoad.h>

#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;

$MethodInfo _ForceLoad_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ForceLoad::*)()>(&ForceLoad::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ForceLoad::main)), "java.io.IOException"},
	{}
};

$ClassInfo _ForceLoad_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ForceLoad",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ForceLoad_MethodInfo_
};

$Object* allocate$ForceLoad($Class* clazz) {
	return $of($alloc(ForceLoad));
}

void ForceLoad::init$() {
}

void ForceLoad::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$Files::probeContentType($($Paths::get("."_s, $$new($StringArray, 0))));
}

ForceLoad::ForceLoad() {
}

$Class* ForceLoad::load$($String* name, bool initialize) {
	$loadClass(ForceLoad, name, initialize, &_ForceLoad_ClassInfo_, allocate$ForceLoad);
	return class$;
}

$Class* ForceLoad::class$ = nullptr;