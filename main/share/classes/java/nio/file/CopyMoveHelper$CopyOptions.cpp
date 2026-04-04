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
using $CopyOption = ::java::nio::file::CopyOption;
using $LinkOption = ::java::nio::file::LinkOption;
using $StandardCopyOption = ::java::nio::file::StandardCopyOption;

namespace java {
	namespace nio {
		namespace file {

void CopyMoveHelper$CopyOptions::init$() {
	this->replaceExisting = false;
	this->copyAttributes = false;
	this->followLinks = true;
}

CopyMoveHelper$CopyOptions* CopyMoveHelper$CopyOptions::parse($CopyOptionArray* options) {
	$useLocalObjectStack();
	$var(CopyMoveHelper$CopyOptions, result, $new(CopyMoveHelper$CopyOptions));
	{
		$var($CopyOptionArray, arr$, options);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
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
	$FieldInfo fieldInfos$$[] = {
		{"replaceExisting", "Z", nullptr, 0, $field(CopyMoveHelper$CopyOptions, replaceExisting)},
		{"copyAttributes", "Z", nullptr, 0, $field(CopyMoveHelper$CopyOptions, copyAttributes)},
		{"followLinks", "Z", nullptr, 0, $field(CopyMoveHelper$CopyOptions, followLinks)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CopyMoveHelper$CopyOptions, init$, void)},
		{"parse", "([Ljava/nio/file/CopyOption;)Ljava/nio/file/CopyMoveHelper$CopyOptions;", nullptr, $STATIC | $TRANSIENT, $staticMethod(CopyMoveHelper$CopyOptions, parse, CopyMoveHelper$CopyOptions*, $CopyOptionArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.file.CopyMoveHelper$CopyOptions", "java.nio.file.CopyMoveHelper", "CopyOptions", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.nio.file.CopyMoveHelper$CopyOptions",
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
		"java.nio.file.CopyMoveHelper"
	};
	$loadClass(CopyMoveHelper$CopyOptions, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CopyMoveHelper$CopyOptions);
	});
	return class$;
}

$Class* CopyMoveHelper$CopyOptions::class$ = nullptr;

		} // file
	} // nio
} // java