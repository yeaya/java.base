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

$FieldInfo _FileURLMapper_FieldInfo_[] = {
	{"url", "Ljava/net/URL;", nullptr, 0, $field(FileURLMapper, url)},
	{"file", "Ljava/lang/String;", nullptr, 0, $field(FileURLMapper, file)},
	{}
};

$MethodInfo _FileURLMapper_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URL;)V", nullptr, $PUBLIC, $method(FileURLMapper, init$, void, $URL*)},
	{"exists", "()Z", nullptr, $PUBLIC, $virtualMethod(FileURLMapper, exists, bool)},
	{"getPath", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FileURLMapper, getPath, $String*)},
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
	$useLocalCurrentObjectStackCache();
	if (this->file != nullptr) {
		return this->file;
	}
	$var($String, host, $nc(this->url)->getHost());
	bool var$0 = host != nullptr && !host->isEmpty();
	if (var$0 && !"localhost"_s->equalsIgnoreCase(host)) {
		$var($String, rest, $nc(this->url)->getFile());
		$var($String, s, $str({host, $($ParseUtil::decode($($nc(this->url)->getFile())))}));
		$set(this, file, $str({"\\\\"_s, $($nc(s)->replace(u'/', u'\\'))}));
		return this->file;
	}
	$var($String, path, $nc($($nc(this->url)->getFile()))->replace(u'/', u'\\'));
	$set(this, file, $ParseUtil::decode(path));
	return this->file;
}

bool FileURLMapper::exists() {
	$useLocalCurrentObjectStackCache();
	$var($String, path, getPath());
	$var($File, f, $new($File, path));
	return f->exists();
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