#include <sun/nio/fs/WindowsFileStore.h>

#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/file/FileStore.h>
#include <java/nio/file/FileSystemException.h>
#include <java/nio/file/attribute/AclFileAttributeView.h>
#include <java/nio/file/attribute/BasicFileAttributeView.h>
#include <java/nio/file/attribute/DosFileAttributeView.h>
#include <java/nio/file/attribute/FileOwnerAttributeView.h>
#include <java/nio/file/attribute/FileStoreAttributeView.h>
#include <java/nio/file/attribute/UserDefinedFileAttributeView.h>
#include <java/util/Locale.h>
#include <sun/nio/fs/WindowsException.h>
#include <sun/nio/fs/WindowsLinkSupport.h>
#include <sun/nio/fs/WindowsNativeDispatcher$DiskFreeSpace.h>
#include <sun/nio/fs/WindowsNativeDispatcher$VolumeInformation.h>
#include <sun/nio/fs/WindowsNativeDispatcher.h>
#include <sun/nio/fs/WindowsPath.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef ROOT

using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $FileStore = ::java::nio::file::FileStore;
using $FileSystemException = ::java::nio::file::FileSystemException;
using $AclFileAttributeView = ::java::nio::file::attribute::AclFileAttributeView;
using $BasicFileAttributeView = ::java::nio::file::attribute::BasicFileAttributeView;
using $DosFileAttributeView = ::java::nio::file::attribute::DosFileAttributeView;
using $FileOwnerAttributeView = ::java::nio::file::attribute::FileOwnerAttributeView;
using $FileStoreAttributeView = ::java::nio::file::attribute::FileStoreAttributeView;
using $UserDefinedFileAttributeView = ::java::nio::file::attribute::UserDefinedFileAttributeView;
using $Locale = ::java::util::Locale;
using $WindowsException = ::sun::nio::fs::WindowsException;
using $WindowsLinkSupport = ::sun::nio::fs::WindowsLinkSupport;
using $WindowsNativeDispatcher = ::sun::nio::fs::WindowsNativeDispatcher;
using $WindowsNativeDispatcher$DiskFreeSpace = ::sun::nio::fs::WindowsNativeDispatcher$DiskFreeSpace;
using $WindowsNativeDispatcher$VolumeInformation = ::sun::nio::fs::WindowsNativeDispatcher$VolumeInformation;
using $WindowsPath = ::sun::nio::fs::WindowsPath;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _WindowsFileStore_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WindowsFileStore, $assertionsDisabled)},
	{"root", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(WindowsFileStore, root)},
	{"volInfo", "Lsun/nio/fs/WindowsNativeDispatcher$VolumeInformation;", nullptr, $PRIVATE | $FINAL, $field(WindowsFileStore, volInfo)},
	{"volType", "I", nullptr, $PRIVATE | $FINAL, $field(WindowsFileStore, volType)},
	{"displayName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(WindowsFileStore, displayName)},
	{"hashCode", "I", nullptr, $PRIVATE, $field(WindowsFileStore, hashCode$)},
	{}
};

