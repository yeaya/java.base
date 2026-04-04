#include <java/util/CollSer.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/Arrays.h>
#include <java/util/ImmutableCollections$Map1.h>
#include <java/util/ImmutableCollections$MapN.h>
#include <java/util/ImmutableCollections.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <jdk/internal/access/JavaObjectInputStreamAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jcpp.h>

#undef EMPTY_MAP
#undef IMM_LIST
#undef IMM_LIST_NULLS
#undef IMM_MAP
#undef IMM_SET

using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Arrays = ::java::util::Arrays;
using $ImmutableCollections = ::java::util::ImmutableCollections;
using $ImmutableCollections$Map1 = ::java::util::ImmutableCollections$Map1;
using $ImmutableCollections$MapN = ::java::util::ImmutableCollections$MapN;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace java {
	namespace util {

void CollSer::init$(int32_t t, $ObjectArray* a) {
	this->tag = t;
	$set(this, array, a);
}

void CollSer::readObject($ObjectInputStream* ois) {
	$useLocalObjectStack();
	$nc(ois)->defaultReadObject();
	int32_t len = ois->readInt();
	if (len < 0) {
		$throwNew($InvalidObjectException, $$str({"negative length "_s, $$str(len)}));
	}
	$$nc($SharedSecrets::getJavaObjectInputStreamAccess())->checkArray(ois, $getClass($ObjectArray), len);
	$var($ObjectArray, a, $new($ObjectArray, len));
	for (int32_t i = 0; i < len; ++i) {
		a->set(i, $(ois->readObject()));
	}
	$set(this, array, a);
}

void CollSer::writeObject($ObjectOutputStream* oos) {
	$nc(oos)->defaultWriteObject();
	oos->writeInt($nc(this->array)->length);
	for (int32_t i = 0; i < this->array->length; ++i) {
		oos->writeObject(this->array->get(i));
	}
}

$Object* CollSer::readResolve() {
	$useLocalObjectStack();
	try {
		if (this->array == nullptr) {
			$throwNew($InvalidObjectException, "null array"_s);
		}
		switch (this->tag & 0xff) {
		case CollSer::IMM_LIST:
			return $List::of(this->array);
		case CollSer::IMM_LIST_NULLS:
			return $ImmutableCollections::listFromTrustedArrayNullsAllowed($($Arrays::copyOf(this->array, $nc(this->array)->length, $getClass($ObjectArray))));
		case CollSer::IMM_SET:
			return $Set::of(this->array);
		case CollSer::IMM_MAP:
			if ($nc(this->array)->length == 0) {
				$init($ImmutableCollections);
				return $of($ImmutableCollections::EMPTY_MAP);
			} else if (this->array->length == 2) {
				return $of($new($ImmutableCollections$Map1, this->array->get(0), this->array->get(1)));
			} else {
				return $of($new($ImmutableCollections$MapN, this->array));
			}
		default:
			$throwNew($InvalidObjectException, $($String::format("invalid flags 0x%x"_s, $$new($ObjectArray, {$($Integer::valueOf(this->tag))}))));
		}
	} catch ($NullPointerException& ex) {
		$var($InvalidObjectException, ioe, $new($InvalidObjectException, "invalid object"_s));
		ioe->initCause(ex);
		$throw(ioe);
	} catch ($IllegalArgumentException& ex) {
		$var($InvalidObjectException, ioe, $new($InvalidObjectException, "invalid object"_s));
		ioe->initCause(ex);
		$throw(ioe);
	}
	$shouldNotReachHere();
}

CollSer::CollSer() {
}

$Class* CollSer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CollSer, serialVersionUID)},
		{"IMM_LIST", "I", nullptr, $STATIC | $FINAL, $constField(CollSer, IMM_LIST)},
		{"IMM_SET", "I", nullptr, $STATIC | $FINAL, $constField(CollSer, IMM_SET)},
		{"IMM_MAP", "I", nullptr, $STATIC | $FINAL, $constField(CollSer, IMM_MAP)},
		{"IMM_LIST_NULLS", "I", nullptr, $STATIC | $FINAL, $constField(CollSer, IMM_LIST_NULLS)},
		{"tag", "I", nullptr, $PRIVATE | $FINAL, $field(CollSer, tag)},
		{"array", "[Ljava/lang/Object;", nullptr, $PRIVATE | $TRANSIENT, $field(CollSer, array)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I[Ljava/lang/Object;)V", nullptr, $TRANSIENT, $method(CollSer, init$, void, int32_t, $ObjectArray*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(CollSer, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(CollSer, readResolve, $Object*), "java.io.ObjectStreamException"},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(CollSer, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.CollSer",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CollSer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CollSer);
	});
	return class$;
}

$Class* CollSer::class$ = nullptr;

	} // util
} // java