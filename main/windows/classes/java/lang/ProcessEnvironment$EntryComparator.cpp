#include <java/lang/ProcessEnvironment$EntryComparator.h>

#include <java/lang/ProcessEnvironment$NameComparator.h>
#include <java/lang/ProcessEnvironment.h>
#include <java/util/Map$Entry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessEnvironment = ::java::lang::ProcessEnvironment;
using $ProcessEnvironment$NameComparator = ::java::lang::ProcessEnvironment$NameComparator;
using $Map$Entry = ::java::util::Map$Entry;

namespace java {
	namespace lang {

$MethodInfo _ProcessEnvironment$EntryComparator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ProcessEnvironment$EntryComparator::*)()>(&ProcessEnvironment$EntryComparator::init$))},
	{"compare", "(Ljava/util/Map$Entry;Ljava/util/Map$Entry;)I", "(Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;)I", $PUBLIC, $method(static_cast<int32_t(ProcessEnvironment$EntryComparator::*)($Map$Entry*,$Map$Entry*)>(&ProcessEnvironment$EntryComparator::compare))},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _ProcessEnvironment$EntryComparator_InnerClassesInfo_[] = {
	{"java.lang.ProcessEnvironment$EntryComparator", "java.lang.ProcessEnvironment", "EntryComparator", $PRIVATE | $STATIC | $FINAL},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ProcessEnvironment$EntryComparator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.ProcessEnvironment$EntryComparator",
	"java.lang.Object",
	"java.util.Comparator",
	nullptr,
	_ProcessEnvironment$EntryComparator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;>;",
	nullptr,
	_ProcessEnvironment$EntryComparator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessEnvironment"
};

$Object* allocate$ProcessEnvironment$EntryComparator($Class* clazz) {
	return $of($alloc(ProcessEnvironment$EntryComparator));
}

void ProcessEnvironment$EntryComparator::init$() {
}

int32_t ProcessEnvironment$EntryComparator::compare($Map$Entry* e1, $Map$Entry* e2) {
	$useLocalCurrentObjectStackCache();
	$init($ProcessEnvironment);
	$var($String, var$0, $cast($String, $nc(e1)->getKey()));
	return $nc($ProcessEnvironment::nameComparator)->compare(var$0, $cast($String, $($nc(e2)->getKey())));
}

int32_t ProcessEnvironment$EntryComparator::compare(Object$* e1, Object$* e2) {
	return this->compare($cast($Map$Entry, e1), $cast($Map$Entry, e2));
}

ProcessEnvironment$EntryComparator::ProcessEnvironment$EntryComparator() {
}

$Class* ProcessEnvironment$EntryComparator::load$($String* name, bool initialize) {
	$loadClass(ProcessEnvironment$EntryComparator, name, initialize, &_ProcessEnvironment$EntryComparator_ClassInfo_, allocate$ProcessEnvironment$EntryComparator);
	return class$;
}

$Class* ProcessEnvironment$EntryComparator::class$ = nullptr;

	} // lang
} // java