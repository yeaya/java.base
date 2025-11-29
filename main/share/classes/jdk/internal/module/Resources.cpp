#include <jdk/internal/module/Resources.h>

#include <java/io/File.h>
#include <java/lang/CharSequence.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/NoSuchFileException.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <jdk/internal/module/Checks.h>
#include <jcpp.h>

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $File = ::java::io::File;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystem = ::java::nio::file::FileSystem;
using $Files = ::java::nio::file::Files;
using $NoSuchFileException = ::java::nio::file::NoSuchFileException;
using $Path = ::java::nio::file::Path;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $Checks = ::jdk::internal::module::Checks;

namespace jdk {
	namespace internal {
		namespace module {

$MethodInfo _Resources_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Resources::*)()>(&Resources::init$))},
	{"canEncapsulate", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&Resources::canEncapsulate))},
	{"mayTranslate", "(Ljava/lang/String;II)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*,int32_t,int32_t)>(&Resources::mayTranslate))},
	{"toFilePath", "(Ljava/nio/file/Path;Ljava/lang/String;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Path*(*)($Path*,$String*)>(&Resources::toFilePath)), "java.io.IOException"},
	{"toPackageName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&Resources::toPackageName))},
	{"toResourceName", "(Ljava/nio/file/Path;Ljava/nio/file/Path;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($Path*,$Path*)>(&Resources::toResourceName))},
	{"toSafeFilePath", "(Ljava/nio/file/FileSystem;Ljava/lang/String;)Ljava/nio/file/Path;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Path*(*)($FileSystem*,$String*)>(&Resources::toSafeFilePath))},
	{}
};

$ClassInfo _Resources_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.module.Resources",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Resources_MethodInfo_
};

$Object* allocate$Resources($Class* clazz) {
	return $of($alloc(Resources));
}

void Resources::init$() {
}

bool Resources::canEncapsulate($String* name) {
	int32_t len = $nc(name)->length();
	if (len > 6 && name->endsWith(".class"_s)) {
		return false;
	} else {
		return $Checks::isPackageName($(toPackageName(name)));
	}
}

$String* Resources::toPackageName($String* name) {
	int32_t index = $nc(name)->lastIndexOf((int32_t)u'/');
	if (index == -1 || index == name->length() - 1) {
		return ""_s;
	} else {
		return $(name->substring(0, index))->replace(u'/', u'.');
	}
}

$String* Resources::toResourceName($Path* dir, $Path* file) {
	$useLocalCurrentObjectStackCache();
	$init($File);
	$var($String, s, $nc($($nc($($nc(dir)->relativize(file)))->toString()))->replace($File::separatorChar, u'/'));
	bool var$0 = !s->isEmpty();
	if (var$0 && $Files::isDirectory(file, $$new($LinkOptionArray, 0))) {
		$plusAssign(s, "/"_s);
	}
	return s;
}

$Path* Resources::toFilePath($Path* dir, $String* name$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, name$renamed);
	bool expectDirectory = $nc(name)->endsWith("/"_s);
	if (expectDirectory) {
		$assign(name, name->substring(0, name->length() - 1));
	}
	$var($Path, path, toSafeFilePath($($nc(dir)->getFileSystem()), name));
	if (path != nullptr) {
		$var($Path, file, $nc(dir)->resolve(path));
		try {
			$var($BasicFileAttributes, attrs, nullptr);
			$load($BasicFileAttributes);
			$assign(attrs, $Files::readAttributes(file, $BasicFileAttributes::class$, $$new($LinkOptionArray, 0)));
			bool var$0 = $nc(attrs)->isDirectory();
			if (var$0 || (!$nc(attrs)->isDirectory() && !expectDirectory)) {
				return file;
			}
		} catch ($NoSuchFileException& ignore) {
		}
	}
	return nullptr;
}

$Path* Resources::toSafeFilePath($FileSystem* fs, $String* name) {
	$useLocalCurrentObjectStackCache();
	int32_t next = 0;
	int32_t off = 0;
	while ((next = $nc(name)->indexOf((int32_t)u'/', off)) != -1) {
		int32_t len = next - off;
		if (!mayTranslate(name, off, len)) {
			return nullptr;
		}
		off = next + 1;
	}
	int32_t rem = $nc(name)->length() - off;
	if (!mayTranslate(name, off, rem)) {
		return nullptr;
	}
	$var($Path, path, nullptr);
	$init($File);
	if ($File::separatorChar == u'/') {
		$assign(path, $nc(fs)->getPath(name, $$new($StringArray, 0)));
	} else {
		if (name->contains($File::separator)) {
			return nullptr;
		}
		$assign(path, $nc(fs)->getPath($(name->replace(u'/', $File::separatorChar)), $$new($StringArray, 0)));
	}
	return ($nc(path)->getRoot() == nullptr) ? path : ($Path*)nullptr;
}

bool Resources::mayTranslate($String* name, int32_t off, int32_t len) {
	if (len <= 2) {
		if (len == 0) {
			return false;
		}
		bool starsWithDot = ($nc(name)->charAt(off) == u'.');
		if (len == 1 && starsWithDot) {
			return false;
		}
		if (len == 2 && starsWithDot && (name->charAt(off + 1) == u'.')) {
			return false;
		}
	}
	return true;
}

Resources::Resources() {
}

$Class* Resources::load$($String* name, bool initialize) {
	$loadClass(Resources, name, initialize, &_Resources_ClassInfo_, allocate$Resources);
	return class$;
}

$Class* Resources::class$ = nullptr;

		} // module
	} // internal
} // jdk