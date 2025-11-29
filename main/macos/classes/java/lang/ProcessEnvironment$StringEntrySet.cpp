#include <java/lang/ProcessEnvironment$StringEntrySet.h>

#include <java/lang/ProcessEnvironment$StringEntry.h>
#include <java/lang/ProcessEnvironment$StringEntrySet$1.h>
#include <java/lang/ProcessEnvironment$StringEntrySet$2.h>
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
using $ProcessEnvironment$StringEntry = ::java::lang::ProcessEnvironment$StringEntry;
using $ProcessEnvironment$StringEntrySet$1 = ::java::lang::ProcessEnvironment$StringEntrySet$1;
using $ProcessEnvironment$StringEntrySet$2 = ::java::lang::ProcessEnvironment$StringEntrySet$2;
using $AbstractSet = ::java::util::AbstractSet;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;

namespace java {
	namespace lang {

$FieldInfo _ProcessEnvironment$StringEntrySet_FieldInfo_[] = {
	{"s", "Ljava/util/Set;", "Ljava/util/Set<Ljava/util/Map$Entry<Ljava/lang/ProcessEnvironment$Variable;Ljava/lang/ProcessEnvironment$Value;>;>;", $PRIVATE | $FINAL, $field(ProcessEnvironment$StringEntrySet, s)},
	{}
};

$MethodInfo _ProcessEnvironment$StringEntrySet_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Set;)V", "(Ljava/util/Set<Ljava/util/Map$Entry<Ljava/lang/ProcessEnvironment$Variable;Ljava/lang/ProcessEnvironment$Value;>;>;)V", $PUBLIC, $method(static_cast<void(ProcessEnvironment$StringEntrySet::*)($Set*)>(&ProcessEnvironment$StringEntrySet::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;>;", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"vvEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;", "(Ljava/lang/Object;)Ljava/util/Map$Entry<Ljava/lang/ProcessEnvironment$Variable;Ljava/lang/ProcessEnvironment$Value;>;", $PRIVATE | $STATIC, $method(static_cast<$Map$Entry*(*)(Object$*)>(&ProcessEnvironment$StringEntrySet::vvEntry))},
	{}
};

$InnerClassInfo _ProcessEnvironment$StringEntrySet_InnerClassesInfo_[] = {
	{"java.lang.ProcessEnvironment$StringEntrySet", "java.lang.ProcessEnvironment", "StringEntrySet", $PRIVATE | $STATIC},
	{"java.lang.ProcessEnvironment$StringEntrySet$2", nullptr, nullptr, 0},
	{"java.lang.ProcessEnvironment$StringEntrySet$1", nullptr, nullptr, 0},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ProcessEnvironment$StringEntrySet_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ProcessEnvironment$StringEntrySet",
	"java.util.AbstractSet",
	nullptr,
	_ProcessEnvironment$StringEntrySet_FieldInfo_,
	_ProcessEnvironment$StringEntrySet_MethodInfo_,
	"Ljava/util/AbstractSet<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;>;",
	nullptr,
	_ProcessEnvironment$StringEntrySet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessEnvironment"
};

$Object* allocate$ProcessEnvironment$StringEntrySet($Class* clazz) {
	return $of($alloc(ProcessEnvironment$StringEntrySet));
}

void ProcessEnvironment$StringEntrySet::init$($Set* s) {
	$AbstractSet::init$();
	$set(this, s, s);
}

int32_t ProcessEnvironment$StringEntrySet::size() {
	return $nc(this->s)->size();
}

bool ProcessEnvironment$StringEntrySet::isEmpty() {
	return $nc(this->s)->isEmpty();
}

void ProcessEnvironment$StringEntrySet::clear() {
	$nc(this->s)->clear();
}

$Iterator* ProcessEnvironment$StringEntrySet::iterator() {
	return $new($ProcessEnvironment$StringEntrySet$1, this);
}

$Map$Entry* ProcessEnvironment$StringEntrySet::vvEntry(Object$* o) {
	$init(ProcessEnvironment$StringEntrySet);
	if ($instanceOf($ProcessEnvironment$StringEntry, o)) {
		return $nc(($cast($ProcessEnvironment$StringEntry, o)))->e;
	}
	return $new($ProcessEnvironment$StringEntrySet$2, o);
}

bool ProcessEnvironment$StringEntrySet::contains(Object$* o) {
	return $nc(this->s)->contains($(vvEntry(o)));
}

bool ProcessEnvironment$StringEntrySet::remove(Object$* o) {
	return $nc(this->s)->remove($(vvEntry(o)));
}

bool ProcessEnvironment$StringEntrySet::equals(Object$* o) {
	return $instanceOf(ProcessEnvironment$StringEntrySet, o) && $nc(this->s)->equals($nc(($cast(ProcessEnvironment$StringEntrySet, o)))->s);
}

int32_t ProcessEnvironment$StringEntrySet::hashCode() {
	return $nc(this->s)->hashCode();
}

ProcessEnvironment$StringEntrySet::ProcessEnvironment$StringEntrySet() {
}

$Class* ProcessEnvironment$StringEntrySet::load$($String* name, bool initialize) {
	$loadClass(ProcessEnvironment$StringEntrySet, name, initialize, &_ProcessEnvironment$StringEntrySet_ClassInfo_, allocate$ProcessEnvironment$StringEntrySet);
	return class$;
}

$Class* ProcessEnvironment$StringEntrySet::class$ = nullptr;

	} // lang
} // java