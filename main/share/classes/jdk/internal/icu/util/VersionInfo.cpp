#include <jdk/internal/icu/util/VersionInfo.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/HashMap.h>
#include <jcpp.h>

#undef ICU_DATA_VERSION_PATH
#undef INVALID_VERSION_NUMBER_
#undef MAP_

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

$CompoundAttribute _VersionInfo_FieldAnnotations_ICU_DATA_VERSION_PATH[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _VersionInfo_FieldInfo_[] = {
	{"ICU_DATA_VERSION_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $staticField(VersionInfo, ICU_DATA_VERSION_PATH), _VersionInfo_FieldAnnotations_ICU_DATA_VERSION_PATH},
	{"m_version_", "I", nullptr, $PRIVATE, $field(VersionInfo, m_version_)},
	{"MAP_", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Integer;Ljava/lang/Object;>;", $PRIVATE | $STATIC | $FINAL, $staticField(VersionInfo, MAP_)},
	{"INVALID_VERSION_NUMBER_", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VersionInfo, INVALID_VERSION_NUMBER_)},
	{}
};

$MethodInfo _VersionInfo_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(VersionInfo::*)(int32_t)>(&VersionInfo::init$))},
	{"compareTo", "(Ljdk/internal/icu/util/VersionInfo;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(VersionInfo::*)(VersionInfo*)>(&VersionInfo::compareTo))},
	{"getInstance", "(Ljava/lang/String;)Ljdk/internal/icu/util/VersionInfo;", nullptr, $PUBLIC | $STATIC, $method(static_cast<VersionInfo*(*)($String*)>(&VersionInfo::getInstance))},
	{"getInstance", "(IIII)Ljdk/internal/icu/util/VersionInfo;", nullptr, $PUBLIC | $STATIC, $method(static_cast<VersionInfo*(*)(int32_t,int32_t,int32_t,int32_t)>(&VersionInfo::getInstance))},
	{"getInt", "(IIII)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t,int32_t)>(&VersionInfo::getInt))},
	{}
};

$ClassInfo _VersionInfo_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.icu.util.VersionInfo",
	"java.lang.Object",
	nullptr,
	_VersionInfo_FieldInfo_,
	_VersionInfo_MethodInfo_
};

$Object* allocate$VersionInfo($Class* clazz) {
	return $of($alloc(VersionInfo));
}


$String* VersionInfo::ICU_DATA_VERSION_PATH = nullptr;

$HashMap* VersionInfo::MAP_ = nullptr;

$String* VersionInfo::INVALID_VERSION_NUMBER_ = nullptr;

VersionInfo* VersionInfo::getInstance($String* version) {
	$init(VersionInfo);
	$useLocalCurrentObjectStackCache();
	int32_t length = $nc(version)->length();
	$var($ints, array, $new($ints, {
		0,
		0,
		0,
		0
	}));
	int32_t count = 0;
	int32_t index = 0;
	while (count < 4 && index < length) {
		char16_t c = version->charAt(index);
		if (c == u'.') {
			++count;
		} else {
			c -= u'0';
			if (c < 0 || c > 9) {
				$throwNew($IllegalArgumentException, VersionInfo::INVALID_VERSION_NUMBER_);
			}
			(*array)[count] *= 10;
			(*array)[count] += c;
		}
		++index;
	}
	if (index != length) {
		$throwNew($IllegalArgumentException, $$str({"Invalid version number: String \'"_s, version, "\' exceeds version format"_s}));
	}
	for (int32_t i = 0; i < 4; ++i) {
		if (array->get(i) < 0 || array->get(i) > 255) {
			$throwNew($IllegalArgumentException, VersionInfo::INVALID_VERSION_NUMBER_);
		}
	}
	return getInstance(array->get(0), array->get(1), array->get(2), array->get(3));
}

VersionInfo* VersionInfo::getInstance(int32_t major, int32_t minor, int32_t milli, int32_t micro) {
	$init(VersionInfo);
	$useLocalCurrentObjectStackCache();
	if (major < 0 || major > 255 || minor < 0 || minor > 255 || milli < 0 || milli > 255 || micro < 0 || micro > 255) {
		$throwNew($IllegalArgumentException, VersionInfo::INVALID_VERSION_NUMBER_);
	}
	int32_t version = getInt(major, minor, milli, micro);
	$var($Integer, key, $Integer::valueOf(version));
	$var($Object, result, $nc(VersionInfo::MAP_)->get(key));
	if (result == nullptr) {
		$assign(result, $new(VersionInfo, version));
		$nc(VersionInfo::MAP_)->put(key, result);
	}
	return $cast(VersionInfo, result);
}

int32_t VersionInfo::compareTo(VersionInfo* other) {
	return this->m_version_ - $nc(other)->m_version_;
}

void VersionInfo::init$(int32_t compactversion) {
	this->m_version_ = compactversion;
}

int32_t VersionInfo::getInt(int32_t major, int32_t minor, int32_t milli, int32_t micro) {
	$init(VersionInfo);
	return (((major << 24) | (minor << 16)) | (milli << 8)) | micro;
}

void clinit$VersionInfo($Class* class$) {
	$assignStatic(VersionInfo::ICU_DATA_VERSION_PATH, "67b"_s);
	$assignStatic(VersionInfo::INVALID_VERSION_NUMBER_, "Invalid version number: Version number may be negative or greater than 255"_s);
	$assignStatic(VersionInfo::MAP_, $new($HashMap));
}

VersionInfo::VersionInfo() {
}

$Class* VersionInfo::load$($String* name, bool initialize) {
	$loadClass(VersionInfo, name, initialize, &_VersionInfo_ClassInfo_, clinit$VersionInfo, allocate$VersionInfo);
	return class$;
}

$Class* VersionInfo::class$ = nullptr;

			} // util
		} // icu
	} // internal
} // jdk