#include <sun/nio/fs/WindowsFileAttributes.h>

#include <java/lang/ArithmeticException.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/attribute/FileTime.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/nio/fs/NativeBuffer.h>
#include <sun/nio/fs/NativeBuffers.h>
#include <sun/nio/fs/WindowsException.h>
#include <sun/nio/fs/WindowsNativeDispatcher.h>
#include <sun/nio/fs/WindowsPath.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef SIZEOF_FILE_INFORMATION
#undef OFFSETOF_FILE_INFORMATION_SIZELOW
#undef OFFSETOF_FILE_INFORMATION_INDEXHIGH
#undef OFFSETOF_FILE_ATTRIBUTE_DATA_SIZEHIGH
#undef OFFSETOF_FILE_ATTRIBUTE_DATA_SIZELOW
#undef WINDOWS_EPOCH_IN_100NS
#undef OFFSETOF_FILE_INFORMATION_ATTRIBUTES
#undef MICROSECONDS
#undef NANOSECONDS
#undef SIZEOF_FILE_ATTRIBUTE_DATA
#undef OFFSETOF_FIND_DATA_RESERVED0
#undef OFFSETOF_FILE_ATTRIBUTE_DATA_LASTACCESSTIME
#undef OFFSETOF_FILE_INFORMATION_SIZEHIGH
#undef OFFSETOF_FILE_INFORMATION_CREATETIME
#undef OFFSETOF_FILE_INFORMATION_LASTWRITETIME
#undef OFFSETOF_FILE_INFORMATION_VOLSERIALNUM
#undef OFFSETOF_FILE_INFORMATION_LASTACCESSTIME
#undef OFFSETOF_FILE_INFORMATION_INDEXLOW
#undef OFFSETOF_FIND_DATA_SIZEHIGH
#undef OFFSETOF_FIND_DATA_SIZELOW
#undef OFFSETOF_FIND_DATA_LASTWRITETIME
#undef OFFSETOF_FIND_DATA_LASTACCESSTIME
#undef OFFSETOF_FIND_DATA_CREATETIME
#undef OFFSETOF_FILE_ATTRIBUTE_DATA_CREATETIME
#undef WINDOWS_EPOCH_IN_MICROS
#undef OFFSETOF_FIND_DATA_ATTRIBUTES
#undef SIZEOF_FIND_DATA
#undef OFFSETOF_FILE_ATTRIBUTE_DATA_ATTRIBUTES
#undef OFFSETOF_FILE_ATTRIBUTE_DATA_LASTWRITETIME

