#include <java/util/ArrayDeque.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractCollection.h>
#include <java/util/ArrayDeque$DeqIterator.h>
#include <java/util/ArrayDeque$DeqSpliterator.h>
#include <java/util/ArrayDeque$DescendingIterator.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/access/JavaObjectInputStreamAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jcpp.h>

#undef MAX_ARRAY_SIZE
#undef MAX_VALUE

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractCollection = ::java::util::AbstractCollection;
using $ArrayDeque$DeqIterator = ::java::util::ArrayDeque$DeqIterator;
using $ArrayDeque$DeqSpliterator = ::java::util::ArrayDeque$DeqSpliterator;
using $ArrayDeque$DescendingIterator = ::java::util::ArrayDeque$DescendingIterator;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $Deque = ::java::util::Deque;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $JavaObjectInputStreamAccess = ::jdk::internal::access::JavaObjectInputStreamAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace java {
	namespace util {

class ArrayDeque$$Lambda$addLast : public $Consumer {
	$class(ArrayDeque$$Lambda$addLast, $NO_CLASS_INIT, $Consumer)
public:
	void init$(ArrayDeque* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* e) override {
		$nc(inst$)->addLast(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ArrayDeque$$Lambda$addLast>());
	}
	ArrayDeque* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ArrayDeque$$Lambda$addLast::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ArrayDeque$$Lambda$addLast, inst$)},
	{}
};
$MethodInfo ArrayDeque$$Lambda$addLast::methodInfos[3] = {
	{"<init>", "(Ljava/util/ArrayDeque;)V", nullptr, $PUBLIC, $method(static_cast<void(ArrayDeque$$Lambda$addLast::*)(ArrayDeque*)>(&ArrayDeque$$Lambda$addLast::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ArrayDeque$$Lambda$addLast::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.ArrayDeque$$Lambda$addLast",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* ArrayDeque$$Lambda$addLast::load$($String* name, bool initialize) {
	$loadClass(ArrayDeque$$Lambda$addLast, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ArrayDeque$$Lambda$addLast::class$ = nullptr;

class ArrayDeque$$Lambda$lambda$removeAll$0$1 : public $Predicate {
	$class(ArrayDeque$$Lambda$lambda$removeAll$0$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Collection* c) {
		$set(this, c, c);
	}
	virtual bool test(Object$* e) override {
		 return ArrayDeque::lambda$removeAll$0(c, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ArrayDeque$$Lambda$lambda$removeAll$0$1>());
	}
	$Collection* c = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ArrayDeque$$Lambda$lambda$removeAll$0$1::fieldInfos[2] = {
	{"c", "Ljava/util/Collection;", nullptr, $PUBLIC, $field(ArrayDeque$$Lambda$lambda$removeAll$0$1, c)},
	{}
};
$MethodInfo ArrayDeque$$Lambda$lambda$removeAll$0$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/Collection;)V", nullptr, $PUBLIC, $method(static_cast<void(ArrayDeque$$Lambda$lambda$removeAll$0$1::*)($Collection*)>(&ArrayDeque$$Lambda$lambda$removeAll$0$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo ArrayDeque$$Lambda$lambda$removeAll$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.ArrayDeque$$Lambda$lambda$removeAll$0$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* ArrayDeque$$Lambda$lambda$removeAll$0$1::load$($String* name, bool initialize) {
	$loadClass(ArrayDeque$$Lambda$lambda$removeAll$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ArrayDeque$$Lambda$lambda$removeAll$0$1::class$ = nullptr;

class ArrayDeque$$Lambda$lambda$retainAll$1$2 : public $Predicate {
	$class(ArrayDeque$$Lambda$lambda$retainAll$1$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Collection* c) {
		$set(this, c, c);
	}
	virtual bool test(Object$* e) override {
		 return ArrayDeque::lambda$retainAll$1(c, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ArrayDeque$$Lambda$lambda$retainAll$1$2>());
	}
	$Collection* c = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ArrayDeque$$Lambda$lambda$retainAll$1$2::fieldInfos[2] = {
	{"c", "Ljava/util/Collection;", nullptr, $PUBLIC, $field(ArrayDeque$$Lambda$lambda$retainAll$1$2, c)},
	{}
};
$MethodInfo ArrayDeque$$Lambda$lambda$retainAll$1$2::methodInfos[3] = {
	{"<init>", "(Ljava/util/Collection;)V", nullptr, $PUBLIC, $method(static_cast<void(ArrayDeque$$Lambda$lambda$retainAll$1$2::*)($Collection*)>(&ArrayDeque$$Lambda$lambda$retainAll$1$2::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo ArrayDeque$$Lambda$lambda$retainAll$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.ArrayDeque$$Lambda$lambda$retainAll$1$2",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* ArrayDeque$$Lambda$lambda$retainAll$1$2::load$($String* name, bool initialize) {
	$loadClass(ArrayDeque$$Lambda$lambda$retainAll$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ArrayDeque$$Lambda$lambda$retainAll$1$2::class$ = nullptr;

$FieldInfo _ArrayDeque_FieldInfo_[] = {
	{"elements", "[Ljava/lang/Object;", nullptr, $TRANSIENT, $field(ArrayDeque, elements)},
	{"head", "I", nullptr, $TRANSIENT, $field(ArrayDeque, head)},
	{"tail", "I", nullptr, $TRANSIENT, $field(ArrayDeque, tail)},
	{"MAX_ARRAY_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ArrayDeque, MAX_ARRAY_SIZE)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ArrayDeque, serialVersionUID)},
	{}
};

$MethodInfo _ArrayDeque_MethodInfo_[] = {
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ArrayDeque::*)()>(&ArrayDeque::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ArrayDeque::*)(int32_t)>(&ArrayDeque::init$))},
	{"<init>", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<+TE;>;)V", $PUBLIC, $method(static_cast<void(ArrayDeque::*)($Collection*)>(&ArrayDeque::init$))},
	{"add", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC},
	{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<+TE;>;)Z", $PUBLIC},
	{"addFirst", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC},
	{"addLast", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC},
	{"bulkRemove", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TE;>;)Z", $PRIVATE, $method(static_cast<bool(ArrayDeque::*)($Predicate*)>(&ArrayDeque::bulkRemove))},
	{"bulkRemoveModified", "(Ljava/util/function/Predicate;I)Z", "(Ljava/util/function/Predicate<-TE;>;I)Z", $PRIVATE, $method(static_cast<bool(ArrayDeque::*)($Predicate*,int32_t)>(&ArrayDeque::bulkRemoveModified))},
	{"checkInvariants", "()V", nullptr, 0},
	{"circularClear", "([Ljava/lang/Object;II)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ObjectArray*,int32_t,int32_t)>(&ArrayDeque::circularClear))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"clone", "()Ljava/util/ArrayDeque;", "()Ljava/util/ArrayDeque<TE;>;", $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"copyElements", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<+TE;>;)V", $PRIVATE, $method(static_cast<void(ArrayDeque::*)($Collection*)>(&ArrayDeque::copyElements))},
	{"dec", "(II)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&ArrayDeque::dec))},
	{"delete", "(I)Z", nullptr, 0},
	{"descendingIterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"element", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"elementAt", "([Ljava/lang/Object;I)Ljava/lang/Object;", "<E:Ljava/lang/Object;>([Ljava/lang/Object;I)TE;", $STATIC | $FINAL, $method(static_cast<$Object*(*)($ObjectArray*,int32_t)>(&ArrayDeque::elementAt))},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"getFirst", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"getLast", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"grow", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(ArrayDeque::*)(int32_t)>(&ArrayDeque::grow))},
	{"inc", "(II)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&ArrayDeque::inc))},
	{"inc", "(III)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t)>(&ArrayDeque::inc))},
	{"isClear", "([JI)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($longs*,int32_t)>(&ArrayDeque::isClear))},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"lambda$removeAll$0", "(Ljava/util/Collection;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Collection*,Object$*)>(&ArrayDeque::lambda$removeAll$0))},
	{"lambda$retainAll$1", "(Ljava/util/Collection;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Collection*,Object$*)>(&ArrayDeque::lambda$retainAll$1))},
	{"nBits", "(I)[J", nullptr, $PRIVATE | $STATIC, $method(static_cast<$longs*(*)(int32_t)>(&ArrayDeque::nBits))},
	{"newCapacity", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ArrayDeque::*)(int32_t,int32_t)>(&ArrayDeque::newCapacity))},
	{"nonNullElementAt", "([Ljava/lang/Object;I)Ljava/lang/Object;", "<E:Ljava/lang/Object;>([Ljava/lang/Object;I)TE;", $STATIC | $FINAL, $method(static_cast<$Object*(*)($ObjectArray*,int32_t)>(&ArrayDeque::nonNullElementAt))},
	{"offer", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC},
	{"offerFirst", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC},
	{"offerLast", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"peek", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"peekFirst", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"peekLast", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"poll", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"pollFirst", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"pollLast", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"pop", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"push", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ArrayDeque::*)($ObjectInputStream*)>(&ArrayDeque::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"remove", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"removeFirst", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"removeFirstOccurrence", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"removeIf", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TE;>;)Z", $PUBLIC},
	{"removeLast", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"removeLastOccurrence", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"retainAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"setBit", "([JI)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($longs*,int32_t)>(&ArrayDeque::setBit))},
	{"size", "()I", nullptr, $PUBLIC},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"sub", "(III)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t)>(&ArrayDeque::sub))},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "(Ljava/lang/Class;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<[TT;>;)[TT;", $PRIVATE, $method(static_cast<$ObjectArray*(ArrayDeque::*)($Class*)>(&ArrayDeque::toArray))},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ArrayDeque::*)($ObjectOutputStream*)>(&ArrayDeque::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _ArrayDeque_InnerClassesInfo_[] = {
	{"java.util.ArrayDeque$DeqSpliterator", "java.util.ArrayDeque", "DeqSpliterator", $FINAL},
	{"java.util.ArrayDeque$DescendingIterator", "java.util.ArrayDeque", "DescendingIterator", $PRIVATE},
	{"java.util.ArrayDeque$DeqIterator", "java.util.ArrayDeque", "DeqIterator", $PRIVATE},
	{}
};

$ClassInfo _ArrayDeque_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.ArrayDeque",
	"java.util.AbstractCollection",
	"java.util.Deque,java.lang.Cloneable,java.io.Serializable",
	_ArrayDeque_FieldInfo_,
	_ArrayDeque_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/AbstractCollection<TE;>;Ljava/util/Deque<TE;>;Ljava/lang/Cloneable;Ljava/io/Serializable;",
	nullptr,
	_ArrayDeque_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.ArrayDeque$DeqSpliterator,java.util.ArrayDeque$DescendingIterator,java.util.ArrayDeque$DeqIterator"
};

$Object* allocate$ArrayDeque($Class* clazz) {
	return $of($alloc(ArrayDeque));
}

bool ArrayDeque::containsAll($Collection* c) {
	 return this->$AbstractCollection::containsAll(c);
}

$String* ArrayDeque::toString() {
	 return this->$AbstractCollection::toString();
}

$ObjectArray* ArrayDeque::toArray($IntFunction* generator) {
	 return this->$AbstractCollection::toArray(generator);
}

bool ArrayDeque::equals(Object$* o) {
	 return this->$AbstractCollection::equals(o);
}

int32_t ArrayDeque::hashCode() {
	 return this->$AbstractCollection::hashCode();
}

$Stream* ArrayDeque::stream() {
	 return this->$AbstractCollection::stream();
}

$Stream* ArrayDeque::parallelStream() {
	 return this->$AbstractCollection::parallelStream();
}

void ArrayDeque::finalize() {
	this->$AbstractCollection::finalize();
}

void ArrayDeque::grow(int32_t needed) {
	int32_t oldCapacity = $nc(this->elements)->length;
	int32_t newCapacity = 0;
	int32_t jump = (oldCapacity < 64) ? (oldCapacity + 2) : (oldCapacity >> 1);
	if (jump < needed || (newCapacity = (oldCapacity + jump)) - ArrayDeque::MAX_ARRAY_SIZE > 0) {
		newCapacity = this->newCapacity(needed, jump);
	}
	$var($ObjectArray, es, $assignField(this, elements, $Arrays::copyOf(this->elements, newCapacity)));
	if (this->tail < this->head || (this->tail == this->head && $nc(es)->get(this->head) != nullptr)) {
		int32_t newSpace = newCapacity - oldCapacity;
		$System::arraycopy(es, this->head, es, this->head + newSpace, oldCapacity - this->head);
		{
			int32_t i = this->head;
			int32_t to = (this->head += newSpace);
			for (; i < to; ++i) {
				es->set(i, nullptr);
			}
		}
	}
}

int32_t ArrayDeque::newCapacity(int32_t needed, int32_t jump) {
	int32_t oldCapacity = $nc(this->elements)->length;
	int32_t minCapacity = 0;
	if ((minCapacity = oldCapacity + needed) - ArrayDeque::MAX_ARRAY_SIZE > 0) {
		if (minCapacity < 0) {
			$throwNew($IllegalStateException, "Sorry, deque too big"_s);
		}
		return $Integer::MAX_VALUE;
	}
	if (needed > jump) {
		return minCapacity;
	}
	return (oldCapacity + jump - ArrayDeque::MAX_ARRAY_SIZE < 0) ? oldCapacity + jump : ArrayDeque::MAX_ARRAY_SIZE;
}

void ArrayDeque::init$() {
	$AbstractCollection::init$();
	$set(this, elements, $new($ObjectArray, 16 + 1));
}

void ArrayDeque::init$(int32_t numElements) {
	$AbstractCollection::init$();
	$set(this, elements, $new($ObjectArray, (numElements < 1) ? 1 : (numElements == $Integer::MAX_VALUE) ? $Integer::MAX_VALUE : numElements + 1));
}

void ArrayDeque::init$($Collection* c) {
	ArrayDeque::init$($nc(c)->size());
	copyElements(c);
}

int32_t ArrayDeque::inc(int32_t i, int32_t modulus) {
	$init(ArrayDeque);
	if (++i >= modulus) {
		i = 0;
	}
	return i;
}

int32_t ArrayDeque::dec(int32_t i, int32_t modulus) {
	$init(ArrayDeque);
	if (--i < 0) {
		i = modulus - 1;
	}
	return i;
}

int32_t ArrayDeque::inc(int32_t i, int32_t distance, int32_t modulus) {
	$init(ArrayDeque);
	if ((i += distance) - modulus >= 0) {
		i -= modulus;
	}
	return i;
}

int32_t ArrayDeque::sub(int32_t i, int32_t j, int32_t modulus) {
	$init(ArrayDeque);
	if ((i -= j) < 0) {
		i += modulus;
	}
	return i;
}

$Object* ArrayDeque::elementAt($ObjectArray* es, int32_t i) {
	$init(ArrayDeque);
	return $of($nc(es)->get(i));
}

$Object* ArrayDeque::nonNullElementAt($ObjectArray* es, int32_t i) {
	$init(ArrayDeque);
	$var($Object, e, $nc(es)->get(i));
	if (e == nullptr) {
		$throwNew($ConcurrentModificationException);
	}
	return $of(e);
}

void ArrayDeque::addFirst(Object$* e) {
	if (e == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($ObjectArray, es, this->elements);
	$nc(es)->set(this->head = dec(this->head, es->length), e);
	if (this->head == this->tail) {
		grow(1);
	}
}

void ArrayDeque::addLast(Object$* e) {
	if (e == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($ObjectArray, es, this->elements);
	$nc(es)->set(this->tail, e);
	if (this->head == (this->tail = inc(this->tail, es->length))) {
		grow(1);
	}
}

bool ArrayDeque::addAll($Collection* c) {
	int32_t s = 0;
	int32_t needed = 0;
	int32_t var$0 = (s = size());
	if ((needed = var$0 + $nc(c)->size() + 1 - $nc(this->elements)->length) > 0) {
		grow(needed);
	}
	copyElements(c);
	return size() > s;
}

void ArrayDeque::copyElements($Collection* c) {
	$nc(c)->forEach(static_cast<$Consumer*>($$new(ArrayDeque$$Lambda$addLast, this)));
}

bool ArrayDeque::offerFirst(Object$* e) {
	addFirst(e);
	return true;
}

bool ArrayDeque::offerLast(Object$* e) {
	addLast(e);
	return true;
}

$Object* ArrayDeque::removeFirst() {
	$var($Object, e, pollFirst());
	if (e == nullptr) {
		$throwNew($NoSuchElementException);
	}
	return $of(e);
}

$Object* ArrayDeque::removeLast() {
	$var($Object, e, pollLast());
	if (e == nullptr) {
		$throwNew($NoSuchElementException);
	}
	return $of(e);
}

$Object* ArrayDeque::pollFirst() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, es, nullptr);
	int32_t h = 0;
	$var($Object, e, elementAt($assign(es, this->elements), h = this->head));
	if (e != nullptr) {
		$nc(es)->set(h, nullptr);
		this->head = inc(h, es->length);
	}
	return $of(e);
}

$Object* ArrayDeque::pollLast() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, es, nullptr);
	int32_t t = 0;
	$var($ObjectArray, var$0, $assign(es, this->elements));
	$var($Object, e, elementAt(var$0, t = dec(this->tail, $nc(es)->length)));
	if (e != nullptr) {
		$nc(es)->set(this->tail = t, nullptr);
	}
	return $of(e);
}

$Object* ArrayDeque::getFirst() {
	$var($Object, e, elementAt(this->elements, this->head));
	if (e == nullptr) {
		$throwNew($NoSuchElementException);
	}
	return $of(e);
}

$Object* ArrayDeque::getLast() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, es, this->elements);
	$var($Object, e, elementAt(es, dec(this->tail, $nc(es)->length)));
	if (e == nullptr) {
		$throwNew($NoSuchElementException);
	}
	return $of(e);
}

$Object* ArrayDeque::peekFirst() {
	return $of(elementAt(this->elements, this->head));
}

$Object* ArrayDeque::peekLast() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, es, nullptr);
	$var($ObjectArray, var$0, $assign(es, this->elements));
	return $of(elementAt(var$0, dec(this->tail, $nc(es)->length)));
}

bool ArrayDeque::removeFirstOccurrence(Object$* o) {
	if (o != nullptr) {
		$var($ObjectArray, es, this->elements);
		{
			int32_t i = this->head;
			int32_t end = this->tail;
			int32_t to = (i <= end) ? end : $nc(es)->length;
			for (;; i = 0, to = end) {
				for (; i < to; ++i) {
					if ($of(o)->equals(es->get(i))) {
						delete$(i);
						return true;
					}
				}
				if (to == end) {
					break;
				}
			}
		}
	}
	return false;
}

bool ArrayDeque::removeLastOccurrence(Object$* o) {
	if (o != nullptr) {
		$var($ObjectArray, es, this->elements);
		{
			int32_t i = this->tail;
			int32_t end = this->head;
			int32_t to = (i >= end) ? end : 0;
			for (;; i = $nc(es)->length, to = end) {
				for (--i; i > to - 1; --i) {
					if ($of(o)->equals(es->get(i))) {
						delete$(i);
						return true;
					}
				}
				if (to == end) {
					break;
				}
			}
		}
	}
	return false;
}

bool ArrayDeque::add(Object$* e) {
	addLast(e);
	return true;
}

bool ArrayDeque::offer(Object$* e) {
	return offerLast(e);
}

$Object* ArrayDeque::remove() {
	return $of(removeFirst());
}

$Object* ArrayDeque::poll() {
	return $of(pollFirst());
}

$Object* ArrayDeque::element() {
	return $of(getFirst());
}

$Object* ArrayDeque::peek() {
	return $of(peekFirst());
}

void ArrayDeque::push(Object$* e) {
	addFirst(e);
}

$Object* ArrayDeque::pop() {
	return $of(removeFirst());
}

bool ArrayDeque::delete$(int32_t i) {
	$var($ObjectArray, es, this->elements);
	int32_t capacity = $nc(es)->length;
	int32_t h = 0;
	int32_t t = 0;
	int32_t front = sub(i, h = this->head, capacity);
	int32_t back = sub(t = this->tail, i, capacity) - 1;
	if (front < back) {
		if (h <= i) {
			$System::arraycopy(es, h, es, h + 1, front);
		} else {
			$System::arraycopy(es, 0, es, 1, i);
			es->set(0, es->get(capacity - 1));
			$System::arraycopy(es, h, es, h + 1, front - (i + 1));
		}
		es->set(h, nullptr);
		this->head = inc(h, capacity);
		return false;
	} else {
		this->tail = dec(t, capacity);
		if (i <= this->tail) {
			$System::arraycopy(es, i + 1, es, i, back);
		} else {
			$System::arraycopy(es, i + 1, es, i, capacity - (i + 1));
			es->set(capacity - 1, es->get(0));
			$System::arraycopy(es, 1, es, 0, t - 1);
		}
		es->set(this->tail, nullptr);
		return true;
	}
}

int32_t ArrayDeque::size() {
	return sub(this->tail, this->head, $nc(this->elements)->length);
}

bool ArrayDeque::isEmpty() {
	return this->head == this->tail;
}

$Iterator* ArrayDeque::iterator() {
	return $new($ArrayDeque$DeqIterator, this);
}

$Iterator* ArrayDeque::descendingIterator() {
	return $new($ArrayDeque$DescendingIterator, this);
}

$Spliterator* ArrayDeque::spliterator() {
	return $new($ArrayDeque$DeqSpliterator, this);
}

void ArrayDeque::forEach($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(action);
	$var($ObjectArray, es, this->elements);
	{
		int32_t i = this->head;
		int32_t end = this->tail;
		int32_t to = (i <= end) ? end : $nc(es)->length;
		for (;; i = 0, to = end) {
			for (; i < to; ++i) {
				action->accept($(elementAt(es, i)));
			}
			if (to == end) {
				if (end != this->tail) {
					$throwNew($ConcurrentModificationException);
				}
				break;
			}
		}
	}
}

bool ArrayDeque::removeIf($Predicate* filter) {
	$Objects::requireNonNull(filter);
	return bulkRemove(filter);
}

bool ArrayDeque::removeAll($Collection* c) {
	$Objects::requireNonNull(c);
	return bulkRemove(static_cast<$Predicate*>($$new(ArrayDeque$$Lambda$lambda$removeAll$0$1, c)));
}

bool ArrayDeque::retainAll($Collection* c) {
	$Objects::requireNonNull(c);
	return bulkRemove(static_cast<$Predicate*>($$new(ArrayDeque$$Lambda$lambda$retainAll$1$2, c)));
}

bool ArrayDeque::bulkRemove($Predicate* filter) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, es, this->elements);
	{
		int32_t i = this->head;
		int32_t end = this->tail;
		int32_t to = (i <= end) ? end : $nc(es)->length;
		for (;; i = 0, to = end) {
			for (; i < to; ++i) {
				if ($nc(filter)->test($(elementAt(es, i)))) {
					return bulkRemoveModified(filter, i);
				}
			}
			if (to == end) {
				if (end != this->tail) {
					$throwNew($ConcurrentModificationException);
				}
				break;
			}
		}
	}
	return false;
}

$longs* ArrayDeque::nBits(int32_t n) {
	$init(ArrayDeque);
	return $new($longs, ((n - 1) >> 6) + 1);
}

void ArrayDeque::setBit($longs* bits, int32_t i) {
	$init(ArrayDeque);
	(*$nc(bits))[i >> 6] |= $sl((int64_t)1, i);
}

bool ArrayDeque::isClear($longs* bits, int32_t i) {
	$init(ArrayDeque);
	return ((int64_t)($nc(bits)->get(i >> 6) & (uint64_t)($sl((int64_t)1, i)))) == 0;
}

bool ArrayDeque::bulkRemoveModified($Predicate* filter, int32_t beg) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, es, this->elements);
	int32_t capacity = $nc(es)->length;
	int32_t end = this->tail;
	$var($longs, deathRow, nBits(sub(end, beg, capacity)));
	$nc(deathRow)->set(0, 1);
	{
		int32_t i = beg + 1;
		int32_t to = (i <= end) ? end : es->length;
		int32_t k = beg;
		for (;; i = 0, to = end, k -= capacity) {
			for (; i < to; ++i) {
				if ($nc(filter)->test($(elementAt(es, i)))) {
					setBit(deathRow, i - k);
				}
			}
			if (to == end) {
				break;
			}
		}
	}
	int32_t w = beg;
	{
		int32_t i = beg + 1;
		int32_t to = (i <= end) ? end : es->length;
		int32_t k = beg;
		for (;; w = 0) {
			for (; i < to; ++i) {
				if (isClear(deathRow, i - k)) {
					es->set(w++, es->get(i));
				}
			}
			if (to == end) {
				break;
			}
			for (i = 0, to = end, k -= capacity; i < to && w < capacity; ++i) {
				if (isClear(deathRow, i - k)) {
					es->set(w++, es->get(i));
				}
			}
			if (i >= to) {
				if (w == capacity) {
					w = 0;
				}
				break;
			}
		}
	}
	if (end != this->tail) {
		$throwNew($ConcurrentModificationException);
	}
	circularClear(es, this->tail = w, end);
	return true;
}

bool ArrayDeque::contains(Object$* o) {
	if (o != nullptr) {
		$var($ObjectArray, es, this->elements);
		{
			int32_t i = this->head;
			int32_t end = this->tail;
			int32_t to = (i <= end) ? end : $nc(es)->length;
			for (;; i = 0, to = end) {
				for (; i < to; ++i) {
					if ($of(o)->equals(es->get(i))) {
						return true;
					}
				}
				if (to == end) {
					break;
				}
			}
		}
	}
	return false;
}

bool ArrayDeque::remove(Object$* o) {
	return removeFirstOccurrence(o);
}

void ArrayDeque::clear() {
	circularClear(this->elements, this->head, this->tail);
	this->head = (this->tail = 0);
}

void ArrayDeque::circularClear($ObjectArray* es, int32_t i, int32_t end) {
	$init(ArrayDeque);
	for (int32_t to = (i <= end) ? end : $nc(es)->length;; i = 0, to = end) {
		for (; i < to; ++i) {
			es->set(i, nullptr);
		}
		if (to == end) {
			break;
		}
	}
}

$ObjectArray* ArrayDeque::toArray() {
	$load($ObjectArray);
	return toArray($getClass($ObjectArray));
}

$ObjectArray* ArrayDeque::toArray($Class* klazz) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, es, this->elements);
	$var($ObjectArray, a, nullptr);
	int32_t head = this->head;
	int32_t tail = this->tail;
	int32_t end = 0;
	if ((end = tail + ((head <= tail) ? 0 : $nc(es)->length)) >= 0) {
		$assign(a, $Arrays::copyOfRange(es, head, end, klazz));
	} else {
		$assign(a, $Arrays::copyOfRange(es, 0, end - head, klazz));
		$System::arraycopy(es, head, a, 0, es->length - head);
	}
	if (end != tail) {
		$System::arraycopy(es, 0, a, $nc(es)->length - head, tail);
	}
	return a;
}

$ObjectArray* ArrayDeque::toArray($ObjectArray* a) {
	int32_t size = 0;
	if ((size = this->size()) > $nc(a)->length) {
		return toArray($of(a)->getClass());
	}
	$var($ObjectArray, es, this->elements);
	{
		int32_t i = this->head;
		int32_t j = 0;
		int32_t len = $Math::min(size, $nc(es)->length - i);
		for (;; i = 0, len = this->tail) {
			$System::arraycopy(es, i, a, j, len);
			if ((j += len) == size) {
				break;
			}
		}
	}
	if (size < $nc(a)->length) {
		a->set(size, nullptr);
	}
	return a;
}

$Object* ArrayDeque::clone() {
	$useLocalCurrentObjectStackCache();
	try {
		$var(ArrayDeque, result, $cast(ArrayDeque, $AbstractCollection::clone()));
		$set($nc(result), elements, $Arrays::copyOf(this->elements, $nc(this->elements)->length));
		return $of(result);
	} catch ($CloneNotSupportedException&) {
		$var($CloneNotSupportedException, e, $catch());
		$throwNew($AssertionError);
	}
	$shouldNotReachHere();
}

void ArrayDeque::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	s->writeInt(size());
	$var($ObjectArray, es, this->elements);
	{
		int32_t i = this->head;
		int32_t end = this->tail;
		int32_t to = (i <= end) ? end : $nc(es)->length;
		for (;; i = 0, to = end) {
			for (; i < to; ++i) {
				s->writeObject(es->get(i));
			}
			if (to == end) {
				break;
			}
		}
	}
}

void ArrayDeque::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultReadObject();
	int32_t size = s->readInt();
	$load($ObjectArray);
	$nc($($SharedSecrets::getJavaObjectInputStreamAccess()))->checkArray(s, $getClass($ObjectArray), size + 1);
	$set(this, elements, $new($ObjectArray, size + 1));
	this->tail = size;
	for (int32_t i = 0; i < size; ++i) {
		$nc(this->elements)->set(i, $(s->readObject()));
	}
}

void ArrayDeque::checkInvariants() {
	$useLocalCurrentObjectStackCache();
	try {
		int32_t capacity = $nc(this->elements)->length;
	} catch ($Throwable&) {
		$var($Throwable, t, $catch());
		$init($System);
		$nc($System::err)->printf("head=%d tail=%d capacity=%d%n"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf(this->head))),
			$($of($Integer::valueOf(this->tail))),
			$($of($Integer::valueOf($nc(this->elements)->length)))
		}));
		$nc($System::err)->printf("elements=%s%n"_s, $$new($ObjectArray, {$($of($Arrays::toString(this->elements)))}));
		$throw(t);
	}
}

bool ArrayDeque::lambda$retainAll$1($Collection* c, Object$* e) {
	$init(ArrayDeque);
	return !$nc(c)->contains(e);
}

bool ArrayDeque::lambda$removeAll$0($Collection* c, Object$* e) {
	$init(ArrayDeque);
	return $nc(c)->contains(e);
}

ArrayDeque::ArrayDeque() {
}

$Class* ArrayDeque::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ArrayDeque$$Lambda$addLast::classInfo$.name)) {
			return ArrayDeque$$Lambda$addLast::load$(name, initialize);
		}
		if (name->equals(ArrayDeque$$Lambda$lambda$removeAll$0$1::classInfo$.name)) {
			return ArrayDeque$$Lambda$lambda$removeAll$0$1::load$(name, initialize);
		}
		if (name->equals(ArrayDeque$$Lambda$lambda$retainAll$1$2::classInfo$.name)) {
			return ArrayDeque$$Lambda$lambda$retainAll$1$2::load$(name, initialize);
		}
	}
	$loadClass(ArrayDeque, name, initialize, &_ArrayDeque_ClassInfo_, allocate$ArrayDeque);
	return class$;
}

$Class* ArrayDeque::class$ = nullptr;

	} // util
} // java