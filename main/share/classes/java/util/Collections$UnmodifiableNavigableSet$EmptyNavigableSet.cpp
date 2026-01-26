#include <java/util/Collections$UnmodifiableNavigableSet$EmptyNavigableSet.h>

#include <java/util/Collections$UnmodifiableNavigableSet.h>
#include <java/util/NavigableSet.h>
#include <java/util/TreeSet.h>
#include <jcpp.h>

#undef EMPTY_NAVIGABLE_SET

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections$UnmodifiableNavigableSet = ::java::util::Collections$UnmodifiableNavigableSet;
using $NavigableSet = ::java::util::NavigableSet;
using $TreeSet = ::java::util::TreeSet;

namespace java {
	namespace util {

$FieldInfo _Collections$UnmodifiableNavigableSet$EmptyNavigableSet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$UnmodifiableNavigableSet$EmptyNavigableSet, serialVersionUID)},
	{}
};

$MethodInfo _Collections$UnmodifiableNavigableSet$EmptyNavigableSet_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Collections$UnmodifiableNavigableSet$EmptyNavigableSet, init$, void)},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(Collections$UnmodifiableNavigableSet$EmptyNavigableSet, readResolve, $Object*)},
	{}
};

$InnerClassInfo _Collections$UnmodifiableNavigableSet$EmptyNavigableSet_InnerClassesInfo_[] = {
	{"java.util.Collections$UnmodifiableNavigableSet", "java.util.Collections", "UnmodifiableNavigableSet", $STATIC},
	{"java.util.Collections$UnmodifiableNavigableSet$EmptyNavigableSet", "java.util.Collections$UnmodifiableNavigableSet", "EmptyNavigableSet", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Collections$UnmodifiableNavigableSet$EmptyNavigableSet_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$UnmodifiableNavigableSet$EmptyNavigableSet",
	"java.util.Collections$UnmodifiableNavigableSet",
	nullptr,
	_Collections$UnmodifiableNavigableSet$EmptyNavigableSet_FieldInfo_,
	_Collections$UnmodifiableNavigableSet$EmptyNavigableSet_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/Collections$UnmodifiableNavigableSet<TE;>;Ljava/io/Serializable;",
	nullptr,
	_Collections$UnmodifiableNavigableSet$EmptyNavigableSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$UnmodifiableNavigableSet$EmptyNavigableSet($Class* clazz) {
	return $of($alloc(Collections$UnmodifiableNavigableSet$EmptyNavigableSet));
}

void Collections$UnmodifiableNavigableSet$EmptyNavigableSet::init$() {
	$Collections$UnmodifiableNavigableSet::init$($$new($TreeSet));
}

$Object* Collections$UnmodifiableNavigableSet$EmptyNavigableSet::readResolve() {
	$init($Collections$UnmodifiableNavigableSet);
	return $of($Collections$UnmodifiableNavigableSet::EMPTY_NAVIGABLE_SET);
}

Collections$UnmodifiableNavigableSet$EmptyNavigableSet::Collections$UnmodifiableNavigableSet$EmptyNavigableSet() {
}

$Class* Collections$UnmodifiableNavigableSet$EmptyNavigableSet::load$($String* name, bool initialize) {
	$loadClass(Collections$UnmodifiableNavigableSet$EmptyNavigableSet, name, initialize, &_Collections$UnmodifiableNavigableSet$EmptyNavigableSet_ClassInfo_, allocate$Collections$UnmodifiableNavigableSet$EmptyNavigableSet);
	return class$;
}

$Class* Collections$UnmodifiableNavigableSet$EmptyNavigableSet::class$ = nullptr;

	} // util
} // java