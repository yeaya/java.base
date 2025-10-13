#include <java/util/ImmutableCollections$ListN.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/CollSer.h>
#include <java/util/ImmutableCollections$AbstractImmutableList.h>
#include <java/util/ImmutableCollections.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef IMM_LIST
#undef IMM_LIST_NULLS

using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Arrays = ::java::util::Arrays;
using $CollSer = ::java::util::CollSer;
using $ImmutableCollections = ::java::util::ImmutableCollections;
using $ImmutableCollections$AbstractImmutableList = ::java::util::ImmutableCollections$AbstractImmutableList;
using $Objects = ::java::util::Objects;

namespace java {
	namespace util {
$CompoundAttribute _ImmutableCollections$ListN_Annotations_[] = {
	{"Ljdk/internal/ValueBased;", nullptr},
	{}
};

$CompoundAttribute _ImmutableCollections$ListN_FieldAnnotations_elements[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$CompoundAttribute _ImmutableCollections$ListN_FieldAnnotations_allowNulls[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};


$FieldInfo _ImmutableCollections$ListN_FieldInfo_[] = {
	{"elements", "[Ljava/lang/Object;", "[TE;", $PRIVATE | $FINAL, $field(ImmutableCollections$ListN, elements), _ImmutableCollections$ListN_FieldAnnotations_elements},
	{"allowNulls", "Z", nullptr, $PRIVATE | $FINAL, $field(ImmutableCollections$ListN, allowNulls), _ImmutableCollections$ListN_FieldAnnotations_allowNulls},
	{}
};

$MethodInfo _ImmutableCollections$ListN_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "([Ljava/lang/Object;Z)V", "([TE;Z)V", $PRIVATE, $method(static_cast<void(ImmutableCollections$ListN::*)($ObjectArray*,bool)>(&ImmutableCollections$ListN::init$))},
	{"get", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"indexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"lastIndexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ImmutableCollections$ListN::*)($ObjectInputStream*)>(&ImmutableCollections$ListN::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"size", "()I", nullptr, $PUBLIC},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(ImmutableCollections$ListN::*)()>(&ImmutableCollections$ListN::writeReplace))},
	{}
};

$InnerClassInfo _ImmutableCollections$ListN_InnerClassesInfo_[] = {
	{"java.util.ImmutableCollections$ListN", "java.util.ImmutableCollections", "ListN", $STATIC | $FINAL},
	{"java.util.ImmutableCollections$AbstractImmutableList", "java.util.ImmutableCollections", "AbstractImmutableList", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ImmutableCollections$ListN_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.ImmutableCollections$ListN",
	"java.util.ImmutableCollections$AbstractImmutableList",
	"java.io.Serializable",
	_ImmutableCollections$ListN_FieldInfo_,
	_ImmutableCollections$ListN_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/ImmutableCollections$AbstractImmutableList<TE;>;Ljava/io/Serializable;",
	nullptr,
	_ImmutableCollections$ListN_InnerClassesInfo_,
	_ImmutableCollections$ListN_Annotations_,
	nullptr,
	nullptr,
	"java.util.ImmutableCollections"
};

$Object* allocate$ImmutableCollections$ListN($Class* clazz) {
	return $of($alloc(ImmutableCollections$ListN));
}

bool ImmutableCollections$ListN::equals(Object$* o) {
	 return this->$ImmutableCollections$AbstractImmutableList::equals(o);
}

int32_t ImmutableCollections$ListN::hashCode() {
	 return this->$ImmutableCollections$AbstractImmutableList::hashCode();
}

$String* ImmutableCollections$ListN::toString() {
	 return this->$ImmutableCollections$AbstractImmutableList::toString();
}

$Object* ImmutableCollections$ListN::clone() {
	 return this->$ImmutableCollections$AbstractImmutableList::clone();
}

void ImmutableCollections$ListN::finalize() {
	this->$ImmutableCollections$AbstractImmutableList::finalize();
}

void ImmutableCollections$ListN::init$($ObjectArray* elements, bool allowNulls) {
	$ImmutableCollections$AbstractImmutableList::init$();
	$set(this, elements, elements);
	this->allowNulls = allowNulls;
}

bool ImmutableCollections$ListN::isEmpty() {
	return $nc(this->elements)->length == 0;
}

int32_t ImmutableCollections$ListN::size() {
	return $nc(this->elements)->length;
}

$Object* ImmutableCollections$ListN::get(int32_t index) {
	return $of($nc(this->elements)->get(index));
}

void ImmutableCollections$ListN::readObject($ObjectInputStream* in) {
	$throwNew($InvalidObjectException, "not serial proxy"_s);
}

$Object* ImmutableCollections$ListN::writeReplace() {
	return $of($new($CollSer, this->allowNulls ? $CollSer::IMM_LIST_NULLS : $CollSer::IMM_LIST, this->elements));
}

$ObjectArray* ImmutableCollections$ListN::toArray() {
	return $Arrays::copyOf(this->elements, $nc(this->elements)->length);
}

$ObjectArray* ImmutableCollections$ListN::toArray($ObjectArray* a) {
	int32_t size = $nc(this->elements)->length;
	if ($nc(a)->length < size) {
		return $Arrays::copyOf(this->elements, size, $of(a)->getClass());
	}
	$System::arraycopy(this->elements, 0, a, 0, size);
	if ($nc(a)->length > size) {
		a->set(size, nullptr);
	}
	return a;
}

int32_t ImmutableCollections$ListN::indexOf(Object$* o) {
	if (!this->allowNulls && o == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($ObjectArray, es, this->elements);
	for (int32_t i = 0; i < $nc(es)->length; ++i) {
		if ($Objects::equals(o, es->get(i))) {
			return i;
		}
	}
	return -1;
}

int32_t ImmutableCollections$ListN::lastIndexOf(Object$* o) {
	if (!this->allowNulls && o == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($ObjectArray, es, this->elements);
	for (int32_t i = $nc(es)->length - 1; i >= 0; --i) {
		if ($Objects::equals(o, es->get(i))) {
			return i;
		}
	}
	return -1;
}

ImmutableCollections$ListN::ImmutableCollections$ListN() {
}

$Class* ImmutableCollections$ListN::load$($String* name, bool initialize) {
	$loadClass(ImmutableCollections$ListN, name, initialize, &_ImmutableCollections$ListN_ClassInfo_, allocate$ImmutableCollections$ListN);
	return class$;
}

$Class* ImmutableCollections$ListN::class$ = nullptr;

	} // util
} // java