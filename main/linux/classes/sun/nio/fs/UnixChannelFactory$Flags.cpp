#include <sun/nio/fs/UnixChannelFactory$Flags.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/StandardOpenOption.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <sun/nio/fs/ExtendedOptions$InternalOption.h>
#include <sun/nio/fs/ExtendedOptions.h>
#include <sun/nio/fs/UnixChannelFactory$1.h>
#include <sun/nio/fs/UnixChannelFactory.h>
#include <sun/nio/fs/UnixConstants.h>
#include <jcpp.h>

#undef DIRECT
#undef NOFOLLOW_LINKS
#undef O_NOFOLLOW

using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $LinkOption = ::java::nio::file::LinkOption;
using $OpenOption = ::java::nio::file::OpenOption;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $ExtendedOptions = ::sun::nio::fs::ExtendedOptions;
using $ExtendedOptions$InternalOption = ::sun::nio::fs::ExtendedOptions$InternalOption;
using $UnixChannelFactory = ::sun::nio::fs::UnixChannelFactory;
using $UnixChannelFactory$1 = ::sun::nio::fs::UnixChannelFactory$1;
using $UnixConstants = ::sun::nio::fs::UnixConstants;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _UnixChannelFactory$Flags_FieldInfo_[] = {
	{"read", "Z", nullptr, 0, $field(UnixChannelFactory$Flags, read)},
	{"write", "Z", nullptr, 0, $field(UnixChannelFactory$Flags, write)},
	{"append", "Z", nullptr, 0, $field(UnixChannelFactory$Flags, append)},
	{"truncateExisting", "Z", nullptr, 0, $field(UnixChannelFactory$Flags, truncateExisting)},
	{"noFollowLinks", "Z", nullptr, 0, $field(UnixChannelFactory$Flags, noFollowLinks)},
	{"create", "Z", nullptr, 0, $field(UnixChannelFactory$Flags, create)},
	{"createNew", "Z", nullptr, 0, $field(UnixChannelFactory$Flags, createNew)},
	{"deleteOnClose", "Z", nullptr, 0, $field(UnixChannelFactory$Flags, deleteOnClose)},
	{"sync", "Z", nullptr, 0, $field(UnixChannelFactory$Flags, sync)},
	{"dsync", "Z", nullptr, 0, $field(UnixChannelFactory$Flags, dsync)},
	{"direct", "Z", nullptr, 0, $field(UnixChannelFactory$Flags, direct)},
	{}
};

$MethodInfo _UnixChannelFactory$Flags_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(UnixChannelFactory$Flags::*)()>(&UnixChannelFactory$Flags::init$))},
	{"toFlags", "(Ljava/util/Set;)Lsun/nio/fs/UnixChannelFactory$Flags;", "(Ljava/util/Set<+Ljava/nio/file/OpenOption;>;)Lsun/nio/fs/UnixChannelFactory$Flags;", $STATIC, $method(static_cast<UnixChannelFactory$Flags*(*)($Set*)>(&UnixChannelFactory$Flags::toFlags))},
	{}
};

$InnerClassInfo _UnixChannelFactory$Flags_InnerClassesInfo_[] = {
	{"sun.nio.fs.UnixChannelFactory$Flags", "sun.nio.fs.UnixChannelFactory", "Flags", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _UnixChannelFactory$Flags_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.fs.UnixChannelFactory$Flags",
	"java.lang.Object",
	nullptr,
	_UnixChannelFactory$Flags_FieldInfo_,
	_UnixChannelFactory$Flags_MethodInfo_,
	nullptr,
	nullptr,
	_UnixChannelFactory$Flags_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.UnixChannelFactory"
};

$Object* allocate$UnixChannelFactory$Flags($Class* clazz) {
	return $of($alloc(UnixChannelFactory$Flags));
}

void UnixChannelFactory$Flags::init$() {
}

UnixChannelFactory$Flags* UnixChannelFactory$Flags::toFlags($Set* options) {
	$useLocalCurrentObjectStackCache();
	$var(UnixChannelFactory$Flags, flags, $new(UnixChannelFactory$Flags));
	{
		$var($Iterator, i$, $nc(options)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($OpenOption, option, $cast($OpenOption, i$->next()));
			{
				if ($instanceOf($StandardOpenOption, option)) {
					$init($UnixChannelFactory$1);
					switch ($nc($UnixChannelFactory$1::$SwitchMap$java$nio$file$StandardOpenOption)->get($nc(($cast($StandardOpenOption, option)))->ordinal())) {
					case 1:
						{
							flags->read = true;
							break;
						}
					case 2:
						{
							flags->write = true;
							break;
						}
					case 3:
						{
							flags->append = true;
							break;
						}
					case 4:
						{
							flags->truncateExisting = true;
							break;
						}
					case 5:
						{
							flags->create = true;
							break;
						}
					case 6:
						{
							flags->createNew = true;
							break;
						}
					case 7:
						{
							flags->deleteOnClose = true;
							break;
						}
					case 8:
						{
							break;
						}
					case 9:
						{
							flags->sync = true;
							break;
						}
					case 10:
						{
							flags->dsync = true;
							break;
						}
					default:
						{
							$throwNew($UnsupportedOperationException);
						}
					}
					continue;
				}
				$init($LinkOption);
				$init($UnixConstants);
				if ($equals(option, $LinkOption::NOFOLLOW_LINKS) && $UnixConstants::O_NOFOLLOW != 0) {
					flags->noFollowLinks = true;
					continue;
				}
				$init($ExtendedOptions);
				if ($nc($ExtendedOptions::DIRECT)->matches(option)) {
					flags->direct = true;
					continue;
				}
				if (option == nullptr) {
					$throwNew($NullPointerException);
				}
				$throwNew($UnsupportedOperationException, $$str({option, " not supported"_s}));
			}
		}
	}
	return flags;
}

UnixChannelFactory$Flags::UnixChannelFactory$Flags() {
}

$Class* UnixChannelFactory$Flags::load$($String* name, bool initialize) {
	$loadClass(UnixChannelFactory$Flags, name, initialize, &_UnixChannelFactory$Flags_ClassInfo_, allocate$UnixChannelFactory$Flags);
	return class$;
}

$Class* UnixChannelFactory$Flags::class$ = nullptr;

		} // fs
	} // nio
} // sun