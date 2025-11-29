#include <HashCodeTest$Node.h>

#include <HashCodeTest$Edge.h>
#include <HashCodeTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HashCodeTest$Node_MethodInfo_[] = {
	{"getOutEdge", "()LHashCodeTest$Edge;", "()TE;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _HashCodeTest$Node_InnerClassesInfo_[] = {
	{"HashCodeTest$Node", "HashCodeTest", "Node", $STATIC | $INTERFACE | $ABSTRACT},
	{"HashCodeTest$Edge", "HashCodeTest", "Edge", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _HashCodeTest$Node_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"HashCodeTest$Node",
	nullptr,
	nullptr,
	nullptr,
	_HashCodeTest$Node_MethodInfo_,
	"<E::LHashCodeTest$Edge<+LHashCodeTest$Node<TE;>;>;>Ljava/lang/Object;",
	nullptr,
	_HashCodeTest$Node_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HashCodeTest"
};

$Object* allocate$HashCodeTest$Node($Class* clazz) {
	return $of($alloc(HashCodeTest$Node));
}

$Class* HashCodeTest$Node::load$($String* name, bool initialize) {
	$loadClass(HashCodeTest$Node, name, initialize, &_HashCodeTest$Node_ClassInfo_, allocate$HashCodeTest$Node);
	return class$;
}

$Class* HashCodeTest$Node::class$ = nullptr;