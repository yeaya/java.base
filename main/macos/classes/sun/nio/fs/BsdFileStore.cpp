#include <sun/nio/fs/BsdFileStore.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Iterable.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/attribute/UserDefinedFileAttributeView.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <sun/nio/fs/BsdNativeDispatcher.h>
#include <sun/nio/fs/UnixException.h>
#include <sun/nio/fs/UnixFileStore$FeatureStatus.h>
#include <sun/nio/fs/UnixFileStore.h>
#include <sun/nio/fs/UnixFileSystem.h>
#include <sun/nio/fs/UnixMountEntry.h>
#include <sun/nio/fs/UnixNativeDispatcher.h>
#include <sun/nio/fs/UnixPath.h>
#include <sun/nio/fs/Util.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef NOT_PRESENT
#undef PRESENT

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $UserDefinedFileAttributeView = ::java::nio::file::attribute::UserDefinedFileAttributeView;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $BsdNativeDispatcher = ::sun::nio::fs::BsdNativeDispatcher;
using $UnixException = ::sun::nio::fs::UnixException;
using $UnixFileStore = ::sun::nio::fs::UnixFileStore;
using $UnixFileStore$FeatureStatus = ::sun::nio::fs::UnixFileStore$FeatureStatus;
using $UnixFileSystem = ::sun::nio::fs::UnixFileSystem;
using $UnixMountEntry = ::sun::nio::fs::UnixMountEntry;
using $UnixNativeDispatcher = ::sun::nio::fs::UnixNativeDispatcher;
using $UnixPath = ::sun::nio::fs::UnixPath;
using $Util = ::sun::nio::fs::Util;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace nio {
		namespace fs {

$MethodInfo _BsdFileStore_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/UnixPath;)V", nullptr, 0, $method(static_cast<void(BsdFileStore::*)($UnixPath*)>(&BsdFileStore::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/nio/fs/UnixFileSystem;Lsun/nio/fs/UnixMountEntry;)V", nullptr, 0, $method(static_cast<void(BsdFileStore::*)($UnixFileSystem*,$UnixMountEntry*)>(&BsdFileStore::init$)), "java.io.IOException"},
	{"findMountEntry", "()Lsun/nio/fs/UnixMountEntry;", nullptr, 0, nullptr, "java.io.IOException"},
	{"isOsVersionGte", "(II)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int32_t,int32_t)>(&BsdFileStore::isOsVersionGte))},
	{"supportsFileAttributeView", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<+Ljava/nio/file/attribute/FileAttributeView;>;)Z", $PUBLIC},
	{"supportsFileAttributeView", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BsdFileStore_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.BsdFileStore",
	"sun.nio.fs.UnixFileStore",
	nullptr,
	nullptr,
	_BsdFileStore_MethodInfo_
};

$Object* allocate$BsdFileStore($Class* clazz) {
	return $of($alloc(BsdFileStore));
}

void BsdFileStore::init$($UnixPath* file) {
	$UnixFileStore::init$(file);
}

void BsdFileStore::init$($UnixFileSystem* fs, $UnixMountEntry* entry) {
	$UnixFileStore::init$(fs, entry);
}

$UnixMountEntry* BsdFileStore::findMountEntry() {
	$var($UnixFileSystem, fs, $cast($UnixFileSystem, $nc($(file()))->getFileSystem()));
	$var($UnixPath, path, nullptr);
	try {
		$var($bytes, rp, $UnixNativeDispatcher::realpath($(file())));
		$assign(path, $new($UnixPath, fs, rp));
	} catch ($UnixException&) {
		$var($UnixException, x, $catch());
		x->rethrowAsIOException($(file()));
	}
	$var($bytes, dir, nullptr);
	try {
		$assign(dir, $BsdNativeDispatcher::getmntonname(path));
	} catch ($UnixException&) {
		$var($UnixException, x, $catch());
		x->rethrowAsIOException(path);
	}
	{
		$var($Iterator, i$, $nc($($nc(fs)->getMountEntries()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($UnixMountEntry, entry, $cast($UnixMountEntry, i$->next()));
			{
				if ($Arrays::equals(dir, $($nc(entry)->dir()))) {
					return entry;
				}
			}
		}
	}
	$throwNew($IOException, "Mount point not found in fstab"_s);
}

bool BsdFileStore::supportsFileAttributeView($Class* type) {
	$load($UserDefinedFileAttributeView);
	if (type == $UserDefinedFileAttributeView::class$) {
		$UnixFileStore$FeatureStatus* status = checkIfFeaturePresent("user_xattr"_s);
		$init($UnixFileStore$FeatureStatus);
		if (status == $UnixFileStore$FeatureStatus::PRESENT) {
			return true;
		}
		if (status == $UnixFileStore$FeatureStatus::NOT_PRESENT) {
			return false;
		}
		$var($String, fstype, $nc($(entry()))->fstype());
		if ("hfs"_s->equals(fstype)) {
			return true;
		}
		if ("apfs"_s->equals(fstype)) {
			return isOsVersionGte(10, 14);
		}
		$var($UnixFileSystem, var$0, $cast($UnixFileSystem, $nc($(file()))->getFileSystem()));
		$var($UnixPath, dir, $new($UnixPath, var$0, $($nc($(entry()))->dir())));
		return isExtendedAttributesEnabled(dir);
	}
	return $UnixFileStore::supportsFileAttributeView(type);
}

bool BsdFileStore::supportsFileAttributeView($String* name) {
	if ($nc(name)->equals("user"_s)) {
		$load($UserDefinedFileAttributeView);
		return supportsFileAttributeView($UserDefinedFileAttributeView::class$);
	}
	return $UnixFileStore::supportsFileAttributeView(name);
}

bool BsdFileStore::isOsVersionGte(int32_t requiredMajor, int32_t requiredMinor) {
	$init(BsdFileStore);
	$var($String, osVersion, $GetPropertyAction::privilegedGetProperty("os.version"_s));
	$var($StringArray, vers, $Util::split(osVersion, u'.'));
	int32_t majorVersion = $Integer::parseInt($nc(vers)->get(0));
	int32_t minorVersion = $Integer::parseInt($nc(vers)->get(1));
	return (majorVersion > requiredMajor) || (majorVersion == requiredMajor && minorVersion >= requiredMinor);
}

BsdFileStore::BsdFileStore() {
}

$Class* BsdFileStore::load$($String* name, bool initialize) {
	$loadClass(BsdFileStore, name, initialize, &_BsdFileStore_ClassInfo_, allocate$BsdFileStore);
	return class$;
}

$Class* BsdFileStore::class$ = nullptr;

		} // fs
	} // nio
} // sun