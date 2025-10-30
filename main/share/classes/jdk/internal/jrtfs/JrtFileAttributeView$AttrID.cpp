#include <jdk/internal/jrtfs/JrtFileAttributeView$AttrID.h>

#include <java/lang/Enum.h>
#include <jdk/internal/jrtfs/JrtFileAttributeView.h>
#include <jcpp.h>

using $JrtFileAttributeView$AttrIDArray = $Array<::jdk::internal::jrtfs::JrtFileAttributeView$AttrID>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JrtFileAttributeView = ::jdk::internal::jrtfs::JrtFileAttributeView;

namespace jdk {
	namespace internal {
		namespace jrtfs {

$FieldInfo _JrtFileAttributeView$AttrID_FieldInfo_[] = {
	{"size", "Ljdk/internal/jrtfs/JrtFileAttributeView$AttrID;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JrtFileAttributeView$AttrID, size)},
	{"creationTime", "Ljdk/internal/jrtfs/JrtFileAttributeView$AttrID;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JrtFileAttributeView$AttrID, creationTime)},
	{"lastAccessTime", "Ljdk/internal/jrtfs/JrtFileAttributeView$AttrID;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JrtFileAttributeView$AttrID, lastAccessTime)},
	{"lastModifiedTime", "Ljdk/internal/jrtfs/JrtFileAttributeView$AttrID;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JrtFileAttributeView$AttrID, lastModifiedTime)},
	{"isDirectory", "Ljdk/internal/jrtfs/JrtFileAttributeView$AttrID;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JrtFileAttributeView$AttrID, isDirectory)},
	{"isRegularFile", "Ljdk/internal/jrtfs/JrtFileAttributeView$AttrID;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JrtFileAttributeView$AttrID, isRegularFile)},
	{"isSymbolicLink", "Ljdk/internal/jrtfs/JrtFileAttributeView$AttrID;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JrtFileAttributeView$AttrID, isSymbolicLink)},
	{"isOther", "Ljdk/internal/jrtfs/JrtFileAttributeView$AttrID;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JrtFileAttributeView$AttrID, isOther)},
	{"fileKey", "Ljdk/internal/jrtfs/JrtFileAttributeView$AttrID;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JrtFileAttributeView$AttrID, fileKey)},
	{"compressedSize", "Ljdk/internal/jrtfs/JrtFileAttributeView$AttrID;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JrtFileAttributeView$AttrID, compressedSize)},
	{"extension", "Ljdk/internal/jrtfs/JrtFileAttributeView$AttrID;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JrtFileAttributeView$AttrID, extension)},
	{"$VALUES", "[Ljdk/internal/jrtfs/JrtFileAttributeView$AttrID;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JrtFileAttributeView$AttrID, $VALUES)},
	{}
};

$MethodInfo _JrtFileAttributeView$AttrID_MethodInfo_[] = {
	{"$values", "()[Ljdk/internal/jrtfs/JrtFileAttributeView$AttrID;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JrtFileAttributeView$AttrIDArray*(*)()>(&JrtFileAttributeView$AttrID::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(JrtFileAttributeView$AttrID::*)($String*,int32_t)>(&JrtFileAttributeView$AttrID::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljdk/internal/jrtfs/JrtFileAttributeView$AttrID;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JrtFileAttributeView$AttrID*(*)($String*)>(&JrtFileAttributeView$AttrID::valueOf))},
	{"values", "()[Ljdk/internal/jrtfs/JrtFileAttributeView$AttrID;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JrtFileAttributeView$AttrIDArray*(*)()>(&JrtFileAttributeView$AttrID::values))},
	{}
};

$InnerClassInfo _JrtFileAttributeView$AttrID_InnerClassesInfo_[] = {
	{"jdk.internal.jrtfs.JrtFileAttributeView$AttrID", "jdk.internal.jrtfs.JrtFileAttributeView", "AttrID", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JrtFileAttributeView$AttrID_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"jdk.internal.jrtfs.JrtFileAttributeView$AttrID",
	"java.lang.Enum",
	nullptr,
	_JrtFileAttributeView$AttrID_FieldInfo_,
	_JrtFileAttributeView$AttrID_MethodInfo_,
	"Ljava/lang/Enum<Ljdk/internal/jrtfs/JrtFileAttributeView$AttrID;>;",
	nullptr,
	_JrtFileAttributeView$AttrID_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.jrtfs.JrtFileAttributeView"
};

$Object* allocate$JrtFileAttributeView$AttrID($Class* clazz) {
	return $of($alloc(JrtFileAttributeView$AttrID));
}

JrtFileAttributeView$AttrID* JrtFileAttributeView$AttrID::size = nullptr;
JrtFileAttributeView$AttrID* JrtFileAttributeView$AttrID::creationTime = nullptr;
JrtFileAttributeView$AttrID* JrtFileAttributeView$AttrID::lastAccessTime = nullptr;
JrtFileAttributeView$AttrID* JrtFileAttributeView$AttrID::lastModifiedTime = nullptr;
JrtFileAttributeView$AttrID* JrtFileAttributeView$AttrID::isDirectory = nullptr;
JrtFileAttributeView$AttrID* JrtFileAttributeView$AttrID::isRegularFile = nullptr;
JrtFileAttributeView$AttrID* JrtFileAttributeView$AttrID::isSymbolicLink = nullptr;
JrtFileAttributeView$AttrID* JrtFileAttributeView$AttrID::isOther = nullptr;
JrtFileAttributeView$AttrID* JrtFileAttributeView$AttrID::fileKey = nullptr;
JrtFileAttributeView$AttrID* JrtFileAttributeView$AttrID::compressedSize = nullptr;
JrtFileAttributeView$AttrID* JrtFileAttributeView$AttrID::extension = nullptr;
$JrtFileAttributeView$AttrIDArray* JrtFileAttributeView$AttrID::$VALUES = nullptr;

$JrtFileAttributeView$AttrIDArray* JrtFileAttributeView$AttrID::$values() {
	$init(JrtFileAttributeView$AttrID);
	return $new($JrtFileAttributeView$AttrIDArray, {
		JrtFileAttributeView$AttrID::size,
		JrtFileAttributeView$AttrID::creationTime,
		JrtFileAttributeView$AttrID::lastAccessTime,
		JrtFileAttributeView$AttrID::lastModifiedTime,
		JrtFileAttributeView$AttrID::isDirectory,
		JrtFileAttributeView$AttrID::isRegularFile,
		JrtFileAttributeView$AttrID::isSymbolicLink,
		JrtFileAttributeView$AttrID::isOther,
		JrtFileAttributeView$AttrID::fileKey,
		JrtFileAttributeView$AttrID::compressedSize,
		JrtFileAttributeView$AttrID::extension
	});
}

$JrtFileAttributeView$AttrIDArray* JrtFileAttributeView$AttrID::values() {
	$init(JrtFileAttributeView$AttrID);
	return $cast($JrtFileAttributeView$AttrIDArray, JrtFileAttributeView$AttrID::$VALUES->clone());
}

JrtFileAttributeView$AttrID* JrtFileAttributeView$AttrID::valueOf($String* name) {
	$init(JrtFileAttributeView$AttrID);
	return $cast(JrtFileAttributeView$AttrID, $Enum::valueOf(JrtFileAttributeView$AttrID::class$, name));
}

void JrtFileAttributeView$AttrID::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$JrtFileAttributeView$AttrID($Class* class$) {
	$assignStatic(JrtFileAttributeView$AttrID::size, $new(JrtFileAttributeView$AttrID, "size"_s, 0));
	$assignStatic(JrtFileAttributeView$AttrID::creationTime, $new(JrtFileAttributeView$AttrID, "creationTime"_s, 1));
	$assignStatic(JrtFileAttributeView$AttrID::lastAccessTime, $new(JrtFileAttributeView$AttrID, "lastAccessTime"_s, 2));
	$assignStatic(JrtFileAttributeView$AttrID::lastModifiedTime, $new(JrtFileAttributeView$AttrID, "lastModifiedTime"_s, 3));
	$assignStatic(JrtFileAttributeView$AttrID::isDirectory, $new(JrtFileAttributeView$AttrID, "isDirectory"_s, 4));
	$assignStatic(JrtFileAttributeView$AttrID::isRegularFile, $new(JrtFileAttributeView$AttrID, "isRegularFile"_s, 5));
	$assignStatic(JrtFileAttributeView$AttrID::isSymbolicLink, $new(JrtFileAttributeView$AttrID, "isSymbolicLink"_s, 6));
	$assignStatic(JrtFileAttributeView$AttrID::isOther, $new(JrtFileAttributeView$AttrID, "isOther"_s, 7));
	$assignStatic(JrtFileAttributeView$AttrID::fileKey, $new(JrtFileAttributeView$AttrID, "fileKey"_s, 8));
	$assignStatic(JrtFileAttributeView$AttrID::compressedSize, $new(JrtFileAttributeView$AttrID, "compressedSize"_s, 9));
	$assignStatic(JrtFileAttributeView$AttrID::extension, $new(JrtFileAttributeView$AttrID, "extension"_s, 10));
	$assignStatic(JrtFileAttributeView$AttrID::$VALUES, JrtFileAttributeView$AttrID::$values());
}

JrtFileAttributeView$AttrID::JrtFileAttributeView$AttrID() {
}

$Class* JrtFileAttributeView$AttrID::load$($String* name, bool initialize) {
	$loadClass(JrtFileAttributeView$AttrID, name, initialize, &_JrtFileAttributeView$AttrID_ClassInfo_, clinit$JrtFileAttributeView$AttrID, allocate$JrtFileAttributeView$AttrID);
	return class$;
}

$Class* JrtFileAttributeView$AttrID::class$ = nullptr;

		} // jrtfs
	} // internal
} // jdk