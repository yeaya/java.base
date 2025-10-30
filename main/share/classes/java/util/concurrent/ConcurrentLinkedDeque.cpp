#include <java/util/concurrent/ConcurrentLinkedDeque.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/ExceptionInInitializerError.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/ConcurrentLinkedDeque$AbstractItr.h>
#include <java/util/concurrent/ConcurrentLinkedDeque$CLDSpliterator.h>
#include <java/util/concurrent/ConcurrentLinkedDeque$DescendingItr.h>
#include <java/util/concurrent/ConcurrentLinkedDeque$Itr.h>
#include <java/util/concurrent/ConcurrentLinkedDeque$Node.h>
#include <java/util/concurrent/Helpers.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef HEAD
#undef HOPS
#undef ITEM
#undef MAX_VALUE
#undef NEXT
#undef NEXT_TERMINATOR
#undef PREV
#undef PREV_TERMINATOR
#undef TAIL

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $ExceptionInInitializerError = ::java::lang::ExceptionInInitializerError;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Deque = ::java::util::Deque;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $ConcurrentLinkedDeque$AbstractItr = ::java::util::concurrent::ConcurrentLinkedDeque$AbstractItr;
using $ConcurrentLinkedDeque$CLDSpliterator = ::java::util::concurrent::ConcurrentLinkedDeque$CLDSpliterator;
using $ConcurrentLinkedDeque$DescendingItr = ::java::util::concurrent::ConcurrentLinkedDeque$DescendingItr;
using $ConcurrentLinkedDeque$Itr = ::java::util::concurrent::ConcurrentLinkedDeque$Itr;
using $ConcurrentLinkedDeque$Node = ::java::util::concurrent::ConcurrentLinkedDeque$Node;
using $Helpers = ::java::util::concurrent::Helpers;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {
		namespace concurrent {

class ConcurrentLinkedDeque$$Lambda$lambda$removeAll$0 : public $Predicate {
	$class(ConcurrentLinkedDeque$$Lambda$lambda$removeAll$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Collection* c) {
		$set(this, c, c);
	}
	virtual bool test(Object$* e) override {
		 return ConcurrentLinkedDeque::lambda$removeAll$0(c, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ConcurrentLinkedDeque$$Lambda$lambda$removeAll$0>());
	}
	$Collection* c = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ConcurrentLinkedDeque$$Lambda$lambda$removeAll$0::fieldInfos[2] = {
	{"c", "Ljava/util/Collection;", nullptr, $PUBLIC, $field(ConcurrentLinkedDeque$$Lambda$lambda$removeAll$0, c)},
	{}
};
$MethodInfo ConcurrentLinkedDeque$$Lambda$lambda$removeAll$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/Collection;)V", nullptr, $PUBLIC, $method(static_cast<void(ConcurrentLinkedDeque$$Lambda$lambda$removeAll$0::*)($Collection*)>(&ConcurrentLinkedDeque$$Lambda$lambda$removeAll$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo ConcurrentLinkedDeque$$Lambda$lambda$removeAll$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.concurrent.ConcurrentLinkedDeque$$Lambda$lambda$removeAll$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* ConcurrentLinkedDeque$$Lambda$lambda$removeAll$0::load$($String* name, bool initialize) {
	$loadClass(ConcurrentLinkedDeque$$Lambda$lambda$removeAll$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ConcurrentLinkedDeque$$Lambda$lambda$removeAll$0::class$ = nullptr;

class ConcurrentLinkedDeque$$Lambda$lambda$retainAll$1$1 : public $Predicate {
	$class(ConcurrentLinkedDeque$$Lambda$lambda$retainAll$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Collection* c) {
		$set(this, c, c);
	}
	virtual bool test(Object$* e) override {
		 return ConcurrentLinkedDeque::lambda$retainAll$1(c, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ConcurrentLinkedDeque$$Lambda$lambda$retainAll$1$1>());
	}
	$Collection* c = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ConcurrentLinkedDeque$$Lambda$lambda$retainAll$1$1::fieldInfos[2] = {
	{"c", "Ljava/util/Collection;", nullptr, $PUBLIC, $field(ConcurrentLinkedDeque$$Lambda$lambda$retainAll$1$1, c)},
	{}
};
$MethodInfo ConcurrentLinkedDeque$$Lambda$lambda$retainAll$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/Collection;)V", nullptr, $PUBLIC, $method(static_cast<void(ConcurrentLinkedDeque$$Lambda$lambda$retainAll$1$1::*)($Collection*)>(&ConcurrentLinkedDeque$$Lambda$lambda$retainAll$1$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo ConcurrentLinkedDeque$$Lambda$lambda$retainAll$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.concurrent.ConcurrentLinkedDeque$$Lambda$lambda$retainAll$1$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* ConcurrentLinkedDeque$$Lambda$lambda$retainAll$1$1::load$($String* name, bool initialize) {
	$loadClass(ConcurrentLinkedDeque$$Lambda$lambda$retainAll$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ConcurrentLinkedDeque$$Lambda$lambda$retainAll$1$1::class$ = nullptr;

$FieldInfo _ConcurrentLinkedDeque_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConcurrentLinkedDeque, serialVersionUID)},
	{"head", "Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;", $PRIVATE | $VOLATILE | $TRANSIENT, $field(ConcurrentLinkedDeque, head)},
	{"tail", "Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;", $PRIVATE | $VOLATILE | $TRANSIENT, $field(ConcurrentLinkedDeque, tail)},
	{"PREV_TERMINATOR", "Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "Ljava/util/concurrent/ConcurrentLinkedDeque$Node<Ljava/lang/Object;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ConcurrentLinkedDeque, PREV_TERMINATOR)},
	{"NEXT_TERMINATOR", "Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "Ljava/util/concurrent/ConcurrentLinkedDeque$Node<Ljava/lang/Object;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ConcurrentLinkedDeque, NEXT_TERMINATOR)},
	{"HOPS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConcurrentLinkedDeque, HOPS)},
	{"HEAD", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ConcurrentLinkedDeque, HEAD)},
	{"TAIL", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ConcurrentLinkedDeque, TAIL)},
	{"PREV", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ConcurrentLinkedDeque, PREV)},
	{"NEXT", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ConcurrentLinkedDeque, NEXT)},
	{"ITEM", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ConcurrentLinkedDeque, ITEM)},
	{}
};

