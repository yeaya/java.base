#include <jdk/internal/loader/FileURLMapper.h>

#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _FileURLMapper_FieldInfo_[] = {
	{"url", "Ljava/net/URL;", nullptr, 0, $field(FileURLMapper, url)},
	{"path", "Ljava/lang/String;", nullptr, 0, $field(FileURLMapper, path)},
	{}
};

$MethodInfo _FileURLMapper_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URL;)V", nullptr, $PUBLIC, $method(static_cast<void(FileURLMapper::*)($URL*)>(&FileURLMapper::init$))},
	{"exists", "()Z", nullptr, $PUBLIC},
	{"getPath", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FileURLMapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.loader.FileURLMapper",
	"java.lang.Object",
	nullptr,
	_FileURLMapper_FieldInfo_,
	_FileURLMapper_MethodInfo_
};

$Object* allocate$FileURLMapper($Class* clazz) {
	return $of($alloc(FileURLMapper));
}

void FileURLMapper::init$($URL* url) {
	$set(this, url, url);
}

$String* FileURLMapper::getPath() {
	if (this->path != nullptr) {
		return this->path;
	}
	$var($String, host, $nc(this->url)->getHost());
	bool var$0 = host == nullptr || $nc(host)->isEmpty();
	if (var$0 || "localhost"_s->equalsIgnoreCase(host)) {
		$set(this, path, $nc(this->url)->getFile());
		$set(this, path, $ParseUtil::decode(this->path));
	}
	return this->path;
}

bool FileURLMapper::exists() {
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
	$loadClass(FileURLMapper, name, initialize, &_FileURLMapper_ClassInfo_, allocate$FileURLMapper);
	return class$;
}

$Class* FileURLMapper::class$ = nullptr;

		} // loader
	} // internal
} // jdk