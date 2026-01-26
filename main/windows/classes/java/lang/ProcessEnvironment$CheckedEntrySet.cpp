#include <java/lang/ProcessEnvironment$CheckedEntrySet.h>

#include <java/lang/ProcessEnvironment$CheckedEntrySet$1.h>
#include <java/lang/ProcessEnvironment.h>
#include <java/util/AbstractSet.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessEnvironment = ::java::lang::ProcessEnvironment;
using $ProcessEnvironment$CheckedEntrySet$1 = ::java::lang::ProcessEnvironment$CheckedEntrySet$1;
using $AbstractSet = ::java::util::AbstractSet;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;

namespace java {
	namespace lang {

$FieldInfo _ProcessEnvironment$CheckedEntrySet_FieldInfo_[] = {
	{"s", "Ljava/util/Set;", "Ljava/util/Set<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;>;", $PRIVATE | $FINAL, $field(ProcessEnvironment$CheckedEntrySet, s)},
	{}
};

$MethodInfo _ProcessEnvironment$CheckedEntrySet_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Set;)V", "(Ljava/util/Set<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;>;)V", $PUBLIC, $method(ProcessEnvironment$CheckedEntrySet, init$, void, $Set*)},
	{"checkedEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;", "(Ljava/lang/Object;)Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticMethod(ProcessEnvironment$CheckedEntrySet, checkedEntry, $Map$Entry*, Object$*)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$CheckedEntrySet, clear, void)},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$CheckedEntrySet, contains, bool, Object$*)},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$CheckedEntrySet, isEmpty, bool)},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;>;", $PUBLIC, $virtualMethod(ProcessEnvironment$CheckedEntrySet, iterator, $Iterator*)},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$CheckedEntrySet, remove, bool, Object$*)},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$CheckedEntrySet, size, int32_t)},
	{}
};

$InnerClassInfo _ProcessEnvironment$CheckedEntrySet_InnerClassesInfo_[] = {
	{"java.lang.ProcessEnvironment$CheckedEntrySet", "java.lang.ProcessEnvironment", "CheckedEntrySet", $PRIVATE | $STATIC},
	{"java.lang.ProcessEnvironment$CheckedEntrySet$1", nullptr, nullptr, 0},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ProcessEnvironment$CheckedEntrySet_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ProcessEnvironment$CheckedEntrySet",
	"java.util.AbstractSet",
	nullptr,
	_ProcessEnvironment$CheckedEntrySet_FieldInfo_,
	_ProcessEnvironment$CheckedEntrySet_MethodInfo_,
	"Ljava/util/AbstractSet<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;>;",
	nullptr,
	_ProcessEnvironment$CheckedEntrySet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessEnvironment"
};

$Object* allocate$ProcessEnvironment$CheckedEntrySet($Class* clazz) {
	return $of($alloc(ProcessEnvironment$CheckedEntrySet));
}

void ProcessEnvironment$CheckedEntrySet::init$($Set* s) {
	$AbstractSet::init$();
	$set(this, s, s);
}

int32_t ProcessEnvironment$CheckedEntrySet::size() {
	return $nc(this->s)->size();
}

bool ProcessEnvironment$CheckedEntrySet::isEmpty() {
	return $nc(this->s)->isEmpty();
}

void ProcessEnvironment$CheckedEntrySet::clear() {
	$nc(this->s)->clear();
}

$Iterator* ProcessEnvironment$CheckedEntrySet::iterator() {
	return $new($ProcessEnvironment$CheckedEntrySet$1, this);
}

$Map$Entry* ProcessEnvironment$CheckedEntrySet::checkedEntry(Object$* o) {
	$init(ProcessEnvironment$CheckedEntrySet);
	$useLocalCurrentObjectStackCache();
	$var($Map$Entry, e, $cast($Map$Entry, o));
	$ProcessEnvironment::nonNullString($($nc(e)->getKey()));
	$ProcessEnvironment::nonNullString($($nc(e)->getValue()));
	return e;
}

bool ProcessEnvironment$CheckedEntrySet::contains(Object$* o) {
	return $nc(this->s)->contains($(checkedEntry(o)));
}

bool ProcessEnvironment$CheckedEntrySet::remove(Object$* o) {
	return $nc(this->s)->remove($(checkedEntry(o)));
}

ProcessEnvironment$CheckedEntrySet::ProcessEnvironment$CheckedEntrySet() {
}

$Class* ProcessEnvironment$CheckedEntrySet::load$($String* name, bool initialize) {
	$loadClass(ProcessEnvironment$CheckedEntrySet, name, initialize, &_ProcessEnvironment$CheckedEntrySet_ClassInfo_, allocate$ProcessEnvironment$CheckedEntrySet);
	return class$;
}

$Class* ProcessEnvironment$CheckedEntrySet::class$ = nullptr;

	} // lang
} // java