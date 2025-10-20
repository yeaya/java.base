#include <java/util/stream/Nodes$CollectionNode.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/stream/Nodes.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $BaseStream = ::java::util::stream::BaseStream;
using $Node = ::java::util::stream::Node;
using $Nodes = ::java::util::stream::Nodes;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Nodes$CollectionNode_FieldInfo_[] = {
	{"c", "Ljava/util/Collection;", "Ljava/util/Collection<TT;>;", $PRIVATE | $FINAL, $field(Nodes$CollectionNode, c)},
	{}
};

$MethodInfo _Nodes$CollectionNode_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<TT;>;)V", 0, $method(static_cast<void(Nodes$CollectionNode::*)($Collection*)>(&Nodes$CollectionNode::init$))},
	{"asArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", "(Ljava/util/function/IntFunction<[TT;>;)[TT;", $PUBLIC},
	{"copyInto", "([Ljava/lang/Object;I)V", "([TT;I)V", $PUBLIC},
	{"count", "()J", nullptr, $PUBLIC},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TT;>;)V", $PUBLIC},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TT;>;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Nodes$CollectionNode_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$CollectionNode", "java.util.stream.Nodes", "CollectionNode", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Nodes$CollectionNode_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.Nodes$CollectionNode",
	"java.lang.Object",
	"java.util.stream.Node",
	_Nodes$CollectionNode_FieldInfo_,
	_Nodes$CollectionNode_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/stream/Node<TT;>;",
	nullptr,
	_Nodes$CollectionNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$CollectionNode($Class* clazz) {
	return $of($alloc(Nodes$CollectionNode));
}

void Nodes$CollectionNode::init$($Collection* c) {
	$set(this, c, c);
}

$Spliterator* Nodes$CollectionNode::spliterator() {
	return $nc($($nc(this->c)->stream()))->spliterator();
}

void Nodes$CollectionNode::copyInto($ObjectArray* array, int32_t offset) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->c)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, t, i$->next());
			$nc(array)->set(offset++, t);
		}
	}
}

$ObjectArray* Nodes$CollectionNode::asArray($IntFunction* generator) {
	return $nc(this->c)->toArray($cast($ObjectArray, $($nc(generator)->apply($nc(this->c)->size()))));
}

int64_t Nodes$CollectionNode::count() {
	return $nc(this->c)->size();
}

void Nodes$CollectionNode::forEach($Consumer* consumer) {
	$nc(this->c)->forEach(consumer);
}

$String* Nodes$CollectionNode::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("CollectionNode[%d][%s]"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf($nc(this->c)->size()))),
		$of(this->c)
	}));
}

Nodes$CollectionNode::Nodes$CollectionNode() {
}

$Class* Nodes$CollectionNode::load$($String* name, bool initialize) {
	$loadClass(Nodes$CollectionNode, name, initialize, &_Nodes$CollectionNode_ClassInfo_, allocate$Nodes$CollectionNode);
	return class$;
}

$Class* Nodes$CollectionNode::class$ = nullptr;

		} // stream
	} // util
} // java