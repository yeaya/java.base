#include <java/lang/ProcessEnvironment$CheckedKeySet.h>

#include <java/lang/ProcessEnvironment.h>
#include <java/util/AbstractSet.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessEnvironment = ::java::lang::ProcessEnvironment;
using $AbstractSet = ::java::util::AbstractSet;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;

namespace java {
	namespace lang {

$FieldInfo _ProcessEnvironment$CheckedKeySet_FieldInfo_[] = {
	{"s", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(ProcessEnvironment$CheckedKeySet, s)},
	{}
};

$MethodInfo _ProcessEnvironment$CheckedKeySet_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Set;)V", "(Ljava/util/Set<Ljava/lang/String;>;)V", $PUBLIC, $method(static_cast<void(ProcessEnvironment$CheckedKeySet::*)($Set*)>(&ProcessEnvironment$CheckedKeySet::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/lang/String;>;", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ProcessEnvironment$CheckedKeySet_InnerClassesInfo_[] = {
	{"java.lang.ProcessEnvironment$CheckedKeySet", "java.lang.ProcessEnvironment", "CheckedKeySet", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ProcessEnvironment$CheckedKeySet_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ProcessEnvironment$CheckedKeySet",
	"java.util.AbstractSet",
	nullptr,
	_ProcessEnvironment$CheckedKeySet_FieldInfo_,
	_ProcessEnvironment$CheckedKeySet_MethodInfo_,
	"Ljava/util/AbstractSet<Ljava/lang/String;>;",
	nullptr,
	_ProcessEnvironment$CheckedKeySet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessEnvironment"
};

$Object* allocate$ProcessEnvironment$CheckedKeySet($Class* clazz) {
	return $of($alloc(ProcessEnvironment$CheckedKeySet));
}

void ProcessEnvironment$CheckedKeySet::init$($Set* s) {
	$AbstractSet::init$();
	$set(this, s, s);
}

int32_t ProcessEnvironment$CheckedKeySet::size() {
	return $nc(this->s)->size();
}

bool ProcessEnvironment$CheckedKeySet::isEmpty() {
	return $nc(this->s)->isEmpty();
}

void ProcessEnvironment$CheckedKeySet::clear() {
	$nc(this->s)->clear();
}

$Iterator* ProcessEnvironment$CheckedKeySet::iterator() {
	return $nc(this->s)->iterator();
}

bool ProcessEnvironment$CheckedKeySet::contains(Object$* o) {
	return $nc(this->s)->contains($($ProcessEnvironment::nonNullString(o)));
}

bool ProcessEnvironment$CheckedKeySet::remove(Object$* o) {
	return $nc(this->s)->remove($($ProcessEnvironment::nonNullString(o)));
}

ProcessEnvironment$CheckedKeySet::ProcessEnvironment$CheckedKeySet() {
}

$Class* ProcessEnvironment$CheckedKeySet::load$($String* name, bool initialize) {
	$loadClass(ProcessEnvironment$CheckedKeySet, name, initialize, &_ProcessEnvironment$CheckedKeySet_ClassInfo_, allocate$ProcessEnvironment$CheckedKeySet);
	return class$;
}

$Class* ProcessEnvironment$CheckedKeySet::class$ = nullptr;

	} // lang
} // java