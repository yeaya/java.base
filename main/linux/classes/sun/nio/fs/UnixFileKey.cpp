#include <sun/nio/fs/UnixFileKey.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _UnixFileKey_FieldInfo_[] = {
	{"st_dev", "J", nullptr, $PRIVATE | $FINAL, $field(UnixFileKey, st_dev)},
	{"st_ino", "J", nullptr, $PRIVATE | $FINAL, $field(UnixFileKey, st_ino)},
	{}
};

$MethodInfo _UnixFileKey_MethodInfo_[] = {
	{"<init>", "(JJ)V", nullptr, 0, $method(static_cast<void(UnixFileKey::*)(int64_t,int64_t)>(&UnixFileKey::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _UnixFileKey_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.UnixFileKey",
	"java.lang.Object",
	nullptr,
	_UnixFileKey_FieldInfo_,
	_UnixFileKey_MethodInfo_
};

$Object* allocate$UnixFileKey($Class* clazz) {
	return $of($alloc(UnixFileKey));
}

void UnixFileKey::init$(int64_t st_dev, int64_t st_ino) {
	this->st_dev = st_dev;
	this->st_ino = st_ino;
}

int32_t UnixFileKey::hashCode() {
	return (int32_t)(this->st_dev ^ ((int64_t)((uint64_t)this->st_dev >> 32))) + (int32_t)(this->st_ino ^ ((int64_t)((uint64_t)this->st_ino >> 32)));
}

bool UnixFileKey::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	if (!($instanceOf(UnixFileKey, obj))) {
		return false;
	}
	$var(UnixFileKey, other, $cast(UnixFileKey, obj));
	return (this->st_dev == $nc(other)->st_dev) && (this->st_ino == other->st_ino);
}

$String* UnixFileKey::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("(dev="_s)->append($($Long::toHexString(this->st_dev)))->append(",ino="_s)->append(this->st_ino)->append(u')');
	return sb->toString();
}

UnixFileKey::UnixFileKey() {
}

$Class* UnixFileKey::load$($String* name, bool initialize) {
	$loadClass(UnixFileKey, name, initialize, &_UnixFileKey_ClassInfo_, allocate$UnixFileKey);
	return class$;
}

$Class* UnixFileKey::class$ = nullptr;

		} // fs
	} // nio
} // sun