#include <KeySets$Adder.h>

#include <KeySets.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $KeySets = ::KeySets;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _KeySets$Adder_MethodInfo_[] = {
	{"add", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _KeySets$Adder_InnerClassesInfo_[] = {
	{"KeySets$Adder", "KeySets", "Adder", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _KeySets$Adder_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"KeySets$Adder",
	nullptr,
	nullptr,
	nullptr,
	_KeySets$Adder_MethodInfo_,
	nullptr,
	nullptr,
	_KeySets$Adder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"KeySets"
};

$Object* allocate$KeySets$Adder($Class* clazz) {
	return $of($alloc(KeySets$Adder));
}

$Class* KeySets$Adder::load$($String* name, bool initialize) {
	$loadClass(KeySets$Adder, name, initialize, &_KeySets$Adder_ClassInfo_, allocate$KeySets$Adder);
	return class$;
}

$Class* KeySets$Adder::class$ = nullptr;