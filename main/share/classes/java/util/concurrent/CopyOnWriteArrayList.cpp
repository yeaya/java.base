#include <java/util/concurrent/CopyOnWriteArrayList.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/concurrent/CopyOnWriteArrayList$COWIterator.h>
#include <java/util/concurrent/CopyOnWriteArrayList$COWSubList.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/UnaryOperator.h>
#include <jdk/internal/access/JavaObjectInputStreamAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jcpp.h>

#undef IMMUTABLE
#undef ORDERED

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $Field = ::java::lang::reflect::Field;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ListIterator = ::java::util::ListIterator;
using $Objects = ::java::util::Objects;
using $RandomAccess = ::java::util::RandomAccess;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators = ::java::util::Spliterators;
using $CopyOnWriteArrayList$COWIterator = ::java::util::concurrent::CopyOnWriteArrayList$COWIterator;
using $CopyOnWriteArrayList$COWSubList = ::java::util::concurrent::CopyOnWriteArrayList$COWSubList;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $UnaryOperator = ::java::util::function::UnaryOperator;
using $JavaObjectInputStreamAccess = ::jdk::internal::access::JavaObjectInputStreamAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace java {
	namespace util {
		namespace concurrent {

class CopyOnWriteArrayList$$Lambda$lambda$removeAll$0 : public $Predicate {
	$class(CopyOnWriteArrayList$$Lambda$lambda$removeAll$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Collection* c) {
		$set(this, c, c);
	}
	virtual bool test(Object$* e) override {
		 return CopyOnWriteArrayList::lambda$removeAll$0(c, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CopyOnWriteArrayList$$Lambda$lambda$removeAll$0>());
	}
	$Collection* c = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CopyOnWriteArrayList$$Lambda$lambda$removeAll$0::fieldInfos[2] = {
	{"c", "Ljava/util/Collection;", nullptr, $PUBLIC, $field(CopyOnWriteArrayList$$Lambda$lambda$removeAll$0, c)},
	{}
};
$MethodInfo CopyOnWriteArrayList$$Lambda$lambda$removeAll$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/Collection;)V", nullptr, $PUBLIC, $method(static_cast<void(CopyOnWriteArrayList$$Lambda$lambda$removeAll$0::*)($Collection*)>(&CopyOnWriteArrayList$$Lambda$lambda$removeAll$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CopyOnWriteArrayList$$Lambda$lambda$removeAll$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.concurrent.CopyOnWriteArrayList$$Lambda$lambda$removeAll$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* CopyOnWriteArrayList$$Lambda$lambda$removeAll$0::load$($String* name, bool initialize) {
	$loadClass(CopyOnWriteArrayList$$Lambda$lambda$removeAll$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CopyOnWriteArrayList$$Lambda$lambda$removeAll$0::class$ = nullptr;

class CopyOnWriteArrayList$$Lambda$lambda$retainAll$1$1 : public $Predicate {
	$class(CopyOnWriteArrayList$$Lambda$lambda$retainAll$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Collection* c) {
		$set(this, c, c);
	}
	virtual bool test(Object$* e) override {
		 return CopyOnWriteArrayList::lambda$retainAll$1(c, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CopyOnWriteArrayList$$Lambda$lambda$retainAll$1$1>());
	}
	$Collection* c = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CopyOnWriteArrayList$$Lambda$lambda$retainAll$1$1::fieldInfos[2] = {
	{"c", "Ljava/util/Collection;", nullptr, $PUBLIC, $field(CopyOnWriteArrayList$$Lambda$lambda$retainAll$1$1, c)},
	{}
};
$MethodInfo CopyOnWriteArrayList$$Lambda$lambda$retainAll$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/Collection;)V", nullptr, $PUBLIC, $method(static_cast<void(CopyOnWriteArrayList$$Lambda$lambda$retainAll$1$1::*)($Collection*)>(&CopyOnWriteArrayList$$Lambda$lambda$retainAll$1$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CopyOnWriteArrayList$$Lambda$lambda$retainAll$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.concurrent.CopyOnWriteArrayList$$Lambda$lambda$retainAll$1$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* CopyOnWriteArrayList$$Lambda$lambda$retainAll$1$1::load$($String* name, bool initialize) {
	$loadClass(CopyOnWriteArrayList$$Lambda$lambda$retainAll$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CopyOnWriteArrayList$$Lambda$lambda$retainAll$1$1::class$ = nullptr;

class CopyOnWriteArrayList$$Lambda$lambda$resetLock$2$2 : public $PrivilegedAction {
	$class(CopyOnWriteArrayList$$Lambda$lambda$resetLock$2$2, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(CopyOnWriteArrayList::lambda$resetLock$2());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CopyOnWriteArrayList$$Lambda$lambda$resetLock$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CopyOnWriteArrayList$$Lambda$lambda$resetLock$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CopyOnWriteArrayList$$Lambda$lambda$resetLock$2$2::*)()>(&CopyOnWriteArrayList$$Lambda$lambda$resetLock$2$2::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo CopyOnWriteArrayList$$Lambda$lambda$resetLock$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.concurrent.CopyOnWriteArrayList$$Lambda$lambda$resetLock$2$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* CopyOnWriteArrayList$$Lambda$lambda$resetLock$2$2::load$($String* name, bool initialize) {
	$loadClass(CopyOnWriteArrayList$$Lambda$lambda$resetLock$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CopyOnWriteArrayList$$Lambda$lambda$resetLock$2$2::class$ = nullptr;

$FieldInfo _CopyOnWriteArrayList_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CopyOnWriteArrayList, serialVersionUID)},
	{"lock", "Ljava/lang/Object;", nullptr, $FINAL | $TRANSIENT, $field(CopyOnWriteArrayList, lock)},
	{"array", "[Ljava/lang/Object;", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(CopyOnWriteArrayList, array)},
	{}
};

$MethodInfo _CopyOnWriteArrayList_MethodInfo_[] = {
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CopyOnWriteArrayList::*)()>(&CopyOnWriteArrayList::init$))},
	{"<init>", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<+TE;>;)V", $PUBLIC, $method(static_cast<void(CopyOnWriteArrayList::*)($Collection*)>(&CopyOnWriteArrayList::init$))},
	{"<init>", "([Ljava/lang/Object;)V", "([TE;)V", $PUBLIC, $method(static_cast<void(CopyOnWriteArrayList::*)($ObjectArray*)>(&CopyOnWriteArrayList::init$))},
	{"add", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC},
	{"add", "(ILjava/lang/Object;)V", "(ITE;)V", $PUBLIC},
	{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<+TE;>;)Z", $PUBLIC},
	{"addAll", "(ILjava/util/Collection;)Z", "(ILjava/util/Collection<+TE;>;)Z", $PUBLIC},
	{"addAllAbsent", "(Ljava/util/Collection;)I", "(Ljava/util/Collection<+TE;>;)I", $PUBLIC},
	{"addIfAbsent", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC},
	{"addIfAbsent", "(Ljava/lang/Object;[Ljava/lang/Object;)Z", "(TE;[Ljava/lang/Object;)Z", $PRIVATE, $method(static_cast<bool(CopyOnWriteArrayList::*)(Object$*,$ObjectArray*)>(&CopyOnWriteArrayList::addIfAbsent))},
	{"bulkRemove", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TE;>;)Z", $PRIVATE, $method(static_cast<bool(CopyOnWriteArrayList::*)($Predicate*)>(&CopyOnWriteArrayList::bulkRemove))},
	{"bulkRemove", "(Ljava/util/function/Predicate;II)Z", "(Ljava/util/function/Predicate<-TE;>;II)Z", 0},
	{"clear", "()V", nullptr, $PUBLIC},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"elementAt", "([Ljava/lang/Object;I)Ljava/lang/Object;", "<E:Ljava/lang/Object;>([Ljava/lang/Object;I)TE;", $STATIC, $method(static_cast<$Object*(*)($ObjectArray*,int32_t)>(&CopyOnWriteArrayList::elementAt))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"get", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"getArray", "()[Ljava/lang/Object;", nullptr, $FINAL, $method(static_cast<$ObjectArray*(CopyOnWriteArrayList::*)()>(&CopyOnWriteArrayList::getArray))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"hashCodeOfRange", "([Ljava/lang/Object;II)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($ObjectArray*,int32_t,int32_t)>(&CopyOnWriteArrayList::hashCodeOfRange))},
	{"indexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"indexOf", "(Ljava/lang/Object;I)I", "(TE;I)I", $PUBLIC},
	{"indexOfRange", "(Ljava/lang/Object;[Ljava/lang/Object;II)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(Object$*,$ObjectArray*,int32_t,int32_t)>(&CopyOnWriteArrayList::indexOfRange))},
	{"isClear", "([JI)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($longs*,int32_t)>(&CopyOnWriteArrayList::isClear))},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"lambda$removeAll$0", "(Ljava/util/Collection;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Collection*,Object$*)>(&CopyOnWriteArrayList::lambda$removeAll$0))},
	{"lambda$resetLock$2", "()Ljava/lang/reflect/Field;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Field*(*)()>(&CopyOnWriteArrayList::lambda$resetLock$2))},
	{"lambda$retainAll$1", "(Ljava/util/Collection;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Collection*,Object$*)>(&CopyOnWriteArrayList::lambda$retainAll$1))},
	{"lastIndexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"lastIndexOf", "(Ljava/lang/Object;I)I", "(TE;I)I", $PUBLIC},
	{"lastIndexOfRange", "(Ljava/lang/Object;[Ljava/lang/Object;II)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(Object$*,$ObjectArray*,int32_t,int32_t)>(&CopyOnWriteArrayList::lastIndexOfRange))},
	{"listIterator", "()Ljava/util/ListIterator;", "()Ljava/util/ListIterator<TE;>;", $PUBLIC},
	{"listIterator", "(I)Ljava/util/ListIterator;", "(I)Ljava/util/ListIterator<TE;>;", $PUBLIC},
	{"nBits", "(I)[J", nullptr, $PRIVATE | $STATIC, $method(static_cast<$longs*(*)(int32_t)>(&CopyOnWriteArrayList::nBits))},
	{"outOfBounds", "(II)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int32_t,int32_t)>(&CopyOnWriteArrayList::outOfBounds))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(CopyOnWriteArrayList::*)($ObjectInputStream*)>(&CopyOnWriteArrayList::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"remove", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"remove", "(Ljava/lang/Object;[Ljava/lang/Object;I)Z", nullptr, $PRIVATE, $method(static_cast<bool(CopyOnWriteArrayList::*)(Object$*,$ObjectArray*,int32_t)>(&CopyOnWriteArrayList::remove))},
	{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"removeIf", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TE;>;)Z", $PUBLIC},
	{"removeRange", "(II)V", nullptr, 0},
	{"replaceAll", "(Ljava/util/function/UnaryOperator;)V", "(Ljava/util/function/UnaryOperator<TE;>;)V", $PUBLIC},
	{"replaceAllRange", "(Ljava/util/function/UnaryOperator;II)V", "(Ljava/util/function/UnaryOperator<TE;>;II)V", 0},
	{"resetLock", "()V", nullptr, $PRIVATE, $method(static_cast<void(CopyOnWriteArrayList::*)()>(&CopyOnWriteArrayList::resetLock))},
	{"retainAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"set", "(ILjava/lang/Object;)Ljava/lang/Object;", "(ITE;)TE;", $PUBLIC},
	{"setArray", "([Ljava/lang/Object;)V", nullptr, $FINAL, $method(static_cast<void(CopyOnWriteArrayList::*)($ObjectArray*)>(&CopyOnWriteArrayList::setArray))},
	{"setBit", "([JI)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($longs*,int32_t)>(&CopyOnWriteArrayList::setBit))},
	{"size", "()I", nullptr, $PUBLIC},
	{"sort", "(Ljava/util/Comparator;)V", "(Ljava/util/Comparator<-TE;>;)V", $PUBLIC},
	{"sortRange", "(Ljava/util/Comparator;II)V", "(Ljava/util/Comparator<-TE;>;II)V", 0},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC},
	{"subList", "(II)Ljava/util/List;", "(II)Ljava/util/List<TE;>;", $PUBLIC},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(CopyOnWriteArrayList::*)($ObjectOutputStream*)>(&CopyOnWriteArrayList::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _CopyOnWriteArrayList_InnerClassesInfo_[] = {
	{"java.util.concurrent.CopyOnWriteArrayList$COWSubListIterator", "java.util.concurrent.CopyOnWriteArrayList", "COWSubListIterator", $PRIVATE | $STATIC},
	{"java.util.concurrent.CopyOnWriteArrayList$COWSubList", "java.util.concurrent.CopyOnWriteArrayList", "COWSubList", $PRIVATE},
	{"java.util.concurrent.CopyOnWriteArrayList$COWIterator", "java.util.concurrent.CopyOnWriteArrayList", "COWIterator", $STATIC | $FINAL},
	{}
};

$ClassInfo _CopyOnWriteArrayList_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.CopyOnWriteArrayList",
	"java.lang.Object",
	"java.util.List,java.util.RandomAccess,java.lang.Cloneable,java.io.Serializable",
	_CopyOnWriteArrayList_FieldInfo_,
	_CopyOnWriteArrayList_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/List<TE;>;Ljava/util/RandomAccess;Ljava/lang/Cloneable;Ljava/io/Serializable;",
	nullptr,
	_CopyOnWriteArrayList_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.concurrent.CopyOnWriteArrayList$COWSubListIterator,java.util.concurrent.CopyOnWriteArrayList$COWSubList,java.util.concurrent.CopyOnWriteArrayList$COWIterator"
};

$Object* allocate$CopyOnWriteArrayList($Class* clazz) {
	return $of($alloc(CopyOnWriteArrayList));
}

void CopyOnWriteArrayList::finalize() {
	this->$List::finalize();
}

$ObjectArray* CopyOnWriteArrayList::getArray() {
	return this->array;
}

void CopyOnWriteArrayList::setArray($ObjectArray* a) {
	$set(this, array, a);
}

void CopyOnWriteArrayList::init$() {
	$set(this, lock, $new($Object));
	setArray($$new($ObjectArray, 0));
}

void CopyOnWriteArrayList::init$($Collection* c) {
	$set(this, lock, $new($Object));
	$var($ObjectArray, es, nullptr);
	if ($nc($of(c))->getClass() == CopyOnWriteArrayList::class$) {
		$assign(es, $nc(($cast(CopyOnWriteArrayList, c)))->getArray());
	} else {
		$assign(es, c->toArray());
		$load($ArrayList);
		if ($of(c)->getClass() != $ArrayList::class$) {
			$load($ObjectArray);
			$assign(es, $Arrays::copyOf(es, $nc(es)->length, $getClass($ObjectArray)));
		}
	}
	setArray(es);
}

void CopyOnWriteArrayList::init$($ObjectArray* toCopyIn) {
	$set(this, lock, $new($Object));
	$load($ObjectArray);
	setArray($($Arrays::copyOf(toCopyIn, $nc(toCopyIn)->length, $getClass($ObjectArray))));
}

int32_t CopyOnWriteArrayList::size() {
	return $nc($(getArray()))->length;
}

bool CopyOnWriteArrayList::isEmpty() {
	return size() == 0;
}

int32_t CopyOnWriteArrayList::indexOfRange(Object$* o, $ObjectArray* es, int32_t from, int32_t to) {
	$init(CopyOnWriteArrayList);
	if (o == nullptr) {
		for (int32_t i = from; i < to; ++i) {
			if ($nc(es)->get(i) == nullptr) {
				return i;
			}
		}
	} else {
		for (int32_t i = from; i < to; ++i) {
			if ($nc($of(o))->equals($nc(es)->get(i))) {
				return i;
			}
		}
	}
	return -1;
}

int32_t CopyOnWriteArrayList::lastIndexOfRange(Object$* o, $ObjectArray* es, int32_t from, int32_t to) {
	$init(CopyOnWriteArrayList);
	if (o == nullptr) {
		for (int32_t i = to - 1; i >= from; --i) {
			if ($nc(es)->get(i) == nullptr) {
				return i;
			}
		}
	} else {
		for (int32_t i = to - 1; i >= from; --i) {
			if ($nc($of(o))->equals($nc(es)->get(i))) {
				return i;
			}
		}
	}
	return -1;
}

bool CopyOnWriteArrayList::contains(Object$* o) {
	return indexOf(o) >= 0;
}

int32_t CopyOnWriteArrayList::indexOf(Object$* o) {
	$var($ObjectArray, es, getArray());
	return indexOfRange(o, es, 0, $nc(es)->length);
}

int32_t CopyOnWriteArrayList::indexOf(Object$* e, int32_t index) {
	$var($ObjectArray, es, getArray());
	return indexOfRange(e, es, index, $nc(es)->length);
}

int32_t CopyOnWriteArrayList::lastIndexOf(Object$* o) {
	$var($ObjectArray, es, getArray());
	return lastIndexOfRange(o, es, 0, $nc(es)->length);
}

int32_t CopyOnWriteArrayList::lastIndexOf(Object$* e, int32_t index) {
	$var($ObjectArray, es, getArray());
	return lastIndexOfRange(e, es, 0, index + 1);
}

$Object* CopyOnWriteArrayList::clone() {
	$useLocalCurrentObjectStackCache();
	try {
		$var(CopyOnWriteArrayList, clone, $cast(CopyOnWriteArrayList, $List::clone()));
		$nc(clone)->resetLock();
		$VarHandle::releaseFence();
		return $of(clone);
	} catch ($CloneNotSupportedException&) {
		$var($CloneNotSupportedException, e, $catch());
		$throwNew($InternalError);
	}
	$shouldNotReachHere();
}

$ObjectArray* CopyOnWriteArrayList::toArray() {
	return $cast($ObjectArray, $nc($(getArray()))->clone());
}

$ObjectArray* CopyOnWriteArrayList::toArray($ObjectArray* a) {
	$var($ObjectArray, es, getArray());
	int32_t len = $nc(es)->length;
	if ($nc(a)->length < len) {
		return $Arrays::copyOf(es, len, $of(a)->getClass());
	} else {
		$System::arraycopy(es, 0, a, 0, len);
		if (a->length > len) {
			a->set(len, nullptr);
		}
		return a;
	}
}

$Object* CopyOnWriteArrayList::elementAt($ObjectArray* a, int32_t index) {
	$init(CopyOnWriteArrayList);
	return $of($nc(a)->get(index));
}

$String* CopyOnWriteArrayList::outOfBounds(int32_t index, int32_t size) {
	$init(CopyOnWriteArrayList);
	$useLocalCurrentObjectStackCache();
	return $str({"Index: "_s, $$str(index), ", Size: "_s, $$str(size)});
}

$Object* CopyOnWriteArrayList::get(int32_t index) {
	return $of(elementAt($(getArray()), index));
}

$Object* CopyOnWriteArrayList::set(int32_t index, Object$* element) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->lock) {
		$var($ObjectArray, es, getArray());
		$var($Object, oldValue, elementAt(es, index));
		if (!$equals(oldValue, element)) {
			$assign(es, $cast($ObjectArray, $nc(es)->clone()));
			es->set(index, element);
		}
		setArray(es);
		return $of(oldValue);
	}
}

bool CopyOnWriteArrayList::add(Object$* e) {
	$synchronized(this->lock) {
		$var($ObjectArray, es, getArray());
		int32_t len = $nc(es)->length;
		$assign(es, $Arrays::copyOf(es, len + 1));
		es->set(len, e);
		setArray(es);
		return true;
	}
}

void CopyOnWriteArrayList::add(int32_t index, Object$* element) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->lock) {
		$var($ObjectArray, es, getArray());
		int32_t len = $nc(es)->length;
		if (index > len || index < 0) {
			$throwNew($IndexOutOfBoundsException, $(outOfBounds(index, len)));
		}
		$var($ObjectArray, newElements, nullptr);
		int32_t numMoved = len - index;
		if (numMoved == 0) {
			$assign(newElements, $Arrays::copyOf(es, len + 1));
		} else {
			$assign(newElements, $new($ObjectArray, len + 1));
			$System::arraycopy(es, 0, newElements, 0, index);
			$System::arraycopy(es, index, newElements, index + 1, numMoved);
		}
		$nc(newElements)->set(index, element);
		setArray(newElements);
	}
}

$Object* CopyOnWriteArrayList::remove(int32_t index) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->lock) {
		$var($ObjectArray, es, getArray());
		int32_t len = $nc(es)->length;
		$var($Object, oldValue, elementAt(es, index));
		int32_t numMoved = len - index - 1;
		$var($ObjectArray, newElements, nullptr);
		if (numMoved == 0) {
			$assign(newElements, $Arrays::copyOf(es, len - 1));
		} else {
			$assign(newElements, $new($ObjectArray, len - 1));
			$System::arraycopy(es, 0, newElements, 0, index);
			$System::arraycopy(es, index + 1, newElements, index, numMoved);
		}
		setArray(newElements);
		return $of(oldValue);
	}
}

bool CopyOnWriteArrayList::remove(Object$* o) {
	$var($ObjectArray, snapshot, getArray());
	int32_t index = indexOfRange(o, snapshot, 0, $nc(snapshot)->length);
	return index >= 0 && remove(o, snapshot, index);
}

bool CopyOnWriteArrayList::remove(Object$* o, $ObjectArray* snapshot, int32_t index) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->lock) {
		$var($ObjectArray, current, getArray());
		int32_t len = $nc(current)->length;
		if (snapshot != current) {
			bool findIndex$break = false;
			for (;;) {
				{
					int32_t prefix = $Math::min(index, len);
					for (int32_t i = 0; i < prefix; ++i) {
						if (!$equals(current->get(i), $nc(snapshot)->get(i)) && $Objects::equals(o, current->get(i))) {
							index = i;
							findIndex$break = true;
							break;
						}
					}
					if (findIndex$break) {
						break;
					}
					if (index >= len) {
						return false;
					}
					if ($equals(current->get(index), o)) {
						findIndex$break = true;
						break;
					}
					index = indexOfRange(o, current, index, len);
					if (index < 0) {
						return false;
					}
				}
				break;
			}
		}
		$var($ObjectArray, newElements, $new($ObjectArray, len - 1));
		$System::arraycopy(current, 0, newElements, 0, index);
		$System::arraycopy(current, index + 1, newElements, index, len - index - 1);
		setArray(newElements);
		return true;
	}
}

void CopyOnWriteArrayList::removeRange(int32_t fromIndex, int32_t toIndex) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->lock) {
		$var($ObjectArray, es, getArray());
		int32_t len = $nc(es)->length;
		if (fromIndex < 0 || toIndex > len || toIndex < fromIndex) {
			$throwNew($IndexOutOfBoundsException);
		}
		int32_t newlen = len - (toIndex - fromIndex);
		int32_t numMoved = len - toIndex;
		if (numMoved == 0) {
			setArray($($Arrays::copyOf(es, newlen)));
		} else {
			$var($ObjectArray, newElements, $new($ObjectArray, newlen));
			$System::arraycopy(es, 0, newElements, 0, fromIndex);
			$System::arraycopy(es, toIndex, newElements, fromIndex, numMoved);
			setArray(newElements);
		}
	}
}

bool CopyOnWriteArrayList::addIfAbsent(Object$* e) {
	$var($ObjectArray, snapshot, getArray());
	bool var$0 = indexOfRange(e, snapshot, 0, $nc(snapshot)->length) < 0;
	return var$0 && addIfAbsent(e, snapshot);
}

bool CopyOnWriteArrayList::addIfAbsent(Object$* e, $ObjectArray* snapshot) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->lock) {
		$var($ObjectArray, current, getArray());
		int32_t len = $nc(current)->length;
		if (snapshot != current) {
			int32_t common = $Math::min($nc(snapshot)->length, len);
			for (int32_t i = 0; i < common; ++i) {
				if (!$equals(current->get(i), $nc(snapshot)->get(i)) && $Objects::equals(e, current->get(i))) {
					return false;
				}
			}
			if (indexOfRange(e, current, common, len) >= 0) {
				return false;
			}
		}
		$var($ObjectArray, newElements, $Arrays::copyOf(current, len + 1));
		newElements->set(len, e);
		setArray(newElements);
		return true;
	}
}

