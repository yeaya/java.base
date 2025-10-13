#include <sun/nio/fs/LinuxDosFileAttributeView.h>

#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/nio/file/attribute/DosFileAttributes.h>
#include <java/nio/file/attribute/FileTime.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/nio/fs/AbstractBasicFileAttributeView$AttributesBuilder.h>
#include <sun/nio/fs/AbstractBasicFileAttributeView.h>
#include <sun/nio/fs/LinuxDosFileAttributeView$1.h>
#include <sun/nio/fs/LinuxNativeDispatcher.h>
#include <sun/nio/fs/NativeBuffer.h>
#include <sun/nio/fs/NativeBuffers.h>
#include <sun/nio/fs/UnixConstants.h>
#include <sun/nio/fs/UnixException.h>
#include <sun/nio/fs/UnixFileAttributeViews$Basic.h>
#include <sun/nio/fs/UnixFileAttributes.h>
#include <sun/nio/fs/UnixNativeDispatcher.h>
#include <sun/nio/fs/UnixPath.h>
#include <sun/nio/fs/Util.h>
#include <jcpp.h>

#undef ARCHIVE_NAME
#undef ARRAY_BYTE_BASE_OFFSET
#undef DOS_XATTR_ARCHIVE
#undef DOS_XATTR_HIDDEN
#undef DOS_XATTR_NAME
#undef DOS_XATTR_NAME_AS_BYTES
#undef DOS_XATTR_READONLY
#undef DOS_XATTR_SYSTEM
#undef ENODATA
#undef HIDDEN_NAME
#undef READONLY_NAME
#undef SYSTEM_NAME

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $DosFileAttributeView = ::java::nio::file::attribute::DosFileAttributeView;
using $DosFileAttributes = ::java::nio::file::attribute::DosFileAttributes;
using $FileTime = ::java::nio::file::attribute::FileTime;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $AbstractBasicFileAttributeView = ::sun::nio::fs::AbstractBasicFileAttributeView;
using $AbstractBasicFileAttributeView$AttributesBuilder = ::sun::nio::fs::AbstractBasicFileAttributeView$AttributesBuilder;
using $LinuxDosFileAttributeView$1 = ::sun::nio::fs::LinuxDosFileAttributeView$1;
using $LinuxNativeDispatcher = ::sun::nio::fs::LinuxNativeDispatcher;
using $NativeBuffer = ::sun::nio::fs::NativeBuffer;
using $NativeBuffers = ::sun::nio::fs::NativeBuffers;
using $UnixConstants = ::sun::nio::fs::UnixConstants;
using $UnixException = ::sun::nio::fs::UnixException;
using $UnixFileAttributeViews$Basic = ::sun::nio::fs::UnixFileAttributeViews$Basic;
using $UnixFileAttributes = ::sun::nio::fs::UnixFileAttributes;
using $UnixNativeDispatcher = ::sun::nio::fs::UnixNativeDispatcher;
using $UnixPath = ::sun::nio::fs::UnixPath;
using $Util = ::sun::nio::fs::Util;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _LinuxDosFileAttributeView_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LinuxDosFileAttributeView, unsafe)},
	{"READONLY_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LinuxDosFileAttributeView, READONLY_NAME)},
	{"ARCHIVE_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LinuxDosFileAttributeView, ARCHIVE_NAME)},
	{"SYSTEM_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LinuxDosFileAttributeView, SYSTEM_NAME)},
	{"HIDDEN_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LinuxDosFileAttributeView, HIDDEN_NAME)},
	{"DOS_XATTR_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LinuxDosFileAttributeView, DOS_XATTR_NAME)},
	{"DOS_XATTR_NAME_AS_BYTES", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LinuxDosFileAttributeView, DOS_XATTR_NAME_AS_BYTES)},
	{"DOS_XATTR_READONLY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LinuxDosFileAttributeView, DOS_XATTR_READONLY)},
	{"DOS_XATTR_HIDDEN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LinuxDosFileAttributeView, DOS_XATTR_HIDDEN)},
	{"DOS_XATTR_SYSTEM", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LinuxDosFileAttributeView, DOS_XATTR_SYSTEM)},
	{"DOS_XATTR_ARCHIVE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LinuxDosFileAttributeView, DOS_XATTR_ARCHIVE)},
	{"dosAttributeNames", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(LinuxDosFileAttributeView, dosAttributeNames)},
	{}
};

$MethodInfo _LinuxDosFileAttributeView_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/nio/fs/UnixPath;Z)V", nullptr, 0, $method(static_cast<void(LinuxDosFileAttributeView::*)($UnixPath*,bool)>(&LinuxDosFileAttributeView::init$))},
	{"getDosAttribute", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(LinuxDosFileAttributeView::*)(int32_t)>(&LinuxDosFileAttributeView::getDosAttribute)), "sun.nio.fs.UnixException"},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"readAttributes", "([Ljava/lang/String;)Ljava/util/Map;", "([Ljava/lang/String;)Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"readAttributes", "()Ljava/nio/file/attribute/DosFileAttributes;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setArchive", "(Z)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setAttribute", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setHidden", "(Z)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setReadOnly", "(Z)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setSystem", "(Z)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"*setTimes", "(Ljava/nio/file/attribute/FileTime;Ljava/nio/file/attribute/FileTime;Ljava/nio/file/attribute/FileTime;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateDosAttribute", "(IZ)V", nullptr, $PRIVATE, $method(static_cast<void(LinuxDosFileAttributeView::*)(int32_t,bool)>(&LinuxDosFileAttributeView::updateDosAttribute)), "java.io.IOException"},
	{}
};

$InnerClassInfo _LinuxDosFileAttributeView_InnerClassesInfo_[] = {
	{"sun.nio.fs.UnixFileAttributeViews$Basic", "sun.nio.fs.UnixFileAttributeViews", "Basic", $STATIC},
	{"sun.nio.fs.LinuxDosFileAttributeView$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LinuxDosFileAttributeView_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.LinuxDosFileAttributeView",
	"sun.nio.fs.UnixFileAttributeViews$Basic",
	"java.nio.file.attribute.DosFileAttributeView",
	_LinuxDosFileAttributeView_FieldInfo_,
	_LinuxDosFileAttributeView_MethodInfo_,
	nullptr,
	nullptr,
	_LinuxDosFileAttributeView_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.fs.LinuxDosFileAttributeView$1"
};

$Object* allocate$LinuxDosFileAttributeView($Class* clazz) {
	return $of($alloc(LinuxDosFileAttributeView));
}

void LinuxDosFileAttributeView::setTimes($FileTime* lastModifiedTime, $FileTime* lastAccessTime, $FileTime* createTime) {
	this->$UnixFileAttributeViews$Basic::setTimes(lastModifiedTime, lastAccessTime, createTime);
}

int32_t LinuxDosFileAttributeView::hashCode() {
	 return this->$UnixFileAttributeViews$Basic::hashCode();
}

bool LinuxDosFileAttributeView::equals(Object$* obj) {
	 return this->$UnixFileAttributeViews$Basic::equals(obj);
}

$Object* LinuxDosFileAttributeView::clone() {
	 return this->$UnixFileAttributeViews$Basic::clone();
}

$String* LinuxDosFileAttributeView::toString() {
	 return this->$UnixFileAttributeViews$Basic::toString();
}

void LinuxDosFileAttributeView::finalize() {
	this->$UnixFileAttributeViews$Basic::finalize();
}

$Unsafe* LinuxDosFileAttributeView::unsafe = nullptr;
$String* LinuxDosFileAttributeView::READONLY_NAME = nullptr;
$String* LinuxDosFileAttributeView::ARCHIVE_NAME = nullptr;
$String* LinuxDosFileAttributeView::SYSTEM_NAME = nullptr;
$String* LinuxDosFileAttributeView::HIDDEN_NAME = nullptr;
$String* LinuxDosFileAttributeView::DOS_XATTR_NAME = nullptr;
$bytes* LinuxDosFileAttributeView::DOS_XATTR_NAME_AS_BYTES = nullptr;
$Set* LinuxDosFileAttributeView::dosAttributeNames = nullptr;

void LinuxDosFileAttributeView::init$($UnixPath* file, bool followLinks) {
	$UnixFileAttributeViews$Basic::init$(file, followLinks);
}

$String* LinuxDosFileAttributeView::name() {
	return "dos"_s;
}

void LinuxDosFileAttributeView::setAttribute($String* attribute, Object$* value) {
	if ($nc(attribute)->equals(LinuxDosFileAttributeView::READONLY_NAME)) {
		setReadOnly($nc(($cast($Boolean, value)))->booleanValue());
		return;
	}
	if ($nc(attribute)->equals(LinuxDosFileAttributeView::ARCHIVE_NAME)) {
		setArchive($nc(($cast($Boolean, value)))->booleanValue());
		return;
	}
	if ($nc(attribute)->equals(LinuxDosFileAttributeView::SYSTEM_NAME)) {
		setSystem($nc(($cast($Boolean, value)))->booleanValue());
		return;
	}
	if ($nc(attribute)->equals(LinuxDosFileAttributeView::HIDDEN_NAME)) {
		setHidden($nc(($cast($Boolean, value)))->booleanValue());
		return;
	}
	$UnixFileAttributeViews$Basic::setAttribute(attribute, value);
}

$Map* LinuxDosFileAttributeView::readAttributes($StringArray* attributes) {
	$var($AbstractBasicFileAttributeView$AttributesBuilder, builder, $AbstractBasicFileAttributeView$AttributesBuilder::create(LinuxDosFileAttributeView::dosAttributeNames, attributes));
	$var($DosFileAttributes, attrs, $cast($DosFileAttributes, readAttributes()));
	addRequestedBasicAttributes(attrs, builder);
	if ($nc(builder)->match(LinuxDosFileAttributeView::READONLY_NAME)) {
		builder->add(LinuxDosFileAttributeView::READONLY_NAME, $($Boolean::valueOf($nc(attrs)->isReadOnly())));
	}
	if ($nc(builder)->match(LinuxDosFileAttributeView::ARCHIVE_NAME)) {
		builder->add(LinuxDosFileAttributeView::ARCHIVE_NAME, $($Boolean::valueOf($nc(attrs)->isArchive())));
	}
	if ($nc(builder)->match(LinuxDosFileAttributeView::SYSTEM_NAME)) {
		builder->add(LinuxDosFileAttributeView::SYSTEM_NAME, $($Boolean::valueOf($nc(attrs)->isSystem())));
	}
	if ($nc(builder)->match(LinuxDosFileAttributeView::HIDDEN_NAME)) {
		builder->add(LinuxDosFileAttributeView::HIDDEN_NAME, $($Boolean::valueOf($nc(attrs)->isHidden())));
	}
	return $nc(builder)->unmodifiableMap();
}

$BasicFileAttributes* LinuxDosFileAttributeView::readAttributes() {
	$nc(this->file)->checkRead();
	int32_t fd = -1;
	{
		$var($Throwable, var$0, nullptr);
		$var($BasicFileAttributes, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				fd = $nc(this->file)->openForAttributeAccess(this->followLinks);
				$var($UnixFileAttributes, attrs, $UnixFileAttributes::get(fd));
				int32_t dosAttribute = getDosAttribute(fd);
				$assign(var$2, $new($LinuxDosFileAttributeView$1, this, attrs, dosAttribute));
				return$1 = true;
				goto $finally;
			} catch ($UnixException&) {
				$var($UnixException, x, $catch());
				x->rethrowAsIOException(this->file);
				$assign(var$2, nullptr);
				return$1 = true;
				goto $finally;
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
	$shouldNotReachHere();
}

void LinuxDosFileAttributeView::setReadOnly(bool value) {
	updateDosAttribute(LinuxDosFileAttributeView::DOS_XATTR_READONLY, value);
}

void LinuxDosFileAttributeView::setHidden(bool value) {
	updateDosAttribute(LinuxDosFileAttributeView::DOS_XATTR_HIDDEN, value);
}

void LinuxDosFileAttributeView::setArchive(bool value) {
	updateDosAttribute(LinuxDosFileAttributeView::DOS_XATTR_ARCHIVE, value);
}

void LinuxDosFileAttributeView::setSystem(bool value) {
	updateDosAttribute(LinuxDosFileAttributeView::DOS_XATTR_SYSTEM, value);
}

int32_t LinuxDosFileAttributeView::getDosAttribute(int32_t fd) {
	int32_t size = 24;
	$var($NativeBuffer, buffer, $NativeBuffers::getNativeBuffer(size));
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			try {
				int32_t len = $LinuxNativeDispatcher::fgetxattr(fd, LinuxDosFileAttributeView::DOS_XATTR_NAME_AS_BYTES, $nc(buffer)->address(), size);
				if (len > 0) {
					if ($nc(LinuxDosFileAttributeView::unsafe)->getByte($nc(buffer)->address() + len - 1) == 0) {
						--len;
					}
					$var($bytes, buf, $new($bytes, len));
					$nc(LinuxDosFileAttributeView::unsafe)->copyMemory(nullptr, $nc(buffer)->address(), buf, $Unsafe::ARRAY_BYTE_BASE_OFFSET, len);
					$var($String, value, $Util::toString(buf));
					bool var$3 = $nc(value)->length() >= 3;
					if (var$3 && value->startsWith("0x"_s)) {
						try {
							return $Integer::parseInt($(value->substring(2)), 16);
						} catch ($NumberFormatException&) {
							$catch();
						}
					}
				}
				$throwNew($UnixException, $$str({"Value of "_s, LinuxDosFileAttributeView::DOS_XATTR_NAME, " attribute is invalid"_s}));
			} catch ($UnixException&) {
				$var($UnixException, x, $catch());
				$init($UnixConstants);
				if (x->errno$() == $UnixConstants::ENODATA) {
					var$2 = 0;
					return$1 = true;
					goto $finally;
				}
				$throw(x);
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
	$shouldNotReachHere();
}

void LinuxDosFileAttributeView::updateDosAttribute(int32_t flag, bool enable) {
	$nc(this->file)->checkWrite();
	int32_t fd = -1;
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				fd = $nc(this->file)->openForAttributeAccess(this->followLinks);
				int32_t oldValue = getDosAttribute(fd);
				int32_t newValue = oldValue;
				if (enable) {
					newValue |= flag;
				} else {
					newValue &= (uint32_t)~flag;
				}
				if (newValue != oldValue) {
					$var($bytes, value, $Util::toBytes($$str({"0x"_s, $($Integer::toHexString(newValue))})));
					$var($NativeBuffer, buffer, $NativeBuffers::asNativeBuffer(value));
					{
						$var($Throwable, var$1, nullptr);
						try {
							$LinuxNativeDispatcher::fsetxattr(fd, LinuxDosFileAttributeView::DOS_XATTR_NAME_AS_BYTES, $nc(buffer)->address(), $nc(value)->length + 1);
						} catch ($Throwable&) {
							$assign(var$1, $catch());
						} /*finally*/ {
							$nc(buffer)->release();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				}
			} catch ($UnixException&) {
				$var($UnixException, x, $catch());
				x->rethrowAsIOException(this->file);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$UnixNativeDispatcher::close(fd);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void clinit$LinuxDosFileAttributeView($Class* class$) {
	$assignStatic(LinuxDosFileAttributeView::READONLY_NAME, "readonly"_s);
	$assignStatic(LinuxDosFileAttributeView::ARCHIVE_NAME, "archive"_s);
	$assignStatic(LinuxDosFileAttributeView::SYSTEM_NAME, "system"_s);
	$assignStatic(LinuxDosFileAttributeView::HIDDEN_NAME, "hidden"_s);
	$assignStatic(LinuxDosFileAttributeView::DOS_XATTR_NAME, "user.DOSATTRIB"_s);
	$assignStatic(LinuxDosFileAttributeView::unsafe, $Unsafe::getUnsafe());
	$assignStatic(LinuxDosFileAttributeView::DOS_XATTR_NAME_AS_BYTES, $Util::toBytes(LinuxDosFileAttributeView::DOS_XATTR_NAME));
	$init($AbstractBasicFileAttributeView);
	$assignStatic(LinuxDosFileAttributeView::dosAttributeNames, $Util::newSet($AbstractBasicFileAttributeView::basicAttributeNames, $$new($StringArray, {
		LinuxDosFileAttributeView::READONLY_NAME,
		LinuxDosFileAttributeView::ARCHIVE_NAME,
		LinuxDosFileAttributeView::SYSTEM_NAME,
		LinuxDosFileAttributeView::HIDDEN_NAME
	})));
}

LinuxDosFileAttributeView::LinuxDosFileAttributeView() {
}

$Class* LinuxDosFileAttributeView::load$($String* name, bool initialize) {
	$loadClass(LinuxDosFileAttributeView, name, initialize, &_LinuxDosFileAttributeView_ClassInfo_, clinit$LinuxDosFileAttributeView, allocate$LinuxDosFileAttributeView);
	return class$;
}

$Class* LinuxDosFileAttributeView::class$ = nullptr;

		} // fs
	} // nio
} // sun