using $ArithmeticException = ::java::lang::ArithmeticException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $DosFileAttributes = ::java::nio::file::attribute::DosFileAttributes;
using $FileTime = ::java::nio::file::attribute::FileTime;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $NativeBuffer = ::sun::nio::fs::NativeBuffer;
using $NativeBuffers = ::sun::nio::fs::NativeBuffers;
using $WindowsException = ::sun::nio::fs::WindowsException;
using $WindowsNativeDispatcher = ::sun::nio::fs::WindowsNativeDispatcher;
using $WindowsPath = ::sun::nio::fs::WindowsPath;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _WindowsFileAttributes_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsFileAttributes, unsafe)},
	{"SIZEOF_FILE_INFORMATION", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsFileAttributes, SIZEOF_FILE_INFORMATION)},
	{"OFFSETOF_FILE_INFORMATION_ATTRIBUTES", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsFileAttributes, OFFSETOF_FILE_INFORMATION_ATTRIBUTES)},
	{"OFFSETOF_FILE_INFORMATION_CREATETIME", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsFileAttributes, OFFSETOF_FILE_INFORMATION_CREATETIME)},
	{"OFFSETOF_FILE_INFORMATION_LASTACCESSTIME", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsFileAttributes, OFFSETOF_FILE_INFORMATION_LASTACCESSTIME)},
	{"OFFSETOF_FILE_INFORMATION_LASTWRITETIME", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsFileAttributes, OFFSETOF_FILE_INFORMATION_LASTWRITETIME)},
	{"OFFSETOF_FILE_INFORMATION_VOLSERIALNUM", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsFileAttributes, OFFSETOF_FILE_INFORMATION_VOLSERIALNUM)},
	{"OFFSETOF_FILE_INFORMATION_SIZEHIGH", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsFileAttributes, OFFSETOF_FILE_INFORMATION_SIZEHIGH)},
	{"OFFSETOF_FILE_INFORMATION_SIZELOW", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsFileAttributes, OFFSETOF_FILE_INFORMATION_SIZELOW)},
	{"OFFSETOF_FILE_INFORMATION_INDEXHIGH", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsFileAttributes, OFFSETOF_FILE_INFORMATION_INDEXHIGH)},
	{"OFFSETOF_FILE_INFORMATION_INDEXLOW", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsFileAttributes, OFFSETOF_FILE_INFORMATION_INDEXLOW)},
	{"SIZEOF_FILE_ATTRIBUTE_DATA", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsFileAttributes, SIZEOF_FILE_ATTRIBUTE_DATA)},
	{"OFFSETOF_FILE_ATTRIBUTE_DATA_ATTRIBUTES", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsFileAttributes, OFFSETOF_FILE_ATTRIBUTE_DATA_ATTRIBUTES)},
	{"OFFSETOF_FILE_ATTRIBUTE_DATA_CREATETIME", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsFileAttributes, OFFSETOF_FILE_ATTRIBUTE_DATA_CREATETIME)},
	{"OFFSETOF_FILE_ATTRIBUTE_DATA_LASTACCESSTIME", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsFileAttributes, OFFSETOF_FILE_ATTRIBUTE_DATA_LASTACCESSTIME)},
	{"OFFSETOF_FILE_ATTRIBUTE_DATA_LASTWRITETIME", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsFileAttributes, OFFSETOF_FILE_ATTRIBUTE_DATA_LASTWRITETIME)},
	{"OFFSETOF_FILE_ATTRIBUTE_DATA_SIZEHIGH", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsFileAttributes, OFFSETOF_FILE_ATTRIBUTE_DATA_SIZEHIGH)},
	{"OFFSETOF_FILE_ATTRIBUTE_DATA_SIZELOW", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsFileAttributes, OFFSETOF_FILE_ATTRIBUTE_DATA_SIZELOW)},
	{"SIZEOF_FIND_DATA", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsFileAttributes, SIZEOF_FIND_DATA)},
	{"OFFSETOF_FIND_DATA_ATTRIBUTES", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsFileAttributes, OFFSETOF_FIND_DATA_ATTRIBUTES)},
	{"OFFSETOF_FIND_DATA_CREATETIME", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsFileAttributes, OFFSETOF_FIND_DATA_CREATETIME)},
	{"OFFSETOF_FIND_DATA_LASTACCESSTIME", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsFileAttributes, OFFSETOF_FIND_DATA_LASTACCESSTIME)},
	{"OFFSETOF_FIND_DATA_LASTWRITETIME", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsFileAttributes, OFFSETOF_FIND_DATA_LASTWRITETIME)},
	{"OFFSETOF_FIND_DATA_SIZEHIGH", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsFileAttributes, OFFSETOF_FIND_DATA_SIZEHIGH)},
	{"OFFSETOF_FIND_DATA_SIZELOW", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsFileAttributes, OFFSETOF_FIND_DATA_SIZELOW)},
	{"OFFSETOF_FIND_DATA_RESERVED0", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsFileAttributes, OFFSETOF_FIND_DATA_RESERVED0)},
	{"WINDOWS_EPOCH_IN_MICROS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsFileAttributes, WINDOWS_EPOCH_IN_MICROS)},
	{"WINDOWS_EPOCH_IN_100NS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsFileAttributes, WINDOWS_EPOCH_IN_100NS)},
	{"ensureAccurateMetadata", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsFileAttributes, ensureAccurateMetadata)},
	{"fileAttrs", "I", nullptr, $PRIVATE | $FINAL, $field(WindowsFileAttributes, fileAttrs)},
	{"creationTime", "J", nullptr, $PRIVATE | $FINAL, $field(WindowsFileAttributes, creationTime$)},
	{"lastAccessTime", "J", nullptr, $PRIVATE | $FINAL, $field(WindowsFileAttributes, lastAccessTime$)},
	{"lastWriteTime", "J", nullptr, $PRIVATE | $FINAL, $field(WindowsFileAttributes, lastWriteTime)},
	{"size", "J", nullptr, $PRIVATE | $FINAL, $field(WindowsFileAttributes, size$)},
	{"reparseTag", "I", nullptr, $PRIVATE | $FINAL, $field(WindowsFileAttributes, reparseTag)},
	{"volSerialNumber", "I", nullptr, $PRIVATE | $FINAL, $field(WindowsFileAttributes, volSerialNumber$)},
	{"fileIndexHigh", "I", nullptr, $PRIVATE | $FINAL, $field(WindowsFileAttributes, fileIndexHigh$)},
	{"fileIndexLow", "I", nullptr, $PRIVATE | $FINAL, $field(WindowsFileAttributes, fileIndexLow$)},
	{}
};