$MethodInfo _WindowsFileStore_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsFileStore::*)($String*)>(&WindowsFileStore::init$)), "sun.nio.fs.WindowsException"},
	{"create", "(Ljava/lang/String;Z)Lsun/nio/fs/WindowsFileStore;", nullptr, $STATIC, $method(static_cast<WindowsFileStore*(*)($String*,bool)>(&WindowsFileStore::create)), "java.io.IOException"},
	{"create", "(Lsun/nio/fs/WindowsPath;)Lsun/nio/fs/WindowsFileStore;", nullptr, $STATIC, $method(static_cast<WindowsFileStore*(*)($WindowsPath*)>(&WindowsFileStore::create)), "java.io.IOException"},
	{"createFromPath", "(Ljava/lang/String;)Lsun/nio/fs/WindowsFileStore;", nullptr, $PRIVATE | $STATIC, $method(static_cast<WindowsFileStore*(*)($String*)>(&WindowsFileStore::createFromPath)), "sun.nio.fs.WindowsException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getBlockSize", "()J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getFileStoreAttributeView", "(Ljava/lang/Class;)Ljava/nio/file/attribute/FileStoreAttributeView;", "<V::Ljava/nio/file/attribute/FileStoreAttributeView;>(Ljava/lang/Class<TV;>;)TV;", $PUBLIC},
	{"getTotalSpace", "()J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getUnallocatedSpace", "()J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getUsableSpace", "()J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"readDiskFreeSpace", "()Lsun/nio/fs/WindowsNativeDispatcher$DiskFreeSpace;", nullptr, $PRIVATE, $method(static_cast<$WindowsNativeDispatcher$DiskFreeSpace*(WindowsFileStore::*)()>(&WindowsFileStore::readDiskFreeSpace)), "java.io.IOException"},
	{"readDiskFreeSpaceEx", "()Lsun/nio/fs/WindowsNativeDispatcher$DiskFreeSpace;", nullptr, $PRIVATE, $method(static_cast<$WindowsNativeDispatcher$DiskFreeSpace*(WindowsFileStore::*)()>(&WindowsFileStore::readDiskFreeSpaceEx)), "java.io.IOException"},
	{"supportsFileAttributeView", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<+Ljava/nio/file/attribute/FileAttributeView;>;)Z", $PUBLIC},
	{"supportsFileAttributeView", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"type", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"volumeInformation", "()Lsun/nio/fs/WindowsNativeDispatcher$VolumeInformation;", nullptr, 0},
	{"volumeType", "()I", nullptr, 0},
	{}
};

$ClassInfo _WindowsFileStore_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsFileStore",
	"java.nio.file.FileStore",
	nullptr,
	_WindowsFileStore_FieldInfo_,
	_WindowsFileStore_MethodInfo_
};

$Object* allocate$WindowsFileStore($Class* clazz) {
	return $of($alloc(WindowsFileStore));
}

bool WindowsFileStore::$assertionsDisabled = false;

void WindowsFileStore::init$($String* root) {
	$FileStore::init$();
	if (!WindowsFileStore::$assertionsDisabled && !($nc(root)->charAt(root->length() - 1) == u'\\')) {
		$throwNew($AssertionError);
	}
	$set(this, root, root);
	$set(this, volInfo, $WindowsNativeDispatcher::GetVolumeInformation(root));
	this->volType = $WindowsNativeDispatcher::GetDriveType(root);
	$var($String, vol, $nc(this->volInfo)->volumeName());
	if (!$nc(vol)->isEmpty()) {
		$set(this, displayName, vol);
	} else {
		$set(this, displayName, (this->volType == 2) ? "Removable Disk"_s : ""_s);
	}
}

WindowsFileStore* WindowsFileStore::create($String* root, bool ignoreNotReady) {
	$init(WindowsFileStore);
	try {
		return $new(WindowsFileStore, root);
	} catch ($WindowsException& x) {
		if (ignoreNotReady && x->lastError() == 21) {
			return nullptr;
		}
		x->rethrowAsIOException(root);
		return nullptr;
	}
	$shouldNotReachHere();
}

WindowsFileStore* WindowsFileStore::create($WindowsPath* file) {
	$init(WindowsFileStore);
	$useLocalCurrentObjectStackCache();
	try {
		$var($String, target, $WindowsLinkSupport::getFinalPath(file, true));
		try {
			return createFromPath(target);
		} catch ($WindowsException& e) {
			bool var$1 = e->lastError() != 144;
			bool var$0 = var$1 && e->lastError() != 87;
			if (var$0 && e->lastError() != 267) {
				$throw(e);
			}
			$assign(target, $WindowsLinkSupport::getFinalPath(file));
			if (target == nullptr) {
				$throwNew($FileSystemException, $($nc(file)->getPathForExceptionMessage()), nullptr, "Couldn\'t resolve path"_s);
			}
			return createFromPath(target);
		}
	} catch ($WindowsException& x) {
		x->rethrowAsIOException(file);
		return nullptr;
	}
	$shouldNotReachHere();
}

