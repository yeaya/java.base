#include <sun/nio/fs/UnixFileStore.h>

#include <java/io/IOException.h>
#include <java/io/Reader.h>
#include <java/lang/ArithmeticException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/ByteChannel.h>
#include <java/nio/channels/Channels.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/file/FileStore.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/BasicFileAttributeView.h>
#include <java/nio/file/attribute/FileOwnerAttributeView.h>
#include <java/nio/file/attribute/FileStoreAttributeView.h>
#include <java/nio/file/attribute/PosixFileAttributeView.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Arrays.h>
#include <java/util/Properties.h>
#include <jdk/internal/util/StaticProperty.h>
#include <sun/nio/cs/UTF_8.h>
#include <sun/nio/cs/Unicode.h>
#include <sun/nio/fs/UnixConstants.h>
#include <sun/nio/fs/UnixException.h>
#include <sun/nio/fs/UnixFileAttributes.h>
#include <sun/nio/fs/UnixFileStore$1.h>
#include <sun/nio/fs/UnixFileStore$FeatureStatus.h>
#include <sun/nio/fs/UnixFileStoreAttributes.h>
#include <sun/nio/fs/UnixFileSystem.h>
#include <sun/nio/fs/UnixMountEntry.h>
#include <sun/nio/fs/UnixNativeDispatcher.h>
#include <sun/nio/fs/UnixPath.h>
#include <sun/nio/fs/Util.h>
#include <jcpp.h>

#undef INSTANCE
#undef MAX_VALUE
#undef NOT_PRESENT
#undef PRESENT
#undef UNKNOWN
#undef XATTR_NOT_FOUND

