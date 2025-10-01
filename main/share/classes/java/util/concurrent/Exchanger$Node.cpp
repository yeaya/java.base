#include <java/util/concurrent/Exchanger$Node.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/Exchanger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Exchanger = ::java::util::concurrent::Exchanger;

namespace java {
	namespace util {
		namespace concurrent {
$CompoundAttribute _Exchanger$Node_Annotations_[] = {
	{"Ljdk/internal/vm/annotation/Contended;", nullptr},
	{}
};


$FieldInfo _Exchanger$Node_FieldInfo_[] = {
	{"index", "I", nullptr, 0, $field(Exchanger$Node, index)},
	{"bound", "I", nullptr, 0, $field(Exchanger$Node, bound)},
	{"collides", "I", nullptr, 0, $field(Exchanger$Node, collides)},
	{"hash", "I", nullptr, 0, $field(Exchanger$Node, hash)},
	{"item", "Ljava/lang/Object;", nullptr, 0, $field(Exchanger$Node, item)},
	{"match", "Ljava/lang/Object;", nullptr, $VOLATILE, $field(Exchanger$Node, match)},
	{"parked", "Ljava/lang/Thread;", nullptr, $VOLATILE, $field(Exchanger$Node, parked)},
	{}
};

$MethodInfo _Exchanger$Node_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exchanger$Node::*)()>(&Exchanger$Node::init$))},
	{}
};

$InnerClassInfo _Exchanger$Node_InnerClassesInfo_[] = {
	{"java.util.concurrent.Exchanger$Node", "java.util.concurrent.Exchanger", "Node", $STATIC | $FINAL},
	{}
};

$ClassInfo _Exchanger$Node_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.Exchanger$Node",
	"java.lang.Object",
	nullptr,
	_Exchanger$Node_FieldInfo_,
	_Exchanger$Node_MethodInfo_,
	nullptr,
	nullptr,
	_Exchanger$Node_InnerClassesInfo_,
	_Exchanger$Node_Annotations_,
	nullptr,
	nullptr,
	"java.util.concurrent.Exchanger"
};

$Object* allocate$Exchanger$Node($Class* clazz) {
	return $of($alloc(Exchanger$Node));
}

void Exchanger$Node::init$() {
}

Exchanger$Node::Exchanger$Node() {
}

$Class* Exchanger$Node::load$($String* name, bool initialize) {
	$loadClass(Exchanger$Node, name, initialize, &_Exchanger$Node_ClassInfo_, allocate$Exchanger$Node);
	return class$;
}

$Class* Exchanger$Node::class$ = nullptr;

		} // concurrent
	} // util
} // java