WindowsFileStore* WindowsFileStore::createFromPath($String* target) {
	$init(WindowsFileStore);
	$var($String, root, $WindowsNativeDispatcher::GetVolumePathName(target));
	return $new(WindowsFileStore, root);
}

$WindowsNativeDispatcher$VolumeInformation* WindowsFileStore::volumeInformation() {
	return this->volInfo;
}

int32_t WindowsFileStore::volumeType() {
	return this->volType;
}

$String* WindowsFileStore::name() {
	return $nc(this->volInfo)->volumeName();
}

$String* WindowsFileStore::type() {
	return $nc(this->volInfo)->fileSystemName();
}

bool WindowsFileStore::isReadOnly() {
	return (((int32_t)($nc(this->volInfo)->flags() & (uint32_t)0x00080000)) != 0);
}

$WindowsNativeDispatcher$DiskFreeSpace* WindowsFileStore::readDiskFreeSpaceEx() {
	try {
		return $WindowsNativeDispatcher::GetDiskFreeSpaceEx(this->root);
	} catch ($WindowsException& x) {
		x->rethrowAsIOException(this->root);
		return nullptr;
	}
	$shouldNotReachHere();
}

$WindowsNativeDispatcher$DiskFreeSpace* WindowsFileStore::readDiskFreeSpace() {
	try {
		return $WindowsNativeDispatcher::GetDiskFreeSpace(this->root);
	} catch ($WindowsException& x) {
		x->rethrowAsIOException(this->root);
		return nullptr;
	}
	$shouldNotReachHere();
}

int64_t WindowsFileStore::getTotalSpace() {
	int64_t space = $nc($(readDiskFreeSpaceEx()))->totalNumberOfBytes();
	return space >= 0 ? space : $Long::MAX_VALUE;
}

int64_t WindowsFileStore::getUsableSpace() {
	int64_t space = $nc($(readDiskFreeSpaceEx()))->freeBytesAvailable();
	return space >= 0 ? space : $Long::MAX_VALUE;
}

int64_t WindowsFileStore::getUnallocatedSpace() {
	int64_t space = $nc($(readDiskFreeSpaceEx()))->freeBytesAvailable();
	return space >= 0 ? space : $Long::MAX_VALUE;
}

int64_t WindowsFileStore::getBlockSize() {
	return $nc($(readDiskFreeSpace()))->bytesPerSector();
}

$FileStoreAttributeView* WindowsFileStore::getFileStoreAttributeView($Class* type) {
	if (type == nullptr) {
		$throwNew($NullPointerException);
	}
	return ($FileStoreAttributeView*)nullptr;
}

$Object* WindowsFileStore::getAttribute($String* attribute) {
	if ($nc(attribute)->equals("totalSpace"_s)) {
		return $of($Long::valueOf(getTotalSpace()));
	}
	if ($nc(attribute)->equals("usableSpace"_s)) {
		return $of($Long::valueOf(getUsableSpace()));
	}
	if ($nc(attribute)->equals("unallocatedSpace"_s)) {
		return $of($Long::valueOf(getUnallocatedSpace()));
	}
	if ($nc(attribute)->equals("bytesPerSector"_s)) {
		return $of($Long::valueOf(getBlockSize()));
	}
	if ($nc(attribute)->equals("volume:vsn"_s)) {
		return $of($Integer::valueOf($nc(this->volInfo)->volumeSerialNumber()));
	}
	if ($nc(attribute)->equals("volume:isRemovable"_s)) {
		return $of($Boolean::valueOf(this->volType == 2));
	}
	if ($nc(attribute)->equals("volume:isCdrom"_s)) {
		return $of($Boolean::valueOf(this->volType == 5));
	}
	$throwNew($UnsupportedOperationException, $$str({"\'"_s, attribute, "\' not recognized"_s}));
}