$MethodInfo _ConcurrentLinkedDeque_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ConcurrentLinkedDeque::*)()>(&ConcurrentLinkedDeque::init$))},
	{"<init>", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<+TE;>;)V", $PUBLIC, $method(static_cast<void(ConcurrentLinkedDeque::*)($Collection*)>(&ConcurrentLinkedDeque::init$))},
	{"add", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC},
	{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<+TE;>;)Z", $PUBLIC},
	{"addFirst", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC},
	{"addLast", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC},
	{"bulkRemove", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TE;>;)Z", $PRIVATE, $method(static_cast<bool(ConcurrentLinkedDeque::*)($Predicate*)>(&ConcurrentLinkedDeque::bulkRemove))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"descendingIterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"element", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"first", "()Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "()Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;", 0},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"getFirst", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"getLast", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"initHeadTail", "(Ljava/util/concurrent/ConcurrentLinkedDeque$Node;Ljava/util/concurrent/ConcurrentLinkedDeque$Node;)V", "(Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;)V", $PRIVATE, $method(static_cast<void(ConcurrentLinkedDeque::*)($ConcurrentLinkedDeque$Node*,$ConcurrentLinkedDeque$Node*)>(&ConcurrentLinkedDeque::initHeadTail))},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"lambda$removeAll$0", "(Ljava/util/Collection;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Collection*,Object$*)>(&ConcurrentLinkedDeque::lambda$removeAll$0))},
	{"lambda$retainAll$1", "(Ljava/util/Collection;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Collection*,Object$*)>(&ConcurrentLinkedDeque::lambda$retainAll$1))},
	{"last", "()Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "()Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;", 0},
	{"linkFirst", "(Ljava/lang/Object;)V", "(TE;)V", $PRIVATE, $method(static_cast<void(ConcurrentLinkedDeque::*)(Object$*)>(&ConcurrentLinkedDeque::linkFirst))},
	{"linkLast", "(Ljava/lang/Object;)V", "(TE;)V", $PRIVATE, $method(static_cast<void(ConcurrentLinkedDeque::*)(Object$*)>(&ConcurrentLinkedDeque::linkLast))},
	{"newNode", "(Ljava/lang/Object;)Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "<E:Ljava/lang/Object;>(TE;)Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;", $STATIC, $method(static_cast<$ConcurrentLinkedDeque$Node*(*)(Object$*)>(&ConcurrentLinkedDeque::newNode))},
	{"nextTerminator", "()Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "()Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;", 0},
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
	{"pred", "(Ljava/util/concurrent/ConcurrentLinkedDeque$Node;)Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "(Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;)Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;", $FINAL, $method(static_cast<$ConcurrentLinkedDeque$Node*(ConcurrentLinkedDeque::*)($ConcurrentLinkedDeque$Node*)>(&ConcurrentLinkedDeque::pred))},
	{"prevTerminator", "()Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "()Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;", 0},
	{"push", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ConcurrentLinkedDeque::*)($ObjectInputStream*)>(&ConcurrentLinkedDeque::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"remove", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"removeFirst", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"removeFirstOccurrence", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"removeIf", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TE;>;)Z", $PUBLIC},
	{"removeLast", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"removeLastOccurrence", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"retainAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"screenNullResult", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TE;)TE;", $PRIVATE, $method(static_cast<$Object*(ConcurrentLinkedDeque::*)(Object$*)>(&ConcurrentLinkedDeque::screenNullResult))},
	{"size", "()I", nullptr, $PUBLIC},
	{"skipDeletedPredecessors", "(Ljava/util/concurrent/ConcurrentLinkedDeque$Node;)V", "(Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;)V", $PRIVATE, $method(static_cast<void(ConcurrentLinkedDeque::*)($ConcurrentLinkedDeque$Node*)>(&ConcurrentLinkedDeque::skipDeletedPredecessors))},
	{"skipDeletedSuccessors", "(Ljava/util/concurrent/ConcurrentLinkedDeque$Node;)V", "(Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;)V", $PRIVATE, $method(static_cast<void(ConcurrentLinkedDeque::*)($ConcurrentLinkedDeque$Node*)>(&ConcurrentLinkedDeque::skipDeletedSuccessors))},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"succ", "(Ljava/util/concurrent/ConcurrentLinkedDeque$Node;)Ljava/util/concurrent/ConcurrentLinkedDeque$Node;", "(Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;)Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;", $FINAL, $method(static_cast<$ConcurrentLinkedDeque$Node*(ConcurrentLinkedDeque::*)($ConcurrentLinkedDeque$Node*)>(&ConcurrentLinkedDeque::succ))},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{"toArrayInternal", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$ObjectArray*(ConcurrentLinkedDeque::*)($ObjectArray*)>(&ConcurrentLinkedDeque::toArrayInternal))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unlink", "(Ljava/util/concurrent/ConcurrentLinkedDeque$Node;)V", "(Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;)V", 0},
	{"unlinkFirst", "(Ljava/util/concurrent/ConcurrentLinkedDeque$Node;Ljava/util/concurrent/ConcurrentLinkedDeque$Node;)V", "(Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;)V", $PRIVATE, $method(static_cast<void(ConcurrentLinkedDeque::*)($ConcurrentLinkedDeque$Node*,$ConcurrentLinkedDeque$Node*)>(&ConcurrentLinkedDeque::unlinkFirst))},
	{"unlinkLast", "(Ljava/util/concurrent/ConcurrentLinkedDeque$Node;Ljava/util/concurrent/ConcurrentLinkedDeque$Node;)V", "(Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;Ljava/util/concurrent/ConcurrentLinkedDeque$Node<TE;>;)V", $PRIVATE, $method(static_cast<void(ConcurrentLinkedDeque::*)($ConcurrentLinkedDeque$Node*,$ConcurrentLinkedDeque$Node*)>(&ConcurrentLinkedDeque::unlinkLast))},
	{"updateHead", "()V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(ConcurrentLinkedDeque::*)()>(&ConcurrentLinkedDeque::updateHead))},
	{"updateTail", "()V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(ConcurrentLinkedDeque::*)()>(&ConcurrentLinkedDeque::updateTail))},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ConcurrentLinkedDeque::*)($ObjectOutputStream*)>(&ConcurrentLinkedDeque::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _ConcurrentLinkedDeque_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentLinkedDeque$CLDSpliterator", "java.util.concurrent.ConcurrentLinkedDeque", "CLDSpliterator", $FINAL},
	{"java.util.concurrent.ConcurrentLinkedDeque$DescendingItr", "java.util.concurrent.ConcurrentLinkedDeque", "DescendingItr", $PRIVATE},
	{"java.util.concurrent.ConcurrentLinkedDeque$Itr", "java.util.concurrent.ConcurrentLinkedDeque", "Itr", $PRIVATE},
	{"java.util.concurrent.ConcurrentLinkedDeque$AbstractItr", "java.util.concurrent.ConcurrentLinkedDeque", "AbstractItr", $PRIVATE | $ABSTRACT},
	{"java.util.concurrent.ConcurrentLinkedDeque$Node", "java.util.concurrent.ConcurrentLinkedDeque", "Node", $STATIC | $FINAL},
	{}
};

$ClassInfo _ConcurrentLinkedDeque_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.ConcurrentLinkedDeque",
	"java.util.AbstractCollection",
	"java.util.Deque,java.io.Serializable",
	_ConcurrentLinkedDeque_FieldInfo_,
	_ConcurrentLinkedDeque_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/AbstractCollection<TE;>;Ljava/util/Deque<TE;>;Ljava/io/Serializable;",
	nullptr,
	_ConcurrentLinkedDeque_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentLinkedDeque$CLDSpliterator,java.util.concurrent.ConcurrentLinkedDeque$DescendingItr,java.util.concurrent.ConcurrentLinkedDeque$Itr,java.util.concurrent.ConcurrentLinkedDeque$AbstractItr,java.util.concurrent.ConcurrentLinkedDeque$Node"
};

$Object* allocate$ConcurrentLinkedDeque($Class* clazz) {
	return $of($alloc(ConcurrentLinkedDeque));
}

bool ConcurrentLinkedDeque::containsAll($Collection* c) {
	 return this->$AbstractCollection::containsAll(c);
}

$ObjectArray* ConcurrentLinkedDeque::toArray($IntFunction* generator) {
	 return this->$AbstractCollection::toArray(generator);
}

bool ConcurrentLinkedDeque::equals(Object$* o) {
	 return this->$AbstractCollection::equals(o);
}

int32_t ConcurrentLinkedDeque::hashCode() {
	 return this->$AbstractCollection::hashCode();
}

$Stream* ConcurrentLinkedDeque::stream() {
	 return this->$AbstractCollection::stream();
}

$Stream* ConcurrentLinkedDeque::parallelStream() {
	 return this->$AbstractCollection::parallelStream();
}

$Object* ConcurrentLinkedDeque::clone() {
	 return this->$AbstractCollection::clone();
}

void ConcurrentLinkedDeque::finalize() {
	this->$AbstractCollection::finalize();
}

$ConcurrentLinkedDeque$Node* ConcurrentLinkedDeque::PREV_TERMINATOR = nullptr;
$ConcurrentLinkedDeque$Node* ConcurrentLinkedDeque::NEXT_TERMINATOR = nullptr;
$VarHandle* ConcurrentLinkedDeque::HEAD = nullptr;
$VarHandle* ConcurrentLinkedDeque::TAIL = nullptr;
$VarHandle* ConcurrentLinkedDeque::PREV = nullptr;
$VarHandle* ConcurrentLinkedDeque::NEXT = nullptr;
$VarHandle* ConcurrentLinkedDeque::ITEM = nullptr;

$ConcurrentLinkedDeque$Node* ConcurrentLinkedDeque::prevTerminator() {
	return ConcurrentLinkedDeque::PREV_TERMINATOR;
}

$ConcurrentLinkedDeque$Node* ConcurrentLinkedDeque::nextTerminator() {
	return ConcurrentLinkedDeque::NEXT_TERMINATOR;
}

$ConcurrentLinkedDeque$Node* ConcurrentLinkedDeque::newNode(Object$* item) {
	$init(ConcurrentLinkedDeque);
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentLinkedDeque$Node, node, $new($ConcurrentLinkedDeque$Node));
	$nc(ConcurrentLinkedDeque::ITEM)->set($$new($ObjectArray, {$of(node), item}));
	return node;
}

void ConcurrentLinkedDeque::linkFirst(Object$* e) {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentLinkedDeque$Node, newNode, ConcurrentLinkedDeque::newNode($Objects::requireNonNull(e)));
	bool restartFromHead$continue = false;
	for (;;) {
		{
			$var($ConcurrentLinkedDeque$Node, h, this->head);
			$var($ConcurrentLinkedDeque$Node, p, h);
			$var($ConcurrentLinkedDeque$Node, q, nullptr);
			for (;;) {
				bool var$0 = ($assign(q, $nc(p)->prev)) != nullptr;
				if (var$0 && ($assign(q, $nc(($assign(p, q)))->prev)) != nullptr) {
					$var($ConcurrentLinkedDeque$Node, var$1, h);
					$assign(p, (var$1 != ($assign(h, this->head))) ? h : q);
				} else if (p->next == p) {
					restartFromHead$continue = true;
					break;
				} else {
					$nc(ConcurrentLinkedDeque::NEXT)->set($$new($ObjectArray, {$of(newNode), $of(p)}));
					if ($nc(ConcurrentLinkedDeque::PREV)->compareAndSet($$new($ObjectArray, {$of(p), ($Object*)nullptr, $of(newNode)}))) {
						if (p != h) {
							$nc(ConcurrentLinkedDeque::HEAD)->weakCompareAndSet($$new($ObjectArray, {$of(this), $of(h), $of(newNode)}));
						}
						return;
					}
				}
			}
			if (restartFromHead$continue) {
				restartFromHead$continue = false;
				continue;
			}
		}
	}
}

void ConcurrentLinkedDeque::linkLast(Object$* e) {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentLinkedDeque$Node, newNode, ConcurrentLinkedDeque::newNode($Objects::requireNonNull(e)));
	bool restartFromTail$continue = false;
	for (;;) {
		{
			$var($ConcurrentLinkedDeque$Node, t, this->tail);
			$var($ConcurrentLinkedDeque$Node, p, t);
			$var($ConcurrentLinkedDeque$Node, q, nullptr);
			for (;;) {
				bool var$0 = ($assign(q, $nc(p)->next)) != nullptr;
				if (var$0 && ($assign(q, $nc(($assign(p, q)))->next)) != nullptr) {
					$var($ConcurrentLinkedDeque$Node, var$1, t);
					$assign(p, (var$1 != ($assign(t, this->tail))) ? t : q);
				} else if (p->prev == p) {
					restartFromTail$continue = true;
					break;
				} else {
					$nc(ConcurrentLinkedDeque::PREV)->set($$new($ObjectArray, {$of(newNode), $of(p)}));
					if ($nc(ConcurrentLinkedDeque::NEXT)->compareAndSet($$new($ObjectArray, {$of(p), ($Object*)nullptr, $of(newNode)}))) {
						if (p != t) {
							$nc(ConcurrentLinkedDeque::TAIL)->weakCompareAndSet($$new($ObjectArray, {$of(this), $of(t), $of(newNode)}));
						}
						return;
					}
				}
			}
			if (restartFromTail$continue) {
				restartFromTail$continue = false;
				continue;
			}
		}
	}
}

void ConcurrentLinkedDeque::unlink($ConcurrentLinkedDeque$Node* x) {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentLinkedDeque$Node, prev, $nc(x)->prev);
	$var($ConcurrentLinkedDeque$Node, next, x->next);
	if (prev == nullptr) {
		unlinkFirst(x, next);
	} else if (next == nullptr) {
		unlinkLast(x, prev);
	} else {
		$var($ConcurrentLinkedDeque$Node, activePred, nullptr);
		$var($ConcurrentLinkedDeque$Node, activeSucc, nullptr);
		bool isFirst = false;
		bool isLast = false;
		int32_t hops = 1;
		{
			$var($ConcurrentLinkedDeque$Node, p, prev);
			for (;; ++hops) {
				if ($nc(p)->item != nullptr) {
					$assign(activePred, p);
					isFirst = false;
					break;
				}
				$var($ConcurrentLinkedDeque$Node, q, $nc(p)->prev);
				if (q == nullptr) {
					if (p->next == p) {
						return;
					}
					$assign(activePred, p);
					isFirst = true;
					break;
				} else if (p == q) {
					return;
				} else {
					$assign(p, q);
				}
			}
		}
		{
			$var($ConcurrentLinkedDeque$Node, p, next);
			for (;; ++hops) {
				if ($nc(p)->item != nullptr) {
					$assign(activeSucc, p);
					isLast = false;
					break;
				}
				$var($ConcurrentLinkedDeque$Node, q, $nc(p)->next);
				if (q == nullptr) {
					if (p->prev == p) {
						return;
					}
					$assign(activeSucc, p);
					isLast = true;
					break;
				} else if (p == q) {
					return;
				} else {
					$assign(p, q);
				}
			}
		}
		if (hops < ConcurrentLinkedDeque::HOPS && (isFirst | isLast)) {
			return;
		}
		skipDeletedSuccessors(activePred);
		skipDeletedPredecessors(activeSucc);
		if ((isFirst | isLast) && ($nc(activePred)->next == activeSucc) && ($nc(activeSucc)->prev == activePred) && (isFirst ? activePred->prev == nullptr : activePred->item != nullptr) && (isLast ? activeSucc->next == nullptr : activeSucc->item != nullptr)) {
			updateHead();
			updateTail();
			$nc(ConcurrentLinkedDeque::PREV)->setRelease($$new($ObjectArray, {$of(x), isFirst ? $($of(prevTerminator())) : $of(x)}));
			$nc(ConcurrentLinkedDeque::NEXT)->setRelease($$new($ObjectArray, {$of(x), isLast ? $($of(nextTerminator())) : $of(x)}));
		}
	}
}