bool CopyOnWriteArrayList::containsAll($Collection* c) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, es, getArray());
	int32_t len = $nc(es)->length;
	{
		$var($Iterator, i$, $nc(c)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, e, i$->next());
			{
				if (indexOfRange(e, es, 0, len) < 0) {
					return false;
				}
			}
		}
	}
	return true;
}

bool CopyOnWriteArrayList::removeAll($Collection* c) {
	$Objects::requireNonNull(c);
	return bulkRemove(static_cast<$Predicate*>($$new(CopyOnWriteArrayList$$Lambda$lambda$removeAll$0, c)));
}

bool CopyOnWriteArrayList::retainAll($Collection* c) {
	$Objects::requireNonNull(c);
	return bulkRemove(static_cast<$Predicate*>($$new(CopyOnWriteArrayList$$Lambda$lambda$retainAll$1$1, c)));
}

int32_t CopyOnWriteArrayList::addAllAbsent($Collection* c) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, cs, $nc(c)->toArray());
	$load($ArrayList);
	if ($of(c)->getClass() != $ArrayList::class$) {
		$assign(cs, $cast($ObjectArray, $nc(cs)->clone()));
	}
	if ($nc(cs)->length == 0) {
		return 0;
	}
	$synchronized(this->lock) {
		$var($ObjectArray, es, getArray());
		int32_t len = $nc(es)->length;
		int32_t added = 0;
		for (int32_t i = 0; i < $nc(cs)->length; ++i) {
			$var($Object0, e, cs->get(i));
			bool var$0 = indexOfRange(e, es, 0, len) < 0;
			if (var$0 && indexOfRange(e, cs, 0, added) < 0) {
				cs->set(added++, e);
			}
		}
		if (added > 0) {
			$var($ObjectArray, newElements, $Arrays::copyOf(es, len + added));
			$System::arraycopy(cs, 0, newElements, len, added);
			setArray(newElements);
		}
		return added;
	}
}

