#include <HashCodeTest$Edge.h>

#include <HashCodeTest$Node.h>
#include <HashCodeTest.h>
#include <jcpp.h>

using $HashCodeTest = ::HashCodeTest;
using $HashCodeTest$Node = ::HashCodeTest$Node;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HashCodeTest$Edge_MethodInfo_[] = {
	{"setEndNode", "(LHashCodeTest$Node;)V", "(TN;)V", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _HashCodeTest$Edge_InnerClassesInfo_[] = {
	{"HashCodeTest$Edge", "HashCodeTest", "Edge", $STATIC | $INTERFACE | $ABSTRACT},
	{"HashCodeTest$Node", "HashCodeTest", "Node", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _HashCodeTest$Edge_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"HashCodeTest$Edge",
	nullptr,
	nullptr,
	nullptr,
	_HashCodeTest$Edge_MethodInfo_,
	"<N::LHashCodeTest$Node<+LHashCodeTest$Edge<TN;>;>;>Ljava/lang/Object;",
	nullptr,
	_HashCodeTest$Edge_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HashCodeTest"
};

$Object* allocate$HashCodeTest$Edge($Class* clazz) {
	return $of($alloc(HashCodeTest$Edge));
}

$Class* HashCodeTest$Edge::load$($String* name, bool initialize) {
	$loadClass(HashCodeTest$Edge, name, initialize, &_HashCodeTest$Edge_ClassInfo_, allocate$HashCodeTest$Edge);
	return class$;
}

$Class* HashCodeTest$Edge::class$ = nullptr;