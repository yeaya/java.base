#include <java/nio/file/CopyMoveHelper$CopyOptions.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/file/CopyMoveHelper.h>
#include <java/nio/file/CopyOption.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/StandardCopyOption.h>
#include <jcpp.h>

#undef COPY_ATTRIBUTES
#undef NOFOLLOW_LINKS
#undef REPLACE_EXISTING

using $CopyOptionArray = $Array<::java::nio::file::CopyOption>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $CopyMoveHelper = ::java::nio::file::CopyMoveHelper;
using $CopyOption = ::java::nio::file::CopyOption;
using $LinkOption = ::java::nio::file::LinkOption;
using $StandardCopyOption = ::java::nio::file::StandardCopyOption;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _CopyMoveHelper$CopyOptions_FieldInfo_[] = {
	{"replaceExisting", "Z", nullptr, 0, $field(CopyMoveHelper$CopyOptions, replaceExisting)},
	{"copyAttributes", "Z", nullptr, 0, $field(CopyMoveHelper$CopyOptions, copyAttributes)},
	{"followLinks", "Z", nullptr, 0, $field(CopyMoveHelper$CopyOptions, followLinks)},
	{}
};

$MethodInfo _CopyMoveHelper$CopyOptions_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CopyMoveHelper$CopyOptions::*)()>(&CopyMoveHelper$CopyOptions::init$))},
	{"parse", "([Ljava/nio/file/CopyOption;)Ljava/nio/file/CopyMoveHelper$CopyOptions;", nullptr, $STATIC | $TRANSIENT, $method(static_cast<CopyMoveHelper$CopyOptions*(*)($CopyOptionArray*)>(&CopyMoveHelper$CopyOptions::parse))},
	{}
};

$InnerClassInfo _CopyMoveHelper$CopyOptions_InnerClassesInfo_[] = {
	{"java.nio.file.CopyMoveHelper$CopyOptions", "java.nio.file.CopyMoveHelper", "CopyOptions", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CopyMoveHelper$CopyOptions_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.file.CopyMoveHelper$CopyOptions",
	"java.lang.Object",
	nullptr,
	_CopyMoveHelper$CopyOptions_FieldInfo_,
	_CopyMoveHelper$CopyOptions_MethodInfo_,
	nullptr,
	nullptr,
	_CopyMoveHelper$CopyOptions_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.file.CopyMoveHelper"
};

$Object* allocate$CopyMoveHelper$CopyOptions($Class* clazz) {
	return $of($alloc(CopyMoveHelper$CopyOptions));
}

void CopyMoveHelper$CopyOptions::init$() {
	this->replaceExisting = false;
	this->copyAttributes = false;
	this->followLinks = true;
}

CopyMoveHelper$CopyOptions* CopyMoveHelper$CopyOptions::parse($CopyOptionArray* options) {
	$useLocalCurrentObjectStackCache();
	$var(CopyMoveHelper$CopyOptions, result, $new(CopyMoveHelper$CopyOptions));
	{
		$var($CopyOptionArray, arr$, options);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($CopyOption, option, arr$->get(i$));
			{
				$init($StandardCopyOption);
				if ($equals(option, $StandardCopyOption::REPLACE_EXISTING)) {
					result->replaceExisting = true;
					continue;
				}
				$init($LinkOption);
				if ($equals(option, $LinkOption::NOFOLLOW_LINKS)) {
					result->followLinks = false;
					continue;
				}
				if ($equals(option, $StandardCopyOption::COPY_ATTRIBUTES)) {
					result->copyAttributes = true;
					continue;
				}
				if (option == nullptr) {
					$throwNew($NullPointerException);
				}
				$throwNew($UnsupportedOperationException, $$str({"\'"_s, option, "\' is not a recognized copy option"_s}));
			}
		}
	}
	return result;
}

CopyMoveHelper$CopyOptions::CopyMoveHelper$CopyOptions() {
}

$Class* CopyMoveHelper$CopyOptions::load$($String* name, bool initialize) {
	$loadClass(CopyMoveHelper$CopyOptions, name, initialize, &_CopyMoveHelper$CopyOptions_ClassInfo_, allocate$CopyMoveHelper$CopyOptions);
	return class$;
}

$Class* CopyMoveHelper$CopyOptions::class$ = nullptr;

		} // file
	} // nio
} // java