void ConcurrentLinkedDeque::unlinkFirst($ConcurrentLinkedDeque$Node* first, $ConcurrentLinkedDeque$Node* next) {
	$useLocalCurrentObjectStackCache();
	{
		$var($ConcurrentLinkedDeque$Node, o, nullptr);
		$var($ConcurrentLinkedDeque$Node, p, next);
		$var($ConcurrentLinkedDeque$Node, q, nullptr);
		for (;;) {
			if ($nc(p)->item != nullptr || ($assign(q, $nc(p)->next)) == nullptr) {
				if (o != nullptr && p->prev != p && $nc(ConcurrentLinkedDeque::NEXT)->compareAndSet($$new($ObjectArray, {$of(first), $of(next), $of(p)}))) {
					skipDeletedPredecessors(p);
					if ($nc(first)->prev == nullptr && (p->next == nullptr || p->item != nullptr) && p->prev == first) {
						updateHead();
						updateTail();
						$nc(ConcurrentLinkedDeque::NEXT)->setRelease($$new($ObjectArray, {$of(o), $of(o)}));
						$nc(ConcurrentLinkedDeque::PREV)->setRelease($$new($ObjectArray, {$of(o), $($of(prevTerminator()))}));
					}
				}
				return;
			} else if (p == q) {
				return;
			} else {
				$assign(o, p);
				$assign(p, q);
			}
		}
	}
}

