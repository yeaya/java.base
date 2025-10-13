#include <java/util/ImmutableCollections$Set12.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/CollSer.h>
#include <java/util/ImmutableCollections$AbstractImmutableSet.h>
#include <java/util/ImmutableCollections$Set12$1.h>
#include <java/util/ImmutableCollections.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef EMPTY
#undef IMM_SET
#undef REVERSE

using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Array = ::java::lang::reflect::Array;
using $CollSer = ::java::util::CollSer;
using $ImmutableCollections = ::java::util::ImmutableCollections;
using $ImmutableCollections$AbstractImmutableSet = ::java::util::ImmutableCollections$AbstractImmutableSet;
using $ImmutableCollections$Set12$1 = ::java::util::ImmutableCollections$Set12$1;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;

namespace java {
	namespace util {
$CompoundAttribute _ImmutableCollections$Set12_Annotations_[] = {
	{"Ljdk/internal/ValueBased;", nullptr},
	{}
};

$CompoundAttribute _ImmutableCollections$Set12_FieldAnnotations_e0[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$CompoundAttribute _ImmutableCollections$Set12_FieldAnnotations_e1[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};


$FieldInfo _ImmutableCollections$Set12_FieldInfo_[] = {
	{"e0", "Ljava/lang/Object;", "TE;", $PRIVATE | $FINAL, $field(ImmutableCollections$Set12, e0), _ImmutableCollections$Set12_FieldAnnotations_e0},
	{"e1", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(ImmutableCollections$Set12, e1), _ImmutableCollections$Set12_FieldAnnotations_e1},
	{}
};

$MethodInfo _ImmutableCollections$Set12_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/Object;)V", "(TE;)V", 0, $method(static_cast<void(ImmutableCollections$Set12::*)(Object$*)>(&ImmutableCollections$Set12::init$))},
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TE;TE;)V", 0, $method(static_cast<void(ImmutableCollections$Set12::*)(Object$*,Object$*)>(&ImmutableCollections$Set12::init$))},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ImmutableCollections$Set12::*)($ObjectInputStream*)>(&ImmutableCollections$Set12::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"size", "()I", nullptr, $PUBLIC},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(ImmutableCollections$Set12::*)()>(&ImmutableCollections$Set12::writeReplace))},
	{}
};