void CopyOnWriteArrayList::clear() {
	$synchronized(this->lock) {
		setArray($$new($ObjectArray, 0));
	}
}

bool CopyOnWriteArrayList::addAll($Collection* c) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, cs, ($nc($of(c))->getClass() == CopyOnWriteArrayList::class$) ? $nc(($cast(CopyOnWriteArrayList, c)))->getArray() : $nc(c)->toArray());
	if ($nc(cs)->length == 0) {
		return false;
	}
	$synchronized(this->lock) {
		$var($ObjectArray, es, getArray());
		int32_t len = $nc(es)->length;
		$var($ObjectArray, newElements, nullptr);
		bool var$0 = len == 0;
		if (var$0) {
			bool var$1 = $of(c)->getClass() == CopyOnWriteArrayList::class$;
			$load($ArrayList);
			var$0 = (var$1 || $of(c)->getClass() == $ArrayList::class$);
		}
		if (var$0) {
			$assign(newElements, cs);
		} else {
			$assign(newElements, $Arrays::copyOf(es, len + $nc(cs)->length));
			$System::arraycopy(cs, 0, newElements, len, $nc(cs)->length);
		}
		setArray(newElements);
		return true;
	}
}

bool CopyOnWriteArrayList::addAll(int32_t index, $Collection* c) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, cs, $nc(c)->toArray());
	$synchronized(this->lock) {
		$var($ObjectArray, es, getArray());
		int32_t len = $nc(es)->length;
		if (index > len || index < 0) {
			$throwNew($IndexOutOfBoundsException, $(outOfBounds(index, len)));
		}
		if ($nc(cs)->length == 0) {
			return false;
		}
		int32_t numMoved = len - index;
		$var($ObjectArray, newElements, nullptr);
		if (numMoved == 0) {
			$assign(newElements, $Arrays::copyOf(es, len + $nc(cs)->length));
		} else {
			$assign(newElements, $new($ObjectArray, len + $nc(cs)->length));
			$System::arraycopy(es, 0, newElements, 0, index);
			$System::arraycopy(es, index, newElements, index + cs->length, numMoved);
		}
		$System::arraycopy(cs, 0, newElements, index, $nc(cs)->length);
		setArray(newElements);
		return true;
	}
}

