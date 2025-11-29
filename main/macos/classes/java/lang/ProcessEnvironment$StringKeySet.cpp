#include <java/lang/ProcessEnvironment$StringKeySet.h>

#include <java/lang/ProcessEnvironment$StringKeySet$1.h>
#include <java/lang/ProcessEnvironment$Variable.h>
#include <java/lang/ProcessEnvironment.h>
#include <java/util/AbstractSet.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessEnvironment$StringKeySet$1 = ::java::lang::ProcessEnvironment$StringKeySet$1;
using $ProcessEnvironment$Variable = ::java::lang::ProcessEnvironment$Variable;
using $AbstractSet = ::java::util::AbstractSet;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;

namespace java {
	namespace lang {

$FieldInfo _ProcessEnvironment$StringKeySet_FieldInfo_[] = {
	{"s", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/ProcessEnvironment$Variable;>;", $PRIVATE | $FINAL, $field(ProcessEnvironment$StringKeySet, s)},
	{}
};

$MethodInfo _ProcessEnvironment$StringKeySet_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Set;)V", "(Ljava/util/Set<Ljava/lang/ProcessEnvironment$Variable;>;)V", $PUBLIC, $method(static_cast<void(ProcessEnvironment$StringKeySet::*)($Set*)>(&ProcessEnvironment$StringKeySet::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/lang/String;>;", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ProcessEnvironment$StringKeySet_InnerClassesInfo_[] = {
	{"java.lang.ProcessEnvironment$StringKeySet", "java.lang.ProcessEnvironment", "StringKeySet", $PRIVATE | $STATIC},
	{"java.lang.ProcessEnvironment$StringKeySet$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProcessEnvironment$StringKeySet_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ProcessEnvironment$StringKeySet",
	"java.util.AbstractSet",
	nullptr,
	_ProcessEnvironment$StringKeySet_FieldInfo_,
	_ProcessEnvironment$StringKeySet_MethodInfo_,
	"Ljava/util/AbstractSet<Ljava/lang/String;>;",
	nullptr,
	_ProcessEnvironment$StringKeySet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessEnvironment"
};

$Object* allocate$ProcessEnvironment$StringKeySet($Class* clazz) {
	return $of($alloc(ProcessEnvironment$StringKeySet));
}

void ProcessEnvironment$StringKeySet::init$($Set* s) {
	$AbstractSet::init$();
	$set(this, s, s);
}

int32_t ProcessEnvironment$StringKeySet::size() {
	return $nc(this->s)->size();
}

bool ProcessEnvironment$StringKeySet::isEmpty() {
	return $nc(this->s)->isEmpty();
}

void ProcessEnvironment$StringKeySet::clear() {
	$nc(this->s)->clear();
}

$Iterator* ProcessEnvironment$StringKeySet::iterator() {
	return $new($ProcessEnvironment$StringKeySet$1, this);
}

bool ProcessEnvironment$StringKeySet::contains(Object$* o) {
	return $nc(this->s)->contains($($ProcessEnvironment$Variable::valueOfQueryOnly(o)));
}

bool ProcessEnvironment$StringKeySet::remove(Object$* o) {
	return $nc(this->s)->remove($($ProcessEnvironment$Variable::valueOfQueryOnly(o)));
}

ProcessEnvironment$StringKeySet::ProcessEnvironment$StringKeySet() {
}

$Class* ProcessEnvironment$StringKeySet::load$($String* name, bool initialize) {
	$loadClass(ProcessEnvironment$StringKeySet, name, initialize, &_ProcessEnvironment$StringKeySet_ClassInfo_, allocate$ProcessEnvironment$StringKeySet);
	return class$;
}

$Class* ProcessEnvironment$StringKeySet::class$ = nullptr;

	} // lang
} // java