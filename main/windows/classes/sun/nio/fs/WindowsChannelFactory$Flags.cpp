#include <sun/nio/fs/WindowsChannelFactory$Flags.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/StandardOpenOption.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <sun/nio/fs/ExtendedOptions$InternalOption.h>
#include <sun/nio/fs/ExtendedOptions.h>
#include <sun/nio/fs/WindowsChannelFactory$2.h>
#include <sun/nio/fs/WindowsChannelFactory.h>
#include <jcpp.h>

#undef DIRECT
#undef NOFOLLOW_LINKS
#undef NOSHARE_DELETE
#undef NOSHARE_READ
#undef NOSHARE_WRITE
#undef OPEN_REPARSE_POINT

using $ClassInfo = ::java::lang::ClassInfo;
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
using $WindowsChannelFactory = ::sun::nio::fs::WindowsChannelFactory;
using $WindowsChannelFactory$2 = ::sun::nio::fs::WindowsChannelFactory$2;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _WindowsChannelFactory$Flags_FieldInfo_[] = {
	{"read", "Z", nullptr, 0, $field(WindowsChannelFactory$Flags, read)},
	{"write", "Z", nullptr, 0, $field(WindowsChannelFactory$Flags, write)},
	{"append", "Z", nullptr, 0, $field(WindowsChannelFactory$Flags, append)},
	{"truncateExisting", "Z", nullptr, 0, $field(WindowsChannelFactory$Flags, truncateExisting)},
	{"create", "Z", nullptr, 0, $field(WindowsChannelFactory$Flags, create)},
	{"createNew", "Z", nullptr, 0, $field(WindowsChannelFactory$Flags, createNew)},
	{"deleteOnClose", "Z", nullptr, 0, $field(WindowsChannelFactory$Flags, deleteOnClose)},
	{"sparse", "Z", nullptr, 0, $field(WindowsChannelFactory$Flags, sparse)},
	{"overlapped", "Z", nullptr, 0, $field(WindowsChannelFactory$Flags, overlapped)},
	{"sync", "Z", nullptr, 0, $field(WindowsChannelFactory$Flags, sync)},
	{"dsync", "Z", nullptr, 0, $field(WindowsChannelFactory$Flags, dsync)},
	{"direct", "Z", nullptr, 0, $field(WindowsChannelFactory$Flags, direct)},
	{"shareRead", "Z", nullptr, 0, $field(WindowsChannelFactory$Flags, shareRead)},
	{"shareWrite", "Z", nullptr, 0, $field(WindowsChannelFactory$Flags, shareWrite)},
	{"shareDelete", "Z", nullptr, 0, $field(WindowsChannelFactory$Flags, shareDelete)},
	{"noFollowLinks", "Z", nullptr, 0, $field(WindowsChannelFactory$Flags, noFollowLinks)},
	{"openReparsePoint", "Z", nullptr, 0, $field(WindowsChannelFactory$Flags, openReparsePoint)},
	{}
};

$MethodInfo _WindowsChannelFactory$Flags_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(WindowsChannelFactory$Flags, init$, void)},
	{"toFlags", "(Ljava/util/Set;)Lsun/nio/fs/WindowsChannelFactory$Flags;", "(Ljava/util/Set<+Ljava/nio/file/OpenOption;>;)Lsun/nio/fs/WindowsChannelFactory$Flags;", $STATIC, $staticMethod(WindowsChannelFactory$Flags, toFlags, WindowsChannelFactory$Flags*, $Set*)},
	{}
};

$InnerClassInfo _WindowsChannelFactory$Flags_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsChannelFactory$Flags", "sun.nio.fs.WindowsChannelFactory", "Flags", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WindowsChannelFactory$Flags_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsChannelFactory$Flags",
	"java.lang.Object",
	nullptr,
	_WindowsChannelFactory$Flags_FieldInfo_,
	_WindowsChannelFactory$Flags_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsChannelFactory$Flags_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsChannelFactory"
};

$Object* allocate$WindowsChannelFactory$Flags($Class* clazz) {
	return $of($alloc(WindowsChannelFactory$Flags));
}

void WindowsChannelFactory$Flags::init$() {
	this->shareRead = true;
	this->shareWrite = true;
	this->shareDelete = true;
}

WindowsChannelFactory$Flags* WindowsChannelFactory$Flags::toFlags($Set* options) {
	$useLocalCurrentObjectStackCache();
	$var(WindowsChannelFactory$Flags, flags, $new(WindowsChannelFactory$Flags));
	{
		$var($Iterator, i$, $nc(options)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($OpenOption, option, $cast($OpenOption, i$->next()));
			{
				if ($instanceOf($StandardOpenOption, option)) {
					$init($WindowsChannelFactory$2);
					switch ($nc($WindowsChannelFactory$2::$SwitchMap$java$nio$file$StandardOpenOption)->get($nc(($cast($StandardOpenOption, option)))->ordinal())) {
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
							flags->sparse = true;
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
				if ($equals(option, $LinkOption::NOFOLLOW_LINKS)) {
					flags->noFollowLinks = true;
					continue;
				}
				$init($WindowsChannelFactory);
				if (option == $WindowsChannelFactory::OPEN_REPARSE_POINT) {
					flags->openReparsePoint = true;
					continue;
				}
				$init($ExtendedOptions);
				if ($nc($ExtendedOptions::NOSHARE_READ)->matches(option)) {
					flags->shareRead = false;
					continue;
				}
				if ($nc($ExtendedOptions::NOSHARE_WRITE)->matches(option)) {
					flags->shareWrite = false;
					continue;
				}
				if ($nc($ExtendedOptions::NOSHARE_DELETE)->matches(option)) {
					flags->shareDelete = false;
					continue;
				}
				if ($nc($ExtendedOptions::DIRECT)->matches(option)) {
					flags->direct = true;
					continue;
				}
				if (option == nullptr) {
					$throwNew($NullPointerException);
				}
				$throwNew($UnsupportedOperationException);
			}
		}
	}
	return flags;
}

WindowsChannelFactory$Flags::WindowsChannelFactory$Flags() {
}

$Class* WindowsChannelFactory$Flags::load$($String* name, bool initialize) {
	$loadClass(WindowsChannelFactory$Flags, name, initialize, &_WindowsChannelFactory$Flags_ClassInfo_, allocate$WindowsChannelFactory$Flags);
	return class$;
}

$Class* WindowsChannelFactory$Flags::class$ = nullptr;

		} // fs
	} // nio
} // sun