void CopyOnWriteArrayList::forEach($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(action);
	{
		$var($ObjectArray, arr$, getArray());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Object0, x, arr$->get(i$));
			{
				$var($Object, e, x);
				action->accept(e);
			}
		}
	}
}

bool CopyOnWriteArrayList::removeIf($Predicate* filter) {
	$Objects::requireNonNull(filter);
	return bulkRemove(filter);
}

$longs* CopyOnWriteArrayList::nBits(int32_t n) {
	$init(CopyOnWriteArrayList);
	return $new($longs, ((n - 1) >> 6) + 1);
}

void CopyOnWriteArrayList::setBit($longs* bits, int32_t i) {
	$init(CopyOnWriteArrayList);
	(*$nc(bits))[i >> 6] |= $sl((int64_t)1, i);
}

bool CopyOnWriteArrayList::isClear($longs* bits, int32_t i) {
	$init(CopyOnWriteArrayList);
	return ((int64_t)($nc(bits)->get(i >> 6) & (uint64_t)($sl((int64_t)1, i)))) == 0;
}

bool CopyOnWriteArrayList::bulkRemove($Predicate* filter) {
	$synchronized(this->lock) {
		return bulkRemove(filter, 0, $nc($(getArray()))->length);
	}
}

bool CopyOnWriteArrayList::bulkRemove($Predicate* filter, int32_t i, int32_t end) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, es, getArray());
	for (; i < end && !$nc(filter)->test($(elementAt(es, i))); ++i) {
	}
	if (i < end) {
		int32_t beg = i;
		$var($longs, deathRow, nBits(end - beg));
		int32_t deleted = 1;
		$nc(deathRow)->set(0, 1);
		for (i = beg + 1; i < end; ++i) {
			if ($nc(filter)->test($(elementAt(es, i)))) {
				setBit(deathRow, i - beg);
				++deleted;
			}
		}
		if (es != getArray()) {
			$throwNew($ConcurrentModificationException);
		}
		$var($ObjectArray, newElts, $Arrays::copyOf(es, $nc(es)->length - deleted));
		int32_t w = beg;
		for (i = beg; i < end; ++i) {
			if (isClear(deathRow, i - beg)) {
				newElts->set(w++, $nc(es)->get(i));
			}
		}
		$System::arraycopy(es, i, newElts, w, $nc(es)->length - i);
		setArray(newElts);
		return true;
	} else {
		if (es != getArray()) {
			$throwNew($ConcurrentModificationException);
		}
		return false;
	}
}

