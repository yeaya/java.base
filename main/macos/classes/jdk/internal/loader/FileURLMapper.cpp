#include <jdk/internal/loader/FileURLMapper.h>
#include <java/io/File.h>
#include <java/net/URL.h>
#include <sun/net/www/ParseUtil.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $ParseUtil = ::sun::net::www::ParseUtil;

namespace jdk {
	namespace internal {
		namespace loader {

void FileURLMapper::init$($URL* url) {
	$set(this, url, url);
}

$String* FileURLMapper::getPath() {
	if (this->path != nullptr) {
		return this->path;
	}
	$var($String, host, $nc(this->url)->getHost());
	bool var$0 = host == nullptr || host->isEmpty();
	if (var$0 || "localhost"_s->equalsIgnoreCase(host)) {
		$set(this, path, this->url->getFile());
		$set(this, path, $ParseUtil::decode(this->path));
	}
	return this->path;
}

bool FileURLMapper::exists() {
	$useLocalObjectStack();
	$var($String, s, getPath());
	if (s == nullptr) {
		return false;
	} else {
		$var($File, f, $new($File, s));
		return f->exists();
	}
}

FileURLMapper::FileURLMapper() {
}

$Class* FileURLMapper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"url", "Ljava/net/URL;", nullptr, 0, $field(FileURLMapper, url)},
		{"path", "Ljava/lang/String;", nullptr, 0, $field(FileURLMapper, path)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/URL;)V", nullptr, $PUBLIC, $method(FileURLMapper, init$, void, $URL*)},
		{"exists", "()Z", nullptr, $PUBLIC, $virtualMethod(FileURLMapper, exists, bool)},
		{"getPath", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FileURLMapper, getPath, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.loader.FileURLMapper",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FileURLMapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileURLMapper);
	});
	return class$;
}

$Class* FileURLMapper::class$ = nullptr;

		} // loader
	} // internal
} // jdk