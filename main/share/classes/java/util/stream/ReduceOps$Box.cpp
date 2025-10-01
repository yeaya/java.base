#include <java/util/stream/ReduceOps$Box.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/stream/ReduceOps.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReduceOps = ::java::util::stream::ReduceOps;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReduceOps$Box_FieldInfo_[] = {
	{"state", "Ljava/lang/Object;", "TU;", 0, $field(ReduceOps$Box, state)},
	{}
};

$MethodInfo _ReduceOps$Box_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ReduceOps$Box::*)()>(&ReduceOps$Box::init$))},
	{"get", "()Ljava/lang/Object;", "()TU;", $PUBLIC},
	{}
};

$InnerClassInfo _ReduceOps$Box_InnerClassesInfo_[] = {
	{"java.util.stream.ReduceOps$Box", "java.util.stream.ReduceOps", "Box", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ReduceOps$Box_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.ReduceOps$Box",
	"java.lang.Object",
	nullptr,
	_ReduceOps$Box_FieldInfo_,
	_ReduceOps$Box_MethodInfo_,
	"<U:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_ReduceOps$Box_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReduceOps"
};

$Object* allocate$ReduceOps$Box($Class* clazz) {
	return $of($alloc(ReduceOps$Box));
}

void ReduceOps$Box::init$() {
}

$Object* ReduceOps$Box::get() {
	return $of(this->state);
}

ReduceOps$Box::ReduceOps$Box() {
}

$Class* ReduceOps$Box::load$($String* name, bool initialize) {
	$loadClass(ReduceOps$Box, name, initialize, &_ReduceOps$Box_ClassInfo_, allocate$ReduceOps$Box);
	return class$;
}

$Class* ReduceOps$Box::class$ = nullptr;

		} // stream
	} // util
} // java