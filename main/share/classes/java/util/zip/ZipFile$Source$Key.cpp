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
using $FileTime = ::java::nio::file::attribute::FileTime;
using $ZipCoder = ::java::util::zip::ZipCoder;

namespace java {
	namespace util {
		namespace zip {

$FieldInfo _ZipFile$Source$Key_FieldInfo_[] = {
	{"attrs", "Ljava/nio/file/attribute/BasicFileAttributes;", nullptr, $FINAL, $field(ZipFile$Source$Key, attrs)},
	{"file", "Ljava/io/File;", nullptr, 0, $field(ZipFile$Source$Key, file)},
	{"utf8", "Z", nullptr, $FINAL, $field(ZipFile$Source$Key, utf8)},
	{}
};

$MethodInfo _ZipFile$Source$Key_MethodInfo_[] = {
	{"<init>", "(Ljava/io/File;Ljava/nio/file/attribute/BasicFileAttributes;Ljava/util/zip/ZipCoder;)V", nullptr, $PUBLIC, $method(ZipFile$Source$Key, init$, void, $File*, $BasicFileAttributes*, $ZipCoder*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ZipFile$Source$Key, equals, bool, Object$*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ZipFile$Source$Key, hashCode, int32_t)},
	{}
};

$InnerClassInfo _ZipFile$Source$Key_InnerClassesInfo_[] = {
	{"java.util.zip.ZipFile$Source", "java.util.zip.ZipFile", "Source", $PRIVATE | $STATIC},
	{"java.util.zip.ZipFile$Source$Key", "java.util.zip.ZipFile$Source", "Key", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ZipFile$Source$Key_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.zip.ZipFile$Source$Key",
	"java.lang.Object",
	nullptr,
	_ZipFile$Source$Key_FieldInfo_,
	_ZipFile$Source$Key_MethodInfo_,
	nullptr,
	nullptr,
	_ZipFile$Source$Key_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.zip.ZipFile"
};

$Object* allocate$ZipFile$Source$Key($Class* clazz) {
	return $of($alloc(ZipFile$Source$Key));
}

void ZipFile$Source$Key::init$($File* file, $BasicFileAttributes* attrs, $ZipCoder* zc) {
	$set(this, attrs, attrs);
	$set(this, file, file);
	this->utf8 = $nc(zc)->isUTF8();
}

int32_t ZipFile$Source$Key::hashCode() {
	int64_t t = this->utf8 ? (int64_t)0 : $Long::MAX_VALUE;
	t += $nc($($nc(this->attrs)->lastModifiedTime()))->toMillis();
	return ((int32_t)(t ^ ((int64_t)((uint64_t)t >> 32)))) + $nc(this->file)->hashCode();
}

bool ZipFile$Source$Key::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
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
			if (!$nc($($nc(this->attrs)->lastModifiedTime()))->equals($($nc($nc(key)->attrs)->lastModifiedTime()))) {
				return false;
			}
			$var($Object, fk, $nc(this->attrs)->fileKey());
			if (fk != nullptr) {
				return $of(fk)->equals($($nc($nc(key)->attrs)->fileKey()));
			} else {
				return $nc(this->file)->equals($nc(key)->file);
			}
		}
	}
	return false;
}

ZipFile$Source$Key::ZipFile$Source$Key() {
}

$Class* ZipFile$Source$Key::load$($String* name, bool initialize) {
	$loadClass(ZipFile$Source$Key, name, initialize, &_ZipFile$Source$Key_ClassInfo_, allocate$ZipFile$Source$Key);
	return class$;
}

$Class* ZipFile$Source$Key::class$ = nullptr;

		} // zip
	} // util
} // java