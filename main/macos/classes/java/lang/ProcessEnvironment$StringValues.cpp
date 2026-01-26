#include <java/lang/ProcessEnvironment$StringValues.h>

#include <java/lang/ProcessEnvironment$StringValues$1.h>
#include <java/lang/ProcessEnvironment$Value.h>
#include <java/lang/ProcessEnvironment.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessEnvironment$StringValues$1 = ::java::lang::ProcessEnvironment$StringValues$1;
using $ProcessEnvironment$Value = ::java::lang::ProcessEnvironment$Value;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace lang {

$FieldInfo _ProcessEnvironment$StringValues_FieldInfo_[] = {
	{"c", "Ljava/util/Collection;", "Ljava/util/Collection<Ljava/lang/ProcessEnvironment$Value;>;", $PRIVATE | $FINAL, $field(ProcessEnvironment$StringValues, c)},
	{}
};

$MethodInfo _ProcessEnvironment$StringValues_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<Ljava/lang/ProcessEnvironment$Value;>;)V", $PUBLIC, $method(ProcessEnvironment$StringValues, init$, void, $Collection*)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$StringValues, clear, void)},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$StringValues, contains, bool, Object$*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$StringValues, equals, bool, Object$*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$StringValues, hashCode, int32_t)},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$StringValues, isEmpty, bool)},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(ProcessEnvironment$StringValues, iterator, $Iterator*)},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$StringValues, remove, bool, Object$*)},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$StringValues, size, int32_t)},
	{}
};

$InnerClassInfo _ProcessEnvironment$StringValues_InnerClassesInfo_[] = {
	{"java.lang.ProcessEnvironment$StringValues", "java.lang.ProcessEnvironment", "StringValues", $PRIVATE | $STATIC},
	{"java.lang.ProcessEnvironment$StringValues$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProcessEnvironment$StringValues_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ProcessEnvironment$StringValues",
	"java.util.AbstractCollection",
	nullptr,
	_ProcessEnvironment$StringValues_FieldInfo_,
	_ProcessEnvironment$StringValues_MethodInfo_,
	"Ljava/util/AbstractCollection<Ljava/lang/String;>;",
	nullptr,
	_ProcessEnvironment$StringValues_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessEnvironment"
};

$Object* allocate$ProcessEnvironment$StringValues($Class* clazz) {
	return $of($alloc(ProcessEnvironment$StringValues));
}

void ProcessEnvironment$StringValues::init$($Collection* c) {
	$AbstractCollection::init$();
	$set(this, c, c);
}

int32_t ProcessEnvironment$StringValues::size() {
	return $nc(this->c)->size();
}

bool ProcessEnvironment$StringValues::isEmpty() {
	return $nc(this->c)->isEmpty();
}

void ProcessEnvironment$StringValues::clear() {
	$nc(this->c)->clear();
}

$Iterator* ProcessEnvironment$StringValues::iterator() {
	return $new($ProcessEnvironment$StringValues$1, this);
}

bool ProcessEnvironment$StringValues::contains(Object$* o) {
	return $nc(this->c)->contains($($ProcessEnvironment$Value::valueOfQueryOnly(o)));
}

bool ProcessEnvironment$StringValues::remove(Object$* o) {
	return $nc(this->c)->remove($($ProcessEnvironment$Value::valueOfQueryOnly(o)));
}

bool ProcessEnvironment$StringValues::equals(Object$* o) {
	return $instanceOf(ProcessEnvironment$StringValues, o) && $nc(this->c)->equals($nc(($cast(ProcessEnvironment$StringValues, o)))->c);
}

int32_t ProcessEnvironment$StringValues::hashCode() {
	return $nc(this->c)->hashCode();
}

ProcessEnvironment$StringValues::ProcessEnvironment$StringValues() {
}

$Class* ProcessEnvironment$StringValues::load$($String* name, bool initialize) {
	$loadClass(ProcessEnvironment$StringValues, name, initialize, &_ProcessEnvironment$StringValues_ClassInfo_, allocate$ProcessEnvironment$StringValues);
	return class$;
}

$Class* ProcessEnvironment$StringValues::class$ = nullptr;

	} // lang
} // java