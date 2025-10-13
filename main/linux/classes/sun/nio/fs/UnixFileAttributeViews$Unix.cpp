#include <sun/nio/fs/UnixFileAttributeViews$Unix.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/nio/file/attribute/FileTime.h>
#include <java/nio/file/attribute/PosixFileAttributes.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/nio/fs/AbstractBasicFileAttributeView$AttributesBuilder.h>
#include <sun/nio/fs/UnixFileAttributeViews$Posix.h>
#include <sun/nio/fs/UnixFileAttributeViews.h>
#include <sun/nio/fs/UnixFileAttributes.h>
#include <sun/nio/fs/UnixPath.h>
#include <sun/nio/fs/Util.h>
#include <jcpp.h>

#undef CTIME_NAME
#undef DEV_NAME
#undef GID_NAME
#undef INO_NAME
#undef MODE_NAME
#undef NLINK_NAME
#undef RDEV_NAME
#undef UID_NAME

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileTime = ::java::nio::file::attribute::FileTime;
using $PosixFileAttributes = ::java::nio::file::attribute::PosixFileAttributes;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $AbstractBasicFileAttributeView$AttributesBuilder = ::sun::nio::fs::AbstractBasicFileAttributeView$AttributesBuilder;
using $UnixFileAttributeViews = ::sun::nio::fs::UnixFileAttributeViews;
using $UnixFileAttributeViews$Posix = ::sun::nio::fs::UnixFileAttributeViews$Posix;
using $UnixFileAttributes = ::sun::nio::fs::UnixFileAttributes;
using $UnixPath = ::sun::nio::fs::UnixPath;
using $Util = ::sun::nio::fs::Util;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _UnixFileAttributeViews$Unix_FieldInfo_[] = {
	{"MODE_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UnixFileAttributeViews$Unix, MODE_NAME)},
	{"INO_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UnixFileAttributeViews$Unix, INO_NAME)},
	{"DEV_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UnixFileAttributeViews$Unix, DEV_NAME)},
	{"RDEV_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UnixFileAttributeViews$Unix, RDEV_NAME)},
	{"NLINK_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UnixFileAttributeViews$Unix, NLINK_NAME)},
	{"UID_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UnixFileAttributeViews$Unix, UID_NAME)},
	{"GID_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UnixFileAttributeViews$Unix, GID_NAME)},
	{"CTIME_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UnixFileAttributeViews$Unix, CTIME_NAME)},
	{"unixAttributeNames", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $STATIC | $FINAL, $staticField(UnixFileAttributeViews$Unix, unixAttributeNames)},
	{}
};

$MethodInfo _UnixFileAttributeViews$Unix_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/UnixPath;Z)V", nullptr, 0, $method(static_cast<void(UnixFileAttributeViews$Unix::*)($UnixPath*,bool)>(&UnixFileAttributeViews$Unix::init$))},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"readAttributes", "([Ljava/lang/String;)Ljava/util/Map;", "([Ljava/lang/String;)Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"setAttribute", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _UnixFileAttributeViews$Unix_InnerClassesInfo_[] = {
	{"sun.nio.fs.UnixFileAttributeViews$Unix", "sun.nio.fs.UnixFileAttributeViews", "Unix", $PRIVATE | $STATIC},
	{"sun.nio.fs.UnixFileAttributeViews$Posix", "sun.nio.fs.UnixFileAttributeViews", "Posix", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _UnixFileAttributeViews$Unix_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.UnixFileAttributeViews$Unix",
	"sun.nio.fs.UnixFileAttributeViews$Posix",
	nullptr,
	_UnixFileAttributeViews$Unix_FieldInfo_,
	_UnixFileAttributeViews$Unix_MethodInfo_,
	nullptr,
	nullptr,
	_UnixFileAttributeViews$Unix_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.UnixFileAttributeViews"
};

$Object* allocate$UnixFileAttributeViews$Unix($Class* clazz) {
	return $of($alloc(UnixFileAttributeViews$Unix));
}

$String* UnixFileAttributeViews$Unix::MODE_NAME = nullptr;
$String* UnixFileAttributeViews$Unix::INO_NAME = nullptr;
$String* UnixFileAttributeViews$Unix::DEV_NAME = nullptr;
$String* UnixFileAttributeViews$Unix::RDEV_NAME = nullptr;
$String* UnixFileAttributeViews$Unix::NLINK_NAME = nullptr;
$String* UnixFileAttributeViews$Unix::UID_NAME = nullptr;
$String* UnixFileAttributeViews$Unix::GID_NAME = nullptr;
$String* UnixFileAttributeViews$Unix::CTIME_NAME = nullptr;
$Set* UnixFileAttributeViews$Unix::unixAttributeNames = nullptr;

void UnixFileAttributeViews$Unix::init$($UnixPath* file, bool followLinks) {
	$UnixFileAttributeViews$Posix::init$(file, followLinks);
}

$String* UnixFileAttributeViews$Unix::name() {
	return "unix"_s;
}

void UnixFileAttributeViews$Unix::setAttribute($String* attribute, Object$* value) {
	if ($nc(attribute)->equals(UnixFileAttributeViews$Unix::MODE_NAME)) {
		setMode($nc(($cast($Integer, value)))->intValue());
		return;
	}
	if ($nc(attribute)->equals(UnixFileAttributeViews$Unix::UID_NAME)) {
		setOwners($nc(($cast($Integer, value)))->intValue(), -1);
		return;
	}
	if ($nc(attribute)->equals(UnixFileAttributeViews$Unix::GID_NAME)) {
		setOwners(-1, $nc(($cast($Integer, value)))->intValue());
		return;
	}
	$UnixFileAttributeViews$Posix::setAttribute(attribute, value);
}

$Map* UnixFileAttributeViews$Unix::readAttributes($StringArray* requested) {
	$var($AbstractBasicFileAttributeView$AttributesBuilder, builder, $AbstractBasicFileAttributeView$AttributesBuilder::create(UnixFileAttributeViews$Unix::unixAttributeNames, requested));
	$var($UnixFileAttributes, attrs, $cast($UnixFileAttributes, readAttributes()));
	addRequestedPosixAttributes(attrs, builder);
	if ($nc(builder)->match(UnixFileAttributeViews$Unix::MODE_NAME)) {
		builder->add(UnixFileAttributeViews$Unix::MODE_NAME, $($Integer::valueOf($nc(attrs)->mode())));
	}
	if ($nc(builder)->match(UnixFileAttributeViews$Unix::INO_NAME)) {
		builder->add(UnixFileAttributeViews$Unix::INO_NAME, $($Long::valueOf($nc(attrs)->ino())));
	}
	if ($nc(builder)->match(UnixFileAttributeViews$Unix::DEV_NAME)) {
		builder->add(UnixFileAttributeViews$Unix::DEV_NAME, $($Long::valueOf($nc(attrs)->dev())));
	}
	if ($nc(builder)->match(UnixFileAttributeViews$Unix::RDEV_NAME)) {
		builder->add(UnixFileAttributeViews$Unix::RDEV_NAME, $($Long::valueOf($nc(attrs)->rdev())));
	}
	if ($nc(builder)->match(UnixFileAttributeViews$Unix::NLINK_NAME)) {
		builder->add(UnixFileAttributeViews$Unix::NLINK_NAME, $($Integer::valueOf($nc(attrs)->nlink())));
	}
	if ($nc(builder)->match(UnixFileAttributeViews$Unix::UID_NAME)) {
		builder->add(UnixFileAttributeViews$Unix::UID_NAME, $($Integer::valueOf($nc(attrs)->uid())));
	}
	if ($nc(builder)->match(UnixFileAttributeViews$Unix::GID_NAME)) {
		builder->add(UnixFileAttributeViews$Unix::GID_NAME, $($Integer::valueOf($nc(attrs)->gid())));
	}
	if ($nc(builder)->match(UnixFileAttributeViews$Unix::CTIME_NAME)) {
		builder->add(UnixFileAttributeViews$Unix::CTIME_NAME, $($nc(attrs)->ctime()));
	}
	return $nc(builder)->unmodifiableMap();
}

void clinit$UnixFileAttributeViews$Unix($Class* class$) {
	$assignStatic(UnixFileAttributeViews$Unix::MODE_NAME, "mode"_s);
	$assignStatic(UnixFileAttributeViews$Unix::INO_NAME, "ino"_s);
	$assignStatic(UnixFileAttributeViews$Unix::DEV_NAME, "dev"_s);
	$assignStatic(UnixFileAttributeViews$Unix::RDEV_NAME, "rdev"_s);
	$assignStatic(UnixFileAttributeViews$Unix::NLINK_NAME, "nlink"_s);
	$assignStatic(UnixFileAttributeViews$Unix::UID_NAME, "uid"_s);
	$assignStatic(UnixFileAttributeViews$Unix::GID_NAME, "gid"_s);
	$assignStatic(UnixFileAttributeViews$Unix::CTIME_NAME, "ctime"_s);
	$init($UnixFileAttributeViews$Posix);
	$assignStatic(UnixFileAttributeViews$Unix::unixAttributeNames, $Util::newSet($UnixFileAttributeViews$Posix::posixAttributeNames, $$new($StringArray, {
		UnixFileAttributeViews$Unix::MODE_NAME,
		UnixFileAttributeViews$Unix::INO_NAME,
		UnixFileAttributeViews$Unix::DEV_NAME,
		UnixFileAttributeViews$Unix::RDEV_NAME,
		UnixFileAttributeViews$Unix::NLINK_NAME,
		UnixFileAttributeViews$Unix::UID_NAME,
		UnixFileAttributeViews$Unix::GID_NAME,
		UnixFileAttributeViews$Unix::CTIME_NAME
	})));
}

UnixFileAttributeViews$Unix::UnixFileAttributeViews$Unix() {
}

$Class* UnixFileAttributeViews$Unix::load$($String* name, bool initialize) {
	$loadClass(UnixFileAttributeViews$Unix, name, initialize, &_UnixFileAttributeViews$Unix_ClassInfo_, clinit$UnixFileAttributeViews$Unix, allocate$UnixFileAttributeViews$Unix);
	return class$;
}

$Class* UnixFileAttributeViews$Unix::class$ = nullptr;

		} // fs
	} // nio
} // sun