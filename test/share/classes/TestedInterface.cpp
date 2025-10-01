#include <TestedInterface.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _TestedInterface_FieldInfo_[] = {
	{"s", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TestedInterface, s)},
	{}
};

$MethodInfo _TestedInterface_MethodInfo_[] = {
	{"bar", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"foo", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TestedInterface_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"TestedInterface",
	nullptr,
	nullptr,
	_TestedInterface_FieldInfo_,
	_TestedInterface_MethodInfo_
};

$Object* allocate$TestedInterface($Class* clazz) {
	return $of($alloc(TestedInterface));
}

$String* TestedInterface::s = nullptr;

void clinit$TestedInterface($Class* class$) {
	$assignStatic(TestedInterface::s, $System::getProperty("Test"_s));
}

$Class* TestedInterface::load$($String* name, bool initialize) {
	$loadClass(TestedInterface, name, initialize, &_TestedInterface_ClassInfo_, clinit$TestedInterface, allocate$TestedInterface);
	return class$;
}

$Class* TestedInterface::class$ = nullptr;