void ConcurrentLinkedDeque::unlinkLast($ConcurrentLinkedDeque$Node* last, $ConcurrentLinkedDeque$Node* prev) {
	$useLocalCurrentObjectStackCache();
	{
		$var($ConcurrentLinkedDeque$Node, o, nullptr);
		$var($ConcurrentLinkedDeque$Node, p, prev);
		$var($ConcurrentLinkedDeque$Node, q, nullptr);
		for (;;) {
			if ($nc(p)->item != nullptr || ($assign(q, $nc(p)->prev)) == nullptr) {
				if (o != nullptr && p->next != p && $nc(ConcurrentLinkedDeque::PREV)->compareAndSet($$new($ObjectArray, {$of(last), $of(prev), $of(p)}))) {
					skipDeletedSuccessors(p);
					if ($nc(last)->next == nullptr && (p->prev == nullptr || p->item != nullptr) && p->next == last) {
						updateHead();
						updateTail();
						$nc(ConcurrentLinkedDeque::PREV)->setRelease($$new($ObjectArray, {$of(o), $of(o)}));
						$nc(ConcurrentLinkedDeque::NEXT)->setRelease($$new($ObjectArray, {$of(o), $($of(nextTerminator()))}));
					}
				}
				return;
			} else if (p == q) {
				return;
			} else {
				$assign(o, p);
				$assign(p, q);
			}
		}
	}
}

void ConcurrentLinkedDeque::updateHead() {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentLinkedDeque$Node, h, nullptr);
	$var($ConcurrentLinkedDeque$Node, p, nullptr);
	$var($ConcurrentLinkedDeque$Node, q, nullptr);
	bool restartFromHead$continue = false;
	while (true) {
		bool var$0 = $nc(($assign(h, this->head)))->item == nullptr;
		if (!(var$0 && ($assign(p, $nc(h)->prev)) != nullptr)) {
			break;
		}
		{
			for (;;) {
				bool var$1 = ($assign(q, $nc(p)->prev)) == nullptr;
				if (var$1 || ($assign(q, $nc(($assign(p, q)))->prev)) == nullptr) {
					if ($nc(ConcurrentLinkedDeque::HEAD)->compareAndSet($$new($ObjectArray, {$of(this), $of(h), $of(p)}))) {
						return;
					} else {
						restartFromHead$continue = true;
						break;
					}
				} else if (h != this->head) {
					restartFromHead$continue = true;
					break;
				} else {
					$assign(p, q);
				}
			}
			if (restartFromHead$continue) {
				restartFromHead$continue = false;
				continue;
			}
		}
	}
}

void ConcurrentLinkedDeque::updateTail() {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentLinkedDeque$Node, t, nullptr);
	$var($ConcurrentLinkedDeque$Node, p, nullptr);
	$var($ConcurrentLinkedDeque$Node, q, nullptr);
	bool restartFromTail$continue = false;
	while (true) {
		bool var$0 = $nc(($assign(t, this->tail)))->item == nullptr;
		if (!(var$0 && ($assign(p, $nc(t)->next)) != nullptr)) {
			break;
		}
		{
			for (;;) {
				bool var$1 = ($assign(q, $nc(p)->next)) == nullptr;
				if (var$1 || ($assign(q, $nc(($assign(p, q)))->next)) == nullptr) {
					if ($nc(ConcurrentLinkedDeque::TAIL)->compareAndSet($$new($ObjectArray, {$of(this), $of(t), $of(p)}))) {
						return;
					} else {
						restartFromTail$continue = true;
						break;
					}
				} else if (t != this->tail) {
					restartFromTail$continue = true;
					break;
				} else {
					$assign(p, q);
				}
			}
			if (restartFromTail$continue) {
				restartFromTail$continue = false;
				continue;
			}
		}
	}
}