void CopyOnWriteArrayList::replaceAll($UnaryOperator* operator$) {
	$synchronized(this->lock) {
		replaceAllRange(operator$, 0, $nc($(getArray()))->length);
	}
}

void CopyOnWriteArrayList::replaceAllRange($UnaryOperator* operator$, int32_t i, int32_t end) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(operator$);
	$var($ObjectArray, es, $cast($ObjectArray, $nc($(getArray()))->clone()));
	for (; i < end; ++i) {
		es->set(i, $(operator$->apply($(elementAt(es, i)))));
	}
	setArray(es);
}

void CopyOnWriteArrayList::sort($Comparator* c) {
	$synchronized(this->lock) {
		sortRange(c, 0, $nc($(getArray()))->length);
	}
}

void CopyOnWriteArrayList::sortRange($Comparator* c, int32_t i, int32_t end) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, es, $cast($ObjectArray, $nc($(getArray()))->clone()));
	$Arrays::sort(es, i, end, c);
	setArray(es);
}

void CopyOnWriteArrayList::writeObject($ObjectOutputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultWriteObject();
	$var($ObjectArray, es, getArray());
	s->writeInt($nc(es)->length);
	{
		$var($ObjectArray, arr$, es);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Object0, element, arr$->get(i$));
			s->writeObject(element);
		}
	}
}

