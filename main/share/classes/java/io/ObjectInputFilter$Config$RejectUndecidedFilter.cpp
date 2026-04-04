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

void ObjectInputFilter$Config$RejectUndecidedFilter::init$($ObjectInputFilter* filter) {
	$set(this, filter, $cast($ObjectInputFilter, $Objects::requireNonNull(filter, "filter"_s)));
}

$ObjectInputFilter$Status* ObjectInputFilter$Config$RejectUndecidedFilter::checkInput($ObjectInputFilter$FilterInfo* info) {
	$useLocalObjectStack();
	$ObjectInputFilter$Status* status = $cast($ObjectInputFilter$Status, $Objects::requireNonNull($($nc(this->filter)->checkInput(info)), "status"_s));
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
		$ObjectInputFilter$Status* clazzStatus = this->filter->checkInput(clazzInfo);
		$ObjectInputFilter$Config::traceFilter("RejectUndecidedFilter Array Component type {0} class: {1}, filter: {2}"_s, $$new($ObjectArray, {
			clazzStatus,
			clazz,
			this
		}));
		status = ($ObjectInputFilter$Status::ALLOWED->equals(clazzStatus)) ? $ObjectInputFilter$Status::ALLOWED : $ObjectInputFilter$Status::REJECTED;
	}
	$ObjectInputFilter$Config::traceFilter("RejectUndecidedFilter {0} class: {1}, filter: {2}"_s, $$new($ObjectArray, {
		status,
		info->serialClass(),
		this
	}));
	return status;
}

$String* ObjectInputFilter$Config$RejectUndecidedFilter::toString() {
	return $str({"rejectUndecidedClass("_s, this->filter, ")"_s});
}

ObjectInputFilter$Config$RejectUndecidedFilter::ObjectInputFilter$Config$RejectUndecidedFilter() {
}

$Class* ObjectInputFilter$Config$RejectUndecidedFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"filter", "Ljava/io/ObjectInputFilter;", nullptr, $PRIVATE | $FINAL, $field(ObjectInputFilter$Config$RejectUndecidedFilter, filter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/ObjectInputFilter;)V", nullptr, $PRIVATE, $method(ObjectInputFilter$Config$RejectUndecidedFilter, init$, void, $ObjectInputFilter*)},
		{"checkInput", "(Ljava/io/ObjectInputFilter$FilterInfo;)Ljava/io/ObjectInputFilter$Status;", nullptr, $PUBLIC, $virtualMethod(ObjectInputFilter$Config$RejectUndecidedFilter, checkInput, $ObjectInputFilter$Status*, $ObjectInputFilter$FilterInfo*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ObjectInputFilter$Config$RejectUndecidedFilter, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.ObjectInputFilter$Config", "java.io.ObjectInputFilter", "Config", $PUBLIC | $STATIC | $FINAL},
		{"java.io.ObjectInputFilter$Config$RejectUndecidedFilter", "java.io.ObjectInputFilter$Config", "RejectUndecidedFilter", $PRIVATE | $STATIC},
		{"java.io.ObjectInputFilter$Config$RejectUndecidedFilter$SerialInfo", "java.io.ObjectInputFilter$Config$RejectUndecidedFilter", "SerialInfo", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.ObjectInputFilter$Config$RejectUndecidedFilter",
		"java.lang.Object",
		"java.io.ObjectInputFilter",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.io.ObjectInputFilter"
	};
	$loadClass(ObjectInputFilter$Config$RejectUndecidedFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectInputFilter$Config$RejectUndecidedFilter);
	});
	return class$;
}

$Class* ObjectInputFilter$Config$RejectUndecidedFilter::class$ = nullptr;

	} // io
} // java