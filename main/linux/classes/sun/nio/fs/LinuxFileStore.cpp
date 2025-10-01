#include <sun/nio/fs/LinuxFileStore.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/attribute/DosFileAttributeView.h>
#include <java/nio/file/attribute/PosixFileAttributeView.h>
#include <java/nio/file/attribute/UserDefinedFileAttributeView.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/regex/Pattern.h>
#include <sun/nio/fs/LinuxFileSystem.h>
#include <sun/nio/fs/UnixException.h>
#include <sun/nio/fs/UnixFileAttributes.h>
#include <sun/nio/fs/UnixFileStore$FeatureStatus.h>
#include <sun/nio/fs/UnixFileStore.h>
#include <sun/nio/fs/UnixFileSystem.h>
#include <sun/nio/fs/UnixMountEntry.h>
#include <sun/nio/fs/UnixNativeDispatcher.h>
#include <sun/nio/fs/UnixPath.h>
#include <jcpp.h>

#undef NOT_PRESENT
#undef PRESENT

using $IOException = ::java::io::IOException;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $DosFileAttributeView = ::java::nio::file::attribute::DosFileAttributeView;
using $PosixFileAttributeView = ::java::nio::file::attribute::PosixFileAttributeView;
using $UserDefinedFileAttributeView = ::java::nio::file::attribute::UserDefinedFileAttributeView;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Pattern = ::java::util::regex::Pattern;
using $LinuxFileSystem = ::sun::nio::fs::LinuxFileSystem;
using $UnixException = ::sun::nio::fs::UnixException;
using $UnixFileAttributes = ::sun::nio::fs::UnixFileAttributes;
using $UnixFileStore = ::sun::nio::fs::UnixFileStore;
using $UnixFileStore$FeatureStatus = ::sun::nio::fs::UnixFileStore$FeatureStatus;
using $UnixFileSystem = ::sun::nio::fs::UnixFileSystem;
using $UnixMountEntry = ::sun::nio::fs::UnixMountEntry;
using $UnixNativeDispatcher = ::sun::nio::fs::UnixNativeDispatcher;
using $UnixPath = ::sun::nio::fs::UnixPath;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _LinuxFileStore_FieldInfo_[] = {
	{"xattrChecked", "Z", nullptr, $PRIVATE | $VOLATILE, $field(LinuxFileStore, xattrChecked)},
	{"xattrEnabled", "Z", nullptr, $PRIVATE | $VOLATILE, $field(LinuxFileStore, xattrEnabled)},
	{}
};

