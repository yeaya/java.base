#include <java/util/EnumSet.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/EnumSet$SerializationProxy.h>
#include <java/util/Iterator.h>
#include <java/util/JumboEnumSet.h>
#include <java/util/RegularEnumSet.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jcpp.h>

using $EnumArray = $Array<::java::lang::Enum>;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $EnumSet$SerializationProxy = ::java::util::EnumSet$SerializationProxy;
using $Iterator = ::java::util::Iterator;
using $JumboEnumSet = ::java::util::JumboEnumSet;
using $RegularEnumSet = ::java::util::RegularEnumSet;
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace java {
	namespace util {

$CompoundAttribute _EnumSet_MethodAnnotations_of16[] = {
	{"Ljava/lang/SafeVarargs;", nullptr},
	{}
};

$FieldInfo _EnumSet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EnumSet, serialVersionUID)},
	{"elementType", "Ljava/lang/Class;", "Ljava/lang/Class<TE;>;", $FINAL | $TRANSIENT, $field(EnumSet, elementType)},
	{"universe", "[Ljava/lang/Enum;", "[Ljava/lang/Enum<*>;", $FINAL | $TRANSIENT, $field(EnumSet, universe)},
	{}
};

$MethodInfo _EnumSet_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/lang/Class;[Ljava/lang/Enum;)V", "(Ljava/lang/Class<TE;>;[Ljava/lang/Enum<*>;)V", 0, $method(static_cast<void(EnumSet::*)($Class*,$EnumArray*)>(&EnumSet::init$))},
	{"addAll", "()V", nullptr, $ABSTRACT},
	{"addRange", "(Ljava/lang/Enum;Ljava/lang/Enum;)V", "(TE;TE;)V", $ABSTRACT},
	{"allOf", "(Ljava/lang/Class;)Ljava/util/EnumSet;", "<E:Ljava/lang/Enum<TE;>;>(Ljava/lang/Class<TE;>;)Ljava/util/EnumSet<TE;>;", $PUBLIC | $STATIC, $method(static_cast<EnumSet*(*)($Class*)>(&EnumSet::allOf))},
	{"clone", "()Ljava/util/EnumSet;", "()Ljava/util/EnumSet<TE;>;", $PUBLIC},
	{"complement", "()V", nullptr, $ABSTRACT},
	{"complementOf", "(Ljava/util/EnumSet;)Ljava/util/EnumSet;", "<E:Ljava/lang/Enum<TE;>;>(Ljava/util/EnumSet<TE;>;)Ljava/util/EnumSet<TE;>;", $PUBLIC | $STATIC, $method(static_cast<EnumSet*(*)(EnumSet*)>(&EnumSet::complementOf))},
	{"copyOf", "(Ljava/util/EnumSet;)Ljava/util/EnumSet;", "<E:Ljava/lang/Enum<TE;>;>(Ljava/util/EnumSet<TE;>;)Ljava/util/EnumSet<TE;>;", $PUBLIC | $STATIC, $method(static_cast<EnumSet*(*)(EnumSet*)>(&EnumSet::copyOf))},
	{"copyOf", "(Ljava/util/Collection;)Ljava/util/EnumSet;", "<E:Ljava/lang/Enum<TE;>;>(Ljava/util/Collection<TE;>;)Ljava/util/EnumSet<TE;>;", $PUBLIC | $STATIC, $method(static_cast<EnumSet*(*)($Collection*)>(&EnumSet::copyOf))},
	{"getUniverse", "(Ljava/lang/Class;)[Ljava/lang/Enum;", "<E:Ljava/lang/Enum<TE;>;>(Ljava/lang/Class<TE;>;)[TE;", $PRIVATE | $STATIC, $method(static_cast<$EnumArray*(*)($Class*)>(&EnumSet::getUniverse))},
	{"noneOf", "(Ljava/lang/Class;)Ljava/util/EnumSet;", "<E:Ljava/lang/Enum<TE;>;>(Ljava/lang/Class<TE;>;)Ljava/util/EnumSet<TE;>;", $PUBLIC | $STATIC, $method(static_cast<EnumSet*(*)($Class*)>(&EnumSet::noneOf))},
	{"of", "(Ljava/lang/Enum;)Ljava/util/EnumSet;", "<E:Ljava/lang/Enum<TE;>;>(TE;)Ljava/util/EnumSet<TE;>;", $PUBLIC | $STATIC, $method(static_cast<EnumSet*(*)($Enum*)>(&EnumSet::of))},
	{"of", "(Ljava/lang/Enum;Ljava/lang/Enum;)Ljava/util/EnumSet;", "<E:Ljava/lang/Enum<TE;>;>(TE;TE;)Ljava/util/EnumSet<TE;>;", $PUBLIC | $STATIC, $method(static_cast<EnumSet*(*)($Enum*,$Enum*)>(&EnumSet::of))},
	{"of", "(Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;)Ljava/util/EnumSet;", "<E:Ljava/lang/Enum<TE;>;>(TE;TE;TE;)Ljava/util/EnumSet<TE;>;", $PUBLIC | $STATIC, $method(static_cast<EnumSet*(*)($Enum*,$Enum*,$Enum*)>(&EnumSet::of))},
	{"of", "(Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;)Ljava/util/EnumSet;", "<E:Ljava/lang/Enum<TE;>;>(TE;TE;TE;TE;)Ljava/util/EnumSet<TE;>;", $PUBLIC | $STATIC, $method(static_cast<EnumSet*(*)($Enum*,$Enum*,$Enum*,$Enum*)>(&EnumSet::of))},
	{"of", "(Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;)Ljava/util/EnumSet;", "<E:Ljava/lang/Enum<TE;>;>(TE;TE;TE;TE;TE;)Ljava/util/EnumSet<TE;>;", $PUBLIC | $STATIC, $method(static_cast<EnumSet*(*)($Enum*,$Enum*,$Enum*,$Enum*,$Enum*)>(&EnumSet::of))},
	{"of", "(Ljava/lang/Enum;[Ljava/lang/Enum;)Ljava/util/EnumSet;", "<E:Ljava/lang/Enum<TE;>;>(TE;[TE;)Ljava/util/EnumSet<TE;>;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<EnumSet*(*)($Enum*,$EnumArray*)>(&EnumSet::of)), nullptr, nullptr, _EnumSet_MethodAnnotations_of16},
	{"range", "(Ljava/lang/Enum;Ljava/lang/Enum;)Ljava/util/EnumSet;", "<E:Ljava/lang/Enum<TE;>;>(TE;TE;)Ljava/util/EnumSet<TE;>;", $PUBLIC | $STATIC, $method(static_cast<EnumSet*(*)($Enum*,$Enum*)>(&EnumSet::range))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(EnumSet::*)($ObjectInputStream*)>(&EnumSet::readObject)), "java.io.InvalidObjectException"},
	{"readObjectNoData", "()V", nullptr, $PRIVATE, $method(static_cast<void(EnumSet::*)()>(&EnumSet::readObjectNoData)), "java.io.InvalidObjectException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"typeCheck", "(Ljava/lang/Enum;)V", "(TE;)V", $FINAL, $method(static_cast<void(EnumSet::*)($Enum*)>(&EnumSet::typeCheck))},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, 0},
	{}
};

$InnerClassInfo _EnumSet_InnerClassesInfo_[] = {
	{"java.util.EnumSet$SerializationProxy", "java.util.EnumSet", "SerializationProxy", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _EnumSet_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.EnumSet",
	"java.util.AbstractSet",
	"java.lang.Cloneable,java.io.Serializable",
	_EnumSet_FieldInfo_,
	_EnumSet_MethodInfo_,
	"<E:Ljava/lang/Enum<TE;>;>Ljava/util/AbstractSet<TE;>;Ljava/lang/Cloneable;Ljava/io/Serializable;",
	nullptr,
	_EnumSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.EnumSet$SerializationProxy"
};

$Object* allocate$EnumSet($Class* clazz) {
	return $of($alloc(EnumSet));
}

bool EnumSet::equals(Object$* o) {
	 return this->$AbstractSet::equals(o);
}

int32_t EnumSet::hashCode() {
	 return this->$AbstractSet::hashCode();
}

$String* EnumSet::toString() {
	 return this->$AbstractSet::toString();
}

void EnumSet::finalize() {
	this->$AbstractSet::finalize();
}

void EnumSet::init$($Class* elementType, $EnumArray* universe) {
	$AbstractSet::init$();
	$set(this, elementType, elementType);
	$set(this, universe, universe);
}

EnumSet* EnumSet::noneOf($Class* elementType) {
	$init(EnumSet);
	$var($EnumArray, universe, getUniverse(elementType));
	if (universe == nullptr) {
		$throwNew($ClassCastException, $$str({elementType, " not an enum"_s}));
	}
	if ($nc(universe)->length <= 64) {
		return $new($RegularEnumSet, elementType, universe);
	} else {
		return $new($JumboEnumSet, elementType, universe);
	}
}

EnumSet* EnumSet::allOf($Class* elementType) {
	$init(EnumSet);
	$var(EnumSet, result, noneOf(elementType));
	$nc(result)->addAll();
	return result;
}

EnumSet* EnumSet::copyOf(EnumSet* s) {
	$init(EnumSet);
	return $cast(EnumSet, $nc(s)->clone());
}

EnumSet* EnumSet::copyOf($Collection* c) {
	$init(EnumSet);
	if ($instanceOf(EnumSet, c)) {
		return $cast(EnumSet, $nc(($cast(EnumSet, c)))->clone());
	} else {
		if ($nc(c)->isEmpty()) {
			$throwNew($IllegalArgumentException, "Collection is empty"_s);
		}
		$var($Iterator, i, $nc(c)->iterator());
		$var($Enum, first, $cast($Enum, $nc(i)->next()));
		$var(EnumSet, result, EnumSet::of(first));
		while (i->hasNext()) {
			$nc(result)->add($cast($Enum, $(i->next())));
		}
		return result;
	}
}

EnumSet* EnumSet::complementOf(EnumSet* s) {
	$init(EnumSet);
	$var(EnumSet, result, copyOf(s));
	$nc(result)->complement();
	return result;
}

EnumSet* EnumSet::of($Enum* e) {
	$init(EnumSet);
	$var(EnumSet, result, noneOf($nc(e)->getDeclaringClass()));
	$nc(result)->add(e);
	return result;
}

EnumSet* EnumSet::of($Enum* e1, $Enum* e2) {
	$init(EnumSet);
	$var(EnumSet, result, noneOf($nc(e1)->getDeclaringClass()));
	$nc(result)->add(e1);
	result->add(e2);
	return result;
}

EnumSet* EnumSet::of($Enum* e1, $Enum* e2, $Enum* e3) {
	$init(EnumSet);
	$var(EnumSet, result, noneOf($nc(e1)->getDeclaringClass()));
	$nc(result)->add(e1);
	result->add(e2);
	result->add(e3);
	return result;
}

EnumSet* EnumSet::of($Enum* e1, $Enum* e2, $Enum* e3, $Enum* e4) {
	$init(EnumSet);
	$var(EnumSet, result, noneOf($nc(e1)->getDeclaringClass()));
	$nc(result)->add(e1);
	result->add(e2);
	result->add(e3);
	result->add(e4);
	return result;
}

EnumSet* EnumSet::of($Enum* e1, $Enum* e2, $Enum* e3, $Enum* e4, $Enum* e5) {
	$init(EnumSet);
	$var(EnumSet, result, noneOf($nc(e1)->getDeclaringClass()));
	$nc(result)->add(e1);
	result->add(e2);
	result->add(e3);
	result->add(e4);
	result->add(e5);
	return result;
}

EnumSet* EnumSet::of($Enum* first, $EnumArray* rest) {
	$init(EnumSet);
	$var(EnumSet, result, noneOf($nc(first)->getDeclaringClass()));
	$nc(result)->add(first);
	{
		$var($EnumArray, arr$, rest);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Enum, e, arr$->get(i$));
			result->add(e);
		}
	}
	return result;
}

