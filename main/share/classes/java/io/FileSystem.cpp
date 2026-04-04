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

using $FileArray = $Array<::java::io::File>;
using $File = ::java::io::File;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

bool FileSystem::useCanonCaches = false;
bool FileSystem::useCanonPrefixCache = false;

void FileSystem::init$() {
}

bool FileSystem::hasBooleanAttributes($File* f, int32_t attributes) {
	return (getBooleanAttributes(f) & attributes) == attributes;
}

bool FileSystem::getBooleanProperty($String* prop, bool defaultVal) {
	$init(FileSystem);
	$var($String, value, $System::getProperty(prop));
	return (value != nullptr) ? $Boolean::parseBoolean(value) : defaultVal;
}

void FileSystem::clinit$($Class* clazz) {
	{
		FileSystem::useCanonCaches = FileSystem::getBooleanProperty("sun.io.useCanonCaches"_s, false);
		FileSystem::useCanonPrefixCache = FileSystem::useCanonCaches && FileSystem::getBooleanProperty("sun.io.useCanonPrefixCache"_s, false);
	}
}

FileSystem::FileSystem() {
}

$Class* FileSystem::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FileSystem, init$, void)},
		{"canonicalize", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, canonicalize, $String*, $String*), "java.io.IOException"},
		{"checkAccess", "(Ljava/io/File;I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, checkAccess, bool, $File*, int32_t)},
		{"compare", "(Ljava/io/File;Ljava/io/File;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, compare, int32_t, $File*, $File*)},
		{"createDirectory", "(Ljava/io/File;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, createDirectory, bool, $File*)},
		{"createFileExclusively", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, createFileExclusively, bool, $String*), "java.io.IOException"},
		{"delete", "(Ljava/io/File;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, delete$, bool, $File*)},
		{"fromURIPath", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, fromURIPath, $String*, $String*)},
		{"getBooleanAttributes", "(Ljava/io/File;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, getBooleanAttributes, int32_t, $File*)},
		{"getBooleanProperty", "(Ljava/lang/String;Z)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(FileSystem, getBooleanProperty, bool, $String*, bool)},
		{"getDefaultParent", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, getDefaultParent, $String*)},
		{"getLastModifiedTime", "(Ljava/io/File;)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, getLastModifiedTime, int64_t, $File*)},
		{"getLength", "(Ljava/io/File;)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, getLength, int64_t, $File*)},
		{"getNameMax", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, getNameMax, int32_t, $String*)},
		{"getPathSeparator", "()C", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, getPathSeparator, char16_t)},
		{"getSeparator", "()C", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, getSeparator, char16_t)},
		{"getSpace", "(Ljava/io/File;I)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, getSpace, int64_t, $File*, int32_t)},
		{"hasBooleanAttributes", "(Ljava/io/File;I)Z", nullptr, $PUBLIC, $virtualMethod(FileSystem, hasBooleanAttributes, bool, $File*, int32_t)},
		{"hashCode", "(Ljava/io/File;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, hashCode, int32_t, $File*)},
		{"isAbsolute", "(Ljava/io/File;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, isAbsolute, bool, $File*)},
		{"list", "(Ljava/io/File;)[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, list, $StringArray*, $File*)},
		{"listRoots", "()[Ljava/io/File;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, listRoots, $FileArray*)},
		{"normalize", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, normalize, $String*, $String*)},
		{"prefixLength", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, prefixLength, int32_t, $String*)},
		{"rename", "(Ljava/io/File;Ljava/io/File;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, rename, bool, $File*, $File*)},
		{"resolve", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, resolve, $String*, $String*, $String*)},
		{"resolve", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, resolve, $String*, $File*)},
		{"setLastModifiedTime", "(Ljava/io/File;J)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, setLastModifiedTime, bool, $File*, int64_t)},
		{"setPermission", "(Ljava/io/File;IZZ)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, setPermission, bool, $File*, int32_t, bool, bool)},
		{"setReadOnly", "(Ljava/io/File;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, setReadOnly, bool, $File*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.io.FileSystem",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FileSystem, name, initialize, &classInfo$$, FileSystem::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FileSystem);
	});
	return class$;
}

$Class* FileSystem::class$ = nullptr;

	} // io
} // java