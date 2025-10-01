#include <java/util/concurrent/Flow$Publisher.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <java/util/concurrent/Flow.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Flow = ::java::util::concurrent::Flow;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;

namespace java {
	namespace util {
		namespace concurrent {
$CompoundAttribute _Flow$Publisher_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};


$MethodInfo _Flow$Publisher_MethodInfo_[] = {
	{"subscribe", "(Ljava/util/concurrent/Flow$Subscriber;)V", "(Ljava/util/concurrent/Flow$Subscriber<-TT;>;)V", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Flow$Publisher_InnerClassesInfo_[] = {
	{"java.util.concurrent.Flow$Publisher", "java.util.concurrent.Flow", "Publisher", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Flow$Publisher_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.concurrent.Flow$Publisher",
	nullptr,
	nullptr,
	nullptr,
	_Flow$Publisher_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_Flow$Publisher_InnerClassesInfo_,
	_Flow$Publisher_Annotations_,
	nullptr,
	nullptr,
	"java.util.concurrent.Flow"
};

$Object* allocate$Flow$Publisher($Class* clazz) {
	return $of($alloc(Flow$Publisher));
}

$Class* Flow$Publisher::load$($String* name, bool initialize) {
	$loadClass(Flow$Publisher, name, initialize, &_Flow$Publisher_ClassInfo_, allocate$Flow$Publisher);
	return class$;
}

$Class* Flow$Publisher::class$ = nullptr;

		} // concurrent
	} // util
} // java