using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $IOException = ::java::io::IOException;
using $Reader = ::java::io::Reader;
using $ArithmeticException = ::java::lang::ArithmeticException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ByteChannel = ::java::nio::channels::ByteChannel;
using $Channel = ::java::nio::channels::Channel;
using $Channels = ::java::nio::channels::Channels;
using $ReadableByteChannel = ::java::nio::channels::ReadableByteChannel;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;
using $Charset = ::java::nio::charset::Charset;
using $FileStore = ::java::nio::file::FileStore;
using $Files = ::java::nio::file::Files;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $BasicFileAttributeView = ::java::nio::file::attribute::BasicFileAttributeView;
using $FileOwnerAttributeView = ::java::nio::file::attribute::FileOwnerAttributeView;
using $FileStoreAttributeView = ::java::nio::file::attribute::FileStoreAttributeView;
using $PosixFileAttributeView = ::java::nio::file::attribute::PosixFileAttributeView;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Arrays = ::java::util::Arrays;
using $Properties = ::java::util::Properties;
using $StaticProperty = ::jdk::internal::util::StaticProperty;
using $UTF_8 = ::sun::nio::cs::UTF_8;
using $Unicode = ::sun::nio::cs::Unicode;
using $UnixConstants = ::sun::nio::fs::UnixConstants;
using $UnixException = ::sun::nio::fs::UnixException;
using $UnixFileAttributes = ::sun::nio::fs::UnixFileAttributes;
using $UnixFileStore$1 = ::sun::nio::fs::UnixFileStore$1;
using $UnixFileStore$FeatureStatus = ::sun::nio::fs::UnixFileStore$FeatureStatus;
using $UnixFileStoreAttributes = ::sun::nio::fs::UnixFileStoreAttributes;
using $UnixFileSystem = ::sun::nio::fs::UnixFileSystem;
using $UnixMountEntry = ::sun::nio::fs::UnixMountEntry;
using $UnixNativeDispatcher = ::sun::nio::fs::UnixNativeDispatcher;
using $UnixPath = ::sun::nio::fs::UnixPath;
using $Util = ::sun::nio::fs::Util;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _UnixFileStore_FieldInfo_[] = {
	{"file", "Lsun/nio/fs/UnixPath;", nullptr, $PRIVATE | $FINAL, $field(UnixFileStore, file$)},
	{"dev", "J", nullptr, $PRIVATE | $FINAL, $field(UnixFileStore, dev$)},
	{"entry", "Lsun/nio/fs/UnixMountEntry;", nullptr, $PRIVATE | $FINAL, $field(UnixFileStore, entry$$)},
	{"loadLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UnixFileStore, loadLock)},
	{"props", "Ljava/util/Properties;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(UnixFileStore, props)},
	{}
};

$MethodInfo _UnixFileStore_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/UnixPath;)V", nullptr, 0, $method(static_cast<void(UnixFileStore::*)($UnixPath*)>(&UnixFileStore::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/nio/fs/UnixFileSystem;Lsun/nio/fs/UnixMountEntry;)V", nullptr, 0, $method(static_cast<void(UnixFileStore::*)($UnixFileSystem*,$UnixMountEntry*)>(&UnixFileStore::init$)), "java.io.IOException"},
	{"checkIfFeaturePresent", "(Ljava/lang/String;)Lsun/nio/fs/UnixFileStore$FeatureStatus;", nullptr, 0},
	{"dev", "()J", nullptr, 0},
	{"devFor", "(Lsun/nio/fs/UnixPath;)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)($UnixPath*)>(&UnixFileStore::devFor)), "java.io.IOException"},
	{"entry", "()Lsun/nio/fs/UnixMountEntry;", nullptr, 0},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"file", "()Lsun/nio/fs/UnixPath;", nullptr, 0},
	{"findMountEntry", "()Lsun/nio/fs/UnixMountEntry;", nullptr, $ABSTRACT, nullptr, "java.io.IOException"},
	{"getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getBlockSize", "()J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getFileStoreAttributeView", "(Ljava/lang/Class;)Ljava/nio/file/attribute/FileStoreAttributeView;", "<V::Ljava/nio/file/attribute/FileStoreAttributeView;>(Ljava/lang/Class<TV;>;)TV;", $PUBLIC},
	{"getTotalSpace", "()J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getUnallocatedSpace", "()J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getUsableSpace", "()J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isExtendedAttributesEnabled", "(Lsun/nio/fs/UnixPath;)Z", nullptr, $PROTECTED},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"loadProperties", "()Ljava/util/Properties;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Properties*(*)()>(&UnixFileStore::loadProperties))},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"readAttributes", "()Lsun/nio/fs/UnixFileStoreAttributes;", nullptr, $PRIVATE, $method(static_cast<$UnixFileStoreAttributes*(UnixFileStore::*)()>(&UnixFileStore::readAttributes)), "java.io.IOException"},
	{"supportsFileAttributeView", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<+Ljava/nio/file/attribute/FileAttributeView;>;)Z", $PUBLIC},
	{"supportsFileAttributeView", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"type", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _UnixFileStore_InnerClassesInfo_[] = {
	{"sun.nio.fs.UnixFileStore$FeatureStatus", "sun.nio.fs.UnixFileStore", "FeatureStatus", $STATIC | $FINAL | $ENUM},
	{"sun.nio.fs.UnixFileStore$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _UnixFileStore_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.nio.fs.UnixFileStore",
	"java.nio.file.FileStore",
	nullptr,
	_UnixFileStore_FieldInfo_,
	_UnixFileStore_MethodInfo_,
	nullptr,
	nullptr,
	_UnixFileStore_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.fs.UnixFileStore$FeatureStatus,sun.nio.fs.UnixFileStore$1"
};

$Object* allocate$UnixFileStore($Class* clazz) {
	return $of($alloc(UnixFileStore));
}

$Object* UnixFileStore::loadLock = nullptr;
$volatile($Properties*) UnixFileStore::props = nullptr;

int64_t UnixFileStore::devFor($UnixPath* file) {
	$init(UnixFileStore);
	try {
		return $nc($($UnixFileAttributes::get(file, true)))->dev();
	} catch ($UnixException&) {
		$var($UnixException, x, $catch());
		x->rethrowAsIOException(file);
		return 0;
	}
	$shouldNotReachHere();
}

void UnixFileStore::init$($UnixPath* file) {
	$FileStore::init$();
	$set(this, file$, file);
	this->dev$ = devFor(file);
	$set(this, entry$$, findMountEntry());
}

void UnixFileStore::init$($UnixFileSystem* fs, $UnixMountEntry* entry) {
	$FileStore::init$();
	$set(this, file$, $new($UnixPath, fs, $($nc(entry)->dir())));
	this->dev$ = ($nc(entry)->dev() == (int64_t)0) ? devFor(this->file$) : $nc(entry)->dev();
	$set(this, entry$$, entry);
}

$UnixPath* UnixFileStore::file() {
	return this->file$;
}

int64_t UnixFileStore::dev() {
	return this->dev$;
}

$UnixMountEntry* UnixFileStore::entry() {
	return this->entry$$;
}

$String* UnixFileStore::name() {
	return $nc(this->entry$$)->name();
}

$String* UnixFileStore::type() {
	return $nc(this->entry$$)->fstype();
}

bool UnixFileStore::isReadOnly() {
	return $nc(this->entry$$)->isReadOnly();
}

$UnixFileStoreAttributes* UnixFileStore::readAttributes() {
	try {
		return $UnixFileStoreAttributes::get(this->file$);
	} catch ($UnixException&) {
		$var($UnixException, x, $catch());
		x->rethrowAsIOException(this->file$);
		return nullptr;
	}
	$shouldNotReachHere();
}

int64_t UnixFileStore::getTotalSpace() {
	$var($UnixFileStoreAttributes, attrs, readAttributes());
	try {
		int64_t var$0 = $nc(attrs)->blockSize();
		return $Math::multiplyExact(var$0, attrs->totalBlocks());
	} catch ($ArithmeticException&) {
		$var($ArithmeticException, ignore, $catch());
		return $Long::MAX_VALUE;
	}
	$shouldNotReachHere();
}

int64_t UnixFileStore::getUsableSpace() {
	$var($UnixFileStoreAttributes, attrs, readAttributes());
	try {
		int64_t var$0 = $nc(attrs)->blockSize();
		return $Math::multiplyExact(var$0, attrs->availableBlocks());
	} catch ($ArithmeticException&) {
		$var($ArithmeticException, ignore, $catch());
		return $Long::MAX_VALUE;
	}
	$shouldNotReachHere();
}

int64_t UnixFileStore::getUnallocatedSpace() {
	$var($UnixFileStoreAttributes, attrs, readAttributes());
	try {
		int64_t var$0 = $nc(attrs)->blockSize();
		return $Math::multiplyExact(var$0, attrs->freeBlocks());
	} catch ($ArithmeticException&) {
		$var($ArithmeticException, ignore, $catch());
		return $Long::MAX_VALUE;
	}
	$shouldNotReachHere();
}

int64_t UnixFileStore::getBlockSize() {
	$var($UnixFileStoreAttributes, attrs, readAttributes());
	return $nc(attrs)->blockSize();
}

$FileStoreAttributeView* UnixFileStore::getFileStoreAttributeView($Class* view) {
	if (view == nullptr) {
		$throwNew($NullPointerException);
	}
	return ($FileStoreAttributeView*)nullptr;
}

$Object* UnixFileStore::getAttribute($String* attribute) {
	if ($nc(attribute)->equals("totalSpace"_s)) {
		return $of($Long::valueOf(getTotalSpace()));
	}
	if ($nc(attribute)->equals("usableSpace"_s)) {
		return $of($Long::valueOf(getUsableSpace()));
	}
	if ($nc(attribute)->equals("unallocatedSpace"_s)) {
		return $of($Long::valueOf(getUnallocatedSpace()));
	}
	$throwNew($UnsupportedOperationException, $$str({"\'"_s, attribute, "\' not recognized"_s}));
}

bool UnixFileStore::isExtendedAttributesEnabled($UnixPath* path) {
	if (!$UnixNativeDispatcher::xattrSupported()) {
		return false;
	}
	int32_t fd = -1;
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			try {
				fd = $nc(path)->openForAttributeAccess(false);
				$var($bytes, name, $Util::toBytes("user.java"_s));
				$UnixNativeDispatcher::fgetxattr(fd, name, 0, 0);
				var$2 = true;
				return$1 = true;
				goto $finally;
			} catch ($UnixException&) {
				$var($UnixException, e, $catch());
				$init($UnixConstants);
				if (e->errno$() == $UnixConstants::XATTR_NOT_FOUND) {
					var$2 = true;
					return$1 = true;
					goto $finally;
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$UnixNativeDispatcher::close(fd);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return false;
}

bool UnixFileStore::supportsFileAttributeView($Class* type) {
	if (type == nullptr) {
		$throwNew($NullPointerException);
	}
	$load($BasicFileAttributeView);
	if (type == $BasicFileAttributeView::class$) {
		return true;
	}
	$load($PosixFileAttributeView);
	$load($FileOwnerAttributeView);
	if (type == $PosixFileAttributeView::class$ || type == $FileOwnerAttributeView::class$) {
		$UnixFileStore$FeatureStatus* status = checkIfFeaturePresent("posix"_s);
		$init($UnixFileStore$FeatureStatus);
		return (status != $UnixFileStore$FeatureStatus::NOT_PRESENT);
	}
	return false;
}

bool UnixFileStore::supportsFileAttributeView($String* name) {
	bool var$0 = $nc(name)->equals("basic"_s);
	if (var$0 || $nc(name)->equals("unix"_s)) {
		return true;
	}
	if ($nc(name)->equals("posix"_s)) {
		$load($PosixFileAttributeView);
		return supportsFileAttributeView($PosixFileAttributeView::class$);
	}
	if ($nc(name)->equals("owner"_s)) {
		$load($FileOwnerAttributeView);
		return supportsFileAttributeView($FileOwnerAttributeView::class$);
	}
	return false;
}

bool UnixFileStore::equals(Object$* ob) {
	if ($equals(ob, this)) {
		return true;
	}
	if (!($instanceOf(UnixFileStore, ob))) {
		return false;
	}
	$var(UnixFileStore, other, $cast(UnixFileStore, ob));
	bool var$1 = (this->dev$ == $nc(other)->dev$);
	if (var$1) {
		$var($bytes, var$2, $nc(this->entry$$)->dir());
		var$1 = $Arrays::equals(var$2, $($nc(other->entry$$)->dir()));
	}
	bool var$0 = var$1;
	return var$0 && $nc($($nc(this->entry$$)->name()))->equals($($nc(other->entry$$)->name()));
}

int32_t UnixFileStore::hashCode() {
	return (int32_t)(this->dev$ ^ ((int64_t)((uint64_t)this->dev$ >> 32))) ^ $Arrays::hashCode($($nc(this->entry$$)->dir()));
}

$String* UnixFileStore::toString() {
	$var($StringBuilder, sb, $new($StringBuilder, $($Util::toString($($nc(this->entry$$)->dir())))));
	sb->append(" ("_s);
	sb->append($($nc(this->entry$$)->name()));
	sb->append(")"_s);
	return sb->toString();
}

$UnixFileStore$FeatureStatus* UnixFileStore::checkIfFeaturePresent($String* feature) {
	$beforeCallerSensitive();
	if (UnixFileStore::props == nullptr) {
		$synchronized(UnixFileStore::loadLock) {
			if (UnixFileStore::props == nullptr) {
				$assignStatic(UnixFileStore::props, $cast($Properties, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($UnixFileStore$1, this)))));
			}
		}
	}
	$var($String, value, $nc(UnixFileStore::props)->getProperty($(type())));
	if (value != nullptr) {
		$var($StringArray, values, value->split("\\s"_s));
		{
			$var($StringArray, arr$, values);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, s, arr$->get(i$));
				{
					$assign(s, $($nc(s)->trim())->toLowerCase());
					if (s->equals(feature)) {
						$init($UnixFileStore$FeatureStatus);
						return $UnixFileStore$FeatureStatus::PRESENT;
					}
					if (s->startsWith("no"_s)) {
						$assign(s, s->substring(2));
						if (s->equals(feature)) {
							$init($UnixFileStore$FeatureStatus);
							return $UnixFileStore$FeatureStatus::NOT_PRESENT;
						}
					}
				}
			}
		}
	}
	$init($UnixFileStore$FeatureStatus);
	return $UnixFileStore$FeatureStatus::UNKNOWN;
}

