#include <java/io/ObjectInputFilter$Config$PredicateFilter.h>

#include <java/io/ObjectInputFilter$Config.h>
#include <java/io/ObjectInputFilter$FilterInfo.h>
#include <java/io/ObjectInputFilter$Status.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

#undef UNDECIDED

using $ObjectInputFilter = ::java::io::ObjectInputFilter;
using $ObjectInputFilter$Config = ::java::io::ObjectInputFilter$Config;
using $ObjectInputFilter$FilterInfo = ::java::io::ObjectInputFilter$FilterInfo;
using $ObjectInputFilter$Status = ::java::io::ObjectInputFilter$Status;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Predicate = ::java::util::function::Predicate;

namespace java {
	namespace io {

$FieldInfo _ObjectInputFilter$Config$PredicateFilter_FieldInfo_[] = {
	{"predicate", "Ljava/util/function/Predicate;", "Ljava/util/function/Predicate<Ljava/lang/Class<*>;>;", $PRIVATE | $FINAL, $field(ObjectInputFilter$Config$PredicateFilter, predicate)},
	{"ifTrueStatus", "Ljava/io/ObjectInputFilter$Status;", nullptr, $PRIVATE | $FINAL, $field(ObjectInputFilter$Config$PredicateFilter, ifTrueStatus)},
	{"ifFalseStatus", "Ljava/io/ObjectInputFilter$Status;", nullptr, $PRIVATE | $FINAL, $field(ObjectInputFilter$Config$PredicateFilter, ifFalseStatus)},
	{}
};

$MethodInfo _ObjectInputFilter$Config$PredicateFilter_MethodInfo_[] = {
	{"<init>", "(Ljava/util/function/Predicate;Ljava/io/ObjectInputFilter$Status;Ljava/io/ObjectInputFilter$Status;)V", "(Ljava/util/function/Predicate<Ljava/lang/Class<*>;>;Ljava/io/ObjectInputFilter$Status;Ljava/io/ObjectInputFilter$Status;)V", 0, $method(static_cast<void(ObjectInputFilter$Config$PredicateFilter::*)($Predicate*,$ObjectInputFilter$Status*,$ObjectInputFilter$Status*)>(&ObjectInputFilter$Config$PredicateFilter::init$))},
	{"checkInput", "(Ljava/io/ObjectInputFilter$FilterInfo;)Ljava/io/ObjectInputFilter$Status;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ObjectInputFilter$Config$PredicateFilter_InnerClassesInfo_[] = {
	{"java.io.ObjectInputFilter$Config", "java.io.ObjectInputFilter", "Config", $PUBLIC | $STATIC | $FINAL},
	{"java.io.ObjectInputFilter$Config$PredicateFilter", "java.io.ObjectInputFilter$Config", "PredicateFilter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ObjectInputFilter$Config$PredicateFilter_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectInputFilter$Config$PredicateFilter",
	"java.lang.Object",
	"java.io.ObjectInputFilter",
	_ObjectInputFilter$Config$PredicateFilter_FieldInfo_,
	_ObjectInputFilter$Config$PredicateFilter_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectInputFilter$Config$PredicateFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectInputFilter"
};

$Object* allocate$ObjectInputFilter$Config$PredicateFilter($Class* clazz) {
	return $of($alloc(ObjectInputFilter$Config$PredicateFilter));
}

void ObjectInputFilter$Config$PredicateFilter::init$($Predicate* predicate, $ObjectInputFilter$Status* ifTrueStatus, $ObjectInputFilter$Status* ifFalseStatus) {
	$set(this, predicate, predicate);
	$set(this, ifTrueStatus, ifTrueStatus);
	$set(this, ifFalseStatus, ifFalseStatus);
}

$ObjectInputFilter$Status* ObjectInputFilter$Config$PredicateFilter::checkInput($ObjectInputFilter$FilterInfo* info) {
	$Class* clazz = $nc(info)->serialClass();
	$init($ObjectInputFilter$Status);
	$ObjectInputFilter$Status* status = (clazz == nullptr) ? $ObjectInputFilter$Status::UNDECIDED : ($nc(this->predicate)->test(clazz)) ? this->ifTrueStatus : this->ifFalseStatus;
	$ObjectInputFilter$Config::traceFilter("PredicateFilter {0}, filter: {1}"_s, $$new($ObjectArray, {
		$of(status),
		$of(this)
	}));
	return status;
}

$String* ObjectInputFilter$Config$PredicateFilter::toString() {
	return $str({"predicate("_s, this->predicate, ", ifTrue: "_s, this->ifTrueStatus, ", ifFalse:"_s, this->ifFalseStatus, ")"_s});
}

ObjectInputFilter$Config$PredicateFilter::ObjectInputFilter$Config$PredicateFilter() {
}

$Class* ObjectInputFilter$Config$PredicateFilter::load$($String* name, bool initialize) {
	$loadClass(ObjectInputFilter$Config$PredicateFilter, name, initialize, &_ObjectInputFilter$Config$PredicateFilter_ClassInfo_, allocate$ObjectInputFilter$Config$PredicateFilter);
	return class$;
}

$Class* ObjectInputFilter$Config$PredicateFilter::class$ = nullptr;

	} // io
} // java