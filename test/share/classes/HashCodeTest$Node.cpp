#include <HashCodeTest$Node.h>
#include <HashCodeTest$Edge.h>
#include <HashCodeTest.h>
#include <jcpp.h>

using $HashCodeTest$Edge = ::HashCodeTest$Edge;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* HashCodeTest$Node::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getOutEdge", "()LHashCodeTest$Edge;", "()TE;", $PUBLIC | $ABSTRACT, $virtualMethod(HashCodeTest$Node, getOutEdge, $HashCodeTest$Edge*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HashCodeTest$Node", "HashCodeTest", "Node", $STATIC | $INTERFACE | $ABSTRACT},
		{"HashCodeTest$Edge", "HashCodeTest", "Edge", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"HashCodeTest$Node",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<E::LHashCodeTest$Edge<+LHashCodeTest$Node<TE;>;>;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"HashCodeTest"
	};
	$loadClass(HashCodeTest$Node, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HashCodeTest$Node);
	});
	return class$;
}

$Class* HashCodeTest$Node::class$ = nullptr;