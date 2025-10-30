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
using $ExtendedOptions$InternalOption = ::sun::nio::fs::ExtendedOptions$InternalOption;
using $UnixCopyFile = ::sun::nio::fs::UnixCopyFile;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _UnixCopyFile$Flags_FieldInfo_[] = {
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

$MethodInfo _UnixCopyFile$Flags_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(UnixCopyFile$Flags::*)()>(&UnixCopyFile$Flags::init$))},
	{"fromCopyOptions", "([Ljava/nio/file/CopyOption;)Lsun/nio/fs/UnixCopyFile$Flags;", nullptr, $STATIC | $TRANSIENT, $method(static_cast<UnixCopyFile$Flags*(*)($CopyOptionArray*)>(&UnixCopyFile$Flags::fromCopyOptions))},
	{"fromMoveOptions", "([Ljava/nio/file/CopyOption;)Lsun/nio/fs/UnixCopyFile$Flags;", nullptr, $STATIC | $TRANSIENT, $method(static_cast<UnixCopyFile$Flags*(*)($CopyOptionArray*)>(&UnixCopyFile$Flags::fromMoveOptions))},
	{}
};

$InnerClassInfo _UnixCopyFile$Flags_InnerClassesInfo_[] = {
	{"sun.nio.fs.UnixCopyFile$Flags", "sun.nio.fs.UnixCopyFile", "Flags", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _UnixCopyFile$Flags_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.UnixCopyFile$Flags",
	"java.lang.Object",
	nullptr,
	_UnixCopyFile$Flags_FieldInfo_,
	_UnixCopyFile$Flags_MethodInfo_,
	nullptr,
	nullptr,
	_UnixCopyFile$Flags_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.UnixCopyFile"
};

$Object* allocate$UnixCopyFile$Flags($Class* clazz) {
	return $of($alloc(UnixCopyFile$Flags));
}

void UnixCopyFile$Flags::init$() {
}

UnixCopyFile$Flags* UnixCopyFile$Flags::fromCopyOptions($CopyOptionArray* options) {
	$useLocalCurrentObjectStackCache();
	$var(UnixCopyFile$Flags, flags, $new(UnixCopyFile$Flags));
	flags->followLinks = true;
	{
		$var($CopyOptionArray, arr$, options);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
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
	$useLocalCurrentObjectStackCache();
	$var(UnixCopyFile$Flags, flags, $new(UnixCopyFile$Flags));
	{
		$var($CopyOptionArray, arr$, options);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
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
	$loadClass(UnixCopyFile$Flags, name, initialize, &_UnixCopyFile$Flags_ClassInfo_, allocate$UnixCopyFile$Flags);
	return class$;
}

$Class* UnixCopyFile$Flags::class$ = nullptr;

		} // fs
	} // nio
} // sun