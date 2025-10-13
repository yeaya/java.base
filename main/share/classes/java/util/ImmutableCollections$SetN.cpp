#include <java/util/ImmutableCollections$SetN.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/CollSer.h>
#include <java/util/ImmutableCollections$AbstractImmutableSet.h>
#include <java/util/ImmutableCollections$SetN$SetNIterator.h>
#include <java/util/ImmutableCollections.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef IMM_SET

using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Array = ::java::lang::reflect::Array;
using $CollSer = ::java::util::CollSer;
using $ImmutableCollections = ::java::util::ImmutableCollections;
using $ImmutableCollections$AbstractImmutableSet = ::java::util::ImmutableCollections$AbstractImmutableSet;
using $ImmutableCollections$SetN$SetNIterator = ::java::util::ImmutableCollections$SetN$SetNIterator;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;

namespace java {
	namespace util {
$CompoundAttribute _ImmutableCollections$SetN_Annotations_[] = {
	{"Ljdk/internal/ValueBased;", nullptr},
	{}
};

$CompoundAttribute _ImmutableCollections$SetN_FieldAnnotations_elements[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$CompoundAttribute _ImmutableCollections$SetN_FieldAnnotations_size[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$CompoundAttribute _ImmutableCollections$SetN_MethodAnnotations_init$0[] = {
	{"Ljava/lang/SafeVarargs;", nullptr},
	{}
};


$FieldInfo _ImmutableCollections$SetN_FieldInfo_[] = {
	{"elements", "[Ljava/lang/Object;", "[TE;", $FINAL, $field(ImmutableCollections$SetN, elements), _ImmutableCollections$SetN_FieldAnnotations_elements},
	{"size", "I", nullptr, $FINAL, $field(ImmutableCollections$SetN, size$), _ImmutableCollections$SetN_FieldAnnotations_size},
	{}
};

$MethodInfo _ImmutableCollections$SetN_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "([Ljava/lang/Object;)V", "([TE;)V", $TRANSIENT, $method(static_cast<void(ImmutableCollections$SetN::*)($ObjectArray*)>(&ImmutableCollections$SetN::init$)), nullptr, nullptr, _ImmutableCollections$SetN_MethodAnnotations_init$0},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"probe", "(Ljava/lang/Object;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ImmutableCollections$SetN::*)(Object$*)>(&ImmutableCollections$SetN::probe))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ImmutableCollections$SetN::*)($ObjectInputStream*)>(&ImmutableCollections$SetN::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"size", "()I", nullptr, $PUBLIC},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(ImmutableCollections$SetN::*)()>(&ImmutableCollections$SetN::writeReplace))},
	{}
};

$InnerClassInfo _ImmutableCollections$SetN_InnerClassesInfo_[] = {
	{"java.util.ImmutableCollections$SetN", "java.util.ImmutableCollections", "SetN", $STATIC | $FINAL},
	{"java.util.ImmutableCollections$AbstractImmutableSet", "java.util.ImmutableCollections", "AbstractImmutableSet", $STATIC | $ABSTRACT},
	{"java.util.ImmutableCollections$SetN$SetNIterator", "java.util.ImmutableCollections$SetN", "SetNIterator", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _ImmutableCollections$SetN_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.ImmutableCollections$SetN",
	"java.util.ImmutableCollections$AbstractImmutableSet",
	"java.io.Serializable",
	_ImmutableCollections$SetN_FieldInfo_,
	_ImmutableCollections$SetN_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/ImmutableCollections$AbstractImmutableSet<TE;>;Ljava/io/Serializable;",
	nullptr,
	_ImmutableCollections$SetN_InnerClassesInfo_,
	_ImmutableCollections$SetN_Annotations_,
	nullptr,
	nullptr,
	"java.util.ImmutableCollections"
};

$Object* allocate$ImmutableCollections$SetN($Class* clazz) {
	return $of($alloc(ImmutableCollections$SetN));
}

bool ImmutableCollections$SetN::equals(Object$* o) {
	 return this->$ImmutableCollections$AbstractImmutableSet::equals(o);
}

$String* ImmutableCollections$SetN::toString() {
	 return this->$ImmutableCollections$AbstractImmutableSet::toString();
}

$Object* ImmutableCollections$SetN::clone() {
	 return this->$ImmutableCollections$AbstractImmutableSet::clone();
}

void ImmutableCollections$SetN::finalize() {
	this->$ImmutableCollections$AbstractImmutableSet::finalize();
}

void ImmutableCollections$SetN::init$($ObjectArray* input) {
	$ImmutableCollections$AbstractImmutableSet::init$();
	this->size$ = $nc(input)->length;
	$set(this, elements, $new($ObjectArray, 2 * input->length));
	for (int32_t i = 0; i < input->length; ++i) {
		$var($Object0, e, input->get(i));
		int32_t idx = probe(e);
		if (idx >= 0) {
			$throwNew($IllegalArgumentException, $$str({"duplicate element: "_s, e}));
		} else {
			$nc(this->elements)->set(-(idx + 1), e);
		}
	}
}

int32_t ImmutableCollections$SetN::size() {
	return this->size$;
}

bool ImmutableCollections$SetN::isEmpty() {
	return this->size$ == 0;
}

bool ImmutableCollections$SetN::contains(Object$* o) {
	$Objects::requireNonNull(o);
	return this->size$ > 0 && probe(o) >= 0;
}

$Iterator* ImmutableCollections$SetN::iterator() {
	return $new($ImmutableCollections$SetN$SetNIterator, this);
}

int32_t ImmutableCollections$SetN::hashCode() {
	int32_t h = 0;
	{
		$var($ObjectArray, arr$, this->elements);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Object0, e, arr$->get(i$));
			{
				if (e != nullptr) {
					h += $of(e)->hashCode();
				}
			}
		}
	}
	return h;
}

int32_t ImmutableCollections$SetN::probe(Object$* pe) {
	int32_t idx = $Math::floorMod($nc($of(pe))->hashCode(), $nc(this->elements)->length);
	while (true) {
		$var($Object0, ee, $nc(this->elements)->get(idx));
		if (ee == nullptr) {
			return -idx - 1;
		} else if ($of(pe)->equals(ee)) {
			return idx;
		} else if (++idx == $nc(this->elements)->length) {
			idx = 0;
		}
	}
}

void ImmutableCollections$SetN::readObject($ObjectInputStream* in) {
	$throwNew($InvalidObjectException, "not serial proxy"_s);
}

$Object* ImmutableCollections$SetN::writeReplace() {
	$var($ObjectArray, array, $new($ObjectArray, this->size$));
	int32_t dest = 0;
	{
		$var($ObjectArray, arr$, this->elements);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Object0, o, arr$->get(i$));
			{
				if (o != nullptr) {
					array->set(dest++, o);
				}
			}
		}
	}
	return $of($new($CollSer, $CollSer::IMM_SET, array));
}

$ObjectArray* ImmutableCollections$SetN::toArray() {
	$var($ObjectArray, array, $new($ObjectArray, this->size$));
	$var($Iterator, it, iterator());
	for (int32_t i = 0; i < this->size$; ++i) {
		array->set(i, $($nc(it)->next()));
	}
	return array;
}

$ObjectArray* ImmutableCollections$SetN::toArray($ObjectArray* a) {
	$var($ObjectArray, array, $nc(a)->length >= this->size$ ? a : $cast($ObjectArray, $1Array::newInstance($nc($of(a))->getClass()->getComponentType(), this->size$)));
	$var($Iterator, it, iterator());
	for (int32_t i = 0; i < this->size$; ++i) {
		$nc(array)->set(i, $($nc(it)->next()));
	}
	if ($nc(array)->length > this->size$) {
		array->set(this->size$, nullptr);
	}
	return array;
}

ImmutableCollections$SetN::ImmutableCollections$SetN() {
}

$Class* ImmutableCollections$SetN::load$($String* name, bool initialize) {
	$loadClass(ImmutableCollections$SetN, name, initialize, &_ImmutableCollections$SetN_ClassInfo_, allocate$ImmutableCollections$SetN);
	return class$;
}

$Class* ImmutableCollections$SetN::class$ = nullptr;

	} // util
} // java