#include <java/io/FileSystem.h>

#include <java/io/File.h>
#include <jcpp.h>

#undef ACCESS_EXECUTE
#undef ACCESS_READ
#undef ACCESS_WRITE
#undef BA_DIRECTORY
#undef BA_EXISTS
#undef BA_HIDDEN
#undef BA_REGULAR
#undef SPACE_FREE
#undef SPACE_TOTAL
#undef SPACE_USABLE

using $File = ::java::io::File;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _FileSystem_FieldInfo_[] = {
	{"BA_EXISTS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileSystem, BA_EXISTS)},
	{"BA_REGULAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileSystem, BA_REGULAR)},
	{"BA_DIRECTORY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileSystem, BA_DIRECTORY)},
	{"BA_HIDDEN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileSystem, BA_HIDDEN)},
	{"ACCESS_READ", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileSystem, ACCESS_READ)},
	{"ACCESS_WRITE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileSystem, ACCESS_WRITE)},
	{"ACCESS_EXECUTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileSystem, ACCESS_EXECUTE)},
	{"SPACE_TOTAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileSystem, SPACE_TOTAL)},
	{"SPACE_FREE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileSystem, SPACE_FREE)},
	{"SPACE_USABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileSystem, SPACE_USABLE)},
	{"useCanonCaches", "Z", nullptr, $STATIC | $FINAL, $staticField(FileSystem, useCanonCaches)},
	{"useCanonPrefixCache", "Z", nullptr, $STATIC | $FINAL, $staticField(FileSystem, useCanonPrefixCache)},
	{}
};

$MethodInfo _FileSystem_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FileSystem::*)()>(&FileSystem::init$))},
	{"canonicalize", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"checkAccess", "(Ljava/io/File;I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"compare", "(Ljava/io/File;Ljava/io/File;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"createDirectory", "(Ljava/io/File;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"createFileExclusively", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"delete", "(Ljava/io/File;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"fromURIPath", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getBooleanAttributes", "(Ljava/io/File;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getBooleanProperty", "(Ljava/lang/String;Z)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*,bool)>(&FileSystem::getBooleanProperty))},
	{"getDefaultParent", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLastModifiedTime", "(Ljava/io/File;)J", nullptr, $PUBLIC | $ABSTRACT},
	{"getLength", "(Ljava/io/File;)J", nullptr, $PUBLIC | $ABSTRACT},
	{"getNameMax", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getPathSeparator", "()C", nullptr, $PUBLIC | $ABSTRACT},
	{"getSeparator", "()C", nullptr, $PUBLIC | $ABSTRACT},
	{"getSpace", "(Ljava/io/File;I)J", nullptr, $PUBLIC | $ABSTRACT},
	{"hasBooleanAttributes", "(Ljava/io/File;I)Z", nullptr, $PUBLIC},
	{"hashCode", "(Ljava/io/File;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"isAbsolute", "(Ljava/io/File;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"list", "(Ljava/io/File;)[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"listRoots", "()[Ljava/io/File;", nullptr, $PUBLIC | $ABSTRACT},
	{"normalize", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"prefixLength", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"rename", "(Ljava/io/File;Ljava/io/File;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"resolve", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"resolve", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"setLastModifiedTime", "(Ljava/io/File;J)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"setPermission", "(Ljava/io/File;IZZ)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"setReadOnly", "(Ljava/io/File;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _FileSystem_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.io.FileSystem",
	"java.lang.Object",
	nullptr,
	_FileSystem_FieldInfo_,
	_FileSystem_MethodInfo_
};

$Object* allocate$FileSystem($Class* clazz) {
	return $of($alloc(FileSystem));
}

bool FileSystem::useCanonCaches = false;
bool FileSystem::useCanonPrefixCache = false;

void FileSystem::init$() {
}

bool FileSystem::hasBooleanAttributes($File* f, int32_t attributes) {
	return ((int32_t)(getBooleanAttributes(f) & (uint32_t)attributes)) == attributes;
}

bool FileSystem::getBooleanProperty($String* prop, bool defaultVal) {
	$init(FileSystem);
	$var($String, value, $System::getProperty(prop));
	return (value != nullptr) ? $Boolean::parseBoolean(value) : defaultVal;
}

void clinit$FileSystem($Class* class$) {
	{
		FileSystem::useCanonCaches = FileSystem::getBooleanProperty("sun.io.useCanonCaches"_s, false);
		FileSystem::useCanonPrefixCache = FileSystem::useCanonCaches && FileSystem::getBooleanProperty("sun.io.useCanonPrefixCache"_s, false);
	}
}

FileSystem::FileSystem() {
}

$Class* FileSystem::load$($String* name, bool initialize) {
	$loadClass(FileSystem, name, initialize, &_FileSystem_ClassInfo_, clinit$FileSystem, allocate$FileSystem);
	return class$;
}

$Class* FileSystem::class$ = nullptr;

	} // io
} // java