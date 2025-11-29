#include <java/lang/ProcessEnvironment$StringValues$1.h>

#include <java/lang/ProcessEnvironment$StringValues.h>
#include <java/lang/ProcessEnvironment$Value.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessEnvironment$StringValues = ::java::lang::ProcessEnvironment$StringValues;
using $ProcessEnvironment$Value = ::java::lang::ProcessEnvironment$Value;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace lang {

$FieldInfo _ProcessEnvironment$StringValues$1_FieldInfo_[] = {
	{"this$0", "Ljava/lang/ProcessEnvironment$StringValues;", nullptr, $FINAL | $SYNTHETIC, $field(ProcessEnvironment$StringValues$1, this$0)},
	{"i", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/lang/ProcessEnvironment$Value;>;", 0, $field(ProcessEnvironment$StringValues$1, i)},
	{}
};

$MethodInfo _ProcessEnvironment$StringValues$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ProcessEnvironment$StringValues;)V", nullptr, 0, $method(static_cast<void(ProcessEnvironment$StringValues$1::*)($ProcessEnvironment$StringValues*)>(&ProcessEnvironment$StringValues$1::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ProcessEnvironment$StringValues$1_EnclosingMethodInfo_ = {
	"java.lang.ProcessEnvironment$StringValues",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _ProcessEnvironment$StringValues$1_InnerClassesInfo_[] = {
	{"java.lang.ProcessEnvironment$StringValues", "java.lang.ProcessEnvironment", "StringValues", $PRIVATE | $STATIC},
	{"java.lang.ProcessEnvironment$StringValues$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProcessEnvironment$StringValues$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ProcessEnvironment$StringValues$1",
	"java.lang.Object",
	"java.util.Iterator",
	_ProcessEnvironment$StringValues$1_FieldInfo_,
	_ProcessEnvironment$StringValues$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/lang/String;>;",
	&_ProcessEnvironment$StringValues$1_EnclosingMethodInfo_,
	_ProcessEnvironment$StringValues$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessEnvironment"
};

$Object* allocate$ProcessEnvironment$StringValues$1($Class* clazz) {
	return $of($alloc(ProcessEnvironment$StringValues$1));
}

void ProcessEnvironment$StringValues$1::init$($ProcessEnvironment$StringValues* this$0) {
	$set(this, this$0, this$0);
	$set(this, i, $nc(this->this$0->c)->iterator());
}

bool ProcessEnvironment$StringValues$1::hasNext() {
	return $nc(this->i)->hasNext();
}

$Object* ProcessEnvironment$StringValues$1::next() {
	return $of($nc(($cast($ProcessEnvironment$Value, $($nc(this->i)->next()))))->toString());
}

void ProcessEnvironment$StringValues$1::remove() {
	$nc(this->i)->remove();
}

ProcessEnvironment$StringValues$1::ProcessEnvironment$StringValues$1() {
}

$Class* ProcessEnvironment$StringValues$1::load$($String* name, bool initialize) {
	$loadClass(ProcessEnvironment$StringValues$1, name, initialize, &_ProcessEnvironment$StringValues$1_ClassInfo_, allocate$ProcessEnvironment$StringValues$1);
	return class$;
}

$Class* ProcessEnvironment$StringValues$1::class$ = nullptr;

	} // lang
} // java