$MethodInfo _LinuxFileStore_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/UnixPath;)V", nullptr, 0, $method(static_cast<void(LinuxFileStore::*)($UnixPath*)>(&LinuxFileStore::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/nio/fs/UnixFileSystem;Lsun/nio/fs/UnixMountEntry;)V", nullptr, 0, $method(static_cast<void(LinuxFileStore::*)($UnixFileSystem*,$UnixMountEntry*)>(&LinuxFileStore::init$)), "java.io.IOException"},
	{"findMountEntry", "()Lsun/nio/fs/UnixMountEntry;", nullptr, 0, nullptr, "java.io.IOException"},
	{"getKernelVersion", "()[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)()>(&LinuxFileStore::getKernelVersion))},
	{"supportsFileAttributeView", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<+Ljava/nio/file/attribute/FileAttributeView;>;)Z", $PUBLIC},
	{"supportsFileAttributeView", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LinuxFileStore_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.LinuxFileStore",
	"sun.nio.fs.UnixFileStore",
	nullptr,
	_LinuxFileStore_FieldInfo_,
	_LinuxFileStore_MethodInfo_
};

$Object* allocate$LinuxFileStore($Class* clazz) {
	return $of($alloc(LinuxFileStore));
}

void LinuxFileStore::init$($UnixPath* file) {
	$UnixFileStore::init$(file);
}

void LinuxFileStore::init$($UnixFileSystem* fs, $UnixMountEntry* entry) {
	$UnixFileStore::init$(fs, entry);
}

$UnixMountEntry* LinuxFileStore::findMountEntry() {
	$var($LinuxFileSystem, fs, $cast($LinuxFileSystem, $cast($UnixFileSystem, $nc($(file()))->getFileSystem())));
	$var($UnixPath, path, nullptr);
	try {
		$var($bytes, rp, $UnixNativeDispatcher::realpath($(file())));
		$assign(path, $new($UnixPath, static_cast<$UnixFileSystem*>(fs), rp));
	} catch ($UnixException&) {
		$var($UnixException, x, $catch());
		x->rethrowAsIOException($(file()));
	}
	$var($List, procMountsEntries, $nc(fs)->getMountEntries("/proc/mounts"_s));
	$var($UnixPath, parent, $nc(path)->getParent());
	while (parent != nullptr) {
		$var($UnixFileAttributes, attrs, nullptr);
		try {
			$assign(attrs, $UnixFileAttributes::get(parent, true));
		} catch ($UnixException&) {
			$var($UnixException, x, $catch());
			x->rethrowAsIOException(parent);
		}
		int64_t var$0 = $nc(attrs)->dev();
		if (var$0 != dev()) {
			$var($bytes, dir, path->asByteArray());
			{
				$var($Iterator, i$, $nc(procMountsEntries)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($UnixMountEntry, entry, $cast($UnixMountEntry, i$->next()));
					{
						if ($Arrays::equals(dir, $($nc(entry)->dir()))) {
							return entry;
						}
					}
				}
			}
		}
		$assign(path, parent);
		$assign(parent, parent->getParent());
	}
	$var($bytes, dir, path->asByteArray());
	{
		$var($Iterator, i$, $nc(procMountsEntries)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($UnixMountEntry, entry, $cast($UnixMountEntry, i$->next()));
			{
				if ($Arrays::equals(dir, $($nc(entry)->dir()))) {
					return entry;
				}
			}
		}
	}
	$throwNew($IOException, "Mount point not found"_s);
}

$ints* LinuxFileStore::getKernelVersion() {
	$init(LinuxFileStore);
	$var($Pattern, pattern, $Pattern::compile("\\D+"_s));
	$var($StringArray, matches, $nc(pattern)->split($($System::getProperty("os.version"_s))));
	$var($ints, majorMinorMicro, $new($ints, 3));
	int32_t length = $Math::min($nc(matches)->length, majorMinorMicro->length);
	for (int32_t i = 0; i < length; ++i) {
		majorMinorMicro->set(i, $nc($($Integer::valueOf($nc(matches)->get(i))))->intValue());
	}
	return majorMinorMicro;
}

bool LinuxFileStore::supportsFileAttributeView($Class* type) {
	$load($DosFileAttributeView);
	$load($UserDefinedFileAttributeView);
	if (type == $DosFileAttributeView::class$ || type == $UserDefinedFileAttributeView::class$) {
		$UnixFileStore$FeatureStatus* status = checkIfFeaturePresent("user_xattr"_s);
		$init($UnixFileStore$FeatureStatus);
		if (status == $UnixFileStore$FeatureStatus::PRESENT) {
			return true;
		}
		if (status == $UnixFileStore$FeatureStatus::NOT_PRESENT) {
			return false;
		}
		if ($nc($(entry()))->hasOption("user_xattr"_s)) {
			return true;
		}
		if ($nc($(entry()))->hasOption("nouser_xattr"_s)) {
			return false;
		}
		if ($nc($($nc($(entry()))->fstype()))->equals("ext4"_s)) {
			if (!this->xattrChecked) {
				$var($ints, kernelVersion, getKernelVersion());
				this->xattrEnabled = $nc(kernelVersion)->get(0) > 2 || ($nc(kernelVersion)->get(0) == 2 && kernelVersion->get(1) > 6) || ($nc(kernelVersion)->get(0) == 2 && kernelVersion->get(1) == 6 && kernelVersion->get(2) >= 39);
				this->xattrChecked = true;
			}
			return this->xattrEnabled;
		}
		if (!this->xattrChecked) {
			$var($UnixFileSystem, var$0, $cast($UnixFileSystem, $nc($(file()))->getFileSystem()));
			$var($UnixPath, dir, $new($UnixPath, var$0, $($nc($(entry()))->dir())));
			this->xattrEnabled = isExtendedAttributesEnabled(dir);
			this->xattrChecked = true;
		}
		return this->xattrEnabled;
	}
	$load($PosixFileAttributeView);
	if (type == $PosixFileAttributeView::class$ && $nc($($nc($(entry()))->fstype()))->equals("vfat"_s)) {
		return false;
	}
	return $UnixFileStore::supportsFileAttributeView(type);
}

bool LinuxFileStore::supportsFileAttributeView($String* name) {
	if ($nc(name)->equals("dos"_s)) {
		$load($DosFileAttributeView);
		return supportsFileAttributeView($DosFileAttributeView::class$);
	}
	if ($nc(name)->equals("user"_s)) {
		$load($UserDefinedFileAttributeView);
		return supportsFileAttributeView($UserDefinedFileAttributeView::class$);
	}
	return $UnixFileStore::supportsFileAttributeView(name);
}

LinuxFileStore::LinuxFileStore() {
}

$Class* LinuxFileStore::load$($String* name, bool initialize) {
	$loadClass(LinuxFileStore, name, initialize, &_LinuxFileStore_ClassInfo_, allocate$LinuxFileStore);
	return class$;
}

$Class* LinuxFileStore::class$ = nullptr;

		} // fs
	} // nio
} // sun