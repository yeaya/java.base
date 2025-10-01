#include <sun/nio/ch/Util$2.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <sun/nio/ch/Util.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $Util = ::sun::nio::ch::Util;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _Util$2_FieldInfo_[] = {
	{"val$s", "Ljava/util/Set;", nullptr, $FINAL | $SYNTHETIC, $field(Util$2, val$s)},
	{}
};

$MethodInfo _Util$2_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Set;)V", "()V", 0, $method(static_cast<void(Util$2::*)($Set*)>(&Util$2::init$))},
	{"add", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC},
	{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<+TE;>;)Z", $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"retainAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Util$2_EnclosingMethodInfo_ = {
	"sun.nio.ch.Util",
	"ungrowableSet",
	"(Ljava/util/Set;)Ljava/util/Set;"
};

$InnerClassInfo _Util$2_InnerClassesInfo_[] = {
	{"sun.nio.ch.Util$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Util$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.Util$2",
	"java.lang.Object",
	"java.util.Set",
	_Util$2_FieldInfo_,
	_Util$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Set<TE;>;",
	&_Util$2_EnclosingMethodInfo_,
	_Util$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.Util"
};

$Object* allocate$Util$2($Class* clazz) {
	return $of($alloc(Util$2));
}

void Util$2::init$($Set* val$s) {
	$set(this, val$s, val$s);
}

int32_t Util$2::size() {
	return $nc(this->val$s)->size();
}

bool Util$2::isEmpty() {
	return $nc(this->val$s)->isEmpty();
}

bool Util$2::contains(Object$* o) {
	return $nc(this->val$s)->contains(o);
}

$ObjectArray* Util$2::toArray() {
	return $nc(this->val$s)->toArray();
}

$ObjectArray* Util$2::toArray($ObjectArray* a) {
	return $nc(this->val$s)->toArray(a);
}

$String* Util$2::toString() {
	return $nc($of(this->val$s))->toString();
}

$Iterator* Util$2::iterator() {
	return $nc(this->val$s)->iterator();
}

bool Util$2::equals(Object$* o) {
	return $nc(this->val$s)->equals(o);
}

int32_t Util$2::hashCode() {
	return $nc(this->val$s)->hashCode();
}

void Util$2::clear() {
	$nc(this->val$s)->clear();
}

bool Util$2::remove(Object$* o) {
	return $nc(this->val$s)->remove(o);
}

bool Util$2::containsAll($Collection* coll) {
	return $nc(this->val$s)->containsAll(coll);
}

bool Util$2::removeAll($Collection* coll) {
	return $nc(this->val$s)->removeAll(coll);
}

bool Util$2::retainAll($Collection* coll) {
	return $nc(this->val$s)->retainAll(coll);
}

bool Util$2::add(Object$* o) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool Util$2::addAll($Collection* coll) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

Util$2::Util$2() {
}

$Class* Util$2::load$($String* name, bool initialize) {
	$loadClass(Util$2, name, initialize, &_Util$2_ClassInfo_, allocate$Util$2);
	return class$;
}

$Class* Util$2::class$ = nullptr;

		} // ch
	} // nio
} // sun