void ConcurrentLinkedDeque::skipDeletedPredecessors($ConcurrentLinkedDeque$Node* x) {
	$useLocalCurrentObjectStackCache();
	bool whileActive$continue = false;
	do {
		$var($ConcurrentLinkedDeque$Node, prev, $nc(x)->prev);
		$var($ConcurrentLinkedDeque$Node, p, prev);
		bool findActive$break = false;
		for (;;) {
			if ($nc(p)->item != nullptr) {
				findActive$break = true;
				break;
			}
			$var($ConcurrentLinkedDeque$Node, q, $nc(p)->prev);
			if (q == nullptr) {
				if (p->next == p) {
					whileActive$continue = true;
					break;
				}
				findActive$break = true;
				break;
			} else if (p == q) {
				whileActive$continue = true;
				break;
			} else {
				$assign(p, q);
			}
		}
		if (whileActive$continue) {
			whileActive$continue = false;
			continue;
		}
		if (prev == p || $nc(ConcurrentLinkedDeque::PREV)->compareAndSet($$new($ObjectArray, {$of(x), $of(prev), $of(p)}))) {
			return;
		}
	} while ($nc(x)->item != nullptr || $nc(x)->next == nullptr);
}

void ConcurrentLinkedDeque::skipDeletedSuccessors($ConcurrentLinkedDeque$Node* x) {
	$useLocalCurrentObjectStackCache();
	bool whileActive$continue = false;
	do {
		$var($ConcurrentLinkedDeque$Node, next, $nc(x)->next);
		$var($ConcurrentLinkedDeque$Node, p, next);
		bool findActive$break = false;
		for (;;) {
			if ($nc(p)->item != nullptr) {
				findActive$break = true;
				break;
			}
			$var($ConcurrentLinkedDeque$Node, q, $nc(p)->next);
			if (q == nullptr) {
				if (p->prev == p) {
					whileActive$continue = true;
					break;
				}
				findActive$break = true;
				break;
			} else if (p == q) {
				whileActive$continue = true;
				break;
			} else {
				$assign(p, q);
			}
		}
		if (whileActive$continue) {
			whileActive$continue = false;
			continue;
		}
		if (next == p || $nc(ConcurrentLinkedDeque::NEXT)->compareAndSet($$new($ObjectArray, {$of(x), $of(next), $of(p)}))) {
			return;
		}
	} while ($nc(x)->item != nullptr || $nc(x)->prev == nullptr);
}

$ConcurrentLinkedDeque$Node* ConcurrentLinkedDeque::succ($ConcurrentLinkedDeque$Node* p$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentLinkedDeque$Node, p, p$renamed);
	$var($ConcurrentLinkedDeque$Node, var$0, p);
	if (var$0 == ($assign(p, $nc(p)->next))) {
		$assign(p, first());
	}
	return p;
}

$ConcurrentLinkedDeque$Node* ConcurrentLinkedDeque::pred($ConcurrentLinkedDeque$Node* p$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentLinkedDeque$Node, p, p$renamed);
	$var($ConcurrentLinkedDeque$Node, var$0, p);
	if (var$0 == ($assign(p, $nc(p)->prev))) {
		$assign(p, last());
	}
	return p;
}

$ConcurrentLinkedDeque$Node* ConcurrentLinkedDeque::first() {
	$useLocalCurrentObjectStackCache();
	bool restartFromHead$continue = false;
	for (;;) {
		{
			$var($ConcurrentLinkedDeque$Node, h, this->head);
			$var($ConcurrentLinkedDeque$Node, p, h);
			$var($ConcurrentLinkedDeque$Node, q, nullptr);
			for (;;) {
				bool var$0 = ($assign(q, $nc(p)->prev)) != nullptr;
				if (var$0 && ($assign(q, $nc(($assign(p, q)))->prev)) != nullptr) {
					$var($ConcurrentLinkedDeque$Node, var$1, h);
					$assign(p, (var$1 != ($assign(h, this->head))) ? h : q);
				} else if (p == h || $nc(ConcurrentLinkedDeque::HEAD)->compareAndSet($$new($ObjectArray, {$of(this), $of(h), $of(p)}))) {
					return p;
				} else {
					restartFromHead$continue = true;
					break;
				}
			}
			if (restartFromHead$continue) {
				restartFromHead$continue = false;
				continue;
			}
		}
	}
}

$ConcurrentLinkedDeque$Node* ConcurrentLinkedDeque::last() {
	$useLocalCurrentObjectStackCache();
	bool restartFromTail$continue = false;
	for (;;) {
		{
			$var($ConcurrentLinkedDeque$Node, t, this->tail);
			$var($ConcurrentLinkedDeque$Node, p, t);
			$var($ConcurrentLinkedDeque$Node, q, nullptr);
			for (;;) {
				bool var$0 = ($assign(q, $nc(p)->next)) != nullptr;
				if (var$0 && ($assign(q, $nc(($assign(p, q)))->next)) != nullptr) {
					$var($ConcurrentLinkedDeque$Node, var$1, t);
					$assign(p, (var$1 != ($assign(t, this->tail))) ? t : q);
				} else if (p == t || $nc(ConcurrentLinkedDeque::TAIL)->compareAndSet($$new($ObjectArray, {$of(this), $of(t), $of(p)}))) {
					return p;
				} else {
					restartFromTail$continue = true;
					break;
				}
			}
			if (restartFromTail$continue) {
				restartFromTail$continue = false;
				continue;
			}
		}
	}
}

$Object* ConcurrentLinkedDeque::screenNullResult(Object$* v) {
	if (v == nullptr) {
		$throwNew($NoSuchElementException);
	}
	return $of(v);
}

void ConcurrentLinkedDeque::init$() {
	$AbstractCollection::init$();
	$set(this, head, ($set(this, tail, $new($ConcurrentLinkedDeque$Node))));
}

void ConcurrentLinkedDeque::init$($Collection* c) {
	$useLocalCurrentObjectStackCache();
	$AbstractCollection::init$();
	$var($ConcurrentLinkedDeque$Node, h, nullptr);
	$var($ConcurrentLinkedDeque$Node, t, nullptr);
	{
		$var($Iterator, i$, $nc(c)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, e, i$->next());
			{
				$var($ConcurrentLinkedDeque$Node, newNode, ConcurrentLinkedDeque::newNode($Objects::requireNonNull(e)));
				if (h == nullptr) {
					$assign(h, ($assign(t, newNode)));
				} else {
					$nc(ConcurrentLinkedDeque::NEXT)->set($$new($ObjectArray, {$of(t), $of(newNode)}));
					$nc(ConcurrentLinkedDeque::PREV)->set($$new($ObjectArray, {$of(newNode), $of(t)}));
					$assign(t, newNode);
				}
			}
		}
	}
	initHeadTail(h, t);
}

void ConcurrentLinkedDeque::initHeadTail($ConcurrentLinkedDeque$Node* h$renamed, $ConcurrentLinkedDeque$Node* t$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ConcurrentLinkedDeque$Node, t, t$renamed);
	$var($ConcurrentLinkedDeque$Node, h, h$renamed);
	if (h == t) {
		if (h == nullptr) {
			$assign(h, ($assign(t, $new($ConcurrentLinkedDeque$Node))));
		} else {
			$var($ConcurrentLinkedDeque$Node, newNode, $new($ConcurrentLinkedDeque$Node));
			$nc(ConcurrentLinkedDeque::NEXT)->set($$new($ObjectArray, {$of(t), $of(newNode)}));
			$nc(ConcurrentLinkedDeque::PREV)->set($$new($ObjectArray, {$of(newNode), $of(t)}));
			$assign(t, newNode);
		}
	}
	$set(this, head, h);
	$set(this, tail, t);
}

