#include <java/util/concurrent/Exchanger$Participant.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ThreadLocal.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/Exchanger$Node.h>
#include <java/util/concurrent/Exchanger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $Exchanger = ::java::util::concurrent::Exchanger;
using $Exchanger$Node = ::java::util::concurrent::Exchanger$Node;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _Exchanger$Participant_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exchanger$Participant::*)()>(&Exchanger$Participant::init$))},
	{"initialValue", "()Ljava/util/concurrent/Exchanger$Node;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Exchanger$Participant_InnerClassesInfo_[] = {
	{"java.util.concurrent.Exchanger$Participant", "java.util.concurrent.Exchanger", "Participant", $STATIC | $FINAL},
	{"java.util.concurrent.Exchanger$Node", "java.util.concurrent.Exchanger", "Node", $STATIC | $FINAL},
	{}
};

$ClassInfo _Exchanger$Participant_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.Exchanger$Participant",
	"java.lang.ThreadLocal",
	nullptr,
	nullptr,
	_Exchanger$Participant_MethodInfo_,
	"Ljava/lang/ThreadLocal<Ljava/util/concurrent/Exchanger$Node;>;",
	nullptr,
	_Exchanger$Participant_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.Exchanger"
};

$Object* allocate$Exchanger$Participant($Class* clazz) {
	return $of($alloc(Exchanger$Participant));
}

void Exchanger$Participant::init$() {
	$ThreadLocal::init$();
}

$Object* Exchanger$Participant::initialValue() {
	return $of($new($Exchanger$Node));
}

Exchanger$Participant::Exchanger$Participant() {
}

$Class* Exchanger$Participant::load$($String* name, bool initialize) {
	$loadClass(Exchanger$Participant, name, initialize, &_Exchanger$Participant_ClassInfo_, allocate$Exchanger$Participant);
	return class$;
}

$Class* Exchanger$Participant::class$ = nullptr;

		} // concurrent
	} // util
} // java