#include <java/util/SimpleTimeZone$Cache.h>

#include <java/util/SimpleTimeZone.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SimpleTimeZone = ::java::util::SimpleTimeZone;

namespace java {
	namespace util {

$FieldInfo _SimpleTimeZone$Cache_FieldInfo_[] = {
	{"year", "J", nullptr, $FINAL, $field(SimpleTimeZone$Cache, year)},
	{"start", "J", nullptr, $FINAL, $field(SimpleTimeZone$Cache, start)},
	{"end", "J", nullptr, $FINAL, $field(SimpleTimeZone$Cache, end)},
	{}
};

$MethodInfo _SimpleTimeZone$Cache_MethodInfo_[] = {
	{"<init>", "(JJJ)V", nullptr, 0, $method(static_cast<void(SimpleTimeZone$Cache::*)(int64_t,int64_t,int64_t)>(&SimpleTimeZone$Cache::init$))},
	{}
};

$InnerClassInfo _SimpleTimeZone$Cache_InnerClassesInfo_[] = {
	{"java.util.SimpleTimeZone$Cache", "java.util.SimpleTimeZone", "Cache", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SimpleTimeZone$Cache_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.SimpleTimeZone$Cache",
	"java.lang.Object",
	nullptr,
	_SimpleTimeZone$Cache_FieldInfo_,
	_SimpleTimeZone$Cache_MethodInfo_,
	nullptr,
	nullptr,
	_SimpleTimeZone$Cache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.SimpleTimeZone"
};

$Object* allocate$SimpleTimeZone$Cache($Class* clazz) {
	return $of($alloc(SimpleTimeZone$Cache));
}

void SimpleTimeZone$Cache::init$(int64_t year, int64_t start, int64_t end) {
	this->year = year;
	this->start = start;
	this->end = end;
}

SimpleTimeZone$Cache::SimpleTimeZone$Cache() {
}

$Class* SimpleTimeZone$Cache::load$($String* name, bool initialize) {
	$loadClass(SimpleTimeZone$Cache, name, initialize, &_SimpleTimeZone$Cache_ClassInfo_, allocate$SimpleTimeZone$Cache);
	return class$;
}

$Class* SimpleTimeZone$Cache::class$ = nullptr;

	} // util
} // java