void ConcurrentLinkedDeque::addFirst(Object$* e) {
	linkFirst(e);
}

void ConcurrentLinkedDeque::addLast(Object$* e) {
	linkLast(e);
}

bool ConcurrentLinkedDeque::offerFirst(Object$* e) {
	linkFirst(e);
	return true;
}

bool ConcurrentLinkedDeque::offerLast(Object$* e) {
	linkLast(e);
	return true;
}

$Object* ConcurrentLinkedDeque::peekFirst() {
	$useLocalCurrentObjectStackCache();
	bool restart$continue = false;
	for (;;) {
		$var($Object, item, nullptr);
		$var($ConcurrentLinkedDeque$Node, first, this->first());
		$var($ConcurrentLinkedDeque$Node, p, first);
		while (($assign(item, $nc(p)->item)) == nullptr) {
			$var($ConcurrentLinkedDeque$Node, var$0, p);
			if (var$0 == ($assign(p, p->next))) {
				restart$continue = true;
				break;
			}
			if (p == nullptr) {
				break;
			}
		}
		if (restart$continue) {
			restart$continue = false;
			continue;
		}
		if ($nc(first)->prev != nullptr) {
			continue;
		}
		return $of(item);
	}
}

$Object* ConcurrentLinkedDeque::peekLast() {
	$useLocalCurrentObjectStackCache();
	bool restart$continue = false;
	for (;;) {
		$var($Object, item, nullptr);
		$var($ConcurrentLinkedDeque$Node, last, this->last());
		$var($ConcurrentLinkedDeque$Node, p, last);
		while (($assign(item, $nc(p)->item)) == nullptr) {
			$var($ConcurrentLinkedDeque$Node, var$0, p);
			if (var$0 == ($assign(p, p->prev))) {
				restart$continue = true;
				break;
			}
			if (p == nullptr) {
				break;
			}
		}
		if (restart$continue) {
			restart$continue = false;
			continue;
		}
		if ($nc(last)->next != nullptr) {
			continue;
		}
		return $of(item);
	}
}

$Object* ConcurrentLinkedDeque::getFirst() {
	return $of(screenNullResult($(peekFirst())));
}

$Object* ConcurrentLinkedDeque::getLast() {
	return $of(screenNullResult($(peekLast())));
}

$Object* ConcurrentLinkedDeque::pollFirst() {
	$useLocalCurrentObjectStackCache();
	bool restart$continue = false;
	for (;;) {
		{
			$var($ConcurrentLinkedDeque$Node, first, this->first());
			$var($ConcurrentLinkedDeque$Node, p, first);
			for (;;) {
				$var($Object, item, nullptr);
				if (($assign(item, $nc(p)->item)) != nullptr) {
					if ($nc(first)->prev != nullptr) {
						restart$continue = true;
						break;
					}
					if ($nc(ConcurrentLinkedDeque::ITEM)->compareAndSet($$new($ObjectArray, {$of(p), item, ($Object*)nullptr}))) {
						unlink(p);
						return $of(item);
					}
				}
				$var($ConcurrentLinkedDeque$Node, var$0, p);
				if (var$0 == ($assign(p, $nc(p)->next))) {
					restart$continue = true;
					break;
				}
				if (p == nullptr) {
					if ($nc(first)->prev != nullptr) {
						restart$continue = true;
						break;
					}
					return $of(nullptr);
				}
			}
			if (restart$continue) {
				restart$continue = false;
				continue;
			}
		}
	}
}

$Object* ConcurrentLinkedDeque::pollLast() {
	$useLocalCurrentObjectStackCache();
	bool restart$continue = false;
	for (;;) {
		{
			$var($ConcurrentLinkedDeque$Node, last, this->last());
			$var($ConcurrentLinkedDeque$Node, p, last);
			for (;;) {
				$var($Object, item, nullptr);
				if (($assign(item, $nc(p)->item)) != nullptr) {
					if ($nc(last)->next != nullptr) {
						restart$continue = true;
						break;
					}
					if ($nc(ConcurrentLinkedDeque::ITEM)->compareAndSet($$new($ObjectArray, {$of(p), item, ($Object*)nullptr}))) {
						unlink(p);
						return $of(item);
					}
				}
				$var($ConcurrentLinkedDeque$Node, var$0, p);
				if (var$0 == ($assign(p, $nc(p)->prev))) {
					restart$continue = true;
					break;
				}
				if (p == nullptr) {
					if ($nc(last)->next != nullptr) {
						restart$continue = true;
						break;
					}
					return $of(nullptr);
				}
			}
			if (restart$continue) {
				restart$continue = false;
				continue;
			}
		}
	}
}

$Object* ConcurrentLinkedDeque::removeFirst() {
	return $of(screenNullResult($(pollFirst())));
}

$Object* ConcurrentLinkedDeque::removeLast() {
	return $of(screenNullResult($(pollLast())));
}

bool ConcurrentLinkedDeque::offer(Object$* e) {
	return offerLast(e);
}

bool ConcurrentLinkedDeque::add(Object$* e) {
	return offerLast(e);
}

$Object* ConcurrentLinkedDeque::poll() {
	return $of(pollFirst());
}

$Object* ConcurrentLinkedDeque::peek() {
	return $of(peekFirst());
}

$Object* ConcurrentLinkedDeque::remove() {
	return $of(removeFirst());
}

$Object* ConcurrentLinkedDeque::pop() {
	return $of(removeFirst());
}

$Object* ConcurrentLinkedDeque::element() {
	return $of(getFirst());
}

void ConcurrentLinkedDeque::push(Object$* e) {
	addFirst(e);
}

bool ConcurrentLinkedDeque::removeFirstOccurrence(Object$* o) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(o);
	{
		$var($ConcurrentLinkedDeque$Node, p, first());
		for (; p != nullptr; $assign(p, succ(p))) {
			$var($Object, item, nullptr);
			bool var$1 = ($assign(item, $nc(p)->item)) != nullptr;
			bool var$0 = var$1 && $of(o)->equals(item);
			if (var$0 && $nc(ConcurrentLinkedDeque::ITEM)->compareAndSet($$new($ObjectArray, {$of(p), item, ($Object*)nullptr}))) {
				unlink(p);
				return true;
			}
		}
	}
	return false;
}

bool ConcurrentLinkedDeque::removeLastOccurrence(Object$* o) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(o);
	{
		$var($ConcurrentLinkedDeque$Node, p, last());
		for (; p != nullptr; $assign(p, pred(p))) {
			$var($Object, item, nullptr);
			bool var$1 = ($assign(item, $nc(p)->item)) != nullptr;
			bool var$0 = var$1 && $of(o)->equals(item);
			if (var$0 && $nc(ConcurrentLinkedDeque::ITEM)->compareAndSet($$new($ObjectArray, {$of(p), item, ($Object*)nullptr}))) {
				unlink(p);
				return true;
			}
		}
	}
	return false;
}

