#include <HashCodeTest$Edge.h>
#include <HashCodeTest$Node.h>
#include <HashCodeTest.h>
#include <jcpp.h>

using $HashCodeTest$Node = ::HashCodeTest$Node;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* HashCodeTest$Edge::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"setEndNode", "(LHashCodeTest$Node;)V", "(TN;)V", $PUBLIC | $ABSTRACT, $virtualMethod(HashCodeTest$Edge, setEndNode, void, $HashCodeTest$Node*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HashCodeTest$Edge", "HashCodeTest", "Edge", $STATIC | $INTERFACE | $ABSTRACT},
		{"HashCodeTest$Node", "HashCodeTest", "Node", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"HashCodeTest$Edge",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<N::LHashCodeTest$Node<+LHashCodeTest$Edge<TN;>;>;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"HashCodeTest"
	};
	$loadClass(HashCodeTest$Edge, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HashCodeTest$Edge);
	});
	return class$;
}

$Class* HashCodeTest$Edge::class$ = nullptr;