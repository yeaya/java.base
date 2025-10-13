#include <java/util/ImmutableCollections$List12.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/CollSer.h>
#include <java/util/ImmutableCollections$AbstractImmutableList.h>
#include <java/util/ImmutableCollections.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef EMPTY
#undef IMM_LIST

using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $1Array = ::java::lang::reflect::Array;
using $CollSer = ::java::util::CollSer;
using $ImmutableCollections = ::java::util::ImmutableCollections;
using $ImmutableCollections$AbstractImmutableList = ::java::util::ImmutableCollections$AbstractImmutableList;
using $Objects = ::java::util::Objects;

namespace java {
	namespace util {
$CompoundAttribute _ImmutableCollections$List12_Annotations_[] = {
	{"Ljdk/internal/ValueBased;", nullptr},
	{}
};

$CompoundAttribute _ImmutableCollections$List12_FieldAnnotations_e0[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$CompoundAttribute _ImmutableCollections$List12_FieldAnnotations_e1[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};


$FieldInfo _ImmutableCollections$List12_FieldInfo_[] = {
	{"e0", "Ljava/lang/Object;", "TE;", $PRIVATE | $FINAL, $field(ImmutableCollections$List12, e0), _ImmutableCollections$List12_FieldAnnotations_e0},
	{"e1", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(ImmutableCollections$List12, e1), _ImmutableCollections$List12_FieldAnnotations_e1},
	{}
};

$MethodInfo _ImmutableCollections$List12_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/lang/Object;)V", "(TE;)V", 0, $method(static_cast<void(ImmutableCollections$List12::*)(Object$*)>(&ImmutableCollections$List12::init$))},
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TE;TE;)V", 0, $method(static_cast<void(ImmutableCollections$List12::*)(Object$*,Object$*)>(&ImmutableCollections$List12::init$))},
	{"get", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"indexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"lastIndexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ImmutableCollections$List12::*)($ObjectInputStream*)>(&ImmutableCollections$List12::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"size", "()I", nullptr, $PUBLIC},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(ImmutableCollections$List12::*)()>(&ImmutableCollections$List12::writeReplace))},
	{}
};

$InnerClassInfo _ImmutableCollections$List12_InnerClassesInfo_[] = {
	{"java.util.ImmutableCollections$List12", "java.util.ImmutableCollections", "List12", $STATIC | $FINAL},
	{"java.util.ImmutableCollections$AbstractImmutableList", "java.util.ImmutableCollections", "AbstractImmutableList", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ImmutableCollections$List12_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.ImmutableCollections$List12",
	"java.util.ImmutableCollections$AbstractImmutableList",
	"java.io.Serializable",
	_ImmutableCollections$List12_FieldInfo_,
	_ImmutableCollections$List12_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/ImmutableCollections$AbstractImmutableList<TE;>;Ljava/io/Serializable;",
	nullptr,
	_ImmutableCollections$List12_InnerClassesInfo_,
	_ImmutableCollections$List12_Annotations_,
	nullptr,
	nullptr,
	"java.util.ImmutableCollections"
};

$Object* allocate$ImmutableCollections$List12($Class* clazz) {
	return $of($alloc(ImmutableCollections$List12));
}

bool ImmutableCollections$List12::equals(Object$* o) {
	 return this->$ImmutableCollections$AbstractImmutableList::equals(o);
}

int32_t ImmutableCollections$List12::hashCode() {
	 return this->$ImmutableCollections$AbstractImmutableList::hashCode();
}

$String* ImmutableCollections$List12::toString() {
	 return this->$ImmutableCollections$AbstractImmutableList::toString();
}

$Object* ImmutableCollections$List12::clone() {
	 return this->$ImmutableCollections$AbstractImmutableList::clone();
}

void ImmutableCollections$List12::finalize() {
	this->$ImmutableCollections$AbstractImmutableList::finalize();
}

void ImmutableCollections$List12::init$(Object$* e0) {
	$ImmutableCollections$AbstractImmutableList::init$();
	$set(this, e0, $Objects::requireNonNull(e0));
	$init($ImmutableCollections);
	$set(this, e1, $ImmutableCollections::EMPTY);
}

void ImmutableCollections$List12::init$(Object$* e0, Object$* e1) {
	$ImmutableCollections$AbstractImmutableList::init$();
	$set(this, e0, $Objects::requireNonNull(e0));
	$set(this, e1, $Objects::requireNonNull(e1));
}

int32_t ImmutableCollections$List12::size() {
	$init($ImmutableCollections);
	return !$equals(this->e1, $ImmutableCollections::EMPTY) ? 2 : 1;
}

bool ImmutableCollections$List12::isEmpty() {
	return false;
}

$Object* ImmutableCollections$List12::get(int32_t index) {
	if (index == 0) {
		return $of(this->e0);
	} else {
		$init($ImmutableCollections);
		if (index == 1 && !$equals(this->e1, $ImmutableCollections::EMPTY)) {
			return $of(this->e1);
		}
	}
	$throw($(outOfBounds(index)));
}

int32_t ImmutableCollections$List12::indexOf(Object$* o) {
	$Objects::requireNonNull(o);
	if ($of(o)->equals(this->e0)) {
		return 0;
	} else {
		$init($ImmutableCollections);
		if (!$equals(this->e1, $ImmutableCollections::EMPTY) && $of(o)->equals(this->e1)) {
			return 1;
		} else {
			return -1;
		}
	}
}

int32_t ImmutableCollections$List12::lastIndexOf(Object$* o) {
	$Objects::requireNonNull(o);
	$init($ImmutableCollections);
	if (!$equals(this->e1, $ImmutableCollections::EMPTY) && $of(o)->equals(this->e1)) {
		return 1;
	} else if ($of(o)->equals(this->e0)) {
		return 0;
	} else {
		return -1;
	}
}

void ImmutableCollections$List12::readObject($ObjectInputStream* in) {
	$throwNew($InvalidObjectException, "not serial proxy"_s);
}

$Object* ImmutableCollections$List12::writeReplace() {
	$init($ImmutableCollections);
	if ($equals(this->e1, $ImmutableCollections::EMPTY)) {
		return $of($new($CollSer, $CollSer::IMM_LIST, $$new($ObjectArray, {this->e0})));
	} else {
		return $of($new($CollSer, $CollSer::IMM_LIST, $$new($ObjectArray, {
			this->e0,
			this->e1
		})));
	}
}

$ObjectArray* ImmutableCollections$List12::toArray() {
	$init($ImmutableCollections);
	if ($equals(this->e1, $ImmutableCollections::EMPTY)) {
		return $new($ObjectArray, {this->e0});
	} else {
		return $new($ObjectArray, {
			this->e0,
			this->e1
		});
	}
}

$ObjectArray* ImmutableCollections$List12::toArray($ObjectArray* a) {
	int32_t size = this->size();
	$var($ObjectArray, array, $nc(a)->length >= size ? a : $cast($ObjectArray, $1Array::newInstance($nc($of(a))->getClass()->getComponentType(), size)));
	$nc(array)->set(0, this->e0);
	if (size == 2) {
		array->set(1, this->e1);
	}
	if (array->length > size) {
		array->set(size, nullptr);
	}
	return array;
}

ImmutableCollections$List12::ImmutableCollections$List12() {
}

$Class* ImmutableCollections$List12::load$($String* name, bool initialize) {
	$loadClass(ImmutableCollections$List12, name, initialize, &_ImmutableCollections$List12_ClassInfo_, allocate$ImmutableCollections$List12);
	return class$;
}

$Class* ImmutableCollections$List12::class$ = nullptr;

	} // util
} // java