void CopyOnWriteArrayList::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultReadObject();
	resetLock();
	int32_t len = s->readInt();
	$load($ObjectArray);
	$nc($($SharedSecrets::getJavaObjectInputStreamAccess()))->checkArray(s, $getClass($ObjectArray), len);
	$var($ObjectArray, es, $new($ObjectArray, len));
	for (int32_t i = 0; i < len; ++i) {
		es->set(i, $(s->readObject()));
	}
	setArray(es);
}

$String* CopyOnWriteArrayList::toString() {
	return $Arrays::toString($(getArray()));
}

bool CopyOnWriteArrayList::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if ($equals(o, this)) {
		return true;
	}
	if (!($instanceOf($List, o))) {
		return false;
	}
	$var($List, list, $cast($List, o));
	$var($Iterator, it, $nc(list)->iterator());
	{
		$var($ObjectArray, arr$, getArray());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Object0, element, arr$->get(i$));
			bool var$0 = !$nc(it)->hasNext();
			if (var$0 || !$Objects::equals(element, $($nc(it)->next()))) {
				return false;
			}
		}
	}
	return !$nc(it)->hasNext();
}

int32_t CopyOnWriteArrayList::hashCodeOfRange($ObjectArray* es, int32_t from, int32_t to) {
	$init(CopyOnWriteArrayList);
	$useLocalCurrentObjectStackCache();
	int32_t hashCode = 1;
	for (int32_t i = from; i < to; ++i) {
		$var($Object0, x, $nc(es)->get(i));
		hashCode = 31 * hashCode + (x == nullptr ? 0 : $nc($of(x))->hashCode());
	}
	return hashCode;
}

