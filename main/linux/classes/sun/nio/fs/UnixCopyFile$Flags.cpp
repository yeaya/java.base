#include <sun/nio/fs/UnixCopyFile$Flags.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/file/CopyOption.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/StandardCopyOption.h>
#include <sun/nio/fs/ExtendedOptions$InternalOption.h>
#include <sun/nio/fs/ExtendedOptions.h>
#include <sun/nio/fs/UnixCopyFile.h>
#include <jcpp.h>

#undef ATOMIC_MOVE
#undef COPY_ATTRIBUTES
#undef INTERRUPTIBLE
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
using $ExtendedOptions = ::sun::nio::fs::ExtendedOptions;

namespace sun {
	namespace nio {
		namespace fs {

void UnixCopyFile$Flags::init$() {
}

UnixCopyFile$Flags* UnixCopyFile$Flags::fromCopyOptions($CopyOptionArray* options) {
	$useLocalObjectStack();
	$var(UnixCopyFile$Flags, flags, $new(UnixCopyFile$Flags));
	flags->followLinks = true;
	{
		$var($CopyOptionArray, arr$, options);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($CopyOption, option, arr$->get(i$));
			{
				$init($StandardCopyOption);
				if ($equals(option, $StandardCopyOption::REPLACE_EXISTING)) {
					flags->replaceExisting = true;
					continue;
				}
				$init($LinkOption);
				if ($equals(option, $LinkOption::NOFOLLOW_LINKS)) {
					flags->followLinks = false;
					continue;
				}
				if ($equals(option, $StandardCopyOption::COPY_ATTRIBUTES)) {
					flags->copyBasicAttributes = true;
					flags->copyPosixAttributes = true;
					flags->copyNonPosixAttributes = true;
					flags->failIfUnableToCopyBasic = true;
					continue;
				}
				$init($ExtendedOptions);
				if ($nc($ExtendedOptions::INTERRUPTIBLE)->matches(option)) {
					flags->interruptible = true;
					continue;
				}
				if (option == nullptr) {
					$throwNew($NullPointerException);
				}
				$throwNew($UnsupportedOperationException, "Unsupported copy option"_s);
			}
		}
	}
	return flags;
}

UnixCopyFile$Flags* UnixCopyFile$Flags::fromMoveOptions($CopyOptionArray* options) {
	$useLocalObjectStack();
	$var(UnixCopyFile$Flags, flags, $new(UnixCopyFile$Flags));
	{
		$var($CopyOptionArray, arr$, options);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($CopyOption, option, arr$->get(i$));
			{
				$init($StandardCopyOption);
				if ($equals(option, $StandardCopyOption::ATOMIC_MOVE)) {
					flags->atomicMove = true;
					continue;
				}
				if ($equals(option, $StandardCopyOption::REPLACE_EXISTING)) {
					flags->replaceExisting = true;
					continue;
				}
				$init($LinkOption);
				if ($equals(option, $LinkOption::NOFOLLOW_LINKS)) {
					continue;
				}
				if (option == nullptr) {
					$throwNew($NullPointerException);
				}
				$throwNew($UnsupportedOperationException, "Unsupported copy option"_s);
			}
		}
	}
	flags->copyBasicAttributes = true;
	flags->copyPosixAttributes = true;
	flags->copyNonPosixAttributes = true;
	flags->failIfUnableToCopyBasic = true;
	return flags;
}

UnixCopyFile$Flags::UnixCopyFile$Flags() {
}

$Class* UnixCopyFile$Flags::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"replaceExisting", "Z", nullptr, 0, $field(UnixCopyFile$Flags, replaceExisting)},
		{"atomicMove", "Z", nullptr, 0, $field(UnixCopyFile$Flags, atomicMove)},
		{"followLinks", "Z", nullptr, 0, $field(UnixCopyFile$Flags, followLinks)},
		{"interruptible", "Z", nullptr, 0, $field(UnixCopyFile$Flags, interruptible)},
		{"copyBasicAttributes", "Z", nullptr, 0, $field(UnixCopyFile$Flags, copyBasicAttributes)},
		{"copyPosixAttributes", "Z", nullptr, 0, $field(UnixCopyFile$Flags, copyPosixAttributes)},
		{"copyNonPosixAttributes", "Z", nullptr, 0, $field(UnixCopyFile$Flags, copyNonPosixAttributes)},
		{"failIfUnableToCopyBasic", "Z", nullptr, 0, $field(UnixCopyFile$Flags, failIfUnableToCopyBasic)},
		{"failIfUnableToCopyPosix", "Z", nullptr, 0, $field(UnixCopyFile$Flags, failIfUnableToCopyPosix)},
		{"failIfUnableToCopyNonPosix", "Z", nullptr, 0, $field(UnixCopyFile$Flags, failIfUnableToCopyNonPosix)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(UnixCopyFile$Flags, init$, void)},
		{"fromCopyOptions", "([Ljava/nio/file/CopyOption;)Lsun/nio/fs/UnixCopyFile$Flags;", nullptr, $STATIC | $TRANSIENT, $staticMethod(UnixCopyFile$Flags, fromCopyOptions, UnixCopyFile$Flags*, $CopyOptionArray*)},
		{"fromMoveOptions", "([Ljava/nio/file/CopyOption;)Lsun/nio/fs/UnixCopyFile$Flags;", nullptr, $STATIC | $TRANSIENT, $staticMethod(UnixCopyFile$Flags, fromMoveOptions, UnixCopyFile$Flags*, $CopyOptionArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.UnixCopyFile$Flags", "sun.nio.fs.UnixCopyFile", "Flags", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.UnixCopyFile$Flags",
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
		"sun.nio.fs.UnixCopyFile"
	};
	$loadClass(UnixCopyFile$Flags, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnixCopyFile$Flags);
	});
	return class$;
}

$Class* UnixCopyFile$Flags::class$ = nullptr;

		} // fs
	} // nio
} // sun