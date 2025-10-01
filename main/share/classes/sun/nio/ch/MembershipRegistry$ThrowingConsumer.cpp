#include <sun/nio/ch/MembershipRegistry$ThrowingConsumer.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/nio/ch/MembershipRegistry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MembershipRegistry = ::sun::nio::ch::MembershipRegistry;

namespace sun {
	namespace nio {
		namespace ch {
$CompoundAttribute _MembershipRegistry$ThrowingConsumer_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};


$MethodInfo _MembershipRegistry$ThrowingConsumer_MethodInfo_[] = {
	{"accept", "(Ljava/lang/Object;)V", "(TT;)V^TX;", $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{}
};

$InnerClassInfo _MembershipRegistry$ThrowingConsumer_InnerClassesInfo_[] = {
	{"sun.nio.ch.MembershipRegistry$ThrowingConsumer", "sun.nio.ch.MembershipRegistry", "ThrowingConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MembershipRegistry$ThrowingConsumer_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.nio.ch.MembershipRegistry$ThrowingConsumer",
	nullptr,
	nullptr,
	nullptr,
	_MembershipRegistry$ThrowingConsumer_MethodInfo_,
	"<T:Ljava/lang/Object;X:Ljava/lang/Throwable;>Ljava/lang/Object;",
	nullptr,
	_MembershipRegistry$ThrowingConsumer_InnerClassesInfo_,
	_MembershipRegistry$ThrowingConsumer_Annotations_,
	nullptr,
	nullptr,
	"sun.nio.ch.MembershipRegistry"
};

$Object* allocate$MembershipRegistry$ThrowingConsumer($Class* clazz) {
	return $of($alloc(MembershipRegistry$ThrowingConsumer));
}

$Class* MembershipRegistry$ThrowingConsumer::load$($String* name, bool initialize) {
	$loadClass(MembershipRegistry$ThrowingConsumer, name, initialize, &_MembershipRegistry$ThrowingConsumer_ClassInfo_, allocate$MembershipRegistry$ThrowingConsumer);
	return class$;
}

$Class* MembershipRegistry$ThrowingConsumer::class$ = nullptr;

		} // ch
	} // nio
} // sun