int32_t CopyOnWriteArrayList::hashCode() {
	$var($ObjectArray, es, getArray());
	return hashCodeOfRange(es, 0, $nc(es)->length);
}

$Iterator* CopyOnWriteArrayList::iterator() {
	return $new($CopyOnWriteArrayList$COWIterator, $(getArray()), 0);
}

$ListIterator* CopyOnWriteArrayList::listIterator() {
	return $new($CopyOnWriteArrayList$COWIterator, $(getArray()), 0);
}

$ListIterator* CopyOnWriteArrayList::listIterator(int32_t index) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, es, getArray());
	int32_t len = $nc(es)->length;
	if (index < 0 || index > len) {
		$throwNew($IndexOutOfBoundsException, $(outOfBounds(index, len)));
	}
	return $new($CopyOnWriteArrayList$COWIterator, es, index);
}

$Spliterator* CopyOnWriteArrayList::spliterator() {
	return $Spliterators::spliterator($(getArray()), $Spliterator::IMMUTABLE | $Spliterator::ORDERED);
}

$List* CopyOnWriteArrayList::subList(int32_t fromIndex, int32_t toIndex) {
	$synchronized(this->lock) {
		$var($ObjectArray, es, getArray());
		int32_t len = $nc(es)->length;
		int32_t size = toIndex - fromIndex;
		if (fromIndex < 0 || toIndex > len || size < 0) {
			$throwNew($IndexOutOfBoundsException);
		}
		return $new($CopyOnWriteArrayList$COWSubList, this, es, fromIndex, size);
	}
}