bool ConcurrentLinkedDeque::contains(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if (o != nullptr) {
		{
			$var($ConcurrentLinkedDeque$Node, p, first());
			for (; p != nullptr; $assign(p, succ(p))) {
				$var($Object, item, nullptr);
				bool var$0 = ($assign(item, $nc(p)->item)) != nullptr;
				if (var$0 && $of(o)->equals(item)) {
					return true;
				}
			}
		}
	}
	return false;
}

bool ConcurrentLinkedDeque::isEmpty() {
	return peekFirst() == nullptr;
}

int32_t ConcurrentLinkedDeque::size() {
	$useLocalCurrentObjectStackCache();
	bool restart$continue = false;
	for (;;) {
		int32_t count = 0;
		{
			$var($ConcurrentLinkedDeque$Node, p, first());
			for (; p != nullptr;) {
				if (p->item != nullptr) {
					if (++count == $Integer::MAX_VALUE) {
						break;
					}
				}
				$var($ConcurrentLinkedDeque$Node, var$0, p);
				if (var$0 == ($assign(p, p->next))) {
					restart$continue = true;
					break;
				}
			}
			if (restart$continue) {
				restart$continue = false;
				continue;
			}
		}
		return count;
	}
}

bool ConcurrentLinkedDeque::remove(Object$* o) {
	return removeFirstOccurrence(o);
}

bool ConcurrentLinkedDeque::addAll($Collection* c) {
	$useLocalCurrentObjectStackCache();
	if ($equals(c, this)) {
		$throwNew($IllegalArgumentException);
	}
	$var($ConcurrentLinkedDeque$Node, beginningOfTheEnd, nullptr);
	$var($ConcurrentLinkedDeque$Node, last, nullptr);
	{
		$var($Iterator, i$, $nc(c)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, e, i$->next());
			{
				$var($ConcurrentLinkedDeque$Node, newNode, ConcurrentLinkedDeque::newNode($Objects::requireNonNull(e)));
				if (beginningOfTheEnd == nullptr) {
					$assign(beginningOfTheEnd, ($assign(last, newNode)));
				} else {
					$nc(ConcurrentLinkedDeque::NEXT)->set($$new($ObjectArray, {$of(last), $of(newNode)}));
					$nc(ConcurrentLinkedDeque::PREV)->set($$new($ObjectArray, {$of(newNode), $of(last)}));
					$assign(last, newNode);
				}
			}
		}
	}
	if (beginningOfTheEnd == nullptr) {
		return false;
	}
	bool restartFromTail$continue = false;
	for (;;) {
		{
			$var($ConcurrentLinkedDeque$Node, t, this->tail);
			$var($ConcurrentLinkedDeque$Node, p, t);
			$var($ConcurrentLinkedDeque$Node, q, nullptr);
			for (;;) {
				bool var$0 = ($assign(q, $nc(p)->next)) != nullptr;
				if (var$0 && ($assign(q, $nc(($assign(p, q)))->next)) != nullptr) {
					$var($ConcurrentLinkedDeque$Node, var$1, t);
					$assign(p, (var$1 != ($assign(t, this->tail))) ? t : q);
				} else if (p->prev == p) {
					restartFromTail$continue = true;
					break;
				} else {
					$nc(ConcurrentLinkedDeque::PREV)->set($$new($ObjectArray, {$of(beginningOfTheEnd), $of(p)}));
					if ($nc(ConcurrentLinkedDeque::NEXT)->compareAndSet($$new($ObjectArray, {$of(p), ($Object*)nullptr, $of(beginningOfTheEnd)}))) {
						if (!$nc(ConcurrentLinkedDeque::TAIL)->weakCompareAndSet($$new($ObjectArray, {$of(this), $of(t), $of(last)}))) {
							$assign(t, this->tail);
							if ($nc(last)->next == nullptr) {
								$nc(ConcurrentLinkedDeque::TAIL)->weakCompareAndSet($$new($ObjectArray, {$of(this), $of(t), $of(last)}));
							}
						}
						return true;
					}
				}
			}
			if (restartFromTail$continue) {
				restartFromTail$continue = false;
				continue;
			}
		}
	}
}

void ConcurrentLinkedDeque::clear() {
	while (pollFirst() != nullptr) {
	}
}

$String* ConcurrentLinkedDeque::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, a, nullptr);
	bool restart$continue = false;
	for (;;) {
		int32_t charLength = 0;
		int32_t size = 0;
		{
			$var($ConcurrentLinkedDeque$Node, p, first());
			for (; p != nullptr;) {
				$var($Object, item, nullptr);
				if (($assign(item, p->item)) != nullptr) {
					if (a == nullptr) {
						$assign(a, $new($StringArray, 4));
					} else if (size == $nc(a)->length) {
						$assign(a, $fcast($StringArray, $Arrays::copyOf(a, 2 * size)));
					}
					$var($String, s, $nc($of(item))->toString());
					$nc(a)->set(size++, s);
					charLength += $nc(s)->length();
				}
				$var($ConcurrentLinkedDeque$Node, var$0, p);
				if (var$0 == ($assign(p, p->next))) {
					restart$continue = true;
					break;
				}
			}
			if (restart$continue) {
				restart$continue = false;
				continue;
			}
		}
		if (size == 0) {
			return "[]"_s;
		}
		return $Helpers::toString(a, size, charLength);
	}
}

$ObjectArray* ConcurrentLinkedDeque::toArrayInternal($ObjectArray* a) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, x, a);
	bool restart$continue = false;
	for (;;) {
		int32_t size = 0;
		{
			$var($ConcurrentLinkedDeque$Node, p, first());
			for (; p != nullptr;) {
				$var($Object, item, nullptr);
				if (($assign(item, p->item)) != nullptr) {
					if (x == nullptr) {
						$assign(x, $new($ObjectArray, 4));
					} else if (size == $nc(x)->length) {
						$assign(x, $Arrays::copyOf(x, 2 * (size + 4)));
					}
					$nc(x)->set(size++, item);
				}
				$var($ConcurrentLinkedDeque$Node, var$0, p);
				if (var$0 == ($assign(p, p->next))) {
					restart$continue = true;
					break;
				}
			}
			if (restart$continue) {
				restart$continue = false;
				continue;
			}
		}
		if (x == nullptr) {
			return $new($ObjectArray, 0);
		} else if (a != nullptr && size <= a->length) {
			if (a != x) {
				$System::arraycopy(x, 0, a, 0, size);
			}
			if (size < a->length) {
				a->set(size, nullptr);
			}
			return a;
		}
		return (size == $nc(x)->length) ? x : $Arrays::copyOf(x, size);
	}
}

$ObjectArray* ConcurrentLinkedDeque::toArray() {
	return toArrayInternal(nullptr);
}

$ObjectArray* ConcurrentLinkedDeque::toArray($ObjectArray* a) {
	if (a == nullptr) {
		$throwNew($NullPointerException);
	}
	return toArrayInternal(a);
}

