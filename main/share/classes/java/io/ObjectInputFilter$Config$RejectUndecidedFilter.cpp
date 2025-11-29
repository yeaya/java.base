#include <java/io/ObjectInputFilter$Config$RejectUndecidedFilter.h>

#include <java/io/ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo.h>
#include <java/io/ObjectInputFilter$Config.h>
#include <java/io/ObjectInputFilter$FilterInfo.h>
#include <java/io/ObjectInputFilter$Status.h>
#include <java/io/ObjectInputFilter.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef ALLOWED
#undef REJECTED
#undef UNDECIDED

using $ObjectInputFilter = ::java::io::ObjectInputFilter;
using $ObjectInputFilter$Config = ::java::io::ObjectInputFilter$Config;
using $ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo = ::java::io::ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo;
using $ObjectInputFilter$FilterInfo = ::java::io::ObjectInputFilter$FilterInfo;
using $ObjectInputFilter$Status = ::java::io::ObjectInputFilter$Status;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;

namespace java {
	namespace io {

$FieldInfo _ObjectInputFilter$Config$RejectUndecidedFilter_FieldInfo_[] = {
	{"filter", "Ljava/io/ObjectInputFilter;", nullptr, $PRIVATE | $FINAL, $field(ObjectInputFilter$Config$RejectUndecidedFilter, filter)},
	{}
};

$MethodInfo _ObjectInputFilter$Config$RejectUndecidedFilter_MethodInfo_[] = {
	{"<init>", "(Ljava/io/ObjectInputFilter;)V", nullptr, $PRIVATE, $method(static_cast<void(ObjectInputFilter$Config$RejectUndecidedFilter::*)($ObjectInputFilter*)>(&ObjectInputFilter$Config$RejectUndecidedFilter::init$))},
	{"checkInput", "(Ljava/io/ObjectInputFilter$FilterInfo;)Ljava/io/ObjectInputFilter$Status;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ObjectInputFilter$Config$RejectUndecidedFilter_InnerClassesInfo_[] = {
	{"java.io.ObjectInputFilter$Config", "java.io.ObjectInputFilter", "Config", $PUBLIC | $STATIC | $FINAL},
	{"java.io.ObjectInputFilter$Config$RejectUndecidedFilter", "java.io.ObjectInputFilter$Config", "RejectUndecidedFilter", $PRIVATE | $STATIC},
	{"java.io.ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo", "java.io.ObjectInputFilter$Config$RejectUndecidedFilter", "SerialInfo", $STATIC},
	{}
};

$ClassInfo _ObjectInputFilter$Config$RejectUndecidedFilter_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectInputFilter$Config$RejectUndecidedFilter",
	"java.lang.Object",
	"java.io.ObjectInputFilter",
	_ObjectInputFilter$Config$RejectUndecidedFilter_FieldInfo_,
	_ObjectInputFilter$Config$RejectUndecidedFilter_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectInputFilter$Config$RejectUndecidedFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectInputFilter"
};

$Object* allocate$ObjectInputFilter$Config$RejectUndecidedFilter($Class* clazz) {
	return $of($alloc(ObjectInputFilter$Config$RejectUndecidedFilter));
}

void ObjectInputFilter$Config$RejectUndecidedFilter::init$($ObjectInputFilter* filter) {
	$set(this, filter, $cast($ObjectInputFilter, $Objects::requireNonNull($of(filter), "filter"_s)));
}

$ObjectInputFilter$Status* ObjectInputFilter$Config$RejectUndecidedFilter::checkInput($ObjectInputFilter$FilterInfo* info) {
	$useLocalCurrentObjectStackCache();
	$ObjectInputFilter$Status* status = $cast($ObjectInputFilter$Status, $Objects::requireNonNull($($of($nc(this->filter)->checkInput(info))), "status"_s));
	$Class* clazz = $nc(info)->serialClass();
	$init($ObjectInputFilter$Status);
	if (clazz == nullptr || !$ObjectInputFilter$Status::UNDECIDED->equals(status)) {
		return status;
	}
	while ($nc(clazz)->isArray()) {
		clazz = clazz->getComponentType();
	}
	if ($nc(clazz)->isPrimitive()) {
		status = $ObjectInputFilter$Status::UNDECIDED;
	} else {
		$var($ObjectInputFilter$FilterInfo, clazzInfo, $new($ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo, info, clazz));
		$ObjectInputFilter$Status* clazzStatus = $nc(this->filter)->checkInput(clazzInfo);
		$ObjectInputFilter$Config::traceFilter("RejectUndecidedFilter Array Component type {0} class: {1}, filter: {2}"_s, $$new($ObjectArray, {
			$of(clazzStatus),
			$of(clazz),
			$of(this)
		}));
		status = ($ObjectInputFilter$Status::ALLOWED->equals(clazzStatus)) ? $ObjectInputFilter$Status::ALLOWED : $ObjectInputFilter$Status::REJECTED;
	}
	$ObjectInputFilter$Config::traceFilter("RejectUndecidedFilter {0} class: {1}, filter: {2}"_s, $$new($ObjectArray, {
		$of(status),
		$of(info->serialClass()),
		$of(this)
	}));
	return status;
}

$String* ObjectInputFilter$Config$RejectUndecidedFilter::toString() {
	return $str({"rejectUndecidedClass("_s, this->filter, ")"_s});
}

ObjectInputFilter$Config$RejectUndecidedFilter::ObjectInputFilter$Config$RejectUndecidedFilter() {
}

$Class* ObjectInputFilter$Config$RejectUndecidedFilter::load$($String* name, bool initialize) {
	$loadClass(ObjectInputFilter$Config$RejectUndecidedFilter, name, initialize, &_ObjectInputFilter$Config$RejectUndecidedFilter_ClassInfo_, allocate$ObjectInputFilter$Config$RejectUndecidedFilter);
	return class$;
}

$Class* ObjectInputFilter$Config$RejectUndecidedFilter::class$ = nullptr;

	} // io
} // java