void CopyOnWriteArrayList::resetLock() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Field, lockField, $cast($Field, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(CopyOnWriteArrayList$$Lambda$lambda$resetLock$2$2)))));
	try {
		$nc(lockField)->set(this, $$new($Object));
	} catch ($IllegalAccessException&) {
		$var($IllegalAccessException, e, $catch());
		$throwNew($Error, static_cast<$Throwable*>(e));
	}
}

$Field* CopyOnWriteArrayList::lambda$resetLock$2() {
	$init(CopyOnWriteArrayList);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$var($Field, f, CopyOnWriteArrayList::class$->getDeclaredField("lock"_s));
		$nc(f)->setAccessible(true);
		return f;
	} catch ($ReflectiveOperationException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($Error, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

bool CopyOnWriteArrayList::lambda$retainAll$1($Collection* c, Object$* e) {
	$init(CopyOnWriteArrayList);
	return !$nc(c)->contains(e);
}

bool CopyOnWriteArrayList::lambda$removeAll$0($Collection* c, Object$* e) {
	$init(CopyOnWriteArrayList);
	return $nc(c)->contains(e);
}

CopyOnWriteArrayList::CopyOnWriteArrayList() {
}

$Class* CopyOnWriteArrayList::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CopyOnWriteArrayList$$Lambda$lambda$removeAll$0::classInfo$.name)) {
			return CopyOnWriteArrayList$$Lambda$lambda$removeAll$0::load$(name, initialize);
		}
		if (name->equals(CopyOnWriteArrayList$$Lambda$lambda$retainAll$1$1::classInfo$.name)) {
			return CopyOnWriteArrayList$$Lambda$lambda$retainAll$1$1::load$(name, initialize);
		}
		if (name->equals(CopyOnWriteArrayList$$Lambda$lambda$resetLock$2$2::classInfo$.name)) {
			return CopyOnWriteArrayList$$Lambda$lambda$resetLock$2$2::load$(name, initialize);
		}
	}
	$loadClass(CopyOnWriteArrayList, name, initialize, &_CopyOnWriteArrayList_ClassInfo_, allocate$CopyOnWriteArrayList);
	return class$;
}

$Class* CopyOnWriteArrayList::class$ = nullptr;

		} // concurrent
	} // util
} // java