EnumSet* EnumSet::range($Enum* from, $Enum* to) {
	$init(EnumSet);
	if ($nc(from)->compareTo(to) > 0) {
		$throwNew($IllegalArgumentException, $$str({from, " > "_s, to}));
	}
	$var(EnumSet, result, noneOf($nc(from)->getDeclaringClass()));
	$nc(result)->addRange(from, to);
	return result;
}

$Object* EnumSet::clone() {
	try {
		return $of($cast(EnumSet, $AbstractSet::clone()));
	} catch ($CloneNotSupportedException&) {
		$var($CloneNotSupportedException, e, $catch());
		$throwNew($AssertionError, $of(e));
	}
	$shouldNotReachHere();
}

void EnumSet::typeCheck($Enum* e) {
	$Class* eClass = $nc($of(e))->getClass();
	if (eClass != this->elementType && $nc(eClass)->getSuperclass() != this->elementType) {
		$throwNew($ClassCastException, $$str({eClass, " != "_s, this->elementType}));
	}
}

$EnumArray* EnumSet::getUniverse($Class* elementType) {
	$init(EnumSet);
	return $nc($($SharedSecrets::getJavaLangAccess()))->getEnumConstantsShared(elementType);
}

$Object* EnumSet::writeReplace() {
	return $of($new($EnumSet$SerializationProxy, this));
}

void EnumSet::readObject($ObjectInputStream* s) {
	$throwNew($InvalidObjectException, "Proxy required"_s);
}

void EnumSet::readObjectNoData() {
	$throwNew($InvalidObjectException, "Proxy required"_s);
}

EnumSet::EnumSet() {
}

$Class* EnumSet::load$($String* name, bool initialize) {
	$loadClass(EnumSet, name, initialize, &_EnumSet_ClassInfo_, allocate$EnumSet);
	return class$;
}

$Class* EnumSet::class$ = nullptr;

	} // util
} // java