bool WindowsFileStore::supportsFileAttributeView($Class* type) {
	if (type == nullptr) {
		$throwNew($NullPointerException);
	}
	$load($BasicFileAttributeView);
	$load($DosFileAttributeView);
	if (type == $BasicFileAttributeView::class$ || type == $DosFileAttributeView::class$) {
		return true;
	}
	$load($AclFileAttributeView);
	$load($FileOwnerAttributeView);
	if (type == $AclFileAttributeView::class$ || type == $FileOwnerAttributeView::class$) {
		return (((int32_t)($nc(this->volInfo)->flags() & (uint32_t)8)) != 0);
	}
	$load($UserDefinedFileAttributeView);
	if (type == $UserDefinedFileAttributeView::class$) {
		return (((int32_t)($nc(this->volInfo)->flags() & (uint32_t)0x00040000)) != 0);
	}
	return false;
}

bool WindowsFileStore::supportsFileAttributeView($String* name) {
	bool var$0 = $nc(name)->equals("basic"_s);
	if (var$0 || $nc(name)->equals("dos"_s)) {
		return true;
	}
	if ($nc(name)->equals("acl"_s)) {
		$load($AclFileAttributeView);
		return supportsFileAttributeView($AclFileAttributeView::class$);
	}
	if ($nc(name)->equals("owner"_s)) {
		$load($FileOwnerAttributeView);
		return supportsFileAttributeView($FileOwnerAttributeView::class$);
	}
	if ($nc(name)->equals("user"_s)) {
		$load($UserDefinedFileAttributeView);
		return supportsFileAttributeView($UserDefinedFileAttributeView::class$);
	}
	return false;
}

bool WindowsFileStore::equals(Object$* ob) {
	if ($equals(ob, this)) {
		return true;
	}
	{
		$var(WindowsFileStore, other, nullptr);
		bool var$0 = $instanceOf(WindowsFileStore, ob);
		if (var$0) {
			$assign(other, $cast(WindowsFileStore, ob));
			var$0 = true;
		}
		if (var$0) {
			if ($nc(this->root)->equals($nc(other)->root)) {
				return true;
			}
			if (this->volType == 3 && $nc(other)->volumeType() == 3) {
				return $nc(this->root)->equalsIgnoreCase(other->root);
			}
		}
	}
	return false;
}

int32_t WindowsFileStore::hashCode() {
	int32_t hc = this->hashCode$;
	if (hc == 0) {
		$init($Locale);
		hc = (this->volType == 3) ? $($nc(this->root)->toLowerCase($Locale::ROOT))->hashCode() : $nc(this->root)->hashCode();
		this->hashCode$ = hc;
	}
	return hc;
}

$String* WindowsFileStore::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder, this->displayName));
	if (sb->length() > 0) {
		sb->append(" "_s);
	}
	sb->append("("_s);
	sb->append($($nc(this->root)->subSequence(0, $nc(this->root)->length() - 1)));
	sb->append(")"_s);
	return sb->toString();
}

void clinit$WindowsFileStore($Class* class$) {
	WindowsFileStore::$assertionsDisabled = !WindowsFileStore::class$->desiredAssertionStatus();
}

WindowsFileStore::WindowsFileStore() {
}

$Class* WindowsFileStore::load$($String* name, bool initialize) {
	$loadClass(WindowsFileStore, name, initialize, &_WindowsFileStore_ClassInfo_, clinit$WindowsFileStore, allocate$WindowsFileStore);
	return class$;
}

$Class* WindowsFileStore::class$ = nullptr;

		} // fs
	} // nio
} // sun