$MethodInfo _WindowsFileAttributes_MethodInfo_[] = {
	{"<init>", "(IJJJJIIII)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsFileAttributes::*)(int32_t,int64_t,int64_t,int64_t,int64_t,int32_t,int32_t,int32_t,int32_t)>(&WindowsFileAttributes::init$))},
	{"attributes", "()I", nullptr, 0},
	{"creationTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC},
	{"fileIndexHigh", "()I", nullptr, 0},
	{"fileIndexLow", "()I", nullptr, 0},
	{"fileKey", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"fromFileAttributeData", "(JI)Lsun/nio/fs/WindowsFileAttributes;", nullptr, $PRIVATE | $STATIC, $method(static_cast<WindowsFileAttributes*(*)(int64_t,int32_t)>(&WindowsFileAttributes::fromFileAttributeData))},
	{"fromFileInformation", "(JI)Lsun/nio/fs/WindowsFileAttributes;", nullptr, $PRIVATE | $STATIC, $method(static_cast<WindowsFileAttributes*(*)(int64_t,int32_t)>(&WindowsFileAttributes::fromFileInformation))},
	{"fromFindData", "(J)Lsun/nio/fs/WindowsFileAttributes;", nullptr, $STATIC, $method(static_cast<WindowsFileAttributes*(*)(int64_t)>(&WindowsFileAttributes::fromFindData))},
	{"get", "(Lsun/nio/fs/WindowsPath;Z)Lsun/nio/fs/WindowsFileAttributes;", nullptr, $STATIC, $method(static_cast<WindowsFileAttributes*(*)($WindowsPath*,bool)>(&WindowsFileAttributes::get)), "sun.nio.fs.WindowsException"},
	{"getBufferForFindData", "()Lsun/nio/fs/NativeBuffer;", nullptr, $STATIC, $method(static_cast<$NativeBuffer*(*)()>(&WindowsFileAttributes::getBufferForFindData))},
	{"isArchive", "()Z", nullptr, $PUBLIC},
	{"isDirectory", "()Z", nullptr, $PUBLIC},
	{"isDirectoryLink", "()Z", nullptr, 0},
	{"isHidden", "()Z", nullptr, $PUBLIC},
	{"isOther", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"isRegularFile", "()Z", nullptr, $PUBLIC},
	{"isReparsePoint", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&WindowsFileAttributes::isReparsePoint))},
	{"isReparsePoint", "()Z", nullptr, 0},
	{"isSameFile", "(Lsun/nio/fs/WindowsFileAttributes;Lsun/nio/fs/WindowsFileAttributes;)Z", nullptr, $STATIC, $method(static_cast<bool(*)(WindowsFileAttributes*,WindowsFileAttributes*)>(&WindowsFileAttributes::isSameFile))},
	{"isSymbolicLink", "()Z", nullptr, $PUBLIC},
	{"isSystem", "()Z", nullptr, $PUBLIC},
	{"isUnixDomainSocket", "()Z", nullptr, 0},
	{"lastAccessTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC},
	{"lastModifiedTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC},
	{"readAttributes", "(J)Lsun/nio/fs/WindowsFileAttributes;", nullptr, $STATIC, $method(static_cast<WindowsFileAttributes*(*)(int64_t)>(&WindowsFileAttributes::readAttributes)), "sun.nio.fs.WindowsException"},
	{"size", "()J", nullptr, $PUBLIC},
	{"toFileTime", "(J)Ljava/nio/file/attribute/FileTime;", nullptr, $STATIC, $method(static_cast<$FileTime*(*)(int64_t)>(&WindowsFileAttributes::toFileTime))},
	{"toWindowsTime", "(Ljava/nio/file/attribute/FileTime;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($FileTime*)>(&WindowsFileAttributes::toWindowsTime))},
	{"volSerialNumber", "()I", nullptr, 0},
	{}
};

$ClassInfo _WindowsFileAttributes_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsFileAttributes",
	"java.lang.Object",
	"java.nio.file.attribute.DosFileAttributes",
	_WindowsFileAttributes_FieldInfo_,
	_WindowsFileAttributes_MethodInfo_
};

$Object* allocate$WindowsFileAttributes($Class* clazz) {
	return $of($alloc(WindowsFileAttributes));
}

$Unsafe* WindowsFileAttributes::unsafe = nullptr;
bool WindowsFileAttributes::ensureAccurateMetadata = false;

$FileTime* WindowsFileAttributes::toFileTime(int64_t time) {
	$init(WindowsFileAttributes);
	try {
		int64_t adjusted = $Math::addExact(time, WindowsFileAttributes::WINDOWS_EPOCH_IN_100NS);
		int64_t nanos = $Math::multiplyExact(adjusted, (int64_t)100);
		$init($TimeUnit);
		return $FileTime::from(nanos, $TimeUnit::NANOSECONDS);
	} catch ($ArithmeticException&) {
		$var($ArithmeticException, e, $catch());
		int64_t micros = $Math::addExact($div(time, (int64_t)10), WindowsFileAttributes::WINDOWS_EPOCH_IN_MICROS);
		$init($TimeUnit);
		return $FileTime::from(micros, $TimeUnit::MICROSECONDS);
	}
	$shouldNotReachHere();
}

int64_t WindowsFileAttributes::toWindowsTime($FileTime* time) {
	$init(WindowsFileAttributes);
	$init($TimeUnit);
	int64_t adjusted = $div($nc(time)->to($TimeUnit::NANOSECONDS), (int64_t)100);
	return adjusted - WindowsFileAttributes::WINDOWS_EPOCH_IN_100NS;
}

void WindowsFileAttributes::init$(int32_t fileAttrs, int64_t creationTime, int64_t lastAccessTime, int64_t lastWriteTime, int64_t size, int32_t reparseTag, int32_t volSerialNumber, int32_t fileIndexHigh, int32_t fileIndexLow) {
	this->fileAttrs = fileAttrs;
	this->creationTime$ = creationTime;
	this->lastAccessTime$ = lastAccessTime;
	this->lastWriteTime = lastWriteTime;
	this->size$ = size;
	this->reparseTag = reparseTag;
	this->volSerialNumber$ = volSerialNumber;
	this->fileIndexHigh$ = fileIndexHigh;
	this->fileIndexLow$ = fileIndexLow;
}

WindowsFileAttributes* WindowsFileAttributes::fromFileInformation(int64_t address, int32_t reparseTag) {
	$init(WindowsFileAttributes);
	int32_t fileAttrs = $nc(WindowsFileAttributes::unsafe)->getInt(address + WindowsFileAttributes::OFFSETOF_FILE_INFORMATION_ATTRIBUTES);
	int64_t creationTime = $nc(WindowsFileAttributes::unsafe)->getLong(address + WindowsFileAttributes::OFFSETOF_FILE_INFORMATION_CREATETIME);
	int64_t lastAccessTime = $nc(WindowsFileAttributes::unsafe)->getLong(address + WindowsFileAttributes::OFFSETOF_FILE_INFORMATION_LASTACCESSTIME);
	int64_t lastWriteTime = $nc(WindowsFileAttributes::unsafe)->getLong(address + WindowsFileAttributes::OFFSETOF_FILE_INFORMATION_LASTWRITETIME);
	int64_t var$0 = ((int64_t)($nc(WindowsFileAttributes::unsafe)->getInt(address + WindowsFileAttributes::OFFSETOF_FILE_INFORMATION_SIZEHIGH)) << 32);
	int64_t size = var$0 + ((int64_t)($nc(WindowsFileAttributes::unsafe)->getInt(address + WindowsFileAttributes::OFFSETOF_FILE_INFORMATION_SIZELOW) & (uint64_t)(int64_t)0x00000000FFFFFFFF));
	int32_t volSerialNumber = $nc(WindowsFileAttributes::unsafe)->getInt(address + WindowsFileAttributes::OFFSETOF_FILE_INFORMATION_VOLSERIALNUM);
	int32_t fileIndexHigh = $nc(WindowsFileAttributes::unsafe)->getInt(address + WindowsFileAttributes::OFFSETOF_FILE_INFORMATION_INDEXHIGH);
	int32_t fileIndexLow = $nc(WindowsFileAttributes::unsafe)->getInt(address + WindowsFileAttributes::OFFSETOF_FILE_INFORMATION_INDEXLOW);
	return $new(WindowsFileAttributes, fileAttrs, creationTime, lastAccessTime, lastWriteTime, size, reparseTag, volSerialNumber, fileIndexHigh, fileIndexLow);
}

WindowsFileAttributes* WindowsFileAttributes::fromFileAttributeData(int64_t address, int32_t reparseTag) {
	$init(WindowsFileAttributes);
	int32_t fileAttrs = $nc(WindowsFileAttributes::unsafe)->getInt(address + WindowsFileAttributes::OFFSETOF_FILE_ATTRIBUTE_DATA_ATTRIBUTES);
	int64_t creationTime = $nc(WindowsFileAttributes::unsafe)->getLong(address + WindowsFileAttributes::OFFSETOF_FILE_ATTRIBUTE_DATA_CREATETIME);
	int64_t lastAccessTime = $nc(WindowsFileAttributes::unsafe)->getLong(address + WindowsFileAttributes::OFFSETOF_FILE_ATTRIBUTE_DATA_LASTACCESSTIME);
	int64_t lastWriteTime = $nc(WindowsFileAttributes::unsafe)->getLong(address + WindowsFileAttributes::OFFSETOF_FILE_ATTRIBUTE_DATA_LASTWRITETIME);
	int64_t var$0 = ((int64_t)($nc(WindowsFileAttributes::unsafe)->getInt(address + WindowsFileAttributes::OFFSETOF_FILE_ATTRIBUTE_DATA_SIZEHIGH)) << 32);
	int64_t size = var$0 + ((int64_t)($nc(WindowsFileAttributes::unsafe)->getInt(address + WindowsFileAttributes::OFFSETOF_FILE_ATTRIBUTE_DATA_SIZELOW) & (uint64_t)(int64_t)0x00000000FFFFFFFF));
	return $new(WindowsFileAttributes, fileAttrs, creationTime, lastAccessTime, lastWriteTime, size, reparseTag, 0, 0, 0);
}

$NativeBuffer* WindowsFileAttributes::getBufferForFindData() {
	$init(WindowsFileAttributes);
	return $NativeBuffers::getNativeBuffer(WindowsFileAttributes::SIZEOF_FIND_DATA);
}

WindowsFileAttributes* WindowsFileAttributes::fromFindData(int64_t address) {
	$init(WindowsFileAttributes);
	int32_t fileAttrs = $nc(WindowsFileAttributes::unsafe)->getInt(address + WindowsFileAttributes::OFFSETOF_FIND_DATA_ATTRIBUTES);
	int64_t creationTime = $nc(WindowsFileAttributes::unsafe)->getLong(address + WindowsFileAttributes::OFFSETOF_FIND_DATA_CREATETIME);
	int64_t lastAccessTime = $nc(WindowsFileAttributes::unsafe)->getLong(address + WindowsFileAttributes::OFFSETOF_FIND_DATA_LASTACCESSTIME);
	int64_t lastWriteTime = $nc(WindowsFileAttributes::unsafe)->getLong(address + WindowsFileAttributes::OFFSETOF_FIND_DATA_LASTWRITETIME);
	int64_t var$0 = ((int64_t)($nc(WindowsFileAttributes::unsafe)->getInt(address + WindowsFileAttributes::OFFSETOF_FIND_DATA_SIZEHIGH)) << 32);
	int64_t size = var$0 + ((int64_t)($nc(WindowsFileAttributes::unsafe)->getInt(address + WindowsFileAttributes::OFFSETOF_FIND_DATA_SIZELOW) & (uint64_t)(int64_t)0x00000000FFFFFFFF));
	int32_t reparseTag = isReparsePoint(fileAttrs) ? $nc(WindowsFileAttributes::unsafe)->getInt(address + WindowsFileAttributes::OFFSETOF_FIND_DATA_RESERVED0) : 0;
	return $new(WindowsFileAttributes, fileAttrs, creationTime, lastAccessTime, lastWriteTime, size, reparseTag, 0, 0, 0);
}

WindowsFileAttributes* WindowsFileAttributes::readAttributes(int64_t handle) {
	$init(WindowsFileAttributes);
	$var($NativeBuffer, buffer, $NativeBuffers::getNativeBuffer(WindowsFileAttributes::SIZEOF_FILE_INFORMATION));
	{
		$var($Throwable, var$0, nullptr);
		$var(WindowsFileAttributes, var$2, nullptr);
		bool return$1 = false;
		try {
			int64_t address = $nc(buffer)->address();
			$WindowsNativeDispatcher::GetFileInformationByHandle(handle, address);
			int32_t reparseTag = 0;
			int32_t fileAttrs = $nc(WindowsFileAttributes::unsafe)->getInt(address + WindowsFileAttributes::OFFSETOF_FILE_INFORMATION_ATTRIBUTES);
			if (isReparsePoint(fileAttrs)) {
				int32_t size = 16384;
				$var($NativeBuffer, reparseBuffer, $NativeBuffers::getNativeBuffer(size));
				{
					$var($Throwable, var$3, nullptr);
					try {
						$WindowsNativeDispatcher::DeviceIoControlGetReparsePoint(handle, $nc(reparseBuffer)->address(), size);
						reparseTag = (int32_t)$nc(WindowsFileAttributes::unsafe)->getLong($nc(reparseBuffer)->address());
					} catch ($Throwable&) {
						$assign(var$3, $catch());
					} /*finally*/ {
						$nc(reparseBuffer)->release();
					}
					if (var$3 != nullptr) {
						$throw(var$3);
					}
				}
			}
			$assign(var$2, fromFileInformation(address, reparseTag));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

WindowsFileAttributes* WindowsFileAttributes::get($WindowsPath* path, bool followLinks) {
	$init(WindowsFileAttributes);
	if (!WindowsFileAttributes::ensureAccurateMetadata) {
		$var($WindowsException, firstException, nullptr);
		$var($NativeBuffer, buffer, $NativeBuffers::getNativeBuffer(WindowsFileAttributes::SIZEOF_FILE_ATTRIBUTE_DATA));
		{
			$var($Throwable, var$0, nullptr);
			$var(WindowsFileAttributes, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					int64_t address = $nc(buffer)->address();
					$WindowsNativeDispatcher::GetFileAttributesEx($($nc(path)->getPathForWin32Calls()), address);
					int32_t fileAttrs = $nc(WindowsFileAttributes::unsafe)->getInt(address + WindowsFileAttributes::OFFSETOF_FILE_ATTRIBUTE_DATA_ATTRIBUTES);
					if (!isReparsePoint(fileAttrs)) {
						$assign(var$2, fromFileAttributeData(address, 0));
						return$1 = true;
						goto $finally;
					}
				} catch ($WindowsException&) {
					$var($WindowsException, x, $catch());
					if (x->lastError() != 32) {
						$throw(x);
					}
					$assign(firstException, x);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				$nc(buffer)->release();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
		if (firstException != nullptr) {
			$var($String, search, $nc(path)->getPathForWin32Calls());
			char16_t last = $nc(search)->charAt(search->length() - 1);
			if (last == u':' || last == u'\\') {
				$throw(firstException);
			}
			$assign(buffer, getBufferForFindData());
			{
				$var($Throwable, var$3, nullptr);
				$var(WindowsFileAttributes, var$5, nullptr);
				bool return$4 = false;
				try {
					try {
						int64_t handle = $WindowsNativeDispatcher::FindFirstFile(search, $nc(buffer)->address());
						$WindowsNativeDispatcher::FindClose(handle);
						$var(WindowsFileAttributes, attrs, fromFindData($nc(buffer)->address()));
						if ($nc(attrs)->isReparsePoint()) {
							$throw(firstException);
						}
						$assign(var$5, attrs);
						return$4 = true;
						goto $finally1;
					} catch ($WindowsException&) {
						$var($WindowsException, ignore, $catch());
						$throw(firstException);
					}
				} catch ($Throwable&) {
					$assign(var$3, $catch());
				} $finally1: {
					$nc(buffer)->release();
				}
				if (var$3 != nullptr) {
					$throw(var$3);
				}
				if (return$4) {
					return var$5;
				}
			}
		}
	}
	int64_t handle = $nc(path)->openForReadAttributeAccess(followLinks);
	{
		$var($Throwable, var$6, nullptr);
		$var(WindowsFileAttributes, var$8, nullptr);
		bool return$7 = false;
		try {
			$assign(var$8, readAttributes(handle));
			return$7 = true;
			goto $finally2;
		} catch ($Throwable&) {
			$assign(var$6, $catch());
		} $finally2: {
			$WindowsNativeDispatcher::CloseHandle(handle);
		}
		if (var$6 != nullptr) {
			$throw(var$6);
		}
		if (return$7) {
			return var$8;
		}
	}
	$shouldNotReachHere();
}

bool WindowsFileAttributes::isSameFile(WindowsFileAttributes* attrs1, WindowsFileAttributes* attrs2) {
	$init(WindowsFileAttributes);
	return ($nc(attrs1)->volSerialNumber$ == $nc(attrs2)->volSerialNumber$) && (attrs1->fileIndexHigh$ == attrs2->fileIndexHigh$) && (attrs1->fileIndexLow$ == attrs2->fileIndexLow$);
}

bool WindowsFileAttributes::isReparsePoint(int32_t attributes) {
	$init(WindowsFileAttributes);
	return ((int32_t)(attributes & (uint32_t)1024)) != 0;
}

int32_t WindowsFileAttributes::attributes() {
	return this->fileAttrs;
}

int32_t WindowsFileAttributes::volSerialNumber() {
	return this->volSerialNumber$;
}

int32_t WindowsFileAttributes::fileIndexHigh() {
	return this->fileIndexHigh$;
}

int32_t WindowsFileAttributes::fileIndexLow() {
	return this->fileIndexLow$;
}

int64_t WindowsFileAttributes::size() {
	return this->size$;
}

$FileTime* WindowsFileAttributes::lastModifiedTime() {
	return toFileTime(this->lastWriteTime);
}

$FileTime* WindowsFileAttributes::lastAccessTime() {
	return toFileTime(this->lastAccessTime$);
}

$FileTime* WindowsFileAttributes::creationTime() {
	return toFileTime(this->creationTime$);
}

$Object* WindowsFileAttributes::fileKey() {
	return $of(nullptr);
}

bool WindowsFileAttributes::isReparsePoint() {
	return isReparsePoint(this->fileAttrs);
}

bool WindowsFileAttributes::isDirectoryLink() {
	return isSymbolicLink() && (((int32_t)(this->fileAttrs & (uint32_t)16)) != 0);
}

bool WindowsFileAttributes::isSymbolicLink() {
	return this->reparseTag == (int32_t)0xA000000C;
}

bool WindowsFileAttributes::isUnixDomainSocket() {
	return this->reparseTag == (int32_t)0x80000023;
}

bool WindowsFileAttributes::isDirectory() {
	if (isSymbolicLink()) {
		return false;
	}
	return (((int32_t)(this->fileAttrs & (uint32_t)16)) != 0);
}

bool WindowsFileAttributes::isOther() {
	if (isSymbolicLink()) {
		return false;
	}
	return (((int32_t)(this->fileAttrs & (uint32_t)(64 | 1024))) != 0);
}

bool WindowsFileAttributes::isRegularFile() {
	bool var$1 = !isSymbolicLink();
	bool var$0 = var$1 && !isDirectory();
	return var$0 && !isOther();
}

bool WindowsFileAttributes::isReadOnly() {
	return ((int32_t)(this->fileAttrs & (uint32_t)1)) != 0;
}

bool WindowsFileAttributes::isHidden() {
	return ((int32_t)(this->fileAttrs & (uint32_t)2)) != 0;
}

bool WindowsFileAttributes::isArchive() {
	return ((int32_t)(this->fileAttrs & (uint32_t)32)) != 0;
}

bool WindowsFileAttributes::isSystem() {
	return ((int32_t)(this->fileAttrs & (uint32_t)4)) != 0;
}

void clinit$WindowsFileAttributes($Class* class$) {
	$assignStatic(WindowsFileAttributes::unsafe, $Unsafe::getUnsafe());
	{
		$var($String, propValue, $GetPropertyAction::privilegedGetProperty("sun.nio.fs.ensureAccurateMetadata"_s, "false"_s));
		WindowsFileAttributes::ensureAccurateMetadata = $nc(propValue)->isEmpty() ? true : $Boolean::parseBoolean(propValue);
	}
}

WindowsFileAttributes::WindowsFileAttributes() {
}

$Class* WindowsFileAttributes::load$($String* name, bool initialize) {
	$loadClass(WindowsFileAttributes, name, initialize, &_WindowsFileAttributes_ClassInfo_, clinit$WindowsFileAttributes, allocate$WindowsFileAttributes);
	return class$;
}

$Class* WindowsFileAttributes::class$ = nullptr;

		} // fs
	} // nio
} // sun