#include <java/lang/ProcessEnvironment$StringKeySet$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ProcessEnvironment$StringKeySet.h>
#include <java/lang/ProcessEnvironment$Variable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessEnvironment$ExternalData = ::java::lang::ProcessEnvironment$ExternalData;
using $ProcessEnvironment$StringKeySet = ::java::lang::ProcessEnvironment$StringKeySet;
using $ProcessEnvironment$Variable = ::java::lang::ProcessEnvironment$Variable;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;

namespace java {
	namespace lang {

$FieldInfo _ProcessEnvironment$StringKeySet$1_FieldInfo_[] = {
	{"this$0", "Ljava/lang/ProcessEnvironment$StringKeySet;", nullptr, $FINAL | $SYNTHETIC, $field(ProcessEnvironment$StringKeySet$1, this$0)},
	{"i", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/lang/ProcessEnvironment$Variable;>;", 0, $field(ProcessEnvironment$StringKeySet$1, i)},
	{}
};

$MethodInfo _ProcessEnvironment$StringKeySet$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ProcessEnvironment$StringKeySet;)V", nullptr, 0, $method(static_cast<void(ProcessEnvironment$StringKeySet$1::*)($ProcessEnvironment$StringKeySet*)>(&ProcessEnvironment$StringKeySet$1::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ProcessEnvironment$StringKeySet$1_EnclosingMethodInfo_ = {
	"java.lang.ProcessEnvironment$StringKeySet",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _ProcessEnvironment$StringKeySet$1_InnerClassesInfo_[] = {
	{"java.lang.ProcessEnvironment$StringKeySet", "java.lang.ProcessEnvironment", "StringKeySet", $PRIVATE | $STATIC},
	{"java.lang.ProcessEnvironment$StringKeySet$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProcessEnvironment$StringKeySet$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ProcessEnvironment$StringKeySet$1",
	"java.lang.Object",
	"java.util.Iterator",
	_ProcessEnvironment$StringKeySet$1_FieldInfo_,
	_ProcessEnvironment$StringKeySet$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/lang/String;>;",
	&_ProcessEnvironment$StringKeySet$1_EnclosingMethodInfo_,
	_ProcessEnvironment$StringKeySet$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessEnvironment"
};

$Object* allocate$ProcessEnvironment$StringKeySet$1($Class* clazz) {
	return $of($alloc(ProcessEnvironment$StringKeySet$1));
}

void ProcessEnvironment$StringKeySet$1::init$($ProcessEnvironment$StringKeySet* this$0) {
	$set(this, this$0, this$0);
	$set(this, i, $nc(this->this$0->s)->iterator());
}

bool ProcessEnvironment$StringKeySet$1::hasNext() {
	return $nc(this->i)->hasNext();
}

$Object* ProcessEnvironment$StringKeySet$1::next() {
	return $of($nc(($cast($ProcessEnvironment$Variable, $($nc(this->i)->next()))))->toString());
}

void ProcessEnvironment$StringKeySet$1::remove() {
	$nc(this->i)->remove();
}

ProcessEnvironment$StringKeySet$1::ProcessEnvironment$StringKeySet$1() {
}

$Class* ProcessEnvironment$StringKeySet$1::load$($String* name, bool initialize) {
	$loadClass(ProcessEnvironment$StringKeySet$1, name, initialize, &_ProcessEnvironment$StringKeySet$1_ClassInfo_, allocate$ProcessEnvironment$StringKeySet$1);
	return class$;
}

$Class* ProcessEnvironment$StringKeySet$1::class$ = nullptr;

	} // lang
} // java