$InnerClassInfo _ImmutableCollections$Set12_InnerClassesInfo_[] = {
	{"java.util.ImmutableCollections$Set12", "java.util.ImmutableCollections", "Set12", $STATIC | $FINAL},
	{"java.util.ImmutableCollections$AbstractImmutableSet", "java.util.ImmutableCollections", "AbstractImmutableSet", $STATIC | $ABSTRACT},
	{"java.util.ImmutableCollections$Set12$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ImmutableCollections$Set12_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.ImmutableCollections$Set12",
	"java.util.ImmutableCollections$AbstractImmutableSet",
	"java.io.Serializable",
	_ImmutableCollections$Set12_FieldInfo_,
	_ImmutableCollections$Set12_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/ImmutableCollections$AbstractImmutableSet<TE;>;Ljava/io/Serializable;",
	nullptr,
	_ImmutableCollections$Set12_InnerClassesInfo_,
	_ImmutableCollections$Set12_Annotations_,
	nullptr,
	nullptr,
	"java.util.ImmutableCollections"
};

$Object* allocate$ImmutableCollections$Set12($Class* clazz) {
	return $of($alloc(ImmutableCollections$Set12));
}

bool ImmutableCollections$Set12::equals(Object$* o) {
	 return this->$ImmutableCollections$AbstractImmutableSet::equals(o);
}

$String* ImmutableCollections$Set12::toString() {
	 return this->$ImmutableCollections$AbstractImmutableSet::toString();
}

$Object* ImmutableCollections$Set12::clone() {
	 return this->$ImmutableCollections$AbstractImmutableSet::clone();
}

void ImmutableCollections$Set12::finalize() {
	this->$ImmutableCollections$AbstractImmutableSet::finalize();
}

void ImmutableCollections$Set12::init$(Object$* e0) {
	$ImmutableCollections$AbstractImmutableSet::init$();
	$set(this, e0, $Objects::requireNonNull(e0));
	$init($ImmutableCollections);
	$set(this, e1, $ImmutableCollections::EMPTY);
}

void ImmutableCollections$Set12::init$(Object$* e0, Object$* e1) {
	$ImmutableCollections$AbstractImmutableSet::init$();
	if ($nc($of(e0))->equals($Objects::requireNonNull(e1))) {
		$throwNew($IllegalArgumentException, $$str({"duplicate element: "_s, e0}));
	}
	$set(this, e0, e0);
	$set(this, e1, e1);
}

int32_t ImmutableCollections$Set12::size() {
	$init($ImmutableCollections);
	return ($equals(this->e1, $ImmutableCollections::EMPTY)) ? 1 : 2;
}

bool ImmutableCollections$Set12::isEmpty() {
	return false;
}

bool ImmutableCollections$Set12::contains(Object$* o) {
	bool var$0 = $nc($of(o))->equals(this->e0);
	return var$0 || $nc($of(this->e1))->equals(o);
}

int32_t ImmutableCollections$Set12::hashCode() {
	int32_t var$0 = $nc($of(this->e0))->hashCode();
	$init($ImmutableCollections);
	return var$0 + ($equals(this->e1, $ImmutableCollections::EMPTY) ? 0 : $nc($of(this->e1))->hashCode());
}

$Iterator* ImmutableCollections$Set12::iterator() {
	return $new($ImmutableCollections$Set12$1, this);
}

void ImmutableCollections$Set12::readObject($ObjectInputStream* in) {
	$throwNew($InvalidObjectException, "not serial proxy"_s);
}

$Object* ImmutableCollections$Set12::writeReplace() {
	$init($ImmutableCollections);
	if ($equals(this->e1, $ImmutableCollections::EMPTY)) {
		return $of($new($CollSer, $CollSer::IMM_SET, $$new($ObjectArray, {this->e0})));
	} else {
		return $of($new($CollSer, $CollSer::IMM_SET, $$new($ObjectArray, {
			this->e0,
			this->e1
		})));
	}
}

$ObjectArray* ImmutableCollections$Set12::toArray() {
	$init($ImmutableCollections);
	if ($equals(this->e1, $ImmutableCollections::EMPTY)) {
		return $new($ObjectArray, {this->e0});
	} else {
		if ($ImmutableCollections::REVERSE) {
			return $new($ObjectArray, {
				this->e1,
				this->e0
			});
		} else {
			return $new($ObjectArray, {
				this->e0,
				this->e1
			});
		}
	}
}

$ObjectArray* ImmutableCollections$Set12::toArray($ObjectArray* a) {
	int32_t size = this->size();
	$var($ObjectArray, array, $nc(a)->length >= size ? a : $cast($ObjectArray, $1Array::newInstance($nc($of(a))->getClass()->getComponentType(), size)));
	if (size == 1) {
		$nc(array)->set(0, this->e0);
	} else {
		$init($ImmutableCollections);
		if ($ImmutableCollections::REVERSE) {
			$nc(array)->set(0, this->e1);
			array->set(1, this->e0);
		} else {
			$nc(array)->set(0, this->e0);
			array->set(1, this->e1);
		}
	}
	if ($nc(array)->length > size) {
		array->set(size, nullptr);
	}
	return array;
}

ImmutableCollections$Set12::ImmutableCollections$Set12() {
}

$Class* ImmutableCollections$Set12::load$($String* name, bool initialize) {
	$loadClass(ImmutableCollections$Set12, name, initialize, &_ImmutableCollections$Set12_ClassInfo_, allocate$ImmutableCollections$Set12);
	return class$;
}

$Class* ImmutableCollections$Set12::class$ = nullptr;

	} // util
} // java