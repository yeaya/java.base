#include <java/util/stream/Nodes$ToArrayTask$OfRef.h>

#include <java/util/stream/Node.h>
#include <java/util/stream/Nodes$ToArrayTask.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::java::util::stream::Node;
using $Nodes$ToArrayTask = ::java::util::stream::Nodes$ToArrayTask;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Nodes$ToArrayTask$OfRef_FieldInfo_[] = {
	{"array", "[Ljava/lang/Object;", "[TT;", $PRIVATE | $FINAL, $field(Nodes$ToArrayTask$OfRef, array)},
	{}
};

$MethodInfo _Nodes$ToArrayTask$OfRef_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/Node;[Ljava/lang/Object;I)V", "(Ljava/util/stream/Node<TT;>;[TT;I)V", $PRIVATE, $method(Nodes$ToArrayTask$OfRef, init$, void, $Node*, $ObjectArray*, int32_t)},
	{"<init>", "(Ljava/util/stream/Nodes$ToArrayTask$OfRef;Ljava/util/stream/Node;I)V", "(Ljava/util/stream/Nodes$ToArrayTask$OfRef<TT;>;Ljava/util/stream/Node<TT;>;I)V", $PRIVATE, $method(Nodes$ToArrayTask$OfRef, init$, void, Nodes$ToArrayTask$OfRef*, $Node*, int32_t)},
	{"copyNodeToArray", "()V", nullptr, 0, $virtualMethod(Nodes$ToArrayTask$OfRef, copyNodeToArray, void)},
	{"makeChild", "(II)Ljava/util/stream/Nodes$ToArrayTask$OfRef;", "(II)Ljava/util/stream/Nodes$ToArrayTask$OfRef<TT;>;", 0, $virtualMethod(Nodes$ToArrayTask$OfRef, makeChild, Nodes$ToArrayTask$OfRef*, int32_t, int32_t)},
	{}
};

$InnerClassInfo _Nodes$ToArrayTask$OfRef_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$ToArrayTask", "java.util.stream.Nodes", "ToArrayTask", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.Nodes$ToArrayTask$OfRef", "java.util.stream.Nodes$ToArrayTask", "OfRef", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Nodes$ToArrayTask$OfRef_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.Nodes$ToArrayTask$OfRef",
	"java.util.stream.Nodes$ToArrayTask",
	nullptr,
	_Nodes$ToArrayTask$OfRef_FieldInfo_,
	_Nodes$ToArrayTask$OfRef_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/stream/Nodes$ToArrayTask<TT;Ljava/util/stream/Node<TT;>;Ljava/util/stream/Nodes$ToArrayTask$OfRef<TT;>;>;",
	nullptr,
	_Nodes$ToArrayTask$OfRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$ToArrayTask$OfRef($Class* clazz) {
	return $of($alloc(Nodes$ToArrayTask$OfRef));
}

void Nodes$ToArrayTask$OfRef::init$($Node* node, $ObjectArray* array, int32_t offset) {
	$Nodes$ToArrayTask::init$(node, offset);
	$set(this, array, array);
}

void Nodes$ToArrayTask$OfRef::init$(Nodes$ToArrayTask$OfRef* parent, $Node* node, int32_t offset) {
	$Nodes$ToArrayTask::init$(parent, node, offset);
	$set(this, array, $nc(parent)->array);
}

Nodes$ToArrayTask$OfRef* Nodes$ToArrayTask$OfRef::makeChild(int32_t childIndex, int32_t offset) {
	return $new(Nodes$ToArrayTask$OfRef, this, $($nc(this->node)->getChild(childIndex)), offset);
}

void Nodes$ToArrayTask$OfRef::copyNodeToArray() {
	$nc(this->node)->copyInto(this->array, this->offset);
}

Nodes$ToArrayTask$OfRef::Nodes$ToArrayTask$OfRef() {
}

$Class* Nodes$ToArrayTask$OfRef::load$($String* name, bool initialize) {
	$loadClass(Nodes$ToArrayTask$OfRef, name, initialize, &_Nodes$ToArrayTask$OfRef_ClassInfo_, allocate$Nodes$ToArrayTask$OfRef);
	return class$;
}

$Class* Nodes$ToArrayTask$OfRef::class$ = nullptr;

		} // stream
	} // util
} // java