$Properties* UnixFileStore::loadProperties() {
	$init(UnixFileStore);
	$var($Properties, result, $new($Properties));
	$var($String, fstypes, $str({$($StaticProperty::javaHome()), "/lib/fstypes.properties"_s}));
	$var($Path, file, $Path::of(fstypes, $$new($StringArray, 0)));
	try {
		{
			$var($ReadableByteChannel, rbc, $Files::newByteChannel(file, $$new($OpenOptionArray, 0)));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$init($UTF_8);
						result->load($($Channels::newReader(rbc, static_cast<$Charset*>($UTF_8::INSTANCE))));
					} catch ($Throwable&) {
						$var($Throwable, t$, $catch());
						if (rbc != nullptr) {
							try {
								rbc->close();
							} catch ($Throwable&) {
								$var($Throwable, x2, $catch());
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} /*finally*/ {
					if (rbc != nullptr) {
						rbc->close();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	} catch ($IOException&) {
		$catch();
	}
	return result;
}

void clinit$UnixFileStore($Class* class$) {
	$assignStatic(UnixFileStore::loadLock, $new($Object));
}

UnixFileStore::UnixFileStore() {
}

$Class* UnixFileStore::load$($String* name, bool initialize) {
	$loadClass(UnixFileStore, name, initialize, &_UnixFileStore_ClassInfo_, clinit$UnixFileStore, allocate$UnixFileStore);
	return class$;
}

$Class* UnixFileStore::class$ = nullptr;

		} // fs
	} // nio
} // sun