$Iterator* ConcurrentLinkedDeque::iterator() {
	return $new($ConcurrentLinkedDeque$Itr, this);
}

$Iterator* ConcurrentLinkedDeque::descendingIterator() {
	return $new($ConcurrentLinkedDeque$DescendingItr, this);
}

$Spliterator* ConcurrentLinkedDeque::spliterator() {
	return $new($ConcurrentLinkedDeque$CLDSpliterator, this);
}

void ConcurrentLinkedDeque::writeObject($ObjectOutputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultWriteObject();
	{
		$var($ConcurrentLinkedDeque$Node, p, first());
		for (; p != nullptr; $assign(p, succ(p))) {
			$var($Object, item, nullptr);
			if (($assign(item, $nc(p)->item)) != nullptr) {
				s->writeObject(item);
			}
		}
	}
	s->writeObject(nullptr);
}

void ConcurrentLinkedDeque::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultReadObject();
	$var($ConcurrentLinkedDeque$Node, h, nullptr);
	$var($ConcurrentLinkedDeque$Node, t, nullptr);
	{
		$var($Object, item, nullptr);
		for (; ($assign(item, s->readObject())) != nullptr;) {
			$var($ConcurrentLinkedDeque$Node, newNode, ConcurrentLinkedDeque::newNode(item));
			if (h == nullptr) {
				$assign(h, ($assign(t, newNode)));
			} else {
				$nc(ConcurrentLinkedDeque::NEXT)->set($$new($ObjectArray, {$of(t), $of(newNode)}));
				$nc(ConcurrentLinkedDeque::PREV)->set($$new($ObjectArray, {$of(newNode), $of(t)}));
				$assign(t, newNode);
			}
		}
	}
	initHeadTail(h, t);
}

bool ConcurrentLinkedDeque::removeIf($Predicate* filter) {
	$Objects::requireNonNull(filter);
	return bulkRemove(filter);
}

bool ConcurrentLinkedDeque::removeAll($Collection* c) {
	$Objects::requireNonNull(c);
	return bulkRemove(static_cast<$Predicate*>($$new(ConcurrentLinkedDeque$$Lambda$lambda$removeAll$0, c)));
}

bool ConcurrentLinkedDeque::retainAll($Collection* c) {
	$Objects::requireNonNull(c);
	return bulkRemove(static_cast<$Predicate*>($$new(ConcurrentLinkedDeque$$Lambda$lambda$retainAll$1$1, c)));
}

bool ConcurrentLinkedDeque::bulkRemove($Predicate* filter) {
	$useLocalCurrentObjectStackCache();
	bool removed = false;
	{
		$var($ConcurrentLinkedDeque$Node, p, first());
		$var($ConcurrentLinkedDeque$Node, succ, nullptr);
		for (; p != nullptr; $assign(p, succ)) {
			$assign(succ, this->succ(p));
			$var($Object, item, nullptr);
			bool var$1 = ($assign(item, $nc(p)->item)) != nullptr;
			bool var$0 = var$1 && $nc(filter)->test(item);
			if (var$0 && $nc(ConcurrentLinkedDeque::ITEM)->compareAndSet($$new($ObjectArray, {$of(p), item, ($Object*)nullptr}))) {
				unlink(p);
				removed = true;
			}
		}
	}
	return removed;
}

void ConcurrentLinkedDeque::forEach($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(action);
	$var($Object, item, nullptr);
	{
		$var($ConcurrentLinkedDeque$Node, p, first());
		for (; p != nullptr; $assign(p, succ(p))) {
			if (($assign(item, p->item)) != nullptr) {
				action->accept(item);
			}
		}
	}
}

bool ConcurrentLinkedDeque::lambda$retainAll$1($Collection* c, Object$* e) {
	$init(ConcurrentLinkedDeque);
	return !$nc(c)->contains(e);
}

bool ConcurrentLinkedDeque::lambda$removeAll$0($Collection* c, Object$* e) {
	$init(ConcurrentLinkedDeque);
	return $nc(c)->contains(e);
}

void clinit$ConcurrentLinkedDeque($Class* class$) {
	$beforeCallerSensitive();
	{
		$assignStatic(ConcurrentLinkedDeque::PREV_TERMINATOR, $new($ConcurrentLinkedDeque$Node));
		$set($nc(ConcurrentLinkedDeque::PREV_TERMINATOR), next, ConcurrentLinkedDeque::PREV_TERMINATOR);
		$assignStatic(ConcurrentLinkedDeque::NEXT_TERMINATOR, $new($ConcurrentLinkedDeque$Node));
		$set($nc(ConcurrentLinkedDeque::NEXT_TERMINATOR), prev, ConcurrentLinkedDeque::NEXT_TERMINATOR);
		try {
			$var($MethodHandles$Lookup, l, $MethodHandles::lookup());
			$load($ConcurrentLinkedDeque$Node);
			$assignStatic(ConcurrentLinkedDeque::HEAD, $nc(l)->findVarHandle(ConcurrentLinkedDeque::class$, "head"_s, $ConcurrentLinkedDeque$Node::class$));
			$assignStatic(ConcurrentLinkedDeque::TAIL, l->findVarHandle(ConcurrentLinkedDeque::class$, "tail"_s, $ConcurrentLinkedDeque$Node::class$));
			$assignStatic(ConcurrentLinkedDeque::PREV, l->findVarHandle($ConcurrentLinkedDeque$Node::class$, "prev"_s, $ConcurrentLinkedDeque$Node::class$));
			$assignStatic(ConcurrentLinkedDeque::NEXT, l->findVarHandle($ConcurrentLinkedDeque$Node::class$, "next"_s, $ConcurrentLinkedDeque$Node::class$));
			$assignStatic(ConcurrentLinkedDeque::ITEM, l->findVarHandle($ConcurrentLinkedDeque$Node::class$, "item"_s, $Object::class$));
		} catch ($ReflectiveOperationException& e) {
			$throwNew($ExceptionInInitializerError, static_cast<$Throwable*>(e));
		}
	}
}

ConcurrentLinkedDeque::ConcurrentLinkedDeque() {
}

$Class* ConcurrentLinkedDeque::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ConcurrentLinkedDeque$$Lambda$lambda$removeAll$0::classInfo$.name)) {
			return ConcurrentLinkedDeque$$Lambda$lambda$removeAll$0::load$(name, initialize);
		}
		if (name->equals(ConcurrentLinkedDeque$$Lambda$lambda$retainAll$1$1::classInfo$.name)) {
			return ConcurrentLinkedDeque$$Lambda$lambda$retainAll$1$1::load$(name, initialize);
		}
	}
	$loadClass(ConcurrentLinkedDeque, name, initialize, &_ConcurrentLinkedDeque_ClassInfo_, clinit$ConcurrentLinkedDeque, allocate$ConcurrentLinkedDeque);
	return class$;
}

$Class* ConcurrentLinkedDeque::class$ = nullptr;

		} // concurrent
	} // util
} // java