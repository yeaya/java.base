#include <java/lang/ProcessEnvironment$CheckedValues.h>
#include <java/lang/ProcessEnvironment.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessEnvironment = ::java::lang::ProcessEnvironment;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace lang {

void ProcessEnvironment$CheckedValues::init$($Collection* c) {
	$AbstractCollection::init$();
	$set(this, c, c);
}

int32_t ProcessEnvironment$CheckedValues::size() {
	return $nc(this->c)->size();
}

bool ProcessEnvironment$CheckedValues::isEmpty() {
	return $nc(this->c)->isEmpty();
}

void ProcessEnvironment$CheckedValues::clear() {
	$nc(this->c)->clear();
}

$Iterator* ProcessEnvironment$CheckedValues::iterator() {
	return $nc(this->c)->iterator();
}

bool ProcessEnvironment$CheckedValues::contains(Object$* o) {
	return $nc(this->c)->contains($($ProcessEnvironment::nonNullString(o)));
}

bool ProcessEnvironment$CheckedValues::remove(Object$* o) {
	return $nc(this->c)->remove($($ProcessEnvironment::nonNullString(o)));
}

ProcessEnvironment$CheckedValues::ProcessEnvironment$CheckedValues() {
}

$Class* ProcessEnvironment$CheckedValues::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"c", "Ljava/util/Collection;", "Ljava/util/Collection<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(ProcessEnvironment$CheckedValues, c)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<Ljava/lang/String;>;)V", $PUBLIC, $method(ProcessEnvironment$CheckedValues, init$, void, $Collection*)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$CheckedValues, clear, void)},
		{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$CheckedValues, contains, bool, Object$*)},
		{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$CheckedValues, isEmpty, bool)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(ProcessEnvironment$CheckedValues, iterator, $Iterator*)},
		{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$CheckedValues, remove, bool, Object$*)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$CheckedValues, size, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ProcessEnvironment$CheckedValues", "java.lang.ProcessEnvironment", "CheckedValues", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ProcessEnvironment$CheckedValues",
		"java.util.AbstractCollection",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/AbstractCollection<Ljava/lang/String;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ProcessEnvironment"
	};
	$loadClass(ProcessEnvironment$CheckedValues, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessEnvironment$CheckedValues);
	});
	return class$;
}

$Class* ProcessEnvironment$CheckedValues::class$ = nullptr;

	} // lang
} // java