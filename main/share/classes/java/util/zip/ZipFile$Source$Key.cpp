#include <java/util/zip/ZipFile$Source$Key.h>
#include <java/io/File.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/nio/file/attribute/FileTime.h>
#include <java/util/zip/ZipCoder.h>
#include <java/util/zip/ZipFile$Source.h>
#include <jcpp.h>

#undef MAX_VALUE

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $ZipCoder = ::java::util::zip::ZipCoder;

namespace java {
	namespace util {
		namespace zip {

void ZipFile$Source$Key::init$($File* file, $BasicFileAttributes* attrs, $ZipCoder* zc) {
	$set(this, attrs, attrs);
	$set(this, file, file);
	this->utf8 = $nc(zc)->isUTF8();
}

int32_t ZipFile$Source$Key::hashCode() {
	int64_t t = this->utf8 ? 0 : $Long::MAX_VALUE;
	t += $$nc($nc(this->attrs)->lastModifiedTime())->toMillis();
	return ((int32_t)(t ^ ((int64_t)((uint64_t)t >> 32)))) + $nc(this->file)->hashCode();
}

bool ZipFile$Source$Key::equals(Object$* obj) {
	$useLocalObjectStack();
	{
		$var(ZipFile$Source$Key, key, nullptr);
		bool var$0 = $instanceOf(ZipFile$Source$Key, obj);
		if (var$0) {
			$assign(key, $cast(ZipFile$Source$Key, obj));
			var$0 = true;
		}
		if (var$0) {
			if ($nc(key)->utf8 != this->utf8) {
				return false;
			}
			if (!$$nc($nc(this->attrs)->lastModifiedTime())->equals($($nc(key->attrs)->lastModifiedTime()))) {
				return false;
			}
			$var($Object, fk, this->attrs->fileKey());
			if (fk != nullptr) {
				return fk->equals($(key->attrs->fileKey()));
			} else {
				return $nc(this->file)->equals(key->file);
			}
		}
	}
	return false;
}

ZipFile$Source$Key::ZipFile$Source$Key() {
}

$Class* ZipFile$Source$Key::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"attrs", "Ljava/nio/file/attribute/BasicFileAttributes;", nullptr, $FINAL, $field(ZipFile$Source$Key, attrs)},
		{"file", "Ljava/io/File;", nullptr, 0, $field(ZipFile$Source$Key, file)},
		{"utf8", "Z", nullptr, $FINAL, $field(ZipFile$Source$Key, utf8)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/File;Ljava/nio/file/attribute/BasicFileAttributes;Ljava/util/zip/ZipCoder;)V", nullptr, $PUBLIC, $method(ZipFile$Source$Key, init$, void, $File*, $BasicFileAttributes*, $ZipCoder*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ZipFile$Source$Key, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ZipFile$Source$Key, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.zip.ZipFile$Source", "java.util.zip.ZipFile", "Source", $PRIVATE | $STATIC},
		{"java.util.zip.ZipFile$Source$Key", "java.util.zip.ZipFile$Source", "Key", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.zip.ZipFile$Source$Key",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.zip.ZipFile"
	};
	$loadClass(ZipFile$Source$Key, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ZipFile$Source$Key);
	});
	return class$;
}

$Class* ZipFile$Source$Key::class$ = nullptr;

		} // zip
	} // util
} // java