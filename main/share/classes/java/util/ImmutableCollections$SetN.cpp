#include <java/util/ImmutableCollections$SetN.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/Math.h>
#include <java/lang/reflect/Array.h>
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
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Array = ::java::lang::reflect::Array;
using $CollSer = ::java::util::CollSer;
using $ImmutableCollections$AbstractImmutableSet = ::java::util::ImmutableCollections$AbstractImmutableSet;
using $ImmutableCollections$SetN$SetNIterator = ::java::util::ImmutableCollections$SetN$SetNIterator;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;

namespace java {
	namespace util {

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
	$useLocalObjectStack();
	$ImmutableCollections$AbstractImmutableSet::init$();
	this->size$ = $nc(input)->length;
	$set(this, elements, $new($ObjectArray, 2 * input->length));
	for (int32_t i = 0; i < input->length; ++i) {
		$var($Object0, e, input->get(i));
		int32_t idx = probe(e);
		if (idx >= 0) {
			$throwNew($IllegalArgumentException, $$str({"duplicate element: "_s, e}));
		} else {
			this->elements->set(-(idx + 1), e);
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
	$useLocalObjectStack();
	int32_t h = 0;
	{
		$var($ObjectArray, arr$, this->elements);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Object0, e, arr$->get(i$));
			if (e != nullptr) {
				h += e->hashCode();
			}
		}
	}
	return h;
}

int32_t ImmutableCollections$SetN::probe(Object$* pe) {
	$useLocalObjectStack();
	int32_t idx = $Math::floorMod($nc($of(pe))->hashCode(), this->elements->length);
	while (true) {
		$var($Object0, ee, this->elements->get(idx));
		if (ee == nullptr) {
			return -idx - 1;
		} else if ($of(pe)->equals(ee)) {
			return idx;
		} else if (++idx == this->elements->length) {
			idx = 0;
		}
	}
}

void ImmutableCollections$SetN::readObject($ObjectInputStream* in) {
	$throwNew($InvalidObjectException, "not serial proxy"_s);
}

$Object* ImmutableCollections$SetN::writeReplace() {
	$useLocalObjectStack();
	$var($ObjectArray, array, $new($ObjectArray, this->size$));
	int32_t dest = 0;
	{
		$var($ObjectArray, arr$, this->elements);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Object0, o, arr$->get(i$));
			if (o != nullptr) {
				array->set(dest++, o);
			}
		}
	}
	return $new($CollSer, $CollSer::IMM_SET, array);
}

$ObjectArray* ImmutableCollections$SetN::toArray() {
	$useLocalObjectStack();
	$var($ObjectArray, array, $new($ObjectArray, this->size$));
	$var($Iterator, it, iterator());
	for (int32_t i = 0; i < this->size$; ++i) {
		array->set(i, $($nc(it)->next()));
	}
	return array;
}

$ObjectArray* ImmutableCollections$SetN::toArray($ObjectArray* a) {
	$useLocalObjectStack();
	$var($ObjectArray, array, $nc(a)->length >= this->size$ ? a : $cast($ObjectArray, $1Array::newInstance($of(a)->getClass()->getComponentType(), this->size$)));
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
	$CompoundAttribute elementsfieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$CompoundAttribute sizefieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"elements", "[Ljava/lang/Object;", "[TE;", $FINAL, $field(ImmutableCollections$SetN, elements), elementsfieldAnnotations$$},
		{"size", "I", nullptr, $FINAL, $field(ImmutableCollections$SetN, size$), sizefieldAnnotations$$},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"Ljava/lang/SafeVarargs;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"<init>", "([Ljava/lang/Object;)V", "([TE;)V", $TRANSIENT, $method(ImmutableCollections$SetN, init$, void, $ObjectArray*), nullptr, nullptr, init$methodAnnotations$$},
		{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ImmutableCollections$SetN, contains, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ImmutableCollections$SetN, hashCode, int32_t)},
		{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(ImmutableCollections$SetN, isEmpty, bool)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC, $virtualMethod(ImmutableCollections$SetN, iterator, $Iterator*)},
		{"probe", "(Ljava/lang/Object;)I", nullptr, $PRIVATE, $method(ImmutableCollections$SetN, probe, int32_t, Object$*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(ImmutableCollections$SetN, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(ImmutableCollections$SetN, size, int32_t)},
		{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ImmutableCollections$SetN, toArray, $ObjectArray*)},
		{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC, $virtualMethod(ImmutableCollections$SetN, toArray, $ObjectArray*, $ObjectArray*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(ImmutableCollections$SetN, writeReplace, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.ImmutableCollections$SetN", "java.util.ImmutableCollections", "SetN", $STATIC | $FINAL},
		{"java.util.ImmutableCollections$AbstractImmutableSet", "java.util.ImmutableCollections", "AbstractImmutableSet", $STATIC | $ABSTRACT},
		{"java.util.ImmutableCollections$SetN$SetNIterator", "java.util.ImmutableCollections$SetN", "SetNIterator", $PRIVATE | $FINAL},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljdk/internal/ValueBased;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.ImmutableCollections$SetN",
		"java.util.ImmutableCollections$AbstractImmutableSet",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/util/ImmutableCollections$AbstractImmutableSet<TE;>;Ljava/io/Serializable;",
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"java.util.ImmutableCollections"
	};
	$loadClass(ImmutableCollections$SetN, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ImmutableCollections$SetN));
	});
	return class$;
}

$Class* ImmutableCollections$SetN::class$ = nullptr;

	} // util
} // java